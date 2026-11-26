#ifndef LIBDNAS_DECLS_H
#define LIBDNAS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_000037B0;
extern s32 D_000037B4;
extern s32 D_000037B8;
extern s32 D_000037BC;
extern s32 D_000037CC;
extern s32 D_000037D0;

s32 func_00002888(s32);
M2C_UNK sceDNASCore_lib_D5E80301();
void sceDNASTerm(void);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceKernelTerminateDeleteThread(s32);
s32 sceKernelWaitThreadEnd(s32, void *);
s32 sceNetFreeThreadinfo(s32);
s32 sceNetInetSocketAbort(s32);
M2C_UNK sceNetResolverStop(s32);

#endif
