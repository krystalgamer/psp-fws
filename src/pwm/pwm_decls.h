#ifndef PWM_DECLS_H
#define PWM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00000550;

s32 module_reboot_before(void);
s32 module_start(void);
s32 scePwm_driver_68BA9CC1(void);
s32 scePwm_driver_E449F656(void);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_7A5D2D15();
M2C_UNK sceSysreg_driver_7DCA8302();

#endif
