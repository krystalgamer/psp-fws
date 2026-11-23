#ifndef CTRL_DECLS_H
#define CTRL_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00001548(void);
s32 func_00001554(void);
s32 func_00001560(void);
s32 func_0000156C(void);
s32 func_00001578(void);
s32 func_0000161C(s32, s32, s32);
s32 module_reboot_before(void);
s32 module_start(void);
s32 sceCtrlPeekBufferNegative(void *arg0, s32 arg1);
s32 sceCtrlPeekBufferPositive(void *arg0, s32 arg1);
s32 sceCtrlReadBufferNegative(void *arg0, s32 arg1);
s32 sceCtrlReadBufferPositive(void *arg0, s32 arg1);
M2C_UNK sceCtrl_driver_3E65A0EA();
M2C_UNK sceCtrl_driver_E03956E9();

#endif
