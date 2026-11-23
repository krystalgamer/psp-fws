#ifndef SM1_DECLS_H
#define SM1_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_000004B0;

s32 func_000000E8(void);
s32 func_00000124(void);
s32 func_00000160(void);
s32 func_0000036C(void);
M2C_UNK sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr();

#endif
