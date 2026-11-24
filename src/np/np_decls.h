#ifndef NP_DECLS_H
#define NP_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00010D00;
extern M2C_UNK D_000115B0;
extern M2C_UNK D_0001189C;
extern M2C_UNK D_00011BA8;
extern M2C_UNK D_00011E84;
extern s32 D_00012E50;
extern s32 D_000136C8;
extern s32 D_000136F8;
extern M2C_UNK D_000136FC;
extern s32 D_00013708;
extern s32 D_0001396C;
extern s32 D_00013970;
extern s32 D_00013974;
extern s32 D_00013978;
extern void *D_000139A4;
extern s32 D_000139BC;
extern s32 D_000139C0;
extern M2C_UNK func_000068DC;
extern M2C_UNK func_000070F4;
extern M2C_UNK func_0000728C;
extern M2C_UNK func_00007448;
extern M2C_UNK func_00007880;

s32 func_00000030(s32, s32);
void func_00000078(void);
s32 func_000001D4(void);
void func_00000420(s32 arg0, s32 arg1);
void func_0000043C(void);
s32 func_00000B9C(void *arg0, s32 arg1);
s32 func_00000C10(void);
s32 func_00003484(void);
M2C_UNK *func_00003650(void);
void func_00006674(s32 arg0, s32 arg1, s32 arg2);
void func_00006690(s32 arg0, s32 arg1, void *arg2);
s32 func_00006704(void *arg0);
s32 func_00006788(void *arg0);
void func_000067A0(s32 arg0, void *arg1);
s32 func_000067D0(void *arg0);
void func_000067E8(s32 arg0, void *arg1);
s32 func_00006818(void *arg0);
void func_00006830(s32 arg0, void *arg1);
s32 func_0000687C(void *arg0);
void func_00006894(s32 arg0, void *arg1);
s32 func_000068C4(void *arg0);
s32 func_00008B74(void *arg0);
s32 func_00008F04(void);
s32 func_00008FCC(void);
s32 func_00009090(void);
void func_0000AA88(void);
void func_0000AAA4(void);
void func_0000AB44(s32 arg0);
s32 func_0000CD70(void);
s32 func_0000CF00(s32);
s32 func_0000CF68(s32, s32);
void func_0000D2A0(void *arg0);
s32 func_0000DA78(void);
s32 func_0000DAA0(void);
void func_0000DAC4(s32 arg0);
s32 func_0000DAE0(void);
s32 func_0000DE44(s32);
s32 func_0000DF04(void);
s32 func_0000E300(s32, s32, s32);
s32 func_0000EA4C(s32, s32, s32, s32);
s32 sceHttpDeleteTemplate(s32);
s32 sceKernelCheckThreadStack(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteSema(s32);
s32 sceKernelDeleteVpl(u32);
s32 sceKernelFreeVpl(u32, void *);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceNet_lib_57CC57DA(void *, M2C_UNK, M2C_UNK);
s32 sceNp_20EC7964(s32 *arg0);
s32 sceNp_3C69FC6A(s32);
void sceNp_3EA98556(void);
void sceNp_66E9BD6F(void);
void sceNp_6DED4963(void *arg0);
void sceNp_A8BEBA34(s32 arg0);
s32 sceNp_E3EA7603(s32 arg0);

#endif
