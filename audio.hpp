
#ifndef PD_DEVICE_H
#define PD_DEVICE_H

#include <circle/sound/i2ssoundbasedevice.h>

class CAudio : public CI2SSoundBaseDevice
{
public:
    CAudio(CInterruptSystem *pInterrupt, CI2CMaster *pI2CMaster);
    ~CAudio(void);
    unsigned GetChunk (u32 *pBuffer, unsigned nChunkSize);
    void PutChunk (const u32 *pBuffer, unsigned nChunkSize);
    void Process(void);
};

#endif