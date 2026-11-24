#ifndef PAF_DECLS_H
#define PAF_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_001A52C4_s {
    u8 pad0[0x4];
    s32 unk4;
};

struct D_001A7CC0_s {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct D_001A7CEC_s {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

struct D_001A7E2C_s {
    u8 pad0[0x9C];
    volatile s32 unk9C;
    u8 padA0[0x8];
    volatile s32 unkA8;
};

struct D_001D7A10_s {
    volatile s32 unk0;
    volatile s32 unk4;
};

struct D_001E0ECC_s {
    u8 pad0[0x14];
    void *unk14;
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
    u8 pad102[0x14F1];
    volatile s8 unk15F3;
    u8 pad15F4[0x2DC];
    volatile u16 unk18D0;
    u8 pad18D2[0x18];
    volatile s16 unk18EA;
    u8 pad18EC[0x1E];
    volatile s16 unk190A;
    volatile s16 unk190C;
    u8 pad190E[0x1AE];
    struct Unk_D_001E0ECC_s_1ABC *unk1ABC;
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
    u8 pad4112[0x26];
    volatile s8 unk4138;
    u8 pad4139[0x43];
    volatile s16 unk417C;
    volatile s8 unk417E;
    u8 pad417F[0x43];
    volatile s8 unk41C2;
    u8 pad41C3[0xFB];
    volatile s16 unk42BE;
    u8 pad42C0[0x6560];
    volatile s32 unkA820;
};

struct Unk_D_001A4E1C {
    u8 pad0[0x98];
    s32 unk98;
};

struct Unk_D_001A7EE0 {
    u8 pad0[0xE0];
    s32 (*unkE0)(void *, s32);
    M2C_UNK (*unkE4)(void *, s32, s32, s32, M2C_UNK);
    u8 padE8[0x4];
    s32 (*unkEC)(void *, s32);
};

struct Unk_D_001D7A54 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_D_001E0ECC_s_1ABC {
    u8 pad0[0x2];
    u16 unk2;
};

struct Unk_D_001E2988 {
    u8 pad0[0x4];
    u16 unk4;
    u8 pad6[0x2];
    u16 unk8;
    u8 padA[0x32];
    s16 unk3C;
};

struct Unk_TIFFCheckpointDirectory_0 {
    u8 pad0[0xA4];
    s32 unkA4;
    u8 padA8[0x50];
    s32 unkF8;
    u8 padFC[0x8C];
    s32 unk188;
    u8 pad18C[0x8];
    s32 (*unk194)(s32, M2C_UNK, M2C_UNK);
};

struct Unk_TIFFNumberOfTiles_temp_s1 {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    u8 pad28[0x12];
    u16 unk3A;
    u8 pad3C[0x1A];
    u16 unk56;
};

struct Unk_TIFFRGBAImageEnd_0 {
    u8 pad0[0x24];
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    u8 pad30[0x8];
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
};

struct Unk_TIFFStripSize_temp_v0 {
    u8 pad0[0x14];
    u32 unk14;
    u8 pad18[0x24];
    u32 unk3C;
};

struct Unk_TIFFTileSize_0 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_Unk_func_0007BABC_0_15C {
    u8 pad0[0x64];
    s32 unk64;
    u8 pad68[0x18];
    s32 unk80;
};

struct Unk_Unk_func_0009584C_0_1C8 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_Unk_func_000E4358_0_1E8 {
    u8 pad0[0x20];
    void *unk20;
};

struct Unk_Unk_func_000E4368_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_func_000E43A8_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_func_000E4408_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_func_000E4438_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_func_00117440_0_1E8 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_Unk_func_00117618_0_1E8 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_Unk_func_001698F8_0_30 {
    u8 pad0[0x1];
    u8 unk1;
};

struct Unk_Unk_func_0016990C_0_30 {
    u8 pad0[0x2];
    u8 unk2;
};

struct Unk_Unk_scePaf_2A5DDF04_0_1E8 {
    u8 pad0[0x3F8];
    s32 unk3F8;
};

struct Unk_Unk_scePaf_6E1B5B50_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_scePaf_7116224C_0_1E8 {
    u8 pad0[0x20];
    void *unk20;
};

struct Unk_Unk_scePaf_BFFAEE83_0_1E8 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_emit_dri_0 {
    u8 pad0[0xC0];
    s32 unkC0;
};

struct Unk_emit_jfif_app0_0 {
    u8 pad0[0xCC];
    u8 unkCC;
    u8 unkCD;
    u8 unkCE;
    u8 padCF[0x1];
    u16 unkD0;
    u16 unkD2;
};

struct Unk_fill_a_scan_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0xC];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_fullsize_downsample_0 {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad20[0xC4];
    s32 unkE4;
};

struct Unk_fullsize_downsample_1 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00000480_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00000490_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00000CE0_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00000DF4_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00001DE4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00001E34_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0000A6DC_0 {
    u8 pad0[0xF8];
    s32 unkF8;
};

struct Unk_func_0000ACA8_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_func_0000C0A0_0 {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad60[0x170];
    s32 unk1D0;
};

struct Unk_func_0000C174_0 {
    u8 pad0[0x60];
    s32 unk60;
    u8 pad64[0x16C];
    s32 unk1D0;
};

struct Unk_func_0000C248_0 {
    u8 pad0[0x64];
    s32 unk64;
    u8 pad68[0x168];
    s32 unk1D0;
};

struct Unk_func_0000CF4C_temp_v0 {
    u8 pad0[0x15];
    s8 unk15;
};

struct Unk_func_0000D1C0_temp_v0 {
    u8 pad0[0x15];
    s8 unk15;
};

struct Unk_func_0000EA94_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0000EB14_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0000EB48_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x8];
    s8 unk10;
    u8 unk11;
};

struct Unk_func_0000EBA4_0 {
    u8 pad0[0x14];
    s32 unk14;
    s32 unk18;
    u8 unk1C;
};

struct Unk_func_0000EBF8_0 {
    u8 pad0[0x14];
    s32 unk14;
    s32 unk18;
    u8 unk1C;
};

struct Unk_func_0000FD60_temp_v0 {
    u8 pad0[0x1D];
    s8 unk1D;
};

struct Unk_func_000117C0_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_000117C0_var_v0 *unk4;
};

struct Unk_func_000117C0_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_00014C08_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00014C08_temp_s0 {
    void *unk0;
    void **unk4;
    s32 unk8;
};

struct Unk_func_00014D64_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_00014D64_var_s0 *unk4;
};

struct Unk_func_00014D64_var_s0 {
    u8 pad0[0x4];
    void *unk4;
    s32 unk8;
};

struct Unk_func_00015B98_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00015B98_1 {
    u8 pad0[0x8];
    u32 unk8;
};

struct Unk_func_00015BE4_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00015BE4_1 {
    u8 pad0[0x8];
    u32 unk8;
};

struct Unk_func_00015F14_0 {
    M2C_UNK *unk0;
    u8 pad4[0x24];
    s32 unk28;
};

struct Unk_func_00015F64_0 {
    M2C_UNK *unk0;
    u8 pad4[0x24];
    s32 unk28;
};

struct Unk_func_00017270_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00017270_1 {
    u8 pad0[0x8];
    u32 unk8;
};

struct Unk_func_000272A0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00027324_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000273A8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000273B8_0 {
    void * unk0;
    s32 unk4;
};

struct Unk_func_0002742C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002743C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000274C4_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00027584_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00027644_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0002770C_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00027A24_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002E200_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0003191C_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00036F48_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0003B488_0 {
    u8 pad0[0x18];
    s32 unk18;
    u8 pad1C[0x4];
    s32 unk20;
};

struct Unk_func_0003B488_temp_s1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0003BA60_0 {
    u8 pad0[0x18];
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_0003BA60_temp_s1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00041424_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_0004303C_0 {
    u8 pad0[0x74];
    s16 unk74;
};

struct Unk_func_00043080_0 {
    u8 pad0[0x76];
    s16 unk76;
};

struct Unk_func_0004352C_0 {
    s32 unk0;
    u8 pad4[0x11];
    u8 unk15;
    u8 pad16[0x13];
    u8 unk29;
};

struct Unk_func_00044154_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00044168_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_00044190_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_000441A4_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_000441D0_0 {
    void * unk0;
    void * unk4;
};

struct Unk_func_00044394_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000472DC_0 {
    M2C_UNK *unk0;
    u8 pad4[0x14];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00047334_0 {
    M2C_UNK *unk0;
    u8 pad4[0x14];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_0004738C_0 {
    M2C_UNK *unk0;
    u8 pad4[0x14];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00047518_0 {
    u8 pad0[0x18];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00048064_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0004819C_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00048404_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0004853C_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00048F0C_0 {
    u8 pad0[0x18];
    struct Unk_func_00048F0C_temp_v1 *unk18;
};

struct Unk_func_00048F0C_temp_v1 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0xC];
    void *unk14;
    s32 unk18;
};

struct Unk_func_00049170_0 {
    u8 pad0[0x18];
    void * unk18;
};

struct Unk_func_00049484_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s8 unk10;
    s8 unk11;
};

struct Unk_func_000494A4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s8 unk10;
    s8 unk11;
};

struct Unk_func_000494C4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s8 unk10;
    s8 unk11;
};

struct Unk_func_000494E4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s8 unk10;
    s8 unk11;
};

struct Unk_func_000498D8_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00049B9C_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
    s8 unk10;
    u8 unk11;
};

struct Unk_func_00049E00_0 {
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

struct Unk_func_0004C57C_0 {
    s8 unk0;
    u8 pad1[0x3];
    M2C_UNK *unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_0004C57C_temp_v1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0004C5C4_0 {
    s8 unk0;
    u8 pad1[0x3];
    M2C_UNK *unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_0004C5C4_temp_v1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0004CA7C_0 {
    u8 unk0;
    u8 pad1[0x3];
    s32 unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_0004D74C_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_0004D764_0 {
    M2C_UNK * unk0;
    s32 unk4;
};

struct Unk_func_0004E790_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0004EE0C_temp_a0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_000507E8_0 {
    u8 pad0[0x18];
    void * unk18;
};

struct Unk_func_00050DD4_0 {
    u8 pad0[0x66C];
    s32 unk66C;
    u8 pad670[0x4];
    s32 unk674;
    s32 unk678;
    M2C_UNK (*unk67C)(s32, s32, void *, void *, s32, s32, s32);
};

struct Unk_func_00051108_0 {
    u8 pad0[0x66C];
    s32 unk66C;
};

struct Unk_func_000511B0_0 {
    u8 pad0[0x65C];
    s32 unk65C;
    u8 pad660[0xC];
    s32 unk66C;
};

struct Unk_func_00052230_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0005224C_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00052268_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_000524AC_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_000524AC_temp_v1 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000527D4_0 {
    u8 unk0;
    u8 pad1[0x1F];
    s32 unk20;
    u8 pad24[0x1C];
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
};

struct Unk_func_00052B98_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00052BB4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00052BD0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00052BEC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00052C08_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00052C24_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00055388_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00055B24_0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
    u8 pad18[0x2C];
    s32 unk44;
};

struct Unk_func_00057E84_0 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0xC];
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00058030_0 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0xC];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    M2C_UNK (*unk2C)(s32, s32, s32, s32, s32, s32, s32, s32);
    s32 unk30;
};

struct Unk_func_00058070_0 {
    s8 unk0;
    s8 unk1;
    u8 pad2[0x2];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 pad14[0x44];
    s32 unk58;
};

struct Unk_func_00058090_0 {
    s8 unk0;
    s8 unk1;
    u8 pad2[0x2];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 pad14[0x44];
    s32 unk58;
};

struct Unk_func_000580B0_0 {
    s8 unk0;
    s8 unk1;
    u8 pad2[0x2];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 pad1C[0x3C];
    s32 unk58;
};

struct Unk_func_000580D8_0 {
    s8 unk0;
    s8 unk1;
    u8 pad2[0x2];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    u8 pad1C[0x3C];
    s32 unk58;
};

struct Unk_func_00058420_0 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x44];
    s32 unk58;
};

struct Unk_func_0005C0BC_0 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0x4];
    s16 unk1C;
};

struct Unk_func_0005C0E0_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0005C0E8_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00067A6C_0 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0xD4];
    M2C_UNK * unkE4;
    M2C_UNK * unkE8;
};

struct Unk_func_000680C8_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000680D0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000680DC_0 {
    u8 pad0[0x188];
    s32 unk188;
};

struct Unk_func_000680E4_0 {
    u8 pad0[0x188];
    s32 unk188;
};

struct Unk_func_000680F0_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000680F8_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00068104_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00068110_0 {
    u8 pad0[0xEC];
    s32 unkEC;
};

struct Unk_func_00068118_0 {
    u8 pad0[0xF0];
    u16 unkF0;
};

struct Unk_func_00068120_0 {
    u8 pad0[0xF4];
    s32 unkF4;
};

struct Unk_func_00068128_0 {
    u8 pad0[0x10C];
    s32 unk10C;
};

struct Unk_func_00068130_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0006813C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00068148_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00068154_0 {
    u8 pad0[0xDC];
    u16 unkDC;
};

struct Unk_func_00068164_0 {
    u8 pad0[0x18C];
    s32 unk18C;
};

struct Unk_func_0006816C_0 {
    u8 pad0[0x190];
    s32 unk190;
};

struct Unk_func_00068174_0 {
    u8 pad0[0x194];
    s32 unk194;
};

struct Unk_func_0006817C_0 {
    u8 pad0[0x198];
    s32 unk198;
};

struct Unk_func_00068184_0 {
    u8 pad0[0x19C];
    s32 unk19C;
};

struct Unk_func_0006818C_0 {
    u8 pad0[0x180];
    s32 unk180;
};

struct Unk_func_00068194_0 {
    u8 pad0[0x184];
    s32 unk184;
};

struct Unk_func_000693AC_0 {
    s32 unk0;
    u8 pad4[0x184];
    s32 unk188;
};

struct Unk_func_0006D618_temp_s2 {
    u8 pad0[0x8];
    s32 (*unk8)(s32, s32);
};

struct Unk_func_0006F9EC_temp_v0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00072988_0 {
    u8 pad0[0x15C];
    struct Unk_func_00072988_temp_s1 *unk15C;
    u8 pad160[0x50];
    s32 unk1B0;
    s32 unk1B4;
};

struct Unk_func_00072988_temp_s1 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    s32 unk34;
    u8 pad38[0x14];
    s32 unk4C;
    u8 pad50[0xC];
    s32 unk5C;
};

struct Unk_func_00074FFC_0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_00075134_0 {
    u8 pad0[0x654];
    s32 unk654;
    s32 unk658;
    u8 pad65C[0x78];
    s32 unk6D4;
    s32 unk6D8;
};

struct Unk_func_000751DC_0 {
    u8 pad0[0x658];
    s32 unk658;
    u8 pad65C[0x7C];
    s32 unk6D8;
};

struct Unk_func_00075308_0 {
    u8 pad0[0x668];
    s32 unk668;
    s32 unk66C;
};

struct Unk_func_000753AC_0 {
    u8 pad0[0x668];
    s32 unk668;
    s32 unk66C;
    u8 pad670[0x64];
    s32 unk6D4;
    s32 unk6D8;
};

struct Unk_func_00075E24_temp_v0 {
    u8 pad0[0x80];
    s32 unk80;
};

struct Unk_func_0007694C_0 {
    u8 pad0[0x15C];
    struct Unk_func_0007694C_temp_s0 *unk15C;
    u8 pad160[0x50];
    s32 unk1B0;
    s32 unk1B4;
};

struct Unk_func_0007694C_temp_s0 {
    u8 pad0[0x1CC];
    s32 unk1CC;
    u8 pad1D0[0x4F4];
    s32 unk6C4;
    s32 unk6C8;
    u8 pad6CC[0x8];
    s32 unk6D4;
};

struct Unk_func_00077108_0 {
    u8 pad0[0x15C];
    void *unk15C;
};

struct Unk_func_00077108_temp_s0 {
    u8 pad0[0x14];
    u32 unk14;
    u8 pad18[0x82];
    u16 unk9A;
};

struct Unk_func_0007A538_0 {
    u8 pad0[0x15C];
    struct Unk_func_0007A538_temp_s0 *unk15C;
    u8 pad160[0x50];
    s32 unk1B0;
    s32 unk1B4;
};

struct Unk_func_0007A538_temp_s0 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x8];
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_0007AB7C_0 {
    s32 unk0;
    u8 pad4[0xE8];
    s32 unkEC;
    u8 padF0[0x98];
    s32 unk188;
};

struct Unk_func_0007BABC_0 {
    u8 pad0[0x15C];
    struct Unk_Unk_func_0007BABC_0_15C *unk15C;
};

struct Unk_func_0007BE50_0 {
    u8 pad0[0x130];
    M2C_UNK * unk130;
    u8 pad134[0x4];
    M2C_UNK * unk138;
    u8 pad13C[0x4];
    M2C_UNK * unk140;
};

struct Unk_func_0007BFD4_0 {
    u8 pad0[0x650];
    s32 unk650;
    s32 unk654;
};

struct Unk_func_0007E2A0_0 {
    u8 pad0[0x34];
    u32 unk34;
    u8 pad38[0x82];
    u16 unkBA;
    u8 padBC[0xA0];
    void * unk15C;
};

struct Unk_func_0007E3A8_0 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x14C];
    struct Unk_func_0007E3A8_temp_s0 *unk15C;
    u8 pad160[0x18];
    s32 unk178;
    s32 unk17C;
};

struct Unk_func_0007E3A8_temp_s0 {
    u8 pad0[0x6A8];
    s32 unk6A8;
    u8 pad6AC[0x34];
    s32 unk6E0;
    u8 pad6E4[0x4];
    s32 unk6E8;
    u8 pad6EC[0x4];
    s32 unk6F0;
    u8 pad6F4[0x4];
    s32 unk6F8;
    u8 pad6FC[0x4];
    s32 unk700;
};

struct Unk_func_0007E854_0 {
    u8 pad0[0x15C];
    s32 unk15C;
};

struct Unk_func_00082140_temp_a0 {
    u8 pad0[0x2C];
    s16 unk2C;
    s16 unk2E;
};

struct Unk_func_00082158_0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x150];
    struct Unk_func_00082158_temp_s0 *unk15C;
    u8 pad160[0x50];
    s32 unk1B0;
    s32 unk1B4;
};

struct Unk_func_00082158_temp_s0 {
    u8 pad0[0x68];
    s32 unk68;
    u8 pad6C[0x4];
    s32 unk70;
    u8 pad74[0x8];
    s32 unk7C;
    s32 unk80;
    s32 unk84;
    s32 unk88;
    s32 unk8C;
    s32 unk90;
    s32 unk94;
    s32 unk98;
};

struct Unk_func_00083CC0_0 {
    u8 pad0[0x130];
    M2C_UNK * unk130;
    u8 pad134[0x4];
    M2C_UNK * unk138;
};

struct Unk_func_0008ACDC_0 {
    u8 pad0[0x18];
    void * unk18;
};

struct Unk_func_0008C380_0 {
    u8 pad0[0x1B0];
    M2C_UNK ** unk1B0;
};

struct Unk_func_0008F660_0 {
    u8 pad0[0x70];
    s32 unk70;
    u8 pad74[0x14C];
    struct Unk_func_0008F660_temp_v1 *unk1C0;
};

struct Unk_func_0008F660_temp_v1 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x4];
    s32 unk2C;
};

struct Unk_func_00091208_0 {
    u8 pad0[0x70];
    s32 unk70;
    u8 pad74[0xC0];
    s32 unk134;
    u8 pad138[0x88];
    struct Unk_func_00091208_temp_a1 *unk1C0;
};

struct Unk_func_00091208_temp_a1 {
    u8 pad0[0x5C];
    s32 unk5C;
    s32 unk60;
};

struct Unk_func_0009584C_0 {
    u8 pad0[0x1C8];
    struct Unk_Unk_func_0009584C_0_1C8 *unk1C8;
};

struct Unk_func_000988F4_0 {
    u8 pad0[0x90];
    s32 unk90;
};

struct Unk_func_00099F18_0 {
    u8 pad0[0x6C];
    s32 unk6C;
};

struct Unk_func_0009CF90_0 {
    u8 pad0[0x4D0];
    s32 unk4D0;
};

struct Unk_func_0009DB28_0 {
    u8 pad0[0x400];
    s32 unk400;
    s32 unk404;
    s32 unk408;
};

struct Unk_func_0009DB44_0 {
    u8 pad0[0x408];
    s32 unk408;
};

struct Unk_func_0009DB58_0 {
    u8 pad0[0x42C];
    s32 unk42C;
};

struct Unk_func_0009DB78_1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0009DB9C_1 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0009DBBC_1 {
    u8 pad0[0xE8];
    s32 unkE8;
};

struct Unk_func_0009DBFC_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0009DC1C_1 {
    u8 pad0[0x18];
    u8 unk18;
};

struct Unk_func_0009DC3C_1 {
    u8 pad0[0x19];
    u8 unk19;
};

struct Unk_func_0009DC5C_1 {
    u8 pad0[0x1B];
    u8 unk1B;
};

struct Unk_func_0009DC7C_1 {
    u8 pad0[0x1C];
    u8 unk1C;
};

struct Unk_func_0009DC9C_1 {
    u8 pad0[0x1A];
    u8 unk1A;
};

struct Unk_func_0009DEA4_1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x50];
    s32 unk5C;
    u8 pad60[0x4];
    u8 unk64;
};

struct Unk_func_0009DEDC_1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x54];
    s32 unk60;
    u8 unk64;
};

struct Unk_func_0009DF14_1 {
    u8 pad0[0x1D];
    u8 unk1D;
};

struct Unk_func_0009EAD4_0 {
    u8 pad0[0x42C];
    s32 unk42C;
};

struct Unk_func_0009EB5C_0 {
    u8 pad0[0x600];
    s32 unk600;
    s32 unk604;
    s32 unk608;
};

struct Unk_func_0009EB6C_0 {
    u8 pad0[0x600];
    s32 unk600;
};

struct Unk_func_000A0664_0 {
    u8 pad0[0x558];
    s32 unk558;
};

struct Unk_func_000A1584_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_func_000A159C_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_func_000A15B4_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_func_000A15E0_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_func_000A7144_1 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct Unk_func_000A71C8_0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct Unk_func_000A71F4_0 {
    u8 unk0;
    u8 unk1;
};

struct Unk_func_000A99B4_1 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct Unk_func_000AABD0_1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000AB98C_1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000AC348_0 {
    u8 pad0[0x5EC];
    s32 unk5EC;
};

struct Unk_func_000AC5E4_0 {
    u8 pad0[0x620];
    s32 unk620;
    s32 unk624;
};

struct Unk_func_000AC5F0_0 {
    u8 pad0[0x430];
    s32 unk430;
};

struct Unk_func_000AC600_0 {
    u8 pad0[0x430];
    s32 unk430;
    u8 pad434[0xB3];
    u8 unk4E7;
};

struct Unk_func_000AE724_0 {
    u8 pad0[0x8];
    void * unk8;
};

struct Unk_func_000AEA7C_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_000B2500_0 {
    u8 pad0[0x4C];
    M2C_UNK * unk4C;
    M2C_UNK * unk50;
    s32 unk54;
    s32 unk58;
};

struct Unk_func_000B8188_0 {
    s32 unk0;
    void * unk4;
};

struct Unk_func_000B8194_0 {
    u8 pad0[0x4];
    M2C_UNK * unk4;
};

struct Unk_func_000B81CC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000B81D4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000B97D0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000B97D0_temp_v1 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_000BC724_0 {
    u8 pad0[0x4];
    void * unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000BC724_temp_v1 {
    s32 unk0;
    u8 pad4[0xC];
    M2C_UNK (*unk10)(s32, s32);
};

struct Unk_func_000BC724_temp_v1_2 {
    s32 unk0;
    u8 pad4[0xC];
    M2C_UNK (*unk10)(s32, s32);
};

struct Unk_func_000BC7A0_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x24];
    s32 unk2C;
};

struct Unk_func_000BCF98_0 {
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

struct Unk_func_000BCF98_1 {
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

struct Unk_func_000BDD08_0 {
    u8 pad0[0x1E4];
    s32 unk1E4;
    u16 unk1E8;
    u8 unk1EA;
};

struct Unk_func_000BDD58_0 {
    u8 pad0[0x1EC];
    s32 unk1EC;
    u16 unk1F0;
    u8 unk1F2;
};

struct Unk_func_000C1CA0_0 {
    u8 pad0[0x60];
    s32 unk60;
};

struct Unk_func_000C45F4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000C4E70_0 {
    u8 pad0[0x1B8];
    s32 unk1B8;
};

struct Unk_func_000C4FCC_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000C523C_0 {
    u8 pad0[0x18];
    s8 unk18;
};

struct Unk_func_000C5250_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    u8 padC[0x10];
    s32 unk1C;
};

struct Unk_func_000C5290_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    u8 padC[0x10];
    s32 unk1C;
};

struct Unk_func_000C52B8_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    u8 padC[0x10];
    s32 unk1C;
};

struct Unk_func_000C5E7C_0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct Unk_func_000C5E7C_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000C68A8_temp_v0 {
    u8 pad0[0x15];
    s8 unk15;
};

struct Unk_func_000C8C10_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000C917C_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000C917C_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_000C99E0_0 {
    u8 pad0[0x8C];
    void **unk8C;
};

struct Unk_func_000CB988_0 {
    u8 pad0[0xE4];
    s32 unkE4;
};

struct Unk_func_000CBC30_0 {
    u8 pad0[0xD8];
    s32 unkD8;
};

struct Unk_func_000CC2D8_0 {
    u8 pad0[0xEC];
    M2C_UNK * unkEC;
};

struct Unk_func_000CC6C0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000CC710_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000CC760_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000CC760_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_000CD528_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000CD538_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000CFFC0_0 {
    u8 pad0[0x15C];
    s32 unk15C;
};

struct Unk_func_000D0574_0 {
    u8 pad0[0x188];
    s32 unk188;
};

struct Unk_func_000D0EE0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000D1798_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000D1798_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_000D1AF4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000D1B04_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000D3D14_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x8];
    u32 unk10;
    u32 unk14;
};

struct Unk_func_000D4664_0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x38];
    u8 unk44;
};

struct Unk_func_000D4884_0 {
    u8 pad0[0x30];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
};

struct Unk_func_000D4884_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000D4B9C_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_000D4B9C_var_v0 *unk4;
};

struct Unk_func_000D4B9C_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_000D4BF4_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_000D4BF4_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_000D4CDC_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000D57AC_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000D57AC_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_000D5814_0 {
    M2C_UNK *unk0;
    u8 pad4[0x20];
    s32 unk24;
};

struct Unk_func_000D5868_0 {
    M2C_UNK *unk0;
    u8 pad4[0x20];
    s32 unk24;
};

struct Unk_func_000DA1CC_0 {
    u8 pad0[0x1D4];
    s32 unk1D4;
};

struct Unk_func_000DA228_0 {
    u8 pad0[0x1EC];
    s32 unk1EC;
};

struct Unk_func_000DA234_0 {
    M2C_UNK * unk0;
    u8 pad4[0x4];
    M2C_UNK * unk8;
};

struct Unk_func_000DA250_0 {
    M2C_UNK * unk0;
    u8 pad4[0x4];
    M2C_UNK * unk8;
};

struct Unk_func_000DA284_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000DBB08_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000DD9C8_0 {
    u8 pad0[0x3CC];
    void ** unk3CC;
};

struct Unk_func_000E1510_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000E1584_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000E1880_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000E18EC_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000E2B10_0 {
    u8 pad0[0x330];
    s32 unk330;
};

struct Unk_func_000E433C_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_000E4358_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_000E4358_0_1E8 *unk1E8;
};

struct Unk_func_000E4368_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_000E4368_0_1E8 *unk1E8;
};

struct Unk_func_000E43A8_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_000E43A8_0_1E8 *unk1E8;
};

struct Unk_func_000E4408_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_000E4408_0_1E8 *unk1E8;
};

struct Unk_func_000E4438_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_000E4438_0_1E8 *unk1E8;
};

struct Unk_func_000E4F0C_0 {
    u8 pad0[0x1D4];
    s32 unk1D4;
    u8 pad1D8[0x14];
    s32 unk1EC;
    u8 pad1F0[0x141];
    u8 unk331;
    u8 pad332[0x2];
    s8 unk334;
};

struct Unk_func_000E4F0C_1 {
    u8 pad0[0x8];
    u8 unk8;
};

struct Unk_func_000E8C68_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000E8EDC_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000E9100_0 {
    M2C_UNK *unk0;
    u8 pad4[0x10];
    s32 unk14;
};

struct Unk_func_000EA2D8_0 {
    u8 pad0[0x6C8];
    s8 unk6C8;
};

struct Unk_func_000EA4DC_0 {
    u8 pad0[0x700];
    void **unk700;
};

struct Unk_func_000EA528_0 {
    u8 pad0[0x700];
    void **unk700;
};

struct Unk_func_000EA570_0 {
    u8 pad0[0x700];
    void **unk700;
};

struct Unk_func_000EBBB8_0 {
    M2C_UNK *unk0;
    u8 pad4[0x10];
    s32 unk14;
    u8 pad18[0x318];
    s32 unk330;
    s32 unk334;
};

struct Unk_func_000EBDD4_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_000EBE98_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_000EBED0_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_000EBF08_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_000EBF24_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_000ED8E8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000ED938_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000ED988_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000EE370_0 {
    M2C_UNK * unk0;
    u8 pad4[0x36C];
    s32 unk370;
};

struct Unk_func_000EE3AC_0 {
    M2C_UNK * unk0;
    u8 pad4[0x36C];
    s32 unk370;
};

struct Unk_func_000EEFFC_0 {
    u8 pad0[0x554];
    s32 unk554;
};

struct Unk_func_000EF250_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000F0DB8_0 {
    u8 pad0[0x1EC];
    s32 unk1EC;
};

struct Unk_func_000F18C8_0 {
    u8 pad0[0x332];
    u8 unk332;
    u8 pad333[0x105];
    s32 unk438;
    u8 pad43C[0x17C];
    s32 unk5B8;
};

struct Unk_func_000F202C_0 {
    u8 pad0[0x334];
    s8 unk334;
};

struct Unk_func_000F2050_0 {
    u8 pad0[0x334];
    s8 unk334;
};

struct Unk_func_000F2074_0 {
    u8 pad0[0x334];
    s8 unk334;
    s8 unk335;
};

struct Unk_func_000F209C_0 {
    u8 pad0[0x334];
    s8 unk334;
    s8 unk335;
};

struct Unk_func_000F20C4_0 {
    u8 pad0[0x334];
    s8 unk334;
};

struct Unk_func_000F4D20_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000F614C_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_000F6184_0 {
    u8 pad0[0x1E8];
    void ** unk1E8;
};

struct Unk_func_000F6234_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_000F62C0_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_func_000FC018_0 {
    u8 pad0[0x1E8];
    void ** unk1E8;
};

struct Unk_func_000FC294_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000FC294_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_000FC2FC_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000FC2FC_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_000FCC8C_0 {
    u8 pad0[0x24];
    void ** unk24;
};

struct Unk_func_000FEC50_0 {
    M2C_UNK * unk0;
    u8 pad4[0x4];
    M2C_UNK * unk8;
    u8 padC[0x10];
    u8 unk1C;
    u8 pad1D[0x3];
    s32 unk20;
};

struct Unk_func_000FEE24_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000FEE40_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000FEE5C_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000FEE78_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000FEE94_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000FEEB0_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000FEECC_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000FEEE8_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000FEF54_0 {
    u8 pad0[0x20];
    void * unk20;
};

struct Unk_func_000FF924_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_000FFCB0_0 {
    u8 pad0[0x3C];
    s32 unk3C;
};

struct Unk_func_00100A88_0 {
    u8 unk0;
    u8 pad1[0x3];
    s32 unk4;
    u8 pad8[0xAC];
    s32 unkB4;
    s32 unkB8;
};

struct Unk_func_00100C44_0 {
    u8 unk0;
    u8 pad1[0xAF];
    s32 unkB0;
    u8 padB4[0xC];
    s32 unkC0;
};

struct Unk_func_00100C90_0 {
    u8 pad0[0xF4];
    s32 unkF4;
};

struct Unk_func_00100CA0_0 {
    u8 pad0[0xB8];
    s32 unkB8;
};

struct Unk_func_00100D2C_0 {
    u8 pad0[0x138];
    s32 unk138;
};

struct Unk_func_00100D40_0 {
    u8 pad0[0x13C];
    s32 unk13C;
};

struct Unk_func_001017B4_0 {
    u8 unk0;
    u8 pad1[0x3];
    s32 unk4;
    u8 pad8[0x10];
    s32 unk18;
};

struct Unk_func_00101818_0 {
    u8 unk0;
    u8 pad1[0x13];
    u8 unk14;
};

struct Unk_func_00101850_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0010187C_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00101AC0_0 {
    s8 unk0;
    u8 pad1[0x3];
    s32 unk4;
    u32 unk8;
    s32 unkC;
    s32 unk10;
    u8 pad14[0x8];
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00101B74_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00101BC4_0 {
    s8 unk0;
    u8 pad1[0x3];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00101CCC_0 {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00101D50_0 {
    u8 unk0;
    u8 pad1[0x7];
    s32 unk8;
    u8 padC[0x14];
    s32 unk20;
};

struct Unk_func_00102094_0 {
    s8 unk0;
    u8 pad1[0x7];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

struct Unk_func_001021B0_0 {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00102234_0 {
    u8 unk0;
    u8 pad1[0xF];
    s32 unk10;
    u8 pad14[0xC];
    s32 unk20;
};

struct Unk_func_00103AE4_0 {
    u8 pad0[0x84];
    s32 unk84;
};

struct Unk_func_00106744_0 {
    void * unk0;
    u8 pad4[0x18];
    s32 unk1C;
};

struct Unk_func_001067B8_0 {
    void * unk0;
    u8 pad4[0x18];
    s32 unk1C;
};

struct Unk_func_0010682C_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106950_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106984_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_001069B8_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_001069EC_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106A20_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106A8C_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106AD4_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106C68_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106CC8_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106D30_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106D64_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106D98_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106E54_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00106E84_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_0010FA74_0 {
    u8 pad0[0x14F0];
    s32 unk14F0;
    s32 unk14F4;
    s32 unk14F8;
    s32 unk14FC;
};

struct Unk_func_0010FA74_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00116A60_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_00116B6C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00116B6C_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00116BB8_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_00116BD8_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_00117440_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_00117440_0_1E8 *unk1E8;
};

struct Unk_func_00117618_0 {
    u8 pad0[0x1E8];
    struct Unk_Unk_func_00117618_0_1E8 *unk1E8;
};

struct Unk_func_00117A44_0 {
    u8 pad0[0x84];
    s32 unk84;
};

struct Unk_func_00117EB0_0 {
    u8 pad0[0x84];
    s32 unk84;
};

struct Unk_func_00117F74_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0011802C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00118050_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_001182C8_0 {
    u32 unk0;
    s32 unk4;
};

struct Unk_func_00118308_0 {
    u32 unk0;
    s32 unk4;
};

struct Unk_func_00118380_0 {
    u32 unk0;
    s32 unk4;
};

struct Unk_func_001183EC_0 {
    u32 unk0;
    s32 unk4;
};

struct Unk_func_001184B8_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00118500_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00118580_0 {
    s32 unk0;
    s32 (*unk4)(s32);
    s32 unk8;
    s32 unkC;
};

struct Unk_func_001188A0_0 {
    M2C_UNK * unk0;
    u32 unk4;
};

struct Unk_func_001188C8_0 {
    M2C_UNK * unk0;
    u32 unk4;
};

struct Unk_func_00118998_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_0011BF54_0 {
    M2C_UNK * unk0;
    u8 pad4[0x64];
    s32 unk68;
    u8 unk6C;
};

struct Unk_func_0011BFC0_0 {
    M2C_UNK * unk0;
    u8 pad4[0x64];
    s32 unk68;
    u8 unk6C;
};

struct Unk_func_0011C40C_0 {
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

struct Unk_func_0011DEA8_0 {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad3C[0x4];
    s16 unk40;
    u8 pad42[0xE];
    s32 unk50;
    s16 unk54;
};

struct Unk_func_0011F188_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0011F188_temp_v1 {
    void *unk0;
    void **unk4;
};

struct Unk_func_0011FCF0_0 {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad20[0x18];
    s32 unk38;
};

struct Unk_func_0011FE94_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_0011FEB0_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00121C68_0 {
    u8 pad0[0x7C];
    s32 unk7C;
};

struct Unk_func_00121CC0_0 {
    u8 pad0[0x7C];
    void ** unk7C;
};

struct Unk_func_00121CC0_temp_a0 {
    u8 pad0[0xD88];
    M2C_UNK (*unkD88)(void *);
};

struct Unk_func_00121D20_0 {
    u8 pad0[0x7C];
    void ** unk7C;
};

struct Unk_func_00121D20_temp_a0 {
    u8 pad0[0xD90];
    M2C_UNK (*unkD90)(void *);
};

struct Unk_func_00121D4C_0 {
    u8 pad0[0x7C];
    void ** unk7C;
};

struct Unk_func_00121D4C_temp_a0 {
    u8 pad0[0xD98];
    M2C_UNK (*unkD98)(void *);
};

struct Unk_func_0012441C_0 {
    s32 unk0;
    u8 pad4[0x4];
    M2C_UNK (*unk8)(M2C_UNK, void *);
};

struct Unk_func_0012448C_temp_a0 {
    u8 pad0[0xF8];
    M2C_UNK (*unkF8)(void *);
};

struct Unk_func_0012480C_0 {
    u8 pad0[0x600];
    s32 unk600;
    s32 unk604;
    s32 unk608;
    s32 unk60C;
};

struct Unk_func_00124BE0_0 {
    u8 pad0[0xDBC];
    void *unkDBC;
};

struct Unk_func_00124CA4_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00124CE0_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00124D28_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00124D70_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00124DA0_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00124F34_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00124F64_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00124F94_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00124FC4_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00124FF4_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00125024_0 {
    u8 pad0[0xDBC];
    s32 unkDBC;
};

struct Unk_func_00139724_temp_s0 {
    u8 pad0[0x4];
    s16 unk4;
    u8 pad6[0x22];
    s16 unk28;
    u8 pad2A[0x2];
    s32 unk2C;
};

struct Unk_func_001449CC_0 {
    u8 pad0[0x4];
    struct Unk_func_001449CC_temp_s0 *unk4;
};

struct Unk_func_001449CC_temp_s0 {
    u8 pad0[0x3A74];
    s32 unk3A74;
};

struct Unk_func_001478D0_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0014861C_0 {
    u8 pad0[0x6];
    u8 unk6;
    u8 pad7[0x1];
    u8 unk8;
};

struct Unk_func_00149554_0 {
    struct Unk_func_00149554_temp_a0 *unk0;
    s32 unk4;
    u8 pad8[0x1CB0];
    u16 unk1CB8;
};

struct Unk_func_00149554_temp_a0 {
    u8 pad0[0xE];
    u16 unkE;
};

struct Unk_func_0014981C_0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 (*unkC)(s32, M2C_UNK);
};

struct Unk_func_0014A000_0 {
    u8 pad0[0x1F80];
    s32 unk1F80;
};

struct Unk_func_0014A020_0 {
    u8 pad0[0x1F80];
    s32 unk1F80;
};

struct Unk_func_0014A4E8_0 {
    u8 pad0[0x3C60];
    u16 unk3C60;
};

struct Unk_func_0014E2FC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0014EC0C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00152108_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00152EC0_0 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_func_00152F40_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00152F64_0 {
    u8 pad0[0x90];
    s32 unk90;
};

struct Unk_func_00152F88_0 {
    u8 pad0[0x90];
    s32 unk90;
};

struct Unk_func_00152F9C_0 {
    u8 pad0[0x94];
    s32 unk94;
};

struct Unk_func_00152FC0_0 {
    u8 pad0[0x94];
    s32 unk94;
};

struct Unk_func_00152FD4_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00152FF8_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0015301C_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00153040_0 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_func_00153054_0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_00153068_0 {
    u8 pad0[0x34];
    s32 unk34;
};

struct Unk_func_0015307C_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_00153090_0 {
    u8 pad0[0x3C];
    s32 unk3C;
};

struct Unk_func_0015383C_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00154584_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0015573C_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00155790_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00155A98_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00155AAC_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00155AC0_0 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_func_00155D04_0 {
    s32 unk0;
    u8 pad4[0xC];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_001564A0_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00156D54_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00156D68_0 {
    u8 pad0[0x3C];
    s32 unk3C;
};

struct Unk_func_001573F8_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_001578AC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_001578CC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0015792C_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00158018_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_001582DC_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_001582FC_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00158358_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0015836C_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_001583CC_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_001583E0_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_001584C8_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00158A80_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00158ADC_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00158B08_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00158B84_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00158B98_0 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_func_0015A210_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_0015A244_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0015A2A0_var_v1 {
    void *unk0;
    s32 unk4;
};

struct Unk_func_0015AC44_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0015ACD0_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0015ACE4_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0015B3C8_0 {
    u8 pad0[0x4];
    u32 unk4;
};

struct Unk_func_0015B40C_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_0015B41C_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_0015B430_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_0015B440_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_0015B454_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_0015B464_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_0015B478_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_0015B488_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_0015B4C0_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_func_0015B720_0 {
    u8 pad0[0x64];
    s32 unk64;
    s32 unk68;
    s32 unk6C;
};

struct Unk_func_0015B748_0 {
    u8 pad0[0x70];
    s32 unk70;
};

struct Unk_func_0015B764_0 {
    u8 pad0[0x74];
    s32 unk74;
    s32 unk78;
};

struct Unk_func_0015B788_0 {
    u8 pad0[0x7C];
    s32 unk7C;
    s32 unk80;
};

struct Unk_func_0015B7AC_0 {
    u8 pad0[0x84];
    s32 unk84;
    s32 unk88;
};

struct Unk_func_0015D9E8_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_001689B4_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_001689DC_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00168A04_0 {
    s32 unk0;
    u8 pad4[0x14];
    s32 unk18;
};

struct Unk_func_0016962C_0 {
    u8 pad0[0x20];
    struct Unk_func_0016962C_temp_a0 *unk20;
    u8 pad24[0x4];
    void *unk28;
};

struct Unk_func_0016962C_temp_a0 {
    u8 pad0[0x19];
    u8 unk19;
};

struct Unk_func_001696B0_0 {
    u8 pad0[0x28];
    struct Unk_func_001696B0_temp_a0 *unk28;
    void *unk2C;
};

struct Unk_func_001696B0_temp_a0 {
    u8 pad0[0x11];
    u8 unk11;
};

struct Unk_func_00169784_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_001697B8_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_001697EC_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_0016980C_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_0016982C_0 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_func_00169860_0 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_func_001698E4_0 {
    u8 pad0[0x30];
    u8 * unk30;
};

struct Unk_func_001698F8_0 {
    u8 pad0[0x30];
    struct Unk_Unk_func_001698F8_0_30 *unk30;
};

struct Unk_func_0016990C_0 {
    u8 pad0[0x30];
    struct Unk_Unk_func_0016990C_0_30 *unk30;
};

struct Unk_func_00169B1C_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_0016B04C_0 {
    u8 unk0;
    u8 unk1;
};

struct Unk_func_0016B064_0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
};

struct Unk_jchuff_flush_bits_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_jcphuff_flush_bits_0 {
    u8 pad0[0x18];
    s32 unk18;
    s32 unk1C;
};

struct Unk_multiply_0 {
    s32 unk0;
    u8 pad4[0x184];
    s32 unk188;
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

struct Unk_reset_error_mgr_temp_v0 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0x54];
    s32 unk6C;
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

struct Unk_scePaf_1A468B86_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_scePaf_1B043852_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_scePaf_2120282A_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_21A0C6E0_temp_a0 {
    u8 pad0[0xB0];
    s32 unkB0;
    s32 unkB4;
};

struct Unk_scePaf_224C33F0_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_22B0D7D8_0 {
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

struct Unk_scePaf_3DBE861F_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_409E25A3_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_4129A915_0 {
    u8 pad0[0x1E8];
    void * unk1E8;
};

struct Unk_scePaf_44EB8C62_0 {
    void * unk0;
    u8 pad4[0x344];
    s32 unk348;
    s32 unk34C;
};

struct Unk_scePaf_49CE42F7_0 {
    u8 pad0[0x1C0];
    u8 unk1C0;
};

struct Unk_scePaf_4C5F6657_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
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

struct Unk_scePaf_5CE11C03_0 {
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

struct Unk_scePaf_6A772BF7_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_6B678D44_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_6C6979F0_0 {
    u8 pad0[0x98];
    s32 unk98;
};

struct Unk_scePaf_6CF44237_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
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

struct Unk_scePaf_7796B70B_temp_a0 {
    u8 pad0[0x174];
    s32 unk174;
};

struct Unk_scePaf_79F4AE65_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_8159EB28_0 {
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

struct Unk_scePaf_8CDEDC6F_0 {
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

struct Unk_scePaf_A3761F27_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_A4B48F00_0 {
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

struct Unk_scePaf_BAA76FDE_0 {
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

struct Unk_scePaf_C1579C1D_temp_a0 {
    u8 pad0[0xB8];
    s32 unkB8;
    s32 unkBC;
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

struct Unk_scePaf_CA8CDF32_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_CAF05F1D_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_scePaf_CFAF88AB_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_D153385E_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_D1EE972C_0 {
    u8 pad0[0x1E8];
    void * unk1E8;
};

struct Unk_scePaf_D34D0B82_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
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

struct Unk_scePaf_D7E925A1_temp_a0 {
    u8 pad0[0x13C];
    s32 unk13C;
};

struct Unk_scePaf_D8739C4C_temp_a0 {
    u8 pad0[0x13C];
    s32 unk13C;
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

struct Unk_scePaf_DFB912CB_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_E15A64EA_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_scePaf_EB346F51_0 {
    u32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_scePaf_EB5BDCE1_temp_a0 {
    u8 pad0[0xC8];
    s32 unkC8;
    s32 unkCC;
    s32 unkD0;
};

struct Unk_scePaf_ED2DF238_temp_a0 {
    u8 pad0[0xC0];
    s32 unkC0;
    s32 unkC4;
};

struct Unk_scePaf_EE10AEF1_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
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

struct Unk_scePaf_FCABD0E7_0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
};

struct Unk_vt_func_0005C508_arg0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_vt_func_0005C508_arg1 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_vt_func_000C754C_arg0 {
    u8 pad0[0x18];
    M2C_UNK (*unk18)();
};

struct Unk_vt_func_000C99E0_temp_a0 {
    u8 pad0[0x98];
    M2C_UNK (*unk98)(void **, M2C_UNK, s32);
};

struct Unk_vt_func_000DA424_arg0 {
    u8 pad0[0x10];
    M2C_UNK (*unk10)();
};

struct Unk_vt_func_000DA448_arg0 {
    u8 pad0[0x14];
    M2C_UNK (*unk14)();
};

struct Unk_vt_func_000DA46C_arg0 {
    u8 pad0[0x18];
    M2C_UNK (*unk18)();
};

struct Unk_vt_func_000DA4B4_arg0 {
    u8 pad0[0x20];
    M2C_UNK (*unk20)();
};

struct Unk_vt_func_000DA4D8_arg0 {
    u8 pad0[0x24];
    M2C_UNK (*unk24)();
};

struct Unk_vt_func_000DA4FC_arg0 {
    u8 pad0[0x28];
    M2C_UNK (*unk28)();
};

struct Unk_vt_func_000DD9C8_temp_v0 {
    u8 pad0[0xBC];
    M2C_UNK (*unkBC)(void **, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_000EA4DC_temp_v0 {
    u8 pad0[0x70];
    M2C_UNK (*unk70)(void **, s32, s32);
};

struct Unk_vt_func_000EA528_temp_v0 {
    u8 pad0[0x74];
    M2C_UNK (*unk74)(void **, s32);
};

struct Unk_vt_func_000EA570_temp_v0 {
    u8 pad0[0x78];
    M2C_UNK (*unk78)(void **, s32, s32);
};

struct Unk_vt_func_000EEDD0_arg0 {
    u8 pad0[0x60];
    M2C_UNK (*unk60)(void **);
};

struct Unk_vt_func_000F6184_temp_v1 {
    u8 pad0[0x84];
    s32 (*unk84)(void **);
};

struct Unk_vt_func_000FC018_temp_v1 {
    u8 pad0[0x84];
    s32 (*unk84)(void **);
};

struct Unk_vt_func_000FCC8C_temp_a0 {
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

extern M2C_UNK D_0016EE58;
extern M2C_UNK D_0016EE68;
extern M2C_UNK D_0016EFE0;
extern M2C_UNK D_0016EFF4;
extern M2C_UNK D_0016F010;
extern M2C_UNK D_0016F020;
extern M2C_UNK D_0016F034;
extern M2C_UNK D_0016F090;
extern M2C_UNK D_0016F0A4;
extern M2C_UNK D_0016F0BC;
extern M2C_UNK D_0016F0D4;
extern M2C_UNK D_0016F2F0;
extern M2C_UNK D_0016F328;
extern M2C_UNK D_0016F3E8;
extern M2C_UNK D_0016F3F8;
extern M2C_UNK D_0016F404;
extern M2C_UNK D_0016F410;
extern M2C_UNK D_0016F41C;
extern M2C_UNK D_0016F610;
extern M2C_UNK D_0016FC7C;
extern M2C_UNK D_0016FD08;
extern M2C_UNK D_0016FE80;
extern M2C_UNK D_001702B8;
extern M2C_UNK D_001703B0;
extern M2C_UNK D_001704F0;
extern M2C_UNK D_001705A0;
extern M2C_UNK D_00170D48;
extern M2C_UNK D_00170F2C;
extern M2C_UNK D_00170F78;
extern M2C_UNK D_00171190;
extern M2C_UNK D_00171338;
extern M2C_UNK D_0017135C;
extern M2C_UNK D_00171380;
extern M2C_UNK D_001714B0;
extern M2C_UNK D_00171564;
extern M2C_UNK D_0017158C;
extern M2C_UNK D_001715A8;
extern M2C_UNK D_001715C4;
extern M2C_UNK D_001715E0;
extern M2C_UNK D_00171640;
extern M2C_UNK D_00171684;
extern M2C_UNK D_001716C0;
extern M2C_UNK D_00171704;
extern M2C_UNK D_001717B4;
extern M2C_UNK D_00172674;
extern M2C_UNK D_00173720;
extern M2C_UNK D_00175084;
extern M2C_UNK D_001750B8;
extern M2C_UNK D_001750EC;
extern M2C_UNK D_0017581C;
extern M2C_UNK D_0017591C;
extern M2C_UNK D_00175EFC;
extern M2C_UNK D_00175F08;
extern M2C_UNK D_00175F10;
extern M2C_UNK D_00190E98;
extern M2C_UNK D_00190F98;
extern M2C_UNK D_00191098;
extern M2C_UNK D_001910AC;
extern M2C_UNK D_001910B8;
extern M2C_UNK D_001910CC;
extern M2C_UNK D_001910D8;
extern M2C_UNK D_001910EC;
extern M2C_UNK D_00191190;
extern M2C_UNK D_001911A4;
extern M2C_UNK D_00192EFC;
extern M2C_UNK D_00196FCC;
extern M2C_UNK D_001977CC;
extern M2C_UNK D_00199128;
extern M2C_UNK D_00199150;
extern M2C_UNK D_00199A10;
extern M2C_UNK D_00199AF8;
extern M2C_UNK D_00199C78;
extern M2C_UNK D_00199D28;
extern M2C_UNK D_0019A3B8;
extern M2C_UNK D_0019A4A0;
extern M2C_UNK D_0019A7B8;
extern M2C_UNK D_0019A890;
extern M2C_UNK D_0019AA20;
extern M2C_UNK D_0019AB08;
extern M2C_UNK D_0019AD38;
extern M2C_UNK D_0019AE48;
extern M2C_UNK D_0019B058;
extern M2C_UNK D_0019B398;
extern M2C_UNK D_0019BC18;
extern M2C_UNK D_0019BCFC;
extern M2C_UNK D_0019BD0C;
extern M2C_UNK D_0019CEF8;
extern M2C_UNK D_0019CFE8;
extern M2C_UNK D_0019D1F0;
extern M2C_UNK D_0019D204;
extern M2C_UNK D_0019D210;
extern M2C_UNK D_0019D238;
extern M2C_UNK D_0019D328;
extern M2C_UNK D_0019D390;
extern s32 D_001A2DD8;
extern s32 D_001A34E4;
extern s32 D_001A358C;
extern s32 D_001A3CC0;
extern s32 D_001A3ED0;
extern s32 D_001A45D8;
extern s32 D_001A45DC;
extern s32 D_001A45E0;
extern s32 D_001A4624;
extern M2C_UNK D_001A4628;
extern s32 D_001A4694;
extern s32 D_001A47B0;
extern s32 D_001A47B4;
extern s32 D_001A47B8;
extern s32 D_001A47BC;
extern s32 D_001A47C0;
extern s32 D_001A47C4;
extern s32 D_001A47C8;
extern s32 D_001A47CC;
extern s32 D_001A47D0;
extern s32 D_001A47D4;
extern s32 D_001A47D8;
extern s32 D_001A47DC;
extern s32 D_001A4808;
extern s32 D_001A480C;
extern s32 D_001A4810;
extern s32 D_001A4814;
extern s32 D_001A4818;
extern s32 D_001A481C;
extern s32 D_001A4820;
extern s32 D_001A4824;
extern s32 D_001A4828;
extern s32 D_001A482C;
extern s32 D_001A4930;
extern s32 D_001A4934;
extern s32 D_001A4BF4;
extern struct Unk_D_001A4E1C *D_001A4E1C;
extern u32 *D_001A4E30;
extern s32 D_001A4E34;
extern s32 D_001A4E38;
extern s32 D_001A4E3C;
extern u8 D_001A4E40;
extern s32 D_001A4E44;
extern u8 D_001A4E48;
extern s32 D_001A4E4C;
extern s32 D_001A5068;
extern s32 D_001A506C;
extern s32 D_001A5240;
extern M2C_UNK D_001A5244;
extern M2C_UNK D_001A5250;
extern M2C_UNK D_001A525C;
extern s32 D_001A5270;
extern s32 D_001A5274;
extern s32 D_001A5278;
extern s32 D_001A527C;
extern s32 D_001A5280;
extern s32 D_001A52BC;
extern s32 D_001A52C0;
extern struct D_001A52C4_s D_001A52C4;
extern s32 D_001A52D4;
extern s32 D_001A52DC;
extern s32 D_001A52FC;
extern s32 D_001A5300;
extern s32 D_001A53C0;
extern s32 D_001A53C4;
extern M2C_UNK D_001A53C8;
extern s32 D_001A53E0;
extern s32 D_001A53FC;
extern s32 D_001A5400;
extern void *D_001A5420;
extern s32 D_001A5424;
extern M2C_UNK D_001A542C;
extern s32 D_001A5B34;
extern s32 *D_001A5B44;
extern s32 *D_001A5B74;
extern s32 D_001A5B78;
extern s32 D_001A5B80;
extern s32 D_001A5BA0;
extern s32 D_001A5BA4;
extern s32 D_001A5BA8;
extern u32 D_001A5C80;
extern struct D_001A7CC0_s D_001A7CC0;
extern struct D_001A7CEC_s D_001A7CEC;
extern M2C_UNK D_001A7D10;
extern u8 D_001A7D60;
extern s8 D_001A7D88;
extern M2C_UNK D_001A7DA8;
extern s32 D_001A7DD8;
extern s32 D_001A7DDC;
extern s32 D_001A7DE0;
extern s32 D_001A7E08;
extern s32 D_001A7E0C;
extern s32 D_001A7E14;
extern s32 D_001A7E18;
extern s32 D_001A7E20;
extern s32 D_001A7E24;
extern struct D_001A7E2C_s D_001A7E2C;
extern struct Unk_D_001A7EE0 *D_001A7EE0;
extern M2C_UNK D_001ABCF0;
extern M2C_UNK D_001ABCF4;
extern s32 D_001ABCF8;
extern s32 D_001ABCFC;
extern s32 D_001ABD00;
extern s32 D_001ABD04;
extern s32 D_001ABD08;
extern M2C_UNK D_001AF50C;
extern s32 D_001D7798;
extern s32 D_001D779C;
extern s32 D_001D77A0;
extern s32 D_001D7A04;
extern struct D_001D7A10_s D_001D7A10;
extern s32 D_001D7A3C;
extern struct Unk_D_001D7A54 *D_001D7A54;
extern s32 D_001D7A58;
extern s32 D_001D7A64;
extern s32 D_001D7A68;
extern struct D_001E0ECC_s D_001E0ECC;
extern M2C_UNK D_001E208C;
extern s16 D_001E279A;
extern s16 D_001E27A2;
extern struct Unk_D_001E2988 *D_001E2988;
extern s16 D_001E4FC6;
extern M2C_UNK D_001E504A;
extern s16 D_001E50B0;
extern s16 D_001E50C0;
extern M2C_UNK D_001E7BE8;
extern s16 D_001E7C64;
extern M2C_UNK D_001E8ED8;
extern M2C_UNK func_00012530;
extern M2C_UNK func_00015C30;
extern M2C_UNK func_00015D28;
extern M2C_UNK func_000173DC;
extern M2C_UNK func_0006F9CC;
extern M2C_UNK func_0007BC14;
extern M2C_UNK func_00083C54;
extern M2C_UNK func_0008C394;

s32 TIFFCheckpointDirectory(struct Unk_TIFFCheckpointDirectory_0 *arg0);
void TIFFDefaultStripSize(void *arg0);
s32 TIFFFetchData();
s32 TIFFFetchDoubleArray(void);
M2C_UNK *TIFFGetBitRevTable(s32 arg0);
s32 TIFFNumberOfTiles(void *arg0);
void TIFFRGBAImageEnd(struct Unk_TIFFRGBAImageEnd_0 *arg0);
void TIFFStripSize(s32 arg0);
void TIFFTileSize(struct Unk_TIFFTileSize_0 *arg0);
s32 TIFFVTileSize(s32, s32);
void TIFFWriteDirectory(void *arg0);
void TIFFWriteDoubleArray(void);
u32 _TIFFDefaultStripSize(s32 arg0, s32 arg1);
M2C_UNK *_TIFFGetExifFieldInfo(s32 *arg0);
M2C_UNK *_TIFFGetFieldInfo(s32 *arg0);
s32 _TIFFWriteDirectory(void *, M2C_UNK);
void _TIFFsetByteArray(s32 arg0, s32 arg1, s32 arg2);
void _TIFFsetDoubleArray(s32 arg0, s32 arg1, s32 arg2);
void _TIFFsetFloatArray(s32 arg0, s32 arg1, s32 arg2);
void _TIFFsetLongArray(s32 arg0, s32 arg1, s32 arg2);
void _TIFFsetNString(s32 arg0, s32 arg1, s32 arg2);
void _TIFFsetShortArray(s32 arg0, s32 arg1, s32 arg2);
void _TIFFsetString(s32 arg0, M2C_UNK arg1);
void acosf(void);
s32 add_huff_table(s32, s32, s32, s32);
void cosf(void);
s32 crc32(M2C_UNK, M2C_UNK, M2C_UNK);
s32 emit_2bytes(s32, s32);
M2C_UNK emit_byte();
void emit_dac(void);
void emit_dri(struct Unk_emit_dri_0 *arg0);
void emit_jfif_app0(struct Unk_emit_jfif_app0_0 *arg0);
s32 emit_marker(s32, s32);
s32 expand_right_edge(s32, s32, s32, s32);
s32 fill_a_scan(struct Unk_fill_a_scan_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void *fill_scans(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void finish_pass_1_quant(void);
void floorf(void);
void free(void);
void fullsize_downsample(struct Unk_fullsize_downsample_0 *arg0, struct Unk_fullsize_downsample_1 *arg1, s32 arg2, s32 arg3);
M2C_UNK func_00000000();
M2C_UNK func_00000180(M2C_UNK, M2C_UNK);
void func_00000480(struct Unk_func_00000480_0 *arg0);
void func_00000490(struct Unk_func_00000490_0 *arg0);
s32 func_00000CE0(struct Unk_func_00000CE0_0 *arg0);
s32 func_00000DF4(struct Unk_func_00000DF4_0 *arg0);
s32 func_000010AC(s32, s32, s32);
s32 func_00001174(s32, s32, s32, s32);
M2C_UNK func_00001288(s32, s32);
void func_00001DB4(void **arg0, void *arg1);
void func_00001DE4(struct Unk_func_00001DE4_0 *arg0);
void func_00001E34(struct Unk_func_00001E34_0 *arg0);
void func_00001FE4(void);
M2C_UNK func_00002000();
s32 func_0000202C(s32, s32);
s32 func_00002AE4(s32, s32);
s32 func_00002C90(void);
M2C_UNK func_00003724(s32, s32);
s32 func_0000A6DC(struct Unk_func_0000A6DC_0 *arg0);
void func_0000ACA8(struct Unk_func_0000ACA8_0 *arg0, s32 arg1);
void func_0000ADD8(void);
M2C_UNK func_0000B914(void *, s32);
void func_0000C0A0(struct Unk_func_0000C0A0_0 *arg0);
void func_0000C174(struct Unk_func_0000C174_0 *arg0);
void func_0000C248(struct Unk_func_0000C248_0 *arg0);
void func_0000C280(void);
void func_0000C29C(void);
void func_0000C2B8(void);
void func_0000C2D4(void);
void func_0000C2F0(void);
void func_0000C30C(void);
void func_0000C328(void);
void func_0000C344(s32 *arg0, s32 arg1);
void func_0000C364(void);
s32 *func_0000C380(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 *func_0000C3E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0000C420(s32 arg0, s32 *arg1);
void func_0000C450(void **arg0, void *arg1);
s32 func_0000C480(s32, s32);
s32 *func_0000C768(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0000C818(void);
void func_0000C834(s32 arg0, s32 *arg1);
s32 *func_0000C864(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0000C89C(s32 *arg0, s32 arg1);
M2C_UNK func_0000C8BC(s32, s32);
M2C_UNK func_0000C934(s32, M2C_UNK);
s32 *func_0000CA14(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
M2C_UNK func_0000CA7C();
M2C_UNK func_0000CAD4();
M2C_UNK func_0000CB2C();
M2C_UNK func_0000CB58();
M2C_UNK func_0000CBB0();
M2C_UNK func_0000CBDC();
M2C_UNK func_0000CC34();
M2C_UNK func_0000CC60();
M2C_UNK func_0000CC80();
s32 func_0000CCAC(M2C_UNK, M2C_UNK);
s32 func_0000CEF4(M2C_UNK, M2C_UNK);
void func_0000CF4C(s32 arg0, s32 arg1);
s32 func_0000CF90(M2C_UNK, M2C_UNK);
M2C_UNK func_0000D168();
void func_0000D1C0(s32 arg0, s32 arg1);
s32 func_0000D204(M2C_UNK, M2C_UNK);
M2C_UNK func_0000D2DC();
s32 func_0000D4EC(M2C_UNK, M2C_UNK);
M2C_UNK func_0000DB08(s32, void *);
M2C_UNK func_0000DE6C(s32, void *);
void func_0000E9D4(M2C_UNK **arg0);
void func_0000E9E4(M2C_UNK **arg0);
void func_0000EA0C(M2C_UNK **arg0);
void func_0000EA1C(M2C_UNK **arg0);
void func_0000EA94(struct Unk_func_0000EA94_0 *arg0);
M2C_UNK func_0000EAD4(void *);
void func_0000EB14(struct Unk_func_0000EB14_0 *arg0);
void func_0000EB48(struct Unk_func_0000EB48_0 *arg0);
void func_0000EBA4(struct Unk_func_0000EBA4_0 *arg0);
void func_0000EBF8(struct Unk_func_0000EBF8_0 *arg0);
M2C_UNK func_0000ED28(void *);
M2C_UNK func_0000FBD4(M2C_UNK, M2C_UNK);
void func_0000FC80(void);
void func_0000FCA0(void);
s32 *func_0000FCC0(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0000FD60(s32 arg0, s32 arg1);
s32 *func_0000FDA4(s32 *arg0, s32 arg1, s32 arg2);
s32 func_0000FDDC(M2C_UNK, M2C_UNK);
M2C_UNK func_000100A4(s32, void *);
void func_00010700(void);
M2C_UNK func_0001071C();
void func_00010774(void);
M2C_UNK func_00010790();
M2C_UNK func_00010B58(s32, M2C_UNK, M2C_UNK);
s32 func_000112F0(s32);
void func_000117C0(void **arg0);
s32 func_00011D34(s32 arg0, s32 arg1);
M2C_UNK *func_00011D68(void);
s32 func_00011FBC(s32 arg0, s32 arg1);
M2C_UNK *func_00011FF0(void);
s32 func_00012138(void);
s32 func_00012140(void);
s32 func_00012234(s32 arg0, s32 arg1);
M2C_UNK *func_00012268(void);
s32 func_00012370(s32 arg0, s32 arg1);
M2C_UNK *func_000123A4(void);
s32 func_000124EC(void);
s32 func_000124F4(void);
s32 func_00012688(s32 arg0, s32 arg1);
M2C_UNK *func_000126BC(void);
s32 func_00012BF0(s32 arg0, s32 arg1);
M2C_UNK *func_00012C24(void);
s32 func_00012D54(void);
s32 func_00012D5C(void);
s32 func_00012E58(s32 arg0, s32 arg1);
M2C_UNK *func_00012E8C(void);
s32 func_000130A0(s32 arg0, s32 arg1);
M2C_UNK *func_000130D4(void);
s32 func_00013204(void);
s32 func_0001320C(void);
s32 func_00013308(s32 arg0, s32 arg1);
M2C_UNK *func_0001333C(void);
void func_00013BB0(void);
M2C_UNK func_00013BCC();
M2C_UNK func_00013BF8(s32);
s32 func_00013DDC(s32 arg0, s32 arg1);
M2C_UNK *func_00013E10(void);
s32 func_00014A38(s32 arg0, s32 arg1);
M2C_UNK *func_00014A6C(void);
void ***func_00014C08(void ***arg0, struct Unk_func_00014C08_1 *arg1, void **arg2);
void func_00014D64(void **arg0);
s32 func_00014DE0(s32, s32, s32);
s32 func_00014F04(s32 arg0, s32 arg1);
M2C_UNK *func_00014F38(void);
s32 func_00015868(s32 arg0, s32 arg1);
M2C_UNK *func_0001589C(void);
void func_00015B98(struct Unk_func_00015B98_0 *arg0, struct Unk_func_00015B98_1 *arg1, s32 arg2);
void func_00015BE4(struct Unk_func_00015BE4_0 *arg0, struct Unk_func_00015BE4_1 *arg1, s32 arg2);
s32 func_00015ED4(s32 arg0, s32 arg1);
M2C_UNK *func_00015F08(void);
void func_00015F14(struct Unk_func_00015F14_0 *arg0, s32 arg1, s32 arg2);
void func_00015F64(struct Unk_func_00015F64_0 *arg0, s32 arg1, s32 arg2);
s32 func_00015FC8(s32 arg0, s32 arg1);
M2C_UNK *func_00015FFC(void);
s32 func_00016704(s32 arg0, s32 arg1);
M2C_UNK *func_00016738(void);
void func_00017270(struct Unk_func_00017270_0 *arg0, struct Unk_func_00017270_1 *arg1, s32 arg2);
M2C_UNK func_0001B198(s32 *);
void func_0001BB84(s32 **arg0, s32 **arg1);
M2C_UNK *func_0001C91C(void);
M2C_UNK *func_0001C928(void);
M2C_UNK *func_0001C934(void);
M2C_UNK *func_0001C964(void);
M2C_UNK *func_0001C970(void);
void func_000254C0(void);
void func_000254EC(void);
void func_000272A0(struct Unk_func_000272A0_0 *arg0);
void func_00027324(struct Unk_func_00027324_0 *arg0);
void func_000273A8(struct Unk_func_000273A8_0 *arg0);
void func_000273B8(struct Unk_func_000273B8_0 *arg0);
void func_0002742C(struct Unk_func_0002742C_0 *arg0);
void func_0002743C(struct Unk_func_0002743C_0 *arg0);
void func_0002748C(void);
void func_000274A8(void);
void func_000274C4(struct Unk_func_000274C4_0 *arg0, s32 arg1);
void func_00027584(struct Unk_func_00027584_0 *arg0, s32 arg1);
void func_00027644(struct Unk_func_00027644_0 *arg0, s32 arg1);
void func_0002770C(struct Unk_func_0002770C_0 *arg0, s32 arg1);
M2C_UNK func_000278D0(void *, s32);
void func_00027A24(struct Unk_func_00027A24_0 *arg0);
M2C_UNK func_00027AE4();
M2C_UNK func_00027AF4();
s32 func_00027B10(s32, s32);
s32 func_00027C28(s32, s32);
s32 func_00027D40(s32, s32);
s32 func_00027E50(s32, s32);
s32 func_00027F68(s32, s32);
M2C_UNK *func_000281D8(void);
s32 func_00028C38(s32 arg0, s32 arg1);
M2C_UNK *func_00028C6C(void);
s32 func_000295B8(s32 arg0, s32 arg1);
M2C_UNK *func_000295EC(void);
u8 func_0002A23C(void);
void func_0002A318(s32 arg0, s32 arg1);
void func_0002CB34(s32 arg0, s32 *arg1, M2C_UNK arg2);
void func_0002CB8C(s32 arg0, s32 arg1, s32 arg2);
void func_0002CBE0(s32 arg0, s32 arg1, s32 arg2);
void func_0002CC34(s32 arg0, s32 *arg1, s32 arg2, s32 arg3);
void func_0002CC74(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0002CC90(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0002CCAC(void);
void func_0002CCC8(void);
void func_0002CCE4(void);
void func_0002CD00(void);
void func_0002CD1C(void);
void func_0002CD38(void);
void func_0002CD54(void);
void func_0002CD70(void);
M2C_UNK func_0002CD9C(s32, s32, M2C_UNK, s32);
s32 *func_0002CE98(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0002CED0(s32 arg0, s32 *arg1);
s32 func_0002CF30(M2C_UNK, M2C_UNK);
void func_0002CFF4(s32 arg0, s32 arg1);
s32 func_0002D1D8(s32, s32);
s32 func_0002D538(s32 arg0, s32 arg1);
M2C_UNK *func_0002D56C(void);
M2C_UNK *func_0002DD08(void);
void func_0002E200(struct Unk_func_0002E200_0 *arg0);
void func_0002E248(s32 arg0);
void func_0002E988(void);
void func_0002E9A4(void);
void func_0002E9C0(void);
s32 *func_0002E9DC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
M2C_UNK func_0002EAC8(s32);
M2C_UNK func_0002EB0C();
s32 func_0002EB64(M2C_UNK, M2C_UNK);
s32 func_0002F598(s32 arg0, s32 arg1);
M2C_UNK *func_0002F5CC(void);
s32 func_0002FC54(s32 arg0, s32 arg1);
M2C_UNK *func_0002FC88(void);
void func_0003191C(struct Unk_func_0003191C_0 *arg0);
void func_00031CC0(void);
M2C_UNK func_00031CDC(s32 *);
void func_00031CF8(void);
void func_00031D14(void);
void func_00031D30(void);
void func_00031D4C(void);
void func_00031D68(void);
void func_00031D84(void);
s32 func_00031DB0(M2C_UNK);
void func_00032A0C(void);
M2C_UNK func_000331AC();
void func_00035FFC(void);
void func_00036018(void);
void func_00036034(void);
void func_00036050(void);
s32 func_000360C8(s32 arg0, s32 arg1);
M2C_UNK *func_000360FC(void);
void func_00036F48(struct Unk_func_00036F48_0 *arg0);
s32 func_0003AEB0(s32, M2C_UNK);
M2C_UNK func_0003AF68(s32, void *);
void func_0003B020(void);
void func_0003B03C(void);
s32 func_0003B23C(s32 arg0, s32 arg1);
M2C_UNK *func_0003B270(void);
s32 func_0003B488(struct Unk_func_0003B488_0 *arg0, s32 arg1, s32 *arg2);
s32 func_0003B8B4(s32 arg0, s32 arg1);
M2C_UNK *func_0003B8E8(void);
s32 func_0003BA60(struct Unk_func_0003BA60_0 *arg0, s32 arg1, s32 *arg2);
s32 func_0003EBB0(s32 arg0, s32 arg1);
M2C_UNK *func_0003EBE4(void);
s32 *func_0003F340();
s32 func_0003F424(s32);
void func_0003F7CC(s32 arg0, s32 arg1, s32 arg2);
void func_0003F8BC(s32 arg0, s32 arg1, s32 arg2);
void func_0003FA44(s32 arg0, s32 arg1, s32 arg2);
s32 func_0004051C(s32, s32, s32, s32, s32);
s32 func_00040CB4(s32, s32, s32, s32, s32);
s32 func_00041424(struct Unk_func_00041424_0 *arg0);
s32 func_00041960(void);
s32 func_00042054(s32 arg0);
M2C_UNK func_00042208(s32);
s32 func_00042800(s32, s32, s32);
s32 func_00042C70(s32, s32);
M2C_UNK func_00042E48(s32);
s32 func_00042F74(s32, s32);
s32 func_0004303C(struct Unk_func_0004303C_0 *arg0, s32 arg1);
s32 func_00043080(struct Unk_func_00043080_0 *arg0, s32 arg1);
s32 func_00043458(s32 arg0);
s32 func_0004352C(struct Unk_func_0004352C_0 *arg0);
void func_000439FC(M2C_UNK **arg0);
void func_00043A2C(M2C_UNK **arg0);
void func_00043A54(M2C_UNK **arg0);
void func_00043A7C(M2C_UNK **arg0);
s32 func_0004414C(void);
void func_00044154(struct Unk_func_00044154_0 *arg0);
void func_00044168(struct Unk_func_00044168_0 *arg0);
s32 func_0004417C(s32);
void func_00044190(struct Unk_func_00044190_0 *arg0);
void func_000441A4(struct Unk_func_000441A4_0 *arg0);
s32 func_000441D0(struct Unk_func_000441D0_0 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
void func_00044394(struct Unk_func_00044394_0 *arg0);
void func_00044678(void);
void func_00044680(M2C_UNK **arg0);
void func_00044690(M2C_UNK **arg0);
s32 func_00044714(s32, s32, s32);
void func_00044770(M2C_UNK **arg0);
void func_00044798(M2C_UNK **arg0);
void func_000447C0(M2C_UNK **arg0);
void func_000466F4(struct Unk_func_00044154_0 *arg0, s32 arg1);
void func_00046748(M2C_UNK **arg0);
void func_00046770(M2C_UNK **arg0);
void func_00046798(M2C_UNK **arg0);
void func_000472DC(struct Unk_func_000472DC_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00047334(struct Unk_func_00047334_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0004738C(struct Unk_func_0004738C_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00047518(struct Unk_func_00047518_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_00048064(struct Unk_func_00048064_0 *arg0, s32 arg1, s32 arg2);
s32 func_0004819C(struct Unk_func_0004819C_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_00048404(struct Unk_func_00048404_0 *arg0, s32 arg1, s32 arg2);
s32 func_0004853C(struct Unk_func_0004853C_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_000486FC(M2C_UNK **arg0);
void func_00048724(M2C_UNK **arg0);
void func_0004874C(M2C_UNK **arg0);
s32 func_00048F04(void);
void func_00048F0C(struct Unk_func_00048F0C_0 *arg0);
void func_00049170(struct Unk_func_00049170_0 *arg0);
void func_000491C8(void);
void func_000491D0(void);
M2C_UNK func_0004929C();
void func_00049484(struct Unk_func_00049484_0 *arg0);
void func_000494A4(struct Unk_func_000494A4_0 *arg0);
void func_000494C4(struct Unk_func_000494C4_0 *arg0, s32 arg1);
void func_000494E4(struct Unk_func_000494E4_0 *arg0, s32 arg1);
void func_00049504(void);
void func_00049520(void);
s32 func_000498D8(struct Unk_func_000498D8_0 *arg0, s32 arg1);
s32 func_00049B9C(struct Unk_func_00049B9C_0 *arg0);
M2C_UNK func_00049D58();
void func_00049E00(struct Unk_func_00049E00_0 *arg0);
void func_0004A1F8(M2C_UNK **arg0);
void func_0004A228(M2C_UNK **arg0);
void func_0004A258(M2C_UNK **arg0);
void func_0004A280(M2C_UNK **arg0);
void func_0004A2A8(M2C_UNK **arg0);
void func_0004AEA4(M2C_UNK **arg0);
void func_0004AED4(M2C_UNK **arg0);
void func_0004AF04(M2C_UNK **arg0);
void func_0004AF2C(M2C_UNK **arg0);
void func_0004AF54(M2C_UNK **arg0);
void func_0004B550(M2C_UNK **arg0);
void func_0004B580(M2C_UNK **arg0);
void func_0004B5B0(M2C_UNK **arg0);
void func_0004B5D8(M2C_UNK **arg0);
void func_0004B600(M2C_UNK **arg0);
void func_0004C57C(struct Unk_func_0004C57C_0 *arg0, s32 arg1);
void func_0004C5C4(struct Unk_func_0004C5C4_0 *arg0, s32 arg1);
s32 func_0004C76C(s32, s32);
void func_0004CA7C(struct Unk_func_0004CA7C_0 *arg0);
s32 func_0004CB9C(s32, s32, s32, s32, s32, s32, s32);
s32 func_0004CCB0(s32, s32, s32, s32, s32, s32);
s32 func_0004D6CC(void);
s32 func_0004D6D4(void);
s32 func_0004D6DC(void);
s32 func_0004D6E4(void);
s32 func_0004D6EC(void);
s32 func_0004D6F4(void);
s32 func_0004D6FC(void);
s32 func_0004D704(void);
void func_0004D70C(M2C_UNK **arg0);
void func_0004D71C(M2C_UNK **arg0);
s32 func_0004D744(void);
void func_0004D74C(struct Unk_func_0004D74C_0 *arg0);
void func_0004D764(struct Unk_func_0004D764_0 *arg0);
void func_0004D77C(M2C_UNK **arg0);
void func_0004D78C(M2C_UNK **arg0);
void func_0004D79C(M2C_UNK **arg0);
M2C_UNK func_0004E6C4(M2C_UNK, M2C_UNK);
void func_0004E750(void);
void func_0004E770(void);
s32 func_0004E790(struct Unk_func_0004E790_0 *arg0, u32 arg1);
s32 func_0004E7DC(void);
s32 func_0004E948(s32 arg0);
s32 func_0004EB38(void);
s32 func_0004EB40(void);
void func_0004ECF4(M2C_UNK **arg0);
void func_0004ED04(M2C_UNK **arg0);
void func_0004EDC4(M2C_UNK **arg0);
void func_0004EDD4(M2C_UNK **arg0);
void func_0004EDE4(M2C_UNK **arg0);
void func_0004EE0C(void **arg0);
M2C_UNK func_000506EC(s32);
void func_000507E8(struct Unk_func_000507E8_0 *arg0);
void func_0005091C(void);
s32 func_00050C38(void);
void func_00050DD4(struct Unk_func_00050DD4_0 *arg0, s32 arg1, s32 arg2);
s32 func_00051108(struct Unk_func_00051108_0 *arg0);
s32 func_00051160(s32 arg0);
s32 func_000511B0(struct Unk_func_000511B0_0 *arg0);
M2C_UNK func_00051204(M2C_UNK, M2C_UNK);
void func_00051290(void);
void func_000512B0(void);
void func_00051318(M2C_UNK **arg0);
void func_00051328(M2C_UNK **arg0);
void func_00051338(M2C_UNK **arg0);
s32 func_00051360(s32 arg0, u32 arg1);
s32 func_000520E8(void);
void func_00052230(struct Unk_func_00052230_0 *arg0);
void func_0005224C(struct Unk_func_0005224C_0 *arg0);
void func_00052268(struct Unk_func_00052268_0 *arg0);
M2C_UNK func_000522D4(M2C_UNK, M2C_UNK);
void func_00052360(void);
void func_00052380(void);
s32 func_000523A0(s32);
void func_000524AC(struct Unk_func_000524AC_0 *arg0);
void func_000527D4(struct Unk_func_000527D4_0 *arg0);
void func_00052B98(struct Unk_func_00052B98_0 *arg0);
void func_00052BB4(struct Unk_func_00052BB4_0 *arg0);
void func_00052BD0(struct Unk_func_00052BD0_0 *arg0);
void func_00052BEC(struct Unk_func_00052BEC_0 *arg0);
void func_00052C08(struct Unk_func_00052C08_0 *arg0);
void func_00052C24(struct Unk_func_00052C24_0 *arg0);
M2C_UNK func_000533A8(s32);
M2C_UNK func_000534B4(s32);
M2C_UNK func_00053500(s32);
void func_00053690(M2C_UNK **arg0);
void func_000536A0(M2C_UNK **arg0);
void func_000536B0(M2C_UNK **arg0);
void func_00055250(s32 *arg0, s32 arg1, s32 arg2);
s32 func_000552E0(void);
s32 func_000552E8(s32 *arg0);
void func_00055340(void);
s32 func_0005535C(void);
void func_00055364(void);
s32 func_00055380(void);
s32 func_00055388(struct Unk_func_00055388_0 *arg0);
s32 func_00055390(void);
void func_00055398(void);
M2C_UNK func_000553A0();
M2C_UNK func_0005544C();
s32 func_00055770(void);
s32 func_00055B1C(void);
s32 func_00055B24(struct Unk_func_00055B24_0 *arg0);
M2C_UNK func_00055B88(M2C_UNK, M2C_UNK);
void func_00055C14(void);
void func_00055C34(void);
void func_00055CEC(M2C_UNK **arg0);
void func_00055CFC(M2C_UNK **arg0);
void func_00055D0C(M2C_UNK **arg0);
s32 func_00057908(void);
s32 func_00057E84(struct Unk_func_00057E84_0 *arg0);
s32 func_00057EB0(void);
M2C_UNK func_00057F24(M2C_UNK, M2C_UNK);
void func_00057FB0(void);
void func_00057FD0(void);
s32 func_00057FF0(s32 arg0, u32 arg1, s32 arg2, u32 arg3);
void func_00058030(struct Unk_func_00058030_0 *arg0, s32 arg1, s32 arg2);
void func_00058070(struct Unk_func_00058070_0 *arg0);
void func_00058090(struct Unk_func_00058090_0 *arg0);
void func_000580B0(struct Unk_func_000580B0_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000580D8(struct Unk_func_000580D8_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00058420(struct Unk_func_00058420_0 *arg0);
void func_00058478(s32 arg0, s32 arg1, s32 arg2);
void func_0005849C(s32 arg0, s32 arg1, s32 arg2);
s32 func_00058A64(s32, s32, s32);
M2C_UNK func_00058D4C(s32);
void func_0005C0BC(struct Unk_func_0005C0BC_0 *arg0, s32 arg1);
s32 func_0005C0E0(struct Unk_func_0005C0E0_0 *arg0);
s32 func_0005C0E8(struct Unk_func_0005C0E8_0 *arg0);
void func_0005C508(struct Unk_vt_func_0005C508_arg0 **arg0, struct Unk_vt_func_0005C508_arg1 **arg1);
M2C_UNK func_0005CB58();
s32 func_0005FEFC(s32 arg0);
s32 func_0005FFE0(s32, s32, s32, s32);
s32 func_00067A5C(void);
void func_00067A64(void);
void func_00067A6C(struct Unk_func_00067A6C_0 *arg0, s32 arg1);
s32 func_000680B4(s32 *arg0);
s32 func_000680BC(s32 *arg0, s32 arg1);
s32 func_000680C8(struct Unk_func_000680C8_0 *arg0);
s32 func_000680D0(struct Unk_func_000680D0_0 *arg0, s32 arg1);
s32 func_000680DC(struct Unk_func_000680DC_0 *arg0);
s32 func_000680E4(struct Unk_func_000680E4_0 *arg0, s32 arg1);
s32 func_000680F0(struct Unk_func_000680F0_0 *arg0);
s32 func_000680F8(struct Unk_func_000680F8_0 *arg0, s32 arg1);
s32 func_00068104(struct Unk_func_00068104_0 *arg0);
s32 func_00068110(struct Unk_func_00068110_0 *arg0);
u16 func_00068118(struct Unk_func_00068118_0 *arg0);
s32 func_00068120(struct Unk_func_00068120_0 *arg0);
s32 func_00068128(struct Unk_func_00068128_0 *arg0);
s32 func_00068130(struct Unk_func_00068130_0 *arg0);
s32 func_0006813C(struct Unk_func_0006813C_0 *arg0);
s32 func_00068148(struct Unk_func_00068148_0 *arg0);
s32 func_00068154(struct Unk_func_00068154_0 *arg0);
s32 func_00068164(struct Unk_func_00068164_0 *arg0);
s32 func_0006816C(struct Unk_func_0006816C_0 *arg0);
s32 func_00068174(struct Unk_func_00068174_0 *arg0);
s32 func_0006817C(struct Unk_func_0006817C_0 *arg0);
s32 func_00068184(struct Unk_func_00068184_0 *arg0);
s32 func_0006818C(struct Unk_func_0006818C_0 *arg0);
s32 func_00068194(struct Unk_func_00068194_0 *arg0);
void func_000692C8(void);
u32 func_000693AC(struct Unk_func_000693AC_0 *arg0, s32 arg1, u32 arg2, s32 arg3);
s32 func_000694F8(s32, s32);
s32 func_000697C4(s32);
void func_0006A3CC(void);
void func_0006A3E8(void);
void func_0006A42C(s32 arg0);
s32 func_0006A4A4(void);
void func_0006A4AC(void);
void func_0006A5FC(void);
M2C_UNK func_0006A618(s32);
void func_0006A634(void);
void func_0006A650(void);
void func_0006A66C(void);
void func_0006A688(void);
s32 func_0006A6BC(s32 arg0);
s32 func_0006A6CC(s32 arg0);
M2C_UNK func_0006B3D8();
void func_0006BBAC(struct Unk_TIFFCheckpointDirectory_0 *arg0, s32 arg1);
s32 func_0006D370(s32, s32);
void func_0006D3E4(s32 arg0);
void func_0006D404(s32 arg0);
void func_0006D424(s32 arg0);
s32 func_0006D444(s32, s32);
void func_0006D4B8(s32 arg0);
void func_0006D4D8(s32 arg0);
void func_0006D4F8(s32 arg0);
s32 func_0006D544(void);
s32 func_0006D54C(void);
void func_0006D554(void);
M2C_UNK func_0006D55C(s32);
s32 func_0006D618(s32 arg0, s32 arg1);
void *func_0006D680(s32);
M2C_UNK func_0006F340();
s32 func_0006F9EC(s32 arg0);
void func_00072988(struct Unk_func_00072988_0 *arg0);
void func_0007304C(void);
s32 func_00074AA0(s32 arg0);
s32 func_00074AE8(s32 arg0, M2C_UNK arg1);
s32 func_00074B40(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00074BA8(s32 arg0, M2C_UNK arg1);
s32 func_00074C00(s32 arg0, M2C_UNK arg1);
s32 func_00074C58(void *arg0, void *arg1, s32 arg2);
s32 func_00074CC0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00074D28(s32 arg0);
s32 func_00074D70(s32 arg0);
s32 func_00074E0C(s32 arg0);
s32 func_00074E54(s32 arg0, s32 arg1, s32 arg2);
s32 func_00074EBC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00074F24(s32 arg0);
s32 func_00074F6C(s32 arg0);
s32 func_00074FB4(s32 arg0);
s32 func_00074FFC(struct Unk_func_00074FFC_0 *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
void func_00075134(struct Unk_func_00075134_0 *arg0);
void func_000751DC(struct Unk_func_000751DC_0 *arg0);
s32 func_000752B8(s32);
void func_00075308(struct Unk_func_00075308_0 *arg0, s32 arg1);
void func_00075354(void);
void func_000753AC(struct Unk_func_000753AC_0 *arg0);
void func_00075E24(s32 arg0, s32 arg1);
void func_0007694C(struct Unk_func_0007694C_0 *arg0);
void func_00077100(void);
u32 func_00077108(struct Unk_func_00077108_0 *arg0);
void func_00079E14(void);
u32 func_00079E90(u32 arg0, s32 arg1);
void func_0007A538(struct Unk_func_0007A538_0 *arg0);
void func_0007AB7C(struct Unk_func_0007AB7C_0 *arg0);
void func_0007BABC(struct Unk_func_0007BABC_0 *arg0);
s32 func_0007BE50(struct Unk_func_0007BE50_0 *arg0);
s32 func_0007BF84(s32);
void func_0007BFD4(struct Unk_func_0007BFD4_0 *arg0, s32 arg1);
void func_0007C020(void);
s32 func_0007C5F0(void);
s32 func_0007C5F8(void);
void func_0007E298(void);
u32 func_0007E2A0(struct Unk_func_0007E2A0_0 *arg0);
void func_0007E3A8(struct Unk_func_0007E3A8_0 *arg0);
s32 func_0007E854(struct Unk_func_0007E854_0 *arg0);
u32 func_00080480(u32 arg0, s32 arg1);
void func_00082140(s32 arg0);
void func_00082158(struct Unk_func_00082158_0 *arg0);
void func_00083888(void);
M2C_UNK func_00083940();
s32 func_00083CC0(struct Unk_func_00083CC0_0 *arg0);
void func_00084554(s32 arg0);
void func_00084570(s32 arg0);
M2C_UNK func_0008458C(s32, M2C_UNK);
M2C_UNK func_000845E4(s32);
M2C_UNK func_00084910(s32);
M2C_UNK func_000849A8(s32, M2C_UNK);
M2C_UNK func_00084A70(void *, void *, M2C_UNK);
s32 func_00084BA4(s32, M2C_UNK, M2C_UNK);
s32 func_0008A588(s32);
M2C_UNK func_0008A69C(s32);
M2C_UNK func_0008A928(s32, s32, M2C_UNK);
s32 func_0008AA20(s32, M2C_UNK, M2C_UNK);
void func_0008ACDC(struct Unk_func_0008ACDC_0 *arg0);
void func_0008AE3C(void);
void func_0008C380(struct Unk_func_0008C380_0 *arg0);
void func_0008F660(struct Unk_func_0008F660_0 *arg0);
void func_00091208(struct Unk_func_00091208_0 *arg0);
void *func_000941F8(void *arg0, s32 arg1);
void *func_00094238(void *arg0, s32 arg1);
void func_0009568C(void);
void func_0009584C(struct Unk_func_0009584C_0 *arg0);
s32 func_00095A44(s32 arg0, s32 arg1);
s32 func_00095A84(s32, s32, s32, s32, s32, s32);
void func_00095AF4(s32 arg0, M2C_UNK arg1, s32 arg2);
void func_00096A24(void);
M2C_UNK func_000988A4();
void func_000988F4(struct Unk_func_000988F4_0 *arg0);
s32 func_00098C90(void);
void func_00099F18(struct Unk_func_00099F18_0 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0009A120(void);
s32 func_0009CE3C(s32, s32, s32);
void func_0009CF74(void);
void func_0009CF90(struct Unk_func_0009CF90_0 *arg0);
M2C_UNK func_0009CFC4(s32, M2C_UNK, M2C_UNK);
M2C_UNK *func_0009D6AC(void);
M2C_UNK *func_0009D6B8(void);
M2C_UNK *func_0009D6C4(void);
M2C_UNK *func_0009D6D0(void);
void func_0009D75C(s32 arg0);
s32 func_0009D778(void);
s32 func_0009D798(void);
s32 func_0009DA4C(s32, s32);
void func_0009DB04(void *arg0);
void func_0009DB20(void);
void func_0009DB28(struct Unk_func_0009DB28_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0009DB44(struct Unk_func_0009DB44_0 *arg0);
void func_0009DB58(struct Unk_func_0009DB58_0 *arg0, s32 arg1);
s32 func_0009DB78(s32 arg0, struct Unk_func_0009DB78_1 *arg1, s32 arg2);
s32 func_0009DB9C(s32 arg0, struct Unk_func_0009DB9C_1 *arg1);
s32 func_0009DBBC(s32 arg0, struct Unk_func_0009DBBC_1 *arg1);
s32 func_0009DBDC(s32 arg0, s32 *arg1);
s32 func_0009DBFC(s32 arg0, struct Unk_func_0009DBFC_1 *arg1);
u8 func_0009DC1C(s32 arg0, struct Unk_func_0009DC1C_1 *arg1);
u8 func_0009DC3C(s32 arg0, struct Unk_func_0009DC3C_1 *arg1);
u8 func_0009DC5C(s32 arg0, struct Unk_func_0009DC5C_1 *arg1);
u8 func_0009DC7C(s32 arg0, struct Unk_func_0009DC7C_1 *arg1);
u8 func_0009DC9C(s32 arg0, struct Unk_func_0009DC9C_1 *arg1);
s32 func_0009DEA4(s32 arg0, struct Unk_func_0009DEA4_1 *arg1);
s32 func_0009DEDC(s32 arg0, struct Unk_func_0009DEDC_1 *arg1);
u8 func_0009DF14(s32 arg0, struct Unk_func_0009DF14_1 *arg1);
s32 func_0009DF34(s32 arg0, s32 arg1);
M2C_UNK func_0009E980();
M2C_UNK func_0009EA54();
void func_0009EAD4(struct Unk_func_0009EAD4_0 *arg0);
void func_0009EB5C(struct Unk_func_0009EB5C_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0009EB6C(struct Unk_func_0009EB6C_0 *arg0);
s32 func_0009EB98(s32, s32, s32, s32, s32, s32, s32);
void func_000A0664(struct Unk_func_000A0664_0 *arg0, s32 arg1);
M2C_UNK func_000A0900();
M2C_UNK func_000A0B68(s32);
M2C_UNK func_000A0B78(s32);
void func_000A1584(struct Unk_func_000A1584_0 *arg0);
void func_000A159C(struct Unk_func_000A159C_0 *arg0);
void func_000A15B4(struct Unk_func_000A15B4_0 *arg0);
M2C_UNK func_000A15C8(s32);
void func_000A15E0(struct Unk_func_000A15E0_0 *arg0);
M2C_UNK func_000A15F8(s32);
s32 func_000A7144(s32 arg0, struct Unk_func_000A7144_1 *arg1);
s32 func_000A719C(struct Unk_func_000A7144_1 *arg0);
s32 func_000A71C8(struct Unk_func_000A71C8_0 *arg0);
s32 func_000A71F4(struct Unk_func_000A71F4_0 *arg0);
void func_000A720C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_000A99B4(s32 arg0, struct Unk_func_000A99B4_1 *arg1);
s32 func_000AA884(s32);
void func_000AABD0(s32 arg0, struct Unk_func_000AABD0_1 *arg1, M2C_UNK arg2);
void func_000AB98C(s32 arg0, struct Unk_func_000AB98C_1 *arg1, M2C_UNK arg2);
s32 func_000AC348(struct Unk_func_000AC348_0 *arg0, s32 arg1);
void func_000AC5C4(void);
void func_000AC5E4(struct Unk_func_000AC5E4_0 *arg0, s32 arg1, s32 arg2);
void func_000AC5F0(struct Unk_func_000AC5F0_0 *arg0);
void func_000AC600(struct Unk_func_000AC600_0 *arg0);
M2C_UNK func_000AC6C0(s32);
void func_000AE724(struct Unk_func_000AE724_0 *arg0);
void func_000AEA7C(struct Unk_func_000AEA7C_0 *arg0, s32 arg1);
M2C_UNK func_000B0DCC(void *);
void func_000B2500(struct Unk_func_000B2500_0 *arg0);
M2C_UNK func_000B3E20(void *);
s32 func_000B6F50(u32 arg0);
s32 func_000B77C4(s32 arg0);
s32 func_000B7EB0(void);
void func_000B8188(struct Unk_func_000B8188_0 *arg0);
void func_000B8194(struct Unk_func_000B8194_0 *arg0, M2C_UNK *arg1);
void func_000B81CC(struct Unk_func_000B81CC_0 *arg0, s32 arg1);
s32 func_000B81D4(struct Unk_func_000B81D4_0 *arg0);
M2C_UNK *func_000B81E8(M2C_UNK **arg0, s32 arg1);
s32 *func_000B8224(s32 **arg0, s32 arg1);
M2C_UNK func_000B86EC(M2C_UNK, M2C_UNK);
void func_000B8790(void);
void func_000B87B0(void);
s32 func_000B87D0(void);
s32 func_000B8C4C(void);
s32 func_000B9280(void);
void func_000B97D0(struct Unk_func_000B97D0_0 *arg0, s32 arg1);
s32 func_000B9864(s32, s32);
s32 func_000BC724(struct Unk_func_000BC724_0 *arg0);
s32 func_000BC7A0(struct Unk_func_000BC7A0_0 *arg0);
s32 func_000BCF98(struct Unk_func_000BCF98_0 *arg0, struct Unk_func_000BCF98_1 *arg1);
s32 func_000BDD08(struct Unk_func_000BDD08_0 *arg0, s32 *arg1);
s32 func_000BDD58(struct Unk_func_000BDD58_0 *arg0, s32 *arg1);
s32 func_000C07DC(void);
s32 func_000C0FF8(u8 *arg0);
s32 func_000C1090(void);
void func_000C1CA0(struct Unk_func_000C1CA0_0 *arg0, s32 *arg1, s32 arg2);
M2C_UNK func_000C2580(s32);
M2C_UNK func_000C25D8(s32);
M2C_UNK func_000C2C80(M2C_UNK, M2C_UNK);
void func_000C2CEC(void);
void func_000C2D0C(void);
void func_000C2EEC(s32 arg0, s32 arg1, s32 arg2);
void func_000C2F08(void);
void func_000C2F24(void);
void func_000C2F40(void);
void func_000C2F5C(void);
void func_000C2F78(void);
void func_000C2F94(M2C_UNK **arg0);
void func_000C2FA4(M2C_UNK **arg0);
void func_000C31AC(M2C_UNK **arg0);
void func_000C31BC(M2C_UNK **arg0);
void func_000C31CC(M2C_UNK **arg0);
s32 func_000C3B84(void);
s32 func_000C3D20(s32 arg0);
M2C_UNK func_000C3E80(M2C_UNK, M2C_UNK);
void func_000C4000(void);
void func_000C4020(void);
void func_000C45F4(struct Unk_func_000C45F4_0 *arg0);
s32 func_000C46A8(s32 arg0, s32 arg1);
s32 func_000C46D4(void);
s32 func_000C46E0(void);
s32 func_000C4E70(struct Unk_func_000C4E70_0 *arg0);
void func_000C4FCC(struct Unk_func_000C4FCC_0 *arg0);
s32 func_000C517C(s32, s32);
void func_000C523C(struct Unk_func_000C523C_0 *arg0);
s32 func_000C5248(void);
void func_000C5250(struct Unk_func_000C5250_0 *arg0);
void func_000C5290(struct Unk_func_000C5290_0 *arg0, s32 arg1, s32 arg2);
void func_000C52B8(struct Unk_func_000C52B8_0 *arg0, s32 arg1, s32 arg2);
void func_000C5434(s32 arg0);
void func_000C56EC(void);
void func_000C5E7C(struct Unk_func_000C5E7C_0 *arg0, struct Unk_func_000C5E7C_1 *arg1);
s32 func_000C5EAC(s32);
s32 func_000C6198(s32);
M2C_UNK func_000C62E0();
s32 func_000C656C(s32 arg0);
s32 func_000C658C(s32);
M2C_UNK func_000C6754(M2C_UNK, M2C_UNK);
void func_000C6800(void);
void func_000C6820(void);
s32 *func_000C6840(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_000C68A8(s32 arg0, s32 arg1);
s32 func_000C68EC(M2C_UNK, M2C_UNK);
M2C_UNK func_000C6AB4(s32, void *);
void func_000C7108(void);
M2C_UNK func_000C7124();
void func_000C717C(void);
M2C_UNK func_000C7198();
s32 func_000C7280(s32, s32);
s32 func_000C7294(void);
s32 func_000C72A0(void);
void func_000C754C(struct Unk_vt_func_000C754C_arg0 **arg0);
M2C_UNK func_000C7708();
M2C_UNK func_000C8AB8(M2C_UNK, M2C_UNK);
void func_000C8B50(void);
void func_000C8B70(void);
void func_000C8C10(struct Unk_func_000C8C10_0 *arg0);
void ***func_000C917C(void ***arg0, struct Unk_func_000C917C_1 *arg1, void **arg2);
void func_000C99E0(struct Unk_func_000C99E0_0 *arg0);
M2C_UNK func_000C9B0C(s32);
void func_000CAAD4(void);
void func_000CAADC(void);
void func_000CB824(s32 arg0);
void func_000CB988(struct Unk_func_000CB988_0 *arg0, s32 arg1);
void func_000CBC30(struct Unk_func_000CBC30_0 *arg0, s32 arg1);
s32 func_000CBC88(s32, s32, s32, s32, s32, s32, s32);
void func_000CC2B4(s32 arg0);
void func_000CC2D8(struct Unk_func_000CC2D8_0 *arg0, M2C_UNK *arg1);
M2C_UNK func_000CC600(M2C_UNK, M2C_UNK);
void func_000CC680(void);
void func_000CC6A0(void);
void func_000CC6C0(struct Unk_func_000CC6C0_0 *arg0);
void func_000CC710(struct Unk_func_000CC710_0 *arg0);
void ***func_000CC760(void ***arg0, struct Unk_func_000CC760_1 *arg1, void **arg2);
M2C_UNK func_000CC8B0(s32);
void func_000CCBE0(s32 arg0);
void func_000CCC00(void);
void func_000CCE8C(void);
void func_000CD02C(void);
void func_000CD528(struct Unk_func_000CD528_0 *arg0);
void func_000CD538(struct Unk_func_000CD538_0 *arg0, s32 arg1);
s32 func_000CD96C(s32, s32);
s32 func_000CE0A8(s32);
M2C_UNK func_000CE480(s32);
M2C_UNK func_000CE4E4(s32);
M2C_UNK func_000CE548(s32);
M2C_UNK func_000CE5EC(s32);
M2C_UNK func_000CE7E4(s32);
M2C_UNK func_000CE8C4(s32);
M2C_UNK func_000CE9D0(s32);
s32 func_000CEC8C(s32);
M2C_UNK func_000CECE4(s32);
s32 func_000CED9C(s32, s32, s32, s32);
M2C_UNK func_000CEE18(s32);
s32 func_000CEEAC(s32, s32, s32);
M2C_UNK func_000CFB7C(s32);
M2C_UNK func_000CFE84(s32);
void func_000CFFC0(struct Unk_func_000CFFC0_0 *arg0, s32 arg1);
s32 func_000CFFE0(s32, s32, s32);
s32 func_000D00DC(s32, s32);
s32 func_000D0130(s32, s32);
s32 func_000D0244(s32, s32, s32, s32);
s32 func_000D0574(struct Unk_func_000D0574_0 *arg0);
M2C_UNK func_000D0580(s32);
M2C_UNK func_000D0648(s32);
M2C_UNK func_000D0C18(s32);
M2C_UNK func_000D0E94(s32);
void func_000D0EE0(struct Unk_func_000D0EE0_0 *arg0);
void ***func_000D1798(void ***arg0, struct Unk_func_000D1798_1 *arg1, void **arg2);
void func_000D1AF4(struct Unk_func_000D1AF4_0 *arg0, s32 arg1);
void func_000D1B04(struct Unk_func_000D1B04_0 *arg0, s32 arg1);
void func_000D1D28(void);
M2C_UNK func_000D1D44();
s32 func_000D30EC(s32, s32, s32, s32, s32, s32);
s32 func_000D3D14(struct Unk_func_000D3D14_0 *arg0, u32 arg1, u32 arg2);
void func_000D4664(struct Unk_func_000D4664_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_000D4884(struct Unk_func_000D4884_0 *arg0, struct Unk_func_000D4884_1 *arg1);
s32 func_000D49D0(struct Unk_func_000D3D14_0 *arg0, s32 arg1);
M2C_UNK func_000D49F0(M2C_UNK, M2C_UNK);
void func_000D4B20(void);
void func_000D4B40(void);
void func_000D4B9C(void **arg0);
void func_000D4BF4(struct Unk_func_000D4BF4_0 *arg0);
void func_000D4CDC(struct Unk_func_000D4CDC_0 *arg0);
void ***func_000D57AC(void ***arg0, struct Unk_func_000D57AC_1 *arg1, void **arg2);
void func_000D5814(struct Unk_func_000D5814_0 *arg0);
void func_000D5868(struct Unk_func_000D5868_0 *arg0);
s32 func_000D58C4(s32);
M2C_UNK func_000D5CE4();
void func_000D6360(M2C_UNK **arg0);
void func_000D6370(M2C_UNK **arg0);
void func_000D6398(void);
s32 func_000D63CC(void);
s32 func_000D89B0(s32, s32);
M2C_UNK func_000D90A4(void *, M2C_UNK, u8);
s32 func_000DA1CC(struct Unk_func_000DA1CC_0 *arg0);
s32 func_000DA228(struct Unk_func_000DA228_0 *arg0, s32 arg1);
void func_000DA234(struct Unk_func_000DA234_0 *arg0);
void func_000DA250(struct Unk_func_000DA250_0 *arg0);
void func_000DA284(struct Unk_func_000DA284_0 *arg0, s32 arg1);
void func_000DA2AC(s32 arg0);
void func_000DA424(struct Unk_vt_func_000DA424_arg0 **arg0);
void func_000DA448(struct Unk_vt_func_000DA448_arg0 **arg0);
void func_000DA46C(struct Unk_vt_func_000DA46C_arg0 **arg0);
void func_000DA4B4(struct Unk_vt_func_000DA4B4_arg0 **arg0);
void func_000DA4D8(struct Unk_vt_func_000DA4D8_arg0 **arg0);
void func_000DA4FC(struct Unk_vt_func_000DA4FC_arg0 **arg0);
void func_000DA53C(s32 arg0);
void func_000DA690(void);
s32 func_000DA698(void);
s32 func_000DA6A0(void);
s32 func_000DA6A8(void);
s32 func_000DA6B0(void);
s32 func_000DA6B8(void);
s32 func_000DA6C0(void);
s32 func_000DA6C8(void);
void func_000DA6D0(void);
s32 func_000DA704(void);
void func_000DA89C(M2C_UNK **arg0);
void func_000DA8C4(M2C_UNK **arg0);
s32 func_000DAC28(s32 arg0, s32 arg1);
s32 func_000DAC54(void);
s32 func_000DAC60(void);
void func_000DBB08(struct Unk_func_000DBB08_0 *arg0);
s32 func_000DC0B8(s32 arg0, s32 arg1);
s32 func_000DC0E4(void);
void func_000DD9C8(struct Unk_func_000DD9C8_0 *arg0);
void func_000DDAF0(s32 arg0);
M2C_UNK func_000DDB1C();
s32 func_000DDFC8(s32, s32);
s32 func_000DE514(s32 arg0, s32 arg1);
s32 func_000DE540(void);
M2C_UNK func_000E1458(M2C_UNK, M2C_UNK);
void func_000E14F0(void);
void func_000E1510(struct Unk_func_000E1510_0 *arg0);
void func_000E1584(struct Unk_func_000E1584_0 *arg0);
s32 func_000E1730(s32);
void func_000E1880(struct Unk_func_000E1880_0 *arg0);
void func_000E18EC(struct Unk_func_000E18EC_0 *arg0);
s32 func_000E1930(s32, s32);
s32 func_000E1A18(s32, s32);
s32 func_000E1B08(s32 arg0, s32 arg1);
s32 func_000E1B34(void);
s32 func_000E2B10(struct Unk_func_000E2B10_0 *arg0);
s32 func_000E3190(s32 arg0, s32 arg1);
s32 func_000E31BC(void);
void func_000E3244(M2C_UNK **arg0);
void func_000E326C(M2C_UNK **arg0);
void func_000E3294(M2C_UNK **arg0);
void func_000E414C(s32 arg0, s32 arg1, s32 arg2);
s32 func_000E4168(s32 arg0, s32 arg1);
s32 func_000E4194(void);
s32 func_000E41A0(void);
void func_000E42DC(M2C_UNK **arg0);
void func_000E4304(M2C_UNK **arg0);
void func_000E433C(struct Unk_func_000E433C_0 *arg0);
s32 func_000E4358(struct Unk_func_000E4358_0 *arg0);
void func_000E4368(struct Unk_func_000E4368_0 *arg0);
void func_000E43A8(struct Unk_func_000E43A8_0 *arg0);
void func_000E4408(struct Unk_func_000E4408_0 *arg0);
void func_000E4438(struct Unk_func_000E4438_0 *arg0, s32 arg1, s32 arg2);
s32 func_000E445C(s32 arg0, s32 arg1);
s32 func_000E4488(void);
s32 func_000E4494(void);
s32 func_000E49B0(s32);
s32 func_000E4F0C(struct Unk_func_000E4F0C_0 *arg0, struct Unk_func_000E4F0C_1 *arg1);
s32 func_000E5428(s32, s32, s32);
M2C_UNK func_000E5558();
s32 func_000E58B4(s32, s32, s32, s32);
s32 func_000E5B88(s32, s32, s32);
s32 func_000E5E5C(s32, s32, s32, s32);
s32 func_000E6D80(s32, s32);
void func_000E8C68(struct Unk_func_000E8C68_0 *arg0);
void func_000E8EDC(struct Unk_func_000E8EDC_0 *arg0);
s32 func_000E90A0(s32 arg0, s32 arg1);
s32 func_000E90CC(void);
s32 func_000E90D8(void);
void func_000E9100(struct Unk_func_000E9100_0 *arg0, s32 arg1, s32 arg2);
void func_000E9220(M2C_UNK **arg0);
void func_000E9248(M2C_UNK **arg0);
void func_000E960C(M2C_UNK **arg0);
s32 func_000E9634(s32 arg0, s32 arg1);
s32 func_000E9660(void);
void func_000E9A68(M2C_UNK **arg0);
void func_000E9A90(M2C_UNK **arg0);
void func_000E9AB8(M2C_UNK **arg0);
s32 func_000EA2D8(struct Unk_func_000EA2D8_0 *arg0, s32 arg1, s32 arg2);
void func_000EA4DC(struct Unk_func_000EA4DC_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000EA528(struct Unk_func_000EA528_0 *arg0, s32 arg1, s32 arg2);
void func_000EA570(struct Unk_func_000EA570_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000EB590(s32);
void func_000EBB58(void);
s32 func_000EBB74(s32 arg0, s32 arg1);
s32 func_000EBBA0(void);
void func_000EBBB8(struct Unk_func_000EBBB8_0 *arg0, s32 arg1, s32 arg2);
void func_000EBCE8(M2C_UNK **arg0);
void func_000EBD10(M2C_UNK **arg0);
void func_000EBDD4(struct Unk_func_000EBDD4_0 *arg0);
void func_000EBE98(struct Unk_func_000EBE98_0 *arg0);
void func_000EBED0(struct Unk_func_000EBED0_0 *arg0);
void func_000EBF08(struct Unk_func_000EBF08_0 *arg0);
void func_000EBF24(struct Unk_func_000EBF24_0 *arg0);
s32 func_000EBF5C(s32 arg0, s32 arg1);
s32 func_000EBF88(void);
void func_000ED8E8(struct Unk_func_000ED8E8_0 *arg0);
void func_000ED938(struct Unk_func_000ED938_0 *arg0);
void func_000ED988(struct Unk_func_000ED988_0 *arg0);
void func_000EDEA4(void);
void func_000EDEC0(void);
s32 func_000EDEDC(s32 arg0, s32 arg1);
s32 func_000EDF08(void);
void func_000EE0D8(M2C_UNK **arg0);
void func_000EE100(M2C_UNK **arg0);
s32 func_000EE138(s32 arg0, s32 arg1);
s32 func_000EE164(void);
void func_000EE370(struct Unk_func_000EE370_0 *arg0);
void func_000EE3AC(struct Unk_func_000EE3AC_0 *arg0);
s32 func_000EE950(s32 arg0, s32 arg1);
s32 func_000EE97C(void);
void func_000EEDD0(struct Unk_vt_func_000EEDD0_arg0 **arg0);
s32 func_000EEFFC(struct Unk_func_000EEFFC_0 *arg0);
M2C_UNK func_000EF13C(s32);
s32 func_000EF208(s32 arg0, M2C_UNK arg1);
void func_000EF250(struct Unk_func_000EF250_0 *arg0);
s32 func_000EF4C0(s32 arg0, s32 arg1);
s32 func_000EF4EC(void);
void func_000EF684(M2C_UNK **arg0);
void func_000EF6AC(M2C_UNK **arg0);
s32 func_000EFBA8(s32, s32);
s32 func_000EFBD4(void);
s32 func_000F022C(s32);
s32 func_000F0920(struct Unk_func_000E4F0C_0 *arg0, struct Unk_func_000E4F0C_1 *arg1);
s32 func_000F0DB8(struct Unk_func_000F0DB8_0 *arg0, s32 arg1);
s32 func_000F0E3C(s32, s32, s32);
M2C_UNK func_000F0E94();
M2C_UNK func_000F0F30();
s32 func_000F18C8(struct Unk_func_000F18C8_0 *arg0, s32 arg1);
M2C_UNK func_000F1BF4(M2C_UNK, M2C_UNK);
void func_000F1C54(void);
s32 func_000F1C74(s32 arg0, s32 arg1);
s32 func_000F1CA0(void);
void func_000F202C(struct Unk_func_000F202C_0 *arg0, s32 arg1, s32 arg2);
void func_000F2050(struct Unk_func_000F2050_0 *arg0);
void func_000F2074(struct Unk_func_000F2074_0 *arg0);
void func_000F209C(struct Unk_func_000F209C_0 *arg0);
void func_000F20C4(struct Unk_func_000F20C4_0 *arg0);
void func_000F29B8(M2C_UNK **arg0);
void func_000F29E0(M2C_UNK **arg0);
s32 func_000F2A18(s32 arg0, s32 arg1);
s32 func_000F2A44(void);
void func_000F4D20(struct Unk_func_000F4D20_0 *arg0);
s32 func_000F4EDC(s32 arg0, s32 arg1);
s32 func_000F4F08(void);
s32 func_000F52F4(void);
void func_000F53A4(void);
void func_000F53AC(void);
s32 func_000F614C(struct Unk_func_000F614C_0 *arg0);
s32 func_000F6184(struct Unk_func_000F6184_0 *arg0, s32 arg1);
void func_000F6234(struct Unk_func_000F6234_0 *arg0);
void func_000F62C0(struct Unk_func_000F62C0_0 *arg0);
s32 func_000F62F0(s32 arg0, s32 arg1);
s32 func_000F631C(void);
void func_000FA414(s32 arg0);
void func_000FC010(void);
s32 func_000FC018(struct Unk_func_000FC018_0 *arg0, s32 arg1);
void ***func_000FC294(void ***arg0, struct Unk_func_000FC294_1 *arg1, void **arg2);
void ***func_000FC2FC(void ***arg0, struct Unk_func_000FC2FC_1 *arg1, void **arg2);
void func_000FC918(s32 arg0, M2C_UNK arg1);
void func_000FCC8C(struct Unk_func_000FCC8C_0 *arg0);
M2C_UNK func_000FDE34(s32, M2C_UNK);
void func_000FEC50(struct Unk_func_000FEC50_0 *arg0);
M2C_UNK func_000FEDBC(s32);
void func_000FEE24(struct Unk_func_000FEE24_0 *arg0);
void func_000FEE40(struct Unk_func_000FEE40_0 *arg0);
void func_000FEE5C(struct Unk_func_000FEE5C_0 *arg0);
void func_000FEE78(struct Unk_func_000FEE78_0 *arg0);
void func_000FEE94(struct Unk_func_000FEE94_0 *arg0);
void func_000FEEB0(struct Unk_func_000FEEB0_0 *arg0);
void func_000FEECC(struct Unk_func_000FEECC_0 *arg0);
void func_000FEEE8(struct Unk_func_000FEEE8_0 *arg0);
void func_000FEF54(struct Unk_func_000FEF54_0 *arg0);
M2C_UNK func_000FF044();
s32 func_000FF148(s32, s32);
s32 func_000FF900(s32 arg0, s32 *arg1);
s32 func_000FF924(struct Unk_func_000FF924_0 *arg0, s32 arg1);
M2C_UNK func_000FF94C(s32);
M2C_UNK func_000FF9BC(s32);
M2C_UNK func_000FF9E4(s32);
M2C_UNK func_000FFA54(s32);
M2C_UNK func_000FFA7C(s32);
M2C_UNK func_000FFAA0(s32);
M2C_UNK func_000FFAA8(s32);
M2C_UNK func_000FFB04(s32);
M2C_UNK func_000FFB44(s32);
M2C_UNK func_000FFB80(s32);
M2C_UNK func_000FFB88(s32);
M2C_UNK func_000FFB90(s32);
M2C_UNK func_000FFBEC(s32);
M2C_UNK func_000FFBF4(s32);
M2C_UNK func_000FFC50(s32);
M2C_UNK func_000FFC58(s32);
M2C_UNK func_000FFC8C(s32);
void func_000FFCB0(struct Unk_func_000FFCB0_0 *arg0, s32 arg1, s32 arg2);
M2C_UNK func_000FFCD8(s32);
M2C_UNK func_000FFCE4(s32);
M2C_UNK func_000FFD00(s32);
M2C_UNK func_000FFD1C(s32);
M2C_UNK func_00100918(void *);
void func_00100A88(struct Unk_func_00100A88_0 *arg0);
u8 func_00100C44(struct Unk_func_00100C44_0 *arg0, s32 arg1);
void func_00100C90(struct Unk_func_00100C90_0 *arg0, s32 arg1);
void func_00100CA0(struct Unk_func_00100CA0_0 *arg0);
s32 func_00100D2C(struct Unk_func_00100D2C_0 *arg0);
s32 func_00100D40(struct Unk_func_00100D40_0 *arg0);
M2C_UNK func_00101718(void *);
void func_001017B4(struct Unk_func_001017B4_0 *arg0);
u8 func_00101818(struct Unk_func_00101818_0 *arg0, s32 arg1);
void func_00101850(struct Unk_func_00101850_0 *arg0, s32 arg1);
void func_0010187C(struct Unk_func_0010187C_0 *arg0);
void func_00101AC0(struct Unk_func_00101AC0_0 *arg0, s32 arg1, s32 arg2);
void func_00101B74(struct Unk_func_00101B74_0 *arg0);
void func_00101BC4(struct Unk_func_00101BC4_0 *arg0);
void func_00101C14(struct Unk_func_00101BC4_0 *arg0);
M2C_UNK func_00101C84(s32);
u8 func_00101CB8(u8 *arg0);
s32 func_00101CCC(struct Unk_func_00101CCC_0 *arg0);
void func_00101D50(struct Unk_func_00101D50_0 *arg0);
void func_00102094(struct Unk_func_00102094_0 *arg0);
void func_001020E4(struct Unk_func_00102094_0 *arg0);
M2C_UNK func_00102168(s32);
u8 func_0010219C(u8 *arg0);
s32 func_001021B0(struct Unk_func_001021B0_0 *arg0);
void func_00102234(struct Unk_func_00102234_0 *arg0);
M2C_UNK func_00102278(s32);
M2C_UNK func_001023A8(M2C_UNK, M2C_UNK);
void func_00102434(void);
void func_00102454(void);
void func_00102474(s32 *arg0, s32 arg1);
void func_00102494(s32 *arg0, s32 arg1);
M2C_UNK func_0010256C();
M2C_UNK func_0010259C();
s32 func_001026B4(s32, s32);
void func_00102B34(s32 arg0);
M2C_UNK func_00102B50(s32);
M2C_UNK func_00102CFC(s32);
M2C_UNK func_00102D38(s32);
M2C_UNK func_00102FCC(s32);
M2C_UNK func_00103008(s32);
M2C_UNK func_0010308C(s32);
M2C_UNK func_00103094(s32);
M2C_UNK func_001030B0(s32);
M2C_UNK func_00103104(s32);
M2C_UNK func_00103120(s32);
M2C_UNK func_0010313C(s32);
M2C_UNK func_00103158(s32);
M2C_UNK func_00103174(s32);
M2C_UNK func_00103190(s32);
M2C_UNK func_001031AC(s32);
M2C_UNK func_001031C8(s32);
M2C_UNK func_001031E4(s32);
M2C_UNK func_00103200(s32);
M2C_UNK func_00103208(s32);
void func_00103960(s32 arg0, M2C_UNK arg1);
s32 func_00103AE4(struct Unk_func_00103AE4_0 *arg0, s32 arg1);
void func_00103CE8(s32 arg0, M2C_UNK arg1);
M2C_UNK func_00106250(s32);
s32 func_00106744(struct Unk_func_00106744_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_001067B8(struct Unk_func_001067B8_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0010682C(struct Unk_func_0010682C_0 *arg0);
s32 func_00106950(struct Unk_func_00106950_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00106984(struct Unk_func_00106984_0 *arg0);
s32 func_001069B8(struct Unk_func_001069B8_0 *arg0);
s32 func_001069EC(struct Unk_func_001069EC_0 *arg0);
s32 func_00106A20(struct Unk_func_00106A20_0 *arg0);
void func_00106A8C(struct Unk_func_00106A8C_0 *arg0);
M2C_UNK func_00106ABC(s32);
void func_00106AD4(struct Unk_func_00106AD4_0 *arg0);
s32 func_00106B1C(s32);
s32 func_00106B34(s32);
s32 func_00106B4C(s32);
s32 func_00106B64(s32);
s32 func_00106B98(s32);
s32 func_00106BCC(s32);
s32 func_00106C00(s32);
s32 func_00106C34(s32);
void func_00106C68(struct Unk_func_00106C68_0 *arg0);
s32 func_00106CC8(struct Unk_func_00106CC8_0 *arg0, s32 arg1, s32 arg2);
s32 func_00106D30(struct Unk_func_00106D30_0 *arg0, s32 arg1);
s32 func_00106D64(struct Unk_func_00106D64_0 *arg0, s32 arg1);
s32 func_00106D98(struct Unk_func_00106D98_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK func_00106DCC(s32, s32);
s32 func_00106DE4(s32);
s32 func_00106E1C(s32);
void func_00106E54(struct Unk_func_00106E54_0 *arg0);
s32 func_00106E84(struct Unk_func_00106E84_0 *arg0);
M2C_UNK func_00106ED4(s32);
M2C_UNK func_00106F04(s32);
M2C_UNK func_0010B438(s32, s32);
M2C_UNK func_0010D4A8(s32);
void func_0010FA74(struct Unk_func_0010FA74_0 *arg0, struct Unk_func_0010FA74_1 *arg1);
s32 func_0010FAFC(s32);
M2C_UNK func_0010FB50(s32);
M2C_UNK func_00112AE8(M2C_UNK, M2C_UNK);
void func_00112B40(void);
s32 func_001167F4(s32 arg0);
s32 func_00116858(s32);
void func_00116A60(struct Unk_func_00116A60_0 *arg0, s32 arg1);
s32 func_00116AA0(s32, s32);
s32 func_00116B6C(struct Unk_func_00116B6C_0 *arg0, struct Unk_func_00116B6C_1 *arg1);
s32 func_00116BB8(struct Unk_func_00116BB8_0 *arg0);
s32 func_00116BD8(struct Unk_func_00116BD8_0 *arg0);
s32 func_00117274(s32 arg0, s32 arg1);
s32 func_001172A0(void);
s32 func_001172AC(void);
void func_001173E0(M2C_UNK **arg0);
void func_00117408(M2C_UNK **arg0);
void func_00117440(struct Unk_func_00117440_0 *arg0, s32 arg1);
s32 func_0011744C(s32 arg0, s32 arg1);
s32 func_00117478(void);
s32 func_00117484(void);
void func_001175B8(M2C_UNK **arg0);
void func_001175E0(M2C_UNK **arg0);
void func_00117618(struct Unk_func_00117618_0 *arg0, s32 arg1);
void func_0011794C(s32 arg0);
void func_00117968(s32 arg0);
void func_00117984(s32 arg0);
void func_001179A0(s32 arg0);
void func_001179BC(s32 arg0);
void func_001179D8(s32 arg0);
void func_001179F4(s32 arg0);
s32 func_00117A44(struct Unk_func_00117A44_0 *arg0, s32 arg1);
void func_00117A6C(s32 arg0, M2C_UNK arg1);
void func_00117DB8(s32 arg0);
void func_00117DD4(s32 arg0);
void func_00117DF0(s32 arg0);
void func_00117E0C(s32 arg0);
void func_00117E28(s32 arg0);
void func_00117E44(s32 arg0);
void func_00117E60(s32 arg0);
s32 func_00117EB0(struct Unk_func_00117EB0_0 *arg0, s32 arg1);
void func_00117ED8(s32 arg0, M2C_UNK arg1);
void func_00117F74(struct Unk_func_00117F74_0 *arg0);
void func_0011802C(struct Unk_func_0011802C_0 *arg0);
void func_00118050(struct Unk_func_00118050_0 *arg0);
void func_001180D8(s32 *arg0);
M2C_UNK func_0011820C(M2C_UNK, M2C_UNK);
void func_00118288(void);
void func_001182A8(void);
void func_001182C8(struct Unk_func_001182C8_0 *arg0);
void func_00118308(struct Unk_func_00118308_0 *arg0);
void func_00118348(s32 *arg0);
void func_00118364(s32 *arg0);
void func_00118380(struct Unk_func_00118380_0 *arg0);
void func_001183EC(struct Unk_func_001183EC_0 *arg0);
void func_00118454(u32 *arg0);
void func_00118498(s32 *arg0);
void func_001184B8(struct Unk_func_001184B8_0 *arg0);
void func_00118500(struct Unk_func_00118500_0 *arg0);
void func_00118548(s32 *arg0);
void func_00118564(s32 *arg0);
void func_00118580(struct Unk_func_00118580_0 *arg0);
M2C_UNK func_00118674(M2C_UNK, M2C_UNK);
void func_001186F0(void);
void func_00118710(void);
void func_001188A0(struct Unk_func_001188A0_0 *arg0);
void func_001188C8(struct Unk_func_001188C8_0 *arg0);
void func_00118930(void);
s32 func_00118998(struct Unk_func_00118998_0 *arg0);
M2C_UNK *func_001189E8(void);
M2C_UNK func_0011905C();
s32 func_00119634(s32 arg0);
M2C_UNK func_00119DA4();
M2C_UNK *func_0011A570(void);
s32 func_0011B410(s32 arg0);
M2C_UNK func_0011BDF0(M2C_UNK, M2C_UNK);
void func_0011BE84(void);
void func_0011BF54(struct Unk_func_0011BF54_0 *arg0);
void func_0011BFC0(struct Unk_func_0011BFC0_0 *arg0);
void func_0011C40C(struct Unk_func_0011C40C_0 *arg0);
void func_0011C6A8(void *arg0, void *arg1);
void func_0011C6C4(s32 arg0, s32 arg1);
s32 func_0011CE28(s32);
s32 func_0011D398(void);
void func_0011D4E8(s32 arg0);
s32 func_0011DEA8(struct Unk_func_0011DEA8_0 *arg0);
void func_0011E2A8(void *arg0, void *arg1);
M2C_UNK func_0011E784(M2C_UNK, M2C_UNK);
void func_0011E8A0(void);
void func_0011E8C0(void);
void func_0011E8E0(M2C_UNK **arg0);
void func_0011E908(M2C_UNK **arg0);
void func_0011E918(M2C_UNK **arg0);
void func_0011E928(M2C_UNK **arg0);
M2C_UNK func_0011EF90(M2C_UNK, M2C_UNK);
void func_0011F03C(void);
void func_0011F05C(void);
void ***func_0011F188(void ***arg0, struct Unk_func_0011F188_1 *arg1, void **arg2);
s32 func_0011FCF0(struct Unk_func_0011FCF0_0 *arg0);
void func_0011FD0C(void);
M2C_UNK func_0011FD14(M2C_UNK, M2C_UNK);
void func_0011FD94(void);
void func_0011FDB4(void);
void func_0011FE94(struct Unk_func_0011FE94_0 *arg0);
void func_0011FEB0(struct Unk_func_0011FEB0_0 *arg0);
s32 func_0011FECC(s32, s32, s32);
s32 func_0011FF68(s32, s32, s32);
s32 func_0012037C(u32 arg0);
void func_0012038C(s32 arg0);
s32 func_001207C0(s32 arg0);
M2C_UNK func_001209AC(s32);
M2C_UNK func_00120EB0(s32);
s32 func_00121740(void);
s32 func_00121C68(struct Unk_func_00121C68_0 *arg0);
s32 func_00121CB0(void);
s32 func_00121CB8(void);
s32 func_00121CC0(struct Unk_func_00121CC0_0 *arg0);
s32 func_00121D20(struct Unk_func_00121D20_0 *arg0);
s32 func_00121D4C(struct Unk_func_00121D4C_0 *arg0);
s32 func_00122158(s32 arg0);
s32 func_00122168(s32 arg0);
void func_00122458(void);
void func_00122474(void);
void func_00122490(s32 arg0);
void func_001224AC(s32 arg0);
void func_001224C8(s32 arg0);
void func_001224E4(s32 arg0);
void func_00122500(s32 arg0);
void func_0012251C(s32 arg0);
void func_00122538(s32 arg0);
void func_00122554(s32 arg0);
void func_00122570(s32 arg0);
void func_0012258C(s32 arg0, s32 arg1);
M2C_UNK func_001225DC(s32);
M2C_UNK func_00122A2C(s32);
void func_00122CEC(s32 arg0, s32 arg1);
M2C_UNK func_00122D3C(s32);
M2C_UNK func_001231C8(s32);
void func_00123498(s32 arg0, s32 arg1);
M2C_UNK func_001234E8(s32);
M2C_UNK func_0012398C(s32);
M2C_UNK func_00123C6C(M2C_UNK, s32, M2C_UNK);
void func_00123C90(s32 arg0, M2C_UNK arg1);
s32 func_00123CB4(s32 arg0);
void func_00123CC8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00123CF4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00123D20(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00123D4C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_00123D78(s32 arg0, s32 arg1);
s32 func_00123D9C(s32 arg0);
void func_00123DB0(s32 arg0, s32 arg1, s32 arg2);
void func_00123DDC(s32 arg0, s32 arg1, s32 arg2);
void func_00123E08(s32 arg0, s32 arg1, s32 arg2);
void func_00123E34(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK func_00123E60(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_00123F14(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_00123FF8(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_001240AC(M2C_UNK, s32, M2C_UNK, M2C_UNK);
s32 func_0012441C(struct Unk_func_0012441C_0 *arg0);
M2C_UNK func_0012446C(s32);
s32 func_0012448C(void **arg0);
s32 func_001244E0(void);
s32 func_001244E8(void);
M2C_UNK func_001245FC(s32);
s32 func_00124648(void);
s32 func_00124650(void);
s32 func_001247E4(s32 arg0);
s32 func_00124804(void);
s32 func_0012480C(struct Unk_func_0012480C_0 *arg0);
s32 func_00124828(void);
M2C_UNK func_00124830(s32);
s32 func_00124B74(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00124BD8(void);
s32 func_00124BE0(struct Unk_func_00124BE0_0 *arg0);
s32 func_00124CA4(struct Unk_func_00124CA4_0 *arg0, s16 arg1);
s32 func_00124CD8(void);
s32 func_00124CE0(struct Unk_func_00124CE0_0 *arg0);
s32 func_00124D28(struct Unk_func_00124D28_0 *arg0);
s32 func_00124D70(struct Unk_func_00124D70_0 *arg0);
s32 func_00124DA0(struct Unk_func_00124DA0_0 *arg0);
s32 func_00124F0C(void);
s32 func_00124F14(void);
s32 func_00124F1C(void);
s32 func_00124F24(void);
s32 func_00124F2C(void);
s32 func_00124F34(struct Unk_func_00124F34_0 *arg0);
s32 func_00124F64(struct Unk_func_00124F64_0 *arg0);
s32 func_00124F94(struct Unk_func_00124F94_0 *arg0);
s32 func_00124FC4(struct Unk_func_00124FC4_0 *arg0);
s32 func_00124FF4(struct Unk_func_00124FF4_0 *arg0);
s32 func_00125024(struct Unk_func_00125024_0 *arg0);
s32 func_001257F0(s32, s32, s32, s32);
s32 func_0012592C(s32, s32, s32, s32, s32);
s32 func_001259CC(s32 arg0);
s32 func_00125A9C(s32 arg0, s32 arg1, s32 arg2);
s32 func_00125B30(void *arg0, s32 arg1, s32 arg2);
s32 func_00125BD0(void *arg0, s32 arg1, s32 arg2);
s16 func_00125C48(u8 *arg0);
void func_00125C70(s32 arg0, s32 arg1);
s32 func_00125C8C(s32, s32, s32);
s32 func_00125D58(s32, s32);
M2C_UNK func_00125D78(M2C_UNK, s32, M2C_UNK);
void func_00125DF4(s32 arg0, M2C_UNK arg1);
s32 func_00126028(s32, s32, s32, s32, s32);
void func_00126264(s16 arg0, s16 arg1, s32 arg2, s32 arg3);
s32 func_0012629C(s32, s32, s32, s32, s32);
void func_001263EC(s16 arg0, s32 arg1, s16 arg2, s32 arg3);
s32 func_001269B8(void);
void func_001271C8(void);
M2C_UNK func_00127218();
s32 func_00127568(s32, s32, s32, s32);
s32 func_00127880();
s32 func_001278D0(void);
void func_00129358(void);
void func_001295FC(void);
void func_0012962C(void);
void func_0012A7F8(void);
s32 func_0012AD7C(void);
s32 func_0012B4FC(s32, s32);
s32 func_0012BC60(void);
s32 func_0012BD78(void);
void func_0012D424(s32 arg0);
void func_0012FFFC(s16 arg0, s16 arg1, s16 arg2);
void func_00130038(s16 arg0, s16 arg1, s16 arg2);
void func_00130074(s16 arg0, s16 arg1, s16 arg2);
s32 func_001300B8(s32, s32, s32, s32);
void func_001317F0(s32 arg0);
s32 func_0013180C(s32, s32);
s32 func_00132C74(s32 arg0);
s32 func_00132CBC(u8 *arg0, s32 arg1);
void func_00134730(void);
M2C_UNK func_00134754();
s32 func_001347E0(void);
s32 func_00134818();
M2C_UNK func_00134A14();
M2C_UNK func_00134B04(s32);
void func_00134E94(s16 arg0);
M2C_UNK func_00134ED8();
M2C_UNK func_00134FFC();
void func_001380A8(void);
void func_0013821C(void);
void func_00138298(void);
void func_001382A4(void);
s32 func_0013882C(void);
void func_00138844(void);
void func_00138908(void);
s32 func_001389BC(void);
s32 func_00138D60(void);
void func_00138E10(void);
void func_00138EC8(void);
void func_00138F20(void);
M2C_UNK func_00138F54();
s32 func_00138FA8(void);
M2C_UNK func_00138FCC();
s32 func_00139170();
void func_0013918C(void);
void func_001391B8(void);
void func_00139280(s16 arg0);
void func_00139328(void);
M2C_UNK func_0013934C();
M2C_UNK func_001393F4();
M2C_UNK func_00139438();
void func_00139518(void);
M2C_UNK func_00139534(M2C_UNK);
void func_001395D8(void);
void func_001395F4(void);
void func_00139610(s16 arg0);
void func_001396EC(void);
void func_00139708(void);
void func_00139724(void);
s32 func_00139758(s32, s32);
M2C_UNK func_00139A60();
M2C_UNK func_00139B10();
void func_00139B5C(s16 arg0);
M2C_UNK func_00139B6C();
void func_0013A0E8(s16 arg0);
M2C_UNK func_0013A10C(s16);
s32 func_0013A430(s32);
void func_0013A494(void);
void func_0013A4D4(void);
M2C_UNK func_0013B448(M2C_UNK);
void func_0013B558(void);
void func_0013B574(void);
void func_0013B590(void);
M2C_UNK func_0013B6E8(s16);
M2C_UNK func_0013B844(M2C_UNK);
void func_0013BBCC(void);
M2C_UNK func_0013D5FC();
void func_0013E4D4(void);
void func_0013E4DC(void);
s32 func_0013EDA4(void);
M2C_UNK func_0013FBEC(M2C_UNK);
void func_001407C8(void);
s16 func_00140B8C(s32 arg0);
s32 func_00140C88(s32 arg0);
s32 func_00140CC8(s32);
s32 func_00140CD8(s16 arg0);
s32 func_0014107C(void);
void func_00141234(void);
s32 func_00141454(s32, s32, s32);
void func_001415A8(s32 arg0, s16 arg1, s32 arg2);
s32 func_001415C4(s32 arg0, s16 arg1, s32 arg2);
void func_00141630(s32 arg0, s16 arg1, s32 arg2);
s32 func_001416CC(s32, s32, s32, s32);
void func_00141D14(void);
void func_00141D30(void);
void func_00141D4C(void);
M2C_UNK func_001433F0();
M2C_UNK func_00143490();
M2C_UNK func_001435A0();
M2C_UNK func_00143E94();
void func_001448F8(s32 arg0);
M2C_UNK func_00144924();
void func_001449CC(struct Unk_func_001449CC_0 *arg0);
void func_001454B4(void);
void func_001454D0(s32 arg0);
void func_0014632C(s32 arg0, s32 arg1, s32 arg2);
s32 func_0014634C(s32, s32, s32);
M2C_UNK func_00147548(s32);
M2C_UNK func_00147650();
void func_001478D0(struct Unk_func_001478D0_0 *arg0);
s32 func_0014792C(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014861C(struct Unk_func_0014861C_0 *arg0);
s32 func_00148634(s32, s32);
M2C_UNK func_001494FC(s32);
u16 func_00149554(struct Unk_func_00149554_0 *arg0);
s32 func_001496FC(s32 *arg0, s32 arg1, s32 *arg2);
s32 func_001497DC(s32 arg0, s32 arg1);
s32 func_001497EC(s32 *arg0, s32 arg1);
void func_001497FC(s32 arg0, s32 arg1, s32 arg2);
s32 func_0014981C(struct Unk_func_0014981C_0 *arg0);
s32 func_00149880(s32, s32, s32, s32);
s32 func_00149960(s32, s32, s32, s32);
void func_0014999C(s32 arg0, s32 arg1);
void func_001499C0(s32 arg0, s32 arg1, s32 arg2);
s32 func_00149A44(s32 arg0, s32 arg1, s32 arg2);
s32 func_00149F10(s32, s32, s32);
void func_0014A000(struct Unk_func_0014A000_0 *arg0, s32 arg1);
void func_0014A020(struct Unk_func_0014A020_0 *arg0, s32 arg1);
s32 func_0014A38C(s8 *arg0);
s32 func_0014A3E8(s32, s32, s32);
u8 *func_0014A45C(u8 *arg0, u8 *arg1);
u32 func_0014A4E8(struct Unk_func_0014A4E8_0 *arg0);
s32 func_0014A56C(s32 arg0, s32 arg1, s32 arg2);
s32 func_0014A614(s32, s32, s32);
s32 func_0014A6D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0014AEB0(void);
s32 func_0014B198(void);
void func_0014B1A4(s32 arg0, s32 arg1);
s32 func_0014B244(void);
void func_0014B538(s32 arg0, s32 arg1);
s32 func_0014B9FC(s32);
s32 func_0014BB0C(s32, s32, s32);
void func_0014BCD8(s8 *arg0);
s32 func_0014BE68(s32 arg0);
s32 func_0014C808(s32);
s32 func_0014D0E0(void);
void func_0014E2FC(struct Unk_func_0014E2FC_0 *arg0, s32 arg1);
void func_0014E438(void);
M2C_UNK func_0014E6A0(s32);
s32 func_0014E7FC(void);
void func_0014EC0C(struct Unk_func_0014EC0C_0 *arg0);
s32 func_0014ED3C(s32, s32, s32, s32, s32);
M2C_UNK func_00151E1C(void *);
void func_00152108(struct Unk_func_00152108_0 *arg0);
M2C_UNK func_00152A7C();
s32 func_00152E80(s32 arg0);
s32 func_00152EC0(struct Unk_func_00152EC0_0 *arg0);
s32 func_00152F40(struct Unk_func_00152F40_0 *arg0);
void func_00152F64(struct Unk_func_00152F64_0 *arg0, s32 arg1, s32 arg2);
s32 func_00152F88(struct Unk_func_00152F88_0 *arg0);
void func_00152F9C(struct Unk_func_00152F9C_0 *arg0, s32 arg1, s32 arg2);
s32 func_00152FC0(struct Unk_func_00152FC0_0 *arg0);
s32 func_00152FD4(struct Unk_func_00152FD4_0 *arg0);
s32 func_00152FF8(struct Unk_func_00152FF8_0 *arg0);
s32 func_0015301C(struct Unk_func_0015301C_0 *arg0);
s32 func_00153040(struct Unk_func_00153040_0 *arg0);
s32 func_00153054(struct Unk_func_00153054_0 *arg0);
s32 func_00153068(struct Unk_func_00153068_0 *arg0);
s32 func_0015307C(struct Unk_func_0015307C_0 *arg0);
s32 func_00153090(struct Unk_func_00153090_0 *arg0);
void func_0015383C(struct Unk_func_0015383C_0 *arg0);
M2C_UNK func_00153FA4();
s32 func_00154584(struct Unk_func_00154584_0 *arg0);
void func_0015573C(struct Unk_func_0015573C_0 *arg0);
void *func_00155790(struct Unk_func_00155790_0 *arg0);
M2C_UNK func_00155938();
void func_00155A78(s32 arg0);
s32 func_00155A98(struct Unk_func_00155A98_0 *arg0);
s32 func_00155AAC(struct Unk_func_00155AAC_0 *arg0);
s32 func_00155AC0(struct Unk_func_00155AC0_0 *arg0);
void func_00155D04(struct Unk_func_00155D04_0 *arg0);
void func_00155F34(s32 arg0);
void func_001564A0(struct Unk_func_001564A0_0 *arg0);
M2C_UNK func_00156A00();
s32 func_00156A94(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00156D54(struct Unk_func_00156D54_0 *arg0);
s32 func_00156D68(struct Unk_func_00156D68_0 *arg0);
void func_001573F8(struct Unk_func_001573F8_0 *arg0);
M2C_UNK func_001576E8();
s32 func_00157718(s32, s32, s32, s32);
void func_001578AC(struct Unk_func_001578AC_0 *arg0, s32 arg1);
s32 func_001578CC(struct Unk_func_001578CC_0 *arg0);
s32 func_0015792C(struct Unk_func_0015792C_0 *arg0);
M2C_UNK func_00157950();
void func_00158018(struct Unk_func_00158018_0 *arg0);
M2C_UNK func_001582AC();
void func_001582DC(struct Unk_func_001582DC_0 *arg0);
void func_001582FC(struct Unk_func_001582FC_0 *arg0);
s32 func_00158358(struct Unk_func_00158358_0 *arg0);
void func_0015836C(struct Unk_func_0015836C_0 *arg0, s32 arg1, M2C_UNK arg2);
s32 func_001583CC(struct Unk_func_001583CC_0 *arg0);
s32 func_001583E0(struct Unk_func_001583E0_0 *arg0);
void func_001584C8(struct Unk_func_001584C8_0 *arg0);
M2C_UNK func_001587E4();
s32 func_00158A80(struct Unk_func_00158A80_0 *arg0);
s32 func_00158AAC(s32 arg0);
void func_00158ADC(struct Unk_func_00158ADC_0 *arg0, s32 arg1);
s32 func_00158B08(struct Unk_func_00158B08_0 *arg0);
s32 func_00158B84(struct Unk_func_00158B84_0 *arg0);
s32 func_00158B98(struct Unk_func_00158B98_0 *arg0);
M2C_UNK func_00159C00(s32);
M2C_UNK func_0015A118(void *);
s32 func_0015A1E8(s32);
void func_0015A210(struct Unk_func_0015A210_0 *arg0);
void func_0015A228(s32 arg0);
void func_0015A244(s32 arg0, struct Unk_func_0015A244_1 *arg1);
void func_0015A26C(s32 arg0, M2C_UNK arg1);
void func_0015A290(s32 *arg0);
void func_0015A2A0(void **arg0);
void func_0015A2D0(void);
M2C_UNK func_0015A2D8(M2C_UNK, s32);
M2C_UNK func_0015A5E4(s32);
s32 func_0015A630(s32, M2C_UNK);
s32 func_0015AC44(struct Unk_func_0015AC44_0 *arg0);
s32 func_0015ACAC(s32);
s32 func_0015ACD0(struct Unk_func_0015ACD0_0 *arg0);
s32 func_0015ACE4(struct Unk_func_0015ACE4_0 *arg0);
s32 func_0015B334(s32);
s32 func_0015B368(s32 arg0);
s32 func_0015B3C8(struct Unk_func_0015B3C8_0 *arg0);
void func_0015B40C(struct Unk_func_0015B40C_0 *arg0, s32 arg1);
s32 func_0015B41C(struct Unk_func_0015B41C_0 *arg0);
void func_0015B430(struct Unk_func_0015B430_0 *arg0, s32 arg1);
s32 func_0015B440(struct Unk_func_0015B440_0 *arg0);
void func_0015B454(struct Unk_func_0015B454_0 *arg0, s32 arg1);
s32 func_0015B464(struct Unk_func_0015B464_0 *arg0);
void func_0015B478(struct Unk_func_0015B478_0 *arg0, s32 arg1);
s32 func_0015B488(struct Unk_func_0015B488_0 *arg0);
s32 func_0015B4C0(struct Unk_func_0015B4C0_0 *arg0);
void func_0015B720(struct Unk_func_0015B720_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0015B73C(s32 arg0);
void func_0015B748(struct Unk_func_0015B748_0 *arg0, s32 arg1);
s32 func_0015B758(s32 arg0);
void func_0015B764(struct Unk_func_0015B764_0 *arg0, s32 arg1, s32 arg2);
s32 func_0015B77C(s32 arg0);
void func_0015B788(struct Unk_func_0015B788_0 *arg0, s32 arg1, s32 arg2);
s32 func_0015B7A0(s32 arg0);
void func_0015B7AC(struct Unk_func_0015B7AC_0 *arg0, s32 arg1, s32 arg2);
s32 func_0015B7C4(s32 arg0);
M2C_UNK func_0015B9B0(s32);
s32 func_0015BEB4(void);
void func_0015BEBC(void);
M2C_UNK func_0015BEC4(s32);
void *func_0015D298(u8 *arg0, u8 *arg1);
s32 func_0015D9E8(struct Unk_func_0015D9E8_0 *arg0, s32 arg1);
void func_0015E5D8(void);
s32 func_0015E7D8(s32 *arg0);
void func_0015E80C(s32 arg0);
s32 func_0015E81C(void);
s32 func_0015EEC8(void);
s32 func_0015F644(s32, s32, s32, s32, s32, s32, s32);
M2C_UNK func_001607C4(M2C_UNK, s32);
void func_001652FC(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4);
void func_00165368(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
M2C_UNK func_001653F4();
s32 func_001654B8(s32, s32, s32);
s32 func_00168290(s32 *arg0);
s32 func_0016888C(s32 arg0, s32 arg1, s32 *arg2);
s32 func_00168918(s32 arg0, s32 *arg1);
s32 func_0016895C(s32 arg0, s32 *arg1, s32 *arg2);
s32 func_001689B4(struct Unk_func_001689B4_0 *arg0, s32 *arg1);
s32 func_001689DC(struct Unk_func_001689DC_0 *arg0, s32 *arg1);
s32 func_00168A04(struct Unk_func_00168A04_0 *arg0);
s32 func_0016962C(struct Unk_func_0016962C_0 *arg0, s32 arg1);
s32 func_001696B0(struct Unk_func_001696B0_0 *arg0, s32 arg1);
s32 func_00169784(struct Unk_func_00169784_0 *arg0, s32 *arg1);
s32 func_001697B8(struct Unk_func_001697B8_0 *arg0, s32 *arg1);
void func_001697EC(struct Unk_func_001697EC_0 *arg0);
void func_0016980C(struct Unk_func_0016980C_0 *arg0);
s32 func_0016982C(struct Unk_func_0016982C_0 *arg0, s32 *arg1);
s32 func_00169860(struct Unk_func_00169860_0 *arg0, s32 *arg1);
s32 func_001698E4(struct Unk_func_001698E4_0 *arg0, s32 *arg1);
s32 func_001698F8(struct Unk_func_001698F8_0 *arg0, s32 *arg1);
u32 func_0016990C(struct Unk_func_0016990C_0 *arg0);
s32 func_00169950(s32);
void func_00169B1C(struct Unk_func_00169B1C_0 *arg0, s32 arg1, s32 arg2);
s32 func_00169C20(s32, s32, s32);
s32 func_0016B04C(struct Unk_func_0016B04C_0 *arg0);
s32 func_0016B064(struct Unk_func_0016B064_0 *arg0);
s32 func_0016B084(s32);
M2C_UNK func_0016BE0C();
void fwrite(void);
M2C_UNK inflateReset(s32);
s32 jchuff_emit_bits(s32, s32, s32);
s32 jchuff_flush_bits(struct Unk_jchuff_flush_bits_0 *arg0);
s32 jcphuff_emit_bits(s32, s32, s32);
void jcphuff_flush_bits(struct Unk_jcphuff_flush_bits_0 *arg0);
M2C_UNK jpeg_abort(s32);
void jpeg_abort_decompress(s32 arg0);
s32 jpeg_add_quant_table(s32, s32, s32, s32, s32);
M2C_UNK jpeg_destroy(s32);
void jpeg_destroy_decompress(s32 arg0);
s32 jpeg_mem_init(void);
void jpeg_mem_term(void);
M2C_UNK jpeg_set_colorspace(s32, M2C_UNK);
M2C_UNK jpeg_set_defaults(s32);
void jpeg_set_linear_quality(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK jpeg_set_quality(s32, M2C_UNK, M2C_UNK);
void malloc(void);
void memcmp(void);
void memcpy(void);
void memset(void);
s32 module_start(void);
s32 module_stop(void);
u32 multiply(struct Unk_multiply_0 *arg0, s32 arg1, u32 arg2, s32 arg3);
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
void reset_error_mgr(void **arg0);
M2C_UNK sceAtracSetLoopNum(s32, M2C_UNK);
u32 sceCccIsValidUCS4(s32 arg0);
M2C_UNK sceCccSetTable();
s32 sceCtrlReadBufferPositive(void *, s32);
M2C_UNK sceFontClose(s32);
s32 sceFontDoneLib(s32);
M2C_UNK sceGeContinue();
s32 sceGeListUpdateStallAddr(s32, void *);
void sceGuCallMode(s32 arg0);
void sceGuColor(s32 arg0);
void sceGuDisable(s32);
void sceGuDispBuffer(s32, s32, void *, s32);
void sceGuDrawArray(s32, s32, s32, void *, void *);
void sceGuDrawBezier(s32, s32, s32, void *, void *);
M2C_UNK sceGuFinish();
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
M2C_UNK sceIoRead();
M2C_UNK sceIoWrite();
s32 sceKernelCancelEventFlag(s32, u32, void *);
s32 sceKernelCancelSema(s32, s32, void *);
s32 sceKernelClearEventFlag(u32, u32);
u32 sceKernelCreateEventFlag(void *, u32, u32, void *);
u32 sceKernelCreateSema(void *, u32, s32, s32, void *);
M2C_UNK sceKernelDelayThread(s32);
M2C_UNK sceKernelDeleteEventFlag(s32);
M2C_UNK sceKernelDeleteSema(s32);
s32 sceKernelDeleteThread(u32);
M2C_UNK sceKernelExitThread(M2C_UNK);
u32 sceKernelGetThreadId(void);
s32 sceKernelPollEventFlag(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK sceKernelResumeDispatchThread(s32);
M2C_UNK sceKernelSetEventFlag(s32, M2C_UNK);
M2C_UNK sceKernelSignalSema(s32, M2C_UNK);
s32 sceKernelSuspendDispatchThread();
s32 sceKernelWaitEventFlag(u32, u32, s32, void *, void *);
s32 sceKernelWaitSema(u32, s32, void *);
M2C_UNK sceKernelWaitThreadEnd(s32, M2C_UNK);
M2C_UNK scePafHeaparea_ACCE25B2(void *, s32 *);
M2C_UNK scePafHeaparea_F50AAE41(void *, s32 *);
s32 scePaf_01CF521E(struct Unk_scePaf_01CF521E_0 *arg0);
void scePaf_02A6AA18(void);
s32 scePaf_05026B26(s32 *arg0, s32 arg1);
void scePaf_05073826(struct Unk_scePaf_05073826_0 *arg0);
s16 scePaf_0598FFD6(struct Unk_scePaf_0598FFD6_0 *arg0, s32 arg1);
void scePaf_0880B827(s32 **arg0, s32 **arg1);
s32 scePaf_08DD2D50(struct Unk_scePaf_08DD2D50_0 *arg0, s32 arg1);
s32 scePaf_0B0959FC(struct Unk_scePaf_0B0959FC_0 *arg0);
s32 scePaf_0B4C0DB6(struct Unk_scePaf_0B4C0DB6_0 *arg0);
M2C_UNK scePaf_0C6EEA21();
s32 scePaf_0CFDBE2F(void);
M2C_UNK scePaf_0F3527DD();
void scePaf_0FFA3ECE(struct Unk_scePaf_0FFA3ECE_0 *arg0);
void scePaf_10B901E7(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 scePaf_1232B7A3(struct Unk_scePaf_1232B7A3_0 *arg0, s32 arg1, s32 arg2);
s32 scePaf_132148FD(void);
void scePaf_139D9047(s32 arg0);
M2C_UNK scePaf_14CE7F6F(s32);
s32 scePaf_14FF46A6(s32 arg0, s32 arg1, s32 *arg2);
void scePaf_17BC4F41(s32 arg0);
s32 scePaf_1811AD32(s32, s32, s32, s32);
void scePaf_1A1F232F(struct Unk_scePaf_1A1F232F_0 *arg0, s32 arg1);
void scePaf_1A45C860(s32 arg0, s32 arg1);
s32 scePaf_1A468B86(struct Unk_scePaf_1A468B86_0 *arg0);
M2C_UNK scePaf_1AD33D73();
void scePaf_1B043852(struct Unk_scePaf_1B043852_0 *arg0);
void scePaf_1BD0E905(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 scePaf_1C286704(s32);
s32 scePaf_1F0E9712(void);
M2C_UNK scePaf_211A764A(void *, void *, void *);
void scePaf_2120282A(struct Unk_scePaf_2120282A_0 *arg0);
void scePaf_21A0C6E0(void **arg0, s32 arg1, s32 arg2);
s32 scePaf_222526B6();
void scePaf_224C33F0(struct Unk_scePaf_224C33F0_0 *arg0);
void scePaf_22B0D7D8(struct Unk_scePaf_22B0D7D8_0 *arg0);
void scePaf_2313DDCA(struct Unk_scePaf_2313DDCA_0 *arg0);
s32 scePaf_256218C2(void);
void scePaf_26DE971C(void);
M2C_UNK scePaf_296897BC();
void scePaf_2A5DDF04(struct Unk_scePaf_2A5DDF04_0 *arg0, s32 arg1);
void scePaf_2A7CDE78(s32 arg0);
s32 scePaf_2AD8DE45(s32 arg0);
M2C_UNK scePaf_2CB6FBBE();
void scePaf_2CFAE498(s32 arg0);
void scePaf_2D08CA09(s32 arg0, s32 *arg1, s32 arg2, s32 arg3);
s32 scePaf_2E6CA751(s32);
M2C_UNK scePaf_2FA84441(s32, M2C_UNK, M2C_UNK);
s32 scePaf_3291BDDD(void);
s32 scePaf_3342C5F5(s32 *arg0, s32 arg1);
void scePaf_3481F595(struct Unk_scePaf_3481F595_0 *arg0, s32 arg1);
M2C_UNK *scePaf_34C973B6(void);
M2C_UNK scePaf_3586BE05(M2C_UNK, s32);
s32 scePaf_360956CC(struct Unk_func_000E4F0C_0 *arg0, struct Unk_func_000E4F0C_1 *arg1);
void scePaf_37A98AE9(s32 arg0);
s32 scePaf_3829AC24(void);
M2C_UNK *scePaf_39B36025(void);
void scePaf_3A69534B(void);
void scePaf_3DBE861F(struct Unk_scePaf_3DBE861F_0 *arg0);
s32 scePaf_3E203AEB(s32, s32, s32);
s32 scePaf_3F52824F(s32, s32, s32);
M2C_UNK scePaf_3FBD9639();
s32 scePaf_409E25A3(struct Unk_scePaf_409E25A3_0 *arg0);
s32 scePaf_40C95283(void);
void scePaf_4129A915(struct Unk_scePaf_4129A915_0 *arg0, s32 arg1, s32 arg2);
void scePaf_43374E9E(void);
M2C_UNK scePaf_4370175A();
M2C_UNK scePaf_442F1731();
M2C_UNK scePaf_44AAF96C();
void scePaf_44EB8C62(struct Unk_scePaf_44EB8C62_0 *arg0);
M2C_UNK scePaf_462E5873(s32);
M2C_UNK scePaf_47E35A50(s32);
M2C_UNK scePaf_48B5C1C0(s32);
void scePaf_49CE42F7(struct Unk_scePaf_49CE42F7_0 *arg0);
void scePaf_4C5F6657(struct Unk_scePaf_4C5F6657_0 *arg0);
M2C_UNK *scePaf_4C8C2E25(void);
s32 scePaf_4D810FDC(struct Unk_scePaf_4D810FDC_0 *arg0);
M2C_UNK scePaf_4E60E34C(s32, M2C_UNK, M2C_UNK);
M2C_UNK scePaf_4E67BB08(void *);
s32 scePaf_4EA868E6(struct Unk_scePaf_4EA868E6_0 *arg0);
s32 scePaf_4FC2470C(struct Unk_scePaf_4FC2470C_0 *arg0, s32 arg1);
s32 scePaf_503BA324(s32, s32, s32, s32);
s32 scePaf_503FA456(void);
void scePaf_50B0C0A1(s32 arg0, s32 arg1);
M2C_UNK scePaf_5148EFE2(s32, s32, s32);
void scePaf_52CF8D80(s32 *arg0);
s32 scePaf_537D04C6(s32 arg0);
void scePaf_539F2583(struct Unk_scePaf_539F2583_0 *arg0);
void scePaf_541F36E9(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK scePaf_545FE2DA();
void scePaf_5470B915(struct Unk_scePaf_5470B915_0 *arg0, s32 arg1);
void scePaf_548AA4E7(void);
s32 scePaf_55CC4749(struct Unk_scePaf_55CC4749_0 *arg0);
void scePaf_5775283A(struct Unk_scePaf_5775283A_0 *arg0);
s32 scePaf_5822F12A(void);
void scePaf_58846DF3(s32 arg0);
void scePaf_58BFC2AC(struct Unk_scePaf_58BFC2AC_0 *arg0, struct Unk_scePaf_58BFC2AC_1 *arg1);
s32 scePaf_5A818E41(void);
void scePaf_5A8D4BDB(struct Unk_scePaf_5A8D4BDB_0 *arg0);
s32 scePaf_5A99AE67(s32 arg0);
s32 scePaf_5CA7F421(s32 arg0, s32 arg1);
void scePaf_5CE11C03(struct Unk_scePaf_5CE11C03_0 *arg0);
s32 scePaf_5DFB5858(void);
s32 scePaf_5EBC648F(s32, s32);
void scePaf_5EFC5387(s32 arg0);
M2C_UNK scePaf_5FAC9869();
s32 scePaf_602EB0CE(s32, s32, s32);
void scePaf_607713A6(s32 arg0);
s32 scePaf_6141934B(struct Unk_scePaf_6141934B_0 *arg0, s32 arg1);
void scePaf_6528115D(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 scePaf_65C19AC0(void);
void scePaf_66907719(void);
M2C_UNK scePaf_66FE90D7(s32, s32);
M2C_UNK scePaf_672036FE();
s32 scePaf_680513D9(struct Unk_scePaf_680513D9_0 *arg0);
M2C_UNK scePaf_6829D7AF();
void scePaf_6A772BF7(struct Unk_scePaf_6A772BF7_0 *arg0);
void scePaf_6B1E90C7(void);
void scePaf_6B678D44(struct Unk_scePaf_6B678D44_0 *arg0);
M2C_UNK scePaf_6BA9C299(M2C_UNK, s32);
void scePaf_6C234A6A(s32 arg0);
void scePaf_6C6979F0(struct Unk_scePaf_6C6979F0_0 *arg0, s32 arg1);
void scePaf_6CF44237(struct Unk_scePaf_6CF44237_0 *arg0);
s32 scePaf_6D491648(s32, s32, s32);
void scePaf_6DD28F44(void);
void scePaf_6E1B5B50(struct Unk_scePaf_6E1B5B50_0 *arg0);
void scePaf_7116224C(struct Unk_scePaf_7116224C_0 *arg0, s32 arg1);
s32 scePaf_715E8DAB(s32);
M2C_UNK scePaf_71EDAD83();
M2C_UNK scePaf_7333E75A(s32);
s32 scePaf_73712598(void);
s32 scePaf_75062BCF(struct Unk_scePaf_75062BCF_0 *arg0);
s32 scePaf_752F182C(s32);
s32 scePaf_7796B70B(void **arg0, s32 arg1);
void scePaf_77EB25F5(s32 arg0, M2C_UNK arg1);
s32 scePaf_78219D10(s32 arg0);
s32 scePaf_7894B61F(s32, s32);
M2C_UNK scePaf_7952AE83(s32);
void scePaf_79E57CAF(void);
s32 scePaf_79F4AE65(struct Unk_scePaf_79F4AE65_0 *arg0);
M2C_UNK scePaf_7BED034E();
void scePaf_7C2C2742(void);
s32 scePaf_7C31F453(void);
void scePaf_7D83FB20(void);
void scePaf_7DDE0658(s32 arg0);
s32 scePaf_7E8C08D8(s32, s32);
M2C_UNK scePaf_7EC15225(void *, void *);
void scePaf_8159EB28(struct Unk_scePaf_8159EB28_0 *arg0);
M2C_UNK scePaf_83944053(s32);
s32 scePaf_84485F54(s32, s32, s32);
void scePaf_84913A3A(struct Unk_scePaf_84913A3A_0 *arg0);
s32 scePaf_849ED670(s32 *arg0);
s32 scePaf_84BD418F(s32);
void scePaf_86A5AE7D(struct Unk_scePaf_86A5AE7D_0 *arg0);
void scePaf_86B41BA3(struct Unk_scePaf_86B41BA3_0 *arg0);
void scePaf_86C87E62(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 scePaf_872F948B(void);
s32 scePaf_87516C3B(s32, s32, s32);
s32 scePaf_87E5F9C7(struct Unk_scePaf_87E5F9C7_0 *arg0, s32 arg1, s32 arg2);
void scePaf_88D73AED(s32 arg0, s32 arg1);
void scePaf_89582FD0(struct Unk_scePaf_89582FD0_0 *arg0);
void scePaf_8A51BA1E(struct Unk_scePaf_8A51BA1E_0 *arg0);
s32 scePaf_8A861692(s32);
s32 scePaf_8A8FE0A1(s32 arg0);
void scePaf_8CDEDC6F(struct Unk_scePaf_8CDEDC6F_0 *arg0);
void scePaf_8D3EAEA3(s32 arg0);
s32 scePaf_8D7FC7DB(struct Unk_scePaf_8D7FC7DB_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void scePaf_8DEB3DB3(void *arg0);
s32 scePaf_8F12B63A(s32);
M2C_UNK scePaf_8FC65EB0();
void scePaf_905CF2A7(struct Unk_scePaf_905CF2A7_0 *arg0, s32 arg1);
s32 scePaf_910BCFE1(s32, s32, s32, s32, s32, s32);
s32 scePaf_91E82C1B(s32 arg0, s32 arg1, s32 arg2);
void scePaf_9399AF50(s32 *arg0);
void scePaf_94136997(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void scePaf_95708BC0(struct Unk_scePaf_95708BC0_0 *arg0);
s32 scePaf_95948FB6(void);
s32 scePaf_95C97571(s32 arg0);
M2C_UNK *scePaf_962FA087(void);
s32 scePaf_96C46364(void);
M2C_UNK scePaf_980228BA();
s32 scePaf_9948CDB3(s32, s32, s32);
M2C_UNK scePaf_997D2809(void *);
s32 scePaf_9A8E343E(void);
s32 scePaf_9C483594(void);
s32 scePaf_9C9B6732(void);
M2C_UNK scePaf_9F10613F(void *, s32);
s32 scePaf_9F60CB01(s32 arg0);
void scePaf_A044BFC0(void);
void scePaf_A08B0F31(void);
s32 scePaf_A0A25707(void);
void scePaf_A3761F27(struct Unk_scePaf_A3761F27_0 *arg0);
void scePaf_A4B48F00(struct Unk_scePaf_A4B48F00_0 *arg0);
void scePaf_A574DB92(struct Unk_scePaf_A574DB92_0 *arg0);
s32 scePaf_A72594EF();
void scePaf_A82E3C19(s32 arg0);
void scePaf_AAA8D3DA(s32 arg0, s32 arg1, s32 arg2);
void scePaf_AAD0EE78(s32 arg0);
M2C_UNK scePaf_ABBBB335(s32);
s32 scePaf_ABCBC1C5(struct Unk_scePaf_ABCBC1C5_0 *arg0);
s32 scePaf_AEEF2A7C(struct Unk_scePaf_AEEF2A7C_0 *arg0);
M2C_UNK *scePaf_B0C3E598(void);
void scePaf_B3D2C3BB(void);
M2C_UNK scePaf_B3D58D25();
s32 scePaf_B4E3A16C(s32 arg0);
s32 scePaf_B61E88F2(void);
s32 scePaf_B6F52424(struct Unk_scePaf_B6F52424_0 *arg0);
s32 scePaf_B7865607(void);
s32 scePaf_B7E6052B(M2C_UNK);
void scePaf_B884B031(struct Unk_scePaf_B884B031_0 *arg0);
s32 scePaf_B9BE69FD(struct Unk_scePaf_B9BE69FD_0 *arg0, s32 arg1);
s32 scePaf_BA433BEF(void);
s32 scePaf_BA6B8B02(struct Unk_scePaf_BA6B8B02_0 *arg0);
void scePaf_BAA76FDE(struct Unk_scePaf_BAA76FDE_0 *arg0);
s32 scePaf_BAA88CDA(void);
void scePaf_BFFAEE83(struct Unk_scePaf_BFFAEE83_0 *arg0);
s32 scePaf_C01BF169(s32, s32, s32, s32, s32, s32);
void scePaf_C07B7162(struct Unk_scePaf_C07B7162_0 *arg0);
void scePaf_C1579C1D(void **arg0, s32 arg1, s32 arg2);
void scePaf_C1F72218(struct Unk_scePaf_C1F72218_0 *arg0);
void scePaf_C1FAF826(M2C_UNK **arg0);
void scePaf_C2911954(s32 arg0);
s32 scePaf_C2E4423A(struct Unk_scePaf_C2E4423A_0 *arg0);
void scePaf_C4BAD564(s32 arg0);
void scePaf_C6624F24(struct Unk_scePaf_C6624F24_0 *arg0);
s32 scePaf_C6F44EF9(void);
void scePaf_C85155C9(struct Unk_scePaf_C85155C9_0 *arg0);
void scePaf_C8E7B03F(s32 arg0);
s32 scePaf_C933B3C5(struct Unk_scePaf_C933B3C5_0 *arg0, s32 arg1);
void scePaf_CA5EF446(struct Unk_scePaf_CA5EF446_0 *arg0);
M2C_UNK scePaf_CA79D58B();
void scePaf_CA8CDF32(struct Unk_scePaf_CA8CDF32_0 *arg0);
s32 scePaf_CAE6374A(void);
void scePaf_CAF05F1D(struct Unk_scePaf_CAF05F1D_0 *arg0, s32 arg1);
s32 scePaf_CEAC29F3(void);
void scePaf_CFAF88AB(struct Unk_scePaf_CFAF88AB_0 *arg0);
s32 scePaf_D05C226F(s32, s32);
void scePaf_D0AD10FF(void);
void scePaf_D153385E(struct Unk_scePaf_D153385E_0 *arg0);
s32 scePaf_D1EE972C(struct Unk_scePaf_D1EE972C_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK scePaf_D24E4016(s32);
void scePaf_D34D0B82(struct Unk_scePaf_D34D0B82_0 *arg0);
void scePaf_D36F3AAA(void);
s32 scePaf_D3AB4076(void);
void scePaf_D4C6CC7A(struct Unk_scePaf_D4C6CC7A_0 *arg0);
M2C_UNK scePaf_D4DAB044();
M2C_UNK scePaf_D6232F26();
M2C_UNK scePaf_D6C1FF36();
s32 scePaf_D6CD39AF(struct Unk_scePaf_D6CD39AF_0 *arg0);
s32 scePaf_D6E69FCB(s32 *arg0, M2C_UNK arg1);
s32 scePaf_D6F088EF(s32, s32);
s32 scePaf_D7215544();
s32 scePaf_D726DDD3(s32 arg0);
void scePaf_D726F4A2(s32 arg0);
s32 scePaf_D7E925A1(void **arg0, s32 arg1);
s32 scePaf_D8739C4C(void **arg0);
s32 scePaf_DA3A6D88(s32, s32);
s32 scePaf_DAD477C1(void);
void scePaf_DB1549DF(struct Unk_scePaf_DB1549DF_0 *arg0);
M2C_UNK scePaf_DB230BE1();
M2C_UNK scePaf_DC544921();
s32 scePaf_DC8B0309(struct Unk_scePaf_DC8B0309_0 *arg0);
void scePaf_DE75C2BA(struct Unk_scePaf_DE75C2BA_0 *arg0);
M2C_UNK scePaf_DEDF238F();
void scePaf_DEF9EBE7(struct Unk_scePaf_DEF9EBE7_0 *arg0);
void scePaf_DF58706C(s32 **arg0);
s32 scePaf_DF642973(s32 arg0);
void scePaf_DFB912CB(struct Unk_scePaf_DFB912CB_0 *arg0);
void scePaf_DFC8650C(s32 arg0);
void scePaf_DFFE9ED6(void);
M2C_UNK scePaf_E1242646();
void scePaf_E15A64EA(struct Unk_scePaf_E15A64EA_0 *arg0);
s32 scePaf_E3020CA3(s32, s32);
void scePaf_E357380E(s32 arg0);
M2C_UNK scePaf_E418D7E0(s32);
void scePaf_E69C3B1B(s32 arg0);
s32 scePaf_E977B833(s32);
s32 scePaf_EA39A7C1(void);
M2C_UNK scePaf_EAA5AFF6(s32, M2C_UNK);
s32 scePaf_EB346F51(struct Unk_scePaf_EB346F51_0 *arg0, s32 arg1, s32 arg2);
s32 scePaf_EB553D60(s32 arg0, s32 arg1);
void scePaf_EB5BDCE1(void **arg0, s32 arg1, s32 arg2, s32 arg3);
void scePaf_ED2DF238(void **arg0, s32 arg1, s32 arg2);
s32 scePaf_ED3E4EB1(void);
M2C_UNK scePaf_ED83B18F(s32, M2C_UNK, s32);
M2C_UNK scePaf_ED89C94B(s32);
void scePaf_EE10AEF1(struct Unk_scePaf_EE10AEF1_0 *arg0);
s32 scePaf_F0885EDC(s32 arg0, s32 arg1);
void scePaf_F13EBB78(void);
M2C_UNK scePaf_F1552447();
void scePaf_F1CF9579(void);
void scePaf_F23F3226(struct Unk_scePaf_F23F3226_0 *arg0);
s32 scePaf_F2E5FDEB(s32, s32);
s32 scePaf_F47CA1C2(s32, s32, s32, s32);
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
void scePaf_FCABD0E7(struct Unk_scePaf_FCABD0E7_0 *arg0);
M2C_UNK scePaf_FCB4E053();
void scePaf_FCD816FA(s32 *arg0);
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
void sceReg_39461B4D(void);
void sceReg_4CA16893(void);
void sceReg_57641A81(void);
void sceReg_92E41280(void);
void sceReg_9B25EDF1(void);
void sceReg_D4475AA8(void);
void sceReg_DEDA92BF(void);
void sceReg_FA8A5739(void);
M2C_UNK setByteArray(s32, M2C_UNK, s32, M2C_UNK);
void sinf(void);
void sqrtf(void);
void start_pass_downsample(void);
void std_huff_tables(s32 arg0);
void strcpy(void);
void strlen(void);
void strncpy(void);
void tr_static_init(void);
void write_file_trailer(s32 arg0);
void write_marker_byte(void);
s32 zlibCompileFlags(void);

#endif
