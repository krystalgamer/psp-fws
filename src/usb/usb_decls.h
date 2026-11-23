#ifndef USB_DECLS_H
#define USB_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK D_00009A3C;
extern s32 D_0000AFB0;
extern M2C_UNK D_0000B014;
extern s32 D_0000B440;
extern s32 D_0000B444;
extern s32 D_0000B448;
extern s32 D_0000B44C;
extern s32 D_0000B450;

M2C_UNK InterruptManagerForKernel_D774BA45(M2C_UNK);
M2C_UNK InterruptManagerForKernel_F987B1F0(M2C_UNK);
M2C_UNK KDebugForKernel_84F370BC(M2C_UNK *, s32);
s32 func_00002F64(s32, s32, s32, s32);
s32 func_00005C38(void);
s32 func_00005CC0(void);
s32 func_00005CC8(void);
s32 func_00007344(void);
s32 func_00007414(void);
s32 func_000074B4(void);
s32 func_00007504(void);
s32 func_00007554(s32 arg0);
s32 func_000075A4(void);
s32 func_000076B4(void);
void *func_00008318(void *arg0, void *arg1);
s32 func_00008A30(void);
void func_00008AA8(void);
s32 func_00008BD8(void);
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
s32 sceUsbBus_driver_48CCE3C1(void);
void sceUsbBus_driver_7B87815D(void);
s32 sceUsbBus_driver_8A3EB5D2(void);
void sceUsbBus_driver_90B82F55(void);
void sceUsbBus_driver_FBA2072B(void);
s32 sceUsbWaitState(u32 arg0, s32 arg1, void *arg2);
s32 sceUsbWaitStateCB(u32 arg0, s32 arg1, void *arg2);

#endif
