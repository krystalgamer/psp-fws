#ifndef MPEG_VSH_DECLS_H
#define MPEG_VSH_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00000E04(s32, s32, s32);
void func_000014A0(s32 arg0, s32 arg1);
s32 func_00001FFC(s32 arg0, s32 *arg1);
s32 func_0000366C(void);
s32 func_00005318(void *arg0, s32 arg1);
s32 func_00005B54(s32 arg0);
s32 func_00005B7C(u8 *arg0);
s32 func_00005BCC(s32 arg0);
u8 func_00005BEC(void *arg0);
void *func_00005BF4(void *arg0, s32 arg1);
u8 func_00005C18(void *arg0);
s32 func_00005C20(s32 arg0, s32 arg1);
s32 func_00005C5C(s32 arg0);
void *func_00005C64(void **arg0);
s32 func_00005C84(void);
s32 func_000079AC(u32 arg0);
s32 func_000079D8(u32 arg0);
s32 func_00007A3C(u32 arg0);
s32 func_00007A68(u32 arg0);
void func_00007ADC(void);
s32 func_00008734(void);
void func_00008FF0(void);
s32 func_00008FF8(void *arg0);
s32 func_00009004(void *arg0);
s32 func_00009018(void *arg0);
s32 func_000090DC(void *arg0);
u8 *func_00009134(u8 *arg0, u8 *arg1, s32 arg2);
s32 func_00009214(s32 arg0);
s32 func_00009530(s32);
s32 func_00009548(s32);
s32 func_00009568(s32);
s32 sceKernelCheckThreadStack(void);
s32 sceKernelDeleteSema(u32);
s32 sceKernelPollSema(u32, s32);
s32 sceKernelSignalSema(u32, s32);
s32 sceKernelWaitSema(u32, s32, void *);

#endif
