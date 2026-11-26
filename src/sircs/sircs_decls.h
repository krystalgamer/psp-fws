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

extern s32 D_00002050;
extern s32 D_00002100;
extern s32 D_00002140;
extern s32 D_00002148;
extern s32 D_00002160;
extern s32 D_000026A8;
extern M2C_UNK D_000026E0;
extern s32 D_00002724;
extern s32 D_00002728;
extern s32 D_00002768;
extern struct D_00002770_s D_00002770;
extern s32 D_00002794;
extern M2C_UNK func_00002044;

void func_000004D8(void);
void func_00000518(void);
s32 func_00000554(void);
s32 func_00000634(void);
void func_00000894(void);
void func_000008D4(void);
s32 func_00000910(void);
s32 func_000009F4(void);
s32 func_000011F8(void *arg0);
s32 func_00001394(void);
s32 func_000013F0(void);
s32 func_000014DC(void);
s32 func_000014F8(void);
void func_00001524(void);
void func_00001540(void);
s32 func_00001718(void);
s32 func_000018E4(struct Unk_func_000018E4_0 *arg0);
s32 func_00001980(void);
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
M2C_UNK sceGpioPortSet(M2C_UNK);
M2C_UNK sceIoAddDrv(M2C_UNK *);
M2C_UNK sceIoDelDrv(s32);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
s32 sceKernelSetAlarm(u32, s32, void *);
M2C_UNK sceKernelUnregisterSysEventHandler(M2C_UNK *);
s32 sceKernelWaitEventFlag(s32, u32, s32, void *, void *);
s32 sceSircsEnd(void);
M2C_UNK sceSysregSircsClkDisable();
M2C_UNK sceSysregSircsIoDisable();
M2C_UNK sceSysregUartClkEnable(M2C_UNK);
M2C_UNK sceSysregUartIoDisable(M2C_UNK);

#endif
