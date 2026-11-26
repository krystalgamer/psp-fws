#ifndef UTILS_DECLS_H
#define UTILS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_000046C0;
extern s32 D_000046C4;
extern s32 D_00004700;
extern s32 D_00004704;
extern s32 D_00004724;
extern s32 D_00004728;
extern s32 D_0000472C;
extern s32 D_00004764;
extern s32 D_00004768;
extern s32 D_0000476C;

void sceKernelSetGPIMask(s32 arg0, s32 arg1);
s32 sceKernelGzipGetCompressedData(s32 arg0);
s32 sceKernelReleaseLibcRtcFunc(void);
s32 sceKernelRegisterLibcRtcFunc(s32 arg0, s32 arg1, s32 arg2);
s32 sceKernelGzipGetComment(s32 arg0);
void sceKernelSetGPOMask(s32 arg0, s32 arg1);
s32 sceKernelGzipGetInfo(s32, s32, s32, s32, s32, s32);
s32 sceKernelGzipGetName(s32 arg0);
s32 func_000010E0(void);
s32 func_000026B4(void);

#endif
