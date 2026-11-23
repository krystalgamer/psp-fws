#ifndef MPEG_DECLS_H
#define MPEG_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00000918(void);
s32 func_00000B54(s32, s32, s32);
void func_00000FB4(s32 arg0, s32 arg1);
s32 func_00000FD4(void);
s32 func_00000FE0(void);
s32 func_00001B28(s32 arg0, s32 *arg1);
s32 func_00003198(void);
s32 func_00004E70(void *arg0, s32 arg1);
s32 func_00005478(s32 arg0);
s32 func_000054A0(u8 *arg0);
s32 func_000054F0(s32 arg0);
u8 func_00005510(void *arg0);
void *func_00005518(void *arg0, s32 arg1);
u8 func_0000553C(void *arg0);
s32 func_00005544(s32 arg0, s32 arg1);
s32 func_00005580(s32 arg0);
void *func_00005588(void **arg0);
s32 func_000055A8(void);
s32 func_00006D44(u32 arg0);
s32 func_00006D70(u32 arg0);
s32 func_00006DD4(u32 arg0);
s32 func_00006E00(u32 arg0);
void func_00006E74(void);
u8 *func_000076F8(u8 *arg0, u8 *arg1, s32 arg2);
s32 func_000077D8(s32 arg0);
s32 func_00007AF4(s32);
s32 func_00007B0C(s32);
s32 func_00007B2C(s32);
s32 sceKernelCheckThreadStack(void);
s32 sceKernelDeleteSema(u32);
s32 sceKernelPollSema(u32, s32);
s32 sceKernelSignalSema(u32, s32);
s32 sceKernelWaitSema(u32, s32, void *);

#endif
