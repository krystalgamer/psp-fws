#ifndef I2C_DECLS_H
#define I2C_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00001738;
extern s32 D_0000173C;

s32 sceI2c_driver_0397408B(s32 arg0);
s32 sceI2c_driver_17B0DA59(void);
s32 sceI2c_driver_21A8282C(void);
s32 sceI2c_driver_DB6C4F9B(s32 arg0);
s32 sceKernelDelayThread(u32);
M2C_UNK sceSysreg_driver_58F47EFD();
M2C_UNK sceSysreg_driver_94B0323C();

#endif
