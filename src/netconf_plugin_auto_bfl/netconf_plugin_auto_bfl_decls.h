#ifndef NETCONF_PLUGIN_AUTO_BFL_DECLS_H
#define NETCONF_PLUGIN_AUTO_BFL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00004BA4;
extern s32 D_00004BF8;
extern M2C_UNK D_00004BFC;

M2C_UNK free();
M2C_UNK func_00000000();
s32 func_00000830(void);
s32 func_00000ECC(s32 arg0);
void func_00000FC0(s32 arg0);
void func_00001F28(s32 arg0);
s32 func_00001F34(void);
s32 func_00003A50(s32 arg0, s32 arg1);
s32 func_00003A88(s32, s32, s32, s32, s32);
void func_00003D94(void);
void func_00003DB0(void);
void func_00003DCC(void);
s32 func_00003DE8(s32 arg0);
void func_00003E10(void);
void func_00003E2C(s32 arg0, void *arg1, u32 arg2, s32 arg3, void *arg4, void *arg5);
void func_00003E48(s32 arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void func_00003E64(s32 arg0, void *arg1, u32 arg2, s32 arg3, void *arg4, s32 arg5);
void func_00003E80(s32 arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4);
void func_00003E9C(s32 arg0, s32 arg1, s32 arg2);
void func_00003EB8(s32 arg0, void *arg1, s32 arg2);
void func_00003ED4(s32 arg0);
s32 func_00003EF0(s32 arg0);
s32 func_00003EF8(s32 arg0);
s32 func_00003F08(s32 arg0);
s32 func_00003F10(s32 arg0);
void func_00003F20(void);
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
s32 sceNetInetRecvfrom(s32, void *, u32, s32, void *, void *);
s32 sceNetInetSelect(s32, void *, void *, void *, void *);
s32 sceNetInetSendto(s32, void *, u32, s32, void *, s32);
s32 sceNetInetSetsockopt(s32, s32, s32, void *, s32);
s32 sceNetInetSocket(s32, s32, s32);
M2C_UNK scePaf_1919C81F();
M2C_UNK scePaf_5FA42863();
M2C_UNK scePaf_60355B42();
M2C_UNK scePaf_79112496();
M2C_UNK scePaf_7D4045E1();
M2C_UNK scePaf_9B900798();
M2C_UNK scePaf_DDF24DEC();

#endif
