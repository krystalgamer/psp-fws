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
void sceAudioSRCChReserve(void);
void sceAudioOneshotOutput(void);
void sceAudioSRCChRelease(void);
void sceAudioSRCOutputBlocking(void);
void sceAudioGetChannelRestLen(void);
u32 sceGeEdramGetSize(void);
M2C_UNK sceGeEdramSetSize(M2C_UNK);
s32 sceIoClose(s32);
s32 sceKernelDelayThread(u32);
void sceMeAudioScUnlock(void);
void sceMeAudioScUnlockv33(void);
void sceMeAudioScUnlockv34(void);
void sceMeAudioScLock(void);
void sceMeAudioScUnlockv35(void);
void sceMeAudioScLockv34(void);
void sceMeAudioScLockv35(void);
void sceMeAudioScLockv352(void);
void sceMeAudioScLockv33(void);
s32 scePopsManDocClose(void);
void scePopsManGetEdramSize(void);
s32 scePopsManEnd(void);
s32 scePopsManSuspend(void);
s32 scePopsManResume(void);
M2C_UNK sceKernelRegisterSysEventHandler(M2C_UNK *);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
M2C_UNK sceSysregSemaUnlock();
s32 sceSysregSemaTryLock();

#endif
