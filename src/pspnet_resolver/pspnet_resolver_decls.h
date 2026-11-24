#ifndef PSPNET_RESOLVER_DECLS_H
#define PSPNET_RESOLVER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00001F74;
extern s32 D_00001F78;
extern M2C_UNK D_000022B1;
extern s32 D_00002340;
extern s32 D_00002344;

s32 func_0000055C(void);
s32 func_000005B0(void);
s32 func_0000065C(void);
s32 func_000006B0(void);
s32 func_0000070C(s32);
s32 func_00000E2C(void);
s32 func_00000F64(void);
s32 func_00000FA8(void);
M2C_UNK *func_00001BC0(void);
s32 func_00001C04(s32, s32);
u8 *func_00001CB8(u8 *arg0, u8 *arg1, s32 arg2);
void func_00001D58(s32 arg0, s32 arg1);
u8 *func_00001FE0(u8 *arg0, u8 *arg1);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelCheckThreadStack(void);
s32 sceNetResolverDelete(s32 arg0);
s32 sceNetResolverTerm(void);

#endif
