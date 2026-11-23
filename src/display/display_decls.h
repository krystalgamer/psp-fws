#ifndef DISPLAY_DECLS_H
#define DISPLAY_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00003D10;

M2C_UNK InterruptManagerForKernel_D774BA45(M2C_UNK);
s32 func_00002A64(void);
s32 func_00002AA0(void);
s32 module_start(void);
void sceDisplayGetFramePerSec(void);
s32 sceDisplay_driver_206276C2(void);
s32 sceDisplay_driver_7A10289D(void);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
M2C_UNK sceLcdc_driver_3107417C();
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_F6D83AD0(M2C_UNK);

#endif
