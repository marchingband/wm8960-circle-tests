#include <circle/timer.h>
#include <circle/synchronize.h>
#include <circle/memory.h>
#include <circle/logger.h>
#include <assert.h>
#include <circle/sound/i2ssoundbasedevice.h>
#include <circle/logger.h>
#include <stdlib.h>

#include "greyhole.h"
#include "audio.hpp"
#include "kernel.h"


static const char FromAudioDevice[] = "audio_device";
mydsp *dsp;

void extract(const char *name, float *p, float init, float min, float max, float step){};
void declare(struct UIGlue *uiInterface, float *p, const char* key, const char* val){};
void openVerticalBox(struct UIGlue *uiInterface, char* key){};
void openHorizontalBox(struct UIGlue *uiInterface, char* key){};
void closeBox(struct UIGlue *uiInterface){};
void addVerticalBargraph(struct UIGlue *uiInterface, const char *name, float *p, float f1, float f2){};
void addButton(struct UIGlue *uiInterface, const char *name, float *p){extract(name, p, 0, 0, 0, 0);};
void addVerticalSlider(struct UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step){extract(name, p, init, min, max, step);};
void addHorizontalSlider(struct UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step){extract(name, p, init, min, max, step);};
void addNumEntry(struct UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step){extract(name, p, init, min, max, step);};

UIGlue ui_glue = {
    NULL,
    openVerticalBox,
    openHorizontalBox,
    closeBox,
    declare,
    addVerticalSlider,
    addHorizontalSlider,
    addNumEntry,
    addVerticalBargraph,
    addButton
};

#define SAMPLE_RATE 48000
// #define CHUNK_SIZE (1024 * 10)
// #define CHUNK_SIZE (1024 * 2)
// #define CHUNK_SIZE 1024
#define CHUNK_SIZE 256
// #define CHUNK_SIZE 128
#define I2C_ADDRESS 0x1A

CAudio::CAudio(CInterruptSystem *pInterrupt, CI2CMaster *pI2CMaster)
:   CI2SSoundBaseDevice (pInterrupt, SAMPLE_RATE, CHUNK_SIZE, FALSE, pI2CMaster, I2C_ADDRESS, CI2SSoundBaseDevice::DeviceModeTXRX, 2U)
{
    CLogger::Get ()->Write (FromAudioDevice, LogDebug, "CAudio constructor start");
    dsp = newmydsp();
    CLogger::Get ()->Write (FromAudioDevice, LogDebug, "dsp %s", dsp == NULL ? "NULL" : "NOT NULL");
    initmydsp(dsp, SAMPLE_RATE);
    buildUserInterfacemydsp(dsp, &ui_glue);
    CLogger::Get ()->Write (FromAudioDevice, LogDebug, "CAudio constructor");
}

CAudio::~CAudio(void)
{
    CLogger::Get ()->Write (FromAudioDevice, LogDebug, "CAudio destructor");
}

u32 tos24(s32 in){
    bool neg = in < 0;
    in &= 0x7FFFFF;
    if(neg){
        in |= 0x800000;
    }
    return in;
}

void CAudio::Process ()
{
    CSoundController *pController = GetController ();
    if (!pController){
        CLogger::Get ()->Write (FromAudioDevice, LogDebug, "no controller");
    } else {
        CLogger::Get ()->Write (FromAudioDevice, LogDebug, "got controller");

        // volume default
        CSoundController::TControlInfo Info = pController->GetControlInfo ( CSoundController::ControlVolume, CSoundController::JackDefaultOut, CSoundController::ChannelAll);
        if (!Info.Supported){
            CLogger::Get ()->Write (FromAudioDevice, LogDebug, "ControlVolume  JackDefaultOut not supported");
        } else {
            CLogger::Get ()->Write (FromAudioDevice, LogDebug, "ControlVolume  JackDefaultOut supported");
            int nVolume = 126;
            nVolume *= Info.RangeMax - Info.RangeMin;
            nVolume /= 127;
            nVolume += Info.RangeMin;
            pController->SetControl (CSoundController::ControlVolume, CSoundController::JackDefaultOut, CSoundController::ChannelAll, nVolume);
        }

        // volume headphones
        Info = pController->GetControlInfo ( CSoundController::ControlVolume, CSoundController::JackHeadphone, CSoundController::ChannelAll);
        if (!Info.Supported){
            CLogger::Get ()->Write (FromAudioDevice, LogDebug, "ControlVolume  JackHeadphone not supported");
        } else {
            CLogger::Get ()->Write (FromAudioDevice, LogDebug, "ControlVolume  JackHeadphone supported");
            int nVolume = 126;
            nVolume *= Info.RangeMax - Info.RangeMin;
            nVolume /= 127;
            nVolume += Info.RangeMin;
            pController->SetControl (CSoundController::ControlVolume, CSoundController::JackHeadphone, CSoundController::ChannelAll, nVolume);
        }

        // ALC
        Info = pController->GetControlInfo ( CSoundController::ControlALC, CSoundController::JackDefaultOut, CSoundController::ChannelAll);
        if (!Info.Supported){
            CLogger::Get ()->Write (FromAudioDevice, LogDebug, "ALC not supported");
        } else {
            CLogger::Get ()->Write (FromAudioDevice, LogDebug, "ALC supported");
        }

        // outputs
        bool ret = pController->EnableJack(CSoundController::JackHeadphone);
        if(!ret){
            CLogger::Get ()->Write (FromAudioDevice, LogDebug, " EnableJack failed to enable headphones");
        } else {
            CLogger::Get ()->Write (FromAudioDevice, LogDebug, "EnableJack enabled headphones");
        }
    }
}

#define BUF_SIZE CHUNK_SIZE

static u32 buf_in_a[BUF_SIZE] = {0};
static u32 buf_in_b[BUF_SIZE] = {0};
static u32 buf_out_a[BUF_SIZE] = {0};
static u32 buf_out_b[BUF_SIZE] = {0};
static bool in_p = false;
static bool out_p = false;

void CAudio::PutChunk (const u32 *pBuffer, unsigned nChunkSize)
{
    u32 max = 0;
    // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "start PutChunk");
    if(in_p == false){
        for(int i=0; i<BUF_SIZE; i++){
            buf_in_a[i] = pBuffer[i];
            if(pBuffer[i] > max){
                max = pBuffer[i];
            }
        }
        in_p = true;
        // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "read %d to buf_a, max is %u, first is %u", nChunkSize, max, pBuffer[0]);
    } else {
        for(int i=0; i<BUF_SIZE; i++){
            buf_in_b[i] = pBuffer[i];
            if(pBuffer[i] > max){
                max = pBuffer[i];
            }
        }
        in_p = false;
        // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "read %d to buf_b, max is %u, first is %u ", nChunkSize, max, pBuffer[0]);
    }
}

float **inBuffers = NULL;
float **outBuffers = NULL;

int32_t u32_to_s24(uint32_t value) {
    if (value & 0x800000) { // Check if the 23rd bit (sign bit) is set
        return (int32_t)(value | 0xFF000000); // Sign-extend to 32 bits
    } else {
        return (int32_t)(value & 0xFFFFFF); // Mask to lower 24 bits
    }
}

unsigned CAudio::GetChunk (u32 *pBuffer, unsigned nChunkSize)
{
    u32 max = 0;

    // if(in_p == false){
    //     for(int i=0; i<BUF_SIZE; i++){
    //         pBuffer[i] = buf_in_b[i];
    //         if(buf_in_b[i] > max){
    //             max = buf_in_b[i];
    //         }
    //     }
    //     // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "sent %d samples, max is %u, first is %u", nChunkSize, max, buf_in_b[0]);
    // } else {
    //     for(int i=0; i<BUF_SIZE; i++){
    //         pBuffer[i] = buf_in_a[i];
    //         if(buf_in_a[i] > max){
    //             max = buf_in_a[i];
    //         }
    //     }
    //     // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "sent %d samples, max is %u, first is %u", nChunkSize, max, buf_in_a[0]);
    // }


    // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "start GetChunk");
    int numFrames = CHUNK_SIZE / 2;

    if(inBuffers == NULL){
        // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "allocate buffers");
        inBuffers = (float **) malloc(2 * sizeof(float *));
        outBuffers = (float **) malloc(2 * sizeof(float *));

        for (int i = 0; i < 2; ++i) {
            inBuffers[i] = (float *) malloc(numFrames * sizeof(float));
            outBuffers[i] = (float *) malloc(numFrames * sizeof(float));
        }
    }

    if(in_p == false){
        for(int i=0; i<numFrames; i++){
            inBuffers[0][i] = (float)(u32_to_s24(buf_in_b[i*2])) / 8388607.0f;
            inBuffers[1][i] = (float)(u32_to_s24(buf_in_b[i*2+1])) / 8388607.0f;
        }
    } else {
        for(int i=0; i<numFrames; i++){
            inBuffers[0][i] = (float)(u32_to_s24(buf_in_a[i*2])) / 8388607.0f;
            inBuffers[1][i] = (float)(u32_to_s24(buf_in_a[i*2+1])) / 8388607.0f;
        }
    }
    computemydsp(dsp, numFrames, inBuffers, outBuffers);
    for(int i=0; i<numFrames; i++){
        pBuffer[i*2]    = (u32)(((s32)(outBuffers[0][i] * INT32_MAX)) >> 8);
        pBuffer[i*2+1]  = (u32)(((s32)(outBuffers[1][i] * INT32_MAX)) >> 8);
    }
    // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "sent %d samples, max is %u", nChunkSize, max);


    // int min = GetRangeMin();
    // int max = GetRangeMax();
    // float scale = 0.2;

    // int numFrames = nChunkSize / 2;

    // // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "GetRangeMin = %d", min);
    // // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "GetRangeMax = %d", max);

    // float **outBuffers = (float **) malloc(2 * sizeof(float *));
    // for (int i = 0; i < 2; ++i) {
    //     outBuffers[i] = (float *) malloc(numFrames * sizeof(float));
    // }
    // // if(outBuffers == NULL){
    // //     CLogger::Get ()->Write (FromAudioDevice, LogDebug, "GetRangeMin = %d", min);
    // //     CLogger::Get ()->Write (FromAudioDevice, LogDebug, "GetRangeMax = %d", max);

    // //     outBuffers = (float **) malloc(2 * sizeof(float *));
    // //     for (int i = 0; i < 2; ++i) {
    // //         outBuffers[i] = (float *) malloc(numFrames * sizeof(float));
    // //     }
    // // }

    // computemydsp(dsp, numFrames, NULL, outBuffers);

    // for(int i=0; i<nChunkSize/2; i++){
    //     s32 left = (outBuffers[0][i] * scale * max);
    //     s32 right = (outBuffers[1][i] * scale * max);
    //     pBuffer[i * 2] = tos24(left);
    //     pBuffer[i * 2 + 1] = tos24(right);
    // }
    // // for(int i=0; i<nChunkSize; i++){
    //     // pBuffer[i] = 0;
    // // }

    // CLogger::Get ()->Write (FromAudioDevice, LogDebug, "CAudio::GetChunk sent %d samples", nChunkSize);

    return nChunkSize;
}
