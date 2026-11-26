#ifndef PWM_DECLS_H
#define PWM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00000550;

s32 module_reboot_before(void);
s32 module_start(void);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 scePwmEnd(void);
s32 scePwmInit(void);
s32 scePwmResume(void);
M2C_UNK sceSysregPwmClkEnable();
M2C_UNK sceSysregPwmIoEnable();

#endif
