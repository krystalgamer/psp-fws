#ifndef SYSREG_DECLS_H
#define SYSREG_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_000025C0;
extern M2C_UNK D_00002BD0;
extern M2C_UNK func_00001814;

s32 func_000000B4(void);
s32 func_000000BC(void);
s32 func_000000C4(void);
s32 func_00000588(u32 mask, s32 on);
s32 func_00000B64(u32 mask, s32 on);
s32 func_00000C58(u32 mask, s32 on);
s32 func_00001104(u32 mask, s32 on);
s32 func_00001A68(u32 bit, s32 on);
s32 func_00001AF8(u32 mask, s32 on);
s32 func_00001BF4(u32 mask, s32 on);
s32 module_reboot_before(void);
s32 module_start(void);
void sceKernelCpuResumeIntr(s32);
void sceKernelCpuResumeIntrWithSync(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceKernelEnableIntr(M2C_UNK);
M2C_UNK sceKernelRegisterIntrHandler(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *);
M2C_UNK sceKernelRegisterSysEventHandler(M2C_UNK *);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceSysregEnd(void);
void sceSysregGpioIoDisable(s32 arg0);
void sceSysregGpioIoEnable(s32 arg0);
s32 sceSysregInit(void);
s32 sceSysregIntrEnd(void);
s32 sceSysregIntrInit(void);
s32 sceSysregKeyClkDisable(void);
s32 sceSysregKeyClkEnable(void);
s32 sceSysregKeyIoDisable(void);
s32 sceSysregKeyIoEnable(void);
s32 sceSysregPllUpdateFrequency(void);
s32 sceSysregUsbAcquireIntr(s32 arg0);

#endif
