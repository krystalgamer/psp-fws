#ifndef GPIO_DECLS_H
#define GPIO_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00000E40;

M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
s32 module_reboot_before(void);
s32 sceGpio_driver_17DAA8C2(void);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);

#endif
