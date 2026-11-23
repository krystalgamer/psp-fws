#ifndef SIRCS_DECLS_H
#define SIRCS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000026E0;

s32 func_00001718(void);
s32 func_00001B24(void);
void func_00001B50(void);
void func_00001B6C(void);
s32 func_00001C34(void);
s32 func_00001D5C(void);
s32 module_reboot_before(void);
M2C_UNK sceGpio_driver_310F0CCF(M2C_UNK);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_20388C9E();
M2C_UNK sceSysreg_driver_26FA0928();
M2C_UNK sceSysreg_driver_7725CA08(M2C_UNK);
M2C_UNK sceSysreg_driver_BB823481(M2C_UNK);

#endif
