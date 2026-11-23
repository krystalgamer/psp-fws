#ifndef IRDA_DECLS_H
#define IRDA_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00001740;

s32 func_00000850(void);
s32 func_00000BC4(void);
s32 func_00000BE8(void);
s32 func_00000C5C(void);
void func_00000C88(void);
void func_00000CA4(void);
s32 func_00000D6C(void);
s32 func_00000E94(void);
s32 module_reboot_before(void);
s32 module_start(void);
M2C_UNK sceGpio_driver_310F0CCF(M2C_UNK);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_7725CA08(M2C_UNK);
M2C_UNK sceSysreg_driver_BB823481(M2C_UNK);

#endif
