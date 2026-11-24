#ifndef USBGPS_DECLS_H
#define USBGPS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00005960;
extern u8 D_00008529;
extern s32 D_0000852C;

s32 func_00000F28(s32);
s32 func_00001504(s32 arg0);
s32 func_00002804(void);
s32 func_00002888(s32 *arg0);
void func_00002978(void *arg0);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceUsbBus_driver_C1E2A540(M2C_UNK *);

#endif
