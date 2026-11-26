#ifndef USB_DECLS_H
#define USB_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00008318_0 {
    u8 pad0[0x40];
    struct Unk_func_00008318_temp_a0 *unk40;
};

struct Unk_func_00008318_1 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_func_00008318_temp_a0 {
    u8 pad0[0x40];
    void *unk40;
};

extern s32 D_000094F0;
extern s32 D_00009554;
extern M2C_UNK D_00009A3C;
extern void *D_00009FC8;
extern s32 D_0000A034;
extern s32 D_0000A038;
extern s32 D_0000A9DC;
extern s32 D_0000A9EC;
extern s32 D_0000AA0C;
extern s32 D_0000AA3C;
extern s32 D_0000AA4C;
extern s32 D_0000AA6C;
extern s32 D_0000AD2C;
extern s32 D_0000AD4C;
extern s32 D_0000AD8C;
extern s32 D_0000AE40_v100;
extern s32 D_0000AE80;
extern s32 D_0000AFB0;
extern s32 D_0000AFF0;
extern M2C_UNK D_0000B014;
extern s32 D_0000B1C4;
extern s32 D_0000B1C8;
extern s32 D_0000B1CC;
extern s32 D_0000B440;
extern s32 D_0000B444;
extern s32 D_0000B448;
extern s32 D_0000B44C;
extern s32 D_0000B450;

M2C_UNK sceKernelDisableIntr(M2C_UNK);
M2C_UNK sceKernelReleaseIntrHandler(M2C_UNK);
M2C_UNK Kprintf(M2C_UNK *, s32);
s32 func_00000090(s32, s32);
s32 func_00002E4C(s32, s32, s32, s32);
s32 func_00002F64(s32, s32, s32, s32);
void func_00003198(void);
void func_0000581C(void);
s32 func_00005A70(void);
s32 func_00005AF0(void);
s32 func_00005B10(void);
s32 func_00005B6C(void);
s32 func_00005BA0(void);
s32 func_00005C38(void);
s32 func_00005CC0(void);
s32 func_00005CC8(void);
void func_000071AC(void);
s32 func_0000732C(void);
s32 func_00007344(void);
s32 func_00007414(void);
s32 func_00007440(void);
s32 func_000074B4(void);
s32 func_00007504(void);
s32 func_0000751C(void);
s32 func_00007554(s32 arg0);
s32 func_0000756C(void);
s32 func_000075A4(void);
s32 func_000075BC(s32 arg0);
s32 func_0000760C(void);
s32 func_000076B4(void);
void *func_00008318(struct Unk_func_00008318_0 *arg0, struct Unk_func_00008318_1 *arg1);
s32 func_00008318_v300(void);
s32 func_00008318_v301(void);
s32 func_00008318_v302(void);
s32 func_00008318_v303(void);
void *func_00008334(void *arg0, void *arg1);
s32 func_00008A24(void);
s32 func_00008A30(void);
void func_00008AA8(void);
void func_00008ACC(void);
s32 func_00008ADC(void);
s32 func_00008B28(void);
s32 func_00008BD8(void);
s32 func_00008BFC(void);
s32 func_00008D38(s32 arg0);
s32 module_start(void);
M2C_UNK sceGpioPortClear(M2C_UNK);
M2C_UNK sceGpioPortSet(M2C_UNK);
s32 sceGpioSetPortMode(M2C_UNK, M2C_UNK);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
s32 sceKernelRegisterSysEventHandler(M2C_UNK *);
s32 sceKernelUnregisterSysEventHandler(M2C_UNK *);
M2C_UNK sceSysregUsbClkDisable(M2C_UNK);
M2C_UNK sceSysregUsbBusClockEnable();
M2C_UNK sceSysregUsbAcquireIntr(M2C_UNK);
M2C_UNK sceSysregUsbClkEnable(M2C_UNK);
M2C_UNK sceSysregUsbIoDisable();
M2C_UNK sceSysregUsbBusClockDisable();
s32 sceUsbActivate(u32 arg0);
s32 sceUsbBus_driver_48CCE3C1(void);
void sceUsbBus_driver_7B87815D(void);
s32 sceUsbBus_driver_8A3EB5D2(void);
void sceUsbBus_driver_90B82F55(void);
void sceUsbBus_driver_FBA2072B(void);
s32 sceUsbWaitState(u32 arg0, s32 arg1, void *arg2);
s32 sceUsbWaitStateCB(u32 arg0, s32 arg1, void *arg2);
s32 module_reboot_phase(s32 arg0);

#endif
