#ifndef USERSYSTEMLIB_DECLS_H
#define USERSYSTEMLIB_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_000001C0;
extern s32 D_000001FC;

s32 module_start(void);
s32 sceKernelIsCpuIntrSuspended(s32 arg0);
M2C_UNK sceKernelRegisterUserSpaceIntrStack(M2C_UNK *, s32);

#endif
