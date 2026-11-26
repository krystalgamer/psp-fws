#ifndef ME_WRAPPER_DECLS_H
#define ME_WRAPPER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000019F0;
extern s32 D_00001A30;

s32 func_00001070(void);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceMeCore_driver_3D5F109C(M2C_UNK, s32);
void sceMeCore_driver_4794C05C(s32 arg0);
void sceMeMemory_driver_5AD660FA(s32 arg0);
void sceMeMemory_driver_A177798D(s32 arg0);
void sceMePower_driver_579ACEA9(s32 arg0);
void sceMeWrapper_driver_04AFF68E(void);
s32 sceMeWrapper_driver_63463F66(void);
void sceMeWrapper_driver_B97B15D7(void);
s32 sceMeWrapper_driver_C3A1D6B2(void);
M2C_UNK sceSysEventForKernel_CD9E4BB5(M2C_UNK *);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_158AD4FC();
M2C_UNK sceSysreg_driver_9BB70D34();
M2C_UNK sceSysreg_driver_D20581EA();
M2C_UNK sceSysreg_driver_DE59DACB();

#endif
