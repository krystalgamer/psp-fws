#ifndef MSCM_DECLS_H
#define MSCM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00007880;
extern s32 D_00007AF4;

s32 func_00000C1C(void *arg0);
s32 func_0000254C(s32 (*arg0)(s32, s32, s32, s32, s32), s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_00004E4C(void);
s32 func_00004E68(s32 arg0, s32 arg1);
s32 func_00006484(void);
s32 func_0000648C(void);
s32 func_00006494(void *arg0);
s32 func_000064C0(void);
s32 func_000064C8(s32);
s32 func_0000652C(s32, s32);
s32 func_000066DC(void *arg0);
s32 func_00006704(void *arg0, s32 arg1);
s32 sceKernelChangeThreadPriority(u32, s32);
s32 sceKernelClearEventFlag(u32, u32);
s32 sceKernelDelayThread(u32);
u32 sceKernelGetSystemTimeLow(void);
s32 sceKernelGetThreadCurrentPriority(void);
s32 sceMScm_driver_0A054CDA(void *arg0);
s32 sceMScm_driver_AA67D87A(s32, s32);
s32 sceMScm_driver_B01C378C(void *arg0);
void sceMScm_driver_CFD8F662(s32 arg0);
s32 sceMScm_driver_F1924A06(s32, s32);
M2C_UNK sceSysreg_driver_18172C6A(s32);
M2C_UNK sceSysreg_driver_D74F1D48(s32);

#endif
