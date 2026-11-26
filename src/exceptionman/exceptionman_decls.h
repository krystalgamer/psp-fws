#ifndef EXCEPTIONMAN_DECLS_H
#define EXCEPTIONMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002400;
extern M2C_UNK func_00000A28;

void ExceptionManagerForKernel_3FB264FC(s32 arg0, s32 arg1);
s32 ExceptionManagerForKernel_5A837AD4(s32, s32, s32);
s32 ExceptionManagerForKernel_DF83875E(void);
s32 func_000000F4(void);
void func_0000011C(void);
s32 func_0000051C(void);
void func_00000544(void);
s32 func_00000744(s32 arg0);
s32 func_00000A80();
M2C_UNK func_00000AAC(s32);
s32 func_00000B0C(s32 arg0);
M2C_UNK syslib_D3744BE0();

#endif
