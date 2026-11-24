#ifndef PSPNET_ADHOC_AUTH_DECLS_H
#define PSPNET_ADHOC_AUTH_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00004600;
extern s32 D_00004604;
extern s32 D_00004608;
extern s32 D_00004784;
extern M2C_UNK D_00004788;

s32 func_0000158C(void);
void func_000015B0(void);
void func_00001650(void);
s32 func_000018BC(void);
void func_000018F0(void);
s32 func_00003A54(void **arg0);
s32 func_00003AA8(void *arg0);
s32 func_00003B00(void *arg0);
s32 func_00003B58(void *arg0);
void func_00003F24(s32 *arg0, s32 arg1);
s32 func_00003F2C(void);
s32 func_00003F80(void);
void func_00004028(s32 arg0);
void func_00004064(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelDeleteSema(u32);
s32 sceKernelSendMbx(u32, void *);
s32 sceKernelSignalSema(s32, s32);
M2C_UNK sceMemab_driver_0C134D3F();
s32 sceNetAdhocAuth_driver_2E6AA271(void);

#endif
