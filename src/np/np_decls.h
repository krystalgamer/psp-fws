#ifndef NP_DECLS_H
#define NP_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00012E50;

s32 func_00000030(s32, s32);
void func_00000078(void);
s32 func_000001D4(void);
void func_00000420(s32 arg0, s32 arg1);
void func_0000043C(void);
s32 func_00000B9C(void *arg0, s32 arg1);
void func_00006674(s32 arg0, s32 arg1, s32 arg2);
s32 func_00006704(void *arg0);
s32 func_00006788(void *arg0);
s32 func_000067D0(void *arg0);
s32 func_00006818(void *arg0);
s32 func_0000687C(void *arg0);
s32 func_000068C4(void *arg0);
s32 func_00008B74(void *arg0);
s32 func_00008F04(void);
s32 func_00008FCC(void);
s32 func_00009090(void);
void func_0000AA88(void);
void func_0000AAA4(void);
void func_0000AB44(s32 arg0);
s32 func_0000CF68(s32, s32);
void func_0000DAC4(s32 arg0);
s32 func_0000DAE0(void);
s32 func_0000DE44(s32);
s32 func_0000DF04(void);
s32 func_0000E300(s32, s32, s32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteVpl(u32);
s32 sceKernelFreeVpl(u32, void *);
s32 sceNp_3C69FC6A(s32);
void sceNp_3EA98556(void);
void sceNp_6DED4963(void *arg0);
void sceNp_A8BEBA34(s32 arg0);
s32 sceNp_E3EA7603(s32 arg0);

#endif
