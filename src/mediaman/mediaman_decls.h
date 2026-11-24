#ifndef MEDIAMAN_DECLS_H
#define MEDIAMAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00000138(void);
s32 module_start(void);
s32 sceGpio_driver_317D9D2C(M2C_UNK, M2C_UNK);
M2C_UNK sceGpio_driver_37C8DADC(M2C_UNK, M2C_UNK);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDisableSubIntr(M2C_UNK, M2C_UNK);
s32 sceKernelEnableSubIntr(M2C_UNK, M2C_UNK);
void sceUmdGetDriveStat(void);
void sceUmd_1A2485D2(void);
void sceUmd_3BA4EC53(void);
s32 sceUmd_725DFB14(void);
s32 sceUmd_7F40CC41(void);
M2C_UNK sceUmd_D45D1FE6();

#endif
