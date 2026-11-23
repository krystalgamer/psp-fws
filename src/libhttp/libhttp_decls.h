#ifndef LIBHTTP_DECLS_H
#define LIBHTTP_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_0001A5C4;
extern s32 D_0001AA44;
extern s32 D_0001AE08;
extern s32 D_0001AF9C;
extern s32 D_0001B0CC;
extern s32 D_0001B0E0;

s32 func_00009ADC(void);
void func_0000A08C(s32 arg0);
s32 func_0000A0C0();
M2C_UNK func_0000AA9C(s32);
s32 func_0000E568(void);
void func_00010A74(void);
void func_00011484(void);
void func_00011B3C(void *arg0, void *arg1);
s32 func_00013294(void);
s32 func_000132B0(void);
void func_00015428(void);
void func_00015444(void);
void func_00015460(void);
void func_0001547C(void);
void func_00015498(void);
void func_000154B4(void);
void func_000154D0(void);
void func_000154EC(void);
void func_00015508(void);
void func_00015524(void);
void func_00015540(void);
void func_00015A40(void);
M2C_UNK sceHttpStorage_B33389CE();
M2C_UNK sceHttpStorage_CDA3D8F6();
M2C_UNK sceKernelCpuResumeIntr();
M2C_UNK sceKernelCpuSuspendIntr();
M2C_UNK sceKernelUtilsMd5BlockInit();
M2C_UNK sceKernelUtilsMd5BlockResult();
M2C_UNK sceKernelUtilsMd5BlockUpdate();
M2C_UNK sceKernelUtilsMd5Digest();
M2C_UNK sceNetInetInetPton();
M2C_UNK sceNet_lib_57CC57DA(s32 *, M2C_UNK, M2C_UNK);
M2C_UNK sceRtcFormatRFC2822();
M2C_UNK sceRtcGetCurrentTick();
M2C_UNK sceRtcParseDateTime();
M2C_UNK sceRtcTickAddSeconds();

#endif
