#ifndef PSPNET_APCTL_DECLS_H
#define PSPNET_APCTL_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_000016E0_0 {
    u8 pad0[0x7DC];
    s32 unk7DC;
};

struct Unk_func_00009850_0 {
    u8 pad0[0x2374];
    M2C_UNK * unk2374;
    s32 unk2378;
    u8 pad237C[0x14];
    s32 unk2390;
};

struct Unk_func_00009C34_0 {
    u8 pad0[0x2518];
    s32 unk2518;
};

struct Unk_func_00009C40_0 {
    u8 pad0[0x2518];
    s32 unk2518;
};

struct Unk_func_00009CE0_temp_a4 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x8];
    s32 unk18;
};

struct Unk_func_00009CE0_temp_a6 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x4];
    s32 unk14;
};

struct Unk_func_00009D80_0 {
    u8 pad0[0x24DC];
    s32 unk24DC;
};

struct Unk_func_00009D90_0 {
    u8 pad0[0x24F4];
    s32 unk24F4;
};

struct Unk_func_00009DA0_0 {
    u8 pad0[0x24DC];
    s32 unk24DC;
    u8 pad24E0[0x1C];
    s32 unk24FC;
};

struct Unk_func_0000A23C_0 {
    u8 pad0[0x30F4];
    s32 unk30F4;
};

struct Unk_func_0000A248_0 {
    u8 pad0[0x30F4];
    s32 unk30F4;
};

struct Unk_func_0000A354_temp_s1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0xBBC];
    s32 unkBC8;
};

struct Unk_func_0000A448_0 {
    u8 pad0[0x24E8];
    s32 unk24E8;
};

struct Unk_func_0000A458_temp_v1 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0x28];
    s32 unk40;
};

struct Unk_func_0000A46C_0 {
    u8 pad0[0x24D4];
    s32 unk24D4;
};

struct Unk_func_0000AB74_0 {
    u8 pad0[0x2520];
    s32 unk2520;
    s32 unk2524;
};

struct Unk_func_0000ACBC_0 {
    u8 pad0[0x24B8];
    s32 unk24B8;
};

struct Unk_func_0000ACCC_0 {
    u8 pad0[0x24B0];
    s32 unk24B0;
};

struct Unk_func_0000E4E0_0 {
    s32 unk0;
    u8 pad4[0x40];
    s32 unk44;
};

struct Unk_func_0000E8E8_0 {
    u8 pad0[0x10];
    u32 unk10;
};

extern M2C_UNK D_00011DD4;
extern s32 D_00011DE4;
extern u32 D_00011DF0;
extern s32 D_000125BC;
extern s32 D_000129FC;
extern s32 D_00012A00;
extern s32 D_00012A04;
extern s32 D_00012A08;
extern s32 D_00012A0C;
extern s32 D_00012A10;
extern s32 D_00012A14;
extern void *D_00013F20;
extern s32 D_00016528;
extern M2C_UNK D_000177A0;
extern u32 D_00017820;

s32 func_00000B54(s32, s32, s32);
s32 func_000016E0(struct Unk_func_000016E0_0 *arg0, s32 arg1);
s32 func_000020CC(s32 *arg0);
s32 func_0000228C(void);
void func_0000235C(s32 arg0, s32 arg1);
s32 func_00002480(s32);
s32 func_00002514(s32 arg0);
s32 func_000038E4(void);
void func_00003B30(s32 arg0);
s32 func_00003C64(void);
s32 func_00006304(s32 arg0);
void func_000070C0(s32 *arg0);
s32 func_00008E00(void);
s32 func_00009098(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00009328(void);
s32 func_00009348(void);
s32 func_00009500(void);
s32 func_00009588(s32 arg0);
M2C_UNK *func_00009850(struct Unk_func_00009850_0 *arg0);
s32 func_00009880(s32 arg0);
s32 func_000098A4(s32);
s32 func_00009BEC(void *arg0);
s32 func_00009C34(struct Unk_func_00009C34_0 *arg0);
s32 func_00009C40(struct Unk_func_00009C40_0 *arg0);
s32 func_00009CE0(void *arg0);
s32 func_00009D80(struct Unk_func_00009D80_0 *arg0);
s32 func_00009D90(struct Unk_func_00009D90_0 *arg0);
s32 func_00009DA0(struct Unk_func_00009DA0_0 *arg0);
s32 func_00009DB4(void *arg0);
s32 func_0000A1F0(void);
s32 func_0000A1F8(void);
s32 func_0000A200(void *arg0);
s32 func_0000A23C(struct Unk_func_0000A23C_0 *arg0);
s32 func_0000A248(struct Unk_func_0000A248_0 *arg0);
s32 func_0000A354(void *arg0);
s32 func_0000A448(struct Unk_func_0000A448_0 *arg0);
s32 func_0000A458(s32 arg0);
s32 func_0000A46C(struct Unk_func_0000A46C_0 *arg0);
s32 func_0000A808(void *arg0);
s32 func_0000A84C(void);
s32 func_0000A854(void);
s32 func_0000A95C(void);
s32 func_0000A9A4(void);
s32 func_0000A9AC(s32 arg0);
s32 func_0000AB74(struct Unk_func_0000AB74_0 *arg0);
s32 func_0000ACBC(struct Unk_func_0000ACBC_0 *arg0);
s32 func_0000ACCC(struct Unk_func_0000ACCC_0 *arg0);
s32 func_0000B318(void);
s32 func_0000B320(void);
s32 func_0000B328(s32);
s32 func_0000B6A4(s32);
void func_0000B720(void);
s32 func_0000B7FC(s32, s32, s32, s32, s32);
s32 func_0000B974(s32, s32, s32, s32, s32);
void func_0000BBEC(s32 arg0);
s32 func_0000BC08(s32);
void func_0000BCBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0000BCD8(void);
s32 func_0000BCF8(void);
s32 func_0000BD34(void);
s32 func_0000BD70(s32, s32);
void func_0000BE2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0000BE5C(s32);
s32 func_0000BF90(s32, s32, s32, s32);
s32 func_0000C174(void);
void func_0000C738(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0000C768(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0000D184(s32);
void func_0000E320(void);
void func_0000E340(void);
s32 func_0000E4D0(void);
s32 func_0000E4D8(void);
s32 func_0000E4E0(struct Unk_func_0000E4E0_0 *arg0);
s32 func_0000E524(s32 *arg0);
s32 func_0000E55C(s32 *arg0);
s32 func_0000E8E8(struct Unk_func_0000E8E8_0 *arg0);
s32 sceKernelCheckThreadStack(void);
s32 sceKernelSetEventFlag(u32, u32);
s32 sceKernelSignalSema(s32, s32);
s32 sceNetApctl_lib_C519EDCD(s32 arg0);
s32 sceNetInet_lib_6A046357(s32);
s32 sceNetInet_lib_E6F67D14();
M2C_UNK sceNet_lib_57CC57DA(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 sceNet_lib_B6FC0A5B();
M2C_UNK sceNet_lib_DB88F458();
M2C_UNK sceNet_lib_EF097716(s32, s32, s32);
M2C_UNK sceWlanDrv_lib_C9A8CAB7();

#endif
