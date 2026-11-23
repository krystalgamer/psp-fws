#ifndef MPEG_VSH_DECLS_H
#define MPEG_VSH_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00009B98;
extern s32 D_00009DC0;
extern void *D_00009EC0;
extern s32 D_00009F6C;
extern u32 D_00009F80;
extern u32 D_00009F84;

s32 func_00000E04(s32, s32, s32);
void func_000014A0(s32 arg0, s32 arg1);
s32 func_00001FC8(s32 *arg0);
s32 func_00001FFC(s32 arg0, s32 *arg1);
s32 func_0000366C(void);
s32 func_00003674(void *arg0);
s32 func_00003FA8(s32, s32, s32, s32, s32);
s32 func_00004308(s32, s32, s32, s32, s32);
s32 func_00005318(void *arg0, s32 arg1);
void func_00005324(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00005348(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
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
s32 func_00007958(s32 arg0, s32 arg1, void *arg2, u32 *arg3);
s32 func_000079AC(u32 arg0);
s32 func_000079D8(u32 arg0);
s32 func_00007A3C(u32 arg0);
s32 func_00007A68(u32 arg0);
void func_00007ADC(void);
s32 func_00007BAC(s32);
void func_00007D70(void);
s32 func_00007D94(s32 arg0);
s32 func_00007DE4(void);
s32 func_00007DF4(s32 arg0);
s32 func_00007E48(s32 arg0);
s32 func_00007E9C(s32 arg0);
s32 func_00007F04(void *arg0, s32 arg1);
s32 func_00007F64(void *arg0, s32 arg1);
s32 func_00008734(void);
s32 func_000088AC(s32, s32, s32);
void func_00008A58(void);
s32 func_00008A90(s32 arg0, s32 arg1);
s32 func_00008AF0(s32 *arg0);
void func_00008FF0(void);
s32 func_00008FF8(void *arg0);
s32 func_00009004(void *arg0);
s32 func_00009018(void *arg0);
s32 func_000090DC(void *arg0);
u8 *func_00009134(u8 *arg0, u8 *arg1, s32 arg2);
s32 func_00009194(s32, s32);
s32 func_00009214(s32 arg0);
s32 func_00009530(s32);
s32 func_00009548(s32);
s32 func_00009568(s32);
M2C_UNK sceAudiocodec_29681260(void *);
s32 sceKernelCheckThreadStack(void);
u32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteSema(u32);
s32 sceKernelPollSema(u32, s32);
s32 sceKernelSignalSema(u32, s32);
s32 sceKernelWaitSema(u32, s32, void *);
s32 sceVideocodec_17CF7D2C(void *, M2C_UNK);
s32 sceVideocodec_307E6E1C(s32, M2C_UNK);
M2C_UNK sceVideocodec_4F160BF4(s32);
s32 sceVideocodec_627B7D42(void *, M2C_UNK);
s32 sceVideocodec_A2F0564E(s32, M2C_UNK);
s32 sceVideocodec_DBA273FA(s32, M2C_UNK);

#endif
