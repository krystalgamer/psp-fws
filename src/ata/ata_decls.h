#ifndef ATA_DECLS_H
#define ATA_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00000000(M2C_UNK);
s32 func_000019F0(void);
s32 func_000022EC(void);
void func_000022F4(void);
M2C_UNK func_00003FB0();
s32 module_start(void);
void sceAta_driver_6FD8E2AB(void);
M2C_UNK sceAta_driver_CDC50BF0(M2C_UNK);
M2C_UNK sceSysreg_driver_F5B80837();

#endif
