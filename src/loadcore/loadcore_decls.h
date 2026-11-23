#ifndef LOADCORE_DECLS_H
#define LOADCORE_DECLS_H

#include "common.h"
#include "m2c_macros.h"


void LoadCoreForKernel_0DE1F600(s32 arg0, s32 arg1);
void LoadCoreForKernel_0E760DBA(s32 arg0, s32 arg1);
s32 LoadCoreForKernel_3BB7AC18(void);
void LoadCoreForKernel_5873A31F(s32 arg0);
void LoadCoreForKernel_99A695F0(s32 arg0);
s32 LoadCoreForKernel_A8E2D53D(void);
void LoadCoreForKernel_C0913394(void *arg0, s32 arg1, s32 arg2);
s32 LoadCoreForKernel_D8779AC6(void);
M2C_UNK SysMemForKernel_CE05CCB7();
void func_00000800(s32 arg0, s32 arg1, s32 arg2);
void func_00000820(s32 arg0, s32 arg1);
s32 func_00000840(s32, s32, s32, s32);
s32 func_00000EF4(s32, s32);
s32 func_0000175C(s32, s32, s32, s32);
s32 func_000027F8(void);
void func_00002B40(void);
void func_00002B64(void);
void func_00002B88(void);
void func_00002BA4(void);
void func_00002BC0(void);
void func_00002BE4(void *arg0, u32 arg1);
void func_00002C20(void);
void func_00002C3C(void *arg0, u32 arg1);
s32 func_00004D24(void);
s32 func_0000630C(void *arg0);
u8 *func_00006434(u8 *arg0, u8 *arg1);
s32 func_000066E8(s32 arg0);
s32 sceKernelDcacheWBinvAll(void);
void sceKernelDcacheWritebackInvalidateAll(void);
s32 sceKernelDcacheWritebackInvalidateRange(void *, u32);
void sceKernelIcacheInvalidateAll(void);
s32 sceKernelIcacheInvalidateRange(void *, u32);

#endif
