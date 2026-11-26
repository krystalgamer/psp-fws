#ifndef CHANGE_FLASH_ATTR_DECLS_H
#define CHANGE_FLASH_ATTR_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_000000EC(void);
s32 module_start(s32 arg0, s32 arg1);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);

#endif
