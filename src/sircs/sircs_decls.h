#ifndef SIRCS_DECLS_H
#define SIRCS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00002770_s {
    s32 unk0;
    u8 pad4[0x18];
    volatile s32 unk1C;
    volatile s32 unk20;
};

struct Unk_func_000018E4_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

extern M2C_UNK D_000026A8;
extern M2C_UNK D_000026E0;
extern s32 D_00002724;
extern s32 D_00002728;
extern s32 D_00002768;
extern struct D_00002770_s D_00002770;
extern s32 D_00002794;
extern M2C_UNK func_00002044;

M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
M2C_UNK IoFileMgrForKernel_8E982A74(M2C_UNK *);
void func_00000894(void);
void func_000008D4(void);
s32 func_00000910(void);
s32 func_000009F4(void);
s32 func_000013F0(void);
s32 func_00001718(void);
s32 func_000018E4(struct Unk_func_000018E4_0 *arg0);
s32 func_000019C0(void);
s32 func_00001A74(void);
void func_00001A80(s32 arg0);
s32 func_00001A8C(void);
s32 func_00001AB0(void);
s32 func_00001B24(void);
void func_00001B50(void);
void func_00001B6C(void);
s32 func_00001C34(void);
s32 func_00001D5C(void);
s32 module_reboot_before(void);
M2C_UNK sceGpio_driver_310F0CCF(M2C_UNK);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelSetAlarm(u32, s32, void *);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
s32 sceSircs_driver_19155A2F(void);
M2C_UNK sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_20388C9E();
M2C_UNK sceSysreg_driver_26FA0928();
M2C_UNK sceSysreg_driver_7725CA08(M2C_UNK);
M2C_UNK sceSysreg_driver_BB823481(M2C_UNK);

#endif
