#ifndef DISPLAY_DECLS_H
#define DISPLAY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00003DB0_s {
    u8 pad0[0x60];
    volatile s32 unk60;
};

struct D_00003EC8_s {
    u8 pad0[0x20];
    volatile s32 unk20;
};

extern s32 D_00002060;
extern s32 D_000020D0;
extern M2C_UNK D_00002150;
extern s32 D_000021CC;
extern s32 D_000021E0;
extern s32 D_000021EC;
extern s32 D_000021F0;
extern s8 D_00002CB0;
extern s32 D_00002CE4;
extern s8 D_00003675;
extern s32 D_000036C0;
extern M2C_UNK D_00003D10;
extern struct D_00003DB0_s D_00003DB0;
extern s8 D_00003E14;
extern s8 D_00003E1A;
extern s32 D_00003EB0;
extern struct D_00003EC8_s D_00003EC8;
extern s32 D_00003EE8;
extern s32 D_00003EF0;
extern s32 D_00003EF4;
extern s32 D_00003EF8;

M2C_UNK Kprintf(M2C_UNK *, M2C_UNK *, s32);
s32 func_00000658(void);
s32 func_000009F8(void);
s32 func_000013B4(s32 *arg0);
s32 func_000016F4(void);
s32 func_00001728(void);
s32 func_00001748(void);
s32 func_000021C8(void);
s32 func_000023B8(void);
s32 func_00002A64(void);
s32 func_00002AA0(void);
s32 func_00002B20(s32 arg0);
s32 func_0000315C(void);
s32 module_start(void);
s32 sceDisplayEnd(void);
s32 sceDisplayGetCurrentHcount(void);
s8 sceDisplayGetForegroundLevel(void);
s32 sceDisplayGetFrameBuf(void *arg0, void *arg1, void *arg2, s32 arg3);
void sceDisplayGetFramePerSec(void);
s32 sceDisplayGetVblankRest(void);
s32 sceDisplayGetVcount(void);
s32 sceDisplayInit(void);
s32 sceDisplayIsForeground(void);
s32 sceDisplayIsPseudoField(void);
s32 sceDisplayIsVblank(void);
s32 sceDisplaySetFrameBuf(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceDisplaySetHoldMode(s32 arg0);
s32 sceDisplaySetResumeMode(s32 arg0);
s32 sceDisplayWaitVblankStart(void);
s32 sceDisplayWaitVblankStartCB(void);
s8 sceDisplay_driver_23CE8C51(void);
s32 sceDisplay_driver_5B5AEFAD(s32, s32, s32, s32, s32);
s32 sceDisplay_driver_63E22A26(s32, s32, s32, s32, s32);
s32 sceDisplay_driver_66961521(void);
void * sceGeEdramGetAddr(void);
u32 sceGeEdramGetSize(void);
s32 sceGeEdramSetAddrTranslation(s32);
M2C_UNK sceGeEdramSetSize(s32);
s32 sceGeEdramGetHwSize();
void sceKernelDcacheWritebackAll(void);
s32 sceKernelDeleteEventFlag(s32);
M2C_UNK sceKernelDisableIntr(M2C_UNK);
s32 sceKernelInitApitype();
M2C_UNK sceKernelMemset32(void *, M2C_UNK, s32);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
s32 sceKernelWaitEventFlagCB(s32, u32, s32, void *, void *);
M2C_UNK sceLcdcGetVsyncFreq();
M2C_UNK sceSysregApbTimerClkDisable(M2C_UNK);
M2C_UNK sceSysregVblankIRQPolar(M2C_UNK);

#endif
