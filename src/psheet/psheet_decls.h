#ifndef PSHEET_DECLS_H
#define PSHEET_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_000027EC;
extern M2C_UNK D_00002804;
extern s32 D_000029C4;
extern s32 D_000029E0;
extern s32 D_00002A1C;
extern s32 D_00002A30;
extern M2C_UNK D_00002A80;
extern M2C_UNK D_00002AC0;
extern M2C_UNK D_00002F30;
extern s32 D_00002F48;

M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32);
s32 func_0000127C(void *arg0);
s32 func_000012F0(s32 arg0);
s32 func_00001360(s32 arg0, s32 arg1);
s32 func_000013D8(void);
s32 func_00001460(s32);
s32 func_00001F94(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0000217C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 module_reboot_before(void);
s32 sceAmctrl_driver_0785C974(M2C_UNK *, s32, s32);
s32 sceAmctrl_driver_1CCB66D2(M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, s32);
s32 sceAmctrl_driver_9951C50F(M2C_UNK *);
s32 sceKernelDeleteSema(s32);
s32 sceKernelSignalSema(u32, s32);
s32 sceKernelWaitSema(u32, s32, void *);
void scePsheet_driver_226D9099(void);
s32 scePsheet_driver_302AB4B8(s32, s32);
s32 scePsheet_driver_3CEC4078(void);

#endif
