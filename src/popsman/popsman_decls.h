#ifndef POPSMAN_DECLS_H
#define POPSMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK *D_00003A80;
extern M2C_UNK D_00003A84;
extern s32 D_00003AC4;
extern M2C_UNK D_00003B18;
extern M2C_UNK D_00003BEC;

s32 func_0000032C(void);
void func_000003E8(void);
M2C_UNK *func_000005DC(void);
s32 func_0000061C(void);
s32 func_00001008(void);
s32 func_00001D70(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_start(void);
void sceAudioChRelease(void);
void sceAudioChReserve(void);
void sceAudioChangeChannelConfig(void);
void sceAudioChangeChannelVolume(void);
void sceAudioGetChannelRestLength(void);
void sceAudioInput(void);
void sceAudioInputBlocking(void);
void sceAudioInputInit(void);
void sceAudioInputInitEx(void);
void sceAudioOutput(void);
void sceAudioOutput2ChangeLength(void);
void sceAudioOutput2OutputBlocking(void);
void sceAudioOutput2Reserve(void);
void sceAudioOutputBlocking(void);
void sceAudioOutputPanned(void);
void sceAudioOutputPannedBlocking(void);
void sceAudioSetChannelDataLen(void);
void sceAudio_38553111(void);
void sceAudio_41EFADE7(void);
void sceAudio_5C37C0AE(void);
void sceAudio_E0727056(void);
void sceAudio_E9D97901(void);
u32 sceGeEdramGetSize(void);
M2C_UNK sceGe_driver_5BAA5439(M2C_UNK);
s32 sceIoClose(s32);
s32 sceKernelDelayThread(u32);
void sceMeAudio_05115756(void);
void sceMeAudio_1AF750F2(void);
void sceMeAudio_5B571930(void);
void sceMeAudio_5EDA8D33(void);
void sceMeAudio_7EFCF769(void);
void sceMeAudio_94DCC979(void);
void sceMeAudio_A345F290(void);
void sceMeAudio_E2ECB299(void);
void sceMeAudio_EDD2B615(void);
s32 scePopsMan_03971322(void);
void scePopsMan_4F7628CC(void);
s32 scePopsMan_driver_04B14718(void);
s32 scePopsMan_driver_8666B52F(void);
s32 scePopsMan_driver_F74199F8(void);
M2C_UNK sceSysEventForKernel_CD9E4BB5(M2C_UNK *);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_8BE2D520();
s32 sceSysreg_driver_9FC87ED4();

#endif
