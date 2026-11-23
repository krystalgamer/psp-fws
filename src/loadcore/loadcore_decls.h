#ifndef LOADCORE_DECLS_H
#define LOADCORE_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 LoadCoreForKernel_3BB7AC18(void);
s32 LoadCoreForKernel_6B2371C2(void *arg0);
M2C_UNK LoadCoreForKernel_8D8A8ACE(s32, s32);
s32 LoadCoreForKernel_A8E2D53D(void);
s32 LoadCoreForKernel_AFF947D4(s32 arg0);
void LoadCoreForKernel_C0913394(void *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 LoadCoreForKernel_CD0F3BAC();
M2C_UNK LoadCoreForKernel_D8779AC6();
s32 SysMemForKernel_8F20C4C0(s32);
M2C_UNK SysMemForKernel_CE05CCB7();
M2C_UNK func_0000175C(M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 func_000027F8(void);
void func_00002B40(void);
void func_00002B64(void);
void func_00002B88(void);
void func_00002BA4(void);
void func_00002BC0(void);
void func_00002BE4(s32 arg0, M2C_UNK arg1);
void func_00002C20(void);
void func_00002C3C(s32 arg0, s32 arg1);
s32 func_00004D24(void);
s32 func_0000630C(void *arg0);
s32 func_0000665C();
M2C_UNK func_00006688(s32);
s32 func_000066E8(s32 arg0);
M2C_UNK sceKernelDcacheWBinvAll();
M2C_UNK sceKernelDcacheWritebackInvalidateAll();
M2C_UNK sceKernelDcacheWritebackInvalidateRange(s32, M2C_UNK);
M2C_UNK sceKernelIcacheInvalidateAll();
M2C_UNK sceKernelIcacheInvalidateRange();

#endif
