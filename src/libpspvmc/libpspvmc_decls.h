#ifndef LIBPSPVMC_DECLS_H
#define LIBPSPVMC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_0000FC80;
extern M2C_UNK D_00010B14;
extern s32 D_00010C20;

s32 func_00000AD0(void);
s32 func_00000B18(s32 arg0, M2C_UNK arg1);
s32 func_00000B40(s32 arg0, s32 arg1);
s32 func_00000B88(s32 arg0, M2C_UNK arg1);
s32 func_00000BB0(s32, s32, s32);
s32 func_00000C70(void);
M2C_UNK func_00000C90(M2C_UNK, s32);
s32 func_00000DC8(void);
s32 func_00000DD0(void);
M2C_UNK func_00001410();
M2C_UNK func_00001420(M2C_UNK, s32);
M2C_UNK *func_00001430(void);
s32 func_0000155C(void);
s32 func_00002B6C(u8 *arg0, s32 arg1);
void func_00002B94(s32 *arg0, s32 arg1, s32 arg2);
s32 func_00003730(void);
M2C_UNK *func_000055B0(s32 arg0);
M2C_UNK func_000066D8();

#endif
