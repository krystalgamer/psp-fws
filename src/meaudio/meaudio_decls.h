#ifndef MEAUDIO_DECLS_H
#define MEAUDIO_DECLS_H

#include "common.h"
#include "m2c_macros.h"


void sceAudioChRelease(void);
void sceAudioChReserve(void);
void sceAudioChangeChannelConfig(void);
void sceAudioChangeChannelVolume(void);
void sceAudioGetChannelRestLength(void);
void sceAudioGetInputLength(void);
void sceAudioInput(void);
void sceAudioInputBlocking(void);
void sceAudioInputInit(void);
void sceAudioInputInitEx(void);
void sceAudioOutput(void);
void sceAudioOutput2ChangeLength(void);
void sceAudioOutput2GetRestSample(void);
void sceAudioOutput2OutputBlocking(void);
void sceAudioOutput2Release(void);
void sceAudioOutput2Reserve(void);
void sceAudioOutputBlocking(void);
void sceAudioOutputPanned(void);
void sceAudioOutputPannedBlocking(void);
void sceAudioPollInputEnd(void);
void sceAudioSetChannelDataLen(void);
void sceAudioWaitInputEnd(void);
void sceAudio_38553111(void);
void sceAudio_41EFADE7(void);
void sceAudio_5C37C0AE(void);
void sceAudio_E0727056(void);
void sceAudio_E9D97901(void);
s32 sceKernelDelayThread(u32);
void sceMeAudio_05115756(void);
void sceMeAudio_5EDA8D33(void);
M2C_UNK sceSysreg_driver_8BE2D520();
s32 sceSysreg_driver_9FC87ED4();

#endif
