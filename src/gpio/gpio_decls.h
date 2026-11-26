#ifndef GPIO_DECLS_H
#define GPIO_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00000CB0;
extern u32 D_00000D44;
extern M2C_UNK D_00000E40;
extern u32 D_00000E94;

M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
s32 module_reboot_before(void);
s32 sceGpioSuspend(void);
s32 sceGpioEnd(void);
s32 sceGpioGetCapturePort(u32 arg0);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);

#endif
