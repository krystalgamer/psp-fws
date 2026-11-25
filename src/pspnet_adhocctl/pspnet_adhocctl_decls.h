#ifndef PSPNET_ADHOCCTL_DECLS_H
#define PSPNET_ADHOCCTL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00002014_0 {
    u8 pad0[0x8];
    s32 unk8;
};

extern s32 D_00005960;
extern s32 D_00005B50;
extern s32 D_00005B54;
extern M2C_UNK D_00005BE4;
extern M2C_UNK D_0000610C;
extern s32 D_000062A0;
extern s32 D_000062A4;
extern s32 D_000062B0;
extern s32 D_000062BC;
extern M2C_UNK D_00006361;
extern M2C_UNK D_000063F4;
extern s32 D_00006400;

s32 _sce_pspnet_adhocctl_get_state(s32 *arg0);
void func_0000155C(s32 arg0, s32 arg1);
s32 func_00001BD4(s32, s32, s32, s32);
void func_00002014(struct Unk_func_00002014_0 *arg0);
s32 func_00002068(s32, s32, s32, s32);
void func_00002280(s32 arg0, s32 arg1);
s32 func_000022A4(void *arg0);
s32 func_000023B4(s32 *arg0);
void func_00002984(s32 arg0);
s32 func_00002A24(s32, s32, s32);
s32 func_000030BC(s32 *arg0);
s32 func_00003360(void);
void func_00003958(s32 arg0);
s32 func_00003A00(s32, s32, s32);
M2C_UNK *func_00004938(void);
s32 func_0000497C(s32, s32);
u8 *func_00004A30(u8 *arg0, u8 *arg1, s32 arg2);
void func_00004AD0(s32 arg0, s32 arg1);
u8 *func_00004D58(u8 *arg0, u8 *arg1);
void func_00004E78(void);
s32 func_00004EB4(void);
void func_00004F10(s32 arg0);
void func_00005870(void);
void func_00005918(s32 arg0);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelCheckThreadStack(void);
s32 sceKernelDeleteSema(u32);
s32 sceKernelGetThreadId(void);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceNetAdhocctlGetAdhocId(void *arg0);
s32 sceNetAdhocctlGetState(s32 *arg0);
void sceNetAdhocctl_lib_1572422C(void);
M2C_UNK sceNet_lib_57CC57DA(s32, M2C_UNK, M2C_UNK);
M2C_UNK sceNet_lib_AB7DD9A5(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sceNet_lib_D2422E4D(M2C_UNK *);
s32 scePowerRequestSuspend(void);
M2C_UNK sceWlanDrv_lib_C9A8CAB7();

#endif
