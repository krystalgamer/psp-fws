#ifndef SM1_DECLS_H
#define SM1_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00000478;
extern s32 D_000004B0;
extern s32 D_000004B4;
extern s32 D_000004B8;
extern s32 D_000004BC;
extern s32 D_000004C0;

M2C_UNK sceKernelSm1RegisterOperations(M2C_UNK *);
s32 func_0000003C(void);
s32 func_000000E8(void);
s32 func_00000124(void);
s32 func_00000160(void);
s32 func_0000016C(void);
s32 func_00000178(void);
s32 func_00000184(void);
s32 func_00000360(void);
s32 func_0000036C(void);
M2C_UNK sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr();

#endif
