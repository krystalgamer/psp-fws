#ifndef PSPNET_RESOLVER_DECLS_H
#define PSPNET_RESOLVER_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00001F74;
extern s32 D_00001F78;

s32 func_0000065C(void);
s32 func_000006B0(void);
s32 func_0000070C(s32);
s32 func_00000F64(void);
s32 func_00000FA8(void);
s32 sceKernelCheckThreadStack(void);
s32 sceNetResolverDelete(s32 arg0);

#endif
