#ifndef LED_DECLS_H
#define LED_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000008A0;
extern M2C_UNK func_00000000;

s32 func_00000590(s32 arg0);
s32 func_00000800(s32 arg0);
s32 module_reboot_before(void);
s32 module_start(void);
M2C_UNK sceGpio_driver_103C3EB2(M2C_UNK);
M2C_UNK sceGpio_driver_310F0CCF(M2C_UNK);
M2C_UNK sceGpio_driver_317D9D2C(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelDisableSubIntr(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelEnableSubIntr(M2C_UNK, M2C_UNK);
M2C_UNK sceKernelRegisterSubIntrHandler(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK sceKernelReleaseSubIntrHandler(M2C_UNK, M2C_UNK);
s32 sceLed_driver_A13B3D38(void);
s32 sceLed_driver_DE91D3A4(void);
M2C_UNK sceSysEventForKernel_CD9E4BB5(M2C_UNK *);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSyscon_driver_18BFBE65(M2C_UNK, M2C_UNK);
s32 sceSyscon_driver_EC37C549();

#endif
