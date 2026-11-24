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

struct Unk_ret_sceUmdMan_driver_E192C10A {
    u8 pad0[0x74];
    s32 unk74;
};

extern M2C_UNK D_00005C80;
extern M2C_UNK D_00005C88;
extern M2C_UNK D_00005CA0;
extern M2C_UNK D_00005D38;
extern s32 D_00005D80;
extern M2C_UNK D_00005D90;
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
extern u8 D_000083A4;
extern u8 D_000083A5;
extern u8 D_000083A6;
extern u8 D_000083A7;
extern u8 D_000083A8;
extern s32 D_000083AC;
extern s32 D_000083B0;
extern s32 D_000083C0;
extern s32 D_000083D0;
extern M2C_UNK func_000036D8;
extern s32 func_00004250;

M2C_UNK IoFileMgrForKernel_8E982A74(M2C_UNK *);
s32 KDebugForKernel_D636B827();
s32 func_00000984(s32 arg0);
s32 func_00000B34(s32 arg0);
s32 func_00000B48(s32 arg0);
M2C_UNK *func_000019D0(void);
s32 func_00001D6C(void);
s32 func_00001D78(void);
s32 func_00001DD0(void);
s32 func_00001DDC(void);
s32 func_00001DE8(void);
s32 func_00001DF4(void);
s32 func_00001E00(void);
s32 func_00001E0C(void);
s32 func_00001E18(void);
s32 func_00001E24(void);
s32 func_000026E4(void);
s32 func_00003BFC(void);
M2C_UNK *func_00003C04(void);
s32 func_00003C80(s32 arg0);
void func_00003D28(s32 arg0);
s32 func_00003F70(void);
void func_00003FAC(void);
void func_00003FD4(void);
s32 func_00003FF0(struct Unk_func_00003FF0_0 *arg0);
s32 func_00003FFC(struct Unk_func_00003FFC_0 *arg0);
s32 func_00004164(struct Unk_func_00004164_0 *arg0);
s32 func_00004264(s32 *arg0);
s32 func_00004300(s32);
s32 func_00004308(void);
void func_00004330(void);
s32 func_0000434C(void *arg0);
s32 func_00004358(void *arg0);
s32 func_000043DC(void);
s32 func_000044C0(void *arg0);
s32 func_00004544(s32);
void func_00005334(s32 arg0);
s32 func_00005340(void);
u8 func_00005358(void);
u8 func_00005364(void);
u8 func_00005370(void);
u8 func_0000537C(void);
u8 func_000053B4(void);
s32 func_000053B8(void);
u8 func_000053CC(void);
u8 func_000053D8(void);
u8 func_000053E4(void);
u8 func_000053F0(void);
s32 module_start(void);
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
struct Unk_ret_sceUmdMan_driver_E192C10A *sceUmdMan_driver_E192C10A();
M2C_UNK sceUmd_27A764A1();
M2C_UNK sceUmd_7850F057(M2C_UNK *, M2C_UNK *);

#endif
