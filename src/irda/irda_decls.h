#ifndef IRDA_DECLS_H
#define IRDA_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00000850(void);
M2C_UNK func_00000BC4();
M2C_UNK func_00000BE8();
void func_00000C88(void);
void func_00000CA4(void);
M2C_UNK func_00000D6C();
M2C_UNK func_00000E94();
s32 module_reboot_before(void);
s32 module_start(void);
M2C_UNK sceGpio_driver_310F0CCF(M2C_UNK);
M2C_UNK sceSysreg_driver_7725CA08(M2C_UNK);
M2C_UNK sceSysreg_driver_BB823481(M2C_UNK);

#endif
