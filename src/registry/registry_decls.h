#ifndef REGISTRY_DECLS_H
#define REGISTRY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00006FB0;

void *func_00000B6C();
void *func_00003EA4();
s32 func_00003EE8(void);
s32 func_00004024(void);
s32 func_00006998(s32 arg0);
void func_00006A0C(void);
void func_00006AC0(s32 arg0);
s32 module_reboot_before(void);
M2C_UNK sceKernelDeleteVpl(s32);
M2C_UNK sceKernelFreeVpl(s32, s32);
M2C_UNK sceReg_driver_9B25EDF1();

#endif
