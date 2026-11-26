#ifndef I2C_DECLS_H
#define I2C_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00001730_s {
    volatile s32 unk0;
    volatile s32 unk4;
    u8 pad8[0x8];
    volatile s32 unk10;
    volatile s32 unk14;
};

extern s32 D_00001570;
extern M2C_UNK D_000015B0;
extern s32 D_000015B8;
extern s32 D_000016E0_v300;
extern s32 D_000016E0_v301;
extern s32 D_000016E0_v302;
extern s32 D_000016E0_v303;
extern s32 D_000016E0_v310;
extern s32 D_000016E0_v311;
extern s32 D_000016E0_v330;
extern s32 D_000016E0_v340;
extern M2C_UNK D_000016F0;
extern s32 D_00001718;
extern struct D_00001730_s D_00001730;
extern s32 D_00001738;
extern s32 D_0000173C;

M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
s32 module_reboot_before(void);
s32 sceI2cSetPollingMode(s32 arg0);
s32 sceI2cReset(void);
s32 sceI2cSuspend(void);
s32 sceI2cEnd(void);
s32 sceI2cResume(void);
s32 sceI2cSetClock(s32 arg0, s32 arg1);
s32 sceI2cSetDebugHandlers(s32 arg0);
s32 sceKernelDelayThread(u32);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteMutex(s32);
s32 sceKernelDeleteSema(s32);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
M2C_UNK sceSysregIicIoEnable();
M2C_UNK sceSysregIicIoDisable();
M2C_UNK sceSysregIicClkDisable();
M2C_UNK sceSysregIicClkEnable();

#endif
