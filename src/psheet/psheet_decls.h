#ifndef PSHEET_DECLS_H
#define PSHEET_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00002A80;

s32 func_0000127C(void *arg0);
s32 func_000012F0(s32 arg0);
s32 sceKernelSignalSema(u32, s32);
s32 sceKernelWaitSema(u32, s32, void *);
s32 scePsheet_driver_302AB4B8(s32, s32);
s32 scePsheet_driver_3CEC4078(void);

#endif
