#ifndef LCDC_DECLS_H
#define LCDC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00000C30;
extern s32 D_00000C70;
extern M2C_UNK D_00000EF0;
extern s32 D_00000F30;
extern s32 D_00000F3C;

s32 module_reboot_before(void);
s32 module_start(void);
s32 sceLcdc_driver_0E8E8774(void);
s32 sceLcdc_driver_825DB9C5(void);
s32 sceLcdc_driver_A0032C3D(void);
s32 sceLcdc_driver_A182B32C(void);
s32 sceLcdc_driver_B55500A3(void);
s32 sceLcdc_driver_DCD51769(void);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_63B1AADF();
M2C_UNK sceSysreg_driver_E89243BE();
M2C_UNK sceSysreg_driver_F74F14E9();

#endif
