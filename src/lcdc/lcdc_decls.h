#ifndef LCDC_DECLS_H
#define LCDC_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s32 D_00000C30;
extern s32 D_00000C70;
extern s32 D_00000DA8;
extern M2C_UNK D_00000EF0;
extern s32 D_00000F30;
extern s32 D_00000F3C;

s32 module_reboot_before(void);
s32 module_start(void);
s32 sceLcdcEnd(void);
s32 sceLcdc_driver_825DB9C5(void);
s32 sceLcdcDisable(void);
s32 sceLcdcEnable(void);
s32 sceLcdcInit(void);
s32 sceLcdcSuspend(void);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
M2C_UNK sceSysregLcdcIoEnable();
M2C_UNK sceSysregLcdcClkDisable();
M2C_UNK sceSysregLcdcIoDisable();

#endif
