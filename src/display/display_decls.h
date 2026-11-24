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

extern M2C_UNK D_00002060;
extern s32 D_000020D0;
extern M2C_UNK D_00002150;
extern s32 D_000021CC;
extern s32 D_000021E0;
extern s32 D_000021EC;
extern s32 D_000021F0;
extern s8 D_00002CB0;
extern s32 D_00002CE4;
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

s32 InitForKernel_7A2333AD();
M2C_UNK InterruptManagerForKernel_D774BA45(M2C_UNK);
M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, M2C_UNK *, s32);
M2C_UNK SysMemForKernel_2F808748(void *, M2C_UNK, s32);
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
s32 sceDisplayGetCurrentHcount(void);
s32 sceDisplayGetFrameBuf(void *arg0, void *arg1, void *arg2, s32 arg3);
void sceDisplayGetFramePerSec(void);
s32 sceDisplayGetVcount(void);
s32 sceDisplayIsForeground(void);
s32 sceDisplayIsVblank(void);
s32 sceDisplaySetFrameBuf(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceDisplaySetHoldMode(s32 arg0);
s32 sceDisplayWaitVblankStart(void);
s32 sceDisplayWaitVblankStartCB(void);
s32 sceDisplay_driver_206276C2(void);
s8 sceDisplay_driver_23CE8C51(void);
s32 sceDisplay_driver_5B5AEFAD(s32, s32, s32, s32, s32);
s32 sceDisplay_driver_63E22A26(s32, s32, s32, s32, s32);
s32 sceDisplay_driver_69B53541(void);
s32 sceDisplay_driver_7A10289D(void);
s32 sceDisplay_driver_92C8F8B7(void);
s32 sceDisplay_driver_A544C486(s32 arg0);
s8 sceDisplay_driver_AC14F1FF(void);
void * sceGeEdramGetAddr(void);
u32 sceGeEdramGetSize(void);
s32 sceGeEdramSetAddrTranslation(s32);
M2C_UNK sceGe_driver_5BAA5439(s32);
s32 sceGe_driver_C576E897();
void sceKernelDcacheWritebackAll(void);
s32 sceKernelDeleteEventFlag(s32);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
s32 sceKernelWaitEventFlagCB(s32, u32, s32, void *, void *);
M2C_UNK sceLcdc_driver_3107417C();
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_E88B77ED(M2C_UNK);
M2C_UNK sceSysreg_driver_F6D83AD0(M2C_UNK);

#endif
