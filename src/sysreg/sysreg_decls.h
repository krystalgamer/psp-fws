#ifndef SYSREG_DECLS_H
#define SYSREG_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000025C0;

M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
s32 func_000000B4(void);
s32 func_000000BC(void);
s32 func_000000C4(void);
s32 module_reboot_before(void);
s32 module_start(void);
M2C_UNK sceSysEventForKernel_CD9E4BB5(M2C_UNK *);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
s32 sceSysreg_driver_25673620(void);
s32 sceSysreg_driver_4EE8E2C8(void);
s32 sceSysreg_driver_BB3623DF(void);
s32 sceSysreg_driver_F2DEAA14(void);

#endif
