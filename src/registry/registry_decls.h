#ifndef REGISTRY_DECLS_H
#define REGISTRY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00006F8C;
extern s32 D_00006FB0;
extern s32 D_00006FDC;

void *func_00000B6C();
s32 func_00001874(s32 arg0, s32 *arg1);
void func_00001A44(s32 arg0, M2C_UNK **arg1, M2C_UNK **arg2);
void *func_00003EA4();
s32 func_00003EE8(void);
s32 func_00004024(void);
s32 func_000065E4(s32);
s32 func_00006674(s32 arg0);
s32 func_00006998(s32 arg0);
void func_00006A0C(void);
void func_00006AC0(s32 arg0);
s32 module_reboot_before(void);
s32 sceIoClose(s32);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
M2C_UNK sceKernelDeleteVpl(s32);
M2C_UNK sceKernelFreeVpl(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceReg_driver_9B25EDF1();
s32 syslib_ADF12745(s32 arg0);

#endif
