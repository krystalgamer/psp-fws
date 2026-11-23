#ifndef UMD9660_DECLS_H
#define UMD9660_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00003BFC(void);
s32 func_00003C80(s32 arg0);
s32 func_00003F70(void);
void func_00003FD4(void);
s32 func_00004300(s32);
M2C_UNK sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr();
s32 sceUmd9660_driver_F42C0AEE();
s32 sceUmdMan_driver_60933ECD();
void *sceUmdMan_driver_E192C10A();
M2C_UNK sceUmd_27A764A1();

#endif
