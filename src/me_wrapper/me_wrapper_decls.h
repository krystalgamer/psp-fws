#ifndef ME_WRAPPER_DECLS_H
#define ME_WRAPPER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000019F0;
extern s32 D_00001A30;
extern s32 D_00001F60;

s32 func_00001070(void);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
void sceMeCore_driver_04AFF68E(void);
M2C_UNK sceMeCore_driver_3D5F109C(M2C_UNK, s32);
void sceMeEnableFunctions(s32 arg0);
void sceMeCore_driver_B97B15D7(void);
void sceMeMemory_driver_5AD660FA(s32 arg0);
void sceMeMemory_driver_A177798D(s32 arg0);
void sceMePowerSelectAvcClock(s32 arg0);
void sceMeWrapper_driver_04AFF68E(void);
s32 sceMeWrapperInit(void);
void sceMeWrapper_driver_B97B15D7(void);
s32 sceMeWrapperEnd(void);
M2C_UNK sceKernelRegisterSysEventHandler(M2C_UNK *);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
M2C_UNK sceSysregMeBusClockDisable();
M2C_UNK sceSysregAvcResetEnable();
M2C_UNK sceSysregVmeResetEnable();
M2C_UNK sceSysregMeResetEnable();

#endif
