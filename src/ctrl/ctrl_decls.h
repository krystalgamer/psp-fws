#ifndef CTRL_DECLS_H
#define CTRL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00001D70_s {
    u8 pad0[0xA34];
    volatile s32 unkA34;
    volatile s32 unkA38;
    volatile s32 unkA3C;
    volatile s32 unkA40;
};

extern u32 D_00001BFC;
extern struct D_00001D70_s D_00001D70;
extern s8 D_00001D7F;
extern s32 D_00001D88;
extern s8 D_00001D9F;
extern s8 D_00001DCE;
extern s32 D_00002354;
extern s32 D_00002358;
extern s32 D_00002618;
extern s32 D_0000261C;
extern s32 D_00002620;
extern s32 D_00002624;
extern s32 D_000027A4;
extern s32 D_000027A8;
extern s32 D_000027AC;
extern s32 D_000027B0;

s32 func_00000804(s32, s32, s32);
s32 func_000011E4(void);
s32 func_000011F0(void);
s32 func_000011FC(void);
s32 func_00001208(void);
s32 func_00001214(void);
s32 func_00001220(void);
s32 func_00001298(s32, s32, s32);
s32 func_00001548(void);
s32 func_00001554(void);
s32 func_00001560(void);
s32 func_0000156C(void);
s32 func_00001578(void);
s32 func_000015C0(void);
s32 func_00001600(void);
s32 func_0000161C(s32, s32, s32);
s32 module_reboot_before(void);
s32 module_start(void);
M2C_UNK sceCtrlEnd();
s32 sceCtrlGetIdleCancelKey(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3);
M2C_UNK sceCtrlInit();
s32 sceCtrlPeekBufferNegative(void *arg0, s32 arg1);
s32 sceCtrlPeekBufferPositive(void *arg0, s32 arg1);
s32 sceCtrlReadBufferNegative(void *arg0, s32 arg1);
s32 sceCtrlReadBufferPositive(void *arg0, s32 arg1);
s32 sceCtrlSetIdleCancelKey(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 sceCtrlSetPollingMode(s8 arg0);
s32 sceCtrlSetSuspendingExtraSamples(u32 arg0);
s32 sceCtrlGetSuspendingExtraSamples(void);
s32 sceCtrl_driver_CC70B61E(void);
s32 sceKernelSetEventFlag(s32, u32);

#endif
