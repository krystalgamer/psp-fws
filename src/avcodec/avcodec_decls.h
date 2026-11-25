#ifndef AVCODEC_DECLS_H
#define AVCODEC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000040E4;
extern u32 D_00004140;
extern M2C_UNK D_00004480;
extern u32 D_00004830;

s32 func_00000000(void);
s32 func_00000050(void);
s32 func_000012AC(void);
s32 func_00002A38(void);
s32 func_00002A88(void);
s32 func_00002AB0(s32, s32, s32, s32, s32);
s32 sceAvcodec_driver_4A0592C7(void);
s32 sceAvcodec_driver_C692C906(void);
s32 sceJpegCsc(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
void sceJpeg_0425B986(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceJpeg_9B36444C(void);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(u32);
M2C_UNK sceMePower_driver_05B2C420(M2C_UNK);
M2C_UNK sceMePower_driver_B6FE3E62(M2C_UNK);
void sceMpegbase_driver_492B5E4B(s32 arg0);
s32 sceMpegbase_driver_AC9E717E(s32, s32);

#endif
