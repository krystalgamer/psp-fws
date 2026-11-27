#ifndef PWM_DECLS_H
#define PWM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00000550;
extern u8 D_00000590[];

s32 module_reboot_before(void);
s32 module_start(void);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 scePwmEnd(void);
s32 scePwmInit(void);
s32 scePwmResume(void);
s32 sceSysregPwmClkDisable(void);
s32 sceSysregPwmClkEnable(void);
s32 sceSysregPwmIoDisable(void);
s32 sceSysregPwmIoEnable(void);

#endif
