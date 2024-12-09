//
// kernel.cpp
//
#include "kernel.h"
#include <circle/util.h>
#include <assert.h>
#include <circle/machineinfo.h>

static const char FromKernel[] = "kernel";

CKernel::CKernel (void)
:	
	m_Timer (&m_Interrupt),
	m_Logger (m_Options.GetLogLevel (), &m_Timer),
	m_I2CMaster (0, false, 0)
{
	// m_ActLED.Blink (5);	// show we are alive
}

CKernel::~CKernel (void)
{
}

boolean CKernel::Initialize (void)
{
	boolean bOK = TRUE;

	if (bOK)
	{
		bOK = m_Serial.Initialize (115200);
	}

	if (bOK)
	{
		m_Logger.Initialize(&m_Serial);
	}

	if (bOK)
	{
		bOK = m_Interrupt.Initialize ();
	}

	if (bOK)
	{
		bOK = m_Timer.Initialize ();
	}

	if (bOK)
	{
		bOK = m_I2CMaster.Initialize ();
		// u8 Buffer[1] = {0};
		// int ret = m_I2CMaster.Write(0x1A, Buffer, 1);
		// m_Logger.Write (FromKernel, LogNotice, "m_I2CMaster.Write returned %d", ret);
	}

	m_Logger.Write (FromKernel, LogNotice, "Compile time: " __DATE__ " " __TIME__);
	m_Timer.MsDelay(1000);

	m_pSound = new CAudio (&m_Interrupt, &m_I2CMaster);

	m_Logger.Write (FromKernel, LogNotice, "CAudio initialized");

	return bOK;
}

TShutdownMode CKernel::Run (void)
{

	if (!m_pSound->Start ()){
		m_Logger.Write (FromKernel, LogPanic, "Cannot start sound device");
	} else {
		m_Logger.Write (FromKernel, LogNotice, "Started sound device");
	}

	while(1){
		// m_Logger.Write (FromKernel, LogNotice, "is2 active: %s", m_pSound->IsActive() ? "true" : "false");
		m_Timer.MsDelay(1000);
	}

	return ShutdownHalt;
}