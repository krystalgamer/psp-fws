#ifndef CTRL_DECLS_H
#define CTRL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern s8 D_00001D7F;
extern s32 D_00001D88;
extern s32 D_000027A4;
extern s32 D_000027A8;
extern s32 D_000027AC;
extern s32 D_000027B0;

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
s32 sceCtrl_driver_252D3A8D(s8 arg0);
M2C_UNK sceCtrl_driver_3E65A0EA();
s32 sceCtrl_driver_AF5960F3(void);
s32 sceCtrl_driver_B7CEAED4(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3);
M2C_UNK sceCtrl_driver_E03956E9();

#endif
