#ifndef UMD9660_DECLS_H
#define UMD9660_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00000B34(s32 arg0);
s32 func_00000B48(s32 arg0);
s32 func_00003BFC(void);
s32 func_00003C80(s32 arg0);
s32 func_00003F70(void);
void func_00003FD4(void);
s32 func_00003FF0(void *arg0);
s32 func_00003FFC(void *arg0);
s32 func_00004164(void *arg0);
s32 func_00004264(s32 *arg0);
s32 func_00004300(s32);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceUmd9660_driver_F42C0AEE(void);
s32 sceUmdMan_driver_60933ECD();
s32 sceUmdMan_driver_84410A8E(s32);
s32 sceUmdMan_driver_85AEA6C5();
void *sceUmdMan_driver_E192C10A();
M2C_UNK sceUmd_27A764A1();

#endif
