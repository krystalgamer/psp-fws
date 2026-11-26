#ifndef USBSTORMS_DECLS_H
#define USBSTORMS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00002D00;
extern M2C_UNK D_00002D20;
extern M2C_UNK D_00003460;

M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, M2C_UNK *);
s32 func_00003944(s32 arg0, s32 arg1);
s32 func_00004380(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_start(void);
s32 sceKernelPowerUnlock(s32);
M2C_UNK sceReg_driver_0CAE832B(s32);
M2C_UNK sceReg_driver_FA8A5739(s32);
s32 sceUsbstor_internal_489E6BF1(M2C_UNK *);

#endif
