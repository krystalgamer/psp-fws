#ifndef MPEG_DECLS_H
#define MPEG_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000080D0;
extern s32 D_00008300;
extern void *D_00008400;
extern s32 D_000084AC;
extern u32 D_000084C0;
extern u32 D_000084C4;

s32 func_00000918(void);
s32 func_00000B54(s32, s32, s32);
void func_00000FB4(s32 arg0, s32 arg1);
s32 func_00000FD4(void);
s32 func_00000FE0(void);
s32 func_00001AF4(s32 *arg0);
s32 func_00001B28(s32 arg0, s32 *arg1);
s32 func_00003198(void);
s32 func_000031A0(void *arg0);
s32 func_00003B00(s32, s32, s32, s32, s32);
s32 func_00003E60(s32, s32, s32, s32, s32);
s32 func_00004E70(void *arg0, s32 arg1);
void func_00004E7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00004EA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
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
s32 func_00006CF0(s32 arg0, s32 arg1, void *arg2, u32 *arg3);
s32 func_00006D44(u32 arg0);
s32 func_00006D70(u32 arg0);
s32 func_00006DD4(u32 arg0);
s32 func_00006E00(u32 arg0);
void func_00006E74(void);
s32 func_00006F44(s32);
void func_00007108(void);
s32 func_0000712C(s32 arg0);
s32 func_0000717C(void);
s32 func_0000718C(s32 arg0);
s32 func_000071E0(s32 arg0);
s32 func_000072FC(void *arg0, s32 arg1);
s32 func_000073E8(s32, s32, s32);
void func_00007590(void);
s32 func_000075C8(s32 arg0, s32 arg1);
s32 func_00007628(s32 *arg0);
s32 func_00007648(s32 arg0);
u8 *func_000076F8(u8 *arg0, u8 *arg1, s32 arg2);
s32 func_00007758(s32, s32);
s32 func_000077D8(s32 arg0);
s32 func_00007AF4(s32);
s32 func_00007B0C(s32);
s32 func_00007B2C(s32);
M2C_UNK sceAudiocodec_29681260(void *);
s32 sceAudiocodec_70A703F8(s32, M2C_UNK);
s32 sceKernelCheckThreadStack(void);
u32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteSema(u32);
s32 sceKernelPollSema(u32, s32);
s32 sceKernelSignalSema(u32, s32);
s32 sceKernelWaitSema(u32, s32, void *);
s32 sceVideocodec_17CF7D2C(void *, M2C_UNK);
M2C_UNK sceVideocodec_4F160BF4(s32);
s32 sceVideocodec_A2F0564E(s32, M2C_UNK);
s32 sceVideocodec_DBA273FA(s32, M2C_UNK);

#endif
