#ifndef PSPNET_ADHOCCTL_DECLS_H
#define PSPNET_ADHOCCTL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_0000610C;
extern s32 D_000062A0;
extern s32 D_000062A4;
extern s32 D_000062BC;

void func_00002014(void *arg0);
s32 func_00002068(s32, s32, s32, s32);
void func_00002280(s32 arg0, s32 arg1);
s32 func_000030BC(s32 *arg0);
s32 func_00003360(void);
void func_00005870(void);
void func_00005918(s32 arg0);
s32 sceKernelDeleteSema(u32);
s32 sceKernelSignalSema(s32, s32);
void sceNetAdhocctl_lib_1572422C(void);
M2C_UNK sceNet_lib_57CC57DA(s32, M2C_UNK, M2C_UNK);
M2C_UNK sceNet_lib_AB7DD9A5(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sceNet_lib_D2422E4D(M2C_UNK *);
s32 scePowerRequestSuspend(void);
M2C_UNK sceWlanDrv_lib_C9A8CAB7();

#endif
