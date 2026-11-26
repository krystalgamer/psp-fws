#ifndef PSPNET_ADHOC_DOWNLOAD_DECLS_H
#define PSPNET_ADHOC_DOWNLOAD_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00002390;
extern s32 D_00003D90;

s32 *func_00000A9C(void *arg0);
s32 func_00001D60(s32, s32);
u8 *func_00001E14(u8 *arg0, u8 *arg1, s32 arg2);
void func_00001EB4(s32 arg0, s32 arg1);
s32 func_000020D4(s32);
void func_00002118(void);
void func_000021C4(void *arg0);
s32 module_start(void);
s32 module_stop(void);
s32 sceKernelDeleteVpl(s32);
s32 sceKernelFreeVpl(s32, void *);
s32 sceNetAdhocDownloadInitServer(s32 arg0);

#endif
