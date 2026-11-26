#ifndef PHOTO_PLUGIN_DECLS_H
#define PHOTO_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_D_00031B40 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_D_00031B84 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_Unk_func_0000EE0C_0_0 {
    u8 pad0[0x8];
    M2C_UNK (*unk8)(void *, M2C_UNK, M2C_UNK, M2C_UNK);
};

struct Unk_Unk_func_0001B674_temp_a0_0 {
    u8 pad0[0x10];
    s32 (*unk10)(void *);
};

struct Unk_func_00003D94_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00003DB0_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00003DCC_0 {
    M2C_UNK * unk0;
    s32 unk4;
    u8 pad8[0x8];
    s32 unk10;
    u8 pad14[0x10];
    s32 unk24;
};

struct Unk_func_00003E14_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_00003E5C_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_00003F20_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0000413C_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00004354_temp_v0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00004460_0 {
    u8 pad0[0x34];
    s32 unk34;
};

struct Unk_func_00005870_temp_s0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_000071D8_temp_v0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s8 unkC;
};

struct Unk_func_00007820_0 {
    M2C_UNK * unk0;
    u8 pad4[0x34];
    s32 * unk38;
};

struct Unk_func_0000789C_0 {
    M2C_UNK * unk0;
    u8 pad4[0x34];
    s32 * unk38;
};

struct Unk_func_00009538_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00009648_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00009DB4_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00009DF4_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00009E3C_0 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_func_00009E4C_0 {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0xC];
    s32 unk40;
};

struct Unk_func_00009E5C_0 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_func_00009EB4_0 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u32 unkC;
};

struct Unk_func_00009EB4_1 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u32 unkC;
};

struct Unk_func_00009F88_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000A0A8_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_0000A0B0_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_0000A0B8_0 {
    u8 pad0[0x3C];
    s32 unk3C;
};

struct Unk_func_0000AC80_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_0000B518_0 {
    u8 pad0[0x38];
    void ** unk38;
};

struct Unk_func_0000C3E0_0 {
    u8 pad0[0x8];
    void ** unk8;
};

struct Unk_func_0000C450_0 {
    u8 pad0[0x14];
    s8 unk14;
};

struct Unk_func_0000D128_0 {
    u8 pad0[0x14];
    s8 unk14;
};

struct Unk_func_0000D3BC_0 {
    u8 pad0[0x14];
    s8 unk14;
};

struct Unk_func_0000EE0C_0 {
    struct Unk_Unk_func_0000EE0C_0_0 *unk0;
    u8 pad4[0x10];
    s8 unk14;
};

struct Unk_func_0000EFA0_0 {
    u8 pad0[0x4];
    void ** unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_0000F00C_0 {
    u8 pad0[0x4];
    void * unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_0000F050_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000102F4_0 {
    u8 pad0[0x4];
    void ** unk4;
    u8 pad8[0x10];
    s32 unk18;
};

struct Unk_func_0001036C_0 {
    u8 pad0[0x4];
    void * unk4;
    u8 pad8[0x8];
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct Unk_func_000103F0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00011388_0 {
    u8 pad0[0x8];
    void **unk8;
};

struct Unk_func_0001206C_0 {
    u8 pad0[0x8];
    void **unk8;
};

struct Unk_func_00012A1C_temp_v0 {
    u8 pad0[0x14];
    M2C_UNK (*unk14)(s32);
};

struct Unk_func_00016C00_temp_v0 {
    M2C_UNK (*unk0)(M2C_UNK);
    u8 pad4[0x10];
    M2C_UNK (*unk14)(M2C_UNK);
};

struct Unk_func_00016E94_temp_v0 {
    u8 pad0[0x3C];
    s32 (*unk3C)();
};

struct Unk_func_00017360_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00017AA0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00017AD4_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_0001B674_0 {
    u8 pad0[0x4];
    struct Unk_func_0001B674_temp_a0 *unk4;
};

struct Unk_func_0001B674_temp_a0 {
    struct Unk_Unk_func_0001B674_temp_a0_0 *unk0;
};

struct Unk_func_0001B674_temp_s0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0001B74C_0 {
    u8 pad0[0x1F];
    s8 unk1F;
};

struct Unk_func_0001BDB4_0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0xC];
    s32 unk18;
    s8 unk1C;
};

struct Unk_func_00024C4C_0 {
    u8 pad0[0x4];
    void ** unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_00024CB8_0 {
    u8 pad0[0x4];
    void * unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_0002550C_0 {
    u8 pad0[0x4];
    void ** unk4;
    u8 pad8[0xC];
    s32 unk14;
};

struct Unk_func_00025584_0 {
    u8 pad0[0x4];
    void * unk4;
    u8 pad8[0xC];
    s32 unk14;
};

struct Unk_func_0002591C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00026324_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00027FD0_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
    u8 padC[0x4];
    u8 unk10;
};

struct Unk_func_00029278_var_a0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_00029D94_1 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    M2C_UNK *unk8;
};

struct Unk_func_00029D94_temp_a2 {
    u8 pad0[0x4];
    M2C_UNK *unk4;
    M2C_UNK *unk8;
};

struct Unk_func_00029D94_temp_v1 {
    M2C_UNK *unk0;
    M2C_UNK *unk4;
};

struct Unk_func_00029DD4_1 {
    M2C_UNK *unk0;
    M2C_UNK *unk4;
};

struct Unk_func_00029DD4_temp_a2 {
    u8 pad0[0x4];
    M2C_UNK *unk4;
    M2C_UNK *unk8;
};

struct Unk_func_00029DD4_temp_v1 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    M2C_UNK *unk8;
};

struct Unk_func_00029E30_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002B53C_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_0002B584_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_0002B5CC_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_0002B79C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002B7AC_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002B918_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002B928_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002BC38_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0002CA9C_0 {
    u8 pad0[0x4];
    u16 * unk4;
};

struct Unk_func_0002CAA8_0 {
    u8 pad0[0x4];
    s32 * unk4;
};

struct Unk_func_0002CAB4_0 {
    u8 pad0[0x4];
    s32 * unk4;
};

struct Unk_func_0002CAFC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0002CCEC_var_a0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_ret_vsh_34DA1B67 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_00004ADC_temp_a0 {
    u8 pad0[0x24];
    M2C_UNK (*unk24)(void **);
};

struct Unk_vt_func_00006C40_arg0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_00006C40_arg1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_00009E6C_arg0 {
    u8 pad0[0x18];
    M2C_UNK (*unk18)();
};

struct Unk_vt_func_0000B518_temp_a0 {
    u8 pad0[0x8];
    M2C_UNK (*unk8)(void **);
};

struct Unk_vt_func_0000C3E0_temp_a0 {
    u8 pad0[0x14];
    s32 (*unk14)(void **);
};

struct Unk_vt_func_0000EFA0_arg1 {
    u8 pad0[0x10];
    s32 (*unk10)(void **);
};

struct Unk_vt_func_000102F4_arg1 {
    u8 pad0[0x10];
    s32 (*unk10)(void **);
};

struct Unk_vt_func_00011388_arg1 {
    u8 pad0[0x10];
    s32 (*unk10)(void **);
};

struct Unk_vt_func_0001206C_arg1 {
    u8 pad0[0x10];
    s32 (*unk10)(void **);
};

struct Unk_vt_func_000155C0_temp_v0 {
    u8 pad0[0xBC];
    M2C_UNK (*unkBC)(void **, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_0001D0D8_temp_v0 {
    u8 pad0[0xBC];
    M2C_UNK (*unkBC)(void **, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_00024C4C_arg1 {
    u8 pad0[0x10];
    s32 (*unk10)(void **);
};

struct Unk_vt_func_0002550C_arg1 {
    u8 pad0[0x10];
    s32 (*unk10)(void **);
};

extern M2C_UNK D_00023A1C;
extern M2C_UNK D_00024550;
extern s32 D_000248C0;
extern M2C_UNK D_00024EF0;
extern M2C_UNK D_00025008;
extern M2C_UNK D_00025020;
extern M2C_UNK D_00025068;
extern M2C_UNK D_000250D0;
extern M2C_UNK D_00025100;
extern u8 D_0002553E;
extern s8 D_0002553F;
extern s32 D_0002EFC8;
extern M2C_UNK D_0002F000;
extern M2C_UNK D_0002F0E0;
extern M2C_UNK D_0002F120;
extern M2C_UNK D_0002F158;
extern s32 D_0002F178;
extern M2C_UNK D_0002F1E8;
extern M2C_UNK D_0002F364;
extern M2C_UNK D_0002F374;
extern M2C_UNK D_0002F870;
extern M2C_UNK D_0002F87C;
extern M2C_UNK D_0002FB8C;
extern s32 D_0002FCC8;
extern M2C_UNK D_0002FE68;
extern M2C_UNK D_0002FEDC;
extern s32 D_0002FF34;
extern M2C_UNK D_000301C0;
extern M2C_UNK D_000301C4;
extern s32 D_000301E8;
extern s32 D_000302C8;
extern s32 D_000305F4;
extern s32 D_00030680;
extern s32 D_00030C74;
extern s32 D_00030C94;
extern s32 D_00030CAC;
extern M2C_UNK D_000314C0;
extern M2C_UNK D_000314D0;
extern M2C_UNK D_000315F4;
extern M2C_UNK D_00031648;
extern M2C_UNK D_00031678;
extern M2C_UNK D_000316C0;
extern s32 D_00031AEC;
extern s32 D_00031B30;
extern struct Unk_D_00031B40 *D_00031B40;
extern struct Unk_D_00031B84 *D_00031B84;
extern u8 D_00031BB9;
extern s8 D_00031BE4;
extern s32 D_00031BE8;
extern s32 D_00031C40;
extern s32 D_00031C44;
extern s32 D_00031C48;
extern s8 D_00031C5F;
extern s32 D_00031DE0;
extern s32 D_00031DEC;
extern s32 D_00031DF0;
extern s32 D_00031E04;
extern s32 D_00031E08;
extern s32 D_00031E0C;
extern s32 D_00031E10;
extern s32 D_00031E14;
extern s32 D_00031E18;
extern s32 D_00031E1C;
extern s32 D_00031E20;
extern s32 D_00031E24;
extern s32 D_00031E5C;
extern void *D_00031E60;
extern M2C_UNK D_00032258;
extern s32 D_00032F68;
extern u8 D_00032FC5;
extern s8 D_0003304C;
extern s8 D_0003318D;
extern M2C_UNK func_00004B04;
extern s32 func_00006C34;
extern s32 func_0000738C;
extern s32 func_000076C0;
extern M2C_UNK func_00009CB8;
extern M2C_UNK func_0000F304;
extern M2C_UNK func_00011470;
extern s32 func_0001AD40;
extern s32 func_0001C96C;
extern s32 func_0001D000;
extern M2C_UNK func_00026590;

void func_00000FC0(void);
void func_000015B0(s32 arg0, s32 arg1);
void func_000015D4(s32 arg0, s32 arg1);
void func_000015F8(s32 arg0, s32 arg1);
void func_0000161C(s32 arg0, s32 arg1);
s32 func_00001640(s32, s32, s32, s32);
M2C_UNK func_00003764(M2C_UNK, M2C_UNK);
s32 func_00003814(s32);
void func_0000385C(void);
void func_0000387C(void);
s32 func_0000389C(s32);
s32 func_000038CC(s32);
s32 func_00003A1C(s32);
void func_00003BA4(s32 arg0, s32 arg1);
s32 func_00003C90(void *arg0);
void func_00003D94(struct Unk_func_00003D94_0 *arg0, s32 arg1);
void func_00003DB0(struct Unk_func_00003DB0_0 *arg0, s32 arg1);
void func_00003DCC(struct Unk_func_00003DCC_0 *arg0);
void func_00003E14(struct Unk_func_00003E14_0 *arg0);
void func_00003E5C(struct Unk_func_00003E5C_0 *arg0);
s32 func_00003F04(s32, s32, s32);
void func_00003F20(struct Unk_func_00003F20_0 *arg0, s32 arg1);
void func_00003FB8(M2C_UNK **arg0);
void func_00003FF0(M2C_UNK **arg0);
void func_00004028(M2C_UNK **arg0);
s32 func_0000413C(struct Unk_func_0000413C_0 *arg0);
void func_00004354(s32 arg0, s32 arg1, s32 arg2);
void func_00004460(struct Unk_func_00004460_0 *arg0);
s32 func_000044A8(s32, s32, s32);
M2C_UNK func_0000457C();
s32 func_0000464C(void *arg0);
M2C_UNK func_000049D4();
void func_00004ADC(void ***arg0);
void func_00004CA4(void);
void func_00004E1C(struct Unk_func_00003DCC_0 *arg0);
void func_00004E70(struct Unk_func_00003DCC_0 *arg0);
void func_00004EC4(struct Unk_func_00003DCC_0 *arg0);
void func_00005100(struct Unk_func_00003DCC_0 *arg0);
M2C_UNK func_00005214();
void func_0000527C(s32 arg0);
s32 func_0000529C(s32, s32, s32);
M2C_UNK func_00005468(void *);
void func_00005870(void);
s32 func_0000608C(s32);
void func_00006BF4(void ***);
void func_00006C40(struct Unk_vt_func_00006C40_arg0 **arg0, struct Unk_vt_func_00006C40_arg1 **arg1);
s32 func_00006E78(s32);
void func_00006EA8(void *arg0);
M2C_UNK func_00007000();
void func_000071D8(s32 arg0, s32 arg1, s32 arg2);
void func_0000729C(void ***);
s32 func_000074B8(void *arg0);
void func_00007820(struct Unk_func_00007820_0 *arg0);
void func_0000789C(struct Unk_func_0000789C_0 *arg0);
void func_00008AF8(s32 arg0);
void func_00008CD0(s32 **arg0);
void func_00008D6C(s32 **arg0);
M2C_UNK func_0000942C(M2C_UNK, M2C_UNK);
void func_000094F8(void);
void func_00009518(void);
void func_00009538(struct Unk_func_00009538_0 *arg0);
void func_00009648(struct Unk_func_00009648_0 *arg0);
s32 func_00009658(s32);
s32 func_00009A68(s32);
s32 func_00009B50(s32, s32);
void func_00009C28(void *arg0, void **arg1);
s32 func_00009C30(void);
s32 func_00009C34(s32, s32);
void func_00009DB4(struct Unk_func_00009DB4_0 *arg0);
void func_00009DF4(struct Unk_func_00009DF4_0 *arg0);
s32 func_00009E34(void);
s32 func_00009E3C(struct Unk_func_00009E3C_0 *arg0);
s32 func_00009E44(void);
s32 func_00009E4C(struct Unk_func_00009E4C_0 *arg0);
s32 func_00009E5C(struct Unk_func_00009E5C_0 *arg0);
void func_00009E64(void);
void func_00009E6C(struct Unk_vt_func_00009E6C_arg0 **arg0);
void func_00009E90(void);
s32 func_00009E90_v260(void);
s32 func_00009EAC(void);
s32 func_00009EB4(struct Unk_func_00009EB4_0 *arg0, struct Unk_func_00009EB4_1 *arg1);
void func_00009F88(struct Unk_func_00009F88_0 *arg0);
s32 func_00009FC8(void);
s32 func_00009FD0(void);
void func_00009FD8(s32 **arg0);
void func_0000A000(s32 **arg0);
s32 func_0000A038(void);
s32 func_0000A080(void);
s32 func_0000A088(void);
s32 func_0000A090(void);
s32 func_0000A098(void);
s32 func_0000A0A0(void);
s32 func_0000A0A8(struct Unk_func_0000A0A8_0 *arg0);
s32 func_0000A0B0(struct Unk_func_0000A0B0_0 *arg0);
s32 func_0000A0B8(struct Unk_func_0000A0B8_0 *arg0);
s32 func_0000A0BC(void *arg0);
s32 func_0000A0C0(void);
s32 func_0000A0C4(void *arg0);
void func_0000A52C(void *arg0, void **arg1);
void func_0000A550(s32 arg0, void **arg1);
s32 func_0000A584(s32);
s32 func_0000A5E4(s32);
void func_0000A8B0(void *arg0, void **arg1);
void func_0000A91C(void *arg0);
void func_0000A960(void *arg0);
s32 func_0000A97C(s32);
void func_0000AB90(s32 arg0, s32 arg1);
s32 func_0000ABB4(s32, s32);
void func_0000AC80(struct Unk_func_0000AC80_0 *arg0);
M2C_UNK func_0000AC9C(s32);
M2C_UNK func_0000AF84(M2C_UNK, M2C_UNK);
void func_0000B050(void);
void func_0000B070(void);
void func_0000B3E8(M2C_UNK **arg0);
void func_0000B410(M2C_UNK **arg0);
s32 func_0000B448(void);
s32 func_0000B450(void);
void func_0000B518(struct Unk_func_0000B518_0 *arg0);
s32 func_0000B540(void);
M2C_UNK func_0000B548(s32, M2C_UNK, M2C_UNK);
void func_0000B664(void *arg0, void **arg1);
void func_0000B6DC(void *arg0);
void func_0000B720(void *arg0);
s32 func_0000B73C(s32, s32);
M2C_UNK func_0000B8A4();
s32 func_0000BB98(s32, s32, s32, s32, s32, s32);
void func_0000BCE8(s32 arg0);
s32 func_0000BD04(s32);
s32 func_0000C2A8(s32, s32, s32, s32);
void func_0000C3E0(struct Unk_func_0000C3E0_0 *arg0);
void func_0000C450(struct Unk_func_0000C450_0 *arg0);
M2C_UNK func_0000C488(void *);
s32 func_0000C650(void);
void func_0000CE48(void *arg0);
void func_0000CEB8(void *arg0);
void func_0000D128(struct Unk_func_0000D128_0 *arg0);
M2C_UNK func_0000D160(void *);
void func_0000D3BC(struct Unk_func_0000D3BC_0 *arg0);
M2C_UNK func_0000D3F4(void *);
void func_0000D75C(void);
void func_0000D990(void *arg0);
s32 func_0000D9C8(s32);
void func_0000DB60(s32 arg0, s32 arg1);
void func_0000DB98(void *arg0);
s32 func_0000DBD0(s32);
void func_0000DE08_v260(s32 arg0, s32 arg1);
void func_0000DF20(void);
void func_0000E1B8(s32 arg0, s32 arg1);
void func_0000E208(void);
void func_0000E8D4(void);
void func_0000EBCC(s32 arg0, s32 arg1, s32 arg2);
void func_0000EC50_v250(void);
void func_0000ECD8(void);
void func_0000EE0C(struct Unk_func_0000EE0C_0 *arg0);
void func_0000EFA0(struct Unk_func_0000EFA0_0 *arg0, struct Unk_vt_func_0000EFA0_arg1 **arg1);
void func_0000F00C(struct Unk_func_0000F00C_0 *arg0);
void func_0000F050(struct Unk_func_0000F050_0 *arg0);
M2C_UNK func_0000F06C(void *);
void func_0000F104(s32 arg0);
s32 func_0000F190(s32);
void func_0000F280(s32 arg0, M2C_UNK arg1);
M2C_UNK func_0000F2A4(M2C_UNK, s32);
void func_0000F2DC(void *arg0);
void func_0000F87C(void *arg0);
void func_0000FE80(void);
void func_0000FE88(void);
void func_0000FE90(void);
void func_0000FE98(void);
void func_000102F4(struct Unk_func_000102F4_0 *arg0, struct Unk_vt_func_000102F4_arg1 **arg1);
void func_0001036C(struct Unk_func_0001036C_0 *arg0);
void func_000103F0(struct Unk_func_000103F0_0 *arg0);
M2C_UNK func_0001040C(void *, void **);
void func_00010820(struct Unk_func_0001036C_0 *arg0);
void func_00010864(void *arg0);
void func_00010ADC(void);
M2C_UNK func_00010AF8();
void func_00010B60(void);
M2C_UNK func_00010BC0();
void func_00010BC8(s32 arg0);
s32 func_00010C00(s32);
void func_00010FA4(s32 *arg0);
void func_00010FE0(void);
s32 func_00011288(s32, s32);
void func_00011388(struct Unk_func_00011388_0 *arg0, struct Unk_vt_func_00011388_arg1 **arg1);
s32 func_00011520(s32);
void func_00011540(M2C_UNK **arg0);
void func_00011550(M2C_UNK **arg0);
void func_00011578(M2C_UNK **arg0);
void func_000115A0(M2C_UNK **arg0);
void func_000115B0(M2C_UNK **arg0);
void func_000115D8(M2C_UNK **arg0);
s32 func_00011B28(void);
s32 func_00011E20(s32, s32, s32);
void func_0001206C(struct Unk_func_0001206C_0 *arg0, struct Unk_vt_func_0001206C_arg1 **arg1);
s32 func_000120D0(void);
s32 func_00012174(s32);
s32 func_00012230(void *arg0, s32 arg1);
void func_0001262C(s32 arg0, M2C_UNK arg1);
M2C_UNK func_00012674(M2C_UNK);
s32 func_00012680(void);
void func_000127C0(s32 *arg0);
void func_000127FC(s32 *arg0);
s32 func_00012978(s32, s32);
void func_00012A1C(s32 arg0);
void func_00012A48(void);
void func_00012A68(void);
s32 func_00012A8C(void);
void *func_00012B74(void **arg0);
s32 func_00012D5C(void);
s32 func_00012D7C(s32 *arg0, s32 arg1);
s32 func_00012DC0_v260(void);
s32 func_00012DC8(void);
s32 func_00012DD0(void);
void *func_00012DE4();
M2C_UNK func_00012E58(s32);
s32 func_000130B0(s32, s32);
M2C_UNK func_000131D8(M2C_UNK, M2C_UNK);
void func_000132A4(void);
void func_000132C4(void);
s32 func_00013350(s32);
void func_00013380(s32 *arg0, s32 arg1);
void func_00013464(void);
M2C_UNK func_000134E4();
void func_00013504(M2C_UNK **arg0);
void func_00013514(M2C_UNK **arg0);
void func_0001353C(M2C_UNK **arg0);
void func_00013564(M2C_UNK **arg0);
void func_00013574(M2C_UNK **arg0);
void func_0001359C(M2C_UNK **arg0);
void func_000135DC(M2C_UNK **arg0, M2C_UNK *arg1);
void func_0001361C(void *arg0);
void func_0001366C(s32 arg0);
s32 func_00013688(s32);
void func_00013694(void);
s32 func_000136B0(void);
void func_00014AE8(void);
void func_00015390(void);
void func_00015440(void);
s32 func_000155C0(void);
void func_000155D8(void);
void func_00015624(void);
void func_000160D4(void);
void func_00016C00(void);
void func_00016C50(void);
void func_00016DA4(void);
void func_00016DAC(void);
s32 func_00016E94(void);
M2C_UNK func_00016ECC();
void func_00016FF0(s32 arg0);
M2C_UNK func_00017050(M2C_UNK, M2C_UNK);
void func_00017138(void);
void func_00017158(void);
void func_00017360(struct Unk_func_00017360_0 *arg0);
M2C_UNK func_00017678();
void func_00017A3C(void);
void func_00017AA0(struct Unk_func_00017AA0_0 *arg0);
void func_00017AD4(struct Unk_func_00017AD4_0 *arg0, s32 arg1);
void func_000181BC(void **arg0, s32 arg1, s32 arg2);
M2C_UNK func_000181D4(void *);
void func_000182F8(void *arg0);
void func_000182F8_v100(void *arg0);
s32 func_00018610(s32);
M2C_UNK func_000186D0(void *, M2C_UNK);
void func_00018AE0(void *arg0);
s32 func_00018B64(s32);
void func_00018C2C(void *arg0);
s32 func_00018CFC(void *arg0, void *arg1);
void func_000191D0(void);
s32 func_000191E0(s32);
M2C_UNK func_00019258(void *);
void func_0001A110(void *arg0);
void func_0001A174(void *arg0);
void func_0001A1D8(void *arg0);
void func_0001A2C0(void *arg0, s32 arg1);
s32 func_0001A420(void *arg0);
s32 func_0001A5EC(s32, s32);
void func_0001A658(s32 arg0, s32 arg1, s32 arg2);
s32 func_0001A814(s32, s32);
s32 func_0001A8A8(s32, s32, s32);
s32 func_0001A984(s32);
s32 func_0001AC08(s32);
void func_0001AC50(void *arg0);
void func_0001AD18(void ***arg0);
void func_0001AE90(s32 arg0);
void func_0001AEAC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0001B350(void);
s32 func_0001B4C4(s32);
void func_0001B52C(s32 arg0);
void func_0001B674(struct Unk_func_0001B674_0 *arg0);
s32 func_0001B718(s32);
void func_0001B74C(struct Unk_func_0001B74C_0 *arg0);
s32 func_0001B7B4(s32);
void func_0001B880(s32 arg0, s32 arg1);
void func_0001B8BC(void);
s32 func_0001BD20(s32);
void func_0001BDB4(struct Unk_func_0001BDB4_0 *arg0, s32 arg1);
s32 func_0001C054(void *arg0);
s32 func_0001C3E0(void **arg0);
void func_0001C81C(struct Unk_func_0001BDB4_0 *arg0);
void func_0001C92C(void ***);
s32 func_0001CC7C(s32);
s32 func_0001CDD4(void *arg0);
void func_0001CEE4(s32 arg0, s32 arg1, s32 arg2);
void func_0001CF54(void ***);
void func_0001D0BC(s32 arg0);
void func_0001D0D8(s32 arg0);
M2C_UNK func_0001D298();
void func_0001D8DC(void **arg0, s32 arg1, s32 arg2);
s32 func_0001DABC(s32, s32);
s32 func_0001DBF8(void *arg0);
s32 func_0001DC68(void *arg0);
M2C_UNK func_0001DEA4();
s32 func_0001E0C8(s32, s32);
void func_0001E194(void);
void func_0001E1B4(void);
void func_0001E1D4(void *arg0);
void func_0001E428(void);
void func_0001E614(M2C_UNK **arg0);
void func_0001E63C(M2C_UNK **arg0);
void func_0001E674(void *arg0);
void func_0001E6B4(void *arg0);
s32 func_0001E6F4(void);
s32 func_0001E6FC(void *arg0);
s32 func_0001E70C(void *arg0);
void func_0001E714(void);
void func_0001E71C(void **arg0);
void func_0001E740(void);
s32 func_0001E75C(void);
void func_0001E764(void *arg0);
s32 func_0001E7A4(void);
void func_0001E7AC(M2C_UNK **arg0);
void func_0001E7D4(M2C_UNK **arg0);
s32 func_0001E80C(void);
s32 func_0001E814(void *arg0);
void func_0001EEBC(s32 arg0);
s32 func_0001F760(s32, s32);
void func_0001F7F4(void);
void func_0001F814(void);
void func_0001FB8C(M2C_UNK **arg0);
void func_0001FBB4(M2C_UNK **arg0);
s32 func_0001FBEC(void);
s32 func_0001FBF4(void);
s32 func_0001FCBC(void *arg0);
s32 func_0001FCC4(void);
void func_000202FC(void);
void func_00020954(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK func_00020D2C(M2C_UNK, M2C_UNK);
void func_00020E58(void);
void func_00020E78(void);
void func_00020E98(s32 *arg0, s32 arg1);
M2C_UNK func_00020EB8(s32, void *);
void func_00020F80(s32 arg0);
s32 func_0002158C(s32);
void func_000215CC(void *arg0);
void func_0002160C(void *arg0);
s32 func_000216C4(s32, s32);
void func_00021790(void);
void func_000217B0(void);
void func_00021844(void *arg0);
void func_00021854(void *arg0);
void func_000219C0(void *arg0);
void func_000219D0(void *arg0);
void func_00021CE0(M2C_UNK **arg0);
void func_00021D18(M2C_UNK **arg0);
void func_00021D40(M2C_UNK **arg0);
void func_00021D68(M2C_UNK **arg0);
void func_00021DA0(M2C_UNK **arg0);
void func_00021DC8(M2C_UNK **arg0);
void func_00021E00(M2C_UNK **arg0);
void func_00021E38(M2C_UNK **arg0);
s32 func_00021E50(s32, s32, s32, s32);
s32 func_00021F20(s32);
s32 func_00021FDC(s32, s32);
s32 func_00022734(s32, s32);
void func_00022BAC(void *arg0);
void func_00022BF8(void *arg0);
void func_00022F64(s32 arg0);
s32 func_00022F88(s32, s32);
void func_00024690(s32 arg0, s32 arg1);
void func_00024724(void);
void func_00024B7C(void);
void func_00024BD0(void);
void func_00024C30(void);
void func_00024C4C(struct Unk_func_00024C4C_0 *arg0, struct Unk_vt_func_00024C4C_arg1 **arg1);
void func_00024CB8(struct Unk_func_00024CB8_0 *arg0);
M2C_UNK func_00024CFC(void *);
void func_00024FA0(s32 arg0, M2C_UNK arg1);
M2C_UNK func_00024FC4(M2C_UNK, s32);
void func_0002522C(struct Unk_func_0001036C_0 *arg0);
void func_0002550C(struct Unk_func_0002550C_0 *arg0, struct Unk_vt_func_0002550C_arg1 **arg1);
void func_00025584(struct Unk_func_00025584_0 *arg0);
M2C_UNK func_000255C8(void *, void **);
void func_0002591C(struct Unk_func_0002591C_0 *arg0, s32 arg1);
s32 func_00025948(void *arg0);
s32 func_00025950(void *arg0);
void func_00025968(void);
M2C_UNK func_00025984();
M2C_UNK func_00025F14(M2C_UNK, M2C_UNK);
void func_000262E4(void);
void func_00026304(void);
void func_00026324(struct Unk_func_00026324_0 *arg0);
s32 func_00026368(void);
s32 func_00026490(void);
void func_000264B4(void);
s32 func_000264C8(void);
M2C_UNK func_000264D4();
s32 func_000264F8(void);
void func_00026534(void);
M2C_UNK func_00026558();
s32 func_0002657C(void);
s32 func_00026618(void);
M2C_UNK func_00026698();
s32 func_000266F8(void);
s32 func_0002687C(void);
s32 func_000269D8(s32);
s32 func_00026CEC(void *arg0);
void func_00026D98(void);
M2C_UNK func_00027044(s32);
s32 func_00027590(void);
s32 func_00027978(s32, u8, s32, M2C_UNK);
s32 func_00027FD0(struct Unk_func_00027FD0_0 *arg0, M2C_UNK arg1);
s32 func_00028090(s32);
s32 func_000288C0(void);
void func_00028950(s32 arg0, s32 arg1);
s32 func_00028BEC(s32, s32);
M2C_UNK func_00029134(M2C_UNK, M2C_UNK);
void func_00029200(void *arg0);
void func_00029238(void);
void func_00029250(void);
void func_00029258(void);
void *func_00029278(void **arg0);
s32 *func_000294A4(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0002968C(M2C_UNK, M2C_UNK);
void func_00029D94(M2C_UNK **arg0, struct Unk_func_00029D94_1 *arg1);
void func_00029DD4(M2C_UNK **arg0, struct Unk_func_00029DD4_1 *arg1);
void func_00029E14(void);
void func_00029E30(struct Unk_func_00029E30_0 *arg0);
M2C_UNK func_00029E40();
void func_00029E8C(void);
M2C_UNK func_00029EA8();
void func_0002B53C(struct Unk_func_0002B53C_0 *arg0);
void func_0002B584(struct Unk_func_0002B584_0 *arg0);
void func_0002B5CC(struct Unk_func_0002B5CC_0 *arg0);
M2C_UNK func_0002B61C(M2C_UNK, M2C_UNK);
void func_0002B6E8(void);
void func_0002B708(void);
void func_0002B79C(struct Unk_func_0002B79C_0 *arg0);
void func_0002B7AC(struct Unk_func_0002B7AC_0 *arg0);
void func_0002B918(struct Unk_func_0002B918_0 *arg0);
void func_0002B928(struct Unk_func_0002B928_0 *arg0);
s32 func_0002BC38(struct Unk_func_0002BC38_0 *arg0);
void func_0002BC40(M2C_UNK **arg0);
void func_0002BC68(M2C_UNK **arg0);
void func_0002BCA0(M2C_UNK **arg0);
void func_0002BCC8(M2C_UNK **arg0);
void func_0002BD00(M2C_UNK **arg0);
void func_0002BD38(M2C_UNK **arg0);
void func_0002BD60(M2C_UNK **arg0);
void func_0002BD88(M2C_UNK **arg0);
void func_0002C44C(s32 arg0, M2C_UNK arg1);
void func_0002C470(s32 arg0, s32 arg1);
u16 func_0002CA9C(struct Unk_func_0002CA9C_0 *arg0);
s32 func_0002CAA8(struct Unk_func_0002CAA8_0 *arg0);
s32 func_0002CAB4(struct Unk_func_0002CAB4_0 *arg0);
s32 func_0002CAFC(struct Unk_func_0002CAFC_0 *arg0);
M2C_UNK func_0002CC08(M2C_UNK, s32);
void func_0002CC40(void);
void func_0002CC5C(void);
void *func_0002CCEC(void **arg0);
s32 *func_0002CE1C(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
M2C_UNK func_0002CE54();
M2C_UNK func_0002CE60();
s32 func_0002CEC0(M2C_UNK, M2C_UNK);
M2C_UNK func_0002D248();
s32 module_stop(void);
s32 sceIoClose(u32);
u32 sceIoOpen(void *, s32, s32);
s32 sceKernelDeleteSema(s32);
s32 sceKernelPowerLock(s32);
M2C_UNK sceKernelPowerTick(M2C_UNK);
s32 sceKernelPowerUnlock(s32);
s32 sceNetAdhocInit(void);
s32 sceNetAdhocMatchingInit(M2C_UNK);
M2C_UNK sceNetAdhocTerm();
M2C_UNK sceNetAdhocTransInt_83FA2BBA();
s32 sceNetAdhocctlAddHandler(M2C_UNK *, M2C_UNK);
s32 sceNetAdhocctlConnect(M2C_UNK *);
s32 sceNetAdhocctlDisconnect();
s32 sceNetAdhocctlInit(M2C_UNK, M2C_UNK, M2C_UNK *);
s32 sceNetInit(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK scePaf_21A183A7(s32);
M2C_UNK scePaf_23A48167();
s32 scePaf_2898DB9A(s32);
M2C_UNK scePaf_2FDC80B3(s32, s32);
s32 scePaf_338C3774(s32, s32);
M2C_UNK scePaf_3481F595(s32, s32 *);
s32 scePaf_3EDD45EF(M2C_UNK, void (*)(void ***), void *, M2C_UNK, M2C_UNK, M2C_UNK *);
s32 scePaf_3F81333A(void **, M2C_UNK);
void **scePaf_4708AED4(s32, M2C_UNK *);
M2C_UNK scePaf_49CE42F7(s32, M2C_UNK *);
M2C_UNK scePaf_4E67BB08(s32);
void **scePaf_4F20E8B0(s32, s32);
s32 scePaf_51618363(s32, M2C_UNK *);
M2C_UNK scePaf_5EBC648F(s32, s32);
M2C_UNK scePaf_617BE327(s32, s32);
void *scePaf_61A8E8EC(M2C_UNK);
M2C_UNK scePaf_6261C0A5(s32);
M2C_UNK scePaf_6428A1DE(s32, M2C_UNK *);
M2C_UNK scePaf_648CA0C5();
M2C_UNK scePaf_66907719();
s32 scePaf_66FE90D7(s32 *, M2C_UNK *);
M2C_UNK scePaf_6B1E90C7();
s32 scePaf_6D491648(M2C_UNK, s32, s32);
s32 scePaf_723D0C80();
s32 scePaf_75062BCF();
M2C_UNK scePaf_79493F8F(M2C_UNK, s32);
M2C_UNK scePaf_8429BA7C(M2C_UNK, s32);
M2C_UNK scePaf_86B41BA3();
s32 scePaf_88784487(M2C_UNK *);
M2C_UNK scePaf_8B38372A(s32, s32 *);
s32 scePaf_8FE88010(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK scePaf_910A6B7B(s32);
M2C_UNK scePaf_93538664(void *, s32, M2C_UNK, M2C_UNK);
s32 scePaf_962FA087();
M2C_UNK scePaf_980228BA(s32);
M2C_UNK scePaf_A0ED77C4(M2C_UNK, void (*)(void ***), void *, M2C_UNK, M2C_UNK, M2C_UNK *);
M2C_UNK scePaf_B3D2C3BB(s32);
void *scePaf_B7E6052B(M2C_UNK);
s32 scePaf_BB3CBD19(s32, s32, M2C_UNK);
M2C_UNK scePaf_BC513A6B(s32);
M2C_UNK scePaf_BD5018AA(s32);
M2C_UNK scePaf_BE0D7212();
M2C_UNK scePaf_C5DBD12F(s32, s32);
M2C_UNK scePaf_CAF05F1D(s32, M2C_UNK *);
s32 scePaf_CE21D21F(s32);
M2C_UNK scePaf_D24E4016(s32, M2C_UNK, M2C_UNK);
s32 scePaf_D4FAE7D0(M2C_UNK *);
M2C_UNK scePaf_D7074BD1();
s32 scePaf_DCE3D225(s32, s32);
M2C_UNK scePaf_EAA5AFF6(void **, M2C_UNK);
M2C_UNK scePaf_F609FA81(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sceVshCommonGui_1CF884A1();
M2C_UNK sceVshCommonGui_1F02F9D5(M2C_UNK);
M2C_UNK sceVshCommonGui_441D55D7(M2C_UNK);
M2C_UNK sceVshCommonGui_4704D5BD(M2C_UNK);
M2C_UNK sceVshCommonGui_54BC644C(void *, s32);
M2C_UNK sceVshCommonGui_891DD627(M2C_UNK);
M2C_UNK sceVshCommonGui_A0334323();
M2C_UNK sceVshCommonGui_A0DE7090(M2C_UNK);
M2C_UNK sceVshCommonGui_E4ED451E();
M2C_UNK sceVshCommonGui_F5A16B4D(M2C_UNK);
struct Unk_ret_vsh_34DA1B67 *vsh_34DA1B67();
s32 vsh_81BBD0D1(void *, M2C_UNK *);

#endif
