#ifndef LIBSLIM_DECLS_H
#define LIBSLIM_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_Unk_func_00003E0C_0_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_Unk_func_00005B64_1_8 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_Unk_func_00006BFC_1_8 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_Unk_func_00006CB4_1_8 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_Unk_func_00006CF0_1_8 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00000308_temp_a1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00003E00_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00003E0C_0 {
    struct Unk_Unk_func_00003E0C_0_0 *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00003EA4_0 {
    struct Unk_func_00003EA4_temp_s0 *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00003EA4_temp_s0 {
    u8 pad0[0xC];
    s16 unkC;
};

struct Unk_func_00003F10_1 {
    u8 pad0[0x18];
    s32 (*unk18)(void *);
    M2C_UNK *unk1C;
};

struct Unk_func_00003F70_1 {
    u8 pad0[0x18];
    M2C_UNK *unk18;
};

struct Unk_func_00004134_0 {
    u8 pad0[0xC];
    s16 unkC;
    u8 padE[0x6];
    s32 unk14;
};

struct Unk_func_00004540_0 {
    u8 pad0[0xE];
    s16 unkE;
    s32 unk10;
};

struct Unk_func_0000457C_0 {
    u8 pad0[0xC];
    s16 unkC;
    u8 padE[0x2];
    s32 unk10;
};

struct Unk_func_0000461C_0 {
    u8 pad0[0xC];
    s16 unkC;
    s16 unkE;
};

struct Unk_func_00004664_0 {
    u8 pad0[0xC];
    s16 unkC;
    s16 unkE;
};

struct Unk_func_000046AC_0 {
    u8 pad0[0xE];
    s16 unkE;
};

struct Unk_func_000046D0_0 {
    u8 pad0[0xE];
    s16 unkE;
};

struct Unk_func_00004C14_0 {
    u8 pad0[0xC];
    s16 unkC;
    s16 unkE;
};

struct Unk_func_00005330_0 {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00005AF4_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00005B64_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00005B64_1 {
    u8 pad0[0x8];
    struct Unk_Unk_func_00005B64_1_8 *unk8;
};

struct Unk_func_00005BA4_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00005BA4_1 {
    s32 unk0;
    u8 pad4[0x4];
    s32 * unk8;
};

struct Unk_func_00005C68_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_00005C68_sp0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00006054_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00006BDC_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00006BFC_1 {
    u8 pad0[0x8];
    struct Unk_Unk_func_00006BFC_1_8 *unk8;
};

struct Unk_func_00006CB4_1 {
    u8 pad0[0x8];
    struct Unk_Unk_func_00006CB4_1_8 *unk8;
};

struct Unk_func_00006CF0_1 {
    u8 pad0[0x8];
    struct Unk_Unk_func_00006CF0_1_8 *unk8;
};

struct Unk_func_0000764C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000774C_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_00008490_temp_v1 {
    s16 unk0;
    u8 pad2[0x6];
    s32 unk8;
};

struct Unk_func_000084CC_temp_v0 {
    u8 pad0[0x2];
    s16 unk2;
};

struct Unk_func_00009520_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00009884_temp_v1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00009B04_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00009B28_temp_s0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00009B74_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00009BA4_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0000AFF8_1 {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
};

struct Unk_func_0000B018_0 {
    u8 pad0[0x8];
    s16 unk8;
    s16 unkA;
};

struct Unk_func_0000CC84_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
};

struct Unk_func_00012028_0 {
    s32 unk0;
    void ** unk4;
};

struct Unk_func_00012124_0 {
    s32 unk0;
    void * unk4;
};

struct Unk_func_00012CCC_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x4];
    s32 unk28;
};

struct Unk_func_00012CD8_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x8];
    s32 unk2C;
    u8 pad30[0x3C];
    s32 unk6C;
    s32 unk70;
};

struct Unk_func_00012CEC_0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C];
    s32 unk6C;
    s32 unk70;
};

struct Unk_func_00012FC8_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_000137FC_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x4];
    s32 unk28;
    u8 pad2C[0x40];
    s32 unk6C;
};

struct Unk_func_00013808_0 {
    u8 pad0[0x6C];
    s32 unk6C;
};

struct Unk_func_00013B58_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_sceHVSlim_Library_05F33A6C_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_sceHVSlim_Library_34C99643_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_sceHVSlim_Library_59F62E22_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_sceHVSlim_Library_81130A27_0 {
    s32 unk0;
    s16 unk4;
    s16 unk6;
};

struct Unk_sceHVSlim_Library_B7DE4536_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_sceHVSlim_Library_E875CDC8_0 {
    u8 pad0[0x14];
    s32 unk14;
    s32 unk18;
};

struct Unk_vt_func_00009C10_arg0 {
    u8 pad0[0x4];
    s32 unk4;
};

extern M2C_UNK D_00016028;
extern M2C_UNK D_00016318;
extern s32 D_00016510;
extern s32 D_00016518;
extern s32 D_0001657C;
extern s32 D_00016598;
extern M2C_UNK func_00003EDC;
extern M2C_UNK func_00003F4C;

M2C_UNK func_00000228(s32, M2C_UNK, s32);
void func_00000258(s32 arg0, M2C_UNK arg1);
void func_000002C4(s32 arg0, s32 *arg1);
void func_00000308(s32 arg0, void **arg1);
s32 func_0000101C(s32, s32, s32);
s32 func_00001BEC(s32, s32, s32, s32, s32, s32);
s32 func_00002B90(u8 *arg0, s32 arg1);
void func_00002D90(s32 arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK func_00002DE4(s32, M2C_UNK, s32, s32);
void func_00002E28(s32 arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK func_00002E7C(s32, M2C_UNK, s32, s32);
void func_00002EDC(s32 arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK func_00002F30(s32, M2C_UNK, s32, s32);
void func_00002F7C(s32 arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK func_00002FD0(s32, M2C_UNK, s32, s32);
s32 func_000036A4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
M2C_UNK func_000036F8(s32, M2C_UNK, M2C_UNK);
s32 func_00003928(s32 arg0);
s32 func_00003960(s32);
s32 func_00003AA4(s32 arg0);
s32 func_00003B54(s32 arg0);
s32 func_00003E00(struct Unk_func_00003E00_0 *arg0);
s32 func_00003E0C(struct Unk_func_00003E0C_0 *arg0);
s32 func_00003E68(s32, s32);
s32 func_00003EA4(struct Unk_func_00003EA4_0 *arg0);
void func_00003F10(s32 arg0, struct Unk_func_00003F10_1 *arg1);
void func_00003F70(s32 arg0, struct Unk_func_00003F70_1 *arg1);
void func_00004030(void);
s32 func_0000404C();
s32 func_000040FC();
s32 func_00004134(struct Unk_func_00004134_0 *arg0, s32 arg1);
s32 func_0000426C(s32 arg0);
void func_000044C0(void);
s32 func_000044DC();
void func_00004540(struct Unk_func_00004540_0 *arg0);
s32 func_0000457C(struct Unk_func_0000457C_0 *arg0, s32 arg1);
void func_0000461C(struct Unk_func_0000461C_0 *arg0, s32 arg1, s32 arg2);
void func_00004664(struct Unk_func_00004664_0 *arg0, s32 arg1, s32 arg2);
s32 func_000046AC(struct Unk_func_000046AC_0 *arg0, s32 arg1);
void func_000046D0(struct Unk_func_000046D0_0 *arg0, s32 arg1, s32 arg2);
s32 func_00004860(s32, s32, s32);
void func_000048F0(s32 arg0, s32 arg1);
s32 func_0000492C(s32, s32);
M2C_UNK func_00004A3C(s32, M2C_UNK);
void func_00004BF8(s32 arg0);
s32 func_00004C14(struct Unk_func_00004C14_0 *arg0);
M2C_UNK func_000050AC(s32, M2C_UNK, s32, s32 *);
M2C_UNK func_0000517C(s32, M2C_UNK, s32, s32 *);
s32 func_00005240(s32 arg0, s32 arg1, s32 **arg2);
s32 func_000052B8(s32 arg0, s32 arg1, s32 **arg2);
s32 func_00005330(struct Unk_func_00005330_0 *arg0, s32 arg1, s32 arg2);
M2C_UNK func_00005468(s32, M2C_UNK);
void func_00005508(s32 arg0, M2C_UNK arg1, s32 arg2);
void func_00005580(s32 arg0, M2C_UNK arg1, s32 arg2);
s32 func_000055F8();
void func_000058EC(struct Unk_func_00005330_0 *arg0);
s32 func_00005A64(s32, s32, s32);
void func_00005AF4(struct Unk_func_00005AF4_0 *arg0, s32 arg1);
s32 func_00005B64(struct Unk_func_00005B64_0 *arg0, struct Unk_func_00005B64_1 *arg1);
s32 func_00005BA4(struct Unk_func_00005BA4_0 *arg0, struct Unk_func_00005BA4_1 *arg1);
s32 func_00005C68(struct Unk_func_00005C68_0 *arg0, s32 arg1);
s32 func_00005F60(s32, s32);
s32 func_00006054(struct Unk_func_00006054_0 *arg0, s32 arg1);
s32 func_00006B38(s32, s32, s32);
void func_00006BDC(struct Unk_func_00006BDC_0 *arg0, s32 arg1);
s32 func_00006BFC(s32 arg0, struct Unk_func_00006BFC_1 *arg1);
s32 func_00006CB4(s32 arg0, struct Unk_func_00006CB4_1 *arg1);
s32 func_00006CF0(s32 arg0, struct Unk_func_00006CF0_1 *arg1);
M2C_UNK func_00007010(s32);
M2C_UNK func_0000701C(s32);
void func_000070B0(s32 arg0);
void func_00007198(s32 arg0);
void func_000071B4(s32 arg0);
s32 func_000071D0(s32, s32);
void func_00007228(s32 arg0);
s32 func_00007260(s32, s32, s32);
M2C_UNK func_000074C0();
M2C_UNK func_0000761C();
s32 func_0000764C(struct Unk_func_0000764C_0 *arg0);
void func_00007730(s32 arg0, s32 arg1);
s32 func_0000774C(struct Unk_func_0000774C_0 *arg0, s32 arg1);
void func_000077AC(void);
void *func_00007974(M2C_UNK, M2C_UNK);
M2C_UNK func_00007DB0(void *, M2C_UNK);
M2C_UNK func_00008400(s32);
M2C_UNK func_00008448(void *, M2C_UNK);
void func_00008490(s32 arg0, s32 arg1);
void *func_000084CC(void);
M2C_UNK func_00008700(void **);
M2C_UNK func_00008890(s32, M2C_UNK);
s32 func_0000894C(s32, s32, s32);
M2C_UNK func_00008A4C(s32, M2C_UNK);
void func_00008B20(void);
void *func_00008C10(s32 arg0, s32 arg1);
void func_00008DB8(s32 arg0, s32 arg1);
void func_00008DDC(s32 arg0, s32 arg1);
void func_00008E2C(s32 *arg0);
void func_00008EB4(s32 arg0);
void func_00008ED0(s32 arg0, s32 arg1);
void func_00008EF4(s32 arg0, s32 arg1);
void func_00008F44(s32 *arg0);
void func_0000905C(s32 arg0);
void func_0000911C(s32 *arg0);
void func_00009128(s32 *arg0);
s32 func_00009520(struct Unk_func_00009520_0 *arg0);
M2C_UNK func_00009568();
s32 *func_000095F4(s32, s32);
s32 func_000096E4(s32, s32);
s32 func_0000973C(s32);
s32 func_000097C4();
M2C_UNK func_00009854();
void func_0000987C(void);
s32 func_00009884(void **arg0, s32 arg1);
void func_000098DC(void **arg0);
M2C_UNK func_000098F8(s32, s32);
void func_00009A64(s32 arg0);
void **func_00009A94(void **arg0);
void func_00009B04(void **arg0);
void func_00009B28(void **arg0, s32 *arg1);
void func_00009B74(void **arg0, s32 arg1, s32 arg2);
void func_00009BA4(void **arg0, s32 arg1, s32 arg2);
s32 func_00009C10(struct Unk_vt_func_00009C10_arg0 **arg0);
M2C_UNK func_00009E44(s32, s32, s32);
void func_00009F9C(s32 arg0, s32 arg1);
M2C_UNK func_00009FE0(s32, s32, s32);
void func_0000A024(s32 arg0, s32 arg1);
M2C_UNK func_0000A068(s32, s32, s32);
void func_0000A090(s32 arg0, s32 *arg1);
s32 func_0000AC24(s32, s32, s32, s32, s32);
s32 func_0000ACD0(s32 arg0, s32 arg1, void **arg2, s32 arg3);
s32 func_0000AD58(s32, M2C_UNK, void *, s32);
s32 func_0000ADF0(s32 arg0, M2C_UNK arg1, void **arg2);
s32 *func_0000AF14(s16, M2C_UNK);
void func_0000AFE8(s32 *arg0, s32 arg1);
void func_0000AFF0(void);
void func_0000AFF8(s32 arg0, struct Unk_func_0000AFF8_1 *arg1);
void func_0000B010(void);
void func_0000B018(struct Unk_func_0000B018_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0000BACC(s32, s32);
s32 func_0000BD20(s32);
s32 func_0000BD78(s32, s32, s32, s32);
M2C_UNK func_0000BDB8(M2C_UNK, M2C_UNK);
void func_0000BE48(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0000BE88(s32 arg0, s32 arg1, s32 arg2);
s32 func_0000BEBC(s32, s32, s32, s32);
void func_0000BF48(s32 arg0, s32 arg1, s32 arg2);
void func_0000BF64(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK func_0000C0A0();
s32 func_0000C800(s32, s32, s32, s32);
void func_0000C8A8(s32 arg0, s32 arg1, s32 arg2);
void func_0000CC84(struct Unk_func_0000CC84_0 *arg0, s32 arg1);
s32 func_0000F7B8(s32, s32, s32);
s32 func_0000F89C(s32, s32, s32);
void func_0000FA58(s32 arg0, s32 arg1);
void func_0000FA74(s32 arg0, s32 arg1);
void func_0000FA90(s32 arg0, s32 arg1);
void func_0000FAAC(s32 arg0, s32 arg1);
s32 func_0000FAC8(s32, s32, s32);
s32 func_0000FB30(s32, s32, s32);
void func_0000FBE0(s32 arg0, s32 arg1);
void func_0000FBFC(s32 arg0, s32 arg1);
M2C_UNK func_000109F4();
void func_00010A74(void);
void func_00010A90(void);
s32 func_00010B4C(s32, s32, s32, s32);
void func_00010C24(s32 arg0, s32 arg1, s32 arg2);
void func_00010C40(s32 arg0, s32 arg1, s32 arg2);
void func_00010DDC(void);
s32 func_00010DF8(s32, s32, s32);
void func_0001113C(s32 arg0, s32 arg1);
M2C_UNK func_00011B20();
s32 func_00011D38(void);
void func_00011DA0(void);
void func_00011DBC(void);
s32 func_00011DD8(void);
s32 func_00011DE0(void);
void func_00011DE8(s32 arg0, s32 arg1);
void func_00011E14(void);
void func_00012028(struct Unk_func_00012028_0 *arg0);
void func_00012124(struct Unk_func_00012124_0 *arg0, void *arg1, s32 arg2);
M2C_UNK func_00012158(s32);
void func_000123B8(s32 *arg0);
M2C_UNK func_000124AC(s32, s32, M2C_UNK);
M2C_UNK func_00012A08(s32, s32);
void func_00012CB0(struct Unk_func_00012028_0 *arg0);
void func_00012CCC(struct Unk_func_00012CCC_0 *arg0);
void func_00012CD8(struct Unk_func_00012CD8_0 *arg0);
void func_00012CEC(struct Unk_func_00012CEC_0 *arg0);
s32 func_00012EEC(s32 *);
s32 func_00012FC8(struct Unk_func_00012FC8_0 *arg0);
void func_00013050(s32 arg0);
s32 func_0001316C(s32 *arg0);
void func_0001363C(s32 **arg0);
s32 func_00013650(s32 **arg0);
void func_000137FC(struct Unk_func_000137FC_0 *arg0);
void func_00013808(struct Unk_func_00013808_0 *arg0);
void func_0001382C(struct Unk_func_000137FC_0 *arg0);
M2C_UNK func_000139F8(s32);
s32 func_00013B58(struct Unk_func_00013B58_0 *arg0);
void func_00013BD4(s32 arg0);
s32 func_00013BF0(s32 arg0, s32 arg1);
void func_000141C8(s32 *arg0);
s32 module_start(void);
s32 module_stop(void);
void sceHVSlim_Library_05F33A6C(struct Unk_sceHVSlim_Library_05F33A6C_0 *arg0, s32 arg1);
void sceHVSlim_Library_08549708(void **arg0);
void sceHVSlim_Library_0D525122(void **arg0);
void sceHVSlim_Library_14411643(void);
s32 sceHVSlim_Library_15875ED4(M2C_UNK);
M2C_UNK sceHVSlim_Library_1A02495A(s32, s32, s16);
s32 sceHVSlim_Library_24B1FCE6(M2C_UNK);
void sceHVSlim_Library_27D353B1(s32 arg0);
void sceHVSlim_Library_34C99643(struct Unk_sceHVSlim_Library_34C99643_0 *arg0);
void sceHVSlim_Library_3C6B3637(s32 arg0, M2C_UNK arg1);
s32 sceHVSlim_Library_3EDA77E7(s32 *);
s32 sceHVSlim_Library_440B8F87(void *, s32, M2C_UNK);
void sceHVSlim_Library_457A4136(struct Unk_func_00005330_0 *arg0, s32 arg1);
s32 sceHVSlim_Library_56988A48(s32 arg0, u8 *arg1);
s32 sceHVSlim_Library_59F62E22(struct Unk_sceHVSlim_Library_59F62E22_0 *arg0, s32 arg1, s32 arg2);
void sceHVSlim_Library_5C0C52DD(void);
void sceHVSlim_Library_5EEBE755(void);
void sceHVSlim_Library_6D4EE418(s32 arg0);
M2C_UNK sceHVSlim_Library_6DDF3D61(M2C_UNK, M2C_UNK, s32, s16);
void sceHVSlim_Library_81130A27(struct Unk_sceHVSlim_Library_81130A27_0 *arg0, s32 arg1, s16 arg2);
void sceHVSlim_Library_880239D0(void **arg0);
void *sceHVSlim_Library_896E55F6(void **arg0);
void sceHVSlim_Library_9C96DDEB(s32 *arg0);
void sceHVSlim_Library_A2F4AC9E(void *arg0);
void sceHVSlim_Library_B29BE9CE(void **arg0);
void sceHVSlim_Library_B7DE4536(struct Unk_sceHVSlim_Library_B7DE4536_0 *arg0);
void sceHVSlim_Library_B8C28371(void);
void sceHVSlim_Library_BAFF7DF7(s32 arg0, s32 arg1);
u8 *sceHVSlim_Library_BB5E8F0E(u8 *arg0, u8 *arg1);
M2C_UNK sceHVSlim_Library_BFE8268F(s32);
void sceHVSlim_Library_C04FADD9(void);
void sceHVSlim_Library_CA65803E(s32 arg0);
M2C_UNK sceHVSlim_Library_D2270E78();
void sceHVSlim_Library_D39BDE45(s32 arg0);
M2C_UNK sceHVSlim_Library_D611E938(void *, M2C_UNK, M2C_UNK);
M2C_UNK sceHVSlim_Library_D62C3861(s32);
M2C_UNK sceHVSlim_Library_D9FE99F5(s32, s32);
void *sceHVSlim_Library_E459881C(void **arg0);
void sceHVSlim_Library_E875CDC8(struct Unk_sceHVSlim_Library_E875CDC8_0 *arg0);
void sceHVSlim_Library_EE051195(void);
void sceHVSlim_Library_F489E9B4(s32 arg0, M2C_UNK arg1);
void sceHVSlim_Library_FF428AF7(s32 arg0, s32 *arg1);

#endif
