#ifndef USBGPS_DECLS_H
#define USBGPS_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_000059B0_s {
    s32 unk0;
    u8 pad4[0x1578];
    u32 unk157C;
};

struct D_00008478_s {
    u8 pad0[0xB0];
    volatile s8 unkB0;
    volatile s8 unkB1;
    u8 padB2[0x2];
    volatile s32 unkB4;
    volatile s32 unkB8;
    volatile s32 unkBC;
    volatile s32 unkC0;
};

struct Unk_func_00002978_0 {
    u8 pad0[0x20];
    struct Unk_func_00002978_temp_a2 *unk20;
};

struct Unk_func_00002978_temp_a2 {
    u8 pad0[0x28];
    void *unk28;
    u8 pad2C[0x7C];
    s32 unkA8;
};

extern M2C_UNK D_00005960;
extern struct D_000059B0_s D_000059B0;
extern struct D_00008478_s D_00008478;
extern u8 D_00008529;
extern s32 D_0000852C;

s32 func_00000F28(s32);
s32 func_00001504(s32 arg0);
s32 func_000027AC(void);
s32 func_00002804(void);
s32 func_00002888(s32 *arg0);
void func_00002978(struct Unk_func_00002978_0 *arg0);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelSetEventFlag(s32, u32);
s32 sceUsbBus_driver_B1644BE7(M2C_UNK *);
s32 sceUsbBus_driver_C1E2A540(M2C_UNK *);
s32 sceUsbGps_driver_268F95CA(u32 arg0);

#endif
