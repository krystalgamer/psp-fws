#ifndef UMD9660_DECLS_H
#define UMD9660_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_Unk_func_00003FF0_0_64 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00003FF0_0 {
    u8 pad0[0x64];
    struct Unk_Unk_func_00003FF0_0_64 *unk64;
};

struct Unk_func_00003FFC_0 {
    u8 pad0[0x64];
    s32 unk64;
};

struct Unk_func_00004164_0 {
    u8 pad0[0x64];
    s32 unk64;
};

extern M2C_UNK D_00005C80;
extern M2C_UNK D_00005C88;
extern M2C_UNK D_00005CA0;
extern u8 D_000070B0;
extern u8 D_000070B1;
extern u8 D_000070B2;
extern u8 D_000070B3;
extern s32 D_000070B8;
extern s32 D_000070BC;
extern s32 D_000070C0;
extern s32 D_000070CC;
extern s32 D_000070D0;
extern s32 D_000070D4;
extern s32 D_000070D8;
extern M2C_UNK func_000036D8;

s32 func_00000B34(s32 arg0);
s32 func_00000B48(s32 arg0);
M2C_UNK *func_000019D0(void);
s32 func_00003BFC(void);
M2C_UNK *func_00003C04(void);
s32 func_00003C80(s32 arg0);
s32 func_00003F70(void);
void func_00003FAC(void);
void func_00003FD4(void);
s32 func_00003FF0(struct Unk_func_00003FF0_0 *arg0);
s32 func_00003FFC(struct Unk_func_00003FFC_0 *arg0);
s32 func_00004164(struct Unk_func_00004164_0 *arg0);
s32 func_00004264(s32 *arg0);
s32 func_00004300(s32);
void func_00005334(s32 arg0);
s32 func_00005340(void);
u8 func_00005358(void);
u8 func_00005364(void);
u8 func_00005370(void);
u8 func_0000537C(void);
s32 func_000053B8(void);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
s32 sceUmd9660_driver_2C6C3F4C(void);
s32 sceUmd9660_driver_44EF600C(void);
s32 sceUmd9660_driver_C7CD9CE8(void);
s32 sceUmd9660_driver_CAAFFE8D(void);
s32 sceUmd9660_driver_F42C0AEE(void);
s32 sceUmdMan_driver_60933ECD();
s32 sceUmdMan_driver_84410A8E(s32);
s32 sceUmdMan_driver_85AEA6C5();
void *sceUmdMan_driver_E192C10A();
M2C_UNK sceUmd_27A764A1();
M2C_UNK sceUmd_7850F057(M2C_UNK *, M2C_UNK *);

#endif
