#ifndef MSVIDEO_PLUGIN_DECLS_H
#define MSVIDEO_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

#ifdef __cplusplus
#include "paf.h"
#include "vsh.h"
extern "C" {
#endif

struct D_00065E24_s {
    s8 unk0;
    u8 pad1[0x7F];
    s32 unk80;
};

struct Unk_D_00065E04 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_D_000663E8 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x1F];
    u8 unk43;
    u8 pad44[0x158];
    s32 unk19C;
};

struct Unk_D_000663F8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_D_0007E590 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_Unk_Unk_Unk_Unk_Unk_func_0005ECC4_0_10C_298_8C_FC_4 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_Unk_Unk_Unk_Unk_func_0005ECC4_0_10C_298_8C_FC {
    u8 pad0[0x4];
    struct Unk_Unk_Unk_Unk_Unk_Unk_func_0005ECC4_0_10C_298_8C_FC_4 *unk4;
};

struct Unk_Unk_Unk_Unk_func_0005ECC4_0_10C_298_8C {
    u8 pad0[0xFC];
    struct Unk_Unk_Unk_Unk_Unk_func_0005ECC4_0_10C_298_8C_FC *unkFC;
};

struct Unk_Unk_Unk_func_0005ECC4_0_10C_298 {
    u8 pad0[0x8C];
    struct Unk_Unk_Unk_Unk_func_0005ECC4_0_10C_298_8C *unk8C;
};

struct Unk_Unk_func_0003C1B8_temp_a0_C8 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_Unk_func_0005ECC4_0_10C {
    u8 pad0[0x298];
    struct Unk_Unk_Unk_func_0005ECC4_0_10C_298 *unk298;
};

struct Unk_func_00001F84_temp_v0_2 {
    u8 pad0[0x30];
    s32 (*unk30)();
};

struct Unk_func_00003E88_0 {
    u8 pad0[0x20];
    s8 unk20;
};

struct Unk_func_00003E94_0 {
    u8 pad0[0x20];
    s8 unk20;
};

struct Unk_func_00004C5C_0 {
    u8 pad0[0x18];
    u8 unk18;
};

struct Unk_func_00004D48_0 {
    u8 pad0[0x18];
    s8 unk18;
};

struct Unk_func_00004D50_0 {
    u8 pad0[0x50];
    s32 unk50;
};

struct Unk_func_00004F0C_0 {
    u8 pad0[0x36];
    u8 unk36;
};

struct Unk_func_00004F14_0 {
    u8 pad0[0x34];
    u8 unk34;
};

struct Unk_func_00004F1C_0 {
    u8 pad0[0x35];
    u8 unk35;
};

struct Unk_func_00004F24_0 {
    u8 pad0[0x37];
    u8 unk37;
};

struct Unk_func_00005224_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_00005758_0 {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0x3];
    s32 unk94;
};

struct Unk_func_00005778_0 {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0x3];
    s32 unk94;
};

struct Unk_func_00005DA8_0 {
    u8 pad0[0x20];
    s32 unk20;
    s32 unk24;
    s32 unk28;
};

struct Unk_func_00006D98_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_00006DE0_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_00006E28_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_0000788C_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000078C8_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00007924_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00007954_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00008638_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00008C7C_0 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x4];
    s32 unk2C;
};

struct Unk_func_00008CB4_0 {
    u8 pad0[0x24];
    struct Unk_func_00008CB4_temp_v1 *unk24;
    s32 unk28;
    s32 unk2C;
    u8 pad30[0x4];
    s32 unk34;
};

struct Unk_func_00008CB4_temp_v1 {
    u8 pad0[0x474];
    s32 unk474;
};

struct Unk_func_00009514_0 {
    M2C_UNK * unk0;
    u8 pad4[0x38];
    s32 unk3C;
};

struct Unk_func_00009554_0 {
    M2C_UNK * unk0;
    u8 pad4[0x38];
    s32 unk3C;
};

struct Unk_func_0000B6AC_0 {
    u8 pad0[0x1A0];
    s32 unk1A0;
};

struct Unk_func_0000B6DC_0 {
    u8 pad0[0x1A0];
    s32 unk1A0;
};

struct Unk_func_0000B70C_0 {
    u8 pad0[0x1A0];
    struct Unk_func_0000B70C_temp_v0 *unk1A0;
};

struct Unk_func_0000B70C_temp_v0 {
    u8 pad0[0x340];
    s32 unk340;
    s32 unk344;
};

struct Unk_func_0000E700_0 {
    u8 pad0[0x1A4];
    u8 unk1A4;
};

struct Unk_func_0000F1FC_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000116A8_0 {
    u8 pad0[0x1D4];
    s32 unk1D4;
};

struct Unk_func_00011704_0 {
    u8 pad0[0x1EC];
    s32 unk1EC;
};

struct Unk_func_00016340_0 {
    u8 pad0[0x82C];
    s8 unk82C;
};

struct Unk_func_000163D0_0 {
    u8 pad0[0x9F8];
    s32 unk9F8;
};

struct Unk_func_00016774_0 {
    u8 pad0[0x784];
    void ** unk784;
};

struct Unk_func_00016DB4_0 {
    u8 pad0[0x7F4];
    u8 unk7F4;
};

struct Unk_func_000176B8_0 {
    u8 pad0[0x98C];
    void ** unk98C;
};

struct Unk_func_000176E0_0 {
    u8 pad0[0x98C];
    void ** unk98C;
};

struct Unk_func_00017708_0 {
    u8 pad0[0x98C];
    void ** unk98C;
};

struct Unk_func_00017730_0 {
    u8 pad0[0x98C];
    void ** unk98C;
};

struct Unk_func_00017758_0 {
    u8 pad0[0x98C];
    void ** unk98C;
};

struct Unk_func_000186F8_0 {
    u8 pad0[0x970];
    s32 unk970;
};

struct Unk_func_00019100_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x18];
    s32 unk20;
};

struct Unk_func_0001A504_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x10];
    s32 unk34;
    s32 unk38;
    s32 unk3C;
};

struct Unk_func_0001BA0C_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x8];
    s32 unk2C;
};

struct Unk_func_0001BED0_0 {
    u8 pad0[0x10];
    u8 unk10;
};

struct Unk_func_0001D144_0 {
    u8 pad0[0xF0];
    s32 unkF0;
};

struct Unk_func_0001DBD4_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0001DC04_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0001E844_temp_a1 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0001E8B8_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_0001EA58_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0001F878_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0001FCC4_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000205C0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002098C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00020F64_0 {
    M2C_UNK * unk0;
    u8 pad4[0x4];
    M2C_UNK * unk8;
};

struct Unk_func_00021B48_0 {
    u8 pad0[0x30];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
};

struct Unk_func_00021B48_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00023268_0 {
    u8 pad0[0x30];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
};

struct Unk_func_00023268_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00024C20_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00024C68_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024CA0_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024CD8_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024D10_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024D48_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024D94_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_0002508C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00025D0C_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00026794_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000274B4_0 {
    u8 pad0[0x4C];
    void **unk4C;
    u8 pad50[0xBC];
    s32 unk10C;
    u8 pad110[0xC];
    s32 unk11C;
};

struct Unk_func_00027B2C_0 {
    u8 pad0[0xA4];
    struct Unk_func_00027B2C_temp_v0 *unkA4;
    u8 padA8[0x8];
    s32 unkB0;
};

struct Unk_func_00027B2C_temp_v0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00027B48_0 {
    u8 pad0[0xA4];
    struct Unk_func_00027B48_temp_v0 *unkA4;
    u8 padA8[0xC];
    s32 unkB4;
};

struct Unk_func_00027B48_temp_v0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000283D4_0 {
    u8 pad0[0x50];
    s32 unk50;
};

struct Unk_func_00028438_0 {
    u8 pad0[0x54];
    s32 unk54;
};

struct Unk_func_00028444_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_func_0002A1AC_0 {
    u8 pad0[0x94];
    struct Unk_func_0002A1AC_var_v0 *unk94;
};

struct Unk_func_0002A1AC_var_v0 {
    u8 pad0[0x30];
    struct Unk_func_0002A1AC_var_v0 *unk30;
};

struct Unk_func_0002B150_0 {
    u8 pad0[0x68];
    struct Unk_func_0002B150_var_v0 *unk68;
    u8 pad6C[0x4];
    struct Unk_func_0002B150_var_a0 *unk70;
};

struct Unk_func_0002B150_var_a0 {
    u8 pad0[0x24];
    struct Unk_func_0002B150_var_a0 *unk24;
};

struct Unk_func_0002B150_var_v0 {
    u8 pad0[0x38];
    struct Unk_func_0002B150_var_v0 *unk38;
};

struct Unk_func_0002B5D4_0 {
    u8 pad0[0x5C];
    s8 unk5C;
};

struct Unk_func_0002B980_0 {
    u8 pad0[0x74];
    void **unk74;
};

struct Unk_func_0002B980_1 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_0002BB18_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_0002C1D4_0 {
    u8 pad0[0x6C];
    struct Unk_func_0002C1D4_var_v0 *unk6C;
};

struct Unk_func_0002C1D4_var_v0 {
    u8 pad0[0x20];
    struct Unk_func_0002C1D4_var_v0 *unk20;
};

struct Unk_func_0002C5E0_0 {
    u8 pad0[0x58];
    s8 unk58;
};

struct Unk_func_0002C720_0 {
    u8 pad0[0x318];
    s32 unk318;
};

struct Unk_func_0002C72C_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_0002C770_0 {
    u8 pad0[0x44];
    void ** unk44;
};

struct Unk_func_0002CD1C_0 {
    u8 pad0[0x110];
    struct Unk_func_0002CD1C_var_v0 *unk110;
};

struct Unk_func_0002CD1C_var_v0 {
    u8 pad0[0x40];
    struct Unk_func_0002CD1C_var_v0 *unk40;
};

struct Unk_func_0002D354_0 {
    u8 pad0[0x58];
    s8 unk58;
};

struct Unk_func_0002D468_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_0002DBD4_0 {
    u8 pad0[0x60];
    struct Unk_func_0002DBD4_var_v0 *unk60;
};

struct Unk_func_0002DBD4_var_v0 {
    u8 pad0[0x18];
    struct Unk_func_0002DBD4_var_v0 *unk18;
};

struct Unk_func_0002DF4C_0 {
    u8 pad0[0x58];
    s8 unk58;
};

struct Unk_func_0002E0E0_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_0002F100_0 {
    u8 pad0[0x33C];
    s16 unk33C;
    s16 unk33E;
};

struct Unk_func_000309DC_0 {
    u8 pad0[0x3C];
    s32 unk3C;
};

struct Unk_func_000309FC_0 {
    u8 pad0[0x3C];
    s32 unk3C;
};

struct Unk_func_00030A1C_0 {
    u8 pad0[0x3C];
    s32 unk3C;
};

struct Unk_func_00030AF8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00030C80_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00030C90_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00030E24_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00030F2C_0 {
    u8 pad0[0xC];
    s8 unkC;
};

struct Unk_func_00030F3C_0 {
    u8 pad0[0xC];
    s8 unkC;
};

struct Unk_func_00032C70_0 {
    u8 pad0[0xA8];
    s32 unkA8;
};

struct Unk_func_00032DE0_0 {
    u8 pad0[0x5F1];
    s8 unk5F1;
};

struct Unk_func_00032F68_0 {
    u8 pad0[0xAC];
    s32 unkAC;
    u8 padB0[0x498];
    s32 unk548;
};

struct Unk_func_00033158_0 {
    u8 pad0[0xAC];
    s32 unkAC;
};

struct Unk_func_00033178_0 {
    u8 pad0[0xAC];
    s32 unkAC;
};

struct Unk_func_00033750_temp_s0 {
    u8 pad0[0x4];
    void *unk4;
    void *unk8;
};

struct Unk_func_00033750_temp_s0_2 {
    u8 pad0[0x4];
    void *unk4;
    void *unk8;
};

struct Unk_func_00033750_var_a0 {
    void *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00033750_var_a0_2 {
    void *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_000337FC_0 {
    u8 pad0[0xA8];
    s32 unkA8;
    s32 unkAC;
};

struct Unk_func_00033820_0 {
    u8 pad0[0xA8];
    s32 unkA8;
};

struct Unk_func_00033970_0 {
    u8 pad0[0xAC];
    s32 unkAC;
};

struct Unk_func_0003398C_0 {
    u8 pad0[0x548];
    s32 unk548;
};

struct Unk_func_00033A70_0 {
    u8 pad0[0xAC];
    s32 unkAC;
};

struct Unk_func_00033A94_0 {
    u8 pad0[0xAC];
    s32 unkAC;
};

struct Unk_func_00033AB8_0 {
    u8 pad0[0xAC];
    s32 unkAC;
};

struct Unk_func_00033ADC_0 {
    u8 pad0[0xAC];
    s32 unkAC;
};

struct Unk_func_00033C28_0 {
    u8 pad0[0x61C];
    struct Unk_func_00033C28_temp_v1 *unk61C;
};

struct Unk_func_00033C28_temp_v1 {
    u8 pad0[0x8];
    u8 unk8;
    u8 unk9;
};

struct Unk_func_00033C6C_0 {
    u8 pad0[0x618];
    s32 unk618;
};

struct Unk_func_00033C84_0 {
    u8 pad0[0x618];
    s32 unk618;
};

struct Unk_func_00033C8C_0 {
    u8 pad0[0x614];
    s32 unk614;
};

struct Unk_func_00033C94_0 {
    u8 pad0[0x618];
    s32 unk618;
};

struct Unk_func_00033D24_0 {
    u8 pad0[0xAC];
    s32 unkAC;
};

struct Unk_func_000341C0_0 {
    u8 pad0[0xAC];
    s32 unkAC;
};

struct Unk_func_00035EF0_0 {
    u8 pad0[0x1AC];
    s32 unk1AC;
};

struct Unk_func_00035F08_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00035F18_0 {
    u8 pad0[0x7C];
    s32 unk7C;
};

struct Unk_func_00035F20_0 {
    u8 pad0[0x58];
    s16 unk58;
};

struct Unk_func_00035F28_0 {
    u8 pad0[0x56];
    s16 unk56;
};

struct Unk_func_00035F30_0 {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct Unk_func_00035F38_0 {
    u8 pad0[0x60];
    s32 unk60;
};

struct Unk_func_00035F48_0 {
    u8 pad0[0xA0];
    u16 unkA0;
};

struct Unk_func_00036BB4_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_000377A0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000378D4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00037A08_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_func_00037A48_0 {
    u8 pad0[0x34];
    u32 unk34;
};

struct Unk_func_00037A58_0 {
    u8 pad0[0x34];
    u32 unk34;
};

struct Unk_func_0003848C_temp_v0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00038514_temp_v0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00038934_0 {
    u8 pad0[0x4];
    struct Unk_func_00038934_temp_a0 *unk4;
};

struct Unk_func_00038934_temp_a0 {
    s32 unk0;
    u8 pad4[0x20];
    s32 unk24;
};

struct Unk_func_00039644_0 {
    u8 pad0[0x7C];
    s32 unk7C;
    u8 pad80[0x4];
    s32 unk84;
    u8 pad88[0x8];
    s32 unk90;
};

struct Unk_func_0003969C_0 {
    u8 pad0[0xA0];
    s32 unkA0;
    u8 padA4[0x10];
    s32 unkB4;
};

struct Unk_func_000396F4_0 {
    u8 pad0[0xC8];
    s32 unkC8;
    u8 padCC[0xC];
    s32 unkD8;
};

struct Unk_func_00039778_0 {
    u8 pad0[0x188];
    s32 unk188;
    u8 pad18C[0x8];
    s32 unk194;
};

struct Unk_func_00039854_0 {
    u8 pad0[0x28];
    struct Unk_func_0003B708_temp_v1 *unk28;
};

struct Unk_func_0003996C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00039A48_0 {
    u16 unk0;
    u8 pad2[0xA];
    s32 unkC;
};

struct Unk_func_0003A3E4_temp_a0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
};

struct Unk_func_0003AE38_temp_a0 {
    u8 pad0[0xD4];
    s32 unkD4;
    u8 padD8[0x4];
    s32 unkDC;
    s32 unkE0;
};

struct Unk_func_0003AEC0_temp_a0 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x10];
    s32 unk20;
};

struct Unk_func_0003AF34_temp_a0 {
    s32 unk0;
    u8 pad4[0x4];
    u16 unk8;
};

struct Unk_func_0003AF58_temp_a0 {
    s32 unk0;
    u8 pad4[0x4];
    u32 unk8;
};

struct Unk_func_0003B708_temp_v1 {
    u32 unk0;
    u8 pad4[0x8];
    s32 unkC;
};

struct Unk_func_0003C1B8_temp_a0 {
    u8 pad0[0xA0];
    s32 unkA0;
    u8 padA4[0x18];
    s32 unkBC;
    u8 padC0[0x8];
    struct Unk_Unk_func_0003C1B8_temp_a0_C8 *unkC8;
};

struct Unk_func_0003F1A8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0003F1F0_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0003F2F8_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_0003F4DC_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_0003F614_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x3];
    u8 unkB;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
};

struct Unk_func_0003F9E8_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_0003FC30_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
    u8 padC[0x28];
    u32 unk34;
};

struct Unk_func_0003FCE8_0 {
    s32 unk0;
    u8 pad4[0x7];
    u8 unkB;
};

struct Unk_func_0003FE84_0 {
    u8 pad0[0x34];
    s32 unk34;
    s32 unk38;
};

struct Unk_func_00040E54_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00040E70_0 {
    u8 pad0[0x220];
    s32 unk220;
};

struct Unk_func_00040E8C_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00040EF4_0 {
    u8 pad0[0x21C];
    s32 unk21C;
};

struct Unk_func_00041C34_1 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000422B8_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00042410_0 {
    u8 pad0[0xC];
    u32 unkC;
    s32 unk10;
};

struct Unk_func_0004396C_0 {
    u8 pad0[0xA0];
    s32 unkA0;
    u8 padA4[0x30];
    s32 unkD4;
};

struct Unk_func_000439BC_0 {
    u8 pad0[0xA0];
    s32 unkA0;
    u8 padA4[0x14];
    s32 unkB8;
    u8 padBC[0x1DC];
    void *unk298;
};

struct Unk_func_000439BC_temp_v0 {
    u8 pad0[0x84];
    s32 unk84;
};

struct Unk_func_00046A68_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_00046ABC_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
};

struct Unk_func_00046B58_0 {
    u8 pad0[0xC];
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
};

struct Unk_func_00048BB0_0 {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s16 unk10;
    s16 unk12;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s16 unk20;
    u8 pad22[0x20];
    s16 unk42;
    s16 unk44;
};

struct Unk_func_00048D54_0 {
    u8 pad0[0xC];
    s16 unkC;
    s16 unkE;
    s16 unk10;
    s16 unk12;
};

struct Unk_func_00048DC0_0 {
    u8 pad0[0xC];
    s16 unkC;
    s16 unkE;
};

struct Unk_func_00048E14_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s16 unk1C;
    s16 unk1E;
};

struct Unk_func_000495D8_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000495E8_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0004B7A0_0 {
    u8 pad0[0x10];
    u32 unk10;
};

struct Unk_func_0004B8C8_0 {
    u8 pad0[0x10];
    u32 unk10;
};

struct Unk_func_0004F654_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0004F7C0_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u16 unk1C;
    u16 unk1E;
};

struct Unk_func_0004F978_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    u16 unkC;
    u16 unkE;
    u16 unk10;
    u16 unk12;
};

struct Unk_func_0004FA08_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s16 unkC;
    u16 unkE;
};

struct Unk_func_0004FA80_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0004FBB8_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x1];
    u8 unk9;
    u8 unkA;
    u8 unkB;
    void *unkC;
};

struct Unk_func_0004FF88_0 {
    s32 unk0;
    s32 unk4;
    void * unk8;
};

struct Unk_func_00050AF4_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_00050B70_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
};

struct Unk_func_00050C34_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
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
};

struct Unk_func_00050D10_0 {
    u16 unk0;
    u16 unk2;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s16 unk10;
    s16 unk12;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    u16 unk20;
    u8 pad22[0x20];
    s16 unk42;
    u16 unk44;
};

struct Unk_func_00050DE4_0 {
    u16 unk0;
    u16 unk2;
    s32 unk4;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00050EC0_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x6];
    u16 unkE;
};

struct Unk_func_00050F1C_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00050FD4_0 {
    u8 pad0[0x15C];
    s32 unk15C;
};

struct Unk_func_000515F4_temp_v0 {
    u8 pad0[0x1C];
    void *unk1C;
};

struct Unk_func_00054DDC_var_v1 {
    u8 pad0[0x1C];
    void *unk1C;
};

struct Unk_func_00054E00_var_a0 {
    u8 pad0[0x1C];
    struct Unk_func_00054E00_var_a0 *unk1C;
};

struct Unk_func_00054E30_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00056504_0 {
    u8 pad0[0x160];
    struct Unk_func_00056504_temp_a0 *unk160;
};

struct Unk_func_00056504_temp_a0 {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
};

struct Unk_func_000565E8_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00056660_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00056668_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00056670_0 {
    u8 pad0[0x28];
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
};

struct Unk_func_000566B8_0 {
    u8 pad0[0x28];
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
};

struct Unk_func_00056700_0 {
    u8 pad0[0x20];
    s32 unk20;
    s32 unk24;
};

struct Unk_func_00056728_0 {
    u8 pad0[0x20];
    s32 unk20;
    s32 unk24;
};

struct Unk_func_00056750_0 {
    u8 pad0[0x28];
    s32 unk28;
    s32 unk2C;
};

struct Unk_func_00056778_0 {
    u8 pad0[0x28];
    s32 unk28;
    s32 unk2C;
};

struct Unk_func_0005698C_0 {
    u8 pad0[0x160];
    void *unk160;
};

struct Unk_func_00056BD4_var_v0 {
    u8 pad0[0x1C];
    void *unk1C;
};

struct Unk_func_00056EA8_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_00056F4C_0 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_func_00057234_0 {
    s32 unk0;
    u8 pad4[0x14];
    s32 unk18;
    u8 pad1C[0x24];
    s32 unk40;
};

struct Unk_func_00057254_0 {
    s32 unk0;
    u8 pad4[0x14];
    s32 unk18;
    u8 pad1C[0x1C];
    s32 unk38;
};

struct Unk_func_00057274_0 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0xC];
    s32 unk24;
};

struct Unk_func_00057290_0 {
    u8 pad0[0x160];
    struct Unk_func_00057290_temp_a0 *unk160;
};

struct Unk_func_00057290_temp_a0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000573D0_0 {
    u8 pad0[0x18];
    s32 unk18;
    u8 pad1C[0x4];
    s32 unk20;
};

struct Unk_func_0005751C_0 {
    s32 unk0;
    u8 pad4[0xC];
    s32 unk10;
};

struct Unk_func_00057540_0 {
    s32 unk0;
    u8 pad4[0xC];
    s32 unk10;
};

struct Unk_func_000575B4_0 {
    s32 unk0;
    u8 pad4[0xC];
    s32 unk10;
};

struct Unk_func_000575D8_0 {
    s32 unk0;
    u8 pad4[0xC];
    s32 unk10;
};

struct Unk_func_000575FC_0 {
    s32 unk0;
    u8 pad4[0xC];
    s32 unk10;
};

struct Unk_func_000578C4_0 {
    u8 pad0[0x160];
    struct Unk_func_000578C4_temp_a0 *unk160;
};

struct Unk_func_000578C4_temp_a0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000595A4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000599E0_0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct Unk_func_00059A6C_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    void * unk14;
    void * unk18;
};

struct Unk_func_00059C94_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00059CA4_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00059CAC_0 {
    u32 unk0;
    s32 unk4;
};

struct Unk_func_00059EE4_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00059F24_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00059F54_0 {
    s32 *unk0;
    u8 pad4[0x77C];
    s32 unk780;
    s32 unk784;
    s32 unk788;
    s32 unk78C;
    s32 unk790;
};

struct Unk_func_00059FCC_0 {
    s32 *unk0;
    u8 pad4[0x77C];
    s32 unk780;
    s32 unk784;
    s32 unk788;
    s32 unk78C;
    s32 unk790;
};

struct Unk_func_0005A084_0 {
    s32 * unk0;
    u8 pad4[0x77C];
    s32 unk780;
};

struct Unk_func_0005A618_0 {
    u8 pad0[0x780];
    s32 unk780;
    u8 pad784[0x4];
    u32 unk788;
};

struct Unk_func_0005A618_temp_v0 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x20];
    s32 unk30;
};

struct Unk_func_0005A684_0 {
    u8 pad0[0x780];
    s32 unk780;
    u8 pad784[0x4];
    u32 unk788;
};

struct Unk_func_0005A684_temp_v0 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x20];
    s32 unk30;
};

struct Unk_func_0005A6BC_0 {
    u8 pad0[0x780];
    s32 unk780;
    u8 pad784[0x4];
    u32 unk788;
};

struct Unk_func_0005A6BC_temp_v0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x24];
    s32 unk30;
};

struct Unk_func_0005A79C_0 {
    u8 pad0[0x780];
    s32 unk780;
    u8 pad784[0x4];
    u32 unk788;
};

struct Unk_func_0005A79C_temp_v0 {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
};

struct Unk_func_0005A7D4_0 {
    u8 pad0[0x780];
    s32 unk780;
    u8 pad784[0x4];
    u32 unk788;
};

struct Unk_func_0005A7D4_temp_a0 {
    u8 pad0[0x14];
    u16 unk14;
    u8 unk16;
    u8 unk17;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 pad1B[0x15];
    s32 unk30;
};

struct Unk_func_0005BAA4_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0005BABC_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 ** unk8;
};

struct Unk_func_0005BB14_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 ** unk8;
};

struct Unk_func_0005C178_0 {
    u8 unk0;
    u8 pad1[0x3];
    s32 unk4;
};

struct Unk_func_0005CAA0_0 {
    s32 unk0;
    s8 unk4;
};

struct Unk_func_0005D148_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0005D748_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0005E0E4_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0005E134_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0005E184_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0005E228_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0005E480_0 {
    s32 unk0;
    u8 pad4[0x4];
    struct Unk_func_0005E480_temp_a1 *unk8;
};

struct Unk_func_0005E480_temp_a1 {
    s32 unk0;
    u8 pad4[0x4];
    u16 unk8;
};

struct Unk_func_0005E4B4_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_0005E504_0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
};

struct Unk_func_0005ECC4_0 {
    u8 pad0[0x10C];
    struct Unk_Unk_func_0005ECC4_0_10C *unk10C;
};

struct Unk_vt_func_00013B54_arg0 {
    u8 pad0[0x6C];
    s32 (*unk6C)(void **);
    u8 pad70[0x40];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00013BB0_arg0 {
    u8 pad0[0x70];
    s32 (*unk70)(void **);
    u8 pad74[0x3C];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00013C70_arg0 {
    u8 pad0[0x78];
    s32 (*unk78)(void **, M2C_UNK);
    u8 pad7C[0x34];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00013CD4_arg0 {
    u8 pad0[0x7C];
    s32 (*unk7C)(void **, M2C_UNK);
    u8 pad80[0x30];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00013D9C_arg0 {
    u8 pad0[0x84];
    s32 (*unk84)(void **, M2C_UNK, M2C_UNK);
    u8 pad88[0x28];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00013E10_arg0 {
    u8 pad0[0x88];
    s32 (*unk88)(void **, M2C_UNK, M2C_UNK);
    u8 pad8C[0x24];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00013E84_arg0 {
    u8 pad0[0x8C];
    s32 (*unk8C)(void **);
    u8 pad90[0x20];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00013F8C_arg0 {
    u8 pad0[0x94];
    s32 (*unk94)(void **, M2C_UNK, M2C_UNK);
    u8 pad98[0x18];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00014000_arg0 {
    u8 pad0[0x98];
    s32 (*unk98)(void **, M2C_UNK, M2C_UNK);
    u8 pad9C[0x14];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00014074_arg0 {
    u8 pad0[0x9C];
    s32 (*unk9C)(void **, M2C_UNK, M2C_UNK);
    u8 padA0[0x10];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_000140E8_arg0 {
    u8 pad0[0xA0];
    s32 (*unkA0)(void **, M2C_UNK);
    u8 padA4[0xC];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_0001414C_arg0 {
    u8 pad0[0xA4];
    s32 (*unkA4)(void **, M2C_UNK);
    u8 padA8[0x8];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_000141B0_arg0 {
    u8 pad0[0xA8];
    s32 (*unkA8)(void **, M2C_UNK);
    u8 padAC[0x4];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00014214_arg0 {
    u8 pad0[0xB0];
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00014270_arg0 {
    u8 pad0[0xAC];
    s32 (*unkAC)(void **, M2C_UNK);
    M2C_UNK (*unkB0)();
    M2C_UNK (*unkB4)(void **);
};

struct Unk_vt_func_00016774_temp_a0 {
    u8 pad0[0xC];
    s32 (*unkC)(void **);
};

struct Unk_vt_func_000176B8_temp_a0 {
    u8 pad0[0x10];
    M2C_UNK (*unk10)(void **);
};

struct Unk_vt_func_000176E0_temp_a0 {
    u8 pad0[0x14];
    M2C_UNK (*unk14)(void **);
};

struct Unk_vt_func_00017708_temp_a0 {
    u8 pad0[0x18];
    M2C_UNK (*unk18)(void **);
};

struct Unk_vt_func_00017730_temp_a0 {
    u8 pad0[0x1C];
    M2C_UNK (*unk1C)(void **, s32);
};

struct Unk_vt_func_00017758_temp_a0 {
    u8 pad0[0x8];
    M2C_UNK (*unk8)(void **);
};

struct Unk_vt_func_00020B2C_arg0 {
    u8 pad0[0x10];
    M2C_UNK (*unk10)();
};

struct Unk_vt_func_00020B50_arg0 {
    u8 pad0[0x14];
    M2C_UNK (*unk14)();
};

struct Unk_vt_func_00020B74_arg0 {
    u8 pad0[0x18];
    M2C_UNK (*unk18)();
};

struct Unk_vt_func_00020BBC_arg0 {
    u8 pad0[0x20];
    M2C_UNK (*unk20)();
};

struct Unk_vt_func_00020BE0_arg0 {
    u8 pad0[0x24];
    M2C_UNK (*unk24)();
};

struct Unk_vt_func_00020C04_arg0 {
    u8 pad0[0x28];
    M2C_UNK (*unk28)();
};

struct Unk_vt_func_000274B4_temp_a0 {
    u8 pad0[0x24];
    M2C_UNK (*unk24)(void **, M2C_UNK, s32);
};

struct Unk_vt_func_000274B4_temp_v0 {
    u8 pad0[0x24];
    M2C_UNK (*unk24)(void **, M2C_UNK, s32);
};

struct Unk_vt_func_0002C770_temp_a0 {
    u8 pad0[0x70];
    M2C_UNK (*unk70)(void **);
};

typedef void (*func_ptr)(void);

extern s32 D_00047050;
extern s32 D_00047120;
extern s32 D_000481D0;
extern M2C_UNK D_00048F28;
extern M2C_UNK D_00048F34;
extern M2C_UNK D_00049194;
extern M2C_UNK D_000491AC;
extern M2C_UNK D_000491CC;
extern M2C_UNK D_000491E8;
extern M2C_UNK D_00049200;
extern M2C_UNK D_0004920C;
extern s32 D_000495C8;
extern s32 D_0004965C;
extern s32 D_00049F24;
extern M2C_UNK D_00049F40;
extern M2C_UNK D_00049F80;
extern M2C_UNK D_0004CE9C;
extern s32 D_0004CF24;
extern s32 D_0004E4D8;
extern s32 D_0004E4DC;
extern s32 D_0004E4F8;
extern s32 D_0004E510;
extern s32 D_0004E518;
extern s32 D_0004E520;
extern s32 D_0004E524;
extern func_ptr D_0006124C[];
extern M2C_UNK D_000615CC;
extern M2C_UNK D_00061A80;
extern s32 D_00061AA8;
extern s32 D_00061BA0;
extern s32 D_00061C48;
extern s32 D_00061CC8;
extern s32 D_00062138;
extern s32 D_00062180;
extern s32 D_000621A8;
extern M2C_UNK D_000621C8;
extern M2C_UNK D_00062608;
extern s32 D_000628C0;
extern s32 D_00062A70;
extern M2C_UNK D_00062A80;
extern M2C_UNK D_00062A90;
extern M2C_UNK D_00062B70;
extern s32 D_00063588;
extern s32 D_000636E0;
extern s32 D_00063900;
extern s32 D_00063BC8;
extern s32 D_00063C38;
extern M2C_UNK D_00063F60;
extern s32 D_00064118;
extern s32 D_000641B0;
extern s32 D_00064420;
extern M2C_UNK D_000644C0;
extern s32 D_00064670;
extern M2C_UNK D_000646AC;
extern s32 D_00064930;
extern s32 D_00065060;
extern s32 D_000657F8;
extern M2C_UNK D_000658B0;
extern M2C_UNK D_00065968;
extern s32 D_00065A58;
extern M2C_UNK D_00065C8C;
extern s32 D_00065C9C;
extern s32 D_00065CA0;
extern s32 D_00065CA8;
extern s32 D_00065D48;
extern s32 D_00065DE0;
extern struct Unk_D_00065E04 *D_00065E04;
extern s32 D_00065E18;
extern struct D_00065E24_s D_00065E24;
extern M2C_UNK D_00065EB0;
extern s32 D_00065FB0;
extern s32 D_00065FB4;
extern s32 D_00065FB8;
extern s32 D_00065FBC;
extern s32 D_00065FC0;
extern struct Unk_D_000663E8 *D_000663E8;
extern struct Unk_D_000663F8 *D_000663F8;
extern s32 D_0006645C;
extern s32 D_0007E540;
extern s32 D_0007E584;
extern struct Unk_D_0007E590 *D_0007E590;
extern s32 D_0007E594;
extern s32 D_0007EAA8;
extern s32 D_0007EABC;
extern s32 D_0007EAC0;
extern s16 D_00081240;
extern s16 D_00081242;
extern s32 D_000CD718;
extern s32 D_000CD734;
extern s32 D_000CD738;
extern s32 D_000CD750;
extern s32 D_000CD754;
extern s32 func_00005C64;
extern M2C_UNK func_00006258;
extern s32 func_000064B0;

M2C_UNK InputDevice_PspHprm_Unlock(...);
M2C_UNK InputDevice_PspPad_Unlock(...);
M2C_UNK Job_Start(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *);
M2C_UNK _ZN3paf13PhApplication13StartDispListEv(void);
M2C_UNK _ZN3paf13PhApplication14FinishDispListEv(void);
M2C_UNK _ZN3paf4View12PageActivateEPv(s32, s32);
s32 _ZN3paf4View4FindEPKc(M2C_UNK *);
M2C_UNK _ZN3paf4View8PageOpenEPvii(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK _ZN3paf4View9PageCloseEPv(s32, s32);
s32 _ZN3paf6Module12SetInterfaceEiPv(s32, s32, s32);
s32 _ZN3paf7Surface4LockEv(void *);
M2C_UNK _ZN3paf7Surface6UnlockEv(void *);
s32 _ZN3paf8PhWidget9FindChildEPKci(s32, M2C_UNK *, M2C_UNK);
M2C_UNK _ZN3paf8PhWidgetD2Ev(M2C_UNK **);
s32 _ZN3paf9PhHandler11KillTimerCBEi(s32, s32);
M2C_UNK _ZN3paf9PhSRender8SetStyleEiRK4vec4(s32);
M2C_UNK _ZN3paf9PhSRender8SetStyleEif(s32);
M2C_UNK _ZN3paf9PhSRender8SetStyleEii(s32);
M2C_UNK _ZN3vsh10OptionMenu4HideEv(void);
M2C_UNK _ZN3vsh10OptionMenu4ShowEv(void);
M2C_UNK _ZN3vsh10OptionMenu5CloseEPN3paf4ViewEPKcS5_(s32, s32, M2C_UNK);
M2C_UNK _ZN3vsh13MessageDialog10HideDeleteEv(s32);
s32 _ZN3vsh14GetString_BackE6Locale(M2C_UNK);
s32 _ZN3vsh15GetString_EnterE6Locale(M2C_UNK);
M2C_UNK _ZN3vsh25ShowButtonNavigation_BackEb(M2C_UNK);
M2C_UNK _ZN3vsh26ShowButtonNavigation_EnterEb(M2C_UNK);
M2C_UNK _ZN3vsh30SetButtonNavigationString_BackEPKw(void *, s32);
M2C_UNK _ZN3vsh31SetButtonNavigationString_EnterEPKw(void *, s32);
void *_ZNK3paf4View12GetInterfaceEi(s32, M2C_UNK);
M2C_UNK _ZNK3paf9PhSRender8GetStyleEiR4vec4(s32);
M2C_UNK _ZNK3paf9PhSRender8GetStyleEiRb(s32);
M2C_UNK _ZNK3paf9PhSRender8GetStyleEiRf(s32);
M2C_UNK _ZNK3paf9PhSRender8GetStyleEiRi(s32);
M2C_UNK _ZdaPv(s32);
M2C_UNK _ZdlPv(M2C_UNK **);
s32 _Znaj(M2C_UNK);
s32 _Znwj(M2C_UNK);
s32 func_00000AD0(void);
s32 func_00000CF4(void);
s32 func_00000E24(void);
void func_00000E5C(void);
void func_00000F8C(void);
M2C_UNK func_00000FA8(...);
s32 func_00001980(s32);
s32 func_0000198C(s32);
void func_00001A70(void);
s32 func_00001AD0(s32, s32);
s32 func_00001E3C(s32, s32, s32);
void func_00001F84(void);
void func_00002844(s32 arg0);
void func_00002868(s32 *arg0, s32 arg1);
M2C_UNK func_00002888(...);
s32 func_000028A8(s32);
s32 func_00002DE0(s32);
void func_00002F58(void *arg0);
void func_00002F8C(void *arg0);
s32 func_000030BC(void *arg0, s32 *arg1);
s32 func_00003194(s32);
s32 func_00003238(s32);
void func_00003310(void *arg0);
void func_0000331C(void *arg0);
s32 func_00003684(s32);
void func_00003868(void);
void func_00003A6C(void);
s32 func_00003AB0(s32);
void func_00003D44(void *arg0);
void func_00003E88(struct Unk_func_00003E88_0 *arg0);
u8 func_00003E90(void *arg0);
void func_00003E94(struct Unk_func_00003E94_0 *arg0);
void func_00003E9C(void *arg0);
s32 func_00003EFC(s32);
void func_00003F70(void *arg0);
s32 func_00003F78(void *arg0);
u8 func_00004134(void *arg0);
u8 func_0000413C(void *arg0);
u8 func_00004144(void *arg0);
u8 func_0000414C(void *arg0);
M2C_UNK func_00004370(s32);
s32 func_00004380(void *arg0);
s32 func_0000480C(s32, s32, s32);
void func_00004C04(void);
u8 func_00004C5C(struct Unk_func_00004C5C_0 *arg0);
void func_00004D48(struct Unk_func_00004D48_0 *arg0);
s32 func_00004D50(struct Unk_func_00004D50_0 *arg0);
s32 func_00004D58(s32);
u8 func_00004F0C(struct Unk_func_00004F0C_0 *arg0);
u8 func_00004F14(struct Unk_func_00004F14_0 *arg0);
u8 func_00004F1C(struct Unk_func_00004F1C_0 *arg0);
u8 func_00004F24(struct Unk_func_00004F24_0 *arg0);
s32 func_00005224(struct Unk_func_00005224_0 *arg0);
void func_000052A8(void *arg0);
void func_000052C8(void *arg0);
void func_00005320(s32 arg0, s32 arg1);
void func_00005358(void);
s32 func_00005420(s32);
void func_000055AC(void *arg0, u32 arg1, s32 arg2);
s32 func_00005684(s32);
s32 func_000056C0(s32);
s32 func_00005730(s32 arg0, s32 arg1);
void func_00005758(struct Unk_func_00005758_0 *arg0);
void func_00005778(struct Unk_func_00005778_0 *arg0);
s32 func_00005800(void);
M2C_UNK func_00005918(M2C_UNK, M2C_UNK);
void func_00005954(void);
void func_00005C28(void);
s32 func_00005DA8(struct Unk_func_00005DA8_0 *arg0);
void func_00005E9C(s32 **arg0);
void func_000066E8(void);
s32 func_00006988(void);
s32 func_00006A14(s32);
void func_00006D50(s32 **arg0);
void func_00006D98(struct Unk_func_00006D98_0 *arg0);
void func_00006DE0(struct Unk_func_00006DE0_0 *arg0);
void func_00006E20(void);
void func_00006E28(struct Unk_func_00006E28_0 *arg0);
void func_00006ED4(s32 **arg0);
void func_00006F00(s32 **arg0);
void func_00007024(M2C_UNK **arg0);
void func_00007050(s32 **arg0);
void func_0000707C(s32 **arg0);
void func_000075F4(void);
void func_00007884(void);
void func_0000788C(struct Unk_func_0000788C_0 *arg0);
void func_000078C8(struct Unk_func_000078C8_0 *arg0);
void func_000078EC(void);
void func_00007908(void);
void func_00007924(struct Unk_func_00007924_0 *arg0);
s32 func_00007954(struct Unk_func_00007954_0 *arg0);
void func_00007B38(void);
void func_00008038(s32 **arg0);
void func_00008064(s32 **arg0);
void func_000080AC(void *arg0);
void func_000081A0(M2C_UNK **arg0);
void func_000081CC(s32 **arg0);
void func_000081F8(s32 **arg0);
void func_00008638(struct Unk_func_00008638_0 *arg0);
void func_0000873C(void);
void func_00008C7C(struct Unk_func_00008C7C_0 *arg0);
s32 func_00008CB4(struct Unk_func_00008CB4_0 *arg0);
void func_00009340(s32 **arg0);
void func_0000936C(s32 **arg0);
void func_000093AC(void);
s32 func_000093B4(void);
void func_000093BC(s32 **arg0);
void func_000093E4(s32 **arg0);
void func_00009514(struct Unk_func_00009514_0 *arg0);
void func_00009554(struct Unk_func_00009554_0 *arg0);
void func_00009594(s32 **arg0);
void func_00009A58(s32 **arg0);
void func_00009A68(s32 **arg0);
s32 func_00009A90(void);
s32 func_00009AA8(void);
s32 func_00009AB0(void);
s32 func_00009AB8(void);
s32 func_00009AC0(void);
s32 func_00009AC8(void);
void func_00009E70(s32 arg0, s32 arg1, s32 arg2);
void func_0000A7B4(void);
void func_0000A9AC(void *arg0, s32 arg1, s32 arg2);
s32 func_0000B178(s32);
void func_0000B6AC(struct Unk_func_0000B6AC_0 *arg0);
void func_0000B6DC(struct Unk_func_0000B6DC_0 *arg0);
void func_0000B70C(struct Unk_func_0000B70C_0 *arg0, s32 arg1, s32 arg2);
s32 func_0000B728(void *arg0);
void func_0000B890(void);
void func_0000BB58(void);
void func_0000BBA0(void);
void func_0000C94C(void);
void func_0000C994(void);
void func_0000C9D8(s32 **arg0);
void func_0000D2A4(void);
void func_0000D344(void *arg0, s32 arg1);
M2C_UNK func_0000D504(s32);
M2C_UNK func_0000D59C(s32);
void func_0000D638(s32 **arg0);
void func_0000D688(s32 **arg0);
M2C_UNK func_0000D698(s32);
void func_0000D69C(void *arg0);
s32 func_0000D6DC(s32, s32);
void func_0000D72C(void);
void func_0000D944(void *arg0, s32 arg1, s32 arg2);
s32 func_0000D9D8(s32, s32);
void func_0000DA28(void);
void func_0000DA48(s32 **arg0);
void func_0000DA58(s32 **arg0);
s32 func_0000DA80(void *arg0);
s32 func_0000DADC(void *arg0, s32 arg1);
s32 func_0000DB14(void);
void func_0000E700(struct Unk_func_0000E700_0 *arg0);
M2C_UNK func_0000E740(M2C_UNK, M2C_UNK);
void func_0000E790(void);
s32 func_0000E7B0(s32, s32);
s32 func_0000EB04(s32, s32, s32, s32, s32);
void func_0000EB18(void *arg0);
s32 func_0000EC84(s32);
void func_0000F1FC(struct Unk_func_0000F1FC_0 *arg0);
void func_0000F258(void *arg0);
void func_0000F268(s32 **arg0);
void func_0000F280_v150(void *arg0);
s32 func_0000F290(s32);
s32 func_0000F2CC(void);
s32 func_0000F384(void);
s32 func_0000F390(s32 arg0);
void func_0000F598(M2C_UNK **arg0);
void func_0000F5C4(s32 **arg0);
void func_0000F5F0(s32 **arg0);
s32 func_0000FBDC(s32, s32);
void func_0000FDD4(void);
s32 func_0000FFF0(s32, s32);
s32 func_00010264(void **arg0);
s32 func_000102C0(void **arg0);
s32 func_00010380(void **arg0, s32 arg1);
s32 func_000103E0(void **arg0, s32 arg1);
s32 func_000104A4(void **arg0, s32 arg1, s32 arg2);
s32 func_00010518(void **arg0, s32 arg1, s32 arg2);
s32 func_0001058C(void **arg0);
void func_0001068C(s32 **arg0);
s32 func_00010694(void **arg0, s32 arg1, s32 arg2);
void func_000106DC(s32 **arg0);
s32 func_00010708(void **arg0, s32 arg1, s32 arg2);
s32 func_0001077C(void **arg0, s32 arg1, s32 arg2);
s32 func_000107F0(void **arg0, s32 arg1);
s32 func_00010854(void **arg0, s32 arg1);
s32 func_000108B8(void **arg0, s32 arg1);
s32 func_0001091C(void **arg0, s32 arg1);
s32 func_00010980(void **arg0, s32 arg1);
s32 func_0001121C(s32);
s32 func_0001139C(s32);
M2C_UNK func_000114B8(s32, s32);
s32 func_0001155C(s32, s32);
M2C_UNK func_00011594(M2C_UNK, M2C_UNK);
void func_00011630(void);
void func_00011650(void);
s32 func_00011658(s32, s32);
void func_00011670(M2C_UNK **arg0);
void func_00011680(void);
s32 func_000116A8(struct Unk_func_000116A8_0 *arg0);
s32 func_00011704(struct Unk_func_00011704_0 *arg0, s32 arg1);
void func_00011710(M2C_UNK **arg0);
void func_00011720(s32 **arg0);
s32 func_00011774(void);
s32 func_000117C4(s32, s32, s32);
s32 func_0001182C(void);
s32 func_00011838(s32 arg0);
void func_00011970(M2C_UNK **arg0);
s32 func_000119FC(void);
void func_00011B18(M2C_UNK **arg0);
s32 func_00011B54(void);
s32 func_00011C00(void);
s32 func_00011C08(void);
s32 func_00011C10(void);
s32 func_00011C18(void);
s32 func_00011C20(s32, s32);
s32 func_00011C68(s32, s32);
s32 func_00011CB8(s32);
s32 func_00011D88(s32, s32);
s32 func_00011E2C(s32 arg0);
s32 func_00011E4C(s32 arg0);
s32 func_00011EA0(s32 arg0, s32 arg1);
void func_00011EE0(s32 arg0);
s32 func_00011EFC(s32);
s32 func_00011F1C(s32);
void func_00011F3C(s32 arg0);
s32 func_00011F58(s32, s32);
s32 func_00012000(s32, s32);
M2C_UNK func_00012128(M2C_UNK, M2C_UNK);
s32 func_00012134(s32, s32);
void func_00012178(void);
s32 func_0001217C(void);
s32 func_00012184(void *arg0, s32 *arg1);
s32 func_000121C4(void);
s32 func_000121CC(void);
s32 func_00012274(s32, s32);
s32 func_00012288(s32, s32, s32);
s32 func_0001234C(void);
s32 func_00012380(s32, s32);
s32 func_00012524(void);
s32 func_0001252C(void);
s32 func_00012534(void);
s32 func_0001253C(void);
s32 func_00012544(void);
s32 func_0001254C(void);
u8 func_000125EC(void *arg0);
s32 func_000125F4(s32, s32);
s32 func_000126E8(void);
M2C_UNK func_00012A4C(s32);
s32 func_00012AB8(void);
s32 func_00012AC0(void);
s32 func_00012AC8(void);
s32 func_00012AD0(void);
void func_00012B48(s32 arg0, s32 arg1);
void func_00012C4C(s32 arg0);
M2C_UNK func_00012C54(s32);
void func_00012C68(s32 arg0);
void func_00012CA4(s32 arg0, s32 arg1);
void func_00012CC0(s32 arg0, s32 arg1);
void func_00012CFC(s32 arg0, s32 arg1, s32 arg2);
void func_00012D18(s32 arg0, s32 arg1, s32 arg2);
void func_00012D34(s32 arg0);
void func_00012DBC(s32 arg0, s32 arg1, s32 arg2);
void func_00012DD8(s32 arg0, s32 arg1, s32 arg2);
void func_00012DF4(s32 arg0, s32 arg1, s32 arg2);
void func_00012E10(s32 arg0, s32 arg1);
void func_00012E2C(s32 arg0, s32 arg1);
void func_00012E48(s32 arg0, s32 arg1);
void func_00012E64(s32 arg0, s32 arg1);
void func_00012E80(s32 arg0, s32 arg1);
s32 func_00012F14(s32);
void func_00012F84(s32 arg0);
void func_00012FA0(s32 arg0);
void func_00012FDC(s32 arg0, s32 arg1);
void func_00012FF8(s32 arg0, s32 arg1);
void func_00013034(s32 arg0, s32 arg1, s32 arg2);
void func_00013050(s32 arg0);
s32 func_000130A0(s32);
void func_00013164(s32 arg0, s32 arg1);
void func_00013180(s32 arg0, s32 arg1);
void func_0001319C(s32 arg0, s32 arg1);
void func_000131B8(s32 arg0, s32 arg1);
void func_000131D4(s32 arg0);
void func_000131F0(s32 arg0);
void func_0001320C(s32 arg0);
void func_00013228(s32 arg0, s32 arg1);
void func_00013244(s32 arg0);
void func_00013260(s32 arg0);
void func_0001327C(s32 arg0);
void func_00013298(s32 arg0);
s32 func_000132A4(s32, s32);
void func_000132B4(s32 arg0);
void func_000132D0(s32 arg0, s32 arg1);
void func_000132EC(s32 arg0);
void func_00013308(s32 arg0, s32 arg1);
void func_00013324(s32 arg0);
void func_00013340(s32 arg0, s32 arg1);
void func_00013378(s32 arg0, s32 *arg1);
s32 func_000133C8(s32, s32);
void func_000133CC(s32 arg0);
void func_000133E8(s32 arg0, s32 arg1, s32 arg2);
void func_00013404(s32 arg0);
void func_0001343C(s32 arg0);
void func_00013458(s32 arg0);
void func_00013520(s32 arg0);
void func_0001353C(s32 arg0);
void func_00013558(s32 arg0);
void func_00013574(s32 arg0, s32 arg1);
void func_00013590(s32 arg0);
s32 func_00013598(s32, s32, s32);
void func_000135AC(s32 arg0);
void func_000135C8(s32 arg0, s32 arg1);
void func_00013600(s32 **arg0);
void func_00013638(void);
s32 func_00013640(void);
s32 func_00013648(void);
s32 func_00013650(void);
s32 func_00013658(void);
s32 func_00013660(void);
s32 func_00013668(void);
s32 func_00013670(void);
s32 func_00013678(void);
s32 func_00013680(void);
s32 func_00013688(void);
s32 func_00013690(void);
s32 func_00013698(void);
s32 func_000136A0(void);
s32 func_000136A8(void);
s32 func_000136B0(void);
s32 func_000136B8(void);
s32 func_000136C0(void);
s32 func_000136C8(void);
s32 func_000136D0(void);
s32 func_000136D8(void);
s32 func_000136E0(void);
s32 func_000136E8(void);
s32 func_000136F0(void);
s32 func_000136F8(void);
s32 func_0001377C(void);
s32 func_00013784(void);
s32 func_000137A8(void);
s32 func_000137B0(void);
s32 func_000137B8(void);
s32 func_00013834(void);
s32 func_0001383C(void);
void func_00013844(s32 **arg0);
s32 func_0001387C(void);
s32 func_00013884(void *arg0);
M2C_UNK func_000138A0(s32);
void func_000138A8(s32 **arg0);
s32 func_000138E0(s32 arg0, M2C_UNK **arg1);
s32 func_0001390C(void);
s32 func_00013B54(struct Unk_vt_func_00013B54_arg0 **arg0);
s32 func_00013BB0(struct Unk_vt_func_00013BB0_arg0 **arg0);
s32 func_00013C70(struct Unk_vt_func_00013C70_arg0 **arg0, M2C_UNK arg1);
s32 func_00013CD4(struct Unk_vt_func_00013CD4_arg0 **arg0, M2C_UNK arg1);
s32 func_00013D9C(struct Unk_vt_func_00013D9C_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00013E04(void *arg0, s32 arg1);
s32 func_00013E10(struct Unk_vt_func_00013E10_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00013E70(void);
s32 func_00013E84(struct Unk_vt_func_00013E84_arg0 **arg0);
s32 func_00013EB0(s32, s32);
void func_00013EE8(void);
s32 func_00013F6C(s32, s32);
s32 func_00013F8C(struct Unk_vt_func_00013F8C_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00013F90(void);
s32 func_00013F98(void);
s32 func_00013F98_v150(s32, s32);
s32 func_00013FA0(void);
s32 func_00013FA8(void);
s32 func_00013FB0(s32);
s32 func_00014000(struct Unk_vt_func_00014000_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00014074(struct Unk_vt_func_00014074_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00014094(s32, s32);
s32 func_000140E8(struct Unk_vt_func_000140E8_arg0 **arg0, M2C_UNK arg1);
s32 func_0001414C(struct Unk_vt_func_0001414C_arg0 **arg0, M2C_UNK arg1);
s32 func_000141B0(struct Unk_vt_func_000141B0_arg0 **arg0, M2C_UNK arg1);
s32 func_00014214(struct Unk_vt_func_00014214_arg0 **arg0, M2C_UNK arg1);
s32 func_00014270(struct Unk_vt_func_00014270_arg0 **arg0, M2C_UNK arg1);
void func_00014570(s32 **arg0);
s32 func_00014608(s32 arg0, s32 arg1);
void func_00014D9C(s32 arg0);
void func_00014DB8(s32 arg0);
void func_00014DF4(s32 arg0, s32 arg1);
void func_00014E10(s32 arg0, s32 arg1);
void func_00014E4C(s32 arg0, s32 arg1, s32 arg2);
void func_00014E68(s32 arg0, s32 arg1, s32 arg2);
void func_00014E84(s32 arg0);
void func_00014F0C(s32 arg0, s32 arg1, s32 arg2);
void func_00014F28(s32 arg0, s32 arg1, s32 arg2);
void func_00014F44(s32 arg0, s32 arg1, s32 arg2);
void func_00014F60(s32 arg0, s32 arg1);
void func_00014F7C(s32 arg0, s32 arg1);
void func_00014F98(s32 arg0, s32 arg1);
void func_00014FB4(s32 arg0, s32 arg1);
void func_00014FD0(s32 arg0, s32 arg1);
M2C_UNK func_0001503C(s32);
void func_000150D4(s32 arg0);
void func_000150F0(s32 arg0);
void func_0001512C(s32 arg0, s32 arg1);
void func_00015148(s32 arg0, s32 arg1);
void func_00015184(s32 arg0, s32 arg1, s32 arg2);
void func_000151A0(s32 arg0);
M2C_UNK func_000151D4(s32);
void func_000152B4(s32 arg0, s32 arg1);
void func_000152D0(s32 arg0, s32 arg1);
void func_000152EC(s32 arg0, s32 arg1);
void func_00015308(s32 arg0, s32 arg1);
void func_00015324(s32 arg0);
void func_00015340(s32 arg0);
void func_0001535C(s32 arg0);
void func_00015378(s32 arg0, s32 arg1);
void func_00015394(s32 arg0, s32 arg1);
void func_000153B0(s32 arg0);
void func_000153CC(s32 arg0);
void func_000153E8(s32 arg0);
void func_00015404(s32 arg0);
void func_00015420(s32 arg0, s32 arg1);
void func_0001543C(s32 arg0);
M2C_UNK func_00015450(s32);
void func_00015458(s32 arg0, s32 arg1);
void func_00015474(s32 arg0, s32 arg1);
void func_00015490(s32 arg0, s32 arg1);
void func_000154C8(s32 arg0, s32 *arg1);
void func_0001551C(s32 arg0);
void func_00015538(s32 arg0, s32 arg1, s32 arg2);
void func_00015554(s32 arg0);
void func_0001558C(s32 arg0);
void func_000155A8(s32 arg0);
M2C_UNK func_000155D4(s32);
void func_00015670(s32 arg0);
void func_0001568C(s32 arg0);
void func_000156A8(s32 arg0);
void func_000156C4(s32 arg0, s32 arg1);
void func_000156E0(s32 arg0);
void func_000156FC(s32 arg0);
void func_00015718(s32 arg0, s32 arg1);
s32 func_00015790(void);
M2C_UNK func_00015830(s32);
s32 func_0001598C(void);
s32 func_00015A80(void);
M2C_UNK func_00015CE8(s32);
s32 func_00015E20(void);
s32 func_00015EE8(void);
s32 func_00015EF0(void);
s32 func_00015EF8(void);
s32 func_00015F00(s32 arg0);
M2C_UNK func_00015F20(s32);
M2C_UNK func_00016038(s32);
s32 func_00016218(void **, M2C_UNK);
M2C_UNK func_0001626C(s32);
s32 func_00016300(s32 arg0);
s32 func_00016320(s32 arg0);
s32 func_00016340(struct Unk_func_00016340_0 *arg0);
M2C_UNK func_0001636C(s32);
M2C_UNK func_000163A0(s32);
void func_000163D0(struct Unk_func_000163D0_0 *arg0, M2C_UNK arg1);
s32 func_000163EC(s32, s32);
void func_00016438(s32 arg0);
void func_0001644C(void);
void func_00016454(s32 arg0);
void func_00016470(s32 arg0);
void func_0001648C(s32 arg0);
M2C_UNK func_000164A8(s32);
M2C_UNK func_00016574(s32);
M2C_UNK func_000165A4(s32);
M2C_UNK func_000166AC(s32);
M2C_UNK func_00016724(s32);
s32 func_0001676C(void);
s32 func_00016774(struct Unk_func_00016774_0 *arg0, s32 *arg1);
s32 func_000167B4(void);
s32 func_000167BC(void);
M2C_UNK func_000167C4(s32);
s32 func_00016878(void);
M2C_UNK func_00016880(s32);
s32 func_000168F4(void);
M2C_UNK func_000168FC(s32);
M2C_UNK func_000169B8(s32);
s32 func_00016ACC(void);
s32 func_00016AD4(void);
s32 func_00016ADC(void);
M2C_UNK func_00016AE4(s32);
M2C_UNK func_00016B7C(s32);
M2C_UNK func_00016C14(s32);
M2C_UNK func_00016D1C(s32);
M2C_UNK func_00016D60(s32);
u8 func_00016DB4(struct Unk_func_00016DB4_0 *arg0);
M2C_UNK func_00016DBC(s32);
void func_00016E14(void *arg0);
M2C_UNK func_00016E78(s32);
M2C_UNK func_00016F20(s32);
void func_00016F9C(s32 arg0);
M2C_UNK func_00017264(s32);
s32 func_000175C8(void);
s32 func_000175D0(void);
s32 func_000175D8(void);
s32 func_000175E0(void);
void func_000176B8(struct Unk_func_000176B8_0 *arg0);
void func_000176E0(struct Unk_func_000176E0_0 *arg0);
void func_00017708(struct Unk_func_00017708_0 *arg0);
void func_00017730(struct Unk_func_00017730_0 *arg0, s32 arg1);
void func_00017758(struct Unk_func_00017758_0 *arg0);
void func_00017808(s32 arg0);
void func_00017824(s32 arg0);
void func_00017840(s32 arg0);
void func_0001785C(s32 arg0);
void func_00017878(s32 arg0);
void func_00017894(s32 arg0);
void func_000178B0(s32 arg0);
void func_000179B4(s32 arg0);
void func_000179D0(s32 arg0);
void func_000179EC(s32 arg0, s32 arg1);
void func_00017A0C(s32 arg0, s32 arg1);
void func_00017A28(s32 arg0, s32 arg1);
void func_00017A64(s32 arg0, s32 arg1, s32 arg2);
void func_00017A80(s32 arg0, s32 arg1, s32 arg2);
void func_00017A9C(s32 arg0);
void func_00017B24(s32 arg0, s32 arg1, s32 arg2);
void func_00017B40(s32 arg0, s32 arg1, s32 arg2);
void func_00017B5C(s32 arg0, s32 arg1, s32 arg2);
void func_00017B78(s32 arg0, s32 arg1);
void func_00017B94(s32 arg0, s32 arg1);
void func_00017BB0(s32 arg0, s32 arg1);
void func_00017BCC(s32 arg0, s32 arg1);
void func_00017CD0(s32 arg0);
void func_00017CEC(s32 arg0);
void func_00017D28(s32 arg0);
void func_00017D44(s32 arg0);
void func_00017D80(s32 arg0);
void func_00017D9C(s32 arg0);
void func_00017E94(s32 arg0);
void func_00017EB0(s32 arg0);
void func_00017ECC(s32 arg0);
void func_00017EE8(s32 arg0);
void func_00017F04(s32 arg0);
void func_00017F20(s32 arg0);
void func_00017F3C(s32 arg0);
void func_00017F58(s32 arg0);
void func_00017F74(s32 arg0);
void func_00017F90(s32 arg0, s32 arg1);
void func_00017FAC(s32 arg0);
void func_00017FC8(s32 arg0);
void func_00017FE4(s32 arg0);
void func_00018000(s32 arg0);
void func_0001801C(s32 arg0);
void func_00018038(s32 arg0);
void func_00018054(s32 arg0);
void func_00018070(s32 arg0);
void func_0001808C(s32 arg0);
void func_000180C4(s32 arg0, s32 *arg1);
void func_00018118(s32 arg0);
void func_00018150(s32 arg0);
void func_00018188(s32 arg0);
void func_000181A4(s32 arg0);
void func_00018218(s32 arg0);
void func_00018234(s32 arg0);
void func_00018250(s32 arg0);
void func_0001826C(s32 arg0);
void func_00018288(s32 arg0);
void func_00018294(void);
void func_000182C0(s32 arg0);
void func_000182DC(s32 arg0);
void func_000182F8(s32 arg0);
void func_00018314(s32 arg0);
void func_00018330(s32 arg0);
void func_0001839C(s32 arg0);
void func_000183B8(s32 arg0);
void func_000183D4(s32 arg0);
void func_00018410(s32 arg0);
void func_0001842C(M2C_UNK **arg0);
void func_0001843C(s32 **arg0);
void func_00018464(void);
s32 func_0001846C(void);
s32 func_00018474(void);
s32 func_0001847C(void);
s32 func_00018484(void);
s32 func_0001848C(void);
s32 func_00018494(void);
s32 func_0001849C(void);
s32 func_000184A4(void);
s32 func_000184AC(void);
s32 func_000184B4(void);
s32 func_000184BC(void);
s32 func_000184C4(void);
s32 func_000184CC(void);
s32 func_000184D4(void);
s32 func_000184DC(void);
s32 func_000184E4(void);
s32 func_000184EC(void);
s32 func_000184F4(void);
s32 func_000184FC(void);
s32 func_00018504(void);
s32 func_0001850C(void);
s32 func_00018514(void);
s32 func_0001851C(void);
s32 func_00018524(void);
s32 func_0001852C(void);
s32 func_00018534(void);
s32 func_0001853C(void);
s32 func_00018544(void);
s32 func_0001854C(void);
s32 func_000185D8(void);
s32 func_000185E0(void);
s32 func_00018604(void);
s32 func_0001860C(void);
s32 func_00018614(void);
s32 func_00018690(void);
s32 func_00018698(void);
s32 func_000186A0(void);
s32 func_000186A8(void);
s32 func_000186B0(void);
void func_000186B8(M2C_UNK **arg0);
void func_000186C8(s32 **arg0);
s32 func_000186F0(void);
s32 func_000186F8(struct Unk_func_000186F8_0 *arg0);
void func_00018700(s32 arg0);
void func_0001871C(M2C_UNK **arg0);
void func_0001872C(s32 **arg0);
s32 func_00018794(void);
void func_000189E4(void *arg0);
void func_00018A14(void *arg0, s32 arg1);
M2C_UNK func_00018CC4(...);
void func_00018D38(void);
M2C_UNK func_00018D54(...);
void func_00018DB0(void);
s32 func_00018ECC(void);
s32 func_00018ED4(void);
s32 func_00018EDC(void);
s32 func_00018EE4(void);
s32 func_00018EEC(void);
M2C_UNK func_00018EF4(void *);
void func_00019100(struct Unk_func_00019100_0 *arg0);
void func_0001932C(s32 **arg0);
void func_00019358(s32 **arg0);
void func_00019404(void *arg0);
s32 func_00019444(s32, s32, s32);
void func_000194F0(M2C_UNK **arg0);
void func_0001951C(s32 **arg0);
void func_00019548(s32 **arg0);
s32 func_00019588(s32 arg0, s32 arg1);
s32 func_00019914(s32 *arg0);
void func_00019D40(void *arg0, s32 arg1, s32 arg2);
void func_00019D5C(s32 **arg0);
void func_00019D74(s32 **arg0);
void func_00019D8C(s32 **arg0);
void *func_00019DB8(s32 arg0, s32 arg1);
s32 func_00019E2C(void);
void func_0001A17C(void);
void func_0001A184(void);
void func_0001A1C4(void *arg0);
void func_0001A504(struct Unk_func_0001A504_0 *arg0);
M2C_UNK func_0001A888(void *, s32);
void func_0001AA28(void *arg0);
s32 func_0001AD1C(void);
M2C_UNK func_0001B3D8(M2C_UNK, M2C_UNK);
void func_0001B484(void);
void func_0001B4A4(void);
void func_0001B834(void *arg0, void *arg1);
s32 func_0001BA0C(struct Unk_func_0001BA0C_0 *arg0);
void func_0001BA50(void);
void func_0001BA68(s32 **arg0);
void func_0001BA94(s32 **arg0);
void func_0001BED0(struct Unk_func_0001BED0_0 *arg0);
s32 func_0001BF00(s32);
s32 func_0001BFF8(void);
void func_0001C020(s32 **arg0);
void func_0001C04C(s32 **arg0);
s32 func_0001C340(s32 arg0, s32 *arg1, s32 arg2);
void func_0001C3F4(void);
void func_0001C418(s32 **arg0);
void func_0001C428(s32 **arg0);
void func_0001C450(void *arg0);
void func_0001C46C(s32 **arg0);
void func_0001C4A0(void *arg0, s32 arg1);
void func_0001C4C8(s32 arg0);
void func_0001C4E4(s32 arg0);
void func_0001C500(s32 arg0);
void func_0001C640(void **arg0);
void func_0001C664(void **arg0);
void func_0001C688(void **arg0);
void func_0001C6D0(void **arg0);
void func_0001C6F4(void **arg0);
void func_0001C718(void **arg0);
void func_0001C73C(s32 arg0);
void func_0001C758(s32 arg0);
void func_0001C774(s32 arg0);
void func_0001C790(s32 arg0);
void func_0001C8AC(void);
s32 func_0001C8B4(void);
s32 func_0001C8BC(void);
s32 func_0001C8C4(void);
s32 func_0001C8CC(void);
s32 func_0001C8D4(void);
s32 func_0001C8DC(void);
s32 func_0001C8E4(void);
void func_0001C8EC(void);
s32 func_0001CDA0(s32, s32);
void func_0001CE70(s32 arg0);
void func_0001D0D4(void);
void func_0001D144(struct Unk_func_0001D144_0 *arg0, s32 arg1);
s32 func_0001D1BC(...);
void func_0001D340(s32 arg0, s32 arg1, s32 arg2);
void func_0001D368(s32 arg0, s32 arg1);
void func_0001D384(void);
M2C_UNK func_0001D38C(...);
void func_0001D38C_v100(M2C_UNK **arg0);
s32 func_0001D800(void *arg0);
s32 func_0001D820(void);
M2C_UNK func_0001D8E4(s32);
void func_0001DB9C(void);
void func_0001DBD4(struct Unk_func_0001DBD4_0 *arg0);
s32 func_0001DBF4(s32 *arg0, s32 arg1);
void func_0001DC04(struct Unk_func_0001DC04_0 *arg0, s32 arg1);
void func_0001E48C(void);
void func_0001E4AC(void);
void func_0001E844(void *arg0, s32 arg1);
s32 func_0001E8B8(struct Unk_func_0001E8B8_0 *arg0);
void func_0001EA58(struct Unk_func_0001EA58_0 *arg0);
void func_0001EF04(void);
void func_0001EF24(void);
s32 func_0001EF68(s32 *arg0);
s32 func_0001EFE8(s32 *arg0);
s32 func_0001F080(void **arg0);
void func_0001F130(void *arg0);
void func_0001F644(s32 arg0);
void func_0001F650(void);
void func_0001F878(struct Unk_func_0001F878_0 *arg0, s32 arg1, s32 arg2);
void func_0001F894(M2C_UNK **arg0);
void func_0001F8AC(M2C_UNK **arg0);
void *func_0001F8F0(s32 arg0, s32 arg1);
s32 func_0001F964(void);
void func_0001FA14(s32 **arg0);
s32 func_0001FC0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0001FCB4(void);
void func_0001FCBC(void);
void func_0001FCC4(struct Unk_func_0001FCC4_0 *arg0);
s32 func_0001FFBC(void *arg0);
s32 func_0001FFD8(void *arg0);
s32 func_0002011C(void *arg0, s32 *arg1);
void func_00020220(s32 *arg0, s32 arg1);
M2C_UNK func_000202B8(...);
s32 func_00020300(void *arg0, s32 arg1);
M2C_UNK func_00020360(s32);
M2C_UNK func_000203F4(s32);
void func_000205C0(struct Unk_func_000205C0_0 *arg0);
s32 func_000208B4(void);
void func_0002098C(struct Unk_func_0002098C_0 *arg0, s32 arg1);
void func_000209B4(s32 arg0);
void func_000209D0(s32 arg0);
void func_000209EC(s32 arg0);
s32 func_00020A6C(s32);
s32 func_00020AF4(void *arg0, s32 arg1);
void func_00020B2C(struct Unk_vt_func_00020B2C_arg0 **arg0);
void func_00020B50(struct Unk_vt_func_00020B50_arg0 **arg0);
s32 func_00020B58(void *arg0, s32 arg1);
s32 func_00020B64(void *arg0, s32 arg1);
s32 func_00020B70(s32, s32, s32, s32);
void func_00020B74(struct Unk_vt_func_00020B74_arg0 **arg0);
void func_00020BBC(struct Unk_vt_func_00020BBC_arg0 **arg0);
void func_00020BE0(struct Unk_vt_func_00020BE0_arg0 **arg0);
void func_00020C04(struct Unk_vt_func_00020C04_arg0 **arg0);
void func_00020C28(s32 arg0);
void func_00020C44(s32 arg0);
void func_00020C60(s32 arg0);
void func_00020C7C(s32 arg0);
s32 func_00020D98(void);
s32 func_00020DA0(void);
s32 func_00020DA8(void);
s32 func_00020DB0(void);
s32 func_00020DB8(void);
s32 func_00020DC0(void);
void func_00020F2C(M2C_UNK **arg0);
void func_00020F64(struct Unk_func_00020F64_0 *arg0);
void func_00020FB4(void);
s32 func_00020FBC(void);
void func_00020FC4(void);
void func_00021514(s32 arg0);
void func_00021530(s32 arg0);
void func_0002154C(s32 arg0);
s32 func_00021820(s32);
s32 func_000218A8(s32);
void func_00021938(s32 arg0);
void func_00021944(void);
s32 func_00021ADC(s32, s32, s32);
void func_00021B48(struct Unk_func_00021B48_0 *arg0, struct Unk_func_00021B48_1 *arg1);
s32 func_00021B64(void *arg0);
s32 func_00021BF0(void *arg0);
s32 func_00021D98(void *arg0);
s32 func_00021DC0(s32, s32);
void func_00022174(s32 arg0);
s32 func_00022190(s32);
s32 func_00022218(s32);
void func_0002228C(s32 arg0);
void func_000222A8(s32 arg0);
void func_000222C4(s32 arg0, s32 arg1, s32 arg2);
s32 func_000224A4(s32);
s32 func_00022518(s32);
void func_00022594(s32 arg0);
void func_000225A0(void);
void func_00022740(void);
s32 func_00022760(s32, s32, s32);
s32 func_0002289C(void *arg0);
s32 func_00022B20(s32, s32);
void func_00022C0C(s32 arg0);
void func_00022C28(s32 arg0);
void func_00022C44(s32 arg0, s32 arg1, s32 arg2);
s32 func_00022F60(s32);
s32 func_00023020(s32);
void func_000230F4(void);
void func_00023268(struct Unk_func_00023268_0 *arg0, struct Unk_func_00023268_1 *arg1);
s32 func_00023318(s32, s32, s32, s32);
s32 func_0002346C(void *arg0);
s32 func_00023528(void *arg0, s32 arg1);
s32 func_00023534(void *arg0, s32 arg1);
s32 func_0002359C(void *arg0, s32 arg1);
void func_0002386C(s32 arg0);
void func_00023888(s32 arg0);
void func_000238A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00023BBC(s32);
s32 func_00023C40(s32);
void func_00023CCC(s32 arg0);
void func_00023CD8(void);
void func_00023EAC(void);
s32 func_0002415C(s32, s32, s32, s32);
s32 func_00024268(void *arg0);
s32 func_00024324(void *arg0, s32 arg1);
s32 func_00024460(s32);
s32 func_0002446C(s32);
void func_000244E0(void);
s32 func_000244E8(s32, s32, s32);
s32 func_00024508_v150(s32);
s32 func_000245A8(s32);
void func_000245B8(void *arg0);
void func_000246F0(void);
void func_00024758(void);
void func_00024760(s32 arg0, M2C_UNK arg1, s32 arg2);
void func_00024788(s32 arg0, M2C_UNK arg1);
void func_000247AC(M2C_UNK **arg0);
void func_000247BC(s32 **arg0);
void func_000247CC(s32 **arg0);
M2C_UNK func_00024940(M2C_UNK, s32, s32);
M2C_UNK func_0002499C(M2C_UNK, s32);
void func_000249F4(s32 arg0);
void func_00024A10(s32 arg0);
void func_00024A2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00024A84(void);
s32 func_00024A8C(s32, s32, s32);
s32 func_00024B68(s32);
s32 func_00024C20(struct Unk_func_00024C20_0 *arg0);
s32 func_00024C40(void);
void func_00024C68(struct Unk_func_00024C68_0 *arg0);
void func_00024CA0(struct Unk_func_00024CA0_0 *arg0);
void func_00024CD8(struct Unk_func_00024CD8_0 *arg0);
void func_00024D10(struct Unk_func_00024D10_0 *arg0);
void func_00024D48(struct Unk_func_00024D48_0 *arg0);
s32 func_00024D88(s32);
void func_00024D94(struct Unk_func_00024D94_0 *arg0);
s32 func_00024E38(s32);
void func_00024E58(void *arg0);
void func_00024E98(void *arg0);
void func_00024ED8(void *arg0);
void func_00024EF0(s32 arg0);
void func_00024EFC(void);
void func_00024F18(void *arg0);
M2C_UNK func_0002506C(void *, M2C_UNK);
s32 func_0002508C(struct Unk_func_0002508C_0 *arg0, M2C_UNK arg1);
M2C_UNK func_000250D4(s32);
M2C_UNK func_000250F0(s32);
s32 func_00025134(s32);
s32 func_0002515C_v100(void *arg0);
s32 func_00025184(s32);
s32 func_000251D4(s32);
s32 func_00025218(void *arg0, s32 arg1);
void func_00025238(void);
s32 func_00025240(s32 *arg0);
void func_00025280(void *arg0);
s32 func_0002528C(s32 *arg0, M2C_UNK arg1);
s32 func_000252D4(void);
s32 func_000252FC(void);
s32 func_00025324(s32, s32);
void func_00025478(s32 arg0);
void func_00025494(s32 arg0);
s32 func_0002591C(s32);
s32 func_00025978(s32);
M2C_UNK func_00025A64(M2C_UNK, M2C_UNK);
void func_00025AE0(void);
void func_00025B00(void);
void func_00025D0C(struct Unk_func_00025D0C_0 *arg0);
void func_00025D24(s32 **arg0);
void func_00025D34(s32 **arg0);
s32 func_00025D5C(s32, s32);
void func_00025DA4(s32 arg0);
void func_00025DC0(s32 arg0);
void func_00026348(s32 arg0);
void func_00026364(s32 arg0);
s32 func_00026384(s32 arg0);
s32 *func_000263B0(s32 arg0);
M2C_UNK func_000263E8(s32);
M2C_UNK func_000264EC(M2C_UNK, M2C_UNK);
void func_00026568(void);
void func_00026588(void);
s32 func_000266AC(void *arg0);
s32 func_000266CC(void *arg0);
s32 func_000266EC(void *arg0);
void func_00026794(struct Unk_func_00026794_0 *arg0);
void func_000267AC(s32 **arg0);
void func_000267BC(s32 **arg0);
s32 func_000267C8(s32);
s32 func_000267E4(s32, s32, s32, s32);
s32 func_00026950(void *arg0, s32 *arg1);
s32 func_00026960(void *arg0);
void func_00026C18(u32 arg0);
M2C_UNK func_00026C4C(s32);
M2C_UNK func_00026D1C(s32);
void func_00026DF4(s32 arg0);
void func_00026E00(void);
s32 func_00026E18(s32 *arg0);
M2C_UNK func_0002701C(s32);
s32 func_000274B4(struct Unk_func_000274B4_0 *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_000275CC(s32);
s32 func_00027A40(s32, s32, s32, s32, s32);
s32 func_00027B2C(struct Unk_func_00027B2C_0 *arg0);
s32 func_00027B48(struct Unk_func_00027B48_0 *arg0);
void func_00027CC0(void *arg0);
M2C_UNK func_00027D40(void *, M2C_UNK);
s32 func_00027F60(void *arg0);
s32 func_0002801C(void *arg0, s32 arg1);
void func_00028318(s32 arg0);
void func_00028334(s32 arg0);
M2C_UNK func_0002834C(s32);
s32 func_000283D4(struct Unk_func_000283D4_0 *arg0, s32 arg1);
s32 func_00028438(struct Unk_func_00028438_0 *arg0, s32 arg1);
s32 func_00028444(struct Unk_func_00028444_0 *arg0, s32 arg1);
s32 func_00028498(void *arg0, s32 arg1);
s32 func_0002852C(void *arg0);
void func_00028678(void);
s32 func_00028784(void *arg0);
s32 func_000287A4(void *arg0, s32 arg1, s32 arg2);
void func_000287C4(void *arg0, s32 arg1, s32 arg2);
s32 func_00028890(s32);
s32 func_00028B6C(s32 arg0);
s32 func_00028C18(void *arg0);
s32 func_00028C3C(void *arg0);
void func_00028D38(void *arg0);
s32 func_00028D54(void *arg0);
void func_00028E0C(s32 arg0);
void func_00028E28(s32 arg0);
void func_00028E44(s32 arg0);
void func_00028E60(s32 arg0);
void func_00028E7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_00028EC0(void *, s32, M2C_UNK, M2C_UNK);
s32 func_00028FF8(void);
s32 func_00029000(void);
s32 func_00029008(void);
s32 func_00029010(void);
s32 func_00029018(void);
s32 func_00029020(void);
s32 func_00029028(void);
s32 func_00029030(void);
s32 func_00029038(void);
s32 func_00029040(void);
s32 func_00029048(void);
s32 func_00029050(void);
s32 func_00029058(void);
s32 func_00029060(void);
s32 func_00029068(void);
s32 func_00029070(void);
s32 func_00029078(void);
s32 func_00029080(void);
s32 func_00029088(void);
s32 func_00029090(void);
s32 func_00029098(void);
s32 func_000290A0(void);
s32 func_000290A8(void);
s32 func_000290B0(void);
s32 func_0002952C(void *arg0);
s32 func_000296D0(s32);
void func_00029CE0(s32 arg0);
void func_00029CFC(s32 arg0);
void func_00029D18(s32 arg0);
s32 func_00029D80(s32, s32, s32);
M2C_UNK func_0002A060(s32);
M2C_UNK func_0002A0FC(s32);
void func_0002A1A0(s32 arg0);
void func_0002A1AC(struct Unk_func_0002A1AC_0 *arg0);
M2C_UNK func_0002A520(s32);
void *func_0002A704(void *arg0);
s32 func_0002A73C(void *arg0);
s32 func_0002A744(void *arg0);
s32 func_0002A74C(void *arg0);
s32 func_0002A754(void *arg0);
M2C_UNK func_0002A87C(s32);
M2C_UNK func_0002AC58(s32);
M2C_UNK func_0002ACA4(s32);
void func_0002ADF4(s32 arg0);
void func_0002AE10(s32 arg0);
void func_0002AE2C(s32 arg0);
M2C_UNK func_0002B044(s32);
M2C_UNK func_0002B0C0(s32);
void func_0002B144(s32 arg0);
void func_0002B150(struct Unk_func_0002B150_0 *arg0);
M2C_UNK func_0002B37C(s32);
s32 func_0002B5D4(struct Unk_func_0002B5D4_0 *arg0);
s32 func_0002B638(void **arg0);
s32 func_0002B6C8(void **arg0);
s32 func_0002B7E4(void *arg0);
s32 func_0002B804(void *arg0, s32 arg1, s32 arg2);
void func_0002B824(void *arg0, s32 arg1, s32 arg2);
s32 func_0002B980(struct Unk_func_0002B980_0 *arg0, struct Unk_func_0002B980_1 *arg1);
s32 func_0002BA14(s32 arg0, void *arg1);
s32 func_0002BAE0(void *arg0, s32 arg1);
void func_0002BB18(struct Unk_func_0002BB18_0 *arg0, s32 arg1);
void func_0002BB70(s32 arg0);
void func_0002BB8C(s32 arg0);
void func_0002BBA8(s32 arg0);
s32 func_0002BBCC(s32 arg0);
s32 func_0002BC78(void *arg0);
s32 func_0002BE98(void *arg0);
s32 func_0002BEBC(void *arg0);
s32 func_0002BEE0(void *arg0);
void func_0002BF20(s32 arg0);
M2C_UNK func_0002BFD8(s32);
M2C_UNK func_0002C0CC(s32);
s32 func_0002C10C(void);
s32 func_0002C154(s32 *arg0);
s32 func_0002C18C(s32 *arg0);
void func_0002C1D4(struct Unk_func_0002C1D4_0 *arg0);
s32 func_0002C274(s32 arg0);
s32 func_0002C2A0(s32 arg0);
s32 func_0002C2CC(void *arg0, s32 arg1, s32 arg2);
s32 func_0002C304(void *arg0, s32 arg1);
s32 func_0002C33C(void *arg0, s32 arg1, s32 arg2);
s32 func_0002C374(s32 *arg0);
s32 func_0002C3AC(s32 *arg0, s32 arg1, s32 arg2);
s32 func_0002C3E4(s32 *arg0);
M2C_UNK func_0002C3F4(s32);
s32 func_0002C41C(s32 *arg0);
s32 func_0002C4C8(s32 *arg0);
s32 func_0002C500(s32 arg0);
s32 func_0002C570(s32 arg0);
s32 func_0002C59C(s32 arg0);
s32 func_0002C5C8(s32 arg0);
s32 func_0002C5E0(struct Unk_func_0002C5E0_0 *arg0);
s32 func_0002C5F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0002C620(s32 arg0);
s32 func_0002C64C(s32 arg0);
s32 func_0002C678(s32 arg0);
s32 func_0002C6A4(s32 arg0);
s32 func_0002C6D0(s32 arg0, s32 arg1, s32 arg2);
s32 func_0002C6FC(s32 arg0);
s32 func_0002C720(struct Unk_func_0002C720_0 *arg0, s32 arg1);
s32 func_0002C728(s32 arg0);
s32 func_0002C72C(struct Unk_func_0002C72C_0 *arg0, s32 arg1);
s32 func_0002C754(s32 arg0, s32 arg1);
s32 func_0002C758(void);
s32 func_0002C760(void);
s32 func_0002C768(void);
s32 func_0002C770(struct Unk_func_0002C770_0 *arg0);
s32 func_0002C780(s32 arg0, s32 arg1);
s32 func_0002C7AC(s32 arg0);
s32 func_0002C7D8(s32 arg0);
s32 func_0002C804(s32 arg0, s32 arg1);
s32 func_0002C830(s32 arg0, s32 arg1);
void func_0002C850(s32 arg0);
s32 func_0002C85C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0002C86C(s32 arg0);
void func_0002C888(s32 arg0);
s32 func_0002C8E0(s32 arg0);
s32 func_0002CA5C(s32 *arg0);
s32 func_0002CA94(s32 *arg0);
s32 func_0002CACC(s32 *arg0);
s32 func_0002CB04(s32 arg0, s32 arg1);
s32 func_0002CB30(s32 arg0, s32 arg1);
M2C_UNK func_0002CBF0(s32);
M2C_UNK func_0002CC7C(s32);
void func_0002CD10(s32 arg0);
void func_0002CD1C(struct Unk_func_0002CD1C_0 *arg0);
s32 func_0002CFE4(s32, s32, s32);
M2C_UNK func_0002D1D0(s32);
s32 func_0002D26C(s32);
s32 func_0002D354(struct Unk_func_0002D354_0 *arg0);
s32 func_0002D468(struct Unk_func_0002D468_0 *arg0, s32 arg1);
s32 func_0002D494(void);
s32 func_0002D49C(void);
void func_0002D6C8(s32 arg0);
void func_0002D6E4(s32 arg0);
void func_0002D700(s32 arg0);
s32 func_0002D71C(void);
s16 func_0002D940(void *arg0);
s32 func_0002D964(s32);
s32 func_0002D9B4(s32 arg0);
s32 func_0002D9E4(void *arg0);
s32 func_0002D9EC(void *arg0);
s32 func_0002D9F4(void *arg0);
s32 func_0002D9FC(void *arg0);
s32 func_0002DA04(s32, s32, s32);
s16 func_0002DA04_v150(void *arg0);
s16 func_0002DA0C(void *arg0);
s32 func_0002DA34(s32);
M2C_UNK func_0002DA58(s32);
s32 func_0002DA90(s32);
M2C_UNK func_0002DB0C(s32);
void func_0002DBC8(s32 arg0);
void func_0002DBD4(struct Unk_func_0002DBD4_0 *arg0);
M2C_UNK func_0002DDFC(s32);
s32 func_0002DF2C(s32);
s32 func_0002DF4C(struct Unk_func_0002DF4C_0 *arg0);
s32 func_0002DFB4(s32);
s32 func_0002DFD8(void);
s32 func_0002E02C(void **arg0, u16 *arg1);
s32 func_0002E0E0(struct Unk_func_0002E0E0_0 *arg0, s32 arg1);
s32 func_0002E13C(void);
void func_0002E144(s32 arg0);
void func_0002E160(s32 arg0);
void func_0002E17C(s32 arg0);
s32 func_0002E310(s32);
M2C_UNK func_0002E3EC(s32);
s32 func_0002E414(s32);
s32 func_0002E4CC(s32);
s32 func_0002E4EC(s32);
M2C_UNK func_0002E508(s32);
s32 func_0002E540(s32, s32, s32);
s32 func_0002E5BC(s32);
s32 func_0002E5DC(s32);
void func_0002E62C(void *arg0);
s32 func_0002E820(s32);
s32 func_0002E878(s32, s32);
s32 func_0002EAE4(s32);
M2C_UNK func_0002EE78(s32);
s32 func_0002EF90(s32);
void func_0002F100(struct Unk_func_0002F100_0 *arg0);
void func_0002F1FC(s32 arg0);
void func_0002F218(s32 arg0);
M2C_UNK func_0002F2F4(s32);
M2C_UNK func_0002F324(s32);
s32 func_0002F860(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0002F88C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0002F954(void *arg0, s32 *arg1);
void func_0002F994(s32 arg0);
void func_0002F9B0(s32 arg0);
M2C_UNK func_0002FC30(s32);
M2C_UNK func_0002FD0C(s32);
void func_00030648(s32 arg0);
void func_00030664(s32 arg0);
void func_00030680(s32 arg0);
void func_000306D0(s32 arg0);
void func_00030720(void *arg0);
void func_00030770(void *arg0);
void func_000307C0(s32 **arg0);
M2C_UNK func_00030974(s32, s32);
M2C_UNK func_000309A8(s32);
s32 func_000309DC(struct Unk_func_000309DC_0 *arg0);
s32 func_000309FC(struct Unk_func_000309FC_0 *arg0);
s32 func_00030A1C(struct Unk_func_00030A1C_0 *arg0);
s32 func_00030A3C(s32);
s32 func_00030AF8(struct Unk_func_00030AF8_0 *arg0);
M2C_UNK func_00030B34(s32);
s32 func_00030C80(struct Unk_func_00030C80_0 *arg0, s32 *arg1);
s32 func_00030C90(struct Unk_func_00030C90_0 *arg0);
M2C_UNK func_00030CCC(s32);
M2C_UNK func_00030CE8(s32);
M2C_UNK func_00030D84(s32);
s32 func_00030DB8(s32 *arg0, s32 arg1);
s32 func_00030E24(struct Unk_func_00030E24_0 *arg0, s32 *arg1);
s32 func_00030E34(s32);
s32 func_00030F2C(struct Unk_func_00030F2C_0 *arg0);
s32 func_00030F3C(struct Unk_func_00030F3C_0 *arg0);
void func_00030F48(u32 arg0);
s32 func_000310BC(s32 **arg0);
M2C_UNK func_000310FC(s32);
s32 func_0003111C(s32 *arg0, s32 arg1);
s32 func_00031128(s32 *arg0);
s32 func_00031148(s32 *arg0);
M2C_UNK func_00031978(s32);
M2C_UNK func_00031BD8(s32);
void func_00031E40(void);
void func_00031F70(s32 *arg0, s32 arg1);
M2C_UNK func_00032094(s32);
s32 func_000328C4(void *arg0, s32 arg1);
s32 func_00032C70(struct Unk_func_00032C70_0 *arg0, s32 arg1);
s32 func_00032DE0(struct Unk_func_00032DE0_0 *arg0);
void func_00032DEC(s32 arg0, s32 arg1, s32 arg2);
s32 func_00032E08(s32, s32, s32, s32);
s32 func_00032F68(struct Unk_func_00032F68_0 *arg0, s32 arg1);
s32 func_000330CC(s32);
s32 func_00033114(s32);
s32 func_00033158(struct Unk_func_00033158_0 *arg0);
s32 func_00033178(struct Unk_func_00033178_0 *arg0);
void func_00033198(struct Unk_func_00033178_0 *arg0);
s32 func_000336C0(void *arg0, u32 arg1, s32 *arg2);
s32 func_000336F8(void *arg0, u32 arg1, s32 *arg2);
s32 func_00033730(void *arg0, u32 arg1, s32 *arg2);
s32 func_00033750(s32 arg0);
s32 func_00033768(void *arg0, s32 *arg1);
s32 func_000337D0(void *arg0, s32 *arg1);
s32 func_000337FC(struct Unk_func_000337FC_0 *arg0);
s32 func_00033820(struct Unk_func_00033820_0 *arg0);
void func_00033970(struct Unk_func_00033970_0 *arg0);
s32 func_0003398C(struct Unk_func_0003398C_0 *arg0);
s32 func_00033A70(struct Unk_func_00033A70_0 *arg0);
s32 func_00033A94(struct Unk_func_00033A94_0 *arg0);
s32 func_00033AB8(struct Unk_func_00033AB8_0 *arg0);
void func_00033ADC(struct Unk_func_00033ADC_0 *arg0);
s32 func_00033C28(struct Unk_func_00033C28_0 *arg0);
s32 func_00033C48(void);
s32 func_00033C6C(struct Unk_func_00033C6C_0 *arg0);
s32 func_00033C7C(...);
s32 func_00033C84(struct Unk_func_00033C84_0 *arg0);
void func_00033C8C(struct Unk_func_00033C8C_0 *arg0, s32 arg1);
void func_00033C94(struct Unk_func_00033C94_0 *arg0, s32 arg1);
s32 func_00033CE8(void *arg0, s32 arg1);
s32 func_00033D24(struct Unk_func_00033D24_0 *arg0, s32 *arg1);
s32 func_00033FFC(s32 arg0, void *arg1);
void func_000341C0(struct Unk_func_000341C0_0 *arg0);
void func_000341DC(s32 arg0);
void func_000341F8(s32 arg0);
void func_00034214(s32 arg0);
void func_00034230(s32 arg0);
void func_0003424C(s32 arg0);
void func_000343F8(void);
s32 func_00034400(void);
s32 func_00034408(void);
s32 func_00034410(void);
s32 func_00034418(void);
s32 func_00034420(void);
s32 func_00034428(void);
s32 func_00034430(void);
s32 func_00034438(void);
s32 func_00034440(void);
s32 func_00034448(void);
s32 func_00034450(void);
s32 func_00034458(void);
s32 func_00034460(void);
s32 func_00034468(void);
s32 func_00034470(void);
s32 func_00034478(void);
s32 func_00034480(void);
s32 func_00034488(void);
s32 func_00034490(void);
s32 func_00034498(void);
s32 func_000344A0(void);
s32 func_000344A8(void);
s32 func_000344B0(void);
s32 func_000344B8(void);
s32 func_000344C0(void);
s32 func_000344C8(void);
s32 func_000344D0(void);
s32 func_000344D8(void);
s32 func_000344E0(void);
s32 func_00034724(void *arg0, s32 *arg1);
s32 func_000349A0(s32 **arg0);
s32 func_000349F4(void *arg0);
M2C_UNK func_00034C48(s32);
s32 func_00035204(void *arg0, s32 *arg1);
M2C_UNK func_000354AC(s32);
s32 func_00035A24(s32, s32);
s32 func_00035B14(s32);
void *func_00035EF0(struct Unk_func_00035EF0_0 *arg0);
M2C_UNK func_00035F00(s32);
s32 func_00035F08(struct Unk_func_00035F08_0 *arg0);
M2C_UNK func_00035F10(s32);
s32 func_00035F18(struct Unk_func_00035F18_0 *arg0);
s16 func_00035F20(struct Unk_func_00035F20_0 *arg0);
s16 func_00035F28(struct Unk_func_00035F28_0 *arg0);
s32 func_00035F30(struct Unk_func_00035F30_0 *arg0);
s32 func_00035F38(struct Unk_func_00035F38_0 *arg0);
M2C_UNK func_00035F40(s32);
u16 func_00035F48(struct Unk_func_00035F48_0 *arg0);
s32 func_00035F50(s32);
s32 func_00035FA4(s32);
s32 func_00035FAC(s32);
M2C_UNK func_00036148(s32 *);
s32 func_00036458(u32 *arg0, u32 arg1);
void func_00036BB4(struct Unk_func_00036BB4_0 *arg0);
M2C_UNK func_00036F48(...);
s32 func_000371A0(s32, M2C_UNK, s32 *);
void func_000371BC(void);
M2C_UNK func_000376D8(...);
void func_000376F0(void);
s32 func_0003770C(s32 *arg0);
void func_000377A0(struct Unk_func_000377A0_0 *arg0);
M2C_UNK func_000377BC(s32);
s32 func_00037804(s32 *arg0);
void func_000378D4(struct Unk_func_000378D4_0 *arg0);
M2C_UNK func_000378F0(s32);
s32 func_00037938(s32 *arg0);
s32 func_00037A08(struct Unk_func_00037A08_0 *arg0);
s32 func_00037A18(s32 arg0);
s32 func_00037A48(struct Unk_func_00037A48_0 *arg0, u32 arg1);
s32 func_00037A58(struct Unk_func_00037A58_0 *arg0, u32 arg1);
void func_00037EFC(void);
s32 func_0003848C(void **arg0);
s32 func_00038514(void **arg0);
s32 func_00038820(s32, s32);
s32 func_0003884C(s32, s32);
s32 func_00038934(struct Unk_func_00038934_0 *arg0, s32 arg1);
s32 func_00038F84(void **arg0);
s32 func_00038FBC(s32 *arg0);
s32 func_00039020(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0003904C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00039078(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000390A4(s32 arg0, s32 *arg1, s32 *arg2);
s32 func_000390D0(s32 arg0);
s32 func_000393F0(void **arg0, s32 *arg1, s32 *arg2);
s32 func_00039428(s32 *arg0, s32 arg1, s32 arg2);
s32 func_00039460(void **arg0, s32 *arg1);
s32 func_00039498(s32 *arg0, s32 arg1);
s32 func_000394D0(void **arg0, u16 *arg1);
s32 func_00039544(s32 *arg0);
s32 func_0003957C(s32 arg0);
s32 func_000395EC(s32 arg0);
s32 func_00039618(s32 arg0);
s32 func_00039644(struct Unk_func_00039644_0 *arg0, s32 *arg1);
s32 func_00039670(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0003969C(struct Unk_func_0003969C_0 *arg0, s32 *arg1);
s32 func_000396C8(s32 arg0);
s32 func_000396F4(struct Unk_func_000396F4_0 *arg0, s32 *arg1);
s32 func_00039720(s32 arg0, s32 arg1);
s32 func_0003974C(s32 arg0, s32 arg1);
s32 func_00039778(struct Unk_func_00039778_0 *arg0, s32 *arg1);
s32 func_000397A4(s32 arg0);
s32 func_000397D0(s32 arg0, s32 arg1);
s32 func_000397FC(s32 arg0, s32 arg1);
s32 func_00039828(s32 arg0);
s32 func_00039854(struct Unk_func_00039854_0 *arg0, s32 arg1);
s32 func_00039880(s32 arg0);
s32 func_000398AC(s32 arg0, s32 arg1, s32 arg2);
s32 func_000398DC(s32 arg0, s32 arg1, s32 arg2);
s32 func_0003990C(s32 arg0, s32 arg1, s32 arg2);
s32 func_0003993C(s32 arg0, s32 arg1, s32 arg2);
s32 func_0003996C(struct Unk_func_0003996C_0 *arg0, s32 *arg1);
s32 func_00039998(s32 arg0, s32 arg1);
s32 func_000399C4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00039A48(struct Unk_func_00039A48_0 *arg0, s32 arg1);
s32 func_00039BC4(s32 *arg0);
s32 func_00039BFC(s32 *arg0);
s32 func_00039C34(void **arg0, s32 *arg1);
s32 func_00039C6C(s32 arg0, s32 arg1);
s32 func_00039C98(s32 arg0, s32 arg1);
s32 func_0003A288(s32, s32, s32);
s32 func_0003A3E4(void **arg0);
s32 func_0003A404(s32);
void func_0003A460(void);
s32 func_0003A47C(s32, s32, s32, s32, s32, s32);
s32 func_0003A540(s32, s32, s32, s32);
s32 func_0003A5D8(s32, s32, s32, s32);
s32 func_0003A674(s32 arg0, s32 *arg1, s32 *arg2);
s32 func_0003A6D4(s32 arg0);
s32 func_0003AC0C(s32, s32);
s32 func_0003AD1C(s32, s32, s32);
s32 func_0003AE38(void **arg0, s32 *arg1, s32 *arg2);
s32 func_0003AE64(s32, s32, s32);
s32 func_0003AEC0(void **arg0, s32 *arg1);
s32 func_0003AEE4(s32 *arg0, s32 arg1);
s32 func_0003AF34(void **arg0, u16 *arg1);
s32 func_0003AF58(void **arg0, s32 arg1, s32 *arg2);
s32 func_0003AFC4(s32);
s32 func_0003B020(s32);
s32 func_0003B13C(s32);
s32 func_0003B180(s32);
s32 func_0003B214(struct Unk_func_00039644_0 *arg0, s32 *arg1);
s32 func_0003B240(s32, s32, s32, s32, s32);
s32 func_0003B314(struct Unk_func_0003969C_0 *arg0, s32 *arg1);
s32 func_0003B334(s32);
s32 func_0003B3C8(struct Unk_func_000396F4_0 *arg0, s32 *arg1);
s32 func_0003B3E8(s32 arg0, s32 arg1);
s32 func_0003B438(s32, s32);
s32 func_0003B4AC(struct Unk_func_00039778_0 *arg0, s32 *arg1);
s32 func_0003B4CC(s32);
s32 func_0003B5BC(s32, s32);
s32 func_0003B68C(s32, s32);
s32 func_0003B6DC(s32);
s32 func_0003B708(struct Unk_func_00039854_0 *arg0, s32 arg1);
s32 func_0003B760(s32);
s32 func_0003B7D0(s32, s32, s32);
s32 func_0003B864(s32, s32, s32);
s32 func_0003B8F8(s32, s32, s32);
s32 func_0003B9A4(s32, s32, s32);
s32 func_0003BA50(struct Unk_func_0003996C_0 *arg0, s32 *arg1);
s32 func_0003BA98(s32, s32);
s32 func_0003BAD0(s32, s32, s32, s32);
void func_0003BB58(s32 arg0);
s32 func_0003BB74(s32);
s32 func_0003BCD8(struct Unk_func_00039A48_0 *arg0, s32 arg1);
s32 func_0003C088(s32);
s32 func_0003C118(s32);
s32 func_0003C1B8(void **arg0, s32 *arg1);
s32 func_0003C1EC(s32, s32);
s32 func_0003C284(s32, s32);
s32 func_0003CF0C(void *arg0, u32 arg1, s32 arg2);
s32 func_0003D034(void *arg0, u32 arg1, s32 arg2);
s32 func_0003E62C(void *arg0, s32 *arg1, s32 *arg2);
s32 func_0003E788(void *arg0, s32 *arg1);
s32 func_0003EB78(s32 arg0);
s32 func_0003F09C(s32, s32, s32);
void func_0003F1A8(struct Unk_func_0003F1A8_0 *arg0, M2C_UNK arg1);
void func_0003F1F0(struct Unk_func_0003F1F0_0 *arg0, s32 arg1);
void func_0003F2F8(struct Unk_func_0003F2F8_0 *arg0, s32 arg1);
void func_0003F4DC(struct Unk_func_0003F4DC_0 *arg0, s32 arg1);
void func_0003F614(struct Unk_func_0003F614_0 *arg0, s32 arg1);
void func_0003F684(s32 arg0, s32 arg1);
void func_0003F6B0(void *arg0, s32 arg1);
void func_0003F8D0(s32 arg0, s32 arg1);
void func_0003F8FC(s32 arg0, s32 arg1);
void func_0003F928(void *arg0, s32 arg1);
s32 func_0003F988(s32, s32);
void func_0003F9E8(struct Unk_func_0003F9E8_0 *arg0);
M2C_UNK func_0003FA1C(s32);
void func_0003FC30(struct Unk_func_0003FC30_0 *arg0);
void func_0003FCE8(struct Unk_func_0003FCE8_0 *arg0);
M2C_UNK func_0003FDAC(s32 *);
s32 func_0003FE84(struct Unk_func_0003FE84_0 *arg0, s32 arg1);
s32 *func_00040020(void *, u32);
s32 func_00040CD8(void *arg0, u32 arg1, s32 *arg2);
s32 func_00040D10(void *arg0, u32 arg1, s32 *arg2);
s32 func_00040D48(void *arg0, u32 arg1, s32 *arg2);
s32 func_00040E30(s32 arg0, s32 arg1, s32 *arg2);
s32 func_00040E54(struct Unk_func_00040E54_0 *arg0, s32 *arg1);
s32 func_00040E70(struct Unk_func_00040E70_0 *arg0, s32 *arg1);
s32 func_00040E8C(struct Unk_func_00040E8C_0 *arg0, s32 *arg1);
s32 func_00040EF4(struct Unk_func_00040EF4_0 *arg0, s32 *arg1);
void func_00041618(void *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_00041678(void *arg0, u32 arg1, s32 arg2);
void func_000416AC(void *arg0, u32 arg1, s32 arg2);
s32 func_000416E0(void *arg0, u32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7);
void func_0004188C(void *arg0);
void func_000418A4(void *arg0);
void func_000418FC(void *arg0);
void func_00041908(s32 arg0);
void func_00041928(s32 arg0);
M2C_UNK func_00041C08(void *);
s32 func_00041C34(s32 arg0, struct Unk_func_00041C34_1 *arg1);
s32 func_00041C80(s32 arg0, s32 arg1, void *arg2);
s32 func_00041CE8(s32 arg0, s32 arg1);
s32 func_00041D30(s32 arg0, s32 arg1);
s32 func_00041FA8(void *arg0, s32 arg1);
s32 func_00042164(void);
void func_0004216C(void);
void func_00042174(void);
s32 func_0004217C(void);
s32 func_00042184(void);
void func_0004218C(void);
s32 func_00042278(s32, s32);
s32 func_000422B8(struct Unk_func_000422B8_0 *arg0, s32 *arg1);
s32 func_00042410(struct Unk_func_00042410_0 *arg0, u32 arg1, u32 arg2, s32 arg3);
M2C_UNK func_00042FEC(...);
s32 func_00043180(void *arg0, s32 *arg1);
s32 func_00043614(u8, M2C_UNK);
void func_00043734(s32 arg0);
s32 func_00043750(s32);
void func_00043808(s32 arg0);
void func_00043888(s32 arg0);
s32 func_000438A4(s32);
M2C_UNK func_0004392C(s32);
void func_0004396C(struct Unk_func_0004396C_0 *arg0);
void func_00043978(s32 arg0);
s32 func_000439BC(struct Unk_func_000439BC_0 *arg0, s32 *arg1, s32 arg2);
s32 func_00043A14(s32, s32, s32);
s32 func_00043BC4(s32);
s32 func_00044274(u32 *arg0, u32 arg1);
void func_00044448(void *arg0);
void func_0004447C(void *arg0);
void func_000444CC(void *arg0);
s32 func_0004461C(...);
M2C_UNK func_00044B78(...);
s32 func_00045054(s32, s32);
void func_000450A8(void);
void func_000450C8(void *arg0);
void func_00046A68(struct Unk_func_00046A68_0 *arg0, s32 arg1);
void func_00046ABC(struct Unk_func_00046ABC_0 *arg0, s32 arg1);
void func_00046B58(struct Unk_func_00046B58_0 *arg0, s32 arg1);
s32 func_0004878C(s32, s32, s32);
void func_00048BB0(struct Unk_func_00048BB0_0 *arg0, s32 arg1);
void func_00048D54(struct Unk_func_00048D54_0 *arg0, s32 arg1);
void func_00048DC0(struct Unk_func_00048DC0_0 *arg0, s32 arg1);
void func_00048E14(struct Unk_func_00048E14_0 *arg0, s32 arg1);
M2C_UNK func_00049388(...);
s32 func_000495C8(s32 *arg0, s32 *arg1);
s32 func_000495D8(struct Unk_func_000495D8_0 *arg0, s32 *arg1);
s32 func_000495E8(struct Unk_func_000495E8_0 *arg0, s32 *arg1);
s32 func_0004A140(s32);
void func_0004A274(void);
M2C_UNK func_0004A290(...);
s32 func_0004B7A0(struct Unk_func_0004B7A0_0 *arg0, u32 arg1, s32 arg2);
s32 func_0004B8C8(struct Unk_func_0004B8C8_0 *arg0, u32 arg1, s32 arg2);
s32 func_0004CFA0(s32);
s32 func_0004D028(s32, s32, s32);
s32 func_0004D0F4(s32, s32, s32);
s32 func_0004D60C(s32 arg0);
s32 func_0004EEB4(s32, s32);
void func_0004EFEC(s32 arg0, s32 arg1);
void func_0004F654(struct Unk_func_0004F654_0 *arg0, s32 arg1);
M2C_UNK func_0004F6B4(void *, s32);
void func_0004F7C0(struct Unk_func_0004F7C0_0 *arg0, s32 arg1);
void func_0004F978(struct Unk_func_0004F978_0 *arg0, s32 arg1);
void func_0004FA08(struct Unk_func_0004FA08_0 *arg0, s32 arg1);
void func_0004FA80(struct Unk_func_0004FA80_0 *arg0, s32 arg1);
M2C_UNK func_0004FAE0(void *, s32);
void func_0004FBB8(struct Unk_func_0004FBB8_0 *arg0, s32 arg1);
void func_0004FF88(struct Unk_func_0004FF88_0 *arg0, s32 arg1);
void func_000501C8(void *arg0, s32 arg1);
s32 func_000504D4(s32, s32);
s32 func_00050AF4(struct Unk_func_00050AF4_0 *arg0, s32 arg1);
s32 func_00050B70(struct Unk_func_00050B70_0 *arg0, s32 arg1);
s32 func_00050C34(struct Unk_func_00050C34_0 *arg0, s32 arg1);
void func_00050D10(struct Unk_func_00050D10_0 *arg0, s32 arg1);
void func_00050DE4(struct Unk_func_00050DE4_0 *arg0, s32 arg1, M2C_UNK arg2);
void func_00050EC0(struct Unk_func_00050EC0_0 *arg0, s32 arg1);
void func_00050F1C(struct Unk_func_00050F1C_0 *arg0);
s32 func_00050FD4(struct Unk_func_00050FD4_0 *arg0, s32 arg1);
s32 func_000515F4(void **arg0, void **arg1);
s32 func_00054CF0(s32, s32, s32, s32, s32);
void **func_00054DDC(void **arg0);
void *func_00054E00(void *arg0);
s32 func_00054E24(s32 *arg0);
s32 func_00054E30(struct Unk_func_00054E30_0 *arg0, s32 arg1);
s32 func_00056504(struct Unk_func_00056504_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00056530(s32 *arg0);
s32 func_0005653C(s32 *arg0);
s32 func_00056548(s32 *arg0);
s32 func_00056554(s32 *arg0);
s32 func_00056560(s32 *arg0);
s32 func_0005656C(s32 *arg0);
s32 func_000565E8(struct Unk_func_000565E8_0 *arg0);
s32 func_00056660(struct Unk_func_00056660_0 *arg0);
s32 func_00056668(struct Unk_func_00056668_0 *arg0);
void func_00056670(struct Unk_func_00056670_0 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4);
void func_000566B8(struct Unk_func_000566B8_0 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4);
void func_00056700(struct Unk_func_00056700_0 *arg0, s32 *arg1, s32 *arg2);
void func_00056728(struct Unk_func_00056728_0 *arg0, s32 *arg1, s32 *arg2);
void func_00056750(struct Unk_func_00056750_0 *arg0, s32 *arg1, s32 *arg2);
void func_00056778(struct Unk_func_00056778_0 *arg0, s32 *arg1, s32 *arg2);
void func_0005698C(struct Unk_func_0005698C_0 *arg0);
void func_00056BD4(void **arg0, void **arg1);
M2C_UNK func_00056C30(s32);
M2C_UNK func_00056CA0(s32);
M2C_UNK func_00056D10(s32);
M2C_UNK func_00056D70(s32);
M2C_UNK func_00056DD0(s32);
M2C_UNK func_00056E38(s32);
s32 func_00056EA8(struct Unk_func_00056EA8_0 *arg0);
s32 func_00056F4C(struct Unk_func_00056F4C_0 *arg0, s32 arg1);
s32 func_00057234(struct Unk_func_00057234_0 *arg0);
s32 func_00057254(struct Unk_func_00057254_0 *arg0);
s32 func_00057274(struct Unk_func_00057274_0 *arg0);
s32 func_00057290(struct Unk_func_00057290_0 *arg0, s32 *arg1);
void func_000573D0(struct Unk_func_000573D0_0 *arg0, s32 arg1, s32 arg2);
s32 func_0005751C(struct Unk_func_0005751C_0 *arg0, s32 *arg1);
s32 func_00057540(struct Unk_func_00057540_0 *arg0, s32 *arg1);
s32 func_000575B4(struct Unk_func_000575B4_0 *arg0, s32 *arg1);
s32 func_000575D8(struct Unk_func_000575D8_0 *arg0, s32 *arg1);
s32 func_000575FC(struct Unk_func_000575FC_0 *arg0, s32 *arg1);
s32 func_000578C4(struct Unk_func_000578C4_0 *arg0, s32 *arg1, s32 *arg2);
s32 func_000590D0(M2C_UNK);
s32 func_00059120(s32);
s16 func_00059170(s32);
s16 func_000591C0(s32);
M2C_UNK func_00059210(s32, M2C_UNK, M2C_UNK);
M2C_UNK func_00059318(s32, M2C_UNK);
M2C_UNK func_00059364(s32, s32);
M2C_UNK func_000593B0(u16, M2C_UNK);
M2C_UNK func_00059400(s16, s32);
M2C_UNK func_00059450(void *, M2C_UNK, s32);
s32 func_000595A4(struct Unk_func_000595A4_0 *arg0, s32 *arg1);
s32 func_000599E0(struct Unk_func_000599E0_0 *arg0, u32 arg1);
s32 func_00059A6C(struct Unk_func_00059A6C_0 *arg0);
s32 func_00059BB4(s32, s32);
s32 func_00059C8C(s32);
void func_00059C94(struct Unk_func_00059C94_0 *arg0, s32 arg1);
s32 func_00059C9C(s32);
void func_00059CA4(struct Unk_func_00059CA4_0 *arg0, s32 arg1);
s32 func_00059CAC(struct Unk_func_00059CAC_0 *arg0, u32 arg1, s32 *arg2);
s32 func_00059E88(void *arg0);
s32 func_00059EE4(struct Unk_func_00059EE4_0 *arg0);
s32 func_00059F24(struct Unk_func_00059F24_0 *arg0);
s32 func_00059F34(s32 *arg0);
s32 func_00059F44(s32 *arg0);
void func_00059F54(struct Unk_func_00059F54_0 *arg0);
void func_00059FCC(struct Unk_func_00059FCC_0 *arg0);
s32 func_0005A044(s32);
void func_0005A084(struct Unk_func_0005A084_0 *arg0);
void func_0005A0C4(s32 **arg0);
s32 func_0005A1D0(s32, s32, s32);
void func_0005A618(struct Unk_func_0005A618_0 *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0005A684(struct Unk_func_0005A684_0 *arg0, u32 arg1, s32 arg2);
void func_0005A6BC(struct Unk_func_0005A6BC_0 *arg0, u32 arg1, s32 arg2);
void func_0005A79C(struct Unk_func_0005A79C_0 *arg0, u32 arg1, s32 arg2);
s32 func_0005A7D4(struct Unk_func_0005A7D4_0 *arg0, u32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7);
M2C_UNK func_0005AAA4(s32, s32);
M2C_UNK func_0005ACE8(M2C_UNK, M2C_UNK);
void func_0005AD3C(void);
void func_0005AD5C(M2C_UNK **arg0);
void func_0005AD8C(M2C_UNK **arg0);
void func_0005ADBC(M2C_UNK **arg0);
void func_0005ADE4(M2C_UNK **arg0);
void func_0005B424(M2C_UNK **arg0);
void func_0005B454(M2C_UNK **arg0);
void func_0005B47C(M2C_UNK **arg0);
void func_0005BAA4(struct Unk_func_0005BAA4_0 *arg0);
void func_0005BABC(struct Unk_func_0005BABC_0 *arg0);
void func_0005BB14(struct Unk_func_0005BB14_0 *arg0);
void func_0005BB6C(s32 **arg0);
s32 func_0005C148(void);
void func_0005C150(void);
void func_0005C158(void);
s32 func_0005C160(void);
s32 func_0005C168(void);
void func_0005C170(void);
s32 func_0005C178(struct Unk_func_0005C178_0 *arg0);
M2C_UNK func_0005C1B0(s32, u8);
s32 func_0005CAA0(struct Unk_func_0005CAA0_0 *arg0, s32 arg1);
s32 func_0005CD48(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0005CF38(s32, s32, s32, s32, s32);
s32 func_0005CFDC(s32, s32, s32, s32);
s32 func_0005D148(struct Unk_func_0005D148_0 *arg0, s32 *arg1);
void func_0005D648(void *arg0);
void func_0005D6FC(s32 arg0);
M2C_UNK func_0005D718(s32);
void func_0005D748(struct Unk_func_0005D748_0 *arg0);
M2C_UNK func_0005D78C(s32);
void func_0005D7D0(s32 arg0);
M2C_UNK func_0005D7EC(s32);
void func_0005D86C(s32 arg0);
M2C_UNK func_0005D888(s32);
void func_0005D904(s32 arg0);
M2C_UNK func_0005D9BC(s32);
M2C_UNK func_0005D9EC(s32);
M2C_UNK func_0005DA1C(s32);
M2C_UNK func_0005DA4C(s32);
M2C_UNK func_0005DA7C(s32);
M2C_UNK func_0005DAAC(s32);
M2C_UNK func_0005DB50(s32);
s32 func_0005E090(s32, s32);
s32 func_0005E0E4(struct Unk_func_0005E0E4_0 *arg0, M2C_UNK arg1);
s32 func_0005E134(struct Unk_func_0005E134_0 *arg0, s32 arg1);
s32 func_0005E184(struct Unk_func_0005E184_0 *arg0, s32 arg1);
s32 func_0005E1D4(s32, s32);
s32 func_0005E228(struct Unk_func_0005E228_0 *arg0, s32 arg1);
s32 func_0005E278(s32);
void func_0005E480(struct Unk_func_0005E480_0 *arg0);
void func_0005E4B4(struct Unk_func_0005E4B4_0 *arg0);
void func_0005E504(struct Unk_func_0005E504_0 *arg0);
M2C_UNK func_0005EBB0(void *);
s32 func_0005ECC4(struct Unk_func_0005ECC4_0 *arg0);
void func_0005ECE0(void);
M2C_UNK func_0005FF5C(...);
s32 module_stop(void);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
s32 sceKernelCreateEventFlag(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK sceKernelDelayThread(s32);
s32 sceKernelDeleteEventFlag(...);
s32 sceKernelDeleteSema(s32);
s32 sceKernelSetEventFlag(...);
s32 sceMpegBaseCscAvc(s32, M2C_UNK, s32, void *);
M2C_UNK sceMpegDelete(...);
s32 sceVideocodecDelete(s32, s32);
s32 sceVideocodecReleaseEDRAM(s32);
M2C_UNK sceVshCommonGui_614630E6(s32, s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sceVshCommonGui_7B52F0E6(s32, s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK sceVshCommonGui_F4D1E387(s32, s32, const char *, M2C_UNK, const char *, M2C_UNK, M2C_UNK);
M2C_UNK sce_paf_private_calloc(M2C_UNK, s32);
M2C_UNK sce_paf_private_free(void *);
s32 *sce_paf_private_malloc(M2C_UNK);
M2C_UNK sce_paf_private_memset(void *, M2C_UNK, M2C_UNK);
M2C_UNK sce_paf_private_printf(M2C_UNK *, s32);
s32 sce_paf_private_strcmp(s32, s32);
s32 sce_paf_private_strlen(s32);

#ifdef __cplusplus
}
#endif

#endif
