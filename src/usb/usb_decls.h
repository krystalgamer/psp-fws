#ifndef USB_DECLS_H
#define USB_DECLS_H

#include "common.h"
#include "m2c_macros.h"


M2C_UNK InterruptManagerForKernel_D774BA45(M2C_UNK);
M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
s32 func_00002F64(s32, s32, s32, s32);
s32 func_00005C38(void);
s32 func_00005CC0(void);
s32 func_00005CC8(void);
s32 func_00007344(void);
s32 func_00007414(void);
s32 func_00007504(void);
s32 func_00007554(s32 arg0);
s32 func_000075A4(void);
s32 func_000076B4(void);
void *func_00008318(void *arg0, void *arg1);
s32 func_00008BD8(void);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
M2C_UNK sceSysreg_driver_38EC3281(M2C_UNK);
M2C_UNK sceSysreg_driver_692F31FF(M2C_UNK);
M2C_UNK sceSysreg_driver_A3C8E075();
M2C_UNK sceSysreg_driver_BFBABB63();
s32 sceUsbWaitState(u32 arg0, s32 arg1, void *arg2);
s32 sceUsbWaitStateCB(u32 arg0, s32 arg1, void *arg2);

#endif
