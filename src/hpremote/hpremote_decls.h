#ifndef HPREMOTE_DECLS_H
#define HPREMOTE_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00002080_s {
    u8 pad0[0x120];
    volatile s32 unk120;
    u8 pad124[0xA0];
    volatile s32 unk1C4;
    volatile s32 unk1C8;
    volatile s32 unk1CC;
    volatile s32 unk1D0;
    volatile s32 unk1D4;
    volatile s32 unk1D8;
};

extern s32 D_00002078;
extern struct D_00002080_s D_00002080;
extern s32 D_0000213C;
extern s8 D_00002141;
extern s8 D_00002142;
extern s8 D_00002143;
extern u8 D_00002176;
extern s32 D_00002198;
extern u8 D_00002226;
extern s32 D_00002244_v330;
extern s32 D_00002244_v340;
extern s32 D_0000225C;
extern s8 D_00002261;
extern s8 D_00002262;
extern s8 D_00002263;
extern s32 D_000022B0;
extern s32 D_000025B4;
extern s8 D_0000263C;

s32 func_0000030C(void);
s32 func_00000AE4(void);
s32 func_00000AF4(void);
s32 func_00001250(s32 arg0);
s32 func_0000134C(s32 arg0);
void func_000016EC(s8 arg0);
s32 func_00001924(void);
s32 module_start(void);
s32 sceHprmIsHeadphoneExist(void);
s32 sceHprmIsMicrophoneExist(void);
s32 sceHprmIsRemoteExist(void);
s32 sceHprmInit(void);
s32 sceHprmResume(void);
s32 sceHprmReset(void);
s32 sceHprmSuspend(void);
u8 sceHprmGetHpDetect(void);
s32 sceHprmGetInternalState(M2C_UNK **arg0);
s32 sceHprmGetIdleCancelKey(s32 *arg0);
s32 sceHprmGetCableType(void);
s32 sceHprmSetIdleCancelKey(s32 arg0);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelSetEventFlag(s32, u32);
M2C_UNK sceSysregUartClkEnable(M2C_UNK);
M2C_UNK sceSysregUartIoDisable(M2C_UNK);

#endif
