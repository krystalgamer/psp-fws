#ifndef USBSTOR_DECLS_H
#define USBSTOR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00002724;
extern M2C_UNK D_000029A8;
extern M2C_UNK D_000029F0;

M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, M2C_UNK *);
void func_00001A40(void);
void func_00001BB0(void);
void func_00001BE4(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_start(void);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceUsbBus_driver_B1644BE7(M2C_UNK *);

#endif
