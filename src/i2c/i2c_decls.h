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
extern M2C_UNK D_000016F0;
extern s32 D_00001718;
extern struct D_00001730_s D_00001730;
extern s32 D_00001738;
extern s32 D_0000173C;

M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
s32 module_reboot_before(void);
s32 sceI2c_driver_0397408B(s32 arg0);
s32 sceI2c_driver_17B0DA59(void);
s32 sceI2c_driver_21A8282C(void);
s32 sceI2c_driver_4809D85F(void);
s32 sceI2c_driver_B952BA65(void);
s32 sceI2c_driver_D6E9836A(s32 arg0, s32 arg1);
s32 sceI2c_driver_DB6C4F9B(s32 arg0);
s32 sceKernelDelayThread(u32);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteMutex(s32);
s32 sceKernelDeleteSema(s32);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_0436B60F();
M2C_UNK sceSysreg_driver_58F47EFD();
M2C_UNK sceSysreg_driver_94B0323C();
M2C_UNK sceSysreg_driver_DC68A93F();

#endif
