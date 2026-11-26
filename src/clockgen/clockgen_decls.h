#ifndef CLOCKGEN_DECLS_H
#define CLOCKGEN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00000930;
extern M2C_UNK D_0000093C;

s32 func_00000318(void);
s32 func_00000414(void);
s32 func_0000041C(void);
s32 func_00000468(s32 arg0);
M2C_UNK func_00000614(M2C_UNK, M2C_UNK);
s32 func_000006C0(s32, s32);
s32 module_reboot_before(void);
s32 module_start(void);
s32 sceClockgen_driver_29160F5D(void);
s32 sceClockgen_driver_32C8CA86(void);
void sceClockgen_driver_5F8328FD(void);
void sceClockgen_driver_7FF82F6F(void);
void sceClockgen_driver_B9FE99D1(void);
void sceClockgen_driver_DBE5F283(void);
s32 sceKernelDeleteSema(s32);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);

#endif
