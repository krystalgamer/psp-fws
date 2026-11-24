#ifndef NETCONF_PLUGIN_AUTO_NEC_DECLS_H
#define NETCONF_PLUGIN_AUTO_NEC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00008498;
extern s32 D_000084A0;
extern s32 D_000084A4;
extern M2C_UNK D_000084B8;
extern s32 D_00008530;
extern s32 D_00008534;
extern s32 D_00008538;
extern s32 D_00008540;

M2C_UNK func_00000000();
s32 func_00000180(void);
s32 func_00000194(void);
void func_00000B1C(void);
void func_000026FC(void *arg0, void *arg1, void *arg2);
s32 func_00003C00(s32, s32, s32);
void func_00003CFC(s32 arg0, void *arg1);
s32 func_000048E4(s32, s32, s32);
s32 func_000049B8(s32, s32, s32);
s32 func_00004A38(void);
s32 func_00004FE8(void);
M2C_UNK func_000055BC();
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelDelayThread(u32);
M2C_UNK sceNetApctlDisconnect();
M2C_UNK sceUtility_netparam_internal_9CE50172(M2C_UNK);
s32 sceVshNetconfRaku_F3AF9DD1(void *arg0);

#endif
