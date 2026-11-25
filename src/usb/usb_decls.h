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

extern M2C_UNK D_00009A3C;
extern s32 D_0000A9DC;
extern s32 D_0000A9EC;
extern s32 D_0000AA0C;
extern s32 D_0000AA3C;
extern s32 D_0000AA4C;
extern s32 D_0000AA6C;
extern s32 D_0000AD2C;
extern s32 D_0000AD8C;
extern s32 D_0000AE40_v100;
extern s32 D_0000AE80;
extern s32 D_0000AFB0;
extern M2C_UNK D_0000B014;
extern s32 D_0000B1C4;
extern s32 D_0000B1C8;
extern s32 D_0000B1CC;
extern s32 D_0000B440;
extern s32 D_0000B444;
extern s32 D_0000B448;
extern s32 D_0000B44C;
extern s32 D_0000B450;

M2C_UNK InterruptManagerForKernel_D774BA45(M2C_UNK);
M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, s32);
s32 func_00000090(s32, s32);
s32 func_00002E4C(s32, s32, s32, s32);
s32 func_00002F64(s32, s32, s32, s32);
s32 func_00005A70(void);
s32 func_00005AF0(void);
s32 func_00005B10(void);
s32 func_00005B6C(void);
s32 func_00005C38(void);
s32 func_00005CC0(void);
s32 func_00005CC8(void);
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
void *func_00008334(void *arg0, void *arg1);
s32 func_00008A24(void);
s32 func_00008A30(void);
void func_00008AA8(void);
void func_00008ACC(void);
s32 func_00008BD8(void);
s32 func_00008BFC(void);
s32 func_00008D38(s32 arg0);
s32 module_start(void);
s32 sceGpio_driver_317D9D2C(M2C_UNK, M2C_UNK);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelPowerLock(s32);
s32 sceKernelPowerUnlock(s32);
s32 sceSysEventForKernel_CD9E4BB5(M2C_UNK *);
s32 sceSysEventForKernel_D7D3FDCD(M2C_UNK *);
M2C_UNK sceSysreg_driver_38EC3281(M2C_UNK);
M2C_UNK sceSysreg_driver_692F31FF(M2C_UNK);
M2C_UNK sceSysreg_driver_A3C8E075();
M2C_UNK sceSysreg_driver_BFBABB63();
s32 sceUsbActivate(u32 arg0);
s32 sceUsbBus_driver_48CCE3C1(void);
void sceUsbBus_driver_7B87815D(void);
s32 sceUsbBus_driver_8A3EB5D2(void);
void sceUsbBus_driver_90B82F55(void);
void sceUsbBus_driver_FBA2072B(void);
s32 sceUsbWaitState(u32 arg0, s32 arg1, void *arg2);
s32 sceUsbWaitStateCB(u32 arg0, s32 arg1, void *arg2);

#endif
