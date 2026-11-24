#ifndef UART4_DECLS_H
#define UART4_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK Uart4ForKernel_2518C2F3;
extern M2C_UNK Uart4ForKernel_2FD96F62;
extern M2C_UNK func_00000000;

M2C_UNK KDebugForKernel_66253C4E(M2C_UNK *);
M2C_UNK KDebugForKernel_7D1C74F0(M2C_UNK);
M2C_UNK KDebugForKernel_E146606D(M2C_UNK *);
M2C_UNK KDebugForKernel_E6554FDA(M2C_UNK *);
void Uart4ForKernel_69BCBEF1(s8 arg0);
s32 Uart4ForKernel_C0BE3133(s8 arg0);
s32 Uart4ForKernel_C703109F(s32);
M2C_UNK Uart4ForKernel_D00E3D06();
void func_00000398(void);
s32 func_00000458(void);
void func_00000480(void);
void func_00000504(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 syslib_D3744BE0(void);

#endif
