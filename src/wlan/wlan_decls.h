#ifndef WLAN_DECLS_H
#define WLAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"


void func_00003114(void *arg0);
void func_00003138(void *arg0);
M2C_UNK func_00004A04(s32);
s32 func_00004B20(s32 *arg0);
void func_000082AC(void);
s32 func_00008308(void *arg0, void *arg1);
void func_000083F0(void);
void func_00008470(void *arg0);
void func_0000AC3C(void);
void func_0000B24C(void);
s32 func_0000BF70(void);
s32 func_0000D18C(void);
M2C_UNK func_000161A4();
s32 module_reboot_before(void);
M2C_UNK sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr();
M2C_UNK sceKernelDeleteVpl();
M2C_UNK sceKernelFreeVpl(s32);
M2C_UNK sceKernelSignalSema(s32, M2C_UNK);
M2C_UNK sceKernelWaitSema(s32, M2C_UNK, M2C_UNK);
M2C_UNK sceSysreg_driver_00C2628E(M2C_UNK);
M2C_UNK sceSysreg_driver_1969E840(M2C_UNK, M2C_UNK);
M2C_UNK sceSysreg_driver_1D382514(M2C_UNK, M2C_UNK);
M2C_UNK sceSysreg_driver_31154490(M2C_UNK);
M2C_UNK sceSysreg_driver_4716E71E(M2C_UNK);
M2C_UNK sceSysreg_driver_D74F1D48(M2C_UNK);
M2C_UNK sceSysreg_driver_EC4BF81F(M2C_UNK);
M2C_UNK sceWlanDrv_driver_EC9232F0();

#endif
