#ifndef NETCONF_PLUGIN_AUTO_BFL_DECLS_H
#define NETCONF_PLUGIN_AUTO_BFL_DECLS_H

#include "common.h"
#include "m2c_macros.h"


M2C_UNK free();
M2C_UNK func_00000000();
s32 func_00000830(void);
void func_00000FC0(s32 arg0);
void func_00003D94(void);
void func_00003DB0(void);
void func_00003E9C(s32 arg0, s32 arg1, s32 arg2);
void func_00003EB8(s32 arg0, void *arg1, s32 arg2);
void func_00003ED4(s32 arg0);
s32 func_00003EF0(s32 arg0);
s32 func_00003EF8(s32 arg0);
s32 func_00003F08(s32 arg0);
s32 func_00003F10(s32 arg0);
void func_00003F3C(void);
void func_00003F58(s8 *arg0);
void func_00003F78(u32 arg0, s32 arg1);
s32 func_00003FA0(void);
M2C_UNK func_000042A4();
M2C_UNK malloc();
s32 module_start(void);
s32 module_stop(void);
M2C_UNK rand();
s32 sceKernelDelayThread(u32);
s32 sceNetInetBind(s32, void *, s32);
s32 sceNetInetClose(s32);
s32 sceNetInetSocket(s32, s32, s32);

#endif
