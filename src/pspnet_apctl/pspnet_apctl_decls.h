#ifndef PSPNET_APCTL_DECLS_H
#define PSPNET_APCTL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00011DD4;
extern s32 D_00011DE4;
extern u32 D_00011DF0;
extern s32 D_000125BC;
extern void *D_00013F20;
extern s32 D_00016528;
extern M2C_UNK D_000177A0;

s32 func_00000B54(s32, s32, s32);
s32 func_000020CC(s32 *arg0);
s32 func_0000228C(void);
void func_0000235C(s32 arg0, s32 arg1);
s32 func_00002514(s32 arg0);
s32 func_000038E4(void);
void func_00003B30(s32 arg0);
s32 func_00006304(s32 arg0);
s32 func_00008E00(void);
s32 func_00009098(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00009328(void);
s32 func_00009348(void);
s32 func_00009588(s32 arg0);
s32 func_00009880(s32 arg0);
s32 func_000098A4(s32);
s32 func_00009C34(void *arg0);
s32 func_00009C40(void *arg0);
s32 func_00009CE0(void *arg0);
s32 func_00009D80(void *arg0);
s32 func_00009D90(void *arg0);
s32 func_00009DB4(void *arg0);
s32 func_0000A1F0(void);
s32 func_0000A1F8(void);
s32 func_0000A23C(void *arg0);
s32 func_0000A248(void *arg0);
s32 func_0000A354(void *arg0);
s32 func_0000A448(void *arg0);
s32 func_0000A46C(void *arg0);
s32 func_0000A84C(void);
s32 func_0000A854(void);
s32 func_0000A95C(void);
s32 func_0000A9A4(void);
s32 func_0000A9AC(s32 arg0);
s32 func_0000AB74(void *arg0);
s32 func_0000ACBC(void *arg0);
s32 func_0000ACCC(void *arg0);
s32 func_0000B318(void);
s32 func_0000B320(void);
s32 func_0000B328(s32);
void func_0000B720(void);
s32 func_0000B7FC(s32, s32, s32, s32, s32);
s32 func_0000B974(s32, s32, s32, s32, s32);
void func_0000BBEC(s32 arg0);
s32 func_0000BC08(s32);
void func_0000BCBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0000BCD8(void);
s32 func_0000BD70(s32, s32);
void func_0000BE2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0000BE5C(s32);
s32 func_0000BF90(s32, s32, s32, s32);
s32 func_0000C174(void);
void func_0000C738(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0000C768(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0000E320(void);
void func_0000E340(void);
s32 func_0000E4D0(void);
s32 func_0000E4D8(void);
s32 func_0000E524(s32 *arg0);
s32 func_0000E55C(s32 *arg0);
s32 func_0000E8E8(void *arg0);
s32 sceKernelSetEventFlag(u32, u32);
s32 sceKernelSignalSema(s32, s32);
s32 sceNetInet_lib_6A046357(s32);
s32 sceNetInet_lib_E6F67D14();
M2C_UNK sceNet_lib_57CC57DA(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 sceNet_lib_B6FC0A5B();
M2C_UNK sceNet_lib_DB88F458();
M2C_UNK sceNet_lib_EF097716(s32, s32, s32);

#endif
