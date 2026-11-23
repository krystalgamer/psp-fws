#ifndef WLAN_DECLS_H
#define WLAN_DECLS_H

#include "common.h"
#include "m2c_macros.h"


M2C_UNK DmacManForKernel_745E19EF(s32);
M2C_UNK InterruptManagerForKernel_CDC86B64(s32, M2C_UNK, s32, M2C_UNK);
void func_00003114(void *arg0);
void func_00003138(void *arg0);
s32 func_00003304(void *arg0);
void func_00003374(void *arg0);
void func_000033E4(void *arg0);
s32 func_00003CE0(void *arg0);
s32 func_00004A04(s32);
s32 func_00004B20(s32 *arg0);
void func_000082AC(void);
s32 func_000083B4(s32 *arg0);
void func_000083F0(u32 arg0);
void func_00008470(void *arg0, void *arg1);
s32 func_000090E8(void *arg0, s32 arg1, s8 *arg2);
s32 func_00009160(void *arg0, s32 arg1, u8 *arg2);
void func_0000AB18(void *arg0);
void func_0000AC3C(void);
void func_0000AC90(void *arg0);
s32 func_0000AF1C(void *arg0, s32 arg1, u16 *arg2);
s32 func_0000B018(void *arg0, s32 arg1, s32 *arg2);
void func_0000B24C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0000B3CC(s32 arg0, void *arg1, M2C_UNK arg2);
s32 func_0000BD90(s32, s32, s32, s32);
s32 func_0000BE8C(s32, s32, s32, s32);
s32 func_0000BF70(void);
s32 func_0000D18C(void);
s32 func_0000F370(void *arg0);
s32 func_000161A4(s32, s32, s32, s32, s32);
s32 func_00017A3C(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4);
s32 func_00017BCC(void *arg0, s32 arg1, s32 arg2);
s32 func_00017EA4(void *arg0, void *arg1);
s32 func_00017FC4(void *arg0, void *arg1);
s32 module_reboot_before(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelDeleteEventFlag(u32);
s32 sceKernelDeleteMbx(u32);
s32 sceKernelDeleteSema(u32);
s32 sceKernelDeleteVpl(u32);
s32 sceKernelFreeVpl(u32, void *);
s32 sceKernelSendMbx(u32, void *);
s32 sceKernelSignalSema(u32, s32);
s32 sceKernelWaitSema(u32, s32, void *);
M2C_UNK sceSysreg_driver_00C2628E(M2C_UNK);
M2C_UNK sceSysreg_driver_1969E840(M2C_UNK, M2C_UNK);
M2C_UNK sceSysreg_driver_1D382514(M2C_UNK, M2C_UNK);
M2C_UNK sceSysreg_driver_31154490(M2C_UNK);
M2C_UNK sceSysreg_driver_4716E71E(M2C_UNK);
M2C_UNK sceSysreg_driver_D74F1D48(M2C_UNK);
M2C_UNK sceSysreg_driver_EC4BF81F(M2C_UNK);
s32 sceWlanDrv_driver_EC9232F0(void);
s32 sceWlanDrv_driver_FBD385FB(void);

#endif
