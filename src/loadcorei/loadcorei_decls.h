#ifndef LOADCOREI_DECLS_H
#define LOADCOREI_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00007FF0;
extern M2C_UNK D_0000967C;
extern s32 D_00009694;

M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, M2C_UNK *);
void LoadCoreForKernel_0DE1F600(s32 arg0, s32 arg1);
void LoadCoreForKernel_0E760DBA(s32 arg0, s32 arg1);
void LoadCoreForKernel_5873A31F(s32 arg0);
void LoadCoreForKernel_6B2371C2(void *arg0);
s32 LoadCoreForKernel_82CE54ED(void);
void LoadCoreForKernel_99A695F0(s32 arg0);
void LoadCoreForKernel_BD61D4D5(void *arg0);
M2C_UNK *LoadCoreForKernel_C99DD47A(void);
s32 LoadCoreForKernel_CF8A41B1(s32 arg0);
s32 LoadCoreForKernel_DA1B09AA(u32 arg0, u32 arg1);
M2C_UNK SysMemForKernel_8F20C4C0(s32);
M2C_UNK SysMemForKernel_CE05CCB7();
s32 func_00000340(void);
void func_00000674(s32 arg0, s32 arg1);
void func_00000690(s32 arg0, s32 arg1);
s32 func_000008D0(s32, s32, s32);
void func_00000AAC(void *arg0, void *arg1);
s32 func_00000ACC(void *arg0, void *arg1);
s32 func_00000ADC(void *arg0, void *arg1);
void func_00000AEC(void *arg0, void *arg1);
s32 func_00000B10(void *arg0, void *arg1);
s32 func_000014F8(s32, s32);
s32 func_00001B6C(s32, s32, s32);
M2C_UNK func_00001D1C(void *);
s32 func_00001ECC(void);
M2C_UNK func_00001F94(M2C_UNK, void *);
void func_00002204(u32 arg0, u32 arg1, M2C_UNK arg2);
s32 func_000029D8(s32 arg0);
void func_00002B24(void *arg0, s32 arg1);
s32 func_00002B3C(void *arg0);
s32 func_000039A8(void *arg0);
s32 func_000053CC(void *arg0);
s32 func_00005478(s32);
M2C_UNK func_00005BF8(s32, s32);
s32 func_000061CC();
M2C_UNK func_000061F8(s32);
s32 func_00006258(s32 arg0);

#endif
