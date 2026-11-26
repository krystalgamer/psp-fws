#ifndef LED_DECLS_H
#define LED_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000008A0;
extern s32 D_00000B30;
extern s32 D_00000B80;
extern s32 D_00000BA0;
extern M2C_UNK func_00000000;

s32 func_00000590(s32 arg0);
s32 func_00000800(s32 arg0);
s32 module_reboot_before(void);
s32 module_start(void);
M2C_UNK sceGpioPortClear(M2C_UNK);
M2C_UNK sceGpioPortSet(M2C_UNK);
M2C_UNK sceGpioSetPortMode(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelDisableSubIntr(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelEnableSubIntr(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelRegisterSubIntrHandler(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
s32 sceLedResume(void);
s32 sceLedSuspend(void);
M2C_UNK sceKernelRegisterSysEventHandler(M2C_UNK *);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
M2C_UNK sceSysconCtrlLED(M2C_UNK, M2C_UNK);
s32 sceSysconGetWlanPowerCtrl();

#endif
