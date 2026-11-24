#ifndef DISPLAY_DECLS_H
#define DISPLAY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00003D10;
extern s8 D_00003E14;
extern s8 D_00003E1A;
extern s32 D_00003EB0;
extern s32 D_00003EE8;
extern s32 D_00003EF0;
extern s32 D_00003EF4;
extern s32 D_00003EF8;

M2C_UNK InterruptManagerForKernel_D774BA45(M2C_UNK);
M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
s32 func_00002A64(void);
s32 func_00002AA0(void);
s32 func_00002B20(s32 arg0);
s32 module_start(void);
s32 sceDisplayGetCurrentHcount(void);
s32 sceDisplayGetFrameBuf(void *arg0, void *arg1, void *arg2, s32 arg3);
void sceDisplayGetFramePerSec(void);
s32 sceDisplayIsForeground(void);
s32 sceDisplayIsVblank(void);
s32 sceDisplaySetFrameBuf(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceDisplay_driver_206276C2(void);
s8 sceDisplay_driver_23CE8C51(void);
s32 sceDisplay_driver_5B5AEFAD(s32, s32, s32, s32, s32);
s32 sceDisplay_driver_63E22A26(s32, s32, s32, s32, s32);
s32 sceDisplay_driver_7A10289D(void);
s32 sceDisplay_driver_92C8F8B7(void);
s32 sceDisplay_driver_A544C486(s32 arg0);
s8 sceDisplay_driver_AC14F1FF(void);
s32 sceKernelDeleteEventFlag(s32);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
M2C_UNK sceLcdc_driver_3107417C();
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_F6D83AD0(M2C_UNK);

#endif
