#ifndef PAFMINI_DECLS_H
#define PAFMINI_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_000E164C_s {
    u8 pad0[0x4];
    s32 unk4;
};

struct D_000E2000_s {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct D_000E202C_s {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

struct D_000E216C_s {
    u8 pad0[0x9C];
    volatile s32 unk9C;
    u8 padA0[0x8];
    volatile s32 unkA8;
};

struct D_000FDAC0_s {
    volatile s32 unk0;
    volatile s32 unk4;
};

struct D_00106F70_s {
    u8 pad0[0x14];
    struct Unk_D_00106F70_s_14 *unk14;
    u8 pad18[0xB4];
    s32 unkCC;
    u8 padD0[0x8];
    volatile s16 unkD8;
    u8 padDA[0x2];
    volatile s16 unkDC;
    volatile s16 unkDE;
    u8 padE0[0x2];
    volatile s16 unkE2;
    u8 padE4[0x1C];
    volatile s16 unk100;
    u8 pad102[0x17CE];
    volatile u16 unk18D0;
    u8 pad18D2[0x18];
    volatile s16 unk18EA;
    u8 pad18EC[0x1E];
    volatile s16 unk190A;
    volatile s16 unk190C;
    u8 pad190E[0x1AE];
    struct Unk_D_00106F70_s_1ABC *unk1ABC;
    u8 pad1AC0[0x23C6];
    volatile s16 unk3E86;
    volatile s16 unk3E88;
    u8 pad3E8A[0xEC];
    volatile s16 unk3F76;
    u8 pad3F78[0x182];
    volatile s16 unk40FA;
    u8 pad40FC[0x10];
    volatile s8 unk410C;
    volatile s8 unk410D;
    volatile s8 unk410E;
    volatile s8 unk410F;
    volatile s8 unk4110;
    volatile s8 unk4111;
    u8 pad4112[0x6C];
    volatile s8 unk417E;
    u8 pad417F[0x43];
    volatile s8 unk41C2;
    u8 pad41C3[0xFB];
    volatile s16 unk42BE;
    u8 pad42C0[0x6560];
    volatile s32 unkA820;
};

struct Unk_D_000E15A8 {
    u8 pad0[0x98];
    s32 unk98;
};

struct Unk_D_000E2220 {
    u8 pad0[0xE0];
    s32 (*unkE0)(void *, s32);
    M2C_UNK (*unkE4)(void *, s32, s32, s32, M2C_UNK);
    u8 padE8[0x4];
    s32 (*unkEC)(void *, s32);
};

struct Unk_D_000FDB04 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_D_00106F70_s_14 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0xE];
    s16 unk26;
    u8 pad28[0x4];
    s16 unk2C;
};

struct Unk_D_00106F70_s_1ABC {
    u8 pad0[0x2];
    u16 unk2;
};

struct Unk_D_00108A2C {
    u8 pad0[0x4];
    u16 unk4;
    u8 pad6[0x2];
    u16 unk8;
    u8 padA[0x32];
    s16 unk3C;
};

struct Unk_Unk_Unk_func_0005C7E4_0_1E8_20 {
    u8 pad0[0x148];
    s32 unk148;
};

struct Unk_Unk_Unk_scePaf_7116224C_0_1E8_20 {
    u8 pad0[0x194];
    s32 unk194;
};

struct Unk_Unk_func_00013BE4_0_0 {
    u8 pad0[0x18];
    s32 (*unk18)(void *, void *, void *, void *, s32, s32, s32);
};

struct Unk_Unk_func_00038028_0_4 {
    u8 pad0[0x48];
    void *unk48;
};

struct Unk_Unk_func_0005C7E4_0_1E8 {
    u8 pad0[0x20];
    struct Unk_Unk_Unk_func_0005C7E4_0_1E8_20 *unk20;
};

struct Unk_Unk_func_0005C7F4_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_func_0005C834_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_func_0005C894_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_func_0005C8C4_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_func_000780C0_0_0 {
    u8 pad0[0x10];
    s32 (*unk10)(void *, M2C_UNK, M2C_UNK);
};

struct Unk_Unk_func_00078134_0_0 {
    u8 pad0[0x18];
    s32 (*unk18)(void *, M2C_UNK, M2C_UNK);
};

struct Unk_Unk_func_00088DBC_0_1E8 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_Unk_func_00088F94_0_1E8 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_Unk_scePaf_2A5DDF04_0_1E8 {
    u8 pad0[0x3F8];
    s32 unk3F8;
};

struct Unk_Unk_scePaf_44EB8C62_0_0 {
    u8 pad0[0xD0];
    M2C_UNK (*unkD0)(void *, s32);
};

struct Unk_Unk_scePaf_6E1B5B50_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_scePaf_7116224C_0_1E8 {
    u8 pad0[0x20];
    struct Unk_Unk_Unk_scePaf_7116224C_0_1E8_20 *unk20;
};

struct Unk_Unk_scePaf_BFFAEE83_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_fixedtables_0 {
    u8 pad0[0x4C];
    M2C_UNK * unk4C;
    M2C_UNK * unk50;
    s32 unk54;
    s32 unk58;
};

struct Unk_func_00000950_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00000960_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00001118_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000122C_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_0000221C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000226C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00009424_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_func_0000A6D0_0 {
    u8 pad0[0x64];
    s32 unk64;
    u8 pad68[0x168];
    s32 unk1D0;
};

struct Unk_func_0000B2F0_temp_v0 {
    u8 pad0[0x15];
    s8 unk15;
};

struct Unk_func_0000B38C_temp_v0 {
    u8 pad0[0x15];
    s8 unk15;
};

struct Unk_func_0000CB28_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0000CBA8_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000CBDC_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x8];
    s8 unk10;
    u8 unk11;
};

struct Unk_func_0000CC38_0 {
    u8 pad0[0x14];
    s32 unk14;
    s32 unk18;
    u8 unk1C;
};

struct Unk_func_0000CC8C_0 {
    u8 pad0[0x14];
    s32 unk14;
    s32 unk18;
    u8 unk1C;
};

struct Unk_func_0000DDF4_temp_v0 {
    u8 pad0[0x1D];
    s8 unk1D;
};

struct Unk_func_00010E38_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00012A50_0 {
    u8 pad0[0x74];
    s16 unk74;
};

struct Unk_func_00012A94_0 {
    u8 pad0[0x76];
    s16 unk76;
};

struct Unk_func_00012F40_0 {
    s32 unk0;
    u8 pad4[0x11];
    u8 unk15;
    u8 pad16[0x13];
    u8 unk29;
};

struct Unk_func_00013B68_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00013B7C_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_00013BA4_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_00013BB8_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_00013BE4_0 {
    struct Unk_Unk_func_00013BE4_0_0 *unk0;
    void *unk4;
};

struct Unk_func_00013DA8_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00016CF0_0 {
    M2C_UNK *unk0;
    u8 pad4[0x14];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00016D48_0 {
    M2C_UNK *unk0;
    u8 pad4[0x14];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00016DA0_0 {
    M2C_UNK *unk0;
    u8 pad4[0x14];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00016F2C_0 {
    u8 pad0[0x18];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00017A78_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00017BB0_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00017E18_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00017F50_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0001891C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s8 unk10;
    s8 unk11;
};

struct Unk_func_0001893C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s8 unk10;
    s8 unk11;
};

struct Unk_func_0001895C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s8 unk10;
    s8 unk11;
};

struct Unk_func_00018D50_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00019014_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
    s8 unk10;
    u8 unk11;
};

struct Unk_func_00019278_0 {
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
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s16 unk48;
    s16 unk4A;
    s32 unk4C;
    s32 unk50;
};

struct Unk_func_0001B9F4_0 {
    s8 unk0;
    u8 pad1[0x3];
    M2C_UNK *unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_0001B9F4_temp_v1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001BA3C_0 {
    s8 unk0;
    u8 pad1[0x3];
    M2C_UNK *unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_0001BA3C_temp_v1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001BEF4_0 {
    u8 unk0;
    u8 pad1[0x3];
    s32 unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_0001CA50_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0001DF4C_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0001DF68_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0001DF84_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0001E1C8_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0001E1C8_temp_v1 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0001E4F0_0 {
    u8 unk0;
    u8 pad1[0x1F];
    s32 unk20;
    u8 pad24[0x1C];
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
};

struct Unk_func_0001E8B4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001E8D0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001E8EC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001E908_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001E924_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001E940_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001F488_0 {
    u8 pad0[0x4D0];
    s32 unk4D0;
};

struct Unk_func_00020020_0 {
    u8 pad0[0x400];
    s32 unk400;
    s32 unk404;
    s32 unk408;
};

struct Unk_func_0002003C_0 {
    u8 pad0[0x408];
    s32 unk408;
};

struct Unk_func_00020050_0 {
    u8 pad0[0x42C];
    s32 unk42C;
};

struct Unk_func_00020070_1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00020094_1 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000200B4_1 {
    u8 pad0[0xE8];
    s32 unkE8;
};

struct Unk_func_000200F4_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00020114_1 {
    u8 pad0[0x18];
    u8 unk18;
};

struct Unk_func_00020134_1 {
    u8 pad0[0x19];
    u8 unk19;
};

struct Unk_func_00020154_1 {
    u8 pad0[0x1B];
    u8 unk1B;
};

struct Unk_func_00020174_1 {
    u8 pad0[0x1C];
    u8 unk1C;
};

struct Unk_func_00020194_1 {
    u8 pad0[0x1A];
    u8 unk1A;
};

struct Unk_func_0002039C_1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x50];
    s32 unk5C;
    u8 pad60[0x4];
    u8 unk64;
};

struct Unk_func_000203D4_1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x54];
    s32 unk60;
    u8 unk64;
};

struct Unk_func_0002040C_1 {
    u8 pad0[0x1D];
    u8 unk1D;
};

struct Unk_func_00020FCC_0 {
    u8 pad0[0x42C];
    s32 unk42C;
};

struct Unk_func_00021054_0 {
    u8 pad0[0x600];
    s32 unk600;
    s32 unk604;
    s32 unk608;
};

struct Unk_func_00021064_0 {
    u8 pad0[0x600];
    s32 unk600;
};

struct Unk_func_00022B5C_0 {
    u8 pad0[0x558];
    s32 unk558;
};

struct Unk_func_00023A7C_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_func_00023A94_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_func_00023AAC_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_func_00023AD8_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_func_00029694_0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct Unk_func_000296C0_0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct Unk_func_000296EC_0 {
    u8 unk0;
    u8 unk1;
};

struct Unk_func_0002D0C8_1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0002DE84_1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0002E840_0 {
    u8 pad0[0x5EC];
    s32 unk5EC;
};

struct Unk_func_0002EADC_0 {
    u8 pad0[0x620];
    s32 unk620;
    s32 unk624;
};

struct Unk_func_0002EAE8_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_func_0002EAF8_0 {
    u8 pad0[0x430];
    s32 unk430;
    u8 pad434[0xB3];
    u8 unk4E7;
};

struct Unk_func_00033A7C_0 {
    s32 unk0;
    void * unk4;
};

struct Unk_func_00033A88_0 {
    u8 pad0[0x4];
    M2C_UNK * unk4;
};

struct Unk_func_00033AC0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00033AC8_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000350D4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000350D4_temp_v1 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_00038028_0 {
    u8 pad0[0x4];
    struct Unk_Unk_func_00038028_0_4 *unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00038028_temp_v1 {
    s32 unk0;
    u8 pad4[0xC];
    M2C_UNK (*unk10)(s32, s32);
};

struct Unk_func_00038028_temp_v1_2 {
    s32 unk0;
    u8 pad4[0xC];
    M2C_UNK (*unk10)(s32, s32);
};

struct Unk_func_000380A4_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x24];
    s32 unk2C;
};

struct Unk_func_0003889C_0 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u16 unk8;
    u16 unkA;
};

struct Unk_func_0003889C_1 {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u16 unk8;
    u16 unkA;
};

struct Unk_func_0003960C_0 {
    u8 pad0[0x1E4];
    s32 unk1E4;
    u16 unk1E8;
    u8 unk1EA;
};

struct Unk_func_0003965C_0 {
    u8 pad0[0x1EC];
    s32 unk1EC;
    u16 unk1F0;
    u8 unk1F2;
};

struct Unk_func_0003D5A4_0 {
    u8 pad0[0x60];
    s32 unk60;
};

struct Unk_func_0003FEF8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00040774_0 {
    u8 pad0[0x1B8];
    s32 unk1B8;
};

struct Unk_func_000408D0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00040B40_0 {
    u8 pad0[0x18];
    s8 unk18;
};

struct Unk_func_00040B54_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    u8 padC[0x10];
    s32 unk1C;
};

struct Unk_func_00040B94_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    u8 padC[0x10];
    s32 unk1C;
};

struct Unk_func_00040BBC_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    u8 padC[0x10];
    s32 unk1C;
};

struct Unk_func_0004177C_0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct Unk_func_0004177C_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000421A8_temp_v0 {
    u8 pad0[0x15];
    s8 unk15;
};

struct Unk_func_00044510_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00044A7C_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00044A7C_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_000452E0_0 {
    u8 pad0[0x8C];
    void **unk8C;
};

struct Unk_func_00047288_0 {
    u8 pad0[0xE4];
    s32 unkE4;
};

struct Unk_func_00047530_0 {
    u8 pad0[0xD8];
    s32 unkD8;
};

struct Unk_func_00047BD8_0 {
    u8 pad0[0xEC];
    M2C_UNK * unkEC;
};

struct Unk_func_00047FC0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00048010_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00048060_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00048060_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_00048DE8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00048DF8_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0004B880_0 {
    u8 pad0[0x15C];
    s32 unk15C;
};

struct Unk_func_0004BE34_0 {
    u8 pad0[0x188];
    s32 unk188;
};

struct Unk_func_0004C7A0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0004D058_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0004D058_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_0004D3B4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0004D3C4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0004F5D4_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x8];
    u32 unk10;
    u32 unk14;
};

struct Unk_func_0004FF24_0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x38];
    u8 unk44;
};

struct Unk_func_00050144_0 {
    u8 pad0[0x30];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
};

struct Unk_func_00050144_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0005045C_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_0005045C_var_v0 *unk4;
};

struct Unk_func_0005045C_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_000504B4_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_000504B4_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_0005059C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0005106C_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0005106C_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_000510D4_0 {
    M2C_UNK *unk0;
    u8 pad4[0x20];
    s32 unk24;
};

struct Unk_func_00051128_0 {
    M2C_UNK *unk0;
    u8 pad4[0x20];
    s32 unk24;
};

struct Unk_func_00055A8C_0 {
    u8 pad0[0x1D4];
    s32 unk1D4;
};

struct Unk_func_00055AE8_0 {
    u8 pad0[0x1EC];
    s32 unk1EC;
};

struct Unk_func_00055AF4_0 {
    M2C_UNK * unk0;
    u8 pad4[0x4];
    M2C_UNK * unk8;
};

struct Unk_func_00055B10_0 {
    M2C_UNK * unk0;
    u8 pad4[0x4];
    M2C_UNK * unk8;
};

struct Unk_func_00055B44_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000573C8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0005A974_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0005A9E8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0005ACE4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0005AD50_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0005BF74_0 {
    u8 pad0[0x330];
    s32 unk330;
};

struct Unk_func_0005C7C8_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_0005C7E4_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_0005C7E4_0_1E8 *unk1E8;
};

struct Unk_func_0005C7F4_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_0005C7F4_0_1E8 *unk1E8;
};

struct Unk_func_0005C834_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_0005C834_0_1E8 *unk1E8;
};

struct Unk_func_0005C894_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_0005C894_0_1E8 *unk1E8;
};

struct Unk_func_0005C8C4_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_0005C8C4_0_1E8 *unk1E8;
};

struct Unk_func_0005D398_0 {
    u8 pad0[0x1D4];
    s32 unk1D4;
    u8 pad1D8[0x14];
    s32 unk1EC;
    u8 pad1F0[0x141];
    u8 unk331;
    u8 pad332[0x2];
    s8 unk334;
};

struct Unk_func_0005D398_1 {
    u8 pad0[0x8];
    u8 unk8;
};

struct Unk_func_000610F4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00061368_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0006158C_0 {
    M2C_UNK *unk0;
    u8 pad4[0x10];
    s32 unk14;
};

struct Unk_func_00062764_0 {
    u8 pad0[0x6C8];
    s8 unk6C8;
};

struct Unk_func_00062968_0 {
    u8 pad0[0x700];
    void **unk700;
};

struct Unk_func_000629B4_0 {
    u8 pad0[0x700];
    void **unk700;
};

struct Unk_func_000629FC_0 {
    u8 pad0[0x700];
    void **unk700;
};

struct Unk_func_0006598C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000659DC_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00065A2C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00066414_0 {
    M2C_UNK * unk0;
    u8 pad4[0x36C];
    s32 unk370;
};

struct Unk_func_00066450_0 {
    M2C_UNK * unk0;
    u8 pad4[0x36C];
    s32 unk370;
};

struct Unk_func_000670A0_0 {
    u8 pad0[0x554];
    s32 unk554;
};

struct Unk_func_000672F4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00068E5C_0 {
    u8 pad0[0x1EC];
    s32 unk1EC;
};

struct Unk_func_0006996C_0 {
    u8 pad0[0x332];
    u8 unk332;
    u8 pad333[0x105];
    s32 unk438;
    u8 pad43C[0x17C];
    s32 unk5B8;
};

struct Unk_func_0006A0D0_0 {
    u8 pad0[0x334];
    s8 unk334;
};

struct Unk_func_0006A0F4_0 {
    u8 pad0[0x334];
    s8 unk334;
};

struct Unk_func_0006A118_0 {
    u8 pad0[0x334];
    s8 unk334;
    s8 unk335;
};

struct Unk_func_0006A140_0 {
    u8 pad0[0x334];
    s8 unk334;
    s8 unk335;
};

struct Unk_func_0006A168_0 {
    u8 pad0[0x334];
    s8 unk334;
};

struct Unk_func_0006BD2C_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_0006BD64_0 {
    u8 pad0[0x1E8];
    void ** unk1E8;
};

struct Unk_func_0006BE14_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_0006BEA0_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_00071BF8_0 {
    u8 pad0[0x1E8];
    void ** unk1E8;
};

struct Unk_func_00071E74_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00071E74_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_00071EDC_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00071EDC_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_0007286C_0 {
    u8 pad0[0x24];
    void ** unk24;
};

struct Unk_func_00074830_0 {
    M2C_UNK * unk0;
    u8 pad4[0x4];
    M2C_UNK * unk8;
    u8 padC[0x10];
    u8 unk1C;
    u8 pad1D[0x3];
    s32 unk20;
};

struct Unk_func_00074A04_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00074A20_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00074A3C_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00074A58_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00074A74_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00074A90_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00074AAC_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00074AC8_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00074B34_0 {
    u8 pad0[0x20];
    void * unk20;
};

struct Unk_func_00075460_0 {
    u8 pad0[0x84];
    s32 unk84;
};

struct Unk_func_000780C0_0 {
    struct Unk_Unk_func_000780C0_0_0 *unk0;
    u8 pad4[0x18];
    s32 unk1C;
};

struct Unk_func_00078134_0 {
    struct Unk_Unk_func_00078134_0_0 *unk0;
    u8 pad4[0x18];
    s32 unk1C;
};

struct Unk_func_000781A8_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_000782CC_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00078300_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00078334_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00078368_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_0007839C_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00078408_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00078450_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_000785E4_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00078644_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_000786AC_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_000786E0_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00078714_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_000787D0_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00078800_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_000813F0_0 {
    u8 pad0[0x14F0];
    s32 unk14F0;
    s32 unk14F4;
    s32 unk14F8;
    s32 unk14FC;
};

struct Unk_func_000813F0_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000883DC_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_000884E8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000884E8_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00088534_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_00088554_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_00088DBC_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_00088DBC_0_1E8 *unk1E8;
};

struct Unk_func_00088F94_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_00088F94_0_1E8 *unk1E8;
};

struct Unk_func_000893C0_0 {
    u8 pad0[0x84];
    s32 unk84;
};

struct Unk_func_0008982C_0 {
    u8 pad0[0x84];
    s32 unk84;
};

struct Unk_func_000898F0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000899A8_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000899CC_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00089C44_0 {
    u32 unk0;
    s32 unk4;
};

struct Unk_func_00089C84_0 {
    u32 unk0;
    s32 unk4;
};

struct Unk_func_00089CFC_0 {
    u32 unk0;
    s32 unk4;
};

struct Unk_func_00089D68_0 {
    u32 unk0;
    s32 unk4;
};

struct Unk_func_00089E34_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00089E7C_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00089EFC_0 {
    s32 unk0;
    s32 (*unk4)(s32);
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0008A21C_0 {
    M2C_UNK * unk0;
    u32 unk4;
};

struct Unk_func_0008A244_0 {
    M2C_UNK * unk0;
    u32 unk4;
};

struct Unk_func_0008A314_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_0008D8D0_0 {
    M2C_UNK * unk0;
    u8 pad4[0x64];
    s32 unk68;
    u8 unk6C;
};

struct Unk_func_0008D93C_0 {
    M2C_UNK * unk0;
    u8 pad4[0x64];
    s32 unk68;
    u8 unk6C;
};

struct Unk_func_0008DD88_0 {
    u8 pad0[0x8];
    u32 unk8;
    s32 unkC;
    u8 pad10[0x8];
    s16 unk18;
    s16 unk1A;
    u8 pad1C[0x1C];
    s32 unk38;
    s32 unk3C;
    u8 pad40[0x2];
    s16 unk42;
    u8 pad44[0xC];
    s32 unk50;
};

struct Unk_func_0008F824_0 {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad3C[0x4];
    s16 unk40;
    u8 pad42[0xE];
    s32 unk50;
    s16 unk54;
};

struct Unk_func_00090B04_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00090B04_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_0009166C_0 {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad20[0x18];
    s32 unk38;
};

struct Unk_func_00091810_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_0009182C_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_000935E4_0 {
    u8 pad0[0x7C];
    s32 unk7C;
};

struct Unk_func_0009363C_0 {
    u8 pad0[0x7C];
    void ** unk7C;
};

struct Unk_func_0009363C_temp_a0 {
    u8 pad0[0xD88];
    M2C_UNK (*unkD88)(void *);
};

struct Unk_func_0009369C_0 {
    u8 pad0[0x7C];
    void ** unk7C;
};

struct Unk_func_0009369C_temp_a0 {
    u8 pad0[0xD90];
    M2C_UNK (*unkD90)(void *);
};

struct Unk_func_000936C8_0 {
    u8 pad0[0x7C];
    void ** unk7C;
};

struct Unk_func_000936C8_temp_a0 {
    u8 pad0[0xD98];
    M2C_UNK (*unkD98)(void *);
};

struct Unk_func_00095D98_0 {
    s32 unk0;
    u8 pad4[0x4];
    M2C_UNK (*unk8)(M2C_UNK, void *);
};

struct Unk_func_00095E08_temp_a0 {
    u8 pad0[0xF8];
    M2C_UNK (*unkF8)(void *);
};

struct Unk_func_00096188_0 {
    u8 pad0[0x600];
    s32 unk600;
    s32 unk604;
    s32 unk608;
    s32 unk60C;
};

struct Unk_func_0009655C_0 {
    u8 pad0[0xDBC];
    void *unkDBC;
};

struct Unk_func_00096620_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_0009665C_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_000966A4_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_000966EC_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_0009671C_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_000968B0_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_000968E0_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00096910_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00096940_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00096970_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_000969A0_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_000AB0A0_temp_s0 {
    u8 pad0[0x4];
    s16 unk4;
    u8 pad6[0x22];
    s16 unk28;
    u8 pad2A[0x2];
    s32 unk2C;
};

struct Unk_func_000B6348_0 {
    u8 pad0[0x4];
    struct Unk_func_000B6348_temp_s0 *unk4;
};

struct Unk_func_000B6348_temp_s0 {
    u8 pad0[0x3A74];
    s32 unk3A74;
};

struct Unk_func_000B924C_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000B9F98_0 {
    u8 pad0[0x6];
    u8 unk6;
    u8 pad7[0x1];
    u8 unk8;
};

struct Unk_func_000BAED0_0 {
    struct Unk_func_000BAED0_temp_a0 *unk0;
    s32 unk4;
    u8 pad8[0x1CB0];
    u16 unk1CB8;
};

struct Unk_func_000BAED0_temp_a0 {
    u8 pad0[0xE];
    u16 unkE;
};

struct Unk_func_000BB198_0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 (*unkC)(s32, M2C_UNK);
};

struct Unk_func_000BB97C_0 {
    u8 pad0[0x1F80];
    s32 unk1F80;
};

struct Unk_func_000BB99C_0 {
    u8 pad0[0x1F80];
    s32 unk1F80;
};

struct Unk_func_000BBE64_0 {
    u8 pad0[0x3C60];
    u16 unk3C60;
};

struct Unk_func_000BFC78_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000C043C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_png_do_swap_0 {
    s32 unk0;
    u8 pad4[0x5];
    u8 unk9;
    u8 unkA;
};

struct Unk_png_do_unpack_0 {
    u32 unk0;
    s32 unk4;
    u8 pad8[0x1];
    u8 unk9;
    u8 unkA;
    s8 unkB;
};

struct Unk_png_get_asm_flags_0 {
    u8 pad0[0x5FC];
    s32 unk5FC;
};

struct Unk_png_get_compression_buffer_size_0 {
    u8 pad0[0x470];
    s32 unk470;
};

struct Unk_png_get_mmx_bitdepth_threshold_0 {
    u8 pad0[0x5F5];
    u8 unk5F5;
};

struct Unk_png_get_mmx_rowbytes_threshold_0 {
    u8 pad0[0x5F8];
    s32 unk5F8;
};

struct Unk_png_get_rgb_to_gray_status_0 {
    u8 pad0[0x5E4];
    u8 unk5E4;
};

struct Unk_png_get_user_chunk_ptr_0 {
    u8 pad0[0x5D4];
    s32 unk5D4;
};

struct Unk_png_get_user_height_max_0 {
    u8 pad0[0x624];
    s32 unk624;
};

struct Unk_png_get_user_transform_ptr_0 {
    u8 pad0[0x420];
    s32 unk420;
};

struct Unk_png_get_user_width_max_0 {
    u8 pad0[0x620];
    s32 unk620;
};

struct Unk_png_set_invert_alpha_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_png_set_invert_mono_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_png_set_swap_alpha_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_png_set_user_transform_info_0 {
    u8 pad0[0x420];
    s32 unk420;
    s8 unk424;
    s8 unk425;
};

struct Unk_scePaf_01CF521E_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_scePaf_05073826_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_0598FFD6_0 {
    u8 pad0[0x42];
    s16 unk42;
    s16 unk44;
};

struct Unk_scePaf_08DD2D50_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_scePaf_0B0959FC_0 {
    s32 * unk0;
    u32 unk4;
};

struct Unk_scePaf_0B4C0DB6_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_scePaf_0FFA3ECE_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_1232B7A3_0 {
    u8 pad0[0x1E8];
    void * unk1E8;
    u8 pad1EC[0x148];
    s8 unk334;
};

struct Unk_scePaf_1A1F232F_0 {
    u8 pad0[0x4EC];
    s8 unk4EC;
};

struct Unk_scePaf_1B043852_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_scePaf_224C33F0_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_2313DDCA_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    u8 padC[0x10];
    s32 unk1C;
};

struct Unk_scePaf_2A5DDF04_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_scePaf_2A5DDF04_0_1E8 *unk1E8;
};

struct Unk_scePaf_3481F595_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_scePaf_409E25A3_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_44EB8C62_0 {
    struct Unk_Unk_scePaf_44EB8C62_0_0 *unk0;
    u8 pad4[0x344];
    s32 unk348;
    s32 unk34C;
};

struct Unk_scePaf_49CE42F7_0 {
    u8 pad0[0x1C0];
    u8 unk1C0;
};

struct Unk_scePaf_4D810FDC_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_4EA868E6_0 {
    u8 pad0[0x1E8];
    void ** unk1E8;
};

struct Unk_scePaf_4FC2470C_0 {
    u8 pad0[0x330];
    s32 unk330;
};

struct Unk_scePaf_539F2583_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_scePaf_5470B915_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_scePaf_55CC4749_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_5775283A_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_scePaf_58BFC2AC_0 {
    u8 pad0[0x230];
    s32 unk230;
    s32 unk234;
    s32 unk238;
    s32 unk23C;
};

struct Unk_scePaf_58BFC2AC_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_scePaf_5A8D4BDB_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_6141934B_0 {
    u8 pad0[0x700];
    s32 unk700;
};

struct Unk_scePaf_680513D9_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_scePaf_6C6979F0_0 {
    u8 pad0[0x98];
    s32 unk98;
};

struct Unk_scePaf_6E1B5B50_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_scePaf_6E1B5B50_0_1E8 *unk1E8;
};

struct Unk_scePaf_7116224C_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_scePaf_7116224C_0_1E8 *unk1E8;
};

struct Unk_scePaf_75062BCF_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_scePaf_79F4AE65_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_84913A3A_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_86A5AE7D_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_86B41BA3_0 {
    u8 pad0[0x1D0];
    s32 unk1D0;
};

struct Unk_scePaf_87E5F9C7_0 {
    u8 pad0[0xA0];
    s32 unkA0;
    s32 unkA4;
};

struct Unk_scePaf_89582FD0_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_8A51BA1E_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_8D7FC7DB_0 {
    u8 pad0[0x1E8];
    void * unk1E8;
    u8 pad1EC[0x148];
    s8 unk334;
};

struct Unk_scePaf_905CF2A7_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_95708BC0_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_A574DB92_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_ABCBC1C5_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_AEEF2A7C_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_B6F52424_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_B884B031_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_scePaf_B9BE69FD_0 {
    u8 pad0[0x1E8];
    void * unk1E8;
    u8 pad1EC[0x148];
    s8 unk334;
};

struct Unk_scePaf_BA6B8B02_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_BFFAEE83_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_scePaf_BFFAEE83_0_1E8 *unk1E8;
};

struct Unk_scePaf_C07B7162_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_C1F72218_0 {
    u32 unk0;
    u32 unk4;
    s32 unk8;
};

struct Unk_scePaf_C2E4423A_0 {
    u8 pad0[0x1E8];
    void ** unk1E8;
};

struct Unk_scePaf_C6624F24_0 {
    u8 pad0[0x430];
    s32 unk430;
    u8 pad434[0xB3];
    u8 unk4E7;
};

struct Unk_scePaf_C85155C9_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_C933B3C5_0 {
    u8 pad0[0x35C];
    s32 unk35C;
};

struct Unk_scePaf_CA5EF446_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_scePaf_CAF05F1D_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_scePaf_D1EE972C_0 {
    u8 pad0[0x1E8];
    void * unk1E8;
};

struct Unk_scePaf_D4C6CC7A_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_scePaf_D6CD39AF_0 {
    u8 unk0;
    u8 unk1;
};

struct Unk_scePaf_DB1549DF_0 {
    u8 pad0[0x42C];
    s32 unk42C;
};

struct Unk_scePaf_DC8B0309_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_DE75C2BA_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_DEF9EBE7_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_EB346F51_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_scePaf_F23F3226_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_F609FA81_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_scePaf_F639E5E1_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_F89014B3_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_FA758B05_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_FA78AF39_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_FA87D725_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_vt_func_00042E4C_arg0 {
    u8 pad0[0x18];
    M2C_UNK (*unk18)();
};

struct Unk_vt_func_000452E0_temp_a0 {
    u8 pad0[0x98];
    M2C_UNK (*unk98)(void **, M2C_UNK, s32);
};

struct Unk_vt_func_00055CE4_arg0 {
    u8 pad0[0x10];
    M2C_UNK (*unk10)();
};

struct Unk_vt_func_00055D08_arg0 {
    u8 pad0[0x14];
    M2C_UNK (*unk14)();
};

struct Unk_vt_func_00055D2C_arg0 {
    u8 pad0[0x18];
    M2C_UNK (*unk18)();
};

struct Unk_vt_func_00055D74_arg0 {
    u8 pad0[0x20];
    M2C_UNK (*unk20)();
};

struct Unk_vt_func_00055D98_arg0 {
    u8 pad0[0x24];
    M2C_UNK (*unk24)();
};

struct Unk_vt_func_00055DBC_arg0 {
    u8 pad0[0x28];
    M2C_UNK (*unk28)();
};

struct Unk_vt_func_00062968_temp_v0 {
    u8 pad0[0x70];
    M2C_UNK (*unk70)(void **, s32, s32);
};

struct Unk_vt_func_000629B4_temp_v0 {
    u8 pad0[0x74];
    M2C_UNK (*unk74)(void **, s32);
};

struct Unk_vt_func_000629FC_temp_v0 {
    u8 pad0[0x78];
    M2C_UNK (*unk78)(void **, s32, s32);
};

struct Unk_vt_func_00066E74_arg0 {
    u8 pad0[0x60];
    M2C_UNK (*unk60)(void **);
};

struct Unk_vt_func_0006BD64_temp_v1 {
    u8 pad0[0x84];
    s32 (*unk84)(void **);
};

struct Unk_vt_func_00071BF8_temp_v1 {
    u8 pad0[0x84];
    s32 (*unk84)(void **);
};

struct Unk_vt_func_0007286C_temp_a0 {
    u8 pad0[0x28];
    M2C_UNK (*unk28)(void **);
};

struct Unk_vt_scePaf_4EA868E6_temp_v1 {
    u8 pad0[0x74];
    s32 (*unk74)(void **);
};

struct Unk_vt_scePaf_C2E4423A_temp_v1 {
    u8 pad0[0x7C];
    s32 (*unk7C)(void **);
};

extern M2C_UNK D_000CE964;
extern M2C_UNK D_000D04F0;
extern M2C_UNK D_000D0798;
extern M2C_UNK D_000D1930;
extern M2C_UNK D_000D1940;
extern M2C_UNK D_000D1B28;
extern M2C_UNK D_000D1B4C;
extern M2C_UNK D_000D1B70;
extern M2C_UNK D_000D1CA0;
extern M2C_UNK D_000D1D54;
extern M2C_UNK D_000D1D7C;
extern M2C_UNK D_000D1D98;
extern M2C_UNK D_000D1DB4;
extern M2C_UNK D_000D1DD0;
extern M2C_UNK D_000D1E30;
extern M2C_UNK D_000D1E74;
extern M2C_UNK D_000D1EB0;
extern M2C_UNK D_000D1ED8;
extern M2C_UNK D_000D1FB0;
extern M2C_UNK D_000D22B4;
extern s32 D_000D3E64;
extern M2C_UNK D_000D5E64;
extern M2C_UNK D_000D6664;
extern M2C_UNK D_000D6F38;
extern M2C_UNK D_000D7588;
extern M2C_UNK D_000D75B0;
extern M2C_UNK D_000D7E70;
extern M2C_UNK D_000D7F58;
extern M2C_UNK D_000D80D8;
extern M2C_UNK D_000D8188;
extern M2C_UNK D_000D8678;
extern M2C_UNK D_000D8990;
extern M2C_UNK D_000D8A68;
extern M2C_UNK D_000D8BF8;
extern M2C_UNK D_000D8E30;
extern M2C_UNK D_000D8F40;
extern M2C_UNK D_000D9150;
extern M2C_UNK D_000D9490;
extern M2C_UNK D_000D9B60;
extern M2C_UNK D_000DAC9C;
extern M2C_UNK D_000DACA8;
extern M2C_UNK D_000DAD98;
extern M2C_UNK D_000DAFA0;
extern M2C_UNK D_000DAFB4;
extern M2C_UNK D_000DAFC0;
extern M2C_UNK D_000DAFE8;
extern M2C_UNK D_000DB0D8;
extern M2C_UNK D_000DB140;
extern M2C_UNK D_000DB1EC;
extern s32 D_000DD304;
extern s32 D_000DDA0C;
extern s32 D_000DDA10;
extern s8 D_000DDA18;
extern M2C_UNK D_000DDA1C;
extern M2C_UNK D_000DDA28;
extern void *D_000DE160;
extern s32 D_000DE164;
extern s32 D_000DE884;
extern s32 D_000DE8A0;
extern s32 D_000DE8A4;
extern M2C_UNK D_000DEA0C;
extern M2C_UNK D_000DEB60;
extern s32 D_000DEB64;
extern s32 D_000DEB68;
extern M2C_UNK D_000DEB6C;
extern M2C_UNK D_000DFEFC;
extern s32 D_000E0678;
extern s32 D_000E067C;
extern s32 D_000E072C;
extern s32 D_000E093C;
extern s32 D_000E1044;
extern s32 D_000E1048;
extern s32 D_000E104C;
extern s32 D_000E1090;
extern M2C_UNK D_000E1094;
extern s32 D_000E1100;
extern s32 D_000E1220;
extern s32 D_000E1224;
extern s32 D_000E1228;
extern s32 D_000E122C;
extern s32 D_000E1230;
extern s32 D_000E1234;
extern s32 D_000E1238;
extern s32 D_000E123C;
extern s32 D_000E1240;
extern s32 D_000E126C;
extern s32 D_000E1270;
extern s32 D_000E1274;
extern s32 D_000E1278;
extern s32 D_000E127C;
extern s32 D_000E1280;
extern s32 D_000E1284;
extern s32 D_000E1288;
extern s32 D_000E128C;
extern s32 D_000E1290;
extern s32 D_000E1294;
extern s32 D_000E1514;
extern s32 D_000E1518;
extern s32 D_000E1554;
extern struct Unk_D_000E15A8 *D_000E15A8;
extern s32 D_000E15C8;
extern M2C_UNK D_000E15CC;
extern M2C_UNK D_000E15D8;
extern M2C_UNK D_000E15E4;
extern s32 D_000E15F8;
extern s32 D_000E15FC;
extern s32 D_000E1600;
extern s32 D_000E1604;
extern s32 D_000E1608;
extern s32 D_000E1644;
extern s32 D_000E1648;
extern struct D_000E164C_s D_000E164C;
extern s32 D_000E165C;
extern s32 D_000E1664;
extern s32 D_000E1684;
extern s32 D_000E1688;
extern s32 D_000E1748;
extern s32 D_000E174C;
extern M2C_UNK D_000E1750;
extern s32 D_000E1768;
extern s32 D_000E1784;
extern s32 D_000E1788;
extern s32 D_000E178C;
extern void *D_000E17A8;
extern s32 D_000E17AC;
extern s32 D_000E17B4;
extern s32 D_000E1EBC;
extern s32 *D_000E1ECC;
extern s32 *D_000E1EFC;
extern s32 D_000E1F00;
extern s32 D_000E1F08;
extern s32 D_000E1F28;
extern s32 D_000E1F2C;
extern s32 D_000E1F30;
extern struct D_000E2000_s D_000E2000;
extern struct D_000E202C_s D_000E202C;
extern M2C_UNK D_000E2050;
extern u8 D_000E20A0;
extern s8 D_000E20C8;
extern M2C_UNK D_000E20E8;
extern s32 D_000E2118;
extern s32 D_000E211C;
extern s32 D_000E2120;
extern s32 D_000E2148;
extern s32 D_000E214C;
extern s32 D_000E2154;
extern s32 D_000E2158;
extern s32 D_000E2160;
extern s32 D_000E2164;
extern struct D_000E216C_s D_000E216C;
extern struct Unk_D_000E2220 *D_000E2220;
extern M2C_UNK D_000E6030;
extern M2C_UNK D_000E6034;
extern s32 D_000E6038;
extern s32 D_000E603C;
extern s32 D_000E6040;
extern s32 D_000E6044;
extern s32 D_000E6048;
extern M2C_UNK D_000E984C;
extern M2C_UNK D_000F58C0;
extern s32 D_000FA518;
extern s32 D_000FC140;
extern s32 D_000FC144;
extern M2C_UNK D_000FC528;
extern M2C_UNK D_000FC534;
extern s32 D_000FC9B4;
extern u8 D_000FC9C0;
extern s32 D_000FC9CC;
extern s32 D_000FD210;
extern s32 D_000FD224;
extern s32 D_000FDAB4;
extern void *D_000FDABC;
extern struct D_000FDAC0_s D_000FDAC0;
extern s32 D_000FDAEC;
extern struct Unk_D_000FDB04 *D_000FDB04;
extern s32 D_000FDB08;
extern s32 D_000FDB14;
extern s32 D_000FDB18;
extern s32 D_000FDB38;
extern s32 D_000FDB4C;
extern s32 D_000FDB68;
extern s32 D_000FDB78;
extern s32 D_000FDB8C;
extern s32 D_000FDBE8;
extern s32 D_000FDBFC;
extern s32 D_000FDC14;
extern s32 D_000FDC2C;
extern s32 D_000FDE40;
extern M2C_UNK D_000FDE78;
extern M2C_UNK D_000FDF38;
extern M2C_UNK D_000FDF48;
extern M2C_UNK D_000FDF54;
extern M2C_UNK D_000FDF60;
extern s32 D_000FDF6C;
extern s32 D_000FE768;
extern s32 D_000FE8B0;
extern s32 D_000FE970;
extern s32 D_000FE988;
extern s32 D_000FE9B8;
extern s32 D_000FEAF0;
extern s32 D_000FEDB8;
extern s32 D_000FEE80;
extern s32 D_000FEF60;
extern s32 D_000FEFE0;
extern M2C_UNK D_000FF5B4;
extern s32 D_000FF5D8;
extern s32 D_000FF78C;
extern M2C_UNK D_000FF7B0;
extern M2C_UNK D_000FF7CC;
extern M2C_UNK D_000FF7E8;
extern s32 D_001057D8;
extern struct D_00106F70_s D_00106F70;
extern M2C_UNK D_00108130;
extern s16 D_0010883E;
extern s16 D_00108846;
extern struct Unk_D_00108A2C *D_00108A2C;
extern s16 D_0010B06A;
extern M2C_UNK D_0010B0EE;
extern s16 D_0010B154;
extern s16 D_0010B164;
extern M2C_UNK D_0010CD84;
extern M2C_UNK D_0010DC8C;
extern s16 D_0010DD08;
extern s32 D_0010DDEC;
extern s32 D_0010ED30;
extern s8 D_0010ED38;
extern M2C_UNK D_0010ED3C;
extern M2C_UNK D_0010ED48;
extern s32 D_0010EF10;
extern s32 D_0010EF18;
extern s32 D_0010EF24;
extern M2C_UNK D_0010EF7C;
extern s32 D_0010F091;
extern s32 D_0010F1A4;
extern s32 *D_0010F1B8;
extern s32 D_0010F1BC;
extern s32 D_0010F1C0;
extern s32 D_0010F1C4;
extern u8 D_0010F1C8;
extern s32 D_0010F1CC;
extern s32 D_0010F200;
extern s32 D_0010F208;
extern s32 D_0010F20C;
extern s32 D_0010FA1C;
extern void *D_0010FA70;
extern s32 D_0010FCC8;
extern s32 D_0010FCCC;
extern M2C_UNK D_0010FCFC;
extern s32 D_0011390C;
extern s32 D_00118DD4;
extern s32 D_00118DD8;
extern M2C_UNK D_00122258;
extern M2C_UNK D_00123418;
extern s16 D_00123B26;
extern void *D_00123D14;
extern s16 D_00126352;
extern M2C_UNK D_001263D6;
extern s16 D_0012643C;
extern s16 D_0012644C;
extern M2C_UNK D_00128F74;
extern M2C_UNK D_0012A264;
extern s32 D_0012B340;
extern M2C_UNK D_0012B34C;
extern s32 D_0012B378;
extern s32 D_0012B37C;
extern void *D_0012B390;
extern s32 D_0012B394;
extern s16 D_001360B6;
extern s16 D_001360B8;
extern u16 D_001360BA;
extern s16 D_001360BC;
extern s16 D_001360C2;
extern s16 D_001360CA;
extern u16 D_001360CC;
extern s16 D_001360CE;
extern s16 D_001360D0;
extern s16 D_001360D2;
extern s16 D_001360D8;
extern s16 D_001360E6;
extern s16 D_001360EA;
extern s16 D_001360F6;
extern u16 D_001360FA;
extern s16 D_00136106;
extern s16 D_00136108;
extern s16 D_00136CD6;
extern s16 D_00136CD8;
extern u16 D_00136CDA;
extern s16 D_00137BDE;
extern s16 D_00137BEE;
extern u16 D_00137E22;
extern s16 D_00137E24;
extern s16 D_00137F9E;
extern M2C_UNK D_00137FA8;
extern s8 D_00137FAA;
extern s16 D_00138088;
extern u8 D_00138093;
extern u16 D_0013810E;
extern s32 D_0013ABC0;
extern s32 D_0013ABC4;
extern s32 D_0013ABC8;
extern s16 D_0013AC34;
extern s16 D_0013AC48;
extern s32 D_0013E6BC;
extern M2C_UNK func_00034148;

void acosf(void);
void cosf(void);
s32 crc32(M2C_UNK, M2C_UNK, M2C_UNK);
void fixedtables(struct Unk_fixedtables_0 *arg0);
void floorf(void);
void free(void);
M2C_UNK func_00000000();
M2C_UNK func_00000648(M2C_UNK, M2C_UNK);
void func_00000950(struct Unk_func_00000950_0 *arg0);
void func_00000960(struct Unk_func_00000960_0 *arg0);
s32 func_00001118(struct Unk_func_00001118_0 *arg0);
s32 func_0000122C(struct Unk_func_0000122C_0 *arg0);
s32 func_000014E4(s32, s32, s32);
s32 func_000014EC(s32, s32, s32, s32);
s32 func_000015AC(s32, s32, s32, s32);
s32 func_00001600(s32, s32);
M2C_UNK func_000016C0(s32, s32);
s32 func_00001790(s32, s32);
void func_00001CE0(void *arg0, void *arg1);
void func_000021EC(void **arg0, void *arg1);
void func_0000221C(struct Unk_func_0000221C_0 *arg0);
void func_0000226C(struct Unk_func_0000226C_0 *arg0);
s32 func_000023F0(s32, s32, s32);
void func_0000241C(void);
M2C_UNK func_00002438();
s32 func_00002464(s32, s32);
void func_000025CC(void *arg0, void *arg1);
void *func_00002678(void **arg0);
s32 func_000026BC(s32, s32, s32);
s32 func_00002F1C(s32, s32);
s32 func_00002F4C(s32, s32);
s32 func_000030C8(void);
s32 func_0000355C(s32, s32);
M2C_UNK func_00003AEC(s32, s32);
s32 func_00004EC0(s32, s32);
s32 func_000053E4(s32);
void func_00008D54(void);
void func_00008E14(void);
s32 func_00008EB8(void);
s32 func_00008EC0(void);
void func_00009424(struct Unk_func_00009424_0 *arg0, s32 arg1);
void func_00009554(void);
void func_00009A44(void *arg0, s32 arg1);
M2C_UNK func_00009D9C(void *, s32);
void func_0000A6D0(struct Unk_func_0000A6D0_0 *arg0);
void func_0000A708(void);
void func_0000A724(void);
void func_0000A740(void);
void func_0000A75C(void);
void func_0000A778(void);
void func_0000A794(void);
void func_0000A7B0(void);
void func_0000A7CC(s32 *arg0, s32 arg1);
void func_0000A7EC(void);
s32 *func_0000A808(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 *func_0000A870(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0000A8A8(s32 arg0, s32 *arg1);
void func_0000A8F8(void **arg0, void *arg1);
s32 *func_0000ABA0(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0000ABD8(s32 arg0, s32 *arg1);
s32 *func_0000AC08(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0000AC40(s32 *arg0, s32 arg1);
M2C_UNK func_0000AC60(s32, s32);
M2C_UNK func_0000ACD8(s32, M2C_UNK);
s32 *func_0000ADB8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
M2C_UNK func_0000AE20();
M2C_UNK func_0000AE78();
M2C_UNK func_0000AED0();
M2C_UNK func_0000AEFC();
M2C_UNK func_0000AF54();
M2C_UNK func_0000AF80();
M2C_UNK func_0000AFD8();
M2C_UNK func_0000B004();
M2C_UNK func_0000B024();
s32 func_0000B050(M2C_UNK, M2C_UNK);
s32 func_0000B298(M2C_UNK, M2C_UNK);
void func_0000B2F0(s32 arg0, s32 arg1);
s32 func_0000B334(M2C_UNK, M2C_UNK);
void func_0000B38C(s32 arg0, s32 arg1);
s32 func_0000B3D0(M2C_UNK, M2C_UNK);
M2C_UNK func_0000B4A8();
s32 func_0000B6B8(M2C_UNK, M2C_UNK);
void func_0000B7F8(void);
s32 *func_0000BBC0(s32 *arg0, s32 arg1, s32 arg2);
M2C_UNK func_0000BCD4(s32, void *);
M2C_UNK func_0000BF00(s32, void *);
s32 func_0000C0E8(void);
s32 func_0000C314(s32, s32);
s32 *func_0000C45C(s32 *arg0, s32 arg1, s32 arg2);
s32 *func_0000C528(s32 *arg0, s32 arg1, s32 arg2);
s32 func_0000C540(s32, s32);
void func_0000CA68(M2C_UNK **arg0);
void func_0000CA78(M2C_UNK **arg0);
void func_0000CAA0(M2C_UNK **arg0);
void func_0000CAB0(M2C_UNK **arg0);
void func_0000CB28(struct Unk_func_0000CB28_0 *arg0);
M2C_UNK func_0000CB68(void *);
void func_0000CBA8(struct Unk_func_0000CBA8_0 *arg0);
void func_0000CBDC(struct Unk_func_0000CBDC_0 *arg0);
void func_0000CC38(struct Unk_func_0000CC38_0 *arg0);
void func_0000CC8C(struct Unk_func_0000CC8C_0 *arg0);
M2C_UNK func_0000CDBC(void *);
void *func_0000D108(void **arg0);
void *func_0000D140(void **arg0);
void *func_0000D178(void **arg0);
void *func_0000D1B0(void **arg0);
void func_0000DC60(M2C_UNK **arg0, M2C_UNK *arg1);
M2C_UNK func_0000DC68(M2C_UNK, M2C_UNK);
void func_0000DCA0(M2C_UNK **arg0, M2C_UNK *arg1);
void func_0000DCE0(M2C_UNK **arg0, M2C_UNK *arg1);
void func_0000DD14(void);
void func_0000DD20(M2C_UNK **arg0, M2C_UNK *arg1);
void func_0000DD34(void);
s32 *func_0000DD54(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0000DDF4(s32 arg0, s32 arg1);
s32 *func_0000DE38(s32 *arg0, s32 arg1, s32 arg2);
s32 func_0000DE70(M2C_UNK, M2C_UNK);
M2C_UNK func_0000E138(s32, void *);
void func_0000E2E8(void *arg0);
void func_0000E33C(void *arg0);
s32 func_0000E74C(s32, s32);
void func_0000E794(void);
M2C_UNK func_0000E7B0();
void func_0000E808(void);
M2C_UNK func_0000E824();
s32 *func_0000ED54();
s32 func_0000EE38(s32);
void func_0000F1E0(s32 arg0, s32 arg1, s32 arg2);
void func_0000F2D0(s32 arg0, s32 arg1, s32 arg2);
void func_0000F458(s32 arg0, s32 arg1, s32 arg2);
s32 func_0000F464(s32, s32);
void func_0000FB08(M2C_UNK **arg0, M2C_UNK *arg1);
void func_0000FB48(M2C_UNK **arg0, M2C_UNK *arg1);
void func_0000FB88(void *arg0);
void func_0000FBA4(void *arg0);
void func_0000FBB0(void);
s32 func_0000FBCC(void);
void *func_0000FC80(void **arg0);
s32 func_0000FCB8(void *arg0);
s32 *func_0000FCF0(void);
s32 func_0000FF30(s32, s32, s32, s32, s32);
s32 func_000106C8(s32, s32, s32, s32, s32);
s32 func_00010E38(struct Unk_func_00010E38_0 *arg0);
s32 *func_00011028(void);
s32 *func_000112A0(void);
s32 func_00011374(void);
void func_000113E8(void);
void func_000113F0(void);
s32 *func_00011518(void);
s32 *func_00011654(void);
void func_0001179C(void);
void func_000117A4(void);
s32 *func_0001195C(void);
M2C_UNK func_00011C1C(s32);
s32 *func_00011EA0(void);
void func_00011FD0(void);
void func_00011FD8(void);
s32 *func_00012108(void);
s32 func_00012214(s32, s32, s32);
s32 *func_00012348(void);
void func_00012478(void);
void func_00012480(void);
s32 *func_000125B0(void);
s32 func_000125D4(s32 arg0);
s32 func_00012654(void *arg0);
s32 func_00012684(s32, s32);
M2C_UNK func_0001285C(s32);
s32 func_00012988(s32, s32);
s32 func_00012A50(struct Unk_func_00012A50_0 *arg0, s32 arg1);
s32 func_00012A94(struct Unk_func_00012A94_0 *arg0, s32 arg1);
void func_00012D8C(void);
s32 func_00012DA8(void);
s32 func_00012DC4(s32);
s32 func_00012E6C(s32 arg0);
void *func_00012E8C(void **arg0);
s32 func_00012F40(struct Unk_func_00012F40_0 *arg0);
s32 *func_00012FE4(void);
void func_00013410(M2C_UNK **arg0);
void func_00013440(M2C_UNK **arg0);
void func_00013468(M2C_UNK **arg0);
void func_00013490(M2C_UNK **arg0);
s32 func_00013B60(void);
void func_00013B68(struct Unk_func_00013B68_0 *arg0);
void func_00013B7C(struct Unk_func_00013B7C_0 *arg0);
s32 func_00013B90(s32);
void func_00013BA4(struct Unk_func_00013BA4_0 *arg0);
void func_00013BB8(struct Unk_func_00013BB8_0 *arg0);
s32 func_00013BE4(struct Unk_func_00013BE4_0 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK *func_00013C2C(void);
void func_00013DA8(struct Unk_func_00013DA8_0 *arg0);
void func_0001408C(void);
void func_00014094(M2C_UNK **arg0);
void func_000140A4(M2C_UNK **arg0);
s32 func_000140C4(s32, s32);
M2C_UNK *func_000140F8(void);
void func_00014184(M2C_UNK **arg0);
void func_000141AC(M2C_UNK **arg0);
void func_000141D4(M2C_UNK **arg0);
M2C_UNK *func_0001440C(void);
s32 func_000148A4(s32, s32);
M2C_UNK *func_000148D8(void);
s32 func_00014A18(s32 arg0, s32 arg1);
M2C_UNK *func_00014A4C(void);
void func_00014B40(M2C_UNK **arg0);
void func_00014B68(M2C_UNK **arg0);
void func_00014B90(M2C_UNK **arg0);
s32 func_00015064(s32 arg0, s32 arg1);
M2C_UNK *func_00015098(void);
s32 func_00015158(s32 arg0, s32 arg1);
M2C_UNK *func_0001518C(void);
s32 func_00015210(s32 arg0, s32 arg1);
M2C_UNK *func_00015244(void);
s32 func_00015874(s32 arg0, s32 arg1);
s32 *func_000158A8(void);
s32 func_00015968(s32 arg0, s32 arg1);
M2C_UNK *func_0001599C(void);
void func_00015BF0(M2C_UNK **arg0);
void func_00015C18(M2C_UNK **arg0);
void func_00015C40(M2C_UNK **arg0);
s32 func_0001609C(s32 arg0, s32 arg1);
M2C_UNK *func_000160D0(void);
void func_00016108(struct Unk_func_00013B68_0 *arg0, s32 arg1);
void func_0001615C(M2C_UNK **arg0);
void func_00016184(M2C_UNK **arg0);
void func_000161AC(M2C_UNK **arg0);
void func_00016CF0(struct Unk_func_00016CF0_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00016D48(struct Unk_func_00016D48_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00016DA0(struct Unk_func_00016DA0_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00016F2C(struct Unk_func_00016F2C_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_00017A78(struct Unk_func_00017A78_0 *arg0, s32 arg1, s32 arg2);
s32 func_00017BB0(struct Unk_func_00017BB0_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_00017E18(struct Unk_func_00017E18_0 *arg0, s32 arg1, s32 arg2);
s32 func_00017F50(struct Unk_func_00017F50_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_00018110(M2C_UNK **arg0);
void func_00018138(M2C_UNK **arg0);
void func_00018160(M2C_UNK **arg0);
void func_0001891C(struct Unk_func_0001891C_0 *arg0);
void func_0001893C(struct Unk_func_0001893C_0 *arg0, s32 arg1);
void func_0001895C(struct Unk_func_0001895C_0 *arg0, s32 arg1);
void func_0001897C(void);
void func_00018998(void);
s32 func_00018D50(struct Unk_func_00018D50_0 *arg0, s32 arg1);
s32 func_00019014(struct Unk_func_00019014_0 *arg0);
s32 func_00019054(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK func_000191D0();
void func_00019278(struct Unk_func_00019278_0 *arg0);
void func_00019670(M2C_UNK **arg0);
void func_000196A0(M2C_UNK **arg0);
void func_000196D0(M2C_UNK **arg0);
void func_000196F8(M2C_UNK **arg0);
void func_00019720(M2C_UNK **arg0);
s32 func_0001A17C(s32);
void func_0001A31C(M2C_UNK **arg0);
void func_0001A34C(M2C_UNK **arg0);
void func_0001A37C(M2C_UNK **arg0);
s32 func_0001A388(s32, s32);
void func_0001A3A4(M2C_UNK **arg0);
void func_0001A3CC(M2C_UNK **arg0);
void func_0001A8C8(M2C_UNK **arg0);
void func_0001A8F0(M2C_UNK **arg0);
void func_0001A918(M2C_UNK **arg0);
void func_0001A9C8(M2C_UNK **arg0);
void func_0001A9F8(M2C_UNK **arg0);
void func_0001AA28(M2C_UNK **arg0);
void func_0001AA50(M2C_UNK **arg0);
void func_0001AA78(M2C_UNK **arg0);
void func_0001AAF0(s32 *arg0);
void func_0001AAF8(s32 **arg0, s32 **arg1);
void func_0001AB18(s32 **arg0, s32 **arg1);
void func_0001AC14(s32 **arg0);
void func_0001B108(void *arg0, s32 arg1);
s32 *func_0001B6B4(void);
s32 *func_0001B6C0(void);
s32 *func_0001B6CC(void);
s32 *func_0001B6FC(void);
void func_0001B9F4(struct Unk_func_0001B9F4_0 *arg0, s32 arg1);
void func_0001BA3C(struct Unk_func_0001BA3C_0 *arg0, s32 arg1);
s32 func_0001BBE4(s32, s32);
void func_0001BEF4(struct Unk_func_0001BEF4_0 *arg0);
s32 func_0001C014(s32, s32, s32, s32, s32, s32, s32);
s32 func_0001C128(s32, s32, s32, s32, s32, s32);
s32 func_0001C56C(void);
void func_0001C6B4(void *arg0, s32 arg1, s32 arg2);
void func_0001C6D0(void *arg0);
void func_0001C6EC(void *arg0);
s32 func_0001C758(s32, s32);
void func_0001C7E4(void);
void func_0001C804(void);
s32 func_0001C9D0(void);
s32 func_0001C9D8(void);
s32 func_0001C9E0(void);
s32 func_0001C9E8(void);
s32 func_0001C9F0(void);
s32 func_0001C9F8(void);
s32 func_0001CA00(void);
s32 func_0001CA08(void);
void func_0001CA10(M2C_UNK **arg0);
void func_0001CA20(M2C_UNK **arg0);
s32 func_0001CA48(void);
s32 func_0001CA50(struct Unk_func_0001CA50_0 *arg0, u32 arg1);
s32 func_0001CA9C(void);
s32 func_0001CC08(s32 arg0);
s32 func_0001CDF8(void);
s32 func_0001CE00(void);
void func_0001CFB4(M2C_UNK **arg0);
void func_0001CFC4(M2C_UNK **arg0);
void func_0001CFEC(void *arg0);
void func_0001D010(void *arg0);
void func_0001D034(M2C_UNK **arg0);
void func_0001D044(M2C_UNK **arg0);
void func_0001D054(M2C_UNK **arg0);
s32 func_0001D07C(s32 arg0, u32 arg1);
s32 func_0001D8EC(s32, s32, s32);
s32 func_0001D9EC(s32);
s32 func_0001DA38(s32);
s32 func_0001DE04(void);
void func_0001DF4C(struct Unk_func_0001DF4C_0 *arg0);
void func_0001DF68(struct Unk_func_0001DF68_0 *arg0);
void func_0001DF84(struct Unk_func_0001DF84_0 *arg0);
M2C_UNK func_0001DFF0(M2C_UNK, M2C_UNK);
void func_0001E07C(void);
void func_0001E09C(void);
s32 func_0001E0BC(s32);
void func_0001E1C8(struct Unk_func_0001E1C8_0 *arg0);
void func_0001E4F0(struct Unk_func_0001E4F0_0 *arg0);
void func_0001E8B4(struct Unk_func_0001E8B4_0 *arg0);
void func_0001E8D0(struct Unk_func_0001E8D0_0 *arg0);
void func_0001E8EC(struct Unk_func_0001E8EC_0 *arg0);
void func_0001E908(struct Unk_func_0001E908_0 *arg0);
void func_0001E924(struct Unk_func_0001E924_0 *arg0);
void func_0001E940(struct Unk_func_0001E940_0 *arg0);
M2C_UNK func_0001F0C4(s32);
M2C_UNK func_0001F1D0(s32);
void func_0001F20C(void);
M2C_UNK func_0001F21C(s32);
s32 func_0001F234(void);
s32 func_0001F23C(void);
s32 func_0001F334(s32, s32, s32);
void func_0001F46C(void);
void func_0001F488(struct Unk_func_0001F488_0 *arg0);
M2C_UNK func_0001F4BC(s32, M2C_UNK, M2C_UNK);
s32 *func_0001FBA4(void);
M2C_UNK *func_0001FBB0(void);
M2C_UNK *func_0001FBBC(void);
void func_0001FC54(s32 arg0);
s32 func_0001FC70(void);
s32 func_0001FC90(void);
s32 func_0001FF44(s32, s32);
void func_00020018(void);
void func_00020020(struct Unk_func_00020020_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0002003C(struct Unk_func_0002003C_0 *arg0);
void func_00020050(struct Unk_func_00020050_0 *arg0, s32 arg1);
s32 func_00020070(s32 arg0, struct Unk_func_00020070_1 *arg1, s32 arg2);
s32 func_00020094(s32 arg0, struct Unk_func_00020094_1 *arg1);
s32 func_000200B4(s32 arg0, struct Unk_func_000200B4_1 *arg1);
s32 func_000200D4(s32 arg0, s32 *arg1);
s32 func_000200F4(s32 arg0, struct Unk_func_000200F4_1 *arg1);
u8 func_00020114(s32 arg0, struct Unk_func_00020114_1 *arg1);
u8 func_00020134(s32 arg0, struct Unk_func_00020134_1 *arg1);
u8 func_00020154(s32 arg0, struct Unk_func_00020154_1 *arg1);
u8 func_00020174(s32 arg0, struct Unk_func_00020174_1 *arg1);
u8 func_00020194(s32 arg0, struct Unk_func_00020194_1 *arg1);
s32 func_0002039C(s32 arg0, struct Unk_func_0002039C_1 *arg1);
s32 func_000203D4(s32 arg0, struct Unk_func_000203D4_1 *arg1);
u8 func_0002040C(s32 arg0, struct Unk_func_0002040C_1 *arg1);
s32 func_0002042C(s32 arg0, s32 arg1);
void func_00020D28(void *arg0);
void func_00020DAC(void *arg0);
void func_00020E30(void *arg0);
M2C_UNK func_00020E78();
void func_00020EB4(void *arg0);
void func_00020EC4(void *arg0);
void func_00020F14(void *arg0);
void func_00020F30(void);
M2C_UNK func_00020F4C();
void func_00020F4C_v100(void *arg0, s32 arg1);
void func_00020FCC(struct Unk_func_00020FCC_0 *arg0);
void func_0002100C_v100(void *arg0, s32 arg1);
void func_00021054(struct Unk_func_00021054_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00021064(struct Unk_func_00021064_0 *arg0);
s32 func_00021090(s32, s32, s32, s32, s32, s32, s32);
void func_000210CC(void *arg0, s32 arg1);
void func_00021194(void *arg0, s32 arg1);
void func_000214B0(void *arg0);
void func_00021570(void *arg0);
s32 func_00021580(void);
s32 func_0002159C(s32, s32);
s32 func_000216B4(s32, s32);
s32 func_000217CC(s32, s32);
void func_00021804(void *arg0, s32 arg1);
void func_000218C4(void *arg0, s32 arg1);
s32 func_000218DC(s32, s32);
s32 func_000219F4(s32, s32);
s32 *func_00021D68(void);
s32 *func_000223C8(void);
void func_00022B5C(struct Unk_func_00022B5C_0 *arg0, s32 arg1);
M2C_UNK func_00022DF8();
M2C_UNK func_00023060(s32);
M2C_UNK func_00023070(s32);
void func_00023A7C(struct Unk_func_00023A7C_0 *arg0);
void func_00023A94(struct Unk_func_00023A94_0 *arg0);
void func_00023AAC(struct Unk_func_00023AAC_0 *arg0);
M2C_UNK func_00023AC0(s32);
void func_00023AD8(struct Unk_func_00023AD8_0 *arg0);
M2C_UNK func_00023AF0(s32);
s32 *func_000256D0(void);
void func_00025A58(s32 **arg0);
s32 *func_00025AD0(void);
s32 *func_00026210(void);
s32 *func_00026B90(void);
M2C_UNK *func_00027448(void);
void func_000275D4(void);
u8 func_00027650(void);
void func_0002772C(s32 arg0, s32 arg1);
s32 func_00029694(struct Unk_func_00029694_0 *arg0);
s32 func_000296C0(struct Unk_func_000296C0_0 *arg0);
s32 func_000296EC(struct Unk_func_000296EC_0 *arg0);
void func_00029704(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00029E58(s32 arg0, s32 *arg1, s32 arg2);
void func_00029EB0(s32 arg0, s32 arg1, s32 arg2);
void func_00029F04(s32 arg0, s32 arg1, s32 arg2);
void func_00029F58(s32 arg0, s32 *arg1, s32 arg2, s32 arg3);
void func_00029FD0(void);
void func_00029FEC(void);
void func_0002A008(void);
void func_0002A024(void);
void func_0002A040(void);
void func_0002A05C(void);
void func_0002A078(void);
void func_0002A094(void);
s32 func_0002A0C0(s32, s32, s32, s32);
s32 func_0002A298(s32, s32);
s32 *func_0002A928(void);
s32 *func_0002B0BC(void);
void func_0002B5E0(s32 arg0);
void func_0002BC40(void);
void func_0002BC5C(void);
void func_0002C5D0(M2C_UNK **arg0, M2C_UNK *arg1);
void func_0002C610(M2C_UNK **arg0, M2C_UNK *arg1);
s32 *func_0002C838(void);
s32 func_0002CD7C(s32);
s32 *func_0002CEFC(void);
void func_0002D0C8(s32 arg0, struct Unk_func_0002D0C8_1 *arg1, M2C_UNK arg2);
void func_0002DE84(s32 arg0, struct Unk_func_0002DE84_1 *arg1, M2C_UNK arg2);
s32 func_0002E840(struct Unk_func_0002E840_0 *arg0, s32 arg1);
void func_0002EABC(void);
void func_0002EAC4(void *arg0, s8 arg1, s32 arg2);
void func_0002EADC(struct Unk_func_0002EADC_0 *arg0, s32 arg1, s32 arg2);
void func_0002EAE8(struct Unk_func_0002EAE8_0 *arg0);
void func_0002EAF8(struct Unk_func_0002EAF8_0 *arg0);
M2C_UNK func_0002EBB8(s32);
void func_0002EF48(void);
void func_0002EF64(void);
void func_0002EF80(void);
void func_0002EF9C(void);
void func_0002EFB8(void);
void func_0002EFD4(void);
void func_0002EFF0(void);
void func_0002F00C(void);
s32 func_0002F038(s32);
s32 func_0002FC50(s32 *arg0, s32 arg1);
s32 func_0003032C(s32);
s32 func_00031854(void);
s32 func_00031884(void);
s32 func_000328BC(void);
void func_00032D50(void);
void func_00032D6C(void);
void func_00032D88(void);
void func_00032DA4(void);
s32 func_000330B8(s32 arg0);
s32 func_0003330C(void *arg0);
s32 func_00033488(void *arg0);
s32 func_000334B8(s32);
s32 func_000337A4(void);
void func_00033A7C(struct Unk_func_00033A7C_0 *arg0);
void func_00033A88(struct Unk_func_00033A88_0 *arg0, M2C_UNK *arg1);
void func_00033AC0(struct Unk_func_00033AC0_0 *arg0, s32 arg1);
s32 func_00033AC8(struct Unk_func_00033AC8_0 *arg0);
M2C_UNK *func_00033ADC(M2C_UNK **arg0, s32 arg1);
s32 *func_00033B18(s32 **arg0, s32 arg1);
s32 func_00033EEC(s32 arg0, s32 arg1, s32 *arg2);
M2C_UNK func_00033FE0(M2C_UNK, M2C_UNK);
void func_00034084(void);
void func_000340A4(void);
s32 func_000340C4(s32, s32);
s32 func_00034114(void);
s32 func_00034590(void);
s32 func_00034834(void);
s32 func_00034B84(void);
void func_000350D4(struct Unk_func_000350D4_0 *arg0, s32 arg1);
s32 func_00035168(s32, s32);
s32 func_000355B0(void *arg0);
s32 func_0003562C(void *arg0);
s32 func_00035DC0(void *arg0, void *arg1);
s32 func_00035DCC(s32, s32, s32, s32, s32);
s32 func_00036B30(void *arg0, s32 *arg1);
s32 func_00036B80(void *arg0, s32 *arg1);
s32 func_00038028(struct Unk_func_00038028_0 *arg0);
s32 func_000380A4(struct Unk_func_000380A4_0 *arg0);
s32 func_0003889C(struct Unk_func_0003889C_0 *arg0, struct Unk_func_0003889C_1 *arg1);
s32 func_000393CC(void);
s32 func_0003960C(struct Unk_func_0003960C_0 *arg0, s32 *arg1);
s32 func_0003965C(struct Unk_func_0003965C_0 *arg0, s32 *arg1);
void func_00039CE4(void *arg0);
void func_00039D0C(void *arg0);
void func_00039D20(void *arg0);
void func_0003A1B4(void);
void func_0003A1BC(s32 **arg0);
void func_0003A1CC(s32 **arg0);
void func_0003BE20(s32 **arg0);
void func_0003BE48(s32 **arg0);
void func_0003BE70(s32 **arg0);
s32 func_0003C0E0(void);
s32 func_0003C8FC(u8 *arg0);
s32 func_0003C994(void);
void func_0003C9C8(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0003CB68(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0003D09C(void *arg0, s32 arg1, s32 arg2);
s32 func_0003D1F0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0003D2CC(void *arg0, s32 arg1, s32 arg2);
void func_0003D2E8(void *arg0, s32 arg1, s32 arg2);
s32 func_0003D420(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0003D5A4(struct Unk_func_0003D5A4_0 *arg0, s32 *arg1, s32 arg2);
void func_0003DB7C(void *arg0);
M2C_UNK func_0003DE84(s32);
M2C_UNK func_0003DEDC(s32);
M2C_UNK func_0003E584(M2C_UNK, M2C_UNK);
void func_0003E5F0(void);
void func_0003E610(void);
void func_0003E7F0(s32 arg0, s32 arg1, s32 arg2);
void func_0003E80C(void);
void func_0003E828(void);
void func_0003E844(void);
void func_0003E860(void);
void func_0003E87C(void);
void func_0003E898(M2C_UNK **arg0);
void func_0003E8A8(M2C_UNK **arg0);
void func_0003EAB0(M2C_UNK **arg0);
void func_0003EAC0(M2C_UNK **arg0);
void func_0003EAD0(M2C_UNK **arg0);
void func_0003EAF8(void);
s32 func_0003EB28(s32);
s32 func_0003F488(void);
s32 func_0003F624(s32 arg0);
M2C_UNK func_0003F784(M2C_UNK, M2C_UNK);
void func_0003F904(void);
void func_0003F924(void);
s32 func_0003FC2C(s32 arg0, s32 arg1);
void func_0003FEF8(struct Unk_func_0003FEF8_0 *arg0);
s32 func_0003FFAC(s32 arg0, s32 arg1);
s32 func_0003FFD8(void);
s32 func_0003FFE4(void);
s32 func_000404A8(s32, s32);
s32 func_0004054C(void *arg0);
s32 func_00040774(struct Unk_func_00040774_0 *arg0);
void func_000408D0(struct Unk_func_000408D0_0 *arg0);
s32 func_00040A80(s32, s32);
void func_00040B40(struct Unk_func_00040B40_0 *arg0);
s32 func_00040B4C(void);
void func_00040B54(struct Unk_func_00040B54_0 *arg0);
void func_00040B94(struct Unk_func_00040B94_0 *arg0, s32 arg1, s32 arg2);
void func_00040BBC(struct Unk_func_00040BBC_0 *arg0, s32 arg1, s32 arg2);
void func_00040BE4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_00040D38(s32 arg0);
void func_00040FEC(void);
u8 func_000411D4(void *arg0);
s32 func_000411E8(void *arg0);
s32 func_000411FC_v100(void *arg0);
s32 func_00041210(void *arg0);
s32 func_00041224(s32 arg0);
u8 func_00041264(void *arg0);
s32 func_00041278(void *arg0);
s32 func_0004128C(void *arg0);
s32 func_000412A0(void *arg0);
void func_0004177C(struct Unk_func_0004177C_0 *arg0, struct Unk_func_0004177C_1 *arg1);
s32 func_000417AC(s32);
s32 func_00041838(s32, s32);
s32 func_00041A98(s32);
M2C_UNK func_00041BE0();
s32 func_00041E6C(s32 arg0);
s32 func_00041E8C(s32);
s32 func_00042048(void *arg0);
M2C_UNK func_00042054(M2C_UNK, M2C_UNK);
void func_00042100(void);
void func_00042120(void);
s32 *func_00042140(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_000421A8(s32 arg0, s32 arg1);
s32 func_000421EC(M2C_UNK, M2C_UNK);
M2C_UNK func_000423B4(s32, void *);
void func_00042A08(void);
M2C_UNK func_00042A24();
void func_00042A7C(void);
M2C_UNK func_00042A98();
s32 func_00042B80(s32, s32);
s32 func_00042B94(void);
s32 func_00042BA0(void);
void func_00042E4C(struct Unk_vt_func_00042E4C_arg0 **arg0);
M2C_UNK func_00043008();
void func_000442D8(void *arg0);
void func_000442F8(void *arg0);
M2C_UNK func_000443B8(M2C_UNK, M2C_UNK);
void func_00044450(void);
void func_00044470(void);
void func_00044510(struct Unk_func_00044510_0 *arg0);
void ***func_00044A7C(void ***arg0, struct Unk_func_00044A7C_1 *arg1, void **arg2);
void func_000452E0(struct Unk_func_000452E0_0 *arg0);
M2C_UNK func_0004540C(s32);
void func_00045A1C(void *arg0, s32 arg1);
void func_000463D4(void);
void func_000463DC(void);
void func_00047124(s32 arg0);
void func_00047288(struct Unk_func_00047288_0 *arg0, s32 arg1);
s32 func_000474A8(s32, s32, s32);
void func_00047530(struct Unk_func_00047530_0 *arg0, s32 arg1);
s32 func_00047588(s32, s32, s32, s32, s32, s32, s32);
void func_00047BB4(s32 arg0);
void func_00047BD8(struct Unk_func_00047BD8_0 *arg0, M2C_UNK *arg1);
M2C_UNK func_00047F00(M2C_UNK, M2C_UNK);
void func_00047F80(void);
void func_00047FA0(void);
void func_00047FC0(struct Unk_func_00047FC0_0 *arg0);
void func_00048010(struct Unk_func_00048010_0 *arg0);
void ***func_00048060(void ***arg0, struct Unk_func_00048060_1 *arg1, void **arg2);
M2C_UNK func_000481B0(s32);
void func_000484E0(s32 arg0);
void func_00048500(void);
void func_0004874C(void);
void func_000488EC(void);
s32 func_00048B34(s32, s32);
void func_00048DE8(struct Unk_func_00048DE8_0 *arg0);
void func_00048DF8(struct Unk_func_00048DF8_0 *arg0, s32 arg1);
s32 func_0004922C(s32, s32);
s32 func_00049968(s32);
M2C_UNK func_00049D40(s32);
M2C_UNK func_00049DA4(s32);
M2C_UNK func_00049E08(s32);
M2C_UNK func_00049EAC(s32);
M2C_UNK func_0004A0A4(s32);
M2C_UNK func_0004A184(s32);
M2C_UNK func_0004A290(s32);
s32 func_0004A54C(s32);
M2C_UNK func_0004A5A4(s32);
s32 func_0004A65C(s32, s32, s32, s32);
M2C_UNK func_0004A6D8(s32);
s32 func_0004A76C(s32, s32, s32);
M2C_UNK func_0004B43C(s32);
M2C_UNK func_0004B744(s32);
void func_0004B880(struct Unk_func_0004B880_0 *arg0, s32 arg1);
s32 func_0004B8A0(s32, s32, s32);
s32 func_0004B99C(s32, s32);
s32 func_0004B9F0(s32, s32);
s32 func_0004BB04(s32, s32, s32, s32);
s32 func_0004BE34(struct Unk_func_0004BE34_0 *arg0);
M2C_UNK func_0004BE40(s32);
M2C_UNK func_0004BF08(s32);
M2C_UNK func_0004C4D8(s32);
M2C_UNK func_0004C754(s32);
void func_0004C7A0(struct Unk_func_0004C7A0_0 *arg0);
void ***func_0004D058(void ***arg0, struct Unk_func_0004D058_1 *arg1, void **arg2);
void func_0004D3B4(struct Unk_func_0004D3B4_0 *arg0, s32 arg1);
void func_0004D3C4(struct Unk_func_0004D3C4_0 *arg0, s32 arg1);
void func_0004D5E8(void);
M2C_UNK func_0004D604();
s32 func_0004E9AC(s32, s32, s32, s32, s32, s32);
void func_0004F394(void *arg0);
void func_0004F3A8(void *arg0);
void func_0004F3BC(void *arg0);
void func_0004F488(void *arg0, void *arg1);
s32 func_0004F5D4(struct Unk_func_0004F5D4_0 *arg0, u32 arg1, u32 arg2);
void func_0004F9D4(void *arg0, s32 arg1, s8 arg2, s8 arg3);
s32 func_0004F9E4(void *arg0);
s32 *func_0004F9EC(void);
void func_0004FF24(struct Unk_func_0004FF24_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_00050144(struct Unk_func_00050144_0 *arg0, struct Unk_func_00050144_1 *arg1);
s32 func_00050250(s32);
s32 func_00050290(struct Unk_func_0004F5D4_0 *arg0, s32 arg1);
M2C_UNK func_000502B0(M2C_UNK, M2C_UNK);
void func_000503E0(void);
void func_000503E4(void *arg0);
void func_00050400(void);
void func_0005045C(void **arg0);
void func_000504B4(struct Unk_func_000504B4_0 *arg0);
void func_0005059C(struct Unk_func_0005059C_0 *arg0);
void ***func_0005106C(void ***arg0, struct Unk_func_0005106C_1 *arg1, void **arg2);
void func_000510D4(struct Unk_func_000510D4_0 *arg0);
void func_00051128(struct Unk_func_00051128_0 *arg0);
s32 func_00051184(s32);
M2C_UNK func_000515A4();
void func_00051C20(M2C_UNK **arg0);
void func_00051C30(M2C_UNK **arg0);
void func_00051C58(void);
s32 func_00051C8C(void);
s32 func_00052610(void);
s32 func_00054270(s32, s32);
M2C_UNK func_00054964(void *, M2C_UNK, u8);
s32 func_000550F4(s32, s32);
s32 func_000551B8(s32, s32, s32);
s32 func_00055438(s32, s32);
s32 func_00055480(s32, s32);
s32 func_00055A8C(struct Unk_func_00055A8C_0 *arg0);
s32 func_00055AE8(struct Unk_func_00055AE8_0 *arg0, s32 arg1);
void func_00055AF4(struct Unk_func_00055AF4_0 *arg0);
void func_00055B10(struct Unk_func_00055B10_0 *arg0);
void func_00055B44(struct Unk_func_00055B44_0 *arg0, s32 arg1);
void func_00055B6C(s32 arg0);
void func_00055CE4(struct Unk_vt_func_00055CE4_arg0 **arg0);
void func_00055D08(struct Unk_vt_func_00055D08_arg0 **arg0);
void func_00055D2C(struct Unk_vt_func_00055D2C_arg0 **arg0);
void func_00055D74(struct Unk_vt_func_00055D74_arg0 **arg0);
void func_00055D98(struct Unk_vt_func_00055D98_arg0 **arg0);
void func_00055DBC(struct Unk_vt_func_00055DBC_arg0 **arg0);
void func_00055DFC(s32 arg0);
void func_00055F50(void);
s32 func_00055F58(void);
s32 func_00055F60(void);
s32 func_00055F68(void);
s32 func_00055F70(void);
s32 func_00055F78(void);
s32 func_00055F80(void);
s32 func_00055F88(void);
void func_00055F90(void);
s32 func_00055FC4(void);
void func_0005615C(M2C_UNK **arg0);
void func_00056184(M2C_UNK **arg0);
s32 func_000564E8(s32 arg0, s32 arg1);
s32 func_00056514(void);
s32 func_00056520(void);
s32 *func_00056FA8(void);
void func_00056FB4(s32 arg0);
void func_000573C8(struct Unk_func_000573C8_0 *arg0);
s32 func_000578E4(s32 arg0);
s32 func_00057978(s32 arg0, s32 arg1);
s32 func_000579A4(void);
s32 func_00059090(s32 arg0);
void func_0005913C(void);
s32 func_00059A5C(s32);
void func_0005A5B4(M2C_UNK **arg0, M2C_UNK *arg1);
void func_0005A5F4(M2C_UNK **arg0, M2C_UNK *arg1);
void *func_0005A71C(void **arg0);
M2C_UNK func_0005A8BC(M2C_UNK, M2C_UNK);
void func_0005A954(void);
void func_0005A974(struct Unk_func_0005A974_0 *arg0);
void func_0005A9E8(struct Unk_func_0005A9E8_0 *arg0);
s32 func_0005AB94(s32);
void func_0005ACE4(struct Unk_func_0005ACE4_0 *arg0);
void func_0005AD50(struct Unk_func_0005AD50_0 *arg0);
s32 func_0005AD94(s32, s32);
s32 func_0005AE7C(s32, s32);
s32 func_0005AF6C(s32 arg0, s32 arg1);
s32 func_0005AF98(void);
void func_0005BCDC(void *arg0);
s32 func_0005BD9C(void *arg0);
s32 func_0005BDC8(void *arg0);
s32 func_0005BF74(struct Unk_func_0005BF74_0 *arg0);
s32 func_0005C5F4(s32 arg0, s32 arg1);
s32 func_0005C620(void);
s32 func_0005C62C(void);
void func_0005C768(M2C_UNK **arg0);
void func_0005C790(M2C_UNK **arg0);
void func_0005C7C8(struct Unk_func_0005C7C8_0 *arg0);
s32 func_0005C7E4(struct Unk_func_0005C7E4_0 *arg0);
void func_0005C7F4(struct Unk_func_0005C7F4_0 *arg0);
void func_0005C834(struct Unk_func_0005C834_0 *arg0);
void func_0005C894(struct Unk_func_0005C894_0 *arg0);
void func_0005C8C4(struct Unk_func_0005C8C4_0 *arg0, s32 arg1, s32 arg2);
s32 func_0005C8E8(s32 arg0, s32 arg1);
s32 func_0005C914(void);
s32 func_0005C920(void);
s32 func_0005CE3C(s32);
void func_0005CFC8(void *arg0, s32 arg1);
s32 func_0005D268(s32, s32);
void func_0005D2D8(void *arg0, s32 arg1);
void func_0005D2EC(void);
void func_0005D30C(void);
void func_0005D368(void *arg0, s32 arg1, s32 arg2);
s32 func_0005D398(struct Unk_func_0005D398_0 *arg0, struct Unk_func_0005D398_1 *arg1);
s32 func_0005D8B4(s32, s32, s32);
void ***func_0005D9A4(void ***arg0, void *arg1, void **arg2);
M2C_UNK func_0005D9E4();
s32 func_0005DD40(s32, s32, s32, s32);
s32 func_0005E014(s32, s32, s32);
s32 func_0005E2E8(s32, s32, s32, s32);
s32 func_0005E7C0(s32, s32, s32, s32);
s32 func_0005EA94(s32, s32, s32);
s32 func_0005ED68(s32, s32, s32, s32);
s32 func_0005F20C(s32, s32);
void func_000610F4(struct Unk_func_000610F4_0 *arg0);
void func_00061368(struct Unk_func_00061368_0 *arg0);
s32 func_0006152C(s32 arg0, s32 arg1);
s32 func_00061558(void);
s32 func_00061564(void);
void func_0006158C(struct Unk_func_0006158C_0 *arg0, s32 arg1, s32 arg2);
void func_000616AC(M2C_UNK **arg0);
void func_000616D4(M2C_UNK **arg0);
void func_00061A60(void *arg0);
void func_00061A98(M2C_UNK **arg0);
s32 func_00061AC0(s32 arg0, s32 arg1);
s32 func_00061AEC(void);
void func_00061EF4(M2C_UNK **arg0);
void func_00061F1C(M2C_UNK **arg0);
void func_00061F44(M2C_UNK **arg0);
s32 func_00062764(struct Unk_func_00062764_0 *arg0, s32 arg1, s32 arg2);
s32 func_000627A0(s32 arg0, s32 arg1, s32 arg2);
void func_00062968(struct Unk_func_00062968_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000629B4(struct Unk_func_000629B4_0 *arg0, s32 arg1, s32 arg2);
void func_000629FC(struct Unk_func_000629FC_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0006393C(M2C_UNK **arg0);
s32 func_00063994(s32);
s32 func_00063A1C(s32);
void func_00063FE4(void);
s32 func_00064000(s32 arg0, s32 arg1);
s32 func_0006402C(void);
s32 func_00064054(s32 arg0);
void func_00064074(void *arg0);
void func_00064084(void *arg0);
s32 func_00065238(s32, s32);
s32 func_00065898(s32, s32, s32, s32, s32, s32);
void func_0006598C(struct Unk_func_0006598C_0 *arg0);
void func_000659DC(struct Unk_func_000659DC_0 *arg0);
void func_00065A2C(struct Unk_func_00065A2C_0 *arg0);
void func_00065F48(void);
void func_00065F64(void);
s32 func_00065F80(s32 arg0, s32 arg1);
s32 func_00065FAC(void);
void func_0006617C(M2C_UNK **arg0);
void func_000661A4(M2C_UNK **arg0);
s32 func_000661DC(s32 arg0, s32 arg1);
s32 func_00066208(void);
void func_00066414(struct Unk_func_00066414_0 *arg0);
void func_00066450(struct Unk_func_00066450_0 *arg0);
s32 func_000669F4(s32 arg0, s32 arg1);
s32 func_00066A20(void);
void func_00066E74(struct Unk_vt_func_00066E74_arg0 **arg0);
void func_00067028(void);
s32 func_000670A0(struct Unk_func_000670A0_0 *arg0);
void func_000670C8(void);
M2C_UNK func_000671E0(s32);
s32 func_000672AC(s32 arg0, s32 arg1);
void func_000672F4(struct Unk_func_000672F4_0 *arg0);
void func_00067380(void *arg0);
s32 func_00067564(s32 arg0, s32 arg1);
s32 func_00067590(void);
void func_00067728(M2C_UNK **arg0);
void func_00067750(M2C_UNK **arg0);
s32 func_0006793C(void *arg0);
s32 func_00067C4C(s32, s32);
s32 func_00067C78(void);
s32 func_000689C4(struct Unk_func_0005D398_0 *arg0, struct Unk_func_0005D398_1 *arg1);
s32 func_00068E5C(struct Unk_func_00068E5C_0 *arg0, s32 arg1);
s32 func_00068EE0(s32, s32, s32);
M2C_UNK func_00068F38();
M2C_UNK func_00068FD4();
s32 func_00069934(void *arg0, s32 arg1);
s32 func_0006996C(struct Unk_func_0006996C_0 *arg0, s32 arg1);
s32 func_00069C58(s32, s32);
s32 func_00069C78(s32);
M2C_UNK func_00069C98(M2C_UNK, M2C_UNK);
void func_00069CB8(void);
void func_00069CF8(void);
s32 func_00069D18(s32 arg0, s32 arg1);
s32 func_00069D44(void);
void func_0006A0D0(struct Unk_func_0006A0D0_0 *arg0, s32 arg1, s32 arg2);
void func_0006A0F4(struct Unk_func_0006A0F4_0 *arg0);
void func_0006A118(struct Unk_func_0006A118_0 *arg0);
void func_0006A140(struct Unk_func_0006A140_0 *arg0);
void func_0006A168(struct Unk_func_0006A168_0 *arg0);
void func_0006AA5C(M2C_UNK **arg0);
void func_0006AA84(M2C_UNK **arg0);
s32 func_0006AABC(s32 arg0, s32 arg1);
s32 func_0006AAE8(void);
s32 func_0006AED4(void);
void func_0006AF84(void);
void func_0006AF8C(void);
s32 func_0006BD2C(struct Unk_func_0006BD2C_0 *arg0);
s32 func_0006BD64(struct Unk_func_0006BD64_0 *arg0, s32 arg1);
void func_0006BE14(struct Unk_func_0006BE14_0 *arg0);
void func_0006BEA0(struct Unk_func_0006BEA0_0 *arg0);
s32 func_0006BED0(s32 arg0, s32 arg1);
s32 func_0006BEFC(void);
void func_0006FFF4(void);
s32 func_0007003C(void *arg0, s32 *arg1, s32 *arg2);
void func_00070054(void *arg0);
void func_00070260(s32 arg0);
s32 func_0007028C(s32);
s32 func_000705E0(void *arg0);
s32 func_000706E4(s32, s32);
s32 func_00070C30(s32 arg0, s32 arg1);
s32 func_00070C5C(void);
void func_00071BF0(void);
s32 func_00071BF8(struct Unk_func_00071BF8_0 *arg0, s32 arg1);
void ***func_00071E74(void ***arg0, struct Unk_func_00071E74_1 *arg1, void **arg2);
void ***func_00071EDC(void ***arg0, struct Unk_func_00071EDC_1 *arg1, void **arg2);
void func_000724F8(s32 arg0, M2C_UNK arg1);
void func_0007286C(struct Unk_func_0007286C_0 *arg0);
void func_00073494(void *arg0);
M2C_UNK func_00073A14(s32, M2C_UNK);
void func_00074754(void *arg0);
void func_00074830(struct Unk_func_00074830_0 *arg0);
M2C_UNK func_0007499C(s32);
void func_00074A04(struct Unk_func_00074A04_0 *arg0);
void func_00074A20(struct Unk_func_00074A20_0 *arg0);
void func_00074A3C(struct Unk_func_00074A3C_0 *arg0);
void func_00074A58(struct Unk_func_00074A58_0 *arg0);
void func_00074A74(struct Unk_func_00074A74_0 *arg0);
void func_00074A90(struct Unk_func_00074A90_0 *arg0);
void func_00074AAC(struct Unk_func_00074AAC_0 *arg0);
void func_00074AC8(struct Unk_func_00074AC8_0 *arg0);
void func_00074B34(struct Unk_func_00074B34_0 *arg0);
M2C_UNK func_00074B60();
s32 func_00074BEC(s32, s32);
void func_00074E64(void);
s32 func_00074E6C(void);
s32 func_00074E74(void);
M2C_UNK func_00074E7C(s32);
M2C_UNK func_00074E84(s32);
M2C_UNK func_00074E8C(s32);
M2C_UNK func_00074E94(s32);
void func_00074E9C(void);
M2C_UNK func_00074EA4(s32);
M2C_UNK func_00074ED8(s32);
void func_00074EE0(void);
void func_00074EE8(void);
void func_00074EF0(void);
M2C_UNK func_00074EF8(s32);
void func_00074F00(void);
M2C_UNK func_00074F08(s32);
void func_00074F10(void);
M2C_UNK func_00074F18(s32);
void func_00074F24(void);
M2C_UNK func_00074F2C(s32);
void func_00074F34(void);
M2C_UNK func_00074F3C(s32);
M2C_UNK func_00074F44(s32);
M2C_UNK func_00074F4C(s32);
M2C_UNK func_00074F54(s32);
void func_00074F60(s32 *arg0, s32 arg1);
void func_00074F80(s32 *arg0, s32 arg1);
M2C_UNK func_00074FA0();
M2C_UNK func_00074FC8();
s32 func_0007502C(s32, s32);
void func_000750DC(void);
s32 func_000750FC(s32 arg0, s32 arg1);
s32 func_00075128(void);
void func_000752DC(s32 arg0, M2C_UNK arg1);
void func_00075350(s32 arg0, s32 arg1);
s32 func_00075460(struct Unk_func_00075460_0 *arg0, s32 arg1);
void func_00075664(s32 arg0, M2C_UNK arg1);
void func_0007610C(void *arg0);
s32 func_00076214(s32, s32);
void func_0007677C(s32 **arg0);
void func_000767A4(s32 **arg0);
s32 func_000767DC(void *arg0);
void func_000767EC(void *arg0);
void func_0007686C(void *arg0, s32 arg1);
s32 func_00076888(s32 arg0, s32 arg1);
s32 func_000768B4(void);
s32 func_000768C0(void);
void func_000775C0(void *arg0, s32 arg1);
M2C_UNK func_00077BCC(s32);
s32 func_00077D2C(s32, s32, s32, s32);
s32 func_00077FE0(s32, s32, s32);
s32 func_000780C0(struct Unk_func_000780C0_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00078134(struct Unk_func_00078134_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000781A8(struct Unk_func_000781A8_0 *arg0);
s32 func_00078290(s32, s32, s32, s32);
s32 func_000782CC(struct Unk_func_000782CC_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00078300(struct Unk_func_00078300_0 *arg0);
s32 func_00078334(struct Unk_func_00078334_0 *arg0);
s32 func_00078368(struct Unk_func_00078368_0 *arg0);
void func_0007838C(s32 arg0, s32 arg1, s32 arg2);
s32 func_0007839C(struct Unk_func_0007839C_0 *arg0);
void func_00078408(struct Unk_func_00078408_0 *arg0);
M2C_UNK func_00078438(s32);
void func_00078450(struct Unk_func_00078450_0 *arg0);
s32 func_00078498(s32);
s32 func_000784B0(s32);
s32 func_000784C8(s32);
s32 func_000784E0(s32);
s32 func_00078514(s32);
s32 func_00078548(s32);
s32 func_0007857C(s32);
s32 func_000785B0(s32);
void func_000785E4(struct Unk_func_000785E4_0 *arg0);
s32 func_00078644(struct Unk_func_00078644_0 *arg0, s32 arg1, s32 arg2);
s32 func_000786AC(struct Unk_func_000786AC_0 *arg0, s32 arg1);
s32 func_000786E0(struct Unk_func_000786E0_0 *arg0, s32 arg1);
s32 func_00078714(struct Unk_func_00078714_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK func_00078748(s32, s32);
s32 func_00078760(s32);
s32 func_00078798(s32);
void func_000787D0(struct Unk_func_000787D0_0 *arg0);
s32 func_00078800(struct Unk_func_00078800_0 *arg0);
M2C_UNK func_00078850(s32);
M2C_UNK func_00078880(s32);
void func_00078940(void *arg0, s32 arg1);
s32 func_00079AB0(s32, s32, s32);
void func_0007C7D8(void *arg0);
M2C_UNK func_0007CDB4(s32, s32);
s32 func_0007D970(s32 arg0, s32 arg1, s32 arg2);
s32 func_0007E9F8(s32);
s32 func_0007EA14(s32);
M2C_UNK func_0007EE24(s32);
s32 func_000805DC(void *arg0, s32 arg1);
void func_000813F0(struct Unk_func_000813F0_0 *arg0, struct Unk_func_000813F0_1 *arg1);
s32 func_00081478(s32);
M2C_UNK func_000814CC(s32);
void func_00082EBC(void);
M2C_UNK func_00084464(M2C_UNK, M2C_UNK);
void func_000844BC(void);
s32 func_000861E4(void *arg0, s32 arg1);
void func_00086344(void *arg0);
s32 func_00087FF4(s32, s32);
s32 func_00088170(s32 arg0);
s32 func_000881D4(s32);
void func_000883D0(void *arg0, s32 arg1);
void func_000883DC(struct Unk_func_000883DC_0 *arg0, s32 arg1);
s32 func_0008841C(s32, s32);
s32 func_000884E8(struct Unk_func_000884E8_0 *arg0, struct Unk_func_000884E8_1 *arg1);
s32 func_00088534(struct Unk_func_00088534_0 *arg0);
s32 func_00088554(struct Unk_func_00088554_0 *arg0);
void func_000885AC(s32 arg0);
void func_000885C8(s32 arg0);
void func_000885E4(s32 arg0);
void func_00088600(s32 arg0);
void func_0008861C(s32 arg0);
void func_00088638(s32 arg0);
void func_00088654(s32 arg0);
s32 func_000886A4(void *arg0, s32 arg1);
void func_000886CC(s32 arg0, s32 arg1);
s32 func_00088BF0(s32 arg0, s32 arg1);
s32 func_00088C1C(void);
s32 func_00088C28(void);
s32 func_00088D24(void *arg0);
void func_00088D5C(M2C_UNK **arg0);
M2C_UNK *func_00088D74(void);
void func_00088D84(M2C_UNK **arg0);
void func_00088DBC(struct Unk_func_00088DBC_0 *arg0, s32 arg1);
s32 func_00088DC8(s32 arg0, s32 arg1);
s32 func_00088DF4(void);
s32 func_00088E00(void);
void func_00088F34(M2C_UNK **arg0);
void func_00088F5C(M2C_UNK **arg0);
void func_00088F94(struct Unk_func_00088F94_0 *arg0, s32 arg1);
void func_000892C8(s32 arg0);
void func_000892E4(s32 arg0);
void func_00089300(s32 arg0);
void func_0008931C(s32 arg0);
void func_00089338(s32 arg0);
void func_00089354(s32 arg0);
void func_00089370(s32 arg0);
s32 func_000893C0(struct Unk_func_000893C0_0 *arg0, s32 arg1);
void func_000893E8(s32 arg0, M2C_UNK arg1);
s32 func_00089714(void);
void func_00089734(s32 arg0);
void func_00089750(s32 arg0);
void func_0008976C(s32 arg0);
void func_00089788(s32 arg0);
void func_000897A4(s32 arg0);
void func_000897C0(s32 arg0);
void func_000897DC(s32 arg0);
s32 func_0008982C(struct Unk_func_0008982C_0 *arg0, s32 arg1);
void func_00089854(s32 arg0, M2C_UNK arg1);
void func_000898F0(struct Unk_func_000898F0_0 *arg0);
void func_000899A8(struct Unk_func_000899A8_0 *arg0);
void func_000899CC(struct Unk_func_000899CC_0 *arg0);
void func_00089A54(s32 *arg0);
M2C_UNK func_00089B88(M2C_UNK, M2C_UNK);
void func_00089C04(void);
void func_00089C24(void);
void func_00089C44(struct Unk_func_00089C44_0 *arg0);
void func_00089C84(struct Unk_func_00089C84_0 *arg0);
void func_00089CC4(s32 *arg0);
void func_00089CE0(s32 *arg0);
void func_00089CFC(struct Unk_func_00089CFC_0 *arg0);
void func_00089D68(struct Unk_func_00089D68_0 *arg0);
void func_00089DD0(u32 *arg0);
void func_00089E14(s32 *arg0);
void func_00089E34(struct Unk_func_00089E34_0 *arg0);
void func_00089E7C(struct Unk_func_00089E7C_0 *arg0);
void func_00089EC4(s32 *arg0);
void func_00089EE0(s32 *arg0);
void func_00089EFC(struct Unk_func_00089EFC_0 *arg0);
M2C_UNK func_00089FF0(M2C_UNK, M2C_UNK);
void func_0008A06C(void);
void func_0008A08C(void);
void func_0008A21C(struct Unk_func_0008A21C_0 *arg0);
void func_0008A244(struct Unk_func_0008A244_0 *arg0);
void func_0008A2AC(void);
s32 func_0008A314(struct Unk_func_0008A314_0 *arg0);
M2C_UNK *func_0008A364(void);
M2C_UNK func_0008A9D8();
s32 func_0008AFB0(s32 arg0);
void func_0008B27C(s32 arg0);
void func_0008B298(s32 arg0);
void func_0008B2B4(s32 arg0);
void func_0008B2D0(s32 arg0);
void func_0008B2EC(s32 arg0);
void func_0008B308(s32 arg0);
void func_0008B324(s32 arg0);
s32 func_0008B374(void *arg0, s32 arg1);
void func_0008B39C(s32 arg0, s32 arg1);
void func_0008B590(s32 arg0);
void func_0008B5AC(s32 arg0);
void func_0008B5C8(s32 arg0);
void func_0008B5E4(s32 arg0);
void func_0008B600(s32 arg0);
void func_0008B61C(s32 arg0, s32 arg1);
void func_0008B638(s32 arg0, s32 arg1);
s32 func_0008B688(void *arg0, s32 arg1);
void func_0008B6B0(s32 arg0, s32 arg1);
M2C_UNK func_0008B720();
s32 func_0008B798(s32, s32);
void func_0008B99C(void *arg0);
void func_0008B9DC(void *arg0);
void func_0008BA1C(s32 *arg0);
void func_0008BA38(s32 *arg0);
void func_0008BA54(void *arg0);
void func_0008BAC0(void *arg0);
void func_0008BB28(u32 *arg0);
void func_0008BB6C(s32 *arg0);
void func_0008BB8C(void *arg0);
void func_0008BBD4(void *arg0);
void func_0008BC1C(s32 *arg0);
void func_0008BC38(s32 *arg0);
void func_0008BC54(void *arg0);
s32 func_0008BD48(s32, s32);
void func_0008BDC4(void);
void func_0008BDCC(void);
void func_0008BDE4(void);
M2C_UNK *func_0008BEEC(void);
s32 func_0008CD8C(s32 arg0);
M2C_UNK func_0008D76C(M2C_UNK, M2C_UNK);
void func_0008D800(void);
void func_0008D8D0(struct Unk_func_0008D8D0_0 *arg0);
void func_0008D93C(struct Unk_func_0008D93C_0 *arg0);
void func_0008D9A8(M2C_UNK **arg0);
void func_0008DD88(struct Unk_func_0008DD88_0 *arg0);
void func_0008E024(void *arg0, void *arg1);
void func_0008E040(s32 arg0, s32 arg1);
s32 func_0008E7A4(s32);
void func_0008EBB8(s32 arg0);
void func_0008EBD4(s32 arg0);
void func_0008EBF0(s32 arg0);
s32 func_0008ED14(void);
void func_0008EE64(s32 arg0);
s32 func_0008F824(struct Unk_func_0008F824_0 *arg0);
void func_0008FC24(void *arg0, void *arg1);
M2C_UNK func_00090100(M2C_UNK, M2C_UNK);
void func_0009021C(void);
void func_0009023C(void);
void func_0009025C(M2C_UNK **arg0);
void func_00090284(M2C_UNK **arg0);
void func_00090294(M2C_UNK **arg0);
void func_000902A4(M2C_UNK **arg0);
M2C_UNK func_0009090C(M2C_UNK, M2C_UNK);
void func_000909B8(void);
void func_000909D8(void);
void ***func_00090B04(void ***arg0, struct Unk_func_00090B04_1 *arg1, void **arg2);
s32 func_0009166C(struct Unk_func_0009166C_0 *arg0);
void func_00091688(void);
M2C_UNK func_00091690(M2C_UNK, M2C_UNK);
void func_00091710(void);
void func_00091730(void);
void func_00091810(struct Unk_func_00091810_0 *arg0);
void func_0009182C(struct Unk_func_0009182C_0 *arg0);
s32 func_00091848(s32, s32, s32);
s32 func_000918E4(s32, s32, s32);
s32 func_00091CF8(u32 arg0);
s32 func_0009213C(s32 arg0);
M2C_UNK func_00092328(s32);
void func_00092680(void);
void func_0009269C(void);
void func_000926D4(s32 arg0);
void func_000926F0(s32 arg0);
void func_0009270C(s32 arg0);
void func_00092728(s32 arg0, s32 arg1);
void func_0009273C(s32 arg0);
void func_00092748(s32 arg0);
s32 func_00092754(s32);
M2C_UNK func_0009282C(s32);
s32 func_00092874(s32);
s32 func_00092C7C(s32, s32, s32);
void func_00092CA0(s32 arg0, s32 arg1);
s32 func_00092CC4(s32 arg0);
void func_00092DD4(s32 arg0, s32 arg1);
s32 func_00092DF8(s32 arg0);
s32 func_000930BC(void);
s32 func_00093498(s32);
s32 func_000935E4(struct Unk_func_000935E4_0 *arg0);
s32 func_0009362C(void);
s32 func_00093634(void);
s32 func_0009363C(struct Unk_func_0009363C_0 *arg0);
s32 func_0009369C(struct Unk_func_0009369C_0 *arg0);
s32 func_000936C8(struct Unk_func_000936C8_0 *arg0);
s32 func_00093AD4(s32 arg0);
s32 func_00093AE4(s32 arg0);
void func_00093DD4(void);
void func_00093DF0(void);
void func_00093E0C(s32 arg0);
void func_00093E28(s32 arg0);
void func_00093E44(s32 arg0);
void func_00093E60(s32 arg0);
void func_00093E7C(s32 arg0);
void func_00093E98(s32 arg0);
void func_00093EB4(s32 arg0);
void func_00093ED0(s32 arg0);
void func_00093EEC(s32 arg0);
void func_00093F08(s32 arg0, s32 arg1);
M2C_UNK func_00093F58(s32);
M2C_UNK func_000943A8(s32);
void func_00094668(s32 arg0, s32 arg1);
M2C_UNK func_000946B8(s32);
M2C_UNK func_00094B44(s32);
void func_00094E14(s32 arg0, s32 arg1);
M2C_UNK func_00094E64(s32);
M2C_UNK func_00095308(s32);
M2C_UNK func_000955E8(M2C_UNK, s32, M2C_UNK);
void func_0009560C(s32 arg0, M2C_UNK arg1);
s32 func_00095630(s32 arg0);
void func_00095644(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00095670(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0009569C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_000956C8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_000956F4(s32 arg0, s32 arg1);
s32 func_00095718(s32 arg0);
void func_0009572C(s32 arg0, s32 arg1, s32 arg2);
void func_00095758(s32 arg0, s32 arg1, s32 arg2);
void func_00095784(s32 arg0, s32 arg1, s32 arg2);
void func_000957B0(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK func_000957DC(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_00095890(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_00095974(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_00095A28(M2C_UNK, s32, M2C_UNK, M2C_UNK);
s32 func_00095D98(struct Unk_func_00095D98_0 *arg0);
M2C_UNK func_00095DE8(s32);
s32 func_00095E08(void **arg0);
s32 func_00095E5C(void);
s32 func_00095E64(void);
M2C_UNK func_00095F78(s32);
s32 func_00095FC4(void);
s32 func_00095FCC(void);
s32 func_00096160(s32 arg0);
s32 func_00096180(void);
s32 func_00096188(struct Unk_func_00096188_0 *arg0);
s32 func_000961A4(void);
M2C_UNK func_000961AC(s32);
s32 func_000964F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00096554(void);
s32 func_0009655C(struct Unk_func_0009655C_0 *arg0);
s32 func_00096620(struct Unk_func_00096620_0 *arg0, s16 arg1);
s32 func_00096654(void);
s32 func_0009665C(struct Unk_func_0009665C_0 *arg0);
s32 func_000966A4(struct Unk_func_000966A4_0 *arg0);
s32 func_000966EC(struct Unk_func_000966EC_0 *arg0);
s32 func_0009671C(struct Unk_func_0009671C_0 *arg0);
s32 func_00096888(void);
s32 func_00096890(void);
s32 func_00096898(void);
s32 func_000968A0(void);
s32 func_000968A8(void);
s32 func_000968B0(struct Unk_func_000968B0_0 *arg0);
s32 func_000968E0(struct Unk_func_000968E0_0 *arg0);
s32 func_00096910(struct Unk_func_00096910_0 *arg0);
s32 func_00096940(struct Unk_func_00096940_0 *arg0);
s32 func_00096970(struct Unk_func_00096970_0 *arg0);
s32 func_000969A0(struct Unk_func_000969A0_0 *arg0);
s32 func_0009716C(s32, s32, s32, s32);
s32 func_000972A8(s32, s32, s32, s32, s32);
s32 func_00097348(s32 arg0);
s32 func_00097418(s32 arg0, s32 arg1, s32 arg2);
s32 func_000974AC(void *arg0, void *arg1, u32 arg2);
s32 func_0009754C(void *arg0, void *arg1, u32 arg2);
s16 func_000975C4(u8 *arg0);
void func_000975EC(s32 arg0, s32 arg1);
s32 func_00097608(s32, s32, s32);
s32 func_000976D4(s32, s32);
M2C_UNK func_000976F4(M2C_UNK, s32, M2C_UNK);
void func_00097770(s32 arg0, M2C_UNK arg1);
s32 func_000979A4(s32, s32, s32, s32, s32);
void func_00097BE0(s16 arg0, s16 arg1, s32 arg2, s32 arg3);
s32 func_00097C18(s32, s32, s32, s32, s32);
void func_00097D68(s16 arg0, s32 arg1, s16 arg2, s32 arg3);
s32 func_00098334(void);
s32 func_00098A18(s32);
void func_00098B44(void);
M2C_UNK func_00098B94();
s32 func_00098EE4(s32, s32, s32, s32);
s32 func_000991FC();
s32 func_0009924C(void);
void func_0009ACD4(void);
void func_0009AFA8(void);
s32 func_0009B04C(s32, s32);
void func_0009C174(void);
s32 func_0009C6F8(void);
s32 func_0009CE78(s32, s32);
s32 func_0009D5DC(void);
s32 func_0009D6F4(void);
s32 func_0009E02C(s32);
s32 func_0009EA14(s32, s32);
s32 func_0009ED0C(s32);
void func_0009EDA0(s32 arg0);
s32 func_0009F8B8(s32);
s32 func_000A0774(void *arg0);
s32 func_000A07F0(void *arg0);
void func_000A1978(s16 arg0, s16 arg1, s16 arg2);
void func_000A19B4(s16 arg0, s16 arg1, s16 arg2);
void func_000A19F0(s16 arg0, s16 arg1, s16 arg2);
s32 func_000A1A34(s32, s32, s32, s32);
void func_000A316C(s32 arg0);
s32 func_000A3188(s32, s32);
s32 func_000A45F0(s32 arg0);
s32 func_000A4638(u8 *arg0, s32 arg1);
void func_000A4750(void *arg0);
s32 func_000A476C(void *arg0);
void func_000A47CC(void *arg0);
void func_000A4940(void *arg0);
void func_000A4A14(void *arg0);
void func_000A60AC(void);
M2C_UNK func_000A60D0();
s32 func_000A615C(void);
s32 func_000A6194();
M2C_UNK func_000A6390();
M2C_UNK func_000A6480(s32);
void func_000A6810(s16 arg0);
M2C_UNK func_000A6854();
M2C_UNK func_000A6978();
void func_000A8714(void *arg0);
void func_000A879C(s32 *arg0);
s32 func_000A88D0(s32, s32);
void func_000A894C(void);
void func_000A896C(void);
s32 func_000A8BE0(s32);
void func_000A9A24(void);
void func_000A9B48(void *arg0);
void func_000A9B98(void);
void func_000A9C14(void);
void func_000A9C20(void);
s32 func_000AA1A8(void);
void func_000AA1C0(void);
void func_000AA284(void);
s32 func_000AA338(void);
s32 func_000AA6DC(void);
void func_000AA78C(void);
void func_000AA844(void);
void func_000AA89C(void);
M2C_UNK func_000AA8D0();
s32 func_000AA924(void);
void func_000AA924_v100(void *arg0, s32 arg1);
M2C_UNK func_000AA948();
void func_000AAA54(void);
s32 func_000AAA70(void *arg0);
s32 func_000AAAEC();
void func_000AAB08(void);
void func_000AAB34(void);
void func_000AABFC(s16 arg0);
void func_000AACA4(void);
M2C_UNK func_000AACC8();
M2C_UNK func_000AAD70();
M2C_UNK func_000AADB4();
void func_000AAE94(void);
M2C_UNK func_000AAEB0(M2C_UNK);
void func_000AAF54(void);
void func_000AAF70(void);
void func_000AAF8C(s16 arg0);
void func_000AB068(void);
void func_000AB084(void);
void func_000AB0A0(void);
s32 func_000AB0D4(s32, s32);
s32 func_000AB130(void *arg0);
s32 func_000AB14C(s32, s32);
void func_000AB260(void);
void func_000AB280(void);
void func_000AB348(void *arg0);
void func_000AB364(void *arg0);
M2C_UNK func_000AB3DC();
s32 func_000AB40C(s32, s32, s32);
M2C_UNK func_000AB48C();
void func_000AB4D8(s16 arg0);
M2C_UNK func_000AB4E8();
s32 func_000AB680(s32);
void func_000ABA64(s16 arg0);
M2C_UNK func_000ABA88(s16);
s32 func_000ABDAC(s32);
void func_000ABE10(void);
void func_000ABE50(void);
void func_000AC144(void *arg0);
s32 func_000AC158(s32 arg0);
s32 func_000AC168(s32 arg0);
u32 func_000AC178(s32 arg0);
s32 func_000AC184(u32 arg0);
void func_000AC228(s32 arg0);
M2C_UNK func_000ACDC4(M2C_UNK);
void func_000ACED4(void);
void func_000ACEF0(void);
void func_000ACF0C(void);
M2C_UNK func_000AD064(s16);
M2C_UNK func_000AD1C0(M2C_UNK);
void func_000AD548(void);
s32 func_000AE01C(void);
s32 func_000AE410(void *arg0);
s32 func_000AE7C0(void *arg0, s16 arg1);
s32 func_000AE7F4(void);
void func_000AECC0(void *arg0, s32 arg1);
M2C_UNK func_000AEF78();
s32 func_000AF230(void);
void func_000AF498(void);
s32 func_000AF50C(void *arg0, void *arg1, u32 arg2);
s32 func_000AF7DC(s32, s32);
void func_000AFE50(void);
void func_000AFE58(void);
s32 func_000B0720(void);
M2C_UNK func_000B1568(M2C_UNK);
void func_000B2144(void);
s16 func_000B2508(s32 arg0);
s32 func_000B2604(s32 arg0);
s32 func_000B2644(s32);
s32 func_000B2654(s16 arg0);
s32 func_000B29F8(void);
s32 func_000B2B88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000B2BB0(void);
s32 func_000B2BF4(void *arg0);
s32 func_000B2CB8(void *arg0, s16 arg1);
s32 func_000B2DD0(s32, s32, s32);
void func_000B2F24(s32 arg0, s16 arg1, s32 arg2);
s32 func_000B2F40(s32 arg0, s16 arg1, s32 arg2);
void func_000B2FAC(s32 arg0, s16 arg1, s32 arg2);
s32 func_000B3048(s32, s32, s32, s32);
void func_000B3690(void);
void func_000B36AC(void);
void func_000B36C8(void);
s32 func_000B3804(s32, s32, s32, s32);
s16 func_000B3C58(u8 *arg0);
void func_000B3C80(s32 arg0, s32 arg1);
s32 func_000B3C9C(s32, s32, s32);
s32 func_000B3D68(s32, s32);
s32 func_000B4038(s32, s32, s32, s32, s32);
void func_000B4274(s16 arg0, s16 arg1, s32 arg2, s32 arg3);
s32 func_000B42AC(s32, s32, s32, s32, s32);
void func_000B43FC(s16 arg0, s32 arg1, s16 arg2, s32 arg3);
M2C_UNK func_000B4D6C();
M2C_UNK func_000B4E0C();
M2C_UNK func_000B4F1C();
void func_000B51D8(void);
s32 func_000B5228(void);
s32 func_000B5578(s32, s32, s32, s32);
M2C_UNK func_000B5810();
s32 func_000B5890(s32, s32, s32);
s32 func_000B58E0(s32 arg0, s32 arg1, s32 arg2);
void func_000B6274(s32 arg0);
M2C_UNK func_000B62A0();
void func_000B6348(struct Unk_func_000B6348_0 *arg0);
void func_000B6E30(void);
void func_000B6E4C(s32 arg0);
void func_000B7368(void);
void func_000B760C(void);
void func_000B763C(void);
void func_000B7CA8(s32 arg0, s32 arg1, s32 arg2);
s32 func_000B7CC8(s32, s32, s32);
void func_000B8808(void);
s32 func_000B8D8C(void);
s32 func_000B8EB4(void);
M2C_UNK func_000B8EC4(s32);
M2C_UNK func_000B8FCC();
void func_000B924C(struct Unk_func_000B924C_0 *arg0);
s32 func_000B92A8(s32, s32, s32, s32, s32, s32, s32);
s32 func_000B950C(s32, s32);
s32 func_000B9C70(void);
s32 func_000B9D88(void);
s32 func_000B9F98(struct Unk_func_000B9F98_0 *arg0);
s32 func_000B9FB0(s32, s32);
M2C_UNK func_000BAE78(s32);
u16 func_000BAED0(struct Unk_func_000BAED0_0 *arg0);
s32 func_000BB078(s32 *arg0, s32 arg1, s32 *arg2);
s32 func_000BB158(s32 arg0, s32 arg1);
s32 func_000BB168(s32 *arg0, s32 arg1);
void func_000BB178(s32 arg0, s32 arg1, s32 arg2);
s32 func_000BB198(struct Unk_func_000BB198_0 *arg0);
s32 func_000BB1FC(s32, s32, s32, s32);
s32 func_000BB2DC(s32, s32, s32, s32);
void func_000BB318(s32 arg0, s32 arg1);
void func_000BB33C(s32 arg0, s32 arg1, s32 arg2);
s32 func_000BB3C0(s32 arg0, s32 arg1, s32 arg2);
void func_000BB434(s32 arg0);
s32 func_000BB88C(s32, s32, s32);
void func_000BB97C(struct Unk_func_000BB97C_0 *arg0, s32 arg1);
void func_000BB99C(struct Unk_func_000BB99C_0 *arg0, s32 arg1);
s32 func_000BBD08(s8 *arg0);
s32 func_000BBD64(s32, s32, s32);
u8 *func_000BBDD8(u8 *arg0, u8 *arg1);
u32 func_000BBE64(struct Unk_func_000BBE64_0 *arg0);
s32 func_000BBEE8(s32 arg0, s32 arg1, s32 arg2);
s32 func_000BBF90(s32, s32, s32);
s32 func_000BC04C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000BC82C(void);
s32 func_000BCB14(void);
void func_000BCB20(s32 arg0, s32 arg1);
s32 func_000BCBC0(void);
void func_000BCEB4(s32 arg0, s32 arg1);
s32 func_000BD378(s32);
s32 func_000BD488(s32, s32, s32);
void func_000BD654(s8 *arg0);
s32 func_000BD7E4(s32 arg0);
void func_000BE00C(s16 arg0, s16 arg1, s16 arg2);
void func_000BE048(s16 arg0, s16 arg1, s16 arg2);
void func_000BE084(s16 arg0, s16 arg1, s16 arg2);
void func_000BE094(void *arg0, s32 arg1);
s32 func_000BE0C8(s32, s32, s32, s32);
s32 func_000BE184(s32);
s32 func_000BEA5C(void);
void func_000BF800(s32 arg0);
s32 func_000BF81C(s32, s32);
void func_000BFC78(struct Unk_func_000BFC78_0 *arg0, s32 arg1);
void func_000BFDB4(void);
M2C_UNK func_000C001C(s32);
s32 func_000C002C(void);
void func_000C043C(struct Unk_func_000C043C_0 *arg0);
s32 func_000C056C(s32, s32, s32, s32, s32);
s32 func_000C0C84(s32 arg0);
s32 func_000C0CCC(u8 *arg0, s32 arg1);
s32 func_000C2764(void);
s32 func_000C27F0(void);
s32 func_000C2828(void);
s32 func_000C29D8(s32 *arg0);
void func_000C2A0C(s32 arg0);
s32 func_000C2A1C(void);
s32 func_000C2A24(void);
s32 func_000C2B14(s32);
void func_000C2EA4(s16 arg0);
s32 func_000C2EE8(void);
s32 func_000C300C(void);
s32 func_000C3758(void);
void func_000C409C(void);
s32 func_000C429C(s32 *arg0);
void func_000C42D0(s32 arg0);
s32 func_000C42E0(void);
s32 func_000C498C(void);
s32 func_000C4EA8(s32, s32, s32, s32, s32, s32);
s32 func_000C5108(s32, s32, s32, s32, s32, s32, s32);
void func_000C60B8(void);
void func_000C622C(void);
M2C_UNK func_000C6288(M2C_UNK, s32);
s32 func_000C62A8(void);
s32 func_000C67B8(s32);
s32 func_000C683C(void);
void func_000C6854(void);
s32 func_000C69CC(void);
s32 func_000C69E4(void);
s32 func_000C6D70(void);
void func_000C6E3C(void);
void func_000C6ED8(void);
void func_000C6F30(void);
s32 func_000C6F64(void);
s32 func_000C6FDC(void);
void func_000C7290(s16 arg0);
s32 func_000C735C(void);
s32 func_000C7404(void);
s32 func_000C7448(void);
s32 func_000C7544(s32);
void func_000C76FC(void);
void func_000C7718(void);
s32 func_000C7768(s32, s32);
s32 func_000C7A70(void);
s32 func_000C7B20(void);
void func_000C7B6C(s16 arg0);
void func_000C80F8(s16 arg0);
s32 func_000C811C(s32);
s32 func_000C8440(s32);
void func_000C84A4(void);
s32 func_000C9458(s32);
void func_000C95A0(void);
s32 func_000C9854(s32);
void func_000CAD44(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_000CADC0(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4);
void func_000CAE2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
M2C_UNK func_000CAEB8();
s32 func_000CAF7C(s32, s32, s32);
void func_000CC4E4(void);
void func_000CC4EC(void);
s32 func_000CCDB4(void);
s32 func_000CDBFC(s32);
void func_000CE2F4(void);
void func_000CE7D8(void);
void func_000CE8CC(void);
void func_000CEA9C(void);
s16 func_000CEB9C(s32 arg0);
s32 func_000CECD8(s32 arg0);
M2C_UNK func_000CED84();
void func_000CEE68(void);
void func_000CF244(void);
s32 func_000CF5D4(s32 arg0, s16 arg1, s32 arg2);
s32 func_000CF6DC(s32, s32, s32, s32);
s32 func_000D134C(s32);
s32 func_000D1904(s32);
s32 func_000D1EA4(void);
s32 func_000D2934(s32);
void func_000D2FC8(void);
s32 func_000D305C(void);
s32 func_000D33AC(void);
s32 func_000D39FC(void);
s32 func_000D3A5C(void);
void func_000D41D4(void);
void func_000D4258(void);
s32 func_000D42F4(void);
void func_000D433C(s32 arg0, s32 arg1, s32 arg2);
s32 func_000D435C(s32, s32, s32);
s32 func_000D5558(s32);
s32 func_000D5660(void *arg0);
s32 func_000D5AD4(s32, s32, s32);
s32 func_000D60CC(void);
s32 func_000D60D4(void);
s32 func_000D60DC(void);
s32 func_000D60E4(void);
s32 func_000D60EC(void);
s32 func_000D60F4(void);
s32 func_000D60FC(void);
s32 func_000D6104(void);
s32 func_000D610C(void);
s32 func_000D6114(void);
s32 func_000D611C(void);
s32 func_000D6124(void);
void func_000D64DC(void);
s32 func_000D662C(void *arg0);
s32 func_000D750C(s32);
u16 func_000D7564(void *arg0);
s32 func_000D77EC(s32 arg0, s32 arg1);
s32 func_000D77FC(s32 *arg0, s32 arg1);
s32 func_000D782C(void *arg0);
s32 func_000D7890(s32, s32, s32, s32);
s32 func_000D7A54(s32 arg0, s32 arg1, s32 arg2);
s32 func_000D7F20(s32, s32, s32);
void func_000D8010(void *arg0, s32 arg1);
void func_000D8030(void *arg0, s32 arg1);
s32 func_000D839C(s8 *arg0);
s32 func_000D83F8(s32, s32, s32);
u8 *func_000D846C(u8 *arg0, u8 *arg1);
u32 func_000D84F8(void *arg0);
s32 func_000D857C(s32 arg0, s32 arg1, s32 arg2);
s32 func_000D8624(s32, s32, s32);
s32 func_000D86E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000D8CB4(s32);
s32 func_000D9E88(void);
void func_000D9E94(s32 arg0, s32 arg1);
void func_000DA0C4(void);
void func_000DA138(void);
void func_000DA228(s32 arg0, s32 arg1);
s32 func_000DB0F0(void);
void func_000DBA10(void *arg0);
s32 func_000DBB04(s32 arg0);
s32 func_000DC8D8(void);
s32 func_000DCE54(void);
s32 func_000DFA40(void);
s32 func_000E3680(s32, s32);
s32 func_000E5F94(s32, s32, s32);
s32 *func_000EF43C(void);
void func_000F006C(s32 arg0, s32 arg1);
s32 func_000F093C(void *arg0);
s32 func_000F0970(void *arg0);
void func_000F38C4(u32 *arg0);
void func_000F38FC(s32 *arg0);
void func_000F3928(s32 *arg0);
s32 func_000F39EC(s32, s32);
void func_000F3A68(void);
void func_000F3A88(void);
s32 func_000F3B54(s32, s32);
void func_000F4130(void);
s32 func_000F4FCC(s32, s32, s32, s32, s32);
s32 func_000F5188(s32, s32, s32, s32, s32);
void func_000F62D4(s32 arg0, s32 arg1);
void func_000F634C(u32 arg0);
s32 func_000F6390(s32);
void func_000F63B0(s32 arg0);
void func_000F64C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000F65A0(s32 arg0);
void func_000F66A8(s32 arg0);
void func_000F6908(s32 arg0, s32 arg1);
void func_000F697C(s32 arg0);
void func_000F69A8(s32 arg0, s32 arg1);
void func_000F6AF8(void);
void func_000F6C94(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000F6CCC(s32 arg0, u32 arg1);
void func_000F6DAC(s32 arg0, s32 arg1, s32 arg2);
void func_000F6E18(s32 arg0, s32 arg1, s32 arg2);
void func_000F6E50(s32 arg0);
void func_000F6E70(s32 arg0);
void func_000F6E90(u32 arg0);
void func_000F6FAC(s32 arg0);
void func_000F6FD0(s32 arg0, s32 arg1, s32 arg2);
void func_000F7000(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_000F72C4(s32 arg0, s32 arg1);
s32 func_000F7A30(void);
s32 func_000F865C(s32);
void fwrite(void);
M2C_UNK *get_crc_table(void);
M2C_UNK inflateReset(s32);
void malloc(void);
void memcmp(void);
void memcpy(void);
void memset(void);
s32 module_start(void);
s32 module_stop(void);
void png_do_swap(struct Unk_png_do_swap_0 *arg0, void *arg1);
void png_do_unpack(struct Unk_png_do_unpack_0 *arg0, s32 arg1);
s32 png_get_asm_flagmask(s32 arg0);
s32 png_get_asm_flags(struct Unk_png_get_asm_flags_0 *arg0);
s32 png_get_compression_buffer_size(struct Unk_png_get_compression_buffer_size_0 *arg0);
u8 png_get_mmx_bitdepth_threshold(struct Unk_png_get_mmx_bitdepth_threshold_0 *arg0);
s32 png_get_mmx_rowbytes_threshold(struct Unk_png_get_mmx_rowbytes_threshold_0 *arg0);
u8 png_get_rgb_to_gray_status(struct Unk_png_get_rgb_to_gray_status_0 *arg0);
s32 png_get_user_chunk_ptr(struct Unk_png_get_user_chunk_ptr_0 *arg0);
s32 png_get_user_height_max(struct Unk_png_get_user_height_max_0 *arg0);
s32 png_get_user_transform_ptr(struct Unk_png_get_user_transform_ptr_0 *arg0);
s32 png_get_user_width_max(struct Unk_png_get_user_width_max_0 *arg0);
void png_set_invert_alpha(struct Unk_png_set_invert_alpha_0 *arg0);
void png_set_invert_mono(struct Unk_png_set_invert_mono_0 *arg0);
void png_set_swap_alpha(struct Unk_png_set_swap_alpha_0 *arg0);
void png_set_user_transform_info(struct Unk_png_set_user_transform_info_0 *arg0, s32 arg1, s8 arg2, s8 arg3);
void rand(void);
u32 sceCccIsValidUCS4(s32 arg0);
M2C_UNK sceCccSetTable();
s32 sceCtrlReadBufferPositive(void *, s32);
s32 sceCtrlSetSamplingMode(u32);
s32 sceDisplayWaitVblankStart(void);
M2C_UNK sceFontClose(s32);
s32 sceFontDoneLib(s32);
s32 sceFontNewLib(void *, void *);
M2C_UNK sceGeContinue();
void * sceGeEdramGetAddr(void);
s32 sceGeListEnQueue(void *, void *, s32, void *);
s32 sceGeListSync(s32, s32);
s32 sceGeListUpdateStallAddr(s32, void *);
s32 sceGeUnsetCallback(s32);
void sceGuCallMode(s32 arg0);
void sceGuColor(s32 arg0);
void sceGuDisable(s32);
void sceGuDispBuffer(s32, s32, void *, s32);
void sceGuDrawArray(s32, s32, s32, void *, void *);
void sceGuDrawBezier(s32, s32, s32, void *, void *);
M2C_UNK sceGuFinish();
s32 sceGuInit(void);
s32 sceGuSetCallback(s32 arg0, s32 arg1);
s32 sceGuStart(s32, void *, s32);
M2C_UNK sceGuSync(M2C_UNK, M2C_UNK);
s32 sceGuTerm(void);
void sceGumDrawArray(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4);
M2C_UNK sceGumLoadIdentity();
M2C_UNK sceGumMatrixMode(M2C_UNK);
void sceGumUpdateMatrix(void);
M2C_UNK sceIoClose(s32);
u32 sceIoOpen(void *, s32, s32);
s32 sceIoRead(u32, void *, u32);
s32 sceIoWrite(u32, void *, u32);
s32 sceKernelCancelEventFlag(s32, u32, void *);
s32 sceKernelClearEventFlag(u32, u32);
u32 sceKernelCreateEventFlag(void *, u32, u32, void *);
void sceKernelDcacheWritebackAll(void);
M2C_UNK sceKernelDelayThread(s32);
M2C_UNK sceKernelDeleteEventFlag(s32);
M2C_UNK sceKernelDeleteSema(s32);
s32 sceKernelDeleteThread(u32);
M2C_UNK sceKernelExitThread(M2C_UNK);
u32 sceKernelGetThreadId(void);
s32 sceKernelPollEventFlag(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK sceKernelResumeDispatchThread(s32);
M2C_UNK sceKernelSetEventFlag(s32, M2C_UNK);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelSuspendDispatchThread();
s32 sceKernelWaitEventFlag(u32, u32, s32, void *, void *);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceKernelWaitThreadEnd(s32, M2C_UNK);
M2C_UNK scePafHeaparea_ACCE25B2(void *, s32 *);
M2C_UNK scePafHeaparea_F50AAE41(void *, s32 *);
void scePaf_01C2FC36(void);
s32 scePaf_01CF521E(struct Unk_scePaf_01CF521E_0 *arg0);
s32 scePaf_020A7084(s32 arg0, s32 arg1, s32 arg2);
void scePaf_02A6AA18(void);
void scePaf_02F6DB7E(M2C_UNK **arg0);
void scePaf_04EF78CD(void);
void scePaf_05026B26(void);
void scePaf_05073826(struct Unk_scePaf_05073826_0 *arg0);
s16 scePaf_0598FFD6(struct Unk_scePaf_0598FFD6_0 *arg0, s32 arg1);
void scePaf_06BB62B7(void);
void scePaf_0880B827(void);
s32 scePaf_08DD2D50(struct Unk_scePaf_08DD2D50_0 *arg0, s32 arg1);
void scePaf_0A189A1A(void);
s32 scePaf_0B0959FC(struct Unk_scePaf_0B0959FC_0 *arg0);
s32 scePaf_0B4C0DB6(struct Unk_scePaf_0B4C0DB6_0 *arg0);
M2C_UNK scePaf_0C6EEA21();
s32 scePaf_0CFDBE2F(void);
void scePaf_0F3527DD(void);
void scePaf_0FFA3ECE(struct Unk_scePaf_0FFA3ECE_0 *arg0);
void scePaf_10B901E7(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void scePaf_10C1DB70(void);
s32 scePaf_1232B7A3(struct Unk_scePaf_1232B7A3_0 *arg0, s32 arg1, s32 arg2);
s32 scePaf_132148FD(void);
void scePaf_139D9047(s32 arg0);
void scePaf_1475F1EB(void);
void scePaf_149CDEB9(void);
void scePaf_14BEF129(void);
M2C_UNK scePaf_14CE7F6F(s32);
s32 scePaf_14FF46A6(s32 arg0, s32 arg1, s32 *arg2);
void scePaf_16033F84(void);
void scePaf_17308FC9(void);
void scePaf_17BC4F41(s32 arg0);
s32 scePaf_1811AD32(s32, s32, s32, s32);
void scePaf_1A1F232F(struct Unk_scePaf_1A1F232F_0 *arg0, s32 arg1);
void scePaf_1A45C860(s32 arg0, s32 arg1);
void scePaf_1A468B86(void);
M2C_UNK scePaf_1AD33D73();
void scePaf_1B043852(struct Unk_scePaf_1B043852_0 *arg0);
void scePaf_1BD0E905(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 scePaf_1C286704(s32);
s8 scePaf_1D5D9A68(s8 arg0);
s32 scePaf_1F0E9712(void);
M2C_UNK scePaf_211A764A(void *, void *, void *);
void scePaf_21A0C6E0(void);
s32 scePaf_222526B6();
void scePaf_224C33F0(struct Unk_scePaf_224C33F0_0 *arg0);
void scePaf_22B0D7D8(void);
void scePaf_2313DDCA(struct Unk_scePaf_2313DDCA_0 *arg0);
s32 scePaf_256218C2(void);
void scePaf_26DE971C(void);
void scePaf_2750CF68(void);
void scePaf_28F8DE83(void);
M2C_UNK scePaf_296897BC();
void scePaf_296ED0EF(void);
void scePaf_2A5DDF04(struct Unk_scePaf_2A5DDF04_0 *arg0, s32 arg1);
void scePaf_2A7CDE78(s32 arg0);
void scePaf_2AA80564(void);
s32 scePaf_2AD8DE45(s32 arg0);
void scePaf_2AFA99B1(void);
M2C_UNK scePaf_2CB6FBBE();
void scePaf_2CFAE498(s32 arg0);
void scePaf_2D08CA09(void);
s32 scePaf_2E6CA751(s32);
void scePaf_2EABF548(void);
void scePaf_30F5E7DF(void);
s32 scePaf_3291BDDD(void);
s32 scePaf_32A70C80(void);
void scePaf_3342C5F5(void);
void scePaf_3481F595(struct Unk_scePaf_3481F595_0 *arg0, s32 arg1);
void scePaf_34C7D69A(void);
void scePaf_34C973B6(void);
M2C_UNK scePaf_3586BE05(M2C_UNK, s32);
s32 scePaf_360956CC(struct Unk_func_0005D398_0 *arg0, struct Unk_func_0005D398_1 *arg1);
void scePaf_37A98AE9(s32 arg0);
s32 scePaf_3829AC24(void);
void scePaf_38876947(void);
void scePaf_39565433(void);
void scePaf_39B36025(void);
void scePaf_3A69534B(void);
void scePaf_3A844B7B(void);
void scePaf_3BAE494B(void);
s32 scePaf_3C68DCB7(void *arg0);
s32 scePaf_3E203AEB(s32, s32, s32);
s32 scePaf_3F52824F(s32, s32, s32);
M2C_UNK scePaf_3FBD9639();
s32 scePaf_409E25A3(struct Unk_scePaf_409E25A3_0 *arg0);
s32 scePaf_40C95283(void);
void scePaf_43374E9E(void);
M2C_UNK scePaf_4370175A();
M2C_UNK scePaf_442F1731();
M2C_UNK scePaf_44AAF96C();
void scePaf_44EB8C62(struct Unk_scePaf_44EB8C62_0 *arg0);
M2C_UNK scePaf_462E5873(s32);
M2C_UNK scePaf_47E35A50();
void scePaf_48B5C1C0(void);
void scePaf_49CE42F7(struct Unk_scePaf_49CE42F7_0 *arg0);
void scePaf_4ACED608(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s8 scePaf_4B1A374C(s8 arg0);
void scePaf_4C5F6657(void);
void scePaf_4C8C2E25(void);
void scePaf_4D4805AF(void);
void scePaf_4D5E7984(void);
s32 scePaf_4D810FDC(struct Unk_scePaf_4D810FDC_0 *arg0);
M2C_UNK scePaf_4E60E34C(s32, M2C_UNK, M2C_UNK);
M2C_UNK scePaf_4E67BB08(void *);
s32 scePaf_4EA868E6(struct Unk_scePaf_4EA868E6_0 *arg0);
void scePaf_4EC4EEC6(void);
s32 scePaf_4FC2470C(struct Unk_scePaf_4FC2470C_0 *arg0, s32 arg1);
s32 scePaf_503FA456(void);
void scePaf_50B0C0A1(s32 arg0, s32 arg1);
void scePaf_50F72192(void);
void scePaf_5148EFE2(void);
void scePaf_52CF8D80(void);
void scePaf_5335AE79(void);
s32 scePaf_537D04C6(s32 arg0);
void scePaf_539F2583(struct Unk_scePaf_539F2583_0 *arg0);
void scePaf_541F36E9(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK scePaf_545FE2DA();
void scePaf_5470B915(struct Unk_scePaf_5470B915_0 *arg0, s32 arg1);
void scePaf_548AA4E7(void);
void scePaf_55C7628A(void);
s32 scePaf_55CC4749(struct Unk_scePaf_55CC4749_0 *arg0);
void scePaf_566BC690(void);
void scePaf_56F4D69F(void);
void scePaf_5775283A(struct Unk_scePaf_5775283A_0 *arg0);
s32 scePaf_5822F12A(void);
s32 scePaf_585B93BC(s32 arg0, s32 arg1);
void scePaf_58846DF3(s32 arg0);
void scePaf_58BFC2AC(struct Unk_scePaf_58BFC2AC_0 *arg0, struct Unk_scePaf_58BFC2AC_1 *arg1);
s32 scePaf_5A818E41(void);
void scePaf_5A8D4BDB(struct Unk_scePaf_5A8D4BDB_0 *arg0);
s32 scePaf_5A99AE67(s32 arg0);
s32 scePaf_5CA7F421(s32 arg0, s32 arg1);
s32 scePaf_5DFB5858(void);
s32 scePaf_5EBC648F(s32, s32);
void scePaf_5EFC5387(s32 arg0);
M2C_UNK scePaf_5FAC9869();
s32 scePaf_602EB0CE(s32, s32, s32);
void scePaf_607713A6(s32 arg0);
s32 scePaf_6141934B(struct Unk_scePaf_6141934B_0 *arg0, s32 arg1);
void scePaf_62081F34(void);
void scePaf_6528115D(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 scePaf_65C19AC0(void);
void scePaf_6676FAA6(void);
void scePaf_66907719(void);
void scePaf_66E3AAA9(void);
M2C_UNK scePaf_672036FE();
s32 scePaf_677F1705(s32 arg0, s32 arg1);
void scePaf_67C7567E(void);
s32 scePaf_680513D9(struct Unk_scePaf_680513D9_0 *arg0);
M2C_UNK scePaf_6829D7AF();
void scePaf_68569AAC(void);
void scePaf_6A772BF7(void);
void scePaf_6B1E90C7(void);
void scePaf_6B678D44(void);
M2C_UNK scePaf_6BA9C299(M2C_UNK, s32);
void scePaf_6BAC756B(void);
void scePaf_6C234A6A(s32 arg0);
void scePaf_6C6979F0(struct Unk_scePaf_6C6979F0_0 *arg0, s32 arg1);
void scePaf_6CF44237(void);
s32 scePaf_6D491648(s32, s32, s32);
void scePaf_6DD28F44(void);
void scePaf_6DFFCAAE(void);
void scePaf_6E1B5B50(struct Unk_scePaf_6E1B5B50_0 *arg0);
void scePaf_6E3E2085(void);
void scePaf_7116224C(struct Unk_scePaf_7116224C_0 *arg0, s32 arg1);
s32 scePaf_715E8DAB(s32);
M2C_UNK scePaf_71EDAD83();
M2C_UNK scePaf_7333E75A(s32);
void scePaf_73712598(void);
void scePaf_7435C5D5(void);
s32 scePaf_75062BCF(struct Unk_scePaf_75062BCF_0 *arg0);
void scePaf_752F182C(void);
void scePaf_75A553A2(void);
void scePaf_75DBA857(void);
void scePaf_76491EEA(void);
void scePaf_7771BC86(void);
void scePaf_7796B70B(void);
void scePaf_77EB25F5(s32 arg0, M2C_UNK arg1);
s32 scePaf_78219D10(s32 arg0);
s32 scePaf_7894B61F(s32, s32);
void scePaf_79293604(void);
M2C_UNK scePaf_7952AE83(s32);
void scePaf_79E57CAF(void);
s32 scePaf_79F4AE65(struct Unk_scePaf_79F4AE65_0 *arg0);
void scePaf_7B099943(void);
void scePaf_7BBD70F0(void);
M2C_UNK scePaf_7BED034E();
void scePaf_7C2C2742(void);
s32 scePaf_7C2DB482(void);
s32 scePaf_7C31F453(void);
void scePaf_7D83FB20(void);
void scePaf_7D9A4824(void);
void scePaf_7DDE0658(void);
s32 scePaf_7E8C08D8(s32, s32);
M2C_UNK scePaf_7EC15225(void *, void *);
void scePaf_81667058(void);
void scePaf_81817B66(void);
void scePaf_81FD71A9(void);
s32 scePaf_829C3411(s32 arg0, s32 arg1, s32 arg2);
void scePaf_836A675D(void);
M2C_UNK scePaf_83944053(s32);
void scePaf_8424D860(void);
s32 scePaf_84485F54(s32, s32, s32);
void scePaf_84913A3A(struct Unk_scePaf_84913A3A_0 *arg0);
void scePaf_849ED670(void);
void scePaf_86A5AE7D(struct Unk_scePaf_86A5AE7D_0 *arg0);
void scePaf_86B41BA3(struct Unk_scePaf_86B41BA3_0 *arg0);
void scePaf_86C87E62(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 scePaf_872F948B(void);
s32 scePaf_87516C3B(s32, s32, s32);
void scePaf_877AD2FA(void);
s32 scePaf_87E5F9C7(struct Unk_scePaf_87E5F9C7_0 *arg0, s32 arg1, s32 arg2);
void scePaf_88D73AED(s32 arg0, s32 arg1);
void scePaf_89582FD0(struct Unk_scePaf_89582FD0_0 *arg0);
void scePaf_8A51BA1E(struct Unk_scePaf_8A51BA1E_0 *arg0);
s32 scePaf_8A861692(s32);
s32 scePaf_8A8FE0A1(s32 arg0);
void scePaf_8B439A23(void);
void scePaf_8C1ED07B(void);
void scePaf_8CDEDC6F(void);
void scePaf_8D3EAEA3(s32 arg0);
s32 scePaf_8D7FC7DB(struct Unk_scePaf_8D7FC7DB_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void scePaf_8DEB3DB3(void);
void scePaf_8E757709(void);
void scePaf_8ECB2367(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 scePaf_902515FB(s32);
void scePaf_905CF2A7(struct Unk_scePaf_905CF2A7_0 *arg0, s32 arg1);
void scePaf_910BCFE1(void);
s32 scePaf_92A46B32(s32 arg0, s32 arg1);
void scePaf_9399AF50(s32 *arg0);
void scePaf_94136997(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 scePaf_952CE8AF(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void scePaf_95708BC0(struct Unk_scePaf_95708BC0_0 *arg0);
s32 scePaf_95948FB6(void);
void scePaf_95C97571(void);
M2C_UNK *scePaf_962FA087(void);
s32 scePaf_96C46364(void);
void scePaf_97B9C21E(void);
M2C_UNK scePaf_980228BA();
s32 scePaf_9948CDB3(s32, s32, s32);
void scePaf_997D2809(void);
s32 scePaf_9A8E343E(void);
void scePaf_9B8CBC5F(void);
void scePaf_9BADB81F(void);
s32 scePaf_9C483594(void);
s32 scePaf_9C9B6732(void);
void scePaf_9D496842(void);
void scePaf_9DED6118(void);
s32 scePaf_9F60CB01(s32 arg0);
void scePaf_A044BFC0(void);
void scePaf_A08B0F31(void);
void scePaf_A0A25707(void);
void scePaf_A574DB92(struct Unk_scePaf_A574DB92_0 *arg0);
s32 scePaf_A72594EF();
void scePaf_A82E3C19(s32 arg0);
void scePaf_A8711520(void);
void scePaf_A9CE8FBB(void);
void scePaf_AAA8D3DA(s32 arg0, s32 arg1, s32 arg2);
void scePaf_AAD0EE78(s32 arg0);
void scePaf_AAE8A6B6(void);
M2C_UNK scePaf_ABBBB335(s32);
s32 scePaf_ABCBC1C5(struct Unk_scePaf_ABCBC1C5_0 *arg0);
void scePaf_AD1721B8(void);
void scePaf_AD7A45F9(void);
void scePaf_AECF91A9(void);
s32 scePaf_AEEF2A7C(struct Unk_scePaf_AEEF2A7C_0 *arg0);
M2C_UNK *scePaf_B0C3E598(void);
void scePaf_B1F587EF(void);
void scePaf_B3D2C3BB(void);
M2C_UNK scePaf_B3D58D25();
s32 scePaf_B4E3A16C(s32 arg0);
void scePaf_B52E43FB(void);
s32 scePaf_B61E88F2(void);
s32 scePaf_B6F52424(struct Unk_scePaf_B6F52424_0 *arg0);
s32 scePaf_B7865607(void);
s32 scePaf_B7E6052B(M2C_UNK);
void scePaf_B884B031(struct Unk_scePaf_B884B031_0 *arg0);
s32 scePaf_B9BE69FD(struct Unk_scePaf_B9BE69FD_0 *arg0, s32 arg1);
void scePaf_BA09CF46(void);
s32 scePaf_BA433BEF(void);
s32 scePaf_BA6B8B02(struct Unk_scePaf_BA6B8B02_0 *arg0);
void scePaf_BAA76FDE(void);
s32 scePaf_BAA88CDA(void);
void scePaf_BAEAB61A(s32 arg0, s32 arg1, s32 arg2);
void scePaf_BBBF145C(void);
void scePaf_BE5B0791(void);
void scePaf_BECD1827(void);
void scePaf_BFFAEE83(struct Unk_scePaf_BFFAEE83_0 *arg0);
void scePaf_C01BF169(void);
void scePaf_C07624F0(void);
void scePaf_C07B7162(struct Unk_scePaf_C07B7162_0 *arg0);
void scePaf_C1579C1D(void);
void scePaf_C1F72218(struct Unk_scePaf_C1F72218_0 *arg0);
void scePaf_C1FAF826(M2C_UNK **arg0);
void scePaf_C2911954(s32 arg0);
s32 scePaf_C2C25056(s32, s32);
s32 scePaf_C2E4423A(struct Unk_scePaf_C2E4423A_0 *arg0);
void scePaf_C4BAD564(s32 arg0);
void scePaf_C6624F24(struct Unk_scePaf_C6624F24_0 *arg0);
void scePaf_C6F44EF9(void);
void scePaf_C85155C9(struct Unk_scePaf_C85155C9_0 *arg0);
void scePaf_C8E7B03F(s32 arg0);
void scePaf_C904DA17(void);
s32 scePaf_C933B3C5(struct Unk_scePaf_C933B3C5_0 *arg0, s32 arg1);
void scePaf_CA5EF446(struct Unk_scePaf_CA5EF446_0 *arg0);
M2C_UNK scePaf_CA79D58B();
void scePaf_CA8CDF32(void);
s32 scePaf_CAE6374A(void);
void scePaf_CAF05F1D(struct Unk_scePaf_CAF05F1D_0 *arg0, s32 arg1);
void scePaf_CB7CCB28(void);
void scePaf_CC103AD2(void);
void scePaf_CC3CFABF(void);
s32 scePaf_CD3A094C(struct Unk_func_0005D398_0 *arg0, struct Unk_func_0005D398_1 *arg1);
void scePaf_CDB85442(void);
s32 scePaf_CEAC29F3(void);
void scePaf_CEFBDE33(void);
void scePaf_CFAF88AB(void);
s32 scePaf_D05C226F(s32, s32);
void scePaf_D0AD10FF(void);
void scePaf_D16E5935(void);
void scePaf_D180ACBA(void);
void scePaf_D188831A(void);
s32 scePaf_D1EE972C(struct Unk_scePaf_D1EE972C_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK scePaf_D24E4016(s32);
void scePaf_D2C94856(void);
void scePaf_D34D0B82(void);
s32 scePaf_D35B454A(s32);
void scePaf_D36F3AAA(void);
s32 scePaf_D3AB4076(void);
void scePaf_D4C6CC7A(struct Unk_scePaf_D4C6CC7A_0 *arg0);
M2C_UNK scePaf_D4DAB044();
void scePaf_D4FAE7D0(s32 arg0);
M2C_UNK scePaf_D6232F26();
void scePaf_D63D4561(void);
M2C_UNK scePaf_D6C1FF36();
s32 scePaf_D6CD39AF(struct Unk_scePaf_D6CD39AF_0 *arg0);
void scePaf_D6E69FCB(void);
void scePaf_D6F088EF(void);
s32 scePaf_D7215544();
s32 scePaf_D726DDD3(s32 arg0);
void scePaf_D726F4A2(s32 arg0);
void scePaf_D7E925A1(void);
void scePaf_D8739C4C(void);
void scePaf_D99BEC81(void);
void scePaf_D9D3EEBA(void);
s32 scePaf_DA3A6D88(s32, s32);
s32 scePaf_DAD477C1(void);
void scePaf_DB1549DF(struct Unk_scePaf_DB1549DF_0 *arg0);
M2C_UNK scePaf_DB230BE1();
M2C_UNK scePaf_DC544921();
void scePaf_DC7F84BA(void);
s32 scePaf_DC8B0309(struct Unk_scePaf_DC8B0309_0 *arg0);
void scePaf_DD79627E(void);
void scePaf_DE75C2BA(struct Unk_scePaf_DE75C2BA_0 *arg0);
M2C_UNK scePaf_DEDF238F();
void scePaf_DEF9EBE7(struct Unk_scePaf_DEF9EBE7_0 *arg0);
void scePaf_DF58706C(void);
s32 scePaf_DF642973(s32 arg0);
void scePaf_DFB24D02(void);
void scePaf_DFB912CB(void);
void scePaf_DFC8650C(s32 arg0);
void scePaf_DFD3E855(void);
void scePaf_DFFE9ED6(void);
void scePaf_E1242646(void);
void scePaf_E15A64EA(void);
s32 scePaf_E3020CA3(s32, s32);
void scePaf_E357380E(s32 arg0);
M2C_UNK scePaf_E418D7E0(s32);
void scePaf_E5BAC873(void);
void scePaf_E6134C53(void);
void scePaf_E69C3B1B(s32 arg0);
s32 scePaf_E977B833(s32);
void scePaf_E9BF6BEB(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
s32 scePaf_EA39A7C1(void);
M2C_UNK scePaf_EAA5AFF6(s32, M2C_UNK);
s32 scePaf_EB346F51(struct Unk_scePaf_EB346F51_0 *arg0, s32 arg1, s32 arg2);
s32 scePaf_EB553D60(s32 arg0, s32 arg1);
void scePaf_EB5BDCE1(void);
void scePaf_ED2DF238(void);
void scePaf_ED3E4EB1(void);
M2C_UNK scePaf_ED83B18F(s32, M2C_UNK, s32);
M2C_UNK scePaf_ED89C94B(s32);
void scePaf_EE10AEF1(void);
void scePaf_EF346632(void);
void scePaf_F0885EDC(void);
void scePaf_F13EBB78(void);
M2C_UNK scePaf_F1552447();
void scePaf_F1CF9579(void);
void scePaf_F23F3226(struct Unk_scePaf_F23F3226_0 *arg0);
void scePaf_F273FE50(void);
void scePaf_F2E5FDEB(void);
void scePaf_F3397557(void);
void scePaf_F3967AF5(void);
void scePaf_F4404EAF(void);
s32 scePaf_F47CA1C2(s32, s32, s32, s32);
void scePaf_F577BC82(s32 arg0);
void scePaf_F609FA81(struct Unk_scePaf_F609FA81_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void scePaf_F639E5E1(struct Unk_scePaf_F639E5E1_0 *arg0);
s32 scePaf_F7FB133E(void);
s32 scePaf_F84A99C8(void);
void scePaf_F89014B3(struct Unk_scePaf_F89014B3_0 *arg0, s32 arg1);
M2C_UNK scePaf_F95EA3F1();
void scePaf_FA758B05(struct Unk_scePaf_FA758B05_0 *arg0);
void scePaf_FA78AF39(struct Unk_scePaf_FA78AF39_0 *arg0);
s32 scePaf_FA87D725(struct Unk_scePaf_FA87D725_0 *arg0);
void scePaf_FB3DB2FF(void);
s32 scePaf_FBA47E77(s32, s32, s32);
void scePaf_FCABD0E7(void);
M2C_UNK scePaf_FCB4E053();
void scePaf_FCD816FA(void);
void scePaf_FCDD55E3(void);
void scePaf_FD9DE7B9(s32 arg0);
M2C_UNK scePaf_FE4D4112(s32, s32);
M2C_UNK scePaf_FF2F98C6();
void scePaf_FF91D139(void);
void sceReg_0CAE832B(void);
void sceReg_0D69BF40(void);
void sceReg_17768E14(void);
void sceReg_1D8A762E(void);
void sceReg_28A8E98A(void);
void sceReg_2C0DB9DD(void);
void sceReg_2D211135(void);
void sceReg_3615BC87(void);
void sceReg_39461B4D(void);
void sceReg_4CA16893(void);
void sceReg_57641A81(void);
void sceReg_92E41280(void);
void sceReg_9B25EDF1(void);
void sceReg_D4475AA8(void);
void sceReg_DEDA92BF(void);
void sceReg_FA8A5739(void);
void sinf(void);
void sqrtf(void);
void strcpy(void);
void strlen(void);
void strncpy(void);
s32 zlibCompileFlags(void);

#endif
