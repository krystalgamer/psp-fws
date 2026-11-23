#ifndef POWER_DECLS_H
#define POWER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00005F00;

s32 func_000012B4(s32, s32);
s32 func_0000250C(void);
s32 func_00002880(s32, s32);
s32 func_00002E48(void);
s32 func_000032EC(s32, s32, s32);
s32 func_00003A98(void);
s32 func_00004BF8(void);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
s32 scePowerIsBatteryCharging(void);
s32 scePowerSetClockFrequency(s32 arg0, s32 arg1, s32 arg2);
s32 scePower_driver_23436A4A(void);
void scePower_driver_A4E93389(s32 arg0, s32 arg1, s32 arg2);
s32 scePower_driver_AD5BB433(void);
s32 scePower_driver_B4432BC8(void);
void scePower_driver_CA3D34C1(s32 arg0);
void scePower_driver_D6D016EF(s32 arg0);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSyscon_driver_AD555CE5(M2C_UNK, M2C_UNK);
M2C_UNK sceSyscon_driver_E540E532(M2C_UNK, M2C_UNK);

#endif
