#ifndef NETFRONT_DECLS_H
#define NETFRONT_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_00133BC8_s {
    u8 pad0[0x8];
    volatile s32 unk8;
};

struct D_00133BE0_s {
    u8 pad0[0x8];
    volatile s32 unk8;
};

struct D_00133BF8_s {
    u8 pad0[0x8];
    volatile s32 unk8;
};

struct D_00133C10_s {
    u8 pad0[0x8];
    volatile s32 unk8;
    s32 unkC;
};

struct D_00133C28_s {
    u8 pad0[0x8];
    volatile s32 unk8;
    s32 unkC;
};

struct D_00133C58_s {
    u8 pad0[0x8];
    volatile s32 unk8;
    s32 unkC;
};

struct D_00133C70_s {
    u8 pad0[0x8];
    volatile s32 unk8;
    s32 unkC;
};

struct D_00133D08_s {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_Unk_Unk_func_0002A794_0_4D0_50 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_Unk_Unk_func_0002A7B0_0_4D0_50 {
    u8 pad0[0x34];
    s32 unk34;
};

struct Unk_Unk_Unk_func_00036BF4_0_4D0_48 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_Unk_func_0001F6B0_0_4D0 {
    u8 pad0[0x1C];
    s32 *unk1C;
};

struct Unk_Unk_func_000202C8_0_4D0 {
    u8 pad0[0x20];
    s32 *unk20;
};

struct Unk_Unk_func_000227B0_0_4D0 {
    u8 pad0[0x30];
    void *unk30;
};

struct Unk_Unk_func_00022BE8_0_4D0 {
    u8 pad0[0xC];
    s32 *unkC;
};

struct Unk_Unk_func_0002645C_0_4D0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_Unk_func_00028298_0_4D0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_Unk_func_000282D8_0_4D0 {
    u8 pad0[0x38];
    void *unk38;
};

struct Unk_Unk_func_00028310_0_4D0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_Unk_func_00028320_0_4D0 {
    u8 pad0[0x38];
    void *unk38;
};

struct Unk_Unk_func_00028834_0_4D0 {
    u8 pad0[0x38];
    void *unk38;
};

struct Unk_Unk_func_00028844_0_4D0 {
    u8 pad0[0x38];
    void *unk38;
};

struct Unk_Unk_func_00029E78_0_4D0 {
    u8 pad0[0x3C];
    s32 unk3C;
};

struct Unk_Unk_func_0002A458_0_4D0 {
    u8 pad0[0x50];
    s32 unk50;
};

struct Unk_Unk_func_0002A794_0_4D0 {
    u8 pad0[0x50];
    struct Unk_Unk_Unk_func_0002A794_0_4D0_50 *unk50;
};

struct Unk_Unk_func_0002A7A4_0_4D0 {
    u8 pad0[0x50];
    s32 unk50;
};

struct Unk_Unk_func_0002A7B0_0_4D0 {
    u8 pad0[0x50];
    struct Unk_Unk_Unk_func_0002A7B0_0_4D0_50 *unk50;
};

struct Unk_Unk_func_0002AE9C_0_4D0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_Unk_func_0002AF28_0_4D0 {
    u8 pad0[0x44];
    void *unk44;
};

struct Unk_Unk_func_00036054_0_4D0 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_Unk_func_00036A94_0_4D0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_Unk_func_00036BF4_0_4D0 {
    u8 pad0[0x48];
    struct Unk_Unk_Unk_func_00036BF4_0_4D0_48 *unk48;
};

struct Unk_Unk_func_000B2104_0_4D0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_Unk_func_000B4318_0_4D0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_Unk_func_000B4960_0_4D0 {
    u8 pad0[0x10];
    s32 *unk10;
};

struct Unk_Unk_func_000B4970_0_4D0 {
    u8 pad0[0x10];
    void *unk10;
};

struct Unk_Unk_func_000B7A1C_0_4D0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_Unk_func_000BB834_0_4D0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_Unk_func_000D1098_0_4D0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_Unk_func_000E6068_0_1C8 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_fixedtables_0 {
    u8 pad0[0x44];
    M2C_UNK * unk44;
    M2C_UNK * unk48;
    s32 unk4C;
    s32 unk50;
};

struct Unk_func_00000250_0 {
    u8 pad0[0x690];
    s32 unk690;
};

struct Unk_func_0000025C_0 {
    u8 pad0[0x690];
    s32 unk690;
};

struct Unk_func_00005B24_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00005C34_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00007E60_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

struct Unk_func_00007E60_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0000858C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000092C4_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000094F0_0 {
    u8 pad0[0x4C];
    void * unk4C;
};

struct Unk_func_00009598_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_00009598_temp_v0 {
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
};

struct Unk_func_00009668_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_00009750_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00009750_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00009798_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_000097B8_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_00009C3C_0 {
    u8 pad0[0x3C];
    M2C_UNK (*unk3C)(M2C_UNK, s32, s32);
    s32 unk40;
};

struct Unk_func_00009C3C_1 {
    s32 unk0;
    u8 pad4[0x10];
    s32 unk14;
    s32 unk18;
};

struct Unk_func_00009CAC_0 {
    u8 pad0[0x3C];
    M2C_UNK (*unk3C)(M2C_UNK, s32, s32);
    s32 unk40;
};

struct Unk_func_00009CAC_1 {
    s32 unk0;
    u8 pad4[0x18];
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00009D1C_0 {
    u8 pad0[0x3C];
    M2C_UNK (*unk3C)(M2C_UNK, s32, s32);
    s32 unk40;
};

struct Unk_func_00009D1C_1 {
    s32 unk0;
    u8 pad4[0x20];
    s32 unk24;
    s32 unk28;
};

struct Unk_func_00009D8C_0 {
    u8 pad0[0x3C];
    M2C_UNK (*unk3C)(M2C_UNK, s32, s32);
    s32 unk40;
};

struct Unk_func_00009D8C_1 {
    s32 unk0;
    u8 pad4[0x28];
    s32 unk2C;
    s32 unk30;
};

struct Unk_func_0000ADD4_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0000AF68_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_0000B2E8_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_0000BECC_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_0000BEEC_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_0000BF08_0 {
    u8 pad0[0x68C];
    s32 unk68C;
};

struct Unk_func_0000BFD0_0 {
    u8 pad0[0x878];
    s32 unk878;
};

struct Unk_func_0000C100_0 {
    u8 pad0[0x87C];
    s32 unk87C;
};

struct Unk_func_0000C700_0 {
    u8 pad0[0x6B8];
    s32 unk6B8;
};

struct Unk_func_0000FE90_0 {
    u8 pad0[0xB0];
    s32 unkB0;
};

struct Unk_func_00010AFC_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00011574_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_00011838_0 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_func_00011838_var_v0 {
    u8 pad0[0x20];
    void *unk20;
};

struct Unk_func_000118A4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000118B4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00011D74_0 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_func_00011D98_0 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_func_00011E38_0 {
    u8 pad0[0x858];
    s32 unk858;
};

struct Unk_func_00011E48_0 {
    u8 pad0[0x85C];
    s32 unk85C;
};

struct Unk_func_00011E5C_0 {
    u8 pad0[0x85C];
    s32 unk85C;
};

struct Unk_func_00011E6C_0 {
    u8 pad0[0x868];
    s32 unk868;
};

struct Unk_func_00013B34_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000149FC_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00014B50_0 {
    u8 pad0[0x4];
    s8 *unk4;
    u8 pad8[0x18];
    s32 unk20;
    s32 unk24;
};

struct Unk_func_00014D4C_0 {
    u8 pad0[0x40];
    s32 unk40;
    s32 unk44;
};

struct Unk_func_000154C8_0 {
    u8 pad0[0x24];
    struct Unk_func_000154C8_temp_a0 *unk24;
};

struct Unk_func_000154C8_temp_a0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_000157BC_1 {
    s32 unk0;
    s8 unk4;
};

struct Unk_func_000158D8_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x18];
    s32 unk20;
};

struct Unk_func_00015B38_temp_v0_3 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
    u8 pad10[0x10];
    s8 *unk20;
};

struct Unk_func_000179CC_0 {
    s32 unk0;
    u8 pad4[0x10];
    s32 unk14;
    u8 pad18[0x1C];
    s32 unk34;
    u8 pad38[0x4];
    s32 unk3C;
};

struct Unk_func_00017F3C_1 {
    u8 * unk0;
    u8 * unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct Unk_func_00018028_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0001808C_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00018094_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001809C_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_000180A4_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_000180AC_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_000180B4_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_000180BC_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00019CD0_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00019CF4_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00019D00_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_0001C530_temp_s2 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_0001E5F0_1 {
    s32 unk0;
    u8 pad4[0x18];
    s32 unk1C;
};

struct Unk_func_0001EABC_1 {
    s32 unk0;
    u8 pad4[0x18];
    s32 unk1C;
};

struct Unk_func_0001EF88_1 {
    s32 unk0;
    u8 pad4[0x18];
    s32 unk1C;
};

struct Unk_func_0001F6B0_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_0001F6B0_0_4D0 *unk4D0;
};

struct Unk_func_000202C8_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_000202C8_0_4D0 *unk4D0;
};

struct Unk_func_000227B0_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_000227B0_0_4D0 *unk4D0;
};

struct Unk_func_00022BE8_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_00022BE8_0_4D0 *unk4D0;
};

struct Unk_func_00025790_temp_v1 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00025FD4_1 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0002645C_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_0002645C_0_4D0 *unk4D0;
};

struct Unk_func_00026E4C_temp_a2 {
    u8 pad0[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    u8 pad1F0[0xC];
    s32 unk1FC;
    s32 unk200;
};

struct Unk_func_0002703C_3 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x4];
    s32 unk18;
};

struct Unk_func_00027890_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00027890_temp_a0 {
    u8 pad0[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
};

struct Unk_func_00028298_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_00028298_0_4D0 *unk4D0;
};

struct Unk_func_000282D8_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_000282D8_0_4D0 *unk4D0;
};

struct Unk_func_00028310_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_00028310_0_4D0 *unk4D0;
};

struct Unk_func_00028320_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_00028320_0_4D0 *unk4D0;
};

struct Unk_func_00028834_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_00028834_0_4D0 *unk4D0;
};

struct Unk_func_00028844_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_00028844_0_4D0 *unk4D0;
};

struct Unk_func_00028844_temp_v0 {
    u8 pad0[0x38];
    s32 unk38;
    s32 unk3C;
};

struct Unk_func_00029908_temp_v0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
    u8 pad10[0x8];
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_00029E78_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_00029E78_0_4D0 *unk4D0;
};

struct Unk_func_0002A458_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_0002A458_0_4D0 *unk4D0;
};

struct Unk_func_0002A794_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_0002A794_0_4D0 *unk4D0;
};

struct Unk_func_0002A7A4_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_0002A7A4_0_4D0 *unk4D0;
};

struct Unk_func_0002A7B0_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_0002A7B0_0_4D0 *unk4D0;
};

struct Unk_func_0002AE9C_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_0002AE9C_0_4D0 *unk4D0;
};

struct Unk_func_0002AF28_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_0002AF28_0_4D0 *unk4D0;
};

struct Unk_func_0002AF28_temp_s1 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_0002D43C_0 {
    u8 pad0[0x4];
    M2C_UNK *unk4;
    s32 unk8;
    u8 padC[0x24];
    s32 unk30;
};

struct Unk_func_0002EE38_temp_v0_2 {
    u8 pad0[0x3C];
    s32 unk3C;
};

struct Unk_func_000304E0_temp_v0 {
    s32 *unk0;
    u8 pad4[0x50];
    s32 unk54;
};

struct Unk_func_000305E8_temp_v0 {
    s32 *unk0;
    u8 pad4[0x50];
    s32 unk54;
};

struct Unk_func_00036054_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_00036054_0_4D0 *unk4D0;
};

struct Unk_func_00036A94_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_00036A94_0_4D0 *unk4D0;
};

struct Unk_func_00036BF4_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_00036BF4_0_4D0 *unk4D0;
};

struct Unk_func_00038160_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00039B10_temp_v0 {
    u8 pad0[0x24];
    struct Unk_func_00039B10_temp_v0_2 *unk24;
};

struct Unk_func_00039B10_temp_v0_2 {
    u8 pad0[0x18];
    void *unk18;
};

struct Unk_func_0003A3D8_temp_v0_2 {
    u8 pad0[0x4];
    s32 **unk4;
};

struct Unk_func_0003A3D8_temp_v0_3 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0003B16C_temp_v0 {
    u8 pad0[0xA4];
    s32 unkA4;
};

struct Unk_func_0003B820_0 {
    s32 unk0;
    u8 pad4[0xC];
    s32 unk10;
    u8 pad14[0x20];
    s32 unk34;
    s32 unk38;
    s32 unk3C;
};

struct Unk_func_0003BA64_0 {
    u8 pad0[0x4];
    void * unk4;
};

struct Unk_func_0003BA90_0 {
    u8 pad0[0x4];
    void * unk4;
};

struct Unk_func_0003BE70_0 {
    u8 pad0[0x4];
    void * unk4;
};

struct Unk_func_0003BF24_0 {
    u8 pad0[0x4];
    void * unk4;
};

struct Unk_func_0003C2B8_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0003E444_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_0003F820_0 {
    u8 pad0[0xB0C8];
    s32 unkB0C8;
    s32 unkB0CC;
};

struct Unk_func_0003F848_0 {
    u8 pad0[0xB0D8];
    s32 unkB0D8;
    s32 unkB0DC;
};

struct Unk_func_0003F85C_0 {
    u8 pad0[0xB0E0];
    s32 unkB0E0;
    s32 unkB0E4;
};

struct Unk_func_0003FD5C_0 {
    u32 unk0;
    u8 pad4[0xC];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_000406FC_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0004083C_0 {
    struct Unk_func_0004083C_temp_v1 *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_0004083C_temp_v1 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_func_00040AD8_0 {
    struct Unk_func_00040AD8_temp_s1 *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00040AD8_temp_s1 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x8];
    M2C_UNK (*unk38)(s32);
};

struct Unk_func_00040EC4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00041C30_0 {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad20[0x4];
    s32 unk24;
};

struct Unk_func_00041C44_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00041C74_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00042040_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00042050_0 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0xC];
    s32 unk20;
};

struct Unk_func_000420CC_0 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x4];
    s32 unk18;
};

struct Unk_func_00042394_temp_s1 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x4];
    s32 unk18;
};

struct Unk_func_0004260C_temp_s0 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_func_00042650_temp_s0 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_func_00042788_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_000427C0_0 {
    u8 pad0[0x14];
    s32 unk14;
    s32 unk18;
};

struct Unk_func_00042818_0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x28];
    void * unk34;
    s32 unk38;
    u8 pad3C[0x1C];
    s32 unk58;
    s32 unk5C;
    s32 unk60;
};

struct Unk_func_000428A4_0 {
    u8 pad0[0x58];
    s32 ** unk58;
};

struct Unk_func_00042904_0 {
    u8 pad0[0x58];
    s32 ** unk58;
    s32 unk5C;
    s32 unk60;
};

struct Unk_func_0004295C_0 {
    u8 pad0[0x58];
    s32 ** unk58;
    u8 pad5C[0x4];
    s32 unk60;
};

struct Unk_func_000429C0_temp_v0 {
    u8 pad0[0x34];
    void *unk34;
    s32 unk38;
};

struct Unk_func_00042BAC_temp_v0 {
    u8 pad0[0x34];
    void *unk34;
    s32 unk38;
};

struct Unk_func_00042D70_temp_v0 {
    u8 pad0[0x10];
    u16 unk10;
    u16 unk12;
};

struct Unk_func_00042ED8_temp_s0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00042F1C_temp_v0 {
    u8 pad0[0x44];
    s32 unk44;
    s32 unk48;
};

struct Unk_func_00042F2C_temp_v0 {
    u8 pad0[0x34];
    void *unk34;
    s32 unk38;
};

struct Unk_func_00043A9C_temp_v0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x4C];
    s32 unk58;
    s32 unk5C;
    s32 unk60;
};

struct Unk_func_00043BDC_temp_v0 {
    u8 pad0[0x58];
    void **unk58;
    u8 pad5C[0x4];
    s32 unk60;
};

struct Unk_func_00043BF8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00044A34_temp_v0 {
    s32 **unk0;
    u8 pad4[0x10];
    s32 unk14;
};

struct Unk_func_00044AA4_temp_v0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_0004584C_temp_v0 {
    u8 pad0[0x4];
    s32 (*unk4)(void *, void *****);
};

struct Unk_func_00045A64_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00046144_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct Unk_func_000466BC_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00046D34_0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_000477A8_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_000478B8_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000478FC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0004796C_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00048818_temp_v0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00049AD0_0 {
    u8 pad0[0x4];
    M2C_UNK *unk4;
    void (*unk8)(s32, s32);
    M2C_UNK *unkC;
    void (*unk10)(s32);
};

struct Unk_func_00049AD0_1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x4];
    s32 unk10;
    M2C_UNK *unk14;
    void (*unk18)(void *);
    M2C_UNK *unk1C;
    M2C_UNK *unk20;
    s32 unk24;
};

struct Unk_func_00049B6C_0 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_func_0004A8A4_0 {
    u8 pad0[0x24];
    s32 unk24;
    s32 unk28;
    s32 unk2C;
};

struct Unk_func_0004BA78_0 {
    u8 pad0[0x14];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_0004BB2C_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0004BC5C_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_0004D2F4_temp_a1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0004D814_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_0004D850_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_0004D888_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_00050598_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
    u8 padC[0x8];
    s32 unk14;
    s32 unk18;
    u8 pad1C[0x8];
    s32 unk24;
};

struct Unk_func_00051FD8_0 {
    u8 pad0[0x17C0];
    s32 unk17C0;
};

struct Unk_func_00051FE8_0 {
    u8 pad0[0x17C0];
    s32 unk17C0;
};

struct Unk_func_0005225C_temp_v1 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_00052288_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00052288_2 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00052384_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00053CCC_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_00053EB8_0 {
    u8 pad0[0x1820];
    s32 unk1820;
    s32 unk1824;
};

struct Unk_func_0005401C_0 {
    u8 pad0[0x1820];
    s32 unk1820;
};

struct Unk_func_00054024_0 {
    u8 pad0[0x1824];
    s32 unk1824;
};

struct Unk_func_00055A08_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_00055D80_temp_s0_2 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_00055ECC_temp_s0_2 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_00056018_temp_s0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_00056D54_1 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00056D54_temp_v0 {
    u8 pad0[0x32];
    u8 unk32;
};

struct Unk_func_000590E8_0 {
    struct Unk_func_000590E8_var_a0 *unk0;
    s32 unk4;
};

struct Unk_func_000590E8_var_a0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00059188_0 {
    void * unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_000591B4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000591DC_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00059204_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00059294_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000593E8_0 {
    s32 unk0;
    u8 pad4[0x4];
    s16 unk8;
    s16 unkA;
};

struct Unk_func_00059538_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000595C8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0005C140_0 {
    u8 pad0[0x1C];
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_0005C204_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0005C218_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0005C3A4_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_0005C3A4_1 {
    s32 unk0;
    u8 pad4[0x4];
    s32 * unk8;
};

struct Unk_func_0005C3E4_2 {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x8];
    s32 unk18;
};

struct Unk_func_0005C40C_1 {
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
    u8 pad10[0x8];
    s32 unk18;
};

struct Unk_func_0005C4D0_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0005C510_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0005C614_0 {
    u8 pad0[0xB4];
    M2C_UNK (*unkB4)(void *, s32);
    s32 unkB8;
};

struct Unk_func_0005C614_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_0005C614_2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_0005C6CC_0 {
    u8 pad0[0xC];
    s16 unkC;
};

struct Unk_func_0005D0EC_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0005D21C_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0005D290_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0005D2C4_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0005D2C4_temp_v0 {
    u8 pad0[0x33];
    u8 unk33;
};

struct Unk_func_0005D3A4_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0005D5F4_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

struct Unk_func_0005D5F4_1 {
    struct Unk_func_0005D5F4_temp_v1 *unk0;
    s32 unk4;
};

struct Unk_func_0005D5F4_temp_v1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0005D924_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0005D98C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0005DE50_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0005E4D0_temp_s0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0005E68C_temp_s0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0005E77C_temp_s0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0005F49C_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_0005F560_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0005F594_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_0005FC08_temp_v1 {
    u8 pad0[0x6C];
    s32 unk6C;
};

struct Unk_func_0005FD94_1 {
    s32 unk0;
    u8 pad4[0x4];
    s16 unk8;
    u8 padA[0x4];
    s16 unkE;
};

struct Unk_func_0005FD94_temp_a1 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x20];
    s32 unk28;
};

struct Unk_func_0005FF44_temp_v0 {
    u8 pad0[0x74];
    s32 unk74;
    s32 unk78;
};

struct Unk_func_0005FF54_temp_v1 {
    u8 pad0[0x74];
    s32 unk74;
    s32 unk78;
};

struct Unk_func_00060220_0 {
    u8 pad0[0x4];
    void * unk4;
};

struct Unk_func_00060740_0 {
    u8 pad0[0x4];
    struct Unk_func_00060740_temp_v0_2 *unk4;
    u8 pad8[0x10];
    s32 unk18;
    u8 pad1C[0x4];
    s32 unk20;
};

struct Unk_func_00060740_temp_v0_2 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00062194_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_00063870_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct Unk_func_00063EF0_temp_v0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00068BC0_0 {
    u8 pad0[0x17C4];
    s32 unk17C4;
};

struct Unk_func_00068BDC_0 {
    s32 unk0;
    u8 pad4[0xC4];
    s32 unkC8;
    s32 unkCC;
    s32 unkD0;
    s32 unkD4;
};

struct Unk_func_00068BDC_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00068C6C_temp_s0 {
    s32 unk0;
    u8 pad4[0xC4];
    s32 unkC8;
};

struct Unk_func_00068C6C_temp_s1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00068D1C_0 {
    u8 pad0[0x4C];
    u32 unk4C;
};

struct Unk_func_00068D48_0 {
    u8 pad0[0xC0];
    s32 unkC0;
};

struct Unk_func_00069388_temp_s0 {
    void *unk0;
    u8 pad4[0x30];
    s32 unk34;
    s32 **unk38;
    u8 pad3C[0x4];
    s32 unk40;
};

struct Unk_func_00069388_temp_s1 {
    u8 pad0[0x17EC];
    s32 unk17EC;
    u8 pad17F0[0x10];
    s32 unk1800;
};

struct Unk_func_000693F0_temp_s0 {
    void *unk0;
    u8 pad4[0x30];
    s32 unk34;
    s32 **unk38;
};

struct Unk_func_000693F0_temp_v1 {
    u8 pad0[0x17EC];
    s32 unk17EC;
    u8 pad17F0[0x10];
    s32 unk1800;
};

struct Unk_func_00069440_0 {
    u8 pad0[0x17C4];
    s32 unk17C4;
};

struct Unk_func_00069580_1 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_00069D78_0 {
    u8 pad0[0x40];
    s32 unk40;
    s32 unk44;
};

struct Unk_func_0006A3FC_1 {
    u8 pad0[0x4C];
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
};

struct Unk_func_0006A5F4_temp_s4 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0006C624_temp_v0 {
    u8 pad0[0x9C];
    s32 unk9C;
};

struct Unk_func_0006D0F0_temp_s0 {
    s32 unk0;
    u8 pad4[0x98];
    s32 unk9C;
};

struct Unk_func_000721B8_2 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000723AC_3 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00072570_4 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00072A58_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00077734_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_000777D4_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000777EC_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000777F8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00077808_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000778A0_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000778D0_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_000778DC_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_000778E8_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_0007B384_temp_a1 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x4];
    s32 unk18;
};

struct Unk_func_0007B3B4_temp_a1 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x4];
    s32 unk28;
};

struct Unk_func_0007B72C_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0007B7F4_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0007C554_0 {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad12[0x15A];
    s32 unk16C;
};

struct Unk_func_0007C554_temp_v0 {
    u8 pad0[0x2];
    u16 unk2;
};

struct Unk_func_0007C5B8_0 {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad12[0x15A];
    s32 unk16C;
};

struct Unk_func_0007C5B8_temp_v0 {
    u8 pad0[0x2];
    u16 unk2;
};

struct Unk_func_0007C66C_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0007C66C_temp_a0 {
    u8 pad0[0x2];
    u16 unk2;
};

struct Unk_func_0007C768_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0007C768_temp_v0 {
    u8 pad0[0x2];
    u16 unk2;
};

struct Unk_func_0007C7A8_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0007C7A8_temp_v0 {
    u8 pad0[0x2];
    u16 unk2;
};

struct Unk_func_0007C7E8_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0007C834_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0007CD84_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0007CD84_temp_s0 {
    s32 unk0;
    u8 pad4[0xC];
    s32 unk10;
};

struct Unk_func_0007ECF4_0 {
    u8 pad0[0x188];
    s32 unk188;
    s32 unk18C;
    s32 unk190;
};

struct Unk_func_0007FF80_2 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00081540_temp_s0 {
    u8 pad0[0x184];
    s32 unk184;
};

struct Unk_func_0008156C_1 {
    s32 unk0;
    M2C_UNK * unk4;
    M2C_UNK * unk8;
};

struct Unk_func_000819B8_temp_a1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000867F4_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00086800_0 {
    void * unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00086898_0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00086964_1 {
    u8 pad0[0x18];
    M2C_UNK *unk18;
};

struct Unk_func_00086F34_0 {
    u8 pad0[0xE];
    s16 unkE;
    s32 unk10;
};

struct Unk_func_00087010_0 {
    u8 pad0[0xC];
    s16 unkC;
    s16 unkE;
};

struct Unk_func_00087058_0 {
    u8 pad0[0xC];
    s16 unkC;
    s16 unkE;
};

struct Unk_func_000874F0_0 {
    u8 pad0[0xC];
    s16 unkC;
    s16 unkE;
};

struct Unk_func_00087608_0 {
    u8 pad0[0xC];
    s16 unkC;
    s16 unkE;
};

struct Unk_func_00088600_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_000895D0_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_0008A040_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0008A140_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0008B4C0_1 {
    u8 pad0[0xC];
    void * unkC;
};

struct Unk_func_0008B520_1 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0008B938_0 {
    u8 pad0[0x8];
    s16 unk8;
    s16 unkA;
};

struct Unk_func_0008D674_0 {
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

struct Unk_func_00092494_temp_v1 {
    s16 unk0;
    u8 pad2[0x6];
    s32 unk8;
};

struct Unk_func_00093620_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00096D60_0 {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x10];
    s32 unk14;
};

struct Unk_func_00096D70_0 {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x10];
    s32 unk14;
};

struct Unk_func_00097564_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_func_000975D8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00097650_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00097698_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_000978D4_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0009790C_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00097964_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_000997DC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0009982C_0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00099878_0 {
    u8 pad0[0x8];
    M2C_UNK *unk8;
    u8 padC[0x4];
    M2C_UNK *unk10;
    u8 pad14[0x4];
    s32 unk18;
};

struct Unk_func_0009A1BC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0009A86C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0009A8AC_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0009AC54_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0009AC98_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0009ACD0_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0009AED8_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0009AFD4_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0009B018_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0009B164_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_func_0009B3E4_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    u8 padC[0xC];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
};

struct Unk_func_0009B454_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_0009B460_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_0009B46C_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct Unk_func_0009CFA0_0 {
    s32 unk0;
    u8 pad4[0x58];
    s32 unk5C;
};

struct Unk_func_0009D0E0_0 {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad3C[0x1C];
    s32 unk58;
    void * unk5C;
};

struct Unk_func_0009D128_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_0009D39C_0 {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    s32 unk34;
    u8 pad38[0x4];
    s32 unk3C;
    u8 pad40[0x4];
    void * unk44;
    u8 pad48[0x10];
    s32 unk58;
};

struct Unk_func_0009DC84_0 {
    void *unk0;
    u8 pad4[0x40];
    s32 unk44;
    u8 pad48[0xC];
    s32 unk54;
};

struct Unk_func_0009DDE8_0 {
    void *unk0;
    u8 pad4[0x40];
    s32 unk44;
    s32 unk48;
    u8 pad4C[0x8];
    s32 unk54;
};

struct Unk_func_000A0D20_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000A1394_0 {
    s32 unk0;
    u8 pad4[0x4];
    struct Unk_func_000A1394_temp_a0 *unk8;
};

struct Unk_func_000A1394_temp_a0 {
    u8 pad0[0x18];
    M2C_UNK (*unk18)(void *);
};

struct Unk_func_000A1FF8_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x4];
    s32 unk28;
};

struct Unk_func_000A2004_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x8];
    s32 unk2C;
    u8 pad30[0x3C];
    s32 unk6C;
    s32 unk70;
};

struct Unk_func_000A2018_0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C];
    s32 unk6C;
    s32 unk70;
};

struct Unk_func_000A2B28_0 {
    u8 pad0[0x20];
    s32 unk20;
    u8 pad24[0x4];
    s32 unk28;
    u8 pad2C[0x40];
    s32 unk6C;
};

struct Unk_func_000A2B34_0 {
    u8 pad0[0x6C];
    s32 unk6C;
};

struct Unk_func_000A5A2C_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000A60F0_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000A67D8_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000A6858_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000A6F1C_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000A86D8_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000A8ECC_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000A9D4C_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000AA00C_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000AA2C0_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000AA344_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000AA7F4_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000AF390_temp_a0 {
    u8 pad0[0x30C];
    s32 unk30C;
};

struct Unk_func_000AF654_temp_a0 {
    u8 pad0[0x30C];
    s32 unk30C;
};

struct Unk_func_000AF6D0_temp_a0 {
    u8 pad0[0x30C];
    s32 unk30C;
};

struct Unk_func_000B0718_temp_v0 {
    s32 *unk0;
    u8 pad4[0x50];
    s32 unk54;
};

struct Unk_func_000B2104_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_000B2104_0_4D0 *unk4D0;
};

struct Unk_func_000B4318_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_000B4318_0_4D0 *unk4D0;
};

struct Unk_func_000B4960_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_000B4960_0_4D0 *unk4D0;
};

struct Unk_func_000B4970_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_000B4970_0_4D0 *unk4D0;
};

struct Unk_func_000B7A1C_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_000B7A1C_0_4D0 *unk4D0;
};

struct Unk_func_000B9AC0_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_000B9AC0_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000BB834_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_000BB834_0_4D0 *unk4D0;
};

struct Unk_func_000BD298_0 {
    u8 pad0[0x394];
    s32 unk394;
    s32 unk398;
    s32 unk39C;
    s32 unk3A0;
};

struct Unk_func_000BDFC0_0 {
    u8 pad0[0x474];
    struct Unk_func_000BDFC0_var_s0 *unk474;
};

struct Unk_func_000BDFC0_var_s0 {
    struct Unk_func_000BDFC0_var_s0 *unk0;
    M2C_UNK (*unk4)(void *, M2C_UNK, s32);
    s32 unk8;
};

struct Unk_func_000BE270_0 {
    u8 pad0[0x460];
    s32 unk460;
    s32 unk464;
    u8 pad468[0x4C];
    M2C_UNK (*unk4B4)(s32, s32 *, s32 *);
};

struct Unk_func_000BE270_temp_s2 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x44];
    s32 unk4C;
    s32 unk50;
};

struct Unk_func_000BE6D4_0 {
    u8 pad0[0x40C];
    s32 unk40C;
};

struct Unk_func_000BEAE4_0 {
    u8 pad0[0x42C];
    s32 unk42C;
};

struct Unk_func_000BEED0_0 {
    u8 pad0[0x468];
    s32 unk468;
};

struct Unk_func_000BEED8_0 {
    u8 pad0[0x46C];
    s32 unk46C;
};

struct Unk_func_000BEEE0_0 {
    u8 pad0[0x470];
    s32 unk470;
};

struct Unk_func_000BF224_1 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x4];
    void ****unkC;
};

struct Unk_func_000BF3D0_0 {
    s32 unk0;
    u8 pad4[0x10];
    s32 unk14;
    u8 pad18[0x480];
    s32 unk498;
    s32 unk49C;
    s32 unk4A0;
    u8 pad4A4[0x4];
    M2C_UNK *unk4A8;
    M2C_UNK *unk4AC;
    M2C_UNK *unk4B0;
};

struct Unk_func_000BF9C4_temp_v0 {
    void *unk0;
    s32 unk4;
};

struct Unk_func_000BFA88_temp_v0 {
    void *unk0;
    s32 unk4;
};

struct Unk_func_000C1694_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000C1694_2 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000C51BC_0 {
    s32 unk0;
    u8 pad4[0x14];
    void * unk18;
};

struct Unk_func_000C6454_0 {
    u8 pad0[0x54];
    s32 unk54;
    s32 unk58;
    u8 pad5C[0xC];
    s32 unk68;
};

struct Unk_func_000C64BC_0 {
    u8 pad0[0x68];
    s32 unk68;
};

struct Unk_func_000C64BC_1 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000C7138_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
    u8 pad10[0x28];
    s32 unk38;
    u8 pad3C[0x20];
    s32 ** unk5C;
    u8 pad60[0x4];
    void * unk64;
    s32 unk68;
};

struct Unk_func_000C71C4_0 {
    u8 pad0[0x90];
    s32 unk90;
};

struct Unk_func_000C7568_temp_v0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_000C842C_temp_v0_2 {
    u8 pad0[0x4];
    void **unk4;
    u8 pad8[0x4];
    s32 unkC;
    void **unk10;
};

struct Unk_func_000C859C_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_000C8BB8_1 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_000C932C_0 {
    u8 pad0[0x2FC];
    s32 unk2FC;
};

struct Unk_func_000C996C_0 {
    u8 pad0[0x2FC];
    s32 unk2FC;
};

struct Unk_func_000C9AB0_temp_a3 {
    u8 pad0[0x34];
    s32 unk34;
    s32 unk38;
};

struct Unk_func_000C9AB0_temp_t0 {
    u8 pad0[0x34];
    s32 unk34;
    s32 unk38;
};

struct Unk_func_000C9CD0_temp_v0 {
    void *unk0;
    u8 pad4[0x30];
    s32 unk34;
    s32 unk38;
};

struct Unk_func_000C9D80_temp_v0 {
    void *unk0;
    u8 pad4[0x20];
    s32 unk24;
    s32 unk28;
};

struct Unk_func_000C9DD8_temp_v1 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_000C9DEC_temp_v1 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_000C9EF0_temp_v1 {
    u8 pad0[0x70];
    s32 unk70;
};

struct Unk_func_000CB768_temp_a0 {
    u8 pad0[0x308];
    s32 unk308;
};

struct Unk_func_000CB768_temp_a3 {
    u8 pad0[0x304];
    s32 unk304;
    s32 unk308;
};

struct Unk_func_000CBD24_0 {
    u8 pad0[0x310];
    s32 unk310;
};

struct Unk_func_000CBD2C_0 {
    u8 pad0[0x314];
    s32 unk314;
    s32 unk318;
};

struct Unk_func_000CC568_temp_v1 {
    u8 pad0[0x31C];
    s32 unk31C;
    s32 unk320;
};

struct Unk_func_000CCCDC_temp_v0 {
    u8 pad0[0x90];
    s16 unk90;
    s16 unk92;
    s16 unk94;
    s16 unk96;
};

struct Unk_func_000CE200_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_000D1098_0 {
    u8 pad0[0x4D0];
    struct Unk_Unk_func_000D1098_0_4D0 *unk4D0;
};

struct Unk_func_000D45B0_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_000D4718_1 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000D5418_0 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_func_000D5524_0 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_func_000DCE98_0 {
    u8 pad0[0x1B0];
    M2C_UNK ** unk1B0;
};

struct Unk_func_000E0190_0 {
    u8 pad0[0x70];
    s32 unk70;
    u8 pad74[0x14C];
    struct Unk_func_000E0190_temp_v1 *unk1C0;
};

struct Unk_func_000E0190_temp_v1 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x4];
    s32 unk2C;
};

struct Unk_func_000E1C70_0 {
    u8 pad0[0x70];
    s32 unk70;
    u8 pad74[0xC0];
    s32 unk134;
    u8 pad138[0x88];
    struct Unk_func_000E1C70_temp_v1 *unk1C0;
};

struct Unk_func_000E1C70_temp_v1 {
    u8 pad0[0x5C];
    s32 unk5C;
    s32 unk60;
};

struct Unk_func_000E25A0_temp_s0 {
    u8 pad0[0x8];
    M2C_UNK (*unk8)();
    u8 padC[0x5C];
    s32 unk68;
    s32 unk6C;
};

struct Unk_func_000E2734_temp_v0 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0x54];
    s32 unk6C;
};

struct Unk_func_000E3AD4_temp_v1 {
    M2C_UNK (*unk0)();
    u8 pad4[0x10];
    s32 unk14;
};

struct Unk_func_000E495C_temp_v1 {
    M2C_UNK (*unk0)();
    u8 pad4[0x10];
    s32 unk14;
};

struct Unk_func_000E6068_0 {
    u8 pad0[0x1C8];
    struct Unk_Unk_func_000E6068_0_1C8 *unk1C8;
};

struct Unk_func_000E6488_0 {
    u8 pad0[0x90];
    s32 unk90;
};

struct Unk_func_000E7960_0 {
    u8 pad0[0x6C];
    s32 unk6C;
};

struct Unk_func_000EBFFC_0 {
    u8 pad0[0x3C];
    s32 unk3C;
    s32 unk40;
};

struct Unk_func_000EC280_0 {
    void * unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_000EC290_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000ECF20_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000ED0CC_0 {
    void * unk0;
    u8 pad4[0x4];
    s32 unk8;
    u8 padC[0x30];
    s32 unk3C;
};

struct Unk_func_000EE138_0 {
    u8 pad0[0xAC];
    s32 unkAC;
};

struct Unk_func_000EE1FC_0 {
    u8 pad0[0x70];
    s32 unk70;
    u8 pad74[0x8];
    s32 unk7C;
    s32 unk80;
};

struct Unk_func_000EE5C0_0 {
    u8 pad0[0x98];
    s16 unk98;
};

struct Unk_func_000EEF40_0 {
    u8 pad0[0x88];
    s32 unk88;
};

struct Unk_func_000EEF60_0 {
    u8 pad0[0x70];
    s32 unk70;
    s32 unk74;
    s32 unk78;
};

struct Unk_func_000EF068_0 {
    void * unk0;
    u8 pad4[0x8];
    s32 unkC;
};

struct Unk_func_000EF178_0 {
    u8 pad0[0x74];
    s32 unk74;
};

struct Unk_func_000EFA90_0 {
    void * unk0;
    u8 pad4[0x8];
    s32 unkC;
    u8 pad10[0x60];
    s32 unk70;
    u8 pad74[0x4];
    s32 unk78;
};

struct Unk_func_000EFBB8_0 {
    u8 pad0[0x70];
    s32 unk70;
};

struct Unk_func_000F1234_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u8 pad14[0x30];
    s32 *unk44;
};

struct Unk_func_000F16E4_0 {
    u8 pad0[0x4C4];
    s32 unk4C4;
};

struct Unk_func_000F1DEC_0 {
    u8 pad0[0x414];
    s32 unk414;
};

struct Unk_func_000F2150_0 {
    u8 pad0[0x400];
    s32 unk400;
    s32 unk404;
    s32 unk408;
};

struct Unk_func_000F2160_0 {
    u8 pad0[0x408];
    s32 unk408;
};

struct Unk_func_000F2168_1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_000F218C_1 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_000F21AC_1 {
    u8 pad0[0xD4];
    s32 unkD4;
};

struct Unk_func_000F21EC_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000F220C_1 {
    u8 pad0[0x18];
    u8 unk18;
};

struct Unk_func_000F222C_1 {
    u8 pad0[0x19];
    u8 unk19;
};

struct Unk_func_000F224C_1 {
    u8 pad0[0x1B];
    u8 unk1B;
};

struct Unk_func_000F226C_1 {
    u8 pad0[0x1C];
    u8 unk1C;
};

struct Unk_func_000F228C_1 {
    u8 pad0[0x1A];
    u8 unk1A;
};

struct Unk_func_000F2540_1 {
    u8 pad0[0x1D];
    u8 unk1D;
};

struct Unk_func_000F2578_1 {
    u8 pad0[0x8];
    u32 unk8;
};

struct Unk_func_000F2674_1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0xD0];
    s32 unkDC;
    s32 unkE0;
    s32 unkE4;
    s32 unkE8;
    s32 unkEC;
    s32 unkF0;
    s32 unkF4;
    s32 unkF8;
};

struct Unk_func_000F276C_1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0xCC];
    s32 unkD8;
};

struct Unk_func_000F27B0_1 {
    u8 pad0[0x8];
    u32 unk8;
    u8 padC[0x20];
    u8 unk2C;
};

struct Unk_func_000F2860_1 {
    u8 pad0[0xCC];
    s32 unkCC;
    s32 unkD0;
};

struct Unk_func_000F288C_1 {
    u8 pad0[0x8];
    u32 unk8;
    u8 padC[0x68];
    s32 unk74;
};

struct Unk_func_000F2C38_1 {
    u8 pad0[0x8];
    u32 unk8;
};

struct Unk_func_000F2C7C_1 {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad34[0x4];
    s32 unk38;
};

struct Unk_func_000F2CCC_1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0xA];
    u16 unk16;
    u8 pad18[0x1];
    u8 unk19;
    u8 pad1A[0x2A];
    s32 unk44;
};

struct Unk_func_000F2D58_1 {
    u8 pad0[0xB4];
    s32 unkB4;
    s32 unkB8;
};

struct Unk_func_000F2D84_0 {
    u8 pad0[0x5B4];
    u8 unk5B4;
};

struct Unk_func_000F2D98_0 {
    u8 pad0[0x5A4];
    s32 unk5A4;
};

struct Unk_func_000F2DAC_0 {
    u8 pad0[0x5CC];
    s32 unk5CC;
};

struct Unk_func_000F3090_0 {
    u8 pad0[0x420];
    s32 unk420;
};

struct Unk_func_000F3128_0 {
    u8 pad0[0x5D0];
    s32 unk5D0;
    s32 unk5D4;
    s32 unk5D8;
};

struct Unk_func_000F3138_0 {
    u8 pad0[0x5D0];
    s32 unk5D0;
};

struct Unk_func_000F3A44_0 {
    u8 pad0[0x568];
    s32 unk568;
    u8 pad56C[0x10];
    s32 unk57C;
};

struct Unk_func_000F3A54_0 {
    u8 pad0[0x554];
    s32 unk554;
    u8 pad558[0x4];
    s32 unk55C;
    u8 pad560[0x8];
    u32 unk568;
    u32 unk56C;
    u8 pad570[0x4];
    u32 unk574;
    u32 unk578;
    s32 unk57C;
};

struct Unk_func_000F5C34_0 {
    u8 pad0[0x420];
    s32 unk420;
};

struct Unk_func_000F72F0_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_func_000F7300_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_func_000F7C94_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_func_000F7CA4_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_func_000F7CB4_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_func_000F7CC4_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_func_000F7CD4_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_func_000FD6B4_0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct Unk_func_000FD6E0_0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct Unk_func_000FD70C_0 {
    u8 unk0;
    u8 unk1;
};

struct Unk_func_001025D0_0 {
    u8 pad0[0x5BC];
    s32 unk5BC;
};

struct Unk_func_00102740_0 {
    u8 pad0[0x5A4];
    s32 unk5A4;
    s32 unk5A8;
};

struct Unk_func_001027B8_1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_001027E8_0 {
    u8 pad0[0x5C5];
    s8 unk5C5;
    u8 pad5C6[0x2];
    s32 unk5C8;
};

struct Unk_func_001027F4_0 {
    u8 pad0[0x5F0];
    s32 unk5F0;
    s32 unk5F4;
};

struct Unk_func_0010CB14_1 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00111AB8_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_00111AB8_1 {
    void * unk0;
    s32 unk4;
};

struct Unk_func_00111E54_temp_v0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_00113320_0 {
    u8 pad0[0xE];
    s16 unkE;
};

struct Unk_inflateSyncPoint_0 {
    u8 pad0[0x1C];
    struct Unk_inflateSyncPoint_temp_a0 *unk1C;
};

struct Unk_inflateSyncPoint_temp_a0 {
    s32 unk0;
    u8 pad4[0x30];
    s32 unk34;
};

struct Unk_png_do_chop_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x1];
    u8 unk9;
    u8 unkA;
    s8 unkB;
};

struct Unk_png_do_swap_0 {
    s32 unk0;
    u8 pad4[0x5];
    u8 unk9;
    u8 unkA;
};

struct Unk_png_get_mmx_bitdepth_threshold_0 {
    u8 pad0[0x5C5];
    u8 unk5C5;
};

struct Unk_png_get_mmx_rowbytes_threshold_0 {
    u8 pad0[0x5C8];
    s32 unk5C8;
};

struct Unk_png_get_pHYs_1 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x5C];
    s32 unk68;
    s32 unk6C;
    u8 unk70;
};

struct Unk_png_get_user_height_max_0 {
    u8 pad0[0x5F4];
    s32 unk5F4;
};

struct Unk_png_get_user_width_max_0 {
    u8 pad0[0x5F0];
    s32 unk5F0;
};

struct Unk_png_set_bgr_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_png_set_interlace_handling_0 {
    u8 pad0[0x424];
    s32 unk424;
    u8 pad428[0xAF];
    u8 unk4D7;
};

struct Unk_png_set_invert_alpha_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_png_set_invert_mono_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_png_set_packing_0 {
    u8 pad0[0x424];
    s32 unk424;
    u8 pad428[0xB3];
    u8 unk4DB;
    s8 unk4DC;
};

struct Unk_png_set_packswap_0 {
    u8 pad0[0x424];
    s32 unk424;
    u8 pad428[0xB3];
    u8 unk4DB;
};

struct Unk_png_set_read_status_fn_0 {
    u8 pad0[0x540];
    s32 unk540;
};

struct Unk_png_set_swap_0 {
    u8 pad0[0x424];
    s32 unk424;
    u8 pad428[0xB3];
    u8 unk4DB;
};

struct Unk_png_set_swap_alpha_0 {
    u8 pad0[0x424];
    s32 unk424;
};

struct Unk_sceHVNetfront_Module_05F33A6C_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_sceHVNetfront_Module_092E2C73_temp_a0 {
    s32 unk0;
    u8 pad4[0x10];
    s32 unk14;
};

struct Unk_sceHVNetfront_Module_092E2C73_temp_v1 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_sceHVNetfront_Module_0ABF34A9_temp_s1 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_sceHVNetfront_Module_0EF6CBAE_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_1C77605A_0 {
    u8 pad0[0x18];
    s32 unk18;
    s32 unk1C;
};

struct Unk_sceHVNetfront_Module_1CC15992_2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_1CC15992_temp_v0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_20A7707B_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_2263AFB9_temp_v0 {
    u8 pad0[0x1C];
    s32 unk1C;
    u16 unk20;
};

struct Unk_sceHVNetfront_Module_2907C1F0_temp_v0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_2B314C92_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_2B314C92_temp_v1 {
    u8 pad0[0xC8];
    s32 unkC8;
    s32 unkCC;
    s32 unkD0;
    s32 unkD4;
};

struct Unk_sceHVNetfront_Module_2B3ECF44_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_2BB00E05_temp_v0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_30FFB4C9_temp_v0 {
    s32 unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_sceHVNetfront_Module_30FFB4C9_temp_v0_2 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x4];
    s32 unk10;
};

struct Unk_sceHVNetfront_Module_33028746_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_sceHVNetfront_Module_3850E9A6_temp_s0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_sceHVNetfront_Module_3DEAAAB0_0 {
    u8 pad0[0xB0D0];
    s32 unkB0D0;
    s32 unkB0D4;
};

struct Unk_sceHVNetfront_Module_4136A224_temp_v0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_4417421E_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_45AC12ED_temp_s0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_sceHVNetfront_Module_48B72D3A_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_4B122153_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_sceHVNetfront_Module_4B5CEB81_temp_a1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_4C96FA60_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_4E6D9390_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_sceHVNetfront_Module_4E6D9390_1 {
    s32 unk0;
    u8 pad4[0x4];
    s32 * unk8;
};

struct Unk_sceHVNetfront_Module_4EA9EF34_temp_v0 {
    void *unk0;
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_50475141_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_50CD0162_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_sceHVNetfront_Module_52E49519_temp_v0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_sceHVNetfront_Module_55C75F96_temp_a0 {
    u8 pad0[0x20];
    u16 unk20;
};

struct Unk_sceHVNetfront_Module_59F62E22_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_5DF595A9_0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

struct Unk_sceHVNetfront_Module_5E44B688_temp_v0 {
    u8 pad0[0x3C];
    s32 unk3C;
    s32 unk40;
};

struct Unk_sceHVNetfront_Module_692B427C_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_6A6AB360_0 {
    u8 pad0[0xC];
    s16 unkC;
    s16 unkE;
};

struct Unk_sceHVNetfront_Module_6AC5DDC6_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_6AC5DDC6_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_6C78CC40_temp_v1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_sceHVNetfront_Module_6CA88BC3_temp_s0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x4C];
    void **unk58;
};

struct Unk_sceHVNetfront_Module_6CA88BC3_temp_v1 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x10];
    s32 unk24;
};

struct Unk_sceHVNetfront_Module_70683D75_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_sceHVNetfront_Module_728066E6_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
    u8 pad14[0x40];
    s32 unk54;
    s32 unk58;
    s32 unk5C;
    u8 pad60[0x4];
    s32 unk64;
};

struct Unk_sceHVNetfront_Module_75B6ED88_temp_v0 {
    u8 pad0[0x908];
    s32 unk908;
};

struct Unk_sceHVNetfront_Module_7A41AD6E_0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_7A785747_temp_v0 {
    u8 pad0[0x8C0];
    s32 unk8C0;
    s32 unk8C4;
};

struct Unk_sceHVNetfront_Module_7C5BAB1D_temp_s0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_sceHVNetfront_Module_7D655E00_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_sceHVNetfront_Module_7D655E00_2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_7D655E00_temp_v0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_81130A27_0 {
    s32 unk0;
    s16 unk4;
    s16 unk6;
};

struct Unk_sceHVNetfront_Module_863666A0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct Unk_sceHVNetfront_Module_8690B158_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_89FF7199_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_sceHVNetfront_Module_8D3E0625_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 pad10[0x8];
    s32 unk18;
};

struct Unk_sceHVNetfront_Module_8D3E0625_3 {
    s32 unk0;
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_905CB6D7_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_sceHVNetfront_Module_9D9CB3AF_temp_v0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_sceHVNetfront_Module_9E9DD219_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_sceHVNetfront_Module_9FDE9873_0 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x20];
    s32 unk34;
    s32 unk38;
    s32 unk3C;
};

struct Unk_sceHVNetfront_Module_A03FCFFE_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_sceHVNetfront_Module_A86CAFDE_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_B23D7F7F_temp_v0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x8];
    u16 unk10;
    u16 unk12;
};

struct Unk_sceHVNetfront_Module_B3475EA5_0 {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_sceHVNetfront_Module_B355C896_1 {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
};

struct Unk_sceHVNetfront_Module_B3AF6022_1 {
    u8 pad0[0x18];
    s32 (*unk18)(void *);
    M2C_UNK *unk1C;
};

struct Unk_sceHVNetfront_Module_B7DF3AB0_temp_v1 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_sceHVNetfront_Module_BBDFB7FD_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_sceHVNetfront_Module_C4BC962C_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct Unk_sceHVNetfront_Module_C6C0BD2A_temp_s0 {
    s32 **unk0;
    u8 pad4[0x8];
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_C7AA9F45_0 {
    s32 * unk0;
    u8 pad4[0x8];
    s32 unkC;
    s32 unk10;
    u8 pad14[0x10];
    s32 unk24;
};

struct Unk_sceHVNetfront_Module_CB726F9E_2 {
    s32 unk0;
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_CB726F9E_temp_v1 {
    u8 pad0[0x30];
    s32 unk30;
    s32 unk34;
    s32 unk38;
};

struct Unk_sceHVNetfront_Module_CC51DF45_temp_a0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 padC[0x58];
    s32 *unk64;
};

struct Unk_sceHVNetfront_Module_D193E37E_0 {
    u8 pad0[0x10];
    s16 unk10;
};

struct Unk_sceHVNetfront_Module_D3206B42_temp_s0 {
    u8 pad0[0xB11C];
    s32 unkB11C;
};

struct Unk_sceHVNetfront_Module_D33B0FB2_temp_v0 {
    u8 pad0[0x850];
    s32 unk850;
    s32 unk854;
};

struct Unk_sceHVNetfront_Module_D38CE2BC_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_D42BFA17_0 {
    u8 pad0[0x4];
    s32 (*unk4)(s32);
    u8 pad8[0x4];
    void (*unkC)(void *, s32);
    M2C_UNK *unk10;
    void (*unk14)();
};

struct Unk_sceHVNetfront_Module_D5F20A4D_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct Unk_sceHVNetfront_Module_E31B0CF8_temp_v1 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_E330BB9F_0 {
    u8 pad0[0x4E0];
    s32 **unk4E0;
};

struct Unk_sceHVNetfront_Module_E875CDC8_0 {
    u8 pad0[0x14];
    s32 unk14;
    s32 unk18;
};

struct Unk_sceHVNetfront_Module_E992C60B_2 {
    s32 unk0;
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_E992C60B_temp_a0 {
    u8 pad0[0x30];
    s32 unk30;
    s32 unk34;
    s32 unk38;
};

struct Unk_sceHVNetfront_Module_EEA26996_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_sceHVNetfront_Module_EEA26996_temp_v1 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_sceHVNetfront_Module_EF9A1668_temp_v0 {
    u8 pad0[0x20];
    u16 unk20;
};

struct Unk_sceHVNetfront_Module_F45546DA_0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_sceHVNetfront_Module_F55D8699_0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x140];
    s32 unk170;
    s32 unk174;
};

struct Unk_sceHVNetfront_Module_FF85936E_0 {
    u8 pad0[0xC];
    s16 unkC;
    u8 padE[0x2];
    s32 unk10;
};

struct Unk_vt_func_00036FCC_arg0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_vt_func_00036FD8_arg0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_vt_func_00036FFC_arg0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_0003FB68_arg0 {
    u8 pad0[0x28];
    void **unk28;
};

struct Unk_vt_func_0003FB88_arg0 {
    u8 pad0[0x78];
    s32 unk78;
};

struct Unk_vt_func_0003FB94_arg0 {
    u8 pad0[0x78];
    s32 unk78;
};

struct Unk_vt_func_00040940_arg0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_vt_func_00040BA4_temp_v0 {
    u8 pad0[0x4C];
    M2C_UNK (*unk4C)(void **);
};

struct Unk_vt_func_00041C74_arg1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_00041CFC_arg1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_000423F8_arg0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_vt_func_00042568_arg0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_vt_func_00042E34_arg0 {
    u8 pad0[0x3C];
    s32 unk3C;
};

struct Unk_vt_func_00042E40_arg0 {
    u8 pad0[0x40];
    s32 unk40;
};

struct Unk_vt_func_00042E78_arg0 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_vt_func_00042ECC_arg0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_vt_func_00042FBC_arg0 {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct Unk_vt_func_000454B8_arg0 {
    u8 pad0[0x24];
    s32 *unk24;
};

struct Unk_vt_func_00045580_arg0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_vt_func_0004B3BC_arg0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_vt_func_0004B6E0_arg0 {
    u8 pad0[0x10];
    M2C_UNK (*unk10)();
};

struct Unk_vt_func_0004B738_arg0 {
    u8 pad0[0x4];
    s32 (*unk4)();
};

struct Unk_vt_func_0004B76C_arg0 {
    u8 pad0[0x8];
    s32 (*unk8)();
};

struct Unk_vt_func_0004BA50_arg0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_0004BB04_arg0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_00051FE8_arg1 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_vt_func_000521FC_arg0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_vt_func_00052270_arg0 {
    u8 pad0[0x34];
    s32 unk34;
};

struct Unk_vt_func_0005227C_arg0 {
    u8 pad0[0x34];
    s32 unk34;
};

struct Unk_vt_func_0005818C_arg0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_0005FD10_arg0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_0005FD88_arg0 {
    u8 pad0[0x68];
    s32 unk68;
};

struct Unk_vt_func_0005FF6C_arg0 {
    u8 pad0[0x70];
    s32 unk70;
};

struct Unk_vt_func_00068BD0_arg0 {
    u8 pad0[0xC0];
    s32 unkC0;
};

struct Unk_vt_func_00068CC4_arg0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_vt_func_00068D04_arg0 {
    u8 pad0[0x78];
    s32 unk78;
};

struct Unk_vt_func_00068D10_arg0 {
    u8 pad0[0xE0];
    s32 unkE0;
};

struct Unk_vt_func_00069440_arg1 {
    u8 pad0[0xEC];
    s32 unkEC;
};

struct Unk_vt_func_000759A8_arg0 {
    u8 pad0[0x1C];
    void ***unk1C;
};

struct Unk_vt_func_000759D0_arg0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_vt_func_0008AA00_arg0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_vt_func_0008AA10_arg0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_vt_func_000943C4_arg0 {
    u8 pad0[0x8];
    s32 (*unk8)();
};

struct Unk_vt_func_000943F8_arg0 {
    u8 pad0[0xC];
    M2C_UNK (*unkC)();
};

struct Unk_vt_func_0009F46C_arg0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_000C8334_arg0 {
    u8 pad0[0x8];
    void **unk8;
};

struct Unk_vt_func_000C8334_var_v0 {
    u8 pad0[0xC];
    void **unkC;
};

struct Unk_vt_func_000C8334_var_v1 {
    u8 pad0[0xC];
    void **unkC;
};

struct Unk_vt_func_000C8374_var_a0 {
    u8 pad0[0xC];
    void **unkC;
};

struct Unk_vt_func_000C8374_var_v0_2 {
    u8 pad0[0xC];
    void **unkC;
};

struct Unk_vt_func_000C842C_arg0 {
    u8 pad0[0x8];
    void **unk8;
};

struct Unk_vt_func_000C842C_temp_v0 {
    u8 pad0[0xC];
    void **unkC;
};

struct Unk_vt_func_000C902C_arg0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_vt_func_000C9038_arg0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_vt_func_000C9E00_arg0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_vt_func_000C9E20_arg0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_vt_func_000C9E30_arg0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_vt_func_000C9E40_arg0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_vt_func_000C9E54_arg0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_vt_func_000C9E64_arg0 {
    u8 pad0[0x50];
    s32 unk50;
};

struct Unk_vt_func_000C9ECC_arg0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_vt_func_000C9ED8_arg0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_vt_func_000C9EE4_arg0 {
    u8 pad0[0x70];
    s32 unk70;
};

struct Unk_vt_func_000C9F00_arg0 {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct Unk_vt_func_000C9F0C_arg0 {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct Unk_vt_func_000C9F18_arg0 {
    u8 pad0[0x60];
    s32 unk60;
};

struct Unk_vt_func_000C9FDC_arg0 {
    u8 pad0[0x64];
    s32 unk64;
};

struct Unk_vt_func_000C9FE8_arg0 {
    u8 pad0[0x64];
    s32 unk64;
};

struct Unk_vt_func_000C9FF4_arg0 {
    u8 pad0[0x68];
    s32 unk68;
};

struct Unk_vt_func_000CA000_arg0 {
    u8 pad0[0x68];
    s32 unk68;
};

struct Unk_vt_func_000CA024_arg0 {
    u8 pad0[0x6C];
    s32 unk6C;
};

struct Unk_vt_func_000CA098_arg0 {
    u8 pad0[0x7C];
    s32 unk7C;
};

struct Unk_vt_func_000CA0A4_arg0 {
    u8 pad0[0x7C];
    s32 unk7C;
};

struct Unk_vt_func_000CBECC_arg0 {
    u8 pad0[0x74];
    s32 unk74;
};

struct Unk_vt_func_000CBF3C_arg0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_000CBF48_arg0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_vt_func_000CBF70_arg0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_vt_func_000CBF7C_arg0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_vt_func_000CC55C_arg0 {
    u8 pad0[0x8C];
    s32 unk8C;
};

struct Unk_vt_func_000CCCF4_arg0 {
    u8 pad0[0x98];
    s32 unk98;
};

struct Unk_vt_func_000CD494_arg0 {
    u8 pad0[0x80];
    s32 unk80;
};

struct Unk_vt_func_000E2548_arg0 {
    u8 pad0[0x8];
    M2C_UNK (*unk8)();
};

struct Unk_vt_func_000EB2A0_temp_v0 {
    u8 pad0[0x20];
    M2C_UNK (*unk20)(void **, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_000EB2FC_temp_v0 {
    u8 pad0[0x24];
    M2C_UNK (*unk24)(void **, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_000EB534_temp_v0 {
    u8 pad0[0x28];
    M2C_UNK (*unk28)(void **);
};

struct Unk_vt_func_000EB574_temp_v0 {
    u8 pad0[0x2C];
    M2C_UNK (*unk2C)(void **);
};

struct Unk_vt_func_000EB5B4_temp_v0 {
    u8 pad0[0x30];
    s32 (*unk30)(void **);
};

struct Unk_vt_func_000EB734_arg0 {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct Unk_vt_func_000EB740_arg0 {
    u8 pad0[0x5C];
    s32 unk5C;
};

struct Unk_vt_func_000EB74C_temp_v0 {
    u8 pad0[0x3C];
    s32 (*unk3C)(void **, M2C_UNK);
};

struct Unk_vt_func_000EB7A0_temp_v0 {
    u8 pad0[0x40];
    s32 (*unk40)(void **, M2C_UNK);
};

struct Unk_vt_func_000EB9B0_temp_v0 {
    u8 pad0[0x58];
    s32 (*unk58)(void **, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_000EBA14_temp_v0 {
    u8 pad0[0x5C];
    s32 (*unk5C)(void **, M2C_UNK);
};

struct Unk_vt_func_000EBA68_temp_v0 {
    u8 pad0[0x18];
    s32 (*unk18)(void **, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_000ECF7C_arg0 {
    u8 pad0[0x38];
    M2C_UNK (*unk38)(void **, s32);
};

struct Unk_vt_func_000EEF48_arg0 {
    u8 pad0[0xB0];
    s32 unkB0;
};

struct Unk_vt_func_000EEF54_arg0 {
    u8 pad0[0xB0];
    s32 unkB0;
};

struct Unk_vt_sceHVNetfront_Module_0146B875_arg0 {
    u8 pad0[0x18];
    M2C_UNK (*unk18)();
};

struct Unk_vt_sceHVNetfront_Module_0C2B2F3B_arg0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_vt_sceHVNetfront_Module_11F03B41_arg0 {
    u8 pad0[0xC];
    M2C_UNK (*unkC)();
};

struct Unk_vt_sceHVNetfront_Module_125D89FA_arg0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_vt_sceHVNetfront_Module_25F5CA8C_arg0 {
    u8 pad0[0x18];
    void ***unk18;
};

struct Unk_vt_sceHVNetfront_Module_2CCCD8B0_arg0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_vt_sceHVNetfront_Module_39EE6D2A_arg0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_sceHVNetfront_Module_43BDE443_arg0 {
    u8 pad0[0x4];
    s32 (*unk4)();
};

struct Unk_vt_sceHVNetfront_Module_57C112FD_temp_v0 {
    u8 pad0[0xC];
    s32 (*unkC)(void **, M2C_UNK);
};

struct Unk_vt_sceHVNetfront_Module_6C319E19_arg0 {
    u8 pad0[0x14];
    s32 unk14;
};

struct Unk_vt_sceHVNetfront_Module_6F772B18_arg0 {
    u8 pad0[0x1C];
    M2C_UNK (*unk1C)();
};

struct Unk_vt_sceHVNetfront_Module_9D42259B_arg0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_vt_sceHVNetfront_Module_9E9146BE_arg0 {
    u8 pad0[0x20];
    s32 (*unk20)();
};

struct Unk_vt_sceHVNetfront_Module_A8078858_arg0 {
    u8 pad0[0x50];
    s32 unk50;
};

struct Unk_vt_sceHVNetfront_Module_AA3634F4_arg0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_vt_sceHVNetfront_Module_B05DB1D4_temp_v0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_vt_sceHVNetfront_Module_BA0F8BF7_arg0 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_vt_sceHVNetfront_Module_D728FA9F_arg0 {
    u8 pad0[0x1C];
    s32 (*unk1C)();
};

struct Unk_vt_sceHVNetfront_Module_DA60A0AF_arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_vt_sceHVNetfront_Module_DCC7ADEA_arg0 {
    u8 pad0[0x14];
    s32 (*unk14)();
};

struct Unk_vt_sceHVNetfront_Module_E1A51715_arg0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_vt_sceHVNetfront_Module_E2C79DAF_arg0 {
    u8 pad0[0x10];
    M2C_UNK (*unk10)();
};

struct Unk_vt_sceHVNetfront_Module_F9D901ED_arg0 {
    u8 pad0[0x14];
    M2C_UNK (*unk14)();
};

extern M2C_UNK D_0011E1E4;
extern M2C_UNK D_0011E390;
extern M2C_UNK D_0011E460;
extern M2C_UNK D_0011E464;
extern M2C_UNK D_0011EBBC;
extern M2C_UNK D_0011EBE0;
extern M2C_UNK D_0011ED10;
extern M2C_UNK D_0011F064;
extern M2C_UNK D_0011FBD0;
extern M2C_UNK D_001204C8;
extern M2C_UNK D_00120538;
extern M2C_UNK D_00120C90;
extern M2C_UNK D_00120D90;
extern M2C_UNK D_00120E80;
extern M2C_UNK D_00120EB8;
extern M2C_UNK D_00121308;
extern M2C_UNK D_0012136C;
extern M2C_UNK D_001213C4;
extern M2C_UNK D_001213E8;
extern M2C_UNK D_0012140C;
extern M2C_UNK D_00121430;
extern M2C_UNK D_00121454;
extern M2C_UNK D_00121478;
extern M2C_UNK D_0012149C;
extern M2C_UNK D_001214C4;
extern M2C_UNK D_00121508;
extern M2C_UNK D_00121600;
extern M2C_UNK D_00121B48;
extern M2C_UNK D_00121C10;
extern M2C_UNK D_00121CA8;
extern M2C_UNK D_00121CFC;
extern M2C_UNK D_00123260;
extern M2C_UNK D_001232E4;
extern M2C_UNK D_00123308;
extern M2C_UNK D_00123344;
extern M2C_UNK D_0012374C;
extern M2C_UNK D_00123D8C;
extern M2C_UNK D_00123D93;
extern M2C_UNK D_00123D9C;
extern M2C_UNK D_00123DA2;
extern M2C_UNK D_00123DA9;
extern M2C_UNK D_00123DB1;
extern M2C_UNK D_00123DB8;
extern M2C_UNK D_00123DE5;
extern M2C_UNK D_00123E47;
extern M2C_UNK D_00123E4E;
extern M2C_UNK D_001241C1;
extern M2C_UNK D_0012435B;
extern M2C_UNK D_00124928;
extern M2C_UNK D_00124A84;
extern M2C_UNK D_00124AA8;
extern M2C_UNK D_00124B10;
extern M2C_UNK D_001272C4;
extern M2C_UNK D_001272F0;
extern M2C_UNK D_0012A78C;
extern M2C_UNK D_0012AF8C;
extern M2C_UNK D_0012B458;
extern M2C_UNK D_0012DC2C;
extern M2C_UNK D_0012DEDC;
extern M2C_UNK D_0012F804;
extern s32 D_00130F68;
extern s32 D_00130F80;
extern s32 D_00130F84;
extern s32 D_00131678;
extern s32 D_00131AD0;
extern s32 D_00131ADC;
extern s32 D_00131AE0;
extern s32 D_00131AF8;
extern s32 D_00131B0C;
extern s32 D_00131C04;
extern s32 D_00131C08;
extern s32 D_00131C0C;
extern s32 D_001322BC;
extern M2C_UNK D_001322CC;
extern struct D_00133BC8_s D_00133BC8;
extern struct D_00133BE0_s D_00133BE0;
extern struct D_00133BF8_s D_00133BF8;
extern struct D_00133C10_s D_00133C10;
extern struct D_00133C28_s D_00133C28;
extern struct D_00133C58_s D_00133C58;
extern struct D_00133C70_s D_00133C70;
extern struct D_00133D08_s D_00133D08;
extern s32 D_00133DE8;
extern s32 D_00133ED8;
extern s32 D_00133EE0;
extern s32 D_00133F4C;
extern s32 D_00133F68;
extern s32 D_00133F6C;
extern s32 D_00133F70;
extern s32 D_00134458;
extern s32 D_0013445C;
extern s32 D_00134474;
extern s32 D_00134478;
extern s32 D_0013447C;
extern s32 D_00134484;
extern s32 D_00134488;
extern s32 D_00134490;
extern s32 D_00134494;
extern s32 D_0013449C;
extern s32 D_001344A0;
extern s32 D_00135840;
extern s32 D_00135844;
extern M2C_UNK D_00135850;
extern s32 D_00135858;
extern u32 D_0013588C;
extern s32 D_00135890;
extern s32 D_00135898;
extern M2C_UNK D_0013589C;
extern M2C_UNK D_001358AC;
extern s32 D_001358BC;
extern M2C_UNK D_001358C4;
extern M2C_UNK D_001358DC;
extern M2C_UNK D_00135FB4;
extern s32 D_00135FE0;
extern M2C_UNK func_0001F5F0;
extern M2C_UNK func_00020208;
extern M2C_UNK func_000226F0;
extern M2C_UNK func_00022B20;
extern M2C_UNK func_000256C8;
extern M2C_UNK func_00029FDC;
extern M2C_UNK func_0002CE84;
extern M2C_UNK func_000324C4;
extern M2C_UNK func_00046238;
extern M2C_UNK func_00049914;
extern M2C_UNK func_000499A8;
extern M2C_UNK func_00049D9C;
extern M2C_UNK func_0004A61C;
extern M2C_UNK func_0004A918;
extern M2C_UNK func_0004A968;
extern M2C_UNK func_000578A4;
extern M2C_UNK func_00057928;
extern M2C_UNK func_00080E80;
extern M2C_UNK func_00080EFC;
extern M2C_UNK func_000868D0;
extern M2C_UNK func_00086940;
extern M2C_UNK func_0009722C;
extern M2C_UNK func_0009759C;
extern M2C_UNK func_00097728;
extern M2C_UNK func_000979A4;
extern M2C_UNK func_00099B44;
extern M2C_UNK func_00099DB8;
extern M2C_UNK func_000D476C;
extern M2C_UNK func_000DCEAC;
extern M2C_UNK func_00110784;
extern M2C_UNK sceHVNetfront_Module_4C5A5066;
extern M2C_UNK sceHVNetfront_Module_AF7B3F4B;
extern M2C_UNK sceHVNetfront_Module_BA0DA285;

s32 crc32(M2C_UNK, M2C_UNK, M2C_UNK);
void fixedtables(struct Unk_fixedtables_0 *arg0);
void func_00000128(void);
s32 func_00000148(void);
M2C_UNK func_00000154();
void func_00000190(void);
s32 func_00000198(void);
M2C_UNK func_000001C4();
M2C_UNK func_000001EC();
s32 func_00000210();
s32 func_00000250(struct Unk_func_00000250_0 *arg0, s32 arg1);
s32 func_0000025C(struct Unk_func_0000025C_0 *arg0);
void func_000049F8(s32 arg0);
s32 func_000051D4(void);
void func_000051E0(s32 arg0);
s32 func_000051EC(void);
void func_00005254(void);
s32 func_00005348(s32 arg0, s32 arg1);
s32 func_0000549C(void);
void func_000054EC(void);
M2C_UNK func_00005984();
s32 func_000059CC(M2C_UNK);
s32 func_00005A0C(s32, s32);
s32 func_00005A88(s32, s32);
s32 func_00005B24(struct Unk_func_00005B24_0 *arg0);
s32 func_00005BC4(s32 arg0, M2C_UNK arg1);
void func_00005C34(struct Unk_func_00005C34_0 *arg0);
M2C_UNK func_00005DBC();
void func_00005DDC(void);
M2C_UNK func_00005DE4();
void func_00005E08(void);
s32 func_00005E74(void);
s32 func_00005E7C(void);
void func_00005E84(void);
s32 func_00005EA0(void);
s32 func_00005ED4(void);
s32 func_00005F64();
M2C_UNK func_00006048(s32);
void func_00006154(void);
void func_00006170(void);
void func_0000618C(void);
void func_000062AC(void);
void func_00006D24(s32 arg0);
void func_00006D30(s32 arg0);
void func_00007570(void);
void func_00007578(void);
void func_00007580(void);
void func_00007588(void);
void func_00007590(void);
void func_00007598(void);
s32 func_000075A0(void);
void func_000075A8(void);
s32 func_000075B0(void);
void func_000075B8(void);
s32 func_000075C0(void);
s32 func_000075C8(void);
void func_000075D0(void);
void func_000075D8(void);
void func_000075E0(void);
void func_000075E8(void);
void func_00007624(void);
void func_0000762C(void);
void func_00007634(void);
s32 func_00007944(void);
void func_0000795C(void);
s32 func_00007E60(struct Unk_func_00007E60_0 *arg0, struct Unk_func_00007E60_1 *arg1);
void func_00007F00(void);
void func_00007F40(void);
void func_0000858C(struct Unk_func_0000858C_0 *arg0);
M2C_UNK func_000086D8();
void func_0000871C(void);
s32 func_00008770(void);
void func_000087C0(void);
M2C_UNK func_000087C8(s32, s32, s32, s32);
void func_00008ABC(struct Unk_func_0000858C_0 *arg0);
void func_00008AE8(void);
void func_00008B04(s32 arg0);
M2C_UNK func_00008B58(s32);
void func_000092C4(struct Unk_func_000092C4_0 *arg0);
s32 func_0000948C(s32 arg0);
void func_000094F0(struct Unk_func_000094F0_0 *arg0);
void func_00009598(struct Unk_func_00009598_0 *arg0, s32 arg1);
M2C_UNK func_000095F4();
void func_00009668(struct Unk_func_00009668_0 *arg0, s32 arg1);
s32 func_000096A4(s32, s32);
s32 func_00009750(struct Unk_func_00009750_0 *arg0, struct Unk_func_00009750_1 *arg1);
s32 func_00009798(struct Unk_func_00009798_0 *arg0);
s32 func_000097B8(struct Unk_func_000097B8_0 *arg0);
s32 func_00009C3C(struct Unk_func_00009C3C_0 *arg0, struct Unk_func_00009C3C_1 *arg1, M2C_UNK arg2);
s32 func_00009CAC(struct Unk_func_00009CAC_0 *arg0, struct Unk_func_00009CAC_1 *arg1, M2C_UNK arg2);
s32 func_00009D1C(struct Unk_func_00009D1C_0 *arg0, struct Unk_func_00009D1C_1 *arg1, M2C_UNK arg2);
s32 func_00009D8C(struct Unk_func_00009D8C_0 *arg0, struct Unk_func_00009D8C_1 *arg1, M2C_UNK arg2);
void *func_00009DFC();
s32 func_00009E08();
s32 func_00009E14(void);
void *func_00009E40();
s32 func_00009E7C();
M2C_UNK func_00009EC0();
s32 func_00009ECC(void);
M2C_UNK *func_00009F4C(void);
M2C_UNK func_0000A318(M2C_UNK);
void func_0000A494(s32 arg0);
void func_0000A700(void);
s32 func_0000A708(void);
s32 func_0000A710(void);
void func_0000A71C(void);
void func_0000A740(s32 arg0);
void func_0000A92C(void);
s32 func_0000AA38(void);
M2C_UNK func_0000AA40(void *);
M2C_UNK func_0000ABE8(void *);
void func_0000ADD4(struct Unk_func_0000ADD4_0 *arg0, s32 arg1);
s32 func_0000AF68(struct Unk_func_0000AF68_0 *arg0);
s32 func_0000B13C(void);
s32 func_0000B144(void);
void func_0000B2E8(struct Unk_func_0000B2E8_0 *arg0);
void func_0000B2F8(void);
M2C_UNK func_0000BCEC(void *);
void func_0000BECC(struct Unk_func_0000BECC_0 *arg0);
void func_0000BEEC(struct Unk_func_0000BEEC_0 *arg0);
s32 func_0000BF08(struct Unk_func_0000BF08_0 *arg0);
void func_0000BFD0(struct Unk_func_0000BFD0_0 *arg0, s32 arg1);
void func_0000C100(struct Unk_func_0000C100_0 *arg0, s32 arg1);
M2C_UNK func_0000C108(void *, s32);
M2C_UNK func_0000C318();
M2C_UNK func_0000C358(void *);
M2C_UNK func_0000C3A0(void *);
M2C_UNK func_0000C430(void *);
s32 func_0000C478(s32, s32, s32, s32, s32);
M2C_UNK func_0000C51C(void *, s32);
M2C_UNK func_0000C5EC(void *, s32);
M2C_UNK func_0000C654(void *);
M2C_UNK func_0000C69C(void *);
s32 func_0000C700(struct Unk_func_0000C700_0 *arg0);
M2C_UNK func_0000C77C(void *, s32, M2C_UNK, M2C_UNK);
s32 func_0000CDB8(void *, s32, M2C_UNK);
M2C_UNK func_0000D0FC(void *, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_0000D2C0(void *, s32, s32);
M2C_UNK func_0000D334(void *, s32, M2C_UNK);
M2C_UNK func_0000D36C(void *, s32, M2C_UNK);
s32 func_0000D614(s32, s32);
s32 func_0000D6BC(s32, s32, s32, s32);
M2C_UNK func_0000D784();
s32 func_0000D858(s32, s32, s32, s32, s32, s32);
s32 func_0000DAF4(s32, s32);
s32 func_0000DBA4(s32, s32);
s32 func_0000DC54(s32, s32);
M2C_UNK func_0000DD5C();
M2C_UNK func_0000DDB4();
M2C_UNK func_0000DE0C();
s32 func_0000DE64(s32, s32);
s32 func_0000DF44(s32, s32);
M2C_UNK func_0000DFF4(void *, M2C_UNK);
s32 func_0000E10C();
s32 func_0000E3B4(s32, s32, s32, s32, s32, s32, s32);
M2C_UNK func_0000EC38(M2C_UNK, M2C_UNK);
M2C_UNK func_0000EC88(s32, M2C_UNK, M2C_UNK);
void func_0000EE48(s32 arg0, s32 arg1, s32 arg2);
void func_0000EE8C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
void func_0000EEDC(s32 arg0, M2C_UNK arg1, s32 arg2);
void func_0000EF38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
void func_0000EFC0(s32 arg0, s32 arg1);
void func_0000F004(s32 arg0, s32 arg1, s32 arg2);
void func_0000F048(s32 arg0, s32 arg1, s32 arg2);
void func_0000F08C(s32 arg0, s32 arg1, s32 arg2);
void func_0000F0D0(s32 arg0, s32 arg1);
void func_0000F114(s32 arg0, s32 arg1);
void func_0000F160(s32 arg0, s32 arg1, s32 arg2);
void func_0000F288(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void func_0000F2CC(s32 arg0, s32 arg1, s32 arg2);
void func_0000F354(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0000F398(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK func_0000F52C();
M2C_UNK func_0000F568();
s32 func_0000F798(s32);
s32 func_0000F914(s32 arg0, s32 arg1, s32 arg2);
s32 func_0000FE90(struct Unk_func_0000FE90_0 *arg0);
void func_00010AFC(struct Unk_func_00010AFC_0 *arg0);
s32 func_00011574(struct Unk_func_00011574_0 *arg0);
M2C_UNK func_00011760(void *, void *);
void func_00011838(struct Unk_func_00011838_0 *arg0);
void *func_0001189C(void *);
s32 func_000118A4(struct Unk_func_000118A4_0 *arg0);
void func_000118AC(s32 *arg0, s32 arg1);
void func_000118B4(struct Unk_func_000118B4_0 *arg0, s32 arg1);
s32 func_0001198C(s32, s32, s32);
void func_00011D74(struct Unk_func_00011D74_0 *arg0);
void func_00011D98(struct Unk_func_00011D98_0 *arg0);
void func_00011E38(struct Unk_func_00011E38_0 *arg0, s32 arg1);
s32 func_00011E48(struct Unk_func_00011E48_0 *arg0);
void func_00011E5C(struct Unk_func_00011E5C_0 *arg0, s32 arg1);
s32 func_00011E6C(struct Unk_func_00011E6C_0 *arg0);
M2C_UNK func_00011E80(void *, M2C_UNK);
s32 func_00012130();
void func_00012340(s32 arg0);
s32 func_00012DF4(s32, s32, s32, s32, s32);
s32 func_00013158(s32 arg0, s32 arg1, s32 *arg2);
M2C_UNK func_00013324(s32, s32);
void func_0001345C(s32 arg0);
M2C_UNK func_00013490(s32, M2C_UNK);
void func_00013B34(struct Unk_func_00013B34_0 *arg0);
s32 func_00013B80(s32, M2C_UNK, M2C_UNK);
s32 func_00013CCC(s32 arg0, M2C_UNK arg1);
M2C_UNK func_00013CFC(s32);
M2C_UNK func_000143E0(void *);
M2C_UNK func_00014470();
s32 func_00014900(void);
s32 func_00014920(void);
s32 func_000149F4(void);
void func_000149FC(struct Unk_func_000149FC_0 *arg0);
void func_00014A2C(void);
s32 func_00014B50(struct Unk_func_00014B50_0 *arg0);
void func_00014BB4(s32 arg0);
s32 func_00014D4C(struct Unk_func_00014D4C_0 *arg0, s32 arg1);
s32 func_00014E24(s32 arg0);
s32 func_00014F40(s32 arg0);
s32 func_00014F80(s32);
s32 func_00014FC0(M2C_UNK, void *);
s32 func_0001523C(s32, s32);
s32 func_0001529C(s32 arg0);
void func_000154C8(struct Unk_func_000154C8_0 *arg0);
s32 func_00015558();
s32 func_000155E8(s32);
s32 func_0001570C(s32);
M2C_UNK func_0001576C(s32);
s32 func_000157BC(s32 arg0, struct Unk_func_000157BC_1 *arg1);
M2C_UNK func_000158A4(void *);
s32 func_000158D8(struct Unk_func_000158D8_0 *arg0);
s32 func_00015A34(void *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_00015B38(void **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
void *func_00015BFC();
void func_00015C5C(struct Unk_func_000158D8_0 *arg0);
M2C_UNK func_00015FAC(s32);
s32 func_00015FE0(s32);
s32 func_000161A4();
M2C_UNK func_00016404(s32);
s32 func_00017044();
s32 func_00017848(s32, s32, s32);
s32 func_000179CC(struct Unk_func_000179CC_0 *arg0);
void func_00017C98(s32 arg0, s32 arg1, s32 arg2);
s32 func_00017DB0(s32, s32, s32, s32);
void func_00017F3C(s32 *arg0, struct Unk_func_00017F3C_1 *arg1);
void func_00017FC4(s32 *arg0, u8 *arg1);
void func_00018028(struct Unk_func_00018028_0 *arg0, u8 *arg1);
void func_0001808C(struct Unk_func_0001808C_0 *arg0, s32 arg1);
void func_00018094(struct Unk_func_00018094_0 *arg0, s32 arg1);
void func_0001809C(struct Unk_func_0001809C_0 *arg0, s32 arg1);
void func_000180A4(struct Unk_func_000180A4_0 *arg0, s32 arg1);
void func_000180AC(struct Unk_func_000180AC_0 *arg0, s32 arg1);
void func_000180B4(struct Unk_func_000180B4_0 *arg0, s32 arg1);
void func_000180BC(s32 arg0, struct Unk_func_000180BC_1 *arg1);
M2C_UNK func_00018168(s32, s32);
M2C_UNK func_0001819C(s32, s32);
s32 func_000181D0(s32);
s32 func_000181D8(s32);
s32 func_000181E0(s32);
s32 func_000181E8(s32);
s32 func_000181F0(s32);
s32 func_000181F8(s32);
s32 func_00018200(s32, void *);
M2C_UNK func_000182E4();
s32 func_00018618(void);
s32 func_00018D70(s32 *arg0);
s32 func_00018FD0(s32);
s32 func_00019880(void);
s32 func_00019AAC(s32, s32, s32, s32, s32);
void func_00019CD0(struct Unk_func_00019CD0_0 *arg0, M2C_UNK arg1);
void func_00019CF4(struct Unk_func_00019CF4_0 *arg0);
void func_00019D00(struct Unk_func_00019D00_0 *arg0);
void func_00019D30(void);
void func_0001ACA4(void);
void func_0001ACAC(void);
void func_0001ACB4(void);
void func_0001B824(void);
void func_0001B82C(s32 *arg0);
void func_0001B848(s32 *arg0);
void func_0001C008(void);
void func_0001C500(void);
void func_0001C508(void);
void func_0001C510(void);
void func_0001C518(void);
void func_0001C520(void);
void func_0001C528(void);
void func_0001C530(void *arg0);
s32 func_0001C934(s32, s32, s32);
s32 func_0001E058(void *arg0);
s32 func_0001E108(s32);
s32 func_0001E2B4(s32, s32, s32);
s32 func_0001E514(s32);
void func_0001E5F0(s32 ***arg0, struct Unk_func_0001E5F0_1 *arg1);
s32 func_0001E684(s32, s32, s32);
s32 func_0001E9F8(void);
void func_0001EABC(s32 ***arg0, struct Unk_func_0001EABC_1 *arg1);
s32 func_0001EB50(s32, s32, s32);
s32 func_0001EEC4(void);
void func_0001EF88(s32 ***arg0, struct Unk_func_0001EF88_1 *arg1);
s32 func_0001F01C(s32);
void func_0001F18C(void);
void func_0001F194(s32 arg0);
M2C_UNK *func_0001F6B0(struct Unk_func_0001F6B0_0 *arg0);
void func_0001F764(void);
void func_0001F76C(void *arg0);
M2C_UNK *func_000202C8(struct Unk_func_000202C8_0 *arg0);
void func_0002037C(void);
void func_00020384(void *arg0);
s32 func_00020E54(s32, s32, s32);
s32 func_00020FD0(s32, s32);
M2C_UNK *func_000227B0(struct Unk_func_000227B0_0 *arg0);
void func_00022864(void);
void func_0002286C(void *arg0);
M2C_UNK *func_00022BE8(struct Unk_func_00022BE8_0 *arg0);
void func_00022C9C(void);
void func_00022CA4(void *arg0);
M2C_UNK *func_00022CDC(void);
void func_00022E24(void);
void func_00022E40(void ***arg0, s32 arg1);
s32 func_00022E64(void);
s32 func_00023778(void);
M2C_UNK func_00023780();
M2C_UNK func_00023880(s32, M2C_UNK, M2C_UNK);
void func_00023A58(s32 arg0, M2C_UNK arg1);
void func_00023A9C(void);
s32 func_00023B0C();
s32 func_00023B7C(s32 arg0);
void func_00023F38(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00023FC4(s32 arg0);
void func_00024074(s32 arg0);
s32 func_00024AA4();
s32 func_00024AE8(s32 arg0);
void func_00024B9C(s32 arg0, s32 arg1);
void func_00024BF0(s32 arg0);
void func_00024C0C(void);
M2C_UNK func_00024F8C();
void func_000250C4(void);
M2C_UNK *func_00025790(void *arg0);
s32 func_00025874(s32);
M2C_UNK func_00025B54(s32);
M2C_UNK func_00025BB4();
s32 func_00025FD4(void **arg0, struct Unk_func_00025FD4_1 *arg1);
s32 func_00026030(void);
s32 func_00026050(s32 arg0);
s32 func_000260A0(void);
s32 func_000261C0(s32 arg0);
s32 func_000263BC(s32);
void func_0002645C(struct Unk_func_0002645C_0 *arg0);
s32 *func_00026598(s32 arg0);
s32 func_000265F4(s32);
s32 func_00026644(s32, s32);
s32 func_00026CC8(s32, s32, s32);
s32 func_00026DCC(s32 arg0, s32 arg1);
s32 func_00026DEC(s32 arg0, s32 arg1);
s32 func_00026E0C(s32 arg0, s32 arg1);
s32 func_00026E2C(s32 arg0, s32 arg1);
s32 func_00026E4C(s32 **arg0, s32 arg1, s32 arg2);
s32 func_0002703C(s32 arg0, s32 arg1, s32 arg2, struct Unk_func_0002703C_3 *arg3);
s32 func_000276EC(s32, s32, s32, s32, s32, s32);
void func_000277D4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00027890(s32 arg0, struct Unk_func_00027890_1 *arg1);
s32 func_00027AB4(void);
s32 func_000281B8(s32);
void func_00028298(struct Unk_func_00028298_0 *arg0);
s32 func_000282D8(struct Unk_func_000282D8_0 *arg0);
s32 func_000282E8(void *arg0);
s32 func_00028310(struct Unk_func_00028310_0 *arg0);
void func_00028320(struct Unk_func_00028320_0 *arg0, s32 arg1);
s32 func_00028330(void *arg0);
M2C_UNK func_0002841C();
M2C_UNK func_0002846C();
s32 func_000284BC();
s32 func_0002855C();
void func_00028834(struct Unk_func_00028834_0 *arg0, s32 arg1);
void func_00028844(struct Unk_func_00028844_0 *arg0, s32 arg1, s32 arg2);
s32 func_00028C94(s32, s32, s32);
s32 func_00028EAC(s32, s32);
M2C_UNK func_000292A0();
s32 func_000295A0(s32, s32);
s32 func_0002963C(s32 arg0);
s32 func_0002965C(s32 arg0);
s32 func_00029908(void ****arg0, s32 arg1, s32 arg2);
s32 func_00029B00(void);
s32 func_00029B08(void);
s32 func_00029B10(void);
s32 func_00029B18(void);
s32 func_00029DD8(s32);
void func_00029E78(struct Unk_func_00029E78_0 *arg0);
void func_00029F88(s32 ***arg0);
s32 func_0002A350(s32);
void func_0002A458(struct Unk_func_0002A458_0 *arg0);
void func_0002A4DC(void);
s32 func_0002A518(s32, s32, s32);
void func_0002A6EC(s32 ***arg0);
void func_0002A74C(s32 arg0);
void func_0002A778(void);
s32 func_0002A794(struct Unk_func_0002A794_0 *arg0);
s32 func_0002A7A4(struct Unk_func_0002A7A4_0 *arg0);
void func_0002A7B0(struct Unk_func_0002A7B0_0 *arg0, s32 arg1);
s32 func_0002A7C0(void *arg0);
s32 func_0002A7E8(void *arg0);
M2C_UNK func_0002A8B8();
s32 func_0002A944(void);
s32 func_0002ADE0(s32, s32);
void func_0002AE9C(struct Unk_func_0002AE9C_0 *arg0);
s32 func_0002AF28(struct Unk_func_0002AF28_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0002AF88(s32);
M2C_UNK func_0002B288(s32, s32);
M2C_UNK func_0002B72C(s32);
s32 func_0002B7D8(s32, s32, s32);
void func_0002B854(s32 arg0, s32 arg1);
void func_0002B874(s32 arg0, s32 arg1);
s32 func_0002BF2C(s32, s32, s32, s32, s32, s32, s32);
s32 func_0002C71C(s32, s32, s32, s32, s32, s32, s32);
void func_0002CACC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u32 arg5, s32 arg6);
void func_0002D43C(struct Unk_func_0002D43C_0 *arg0, s32 arg1);
void func_0002D478(void);
void func_0002D4EC(void);
s32 func_0002D61C(void);
void func_0002D720(s32 ***arg0, s32 arg1);
void func_0002D894(void);
void func_0002DB68(void);
void func_0002DB84(s32 ***arg0);
void func_0002DD1C(void);
void func_0002E28C(s32 arg0);
void func_0002E3C8(s32 arg0, s32 arg1);
void func_0002E410(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0002E4C4(s32 arg0, s32 *arg1);
s32 func_0002E62C(void);
M2C_UNK func_0002E900(void *);
void func_0002EE38(s32 arg0);
s32 func_00030388(s32, s32, s32, s32, s32, s32, s32);
s32 func_000304E0(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_000305E8(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK func_000306F0();
M2C_UNK func_000307E8();
M2C_UNK func_000308D0();
void func_00030CE8(void);
void func_00030D04(void);
void func_00030D20(void);
s32 func_000313A0(void);
void func_00035104(s32 arg0);
void func_00035120(void);
s32 func_0003513C(void);
void func_00035144(void);
s32 func_00035A20(void);
void func_00035A44(s32 arg0);
void func_00035A64(void);
void func_00035A6C(void);
void func_00035A74(void);
void func_00035A7C(s32 arg0);
M2C_UNK func_00035AE4();
s32 func_00035B38(void **arg0);
void func_00035B64(void);
s32 func_00035B88(s32, s32, s32, s32, s32);
s32 func_00035F18(void);
s32 func_00035F20(void);
s32 func_00035FB4(s32);
void func_00036054(struct Unk_func_00036054_0 *arg0);
s32 func_000362B4(void);
s32 func_000362BC(void);
s32 func_000369F4(s32);
void func_00036A94(struct Unk_func_00036A94_0 *arg0);
s32 func_00036BF4(struct Unk_func_00036BF4_0 *arg0);
void func_00036C3C(void *arg0);
s32 func_00036FCC(struct Unk_vt_func_00036FCC_arg0 **arg0);
s32 func_00036FD8(struct Unk_vt_func_00036FD8_arg0 **arg0);
s32 func_00036FFC(struct Unk_vt_func_00036FFC_arg0 **arg0);
void func_000372DC(s32 **arg0, s32 arg1, s32 arg2);
void func_00038160(struct Unk_func_00038160_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0003908C(void);
s32 func_00039454(s32 **arg0, M2C_UNK arg1);
void func_00039624(void);
void func_00039848(void);
void func_00039B10(s32 **arg0);
s32 func_00039C74(s32, s32, s32, s32, s32, s32);
s32 func_0003A3D8(s32 **arg0, s32 **arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 func_0003A5B0(void);
void func_0003A678(void);
void func_0003A6B8(s32 arg0);
void func_0003ABF0(void);
M2C_UNK func_0003ADB8(void *);
M2C_UNK func_0003AF64(void *);
s32 func_0003AFA0(s32 arg0, u32 arg1);
void func_0003B16C(s32 **arg0);
s32 func_0003B344(void);
void func_0003B4D8(s32 **arg0);
void func_0003B50C(s32 **arg0);
void func_0003B540(void);
void func_0003B548(void);
void func_0003B550(void);
void func_0003B820(struct Unk_func_0003B820_0 *arg0);
void func_0003BA64(struct Unk_func_0003BA64_0 *arg0);
void func_0003BA90(struct Unk_func_0003BA90_0 *arg0);
s32 func_0003BABC(s32, s32);
void func_0003BE70(struct Unk_func_0003BE70_0 *arg0);
s32 func_0003BE9C(void *, s32);
void func_0003BF24(struct Unk_func_0003BF24_0 *arg0);
s32 func_0003C2B8(struct Unk_func_0003C2B8_0 *arg0);
void func_0003D690(void);
s32 func_0003D698(void);
void func_0003E444(struct Unk_func_0003E444_0 *arg0);
s32 func_0003E484(s32, s32);
s32 func_0003E510(s32, s32);
s32 func_0003E6D0(s32);
s32 func_0003EB14(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0003EBF8(s32 arg0);
void func_0003F56C(s32 **arg0);
void func_0003F598(void);
s32 func_0003F5A0(void);
void func_0003F5A8(void);
s32 func_0003F5B0(void);
s32 func_0003F5B8(void);
void func_0003F5C0(void);
s32 func_0003F5C8(void);
s32 func_0003F5D0(void);
s32 func_0003F5D8(void);
void func_0003F820(struct Unk_func_0003F820_0 *arg0, s32 arg1, s32 arg2);
void func_0003F848(struct Unk_func_0003F848_0 *arg0, s32 arg1, s32 arg2);
void func_0003F85C(struct Unk_func_0003F85C_0 *arg0, s32 arg1, s32 arg2);
s32 func_0003FB68(struct Unk_vt_func_0003FB68_arg0 **arg0);
s32 func_0003FB88(struct Unk_vt_func_0003FB88_arg0 **arg0);
void func_0003FB94(struct Unk_vt_func_0003FB94_arg0 **arg0, s32 arg1);
void func_0003FCBC(s32 arg0);
void func_0003FCE0(s32 *arg0, s32 arg1);
s32 func_0003FD24(s32 *arg0);
void func_0003FD5C(struct Unk_func_0003FD5C_0 *arg0);
void func_0003FDB8(s32 *arg0);
M2C_UNK func_0003FDD4(M2C_UNK);
M2C_UNK func_0003FE88(M2C_UNK);
s32 func_000406FC(struct Unk_func_000406FC_0 *arg0, s32 arg1);
s32 func_0004083C(struct Unk_func_0004083C_0 *arg0, M2C_UNK arg1, s32 arg2);
s32 func_00040940(struct Unk_vt_func_00040940_arg0 **arg0, M2C_UNK arg1, s32 *arg2, s32 *arg3);
void func_00040AD8(struct Unk_func_00040AD8_0 *arg0);
void func_00040BA4(s32 **arg0);
void func_00040D50(s32 **arg0);
void func_00040D7C(s32 **arg0);
void func_00040D98(void);
void func_00040DA0(void);
void func_00040DB8(void);
s32 func_00040DC0(s32, s32, s32, s32);
s32 func_00040E98(s32 arg0);
void func_00040EBC(void);
void func_00040EC4(struct Unk_func_00040EC4_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00041118(void);
void func_00041120(s32 arg0, s32 arg1);
M2C_UNK func_00041678(s32, s32, M2C_UNK);
s32 func_00041B14(s32 arg0);
void func_00041B3C(s32 *arg0);
void func_00041BD8(void);
s32 func_00041C30(struct Unk_func_00041C30_0 *arg0);
s32 func_00041C44(struct Unk_func_00041C44_0 *arg0);
void func_00041C74(struct Unk_func_00041C74_0 *arg0, struct Unk_vt_func_00041C74_arg1 **arg1, s32 arg2);
void func_00041CFC(s32 arg0, struct Unk_vt_func_00041CFC_arg1 **arg1);
M2C_UNK func_00041DF0(s32, s32 **);
void func_00041E80(s32 arg0, s32 arg1);
M2C_UNK func_00041F4C(void *);
M2C_UNK func_00041F7C(s32, M2C_UNK);
void func_00042040(struct Unk_func_00042040_0 *arg0, s32 arg1);
s32 func_00042050(struct Unk_func_00042050_0 *arg0, M2C_UNK arg1, s32 *arg2);
s32 func_000420CC(struct Unk_func_000420CC_0 *arg0, s32 arg1, s32 arg2, s32 *arg3);
s32 func_00042170(void *, M2C_UNK, s32, M2C_UNK);
s32 func_000422E8(s32, s32, s32);
void func_00042394(void **arg0, s32 *arg1, s32 *arg2);
void func_000423F8(struct Unk_vt_func_000423F8_arg0 **arg0);
s32 *func_00042424(void);
M2C_UNK func_00042464(void **);
void func_00042568(struct Unk_vt_func_00042568_arg0 **arg0, s32 arg1);
void func_0004260C(void **arg0, s32 arg1);
void func_00042650(void **arg0, s32 arg1);
void func_00042788(struct Unk_func_00042788_0 *arg0);
void func_000427C0(struct Unk_func_000427C0_0 *arg0);
void func_00042818(struct Unk_func_00042818_0 *arg0);
s32 func_000428A4(struct Unk_func_000428A4_0 *arg0, s32 arg1, s32 *arg2);
s32 func_00042904(struct Unk_func_00042904_0 *arg0, s32 *arg1);
s32 func_0004295C(struct Unk_func_0004295C_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_000429C0(s32 **arg0);
void func_00042BAC(s32 **arg0);
void func_00042D70(s32 **arg0);
M2C_UNK func_00042DC0(s32);
void func_00042E34(struct Unk_vt_func_00042E34_arg0 **arg0, s32 arg1);
void func_00042E40(struct Unk_vt_func_00042E40_arg0 **arg0, s32 arg1);
M2C_UNK func_00042E58(M2C_UNK, M2C_UNK);
void func_00042E78(struct Unk_vt_func_00042E78_arg0 **arg0, s32 arg1);
void func_00042ECC(struct Unk_vt_func_00042ECC_arg0 **arg0, s32 arg1);
void func_00042ED8(void **arg0, s32 arg1);
void func_00042F1C(void **arg0, s32 arg1, s32 arg2);
void func_00042F2C(s32 **arg0);
void func_00042FBC(struct Unk_vt_func_00042FBC_arg0 **arg0, s32 arg1);
M2C_UNK func_00043448(s32 **, M2C_UNK);
M2C_UNK func_000436CC(s32);
M2C_UNK func_00043754(s32);
void func_000437DC(s32 *arg0);
void func_000437F8(s32 *arg0);
M2C_UNK func_00043814(s32);
s32 func_000438B4(s32, s32, s32);
M2C_UNK func_00043A68(M2C_UNK, M2C_UNK);
void func_00043A9C(s32 **arg0);
s32 func_00043B00(M2C_UNK, s32, s32 *);
M2C_UNK func_00043BA4(M2C_UNK, M2C_UNK);
s32 func_00043BDC(void **arg0);
s32 func_00043BF8(struct Unk_func_00043BF8_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00044940(void);
void func_00044A34(s32 **arg0, s32 **arg1);
void func_00044AA4(s32 **arg0, s32 arg1);
s32 func_00045034(s32, s32, s32, s32);
s32 func_000454B8(struct Unk_vt_func_000454B8_arg0 **arg0);
s32 func_00045580(struct Unk_vt_func_00045580_arg0 **arg0);
s32 func_0004584C(void *****arg0);
s32 func_00045904(void ****arg0);
void func_00045924(s32 ****arg0);
s32 func_00045944(void ****arg0);
void func_00045958(s32 ***arg0);
s32 func_00045978(void ****arg0);
s32 func_00045994(void ****arg0);
s32 func_000459AC(void ****arg0);
s32 func_000459C4(void ****arg0);
void func_000459E4(void ****arg0);
s32 func_00045A0C(void ****arg0);
void func_00045A2C(s32 **arg0, s32 arg1);
s32 func_00045A50(void ****arg0);
void func_00045A64(void ****arg0, struct Unk_func_00045A64_1 *arg1);
s32 func_00045A8C(void ****arg0);
s32 func_00045D7C(void ****arg0);
s32 func_00045D94(void ****arg0);
s32 func_00045DB0(void ****arg0);
s32 func_00045DCC(void ****arg0);
void func_00045DE8(s32 ****arg0);
s32 func_00045E08(void ****arg0);
s32 func_00045E1C(void ****arg0);
void func_00045E38(s32 ***arg0);
s32 func_00045E58(void ****arg0);
s32 func_00045E70(void ****arg0);
s32 func_00045E88(void ****arg0);
void func_00045EA8(void ****arg0);
s32 func_00045ED0(void ****arg0);
void func_00045EF0(s32 **arg0, s32 arg1);
s32 func_00045F14(void ****arg0);
void func_00045F28(void ****arg0, struct Unk_func_00045A64_1 *arg1);
s32 func_00045F50(void ****arg0);
void func_00046044(s32 ****arg0, s32 arg1);
s32 func_00046144(struct Unk_func_00046144_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0004633C(struct Unk_func_00046144_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000466BC(struct Unk_func_000466BC_0 *arg0);
M2C_UNK func_000467F4(void *);
s32 func_00046D34(struct Unk_func_00046D34_0 *arg0, s32 *arg1);
s32 func_00047744(s32);
void func_000477A8(struct Unk_func_000477A8_0 *arg0);
s32 func_00047844(s32, s32);
void func_000478B8(struct Unk_func_000478B8_0 *arg0, s32 arg1);
void func_000478FC(struct Unk_func_000478FC_0 *arg0, M2C_UNK arg1);
M2C_UNK func_0004794C(s32);
void func_0004796C(struct Unk_func_0004796C_0 *arg0);
s32 func_000479B8(void);
void func_000479F8(struct Unk_func_0004796C_0 *arg0);
void func_00047A2C(void);
void func_00047A54(s32 arg0);
s32 func_0004877C(s32, void **, M2C_UNK);
void func_00048818(s32 **arg0, s32 arg1);
void func_0004898C(s32 **arg0);
void func_000489A8(void);
void func_000489B0(void);
void func_000489B8(void);
void func_000489D0(void);
void func_00049984(s32 arg0, s32 arg1);
void func_00049A24(s32 arg0);
s32 func_00049A40(s32 arg0, s32 arg1, s32 ***arg2);
void func_00049AD0(struct Unk_func_00049AD0_0 *arg0, struct Unk_func_00049AD0_1 *arg1);
s32 func_00049B6C(struct Unk_func_00049B6C_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0004A8A4(struct Unk_func_0004A8A4_0 *arg0);
void func_0004B3BC(struct Unk_vt_func_0004B3BC_arg0 **arg0, s32 arg1);
s32 func_0004B430(s32 *arg0, s32 arg1, s32 arg2);
s32 func_0004B52C(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0004B608(s32 arg0);
M2C_UNK func_0004B698(M2C_UNK, s32, void **);
s32 func_0004B6C8(s32, s32);
void func_0004B6D8(void);
void func_0004B6E0(struct Unk_vt_func_0004B6E0_arg0 **arg0);
s32 func_0004B738(struct Unk_vt_func_0004B738_arg0 **arg0);
s32 func_0004B76C(struct Unk_vt_func_0004B76C_arg0 **arg0);
void func_0004B7A0(s32 arg0);
void func_0004B7BC(void);
void func_0004B7D8(s32 arg0);
void func_0004B7F4(void);
M2C_UNK func_0004B810(M2C_UNK, s32);
s32 func_0004B848(s32, s32, s32);
void func_0004B860(void);
void func_0004BA50(struct Unk_vt_func_0004BA50_arg0 **arg0, M2C_UNK arg1);
void func_0004BA78(struct Unk_func_0004BA78_0 *arg0, s32 arg1);
void func_0004BAB4(void);
void func_0004BB04(struct Unk_vt_func_0004BB04_arg0 **arg0, s32 arg1);
void func_0004BB2C(struct Unk_func_0004BB2C_0 *arg0, s32 arg1);
void func_0004BB5C(void);
void func_0004BC5C(struct Unk_func_0004BC5C_0 *arg0, s32 arg1, s32 arg2);
void func_0004BC68(void);
s32 func_0004CCF4(s32);
s32 func_0004D29C(s32 **arg0, M2C_UNK arg1);
void func_0004D2F4(s32 arg0, void **arg1);
s32 func_0004D57C(s32, s32);
void func_0004D6DC(s32 arg0, s32 arg1);
M2C_UNK func_0004D7C4();
void func_0004D814(struct Unk_func_0004D814_0 *arg0, s32 arg1);
void func_0004D850(struct Unk_func_0004D850_0 *arg0);
s32 func_0004D888(struct Unk_func_0004D888_0 *arg0, s32 arg1, M2C_UNK arg2);
s32 func_0004E184(M2C_UNK, M2C_UNK);
s32 func_0004E220(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
void func_0004E290(s32 arg0, s32 arg1, s32 arg2);
s32 func_0004E2E4(s32 arg0, s32 arg1, s32 arg2);
s32 func_0004E3CC(s32, s32, s32, s32, s32, s32);
void func_00050598(struct Unk_func_00050598_0 *arg0);
void func_00051CCC(s32 arg0, s32 arg1);
void func_00051FD8(struct Unk_func_00051FD8_0 *arg0);
void func_00051FE0(void);
void func_00051FE8(struct Unk_func_00051FE8_0 *arg0, struct Unk_vt_func_00051FE8_arg1 **arg1, s32 arg2);
s32 func_00052004(s32, s32);
void func_00052068(s32 arg0, s32 arg1);
void func_000521FC(struct Unk_vt_func_000521FC_arg0 **arg0, s32 arg1);
void func_0005225C(void **arg0, s32 arg1);
void func_00052270(struct Unk_vt_func_00052270_arg0 **arg0, s32 arg1);
s32 func_0005227C(struct Unk_vt_func_0005227C_arg0 **arg0);
void func_00052288(struct Unk_func_00052288_0 *arg0, s32 arg1, struct Unk_func_00052288_2 *arg2);
s32 func_00052384(struct Unk_func_00052384_0 *arg0);
void func_000523C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
M2C_UNK *func_00052828(void);
void func_00052834(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00052EDC(s32 arg0, s32 arg1);
s32 func_00052F00(s32, s32, s32);
void func_00052FB0(s32 arg0, s32 arg1);
void func_00052FCC(s32 arg0, s32 arg1);
void func_00052FE8(s32 arg0, s32 arg1);
void func_00053004(s32 arg0, s32 arg1);
void func_00053020(s32 arg0, s32 arg1);
void func_0005303C(s32 arg0, s32 arg1);
void func_00053058(s32 arg0, s32 arg1);
s32 func_0005312C(s32, s32, s32, s32);
void func_000531D0(s32 arg0, s32 arg1);
void func_000531F0(s32 arg0, s32 arg1);
void func_00053210(s32 arg0, s32 arg1);
void func_00053230(s32 arg0, s32 arg1);
void func_00053250(s32 arg0, s32 arg1);
void func_00053270(s32 arg0, s32 arg1);
void func_00053290(s32 arg0, s32 arg1);
void func_000532B0(s32 arg0, s32 arg1);
void func_000532D0(s32 arg0, s32 arg1);
void func_000532F0(s32 arg0, s32 arg1);
void func_00053310(s32 arg0, s32 arg1);
void func_00053330(s32 arg0, s32 arg1);
void func_00053350(s32 arg0, s32 arg1);
void func_00053370(s32 arg0, s32 arg1);
void func_00053390(s32 arg0, s32 arg1);
void func_000533B0(s32 arg0, s32 arg1);
void func_000533D0(s32 arg0, s32 arg1);
void func_000533F0(s32 arg0, s32 arg1);
void func_00053410(s32 arg0, s32 arg1);
void func_00053430(s32 arg0, s32 arg1);
void func_00053CAC(s32 arg0, s32 arg1);
s32 func_00053CCC(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
void func_00053CF8(s32 arg0);
void func_00053EB8(struct Unk_func_00053EB8_0 *arg0);
void func_0005401C(struct Unk_func_0005401C_0 *arg0, s32 arg1);
void func_00054024(struct Unk_func_00054024_0 *arg0, s32 arg1);
void func_0005402C(void);
void func_00054034(void);
M2C_UNK *func_00054150(void);
s32 func_0005415C(s32, s32);
void func_0005419C(s32 arg0);
s32 func_000541D4(s32, s32, s32);
s32 func_00054364(s32, s32, s32, s32, s32);
void func_0005443C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00054458(s32 arg0, s32 arg1);
void func_00054474(s32 arg0, s32 arg1);
void func_00054494(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000544B0(s32 arg0, s32 arg1);
void func_000544CC(s32 arg0, s32 arg1);
void func_000544EC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00054508(s32 arg0, s32 arg1);
void func_00054524(s32 arg0, s32 arg1);
void func_00054544(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00054560(s32 arg0, s32 arg1);
void func_0005457C(s32 arg0, s32 arg1);
void func_0005459C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000545B8(s32 arg0, s32 arg1);
void func_000545D4(s32 arg0, s32 arg1);
void func_000545F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00054610(s32 arg0, s32 arg1);
void func_0005462C(s32 arg0, s32 arg1);
void func_0005464C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00054668(s32 arg0, s32 arg1);
void func_00054684(s32 arg0, s32 arg1);
void func_000546A4(s32 arg0);
s32 func_000546C0(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
s32 func_00054774();
M2C_UNK *func_000548B8(void);
s32 func_00054A0C(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
s32 func_00054CB4(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
M2C_UNK *func_00055188(void);
M2C_UNK *func_00055194(void);
M2C_UNK *func_00055724(void);
void func_00055A08(struct Unk_func_00055A08_0 *arg0, s32 arg1);
s32 func_00055B2C(s32, s32, s32, s32);
s32 func_00055D80(void ***arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_00055E28(void ***arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_00055ECC(void ***arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3);
s32 func_00055F74(void ***arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_00056018(void ***arg0, s32 arg1, M2C_UNK arg2);
s32 func_0005656C(void ***arg0, s32 arg1);
void func_00056AF4(s32 arg0, s32 arg1);
M2C_UNK func_00056CC0(void **, s32, void *);
void func_00056D54(void **arg0, struct Unk_func_00056D54_1 *arg1);
s32 func_000577C4(s32, s32, s32, s32, s32);
void func_00057908(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0005798C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00057B68(void);
s32 func_00057FC8(s32, s32, s32, s32);
void func_000580B4(s32 **arg0);
s32 func_00058180(s32 **arg0);
s32 func_0005818C(struct Unk_vt_func_0005818C_arg0 **arg0);
void func_00058200(s32 arg0, M2C_UNK arg1);
s32 func_000584D4(s32 arg0);
s32 func_00058528(s32 **arg0);
void func_00058534(s32 **arg0, s32 arg1);
s32 func_00058EE4(s32 arg0);
void func_00058F38(s32 arg0);
s32 func_000590D0(s32, s32);
void func_000590E8(struct Unk_func_000590E8_0 *arg0);
void func_00059188(struct Unk_func_00059188_0 *arg0);
void func_000591B4(struct Unk_func_000591B4_0 *arg0, s32 arg1);
void func_000591DC(struct Unk_func_000591DC_0 *arg0, s32 arg1);
void func_00059204(struct Unk_func_00059204_0 *arg0, s32 arg1);
void func_00059294(struct Unk_func_00059294_0 *arg0, s32 arg1);
void func_000592D4(void);
void func_000593E8(struct Unk_func_000593E8_0 *arg0);
void func_0005951C(void);
s32 func_00059538(struct Unk_func_00059538_0 *arg0, s32 arg1);
s32 func_000595C8(struct Unk_func_000595C8_0 *arg0, M2C_UNK arg1);
void func_00059620(s32 *arg0);
M2C_UNK *func_0005987C(void);
M2C_UNK *func_0005B44C(void);
M2C_UNK func_0005B458();
void func_0005B644(void);
void func_0005BEB4(s32 arg0, s32 arg1);
s32 func_0005BED4(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
void func_0005BF00(s32 arg0);
void func_0005C140(struct Unk_func_0005C140_0 *arg0, s32 arg1);
s32 func_0005C204(struct Unk_func_0005C204_0 *arg0, s32 arg1);
void func_0005C218(struct Unk_func_0005C218_0 *arg0);
s32 func_0005C2A0(s32, s32);
s32 func_0005C3A4(struct Unk_func_0005C3A4_0 *arg0, struct Unk_func_0005C3A4_1 *arg1);
void func_0005C3E4(void *arg0, s32 arg1, struct Unk_func_0005C3E4_2 *arg2);
void func_0005C40C(s32 arg0, struct Unk_func_0005C40C_1 *arg1);
s32 func_0005C460(s32, s32, s32);
void func_0005C4D0(struct Unk_func_0005C4D0_0 *arg0);
void func_0005C510(struct Unk_func_0005C510_0 *arg0);
s32 func_0005C5B8(s32 arg0);
M2C_UNK func_0005C5C0(M2C_UNK, s32);
void func_0005C5F4(s32 arg0);
s32 func_0005C614(struct Unk_func_0005C614_0 *arg0, struct Unk_func_0005C614_1 *arg1, struct Unk_func_0005C614_2 *arg2);
s32 func_0005C6CC(struct Unk_func_0005C6CC_0 *arg0, s32 arg1);
void func_0005C6F8(void);
void func_0005C700(void);
void func_0005C71C(s32 arg0);
void func_0005C89C(s32 arg0);
M2C_UNK func_0005C90C(s32, s32, M2C_UNK);
s32 func_0005CC9C(s32, s32, s32, s32, s32);
s32 func_0005CE24(s32, s32, s32, s32, s32);
s32 func_0005D0EC(struct Unk_func_0005D0EC_0 *arg0, s32 arg1);
s32 func_0005D21C(struct Unk_func_0005D21C_0 *arg0, s32 arg1);
u8 func_0005D290(struct Unk_func_0005D290_0 *arg0, s32 arg1);
void func_0005D2C4(struct Unk_func_0005D2C4_0 *arg0, s32 arg1, s32 arg2);
M2C_UNK func_0005D30C(void *, s32, void *, s32);
void func_0005D3A4(struct Unk_func_0005D3A4_0 *arg0, s32 arg1, s32 arg2);
M2C_UNK *func_0005D458(void);
void func_0005D5F4(struct Unk_func_0005D5F4_0 *arg0, struct Unk_func_0005D5F4_1 *arg1);
void func_0005D924(struct Unk_func_0005D924_0 *arg0, s32 *arg1);
void func_0005D98C(struct Unk_func_0005D98C_0 *arg0, s32 *arg1);
void func_0005DBD0(void);
M2C_UNK func_0005DCA8();
void func_0005DCF8(void);
void func_0005DD14(void);
void func_0005DE50(struct Unk_func_0005DE50_0 *arg0, s32 *arg1);
void func_0005DF08(s32 arg0, s32 arg1);
s32 func_0005DF2C(s32, s32);
s32 func_0005E2A4(s32, s32, s32, s32);
void func_0005E3D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0005E4D0(void ***arg0, s32 arg1, M2C_UNK arg2);
void func_0005E68C(void ***arg0, s32 arg1, M2C_UNK arg2);
void func_0005E77C(void ***arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3);
M2C_UNK func_0005E940(s32, s32);
s32 func_0005EFBC(s32, s32, s32);
s32 func_0005F49C(struct Unk_func_0005F49C_0 *arg0, s32 arg1);
s32 func_0005F4D4(s32, s32, s32);
void func_0005F560(struct Unk_func_0005F560_0 *arg0);
s32 func_0005F594(struct Unk_func_0005F594_0 *arg0, s32 arg1);
void func_0005F8B4(void);
s32 func_0005F9D8(s32, s32, s32, s32, s32);
M2C_UNK func_0005FB2C();
s32 func_0005FC08(void **arg0, s32 arg1);
s32 func_0005FD10(struct Unk_vt_func_0005FD10_arg0 **arg0);
s32 func_0005FD1C(s32 **arg0);
s32 func_0005FD34(s32);
s32 func_0005FD88(struct Unk_vt_func_0005FD88_arg0 **arg0);
s32 func_0005FD94(s32 arg0, struct Unk_func_0005FD94_1 *arg1);
void func_0005FEF4(s32 *arg0, s32 arg1);
void func_0005FF18(s32 *arg0, s32 arg1);
void func_0005FF44(void **arg0, s32 arg1, s32 arg2);
void func_0005FF54(void **arg0, s32 *arg1, s32 *arg2);
s32 func_0005FF6C(struct Unk_vt_func_0005FF6C_arg0 **arg0);
s32 func_0005FF78(s32 **arg0);
s32 func_0005FF98(s32 **arg0);
s32 func_0005FFB8(s32 **arg0);
s32 func_0005FFD8(s32 **arg0);
s32 func_00060220(struct Unk_func_00060220_0 *arg0);
void func_00060244(void);
M2C_UNK func_000602C0(void *, s32, s32 *);
s32 *func_00060660();
s32 func_00060740(struct Unk_func_00060740_0 *arg0, s32 arg1);
void func_00061DF4(void);
void func_00062194(struct Unk_func_00062194_0 *arg0, s32 arg1, s32 arg2);
void func_00063870(struct Unk_func_00063870_0 *arg0, s32 arg1);
void func_00063AD0(struct Unk_func_000591DC_0 *arg0, s32 arg1);
void func_00063AFC(struct Unk_func_000591B4_0 *arg0, s32 arg1, s32 *arg2);
M2C_UNK func_00063B34(void *, M2C_UNK);
s32 func_00063CF4(s32);
s32 func_00063DD4(s32, s32, s32, s32, s32);
s32 func_00063EF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00064654(s32 arg0, M2C_UNK arg1);
M2C_UNK *func_00064888(void);
void func_00065038(s32 arg0, s32 arg1);
s32 func_000651A8(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
void func_000651D4(s32 arg0);
void func_00065790(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK *func_000658EC(void);
void func_00065FB0(s32 arg0, s32 arg1);
M2C_UNK func_00065FD4();
void func_00066058(void);
s32 func_00066074(s32, s32, s32, s32, s32);
void func_00066204(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00066220(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00066334(s32, s32, s32, s32, s32);
void func_000664D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000664F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0006660C(s32, s32, s32, s32, s32);
void func_0006684C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00066868(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00066884(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00068388(s32, s32, s32, s32, s32);
void func_0006846C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00068488(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000684A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_000684C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000684DC(s32, s32, s32, s32, s32, s32);
void func_00068950(s32 arg0, s32 arg1);
s32 func_00068970(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
void func_0006899C(s32 arg0);
M2C_UNK func_00068B2C(s32, s32);
void func_00068BC0(struct Unk_func_00068BC0_0 *arg0);
void func_00068BC8(void);
void func_00068BD0(struct Unk_vt_func_00068BD0_arg0 **arg0, s32 arg1);
void func_00068BDC(struct Unk_func_00068BDC_0 *arg0, struct Unk_func_00068BDC_1 *arg1);
void func_00068C6C(void **arg0);
void func_00068CC4(struct Unk_vt_func_00068CC4_arg0 **arg0, s32 arg1);
M2C_UNK func_00068CD0(void ***, M2C_UNK);
void func_00068CDC(s32 *arg0, s32 arg1, s32 arg2);
s32 func_00068CF0(s32 *arg0, s32 arg1);
void func_00068D04(struct Unk_vt_func_00068D04_arg0 **arg0, s32 arg1);
void func_00068D10(struct Unk_vt_func_00068D10_arg0 **arg0, s32 arg1);
s32 func_00068D1C(struct Unk_func_00068D1C_0 *arg0);
s32 func_00068D48(struct Unk_func_00068D48_0 *arg0);
s32 func_00068E90(s32, s32, s32, s32);
void func_00069388(void **arg0);
void func_000693F0(void **arg0);
void func_00069440(struct Unk_func_00069440_0 *arg0, struct Unk_vt_func_00069440_arg1 **arg1, s32 arg2);
s32 func_0006945C(void *, s32);
s32 func_00069488(s32 **arg0);
s32 func_000694A8(s32 **arg0);
s32 func_000694C8(s32 **arg0);
void func_000694E8(struct Unk_func_00069440_0 *arg0, s32 arg1);
s32 func_00069580(s32 arg0, struct Unk_func_00069580_1 *arg1);
M2C_UNK func_00069838();
s32 func_00069D78(struct Unk_func_00069D78_0 *arg0, s32 arg1);
s32 func_00069DAC(s32, s32, s32, s32);
void func_0006A3FC(s32 arg0, struct Unk_func_0006A3FC_1 *arg1, s32 arg2, s32 arg3);
s32 func_0006A5E4(s32, s32);
void func_0006A5F4(s32 arg0, s32 arg1, s32 arg2);
s32 func_0006C624(s32 **arg0, s32 arg1);
void func_0006C6EC(s32 arg0, s32 *arg1);
M2C_UNK func_0006C884(s32 **, void *, M2C_UNK);
M2C_UNK func_0006C964(s32 **, void *, M2C_UNK);
void func_0006CDEC(s32 **arg0);
void func_0006CE28(s32 **arg0, struct Unk_func_00068BDC_1 *arg1);
s32 func_0006CFC4(s32 arg0, s32 arg1, s32 arg2);
void func_0006D0F0(void **arg0);
M2C_UNK func_0006FFA0(s32, s32, s32);
s32 func_00070038(s32);
M2C_UNK func_0007040C();
s32 func_000706E0(s32, s32, s32, s32);
void func_00070A04(void);
s32 func_0007200C(s32, s32, s32);
void func_000721B8(s32 arg0, s32 arg1, struct Unk_func_000721B8_2 *arg2);
s32 func_000721F0(s32, s32, s32);
void func_000723AC(s32 arg0, s32 arg1, s32 arg2, struct Unk_func_000723AC_3 *arg3);
s32 func_000723DC(s32, s32, s32, s32, s32);
void func_00072570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, struct Unk_func_00072570_4 *arg4);
void func_0007296C(void);
void func_00072A58(s32 arg0, struct Unk_func_00072A58_1 *arg1);
s32 func_00073388();
M2C_UNK *func_0007355C(void);
s32 func_0007368C(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
void func_000736B8(s32 arg0);
s32 func_000736E0(s32, M2C_UNK, M2C_UNK, s32);
s32 func_00073950(s32, s32, s32, s32, s32, s32, s32);
void func_00073CC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_00073CF8(s32, M2C_UNK, M2C_UNK, s32);
s32 func_00073D68(s32, M2C_UNK, M2C_UNK, s32);
void func_00074098(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2, void *arg3);
void func_0007410C(s32 *arg0, s32 arg1, s32 arg2, void *arg3);
M2C_UNK func_00074358(s32 *, M2C_UNK, M2C_UNK, void *);
void func_0007481C(s32 arg0, M2C_UNK arg1);
void func_000755BC(s32 arg0, s32 arg1);
M2C_UNK *func_000755DC(void);
void func_0007573C(s32 **arg0, s32 arg1);
void func_00075890(s32 arg0, s32 arg1);
s32 func_000758B0(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
void func_000758DC(s32 arg0);
s32 func_000759A8(struct Unk_vt_func_000759A8_arg0 **arg0);
s32 func_000759D0(struct Unk_vt_func_000759D0_arg0 **arg0);
M2C_UNK func_00077270(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_00077510(void *);
s32 func_00077618(void *);
M2C_UNK func_00077670();
M2C_UNK func_000776CC(void *, s32);
void func_00077734(struct Unk_func_00077734_0 *arg0);
void func_000777B8(void);
s32 func_000777D4(struct Unk_func_000777D4_0 *arg0);
s32 func_000777E0(void *);
s32 func_000777EC(struct Unk_func_000777EC_0 *arg0);
void func_000777F8(struct Unk_func_000777F8_0 *arg0);
void func_00077808(struct Unk_func_00077808_0 *arg0);
M2C_UNK func_00077818();
void func_000778A0(struct Unk_func_000778A0_0 *arg0);
s32 func_000778D0(struct Unk_func_000778D0_0 *arg0, s32 arg1);
s32 func_000778DC(struct Unk_func_000778DC_0 *arg0, s32 arg1);
s32 func_000778E8(struct Unk_func_000778E8_0 *arg0, s32 arg1);
void func_00077BF4(s32 arg0);
s32 func_0007B340(s32, s32);
void func_0007B37C(void);
void func_0007B384(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0007B3B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK func_0007B4E4(s32, s32);
void func_0007B544(s32 *arg0, s32 *arg1);
void func_0007B564(s32 *arg0, s32 *arg1);
M2C_UNK func_0007B58C();
s32 func_0007B72C(struct Unk_func_0007B72C_0 *arg0, M2C_UNK arg1);
s32 func_0007B790(s32 *arg0);
void func_0007B7B4(void);
s32 func_0007B7F4(struct Unk_func_0007B7F4_0 *arg0);
void func_0007B818(s32 arg0);
void func_0007C520(s32 arg0);
s32 func_0007C554(struct Unk_func_0007C554_0 *arg0, M2C_UNK arg1);
s32 func_0007C5B8(struct Unk_func_0007C5B8_0 *arg0, M2C_UNK arg1);
s32 func_0007C66C(struct Unk_func_0007C66C_0 *arg0, s32 arg1);
void func_0007C768(struct Unk_func_0007C768_0 *arg0, M2C_UNK arg1);
void func_0007C7A8(struct Unk_func_0007C7A8_0 *arg0, M2C_UNK arg1);
s32 func_0007C7E8(struct Unk_func_0007C7E8_0 *arg0, M2C_UNK arg1, s32 arg2);
s32 func_0007C834(struct Unk_func_0007C834_0 *arg0, M2C_UNK arg1, s32 arg2);
void func_0007CD84(struct Unk_func_0007CD84_0 *arg0, M2C_UNK arg1);
M2C_UNK func_0007D268(s32, s32, M2C_UNK);
M2C_UNK func_0007D4D4(s32, s32);
s32 func_0007E604(s32, s32);
void func_0007E684(s32 arg0, s32 arg1);
void func_0007ECF4(struct Unk_func_0007ECF4_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0007FF80(s32 arg0, s32 arg1, struct Unk_func_0007FF80_2 *arg2, s32 arg3, s32 arg4);
s32 func_0007FFC8(s32, s32, s32, s32, s32, s32);
void func_00081540(void **arg0, s32 arg1);
void func_0008156C(s32 arg0, struct Unk_func_0008156C_1 *arg1);
void func_00081974(s32 arg0, s32 *arg1);
void func_000819B8(s32 arg0, void **arg1);
s32 func_000826CC(s32, s32, s32);
M2C_UNK func_00082D48(M2C_UNK);
s32 func_0008329C(s32, s32, s32, s32, s32, s32);
M2C_UNK func_000842BC(s32);
void func_00084590(s32 arg0, M2C_UNK arg1, s32 arg2);
s32 func_00084D58(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00084FDC(s32 arg0);
s32 func_00085014(s32);
s32 func_00085158(s32 arg0);
s32 func_00085208(s32 arg0);
s32 func_000867F4(struct Unk_func_000867F4_0 *arg0);
s32 func_00086800(struct Unk_func_00086800_0 *arg0);
s32 func_0008685C(s32, s32);
s32 func_00086898(struct Unk_func_00086898_0 *arg0);
void func_00086964(s32 arg0, struct Unk_func_00086964_1 *arg1);
M2C_UNK func_00086C14(s32, s32);
s32 func_00086ED0();
void func_00086F34(struct Unk_func_00086F34_0 *arg0);
void func_00087010(struct Unk_func_00087010_0 *arg0, s32 arg1, s32 arg2);
void func_00087058(struct Unk_func_00087058_0 *arg0, s32 arg1, s32 arg2);
s32 func_00087254(s32, s32, s32);
void func_000872E4(s32 arg0, s32 arg1);
s32 func_00087320(s32, s32);
s32 func_00087430(s32, s32);
void func_000874F0(struct Unk_func_000874F0_0 *arg0, s32 arg1, s32 arg2);
void func_000875EC(s32 arg0);
s32 func_00087608(struct Unk_func_00087608_0 *arg0);
M2C_UNK func_00087AA0(s32, M2C_UNK, s32, s32 *);
M2C_UNK func_00087B70(s32, M2C_UNK, s32, s32 *);
s32 func_00087C34(s32 arg0, s32 arg1, s32 **arg2);
s32 func_00087CAC(s32 arg0, s32 arg1, s32 **arg2);
s32 func_00087D24(struct Unk_func_0005C140_0 *arg0, s32 arg1, s32 arg2);
void func_00087F74(s32 arg0, M2C_UNK arg1, s32 arg2);
s32 func_00088300(s32, s32, M2C_UNK);
void func_00088600(struct Unk_func_00088600_0 *arg0);
s32 func_0008952C(void *, s32, s32 *);
void func_000895D0(struct Unk_func_000895D0_0 *arg0, s32 *arg1);
s32 func_000896A8(void *arg0, s32 *arg1);
s32 func_00089720(void *arg0, s32 *arg1);
M2C_UNK func_00089A10(s32);
void func_00089AA4(s32 arg0);
void func_00089B8C(s32 arg0);
void func_00089BA8(s32 arg0);
s32 func_00089BC4(s32, s32);
s32 func_00089C54(s32, s32, s32);
M2C_UNK func_00089EB4();
M2C_UNK func_0008A010();
s32 func_0008A040(struct Unk_func_0008A040_0 *arg0);
s32 func_0008A140(struct Unk_func_0008A140_0 *arg0, s32 arg1);
M2C_UNK func_0008A7AC(s32);
s32 *func_0008A92C(void);
void func_0008A9A0(s32 **arg0);
M2C_UNK func_0008A9D0(s32);
s32 func_0008AA00(struct Unk_vt_func_0008AA00_arg0 **arg0);
s32 func_0008AA10(struct Unk_vt_func_0008AA10_arg0 **arg0);
s32 func_0008AE1C(s32, s32);
s32 func_0008AF7C(s32, s32);
s32 func_0008B0C8(s32, s32);
s32 func_0008B4C0(s32 **arg0, struct Unk_func_0008B4C0_1 *arg1);
void func_0008B520(s32 **arg0, struct Unk_func_0008B520_1 *arg1);
void func_0008B938(struct Unk_func_0008B938_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0008C3EC(s32, s32);
s32 func_0008C640(s32);
s32 func_0008C698(s32, s32, s32, s32);
M2C_UNK func_0008C6D8(M2C_UNK, M2C_UNK);
void func_0008C768(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0008C7DC(s32, s32, s32, s32);
void func_0008C868(s32 arg0, s32 arg1, s32 arg2);
void func_0008C884(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK func_0008C9C0();
s32 func_0008D1F0(s32, s32, s32, s32);
void func_0008D298(s32 arg0, s32 arg1, s32 arg2);
s32 func_0008D2B4(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0008D674(struct Unk_func_0008D674_0 *arg0, s32 arg1);
s32 func_00091940(M2C_UNK, M2C_UNK);
M2C_UNK func_00092404(s32);
M2C_UNK func_0009244C(s32, M2C_UNK);
void func_00092494(s32 arg0, s32 arg1);
s32 func_000924D0(void);
M2C_UNK func_00092894(s32, M2C_UNK);
s32 func_00092950(s32, s32, s32);
M2C_UNK func_00092A50(s32, M2C_UNK);
void func_00092B24(void);
void func_00092DBC(s32 arg0, s32 arg1);
void func_00092DE0(s32 arg0, s32 arg1);
void func_00092E30(s32 *arg0);
void func_00092EB8(s32 arg0);
void func_00092ED4(s32 arg0, s32 arg1);
void func_00092EF8(s32 arg0, s32 arg1);
void func_00093060(s32 arg0);
void func_00093120(s32 *arg0);
void func_0009312C(s32 *arg0);
void func_0009313C(void);
void func_0009315C(s32 *arg0);
s32 func_00093620(struct Unk_func_00093620_0 *arg0);
M2C_UNK func_00093668();
s32 func_000937E4(s32, s32);
M2C_UNK func_00094378(s32);
s32 func_000943C4(struct Unk_vt_func_000943C4_arg0 **arg0);
void func_000943F8(struct Unk_vt_func_000943F8_arg0 **arg0);
s32 func_000944A0(s32, s32, s32, s32, s32, s32, s32);
void func_000944C8(void);
void func_00094538(s32 arg0);
s32 func_0009464C(s32 (***arg0)());
void func_00094698(void);
M2C_UNK func_000948B0(s32 *, M2C_UNK);
void func_00094A08(s32 *arg0);
M2C_UNK func_000959E8();
s32 func_00095A24(s32, s32);
void func_00095A8C(void);
s32 func_00095C90(s32, s32, s32, s32);
void func_00096078(s32 arg0, s32 arg1, s32 arg2);
s32 func_00096C08(s32, s32, s32);
M2C_UNK func_00096CEC(void *);
void func_00096D60(struct Unk_func_00096D60_0 *arg0);
void func_00096D70(struct Unk_func_00096D70_0 *arg0);
M2C_UNK func_000971CC();
s32 func_0009755C(s32 arg0);
void func_00097564(struct Unk_func_00097564_0 *arg0);
void func_000975D8(struct Unk_func_000975D8_0 *arg0);
s32 func_0009761C(s32 arg0, s32 arg1, s32 arg2);
void func_00097650(struct Unk_func_00097650_0 *arg0);
void func_00097698(struct Unk_func_00097698_0 *arg0);
void func_000976EC(void);
s32 func_000978CC(s32 arg0);
void func_000978D4(struct Unk_func_000978D4_0 *arg0, s32 arg1);
void func_0009790C(struct Unk_func_0009790C_0 *arg0);
void func_0009795C(void);
void func_00097964(struct Unk_func_00097964_0 *arg0, s32 arg1);
s32 func_0009799C(s32 arg0);
void func_00097A58(void);
void func_00097CF0(s32 arg0);
s32 func_000994F4(s32 arg0);
s32 func_000994FC(s32, s32, s32, s32, s32);
void func_000997DC(struct Unk_func_000997DC_0 *arg0, s32 arg1);
void func_0009982C(struct Unk_func_0009982C_0 *arg0, s32 arg1);
M2C_UNK func_00099864();
void func_00099878(struct Unk_func_00099878_0 *arg0);
void func_000998C8(void);
s32 func_0009A1BC(struct Unk_func_0009A1BC_0 *arg0);
void func_0009A1F0(struct Unk_func_00099878_0 *arg0);
void func_0009A220(void);
void func_0009A5D4(void);
s32 func_0009A86C(struct Unk_func_0009A86C_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0009A884(s32 *arg0);
s32 func_0009A8AC(struct Unk_func_0009A8AC_0 *arg0);
void func_0009AC54(struct Unk_func_0009AC54_0 *arg0, M2C_UNK arg1, s32 arg2);
s32 func_0009AC98(struct Unk_func_0009AC98_0 *arg0, M2C_UNK arg1);
s32 func_0009ACD0(struct Unk_func_0009ACD0_0 *arg0, M2C_UNK arg1);
s32 func_0009AED8(struct Unk_func_0009AED8_0 *arg0, M2C_UNK arg1);
s32 func_0009AFD4(struct Unk_func_0009AFD4_0 *arg0);
void func_0009B018(struct Unk_func_0009B018_0 *arg0, M2C_UNK arg1, s32 arg2);
s32 func_0009B164(struct Unk_func_0009B164_0 *arg0, M2C_UNK arg1);
s32 func_0009B32C(s32);
void func_0009B3E4(struct Unk_func_0009B3E4_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_0009B454(struct Unk_func_0009B454_0 *arg0);
void func_0009B460(struct Unk_func_0009B460_0 *arg0);
s32 func_0009B46C(struct Unk_func_0009B46C_0 *arg0);
s32 func_0009BBF8();
s32 func_0009BF18(s32 *arg0, M2C_UNK arg1);
void func_0009CFA0(struct Unk_func_0009CFA0_0 *arg0);
s32 func_0009CFD4(s32, s32, s32, s32);
void func_0009D0E0(struct Unk_func_0009D0E0_0 *arg0, void *arg1);
void func_0009D128(struct Unk_func_0009D128_0 *arg0);
s32 func_0009D30C(s32, s32, s32, s32, s32);
s32 func_0009D394(void);
s32 func_0009D39C(struct Unk_func_0009D39C_0 *arg0);
s32 func_0009DC84(struct Unk_func_0009DC84_0 *arg0);
s32 func_0009DDE8(struct Unk_func_0009DDE8_0 *arg0);
s32 func_0009E0A4(s32, s32);
void func_0009E2E8(s32 arg0);
void func_0009E8DC(void);
void func_0009E8F8(void);
void func_0009F018(void);
void func_0009F138(s32 arg0);
s32 func_0009F46C(struct Unk_vt_func_0009F46C_arg0 **arg0);
void func_0009F65C(s32 arg0, s32 arg1);
M2C_UNK func_0009F738(s32);
void func_0009F7DC(s32 *arg0);
void func_0009F7F8(s32 arg0, s32 arg1);
void func_0009F880(s32 arg0, s32 arg1);
M2C_UNK func_0009F8C4(s32, s32, s32);
s32 func_000A0480(s32, s32, s32, s32, s32);
s32 func_000A052C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000A05B4(s32, M2C_UNK, s32, s32);
s32 func_000A064C(s32 arg0, M2C_UNK arg1, s32 arg2);
void func_000A0AB4(s32 arg0, s32 arg1);
void func_000A0AE0(s32 arg0, s32 arg1);
void func_000A0B0C(void);
void func_000A0D20(struct Unk_func_000A0D20_0 *arg0);
M2C_UNK func_000A0E50(s32);
void func_000A1394(struct Unk_func_000A1394_0 *arg0);
void func_000A16E4(s32 *arg0);
M2C_UNK func_000A17D8(s32, s32, M2C_UNK);
M2C_UNK func_000A1D34(s32, s32);
void func_000A1FDC(struct Unk_func_000A0D20_0 *arg0);
void func_000A1FF8(struct Unk_func_000A1FF8_0 *arg0);
void func_000A2004(struct Unk_func_000A2004_0 *arg0);
void func_000A2018(struct Unk_func_000A2018_0 *arg0);
s32 func_000A2218(s32 *);
s32 func_000A2498(s32 *arg0);
void func_000A2968(s32 **arg0);
s32 func_000A297C(s32 **arg0);
void func_000A2B28(struct Unk_func_000A2B28_0 *arg0);
void func_000A2B34(struct Unk_func_000A2B34_0 *arg0);
void func_000A2B58(struct Unk_func_000A2B28_0 *arg0);
M2C_UNK func_000A2D24(s32);
void func_000A34F4(s32 *arg0);
M2C_UNK func_000A3F18();
s32 func_000A4130(void);
void func_000A4198(void);
void func_000A41B4(void);
void func_000A4FE0(void);
void func_000A4FFC(void);
void func_000A5018(s32 arg0, s32 arg1, s32 arg2);
void func_000A5034(s32 arg0, s32 arg1, s32 arg2);
s32 func_000A58B4(s32, s32, s32, s32);
s32 func_000A5A2C(s32 arg0, struct Unk_func_000A5A2C_1 *arg1, s32 arg2, s32 arg3);
void func_000A5A94(void);
void func_000A5AB0(void);
void func_000A5ACC(s32 arg0, s32 arg1, s32 arg2);
void func_000A5AE8(s32 arg0, s32 arg1, s32 arg2);
s32 func_000A5F78(s32, s32, s32, s32);
s32 func_000A60F0(s32 arg0, struct Unk_func_000A60F0_1 *arg1, s32 arg2, s32 arg3);
void func_000A6158(void);
void func_000A6174(void);
void func_000A6190(s32 arg0, s32 arg1, s32 arg2);
void func_000A61AC(s32 arg0, s32 arg1, s32 arg2);
s32 func_000A6660(s32, s32, s32, s32);
s32 func_000A67D8(s32 arg0, struct Unk_func_000A67D8_1 *arg1, s32 arg2, s32 arg3);
s32 func_000A6858(s32 arg0, struct Unk_func_000A6858_1 *arg1);
s32 func_000A6F1C(s32 arg0, struct Unk_func_000A6F1C_1 *arg1);
void func_000A721C(void);
void func_000A7238(void);
void func_000A7254(void);
void func_000A7270(s32 arg0, s32 arg1, s32 arg2);
void func_000A728C(s32 arg0, s32 arg1, s32 arg2);
void func_000A72A8(s32 arg0, s32 arg1, s32 arg2);
void func_000A80E4(void);
void func_000A8100(void);
void func_000A811C(s32 arg0, s32 arg1, s32 arg2);
void func_000A8138(s32 arg0, s32 arg1, s32 arg2);
s32 func_000A8560(s32, s32, s32, s32);
s32 func_000A86D8(s32 arg0, struct Unk_func_000A86D8_1 *arg1, s32 arg2, s32 arg3);
void func_000A8740(void);
void func_000A875C(void);
void func_000A8778(s32 arg0, s32 arg1, s32 arg2);
void func_000A8794(s32 arg0, s32 arg1, s32 arg2);
s32 func_000A8D38(s32, s32, s32, s32);
s32 func_000A8ECC(s32 arg0, struct Unk_func_000A8ECC_1 *arg1, s32 arg2, s32 arg3);
s32 func_000A9B88(s32, s32, s32, s32);
void func_000A9D4C(s32 arg0, struct Unk_func_000A9D4C_1 *arg1, s32 arg2, s32 arg3);
void func_000A9DAC(void);
void func_000A9DC8(s32 arg0, s32 arg1, s32 arg2);
s32 func_000AA00C(s32 arg0, struct Unk_func_000AA00C_1 *arg1);
void func_000AA040(void);
void func_000AA05C(s32 arg0, s32 arg1, s32 arg2);
s32 func_000AA2C0(s32 arg0, struct Unk_func_000AA2C0_1 *arg1);
void func_000AA2F4(void);
void func_000AA310(s32 arg0, s32 arg1, s32 arg2);
s32 func_000AA344(s32 arg0, struct Unk_func_000AA344_1 *arg1);
void func_000AA378(void);
void func_000AA394(void);
void func_000AA3B0(s32 arg0, s32 arg1, s32 arg2);
void func_000AA3CC(s32 arg0, s32 arg1, s32 arg2);
s32 func_000AA67C(s32, s32, s32, s32);
s32 func_000AA7F4(s32 arg0, struct Unk_func_000AA7F4_1 *arg1, s32 arg2, s32 arg3);
s32 func_000ABBB0(s32, s32, s32);
s32 func_000ABC90(s32, s32, s32);
void func_000ABE44(s32 arg0, s32 arg1);
void func_000ABE60(s32 arg0, s32 arg1);
void func_000ABE7C(s32 arg0, s32 arg1);
void func_000ABE98(s32 arg0, s32 arg1);
s32 func_000ABEB4(s32, s32, s32);
s32 func_000ABF40(s32, s32, s32);
void func_000AC004(s32 arg0, s32 arg1);
void func_000AC020(s32 arg0, s32 arg1);
s32 func_000AC03C(s32, s32, s32);
s32 func_000AC0EC(s32, s32, s32);
void func_000AC224(s32 arg0, s32 arg1);
void func_000AC240(s32 arg0, s32 arg1);
s32 func_000AC25C(s32, s32, s32);
s32 func_000AC30C(s32, s32, s32);
void func_000AC3BC(s32 arg0, s32 arg1);
void func_000AC3D8(s32 arg0, s32 arg1);
s32 func_000AC3F4(s32, s32, s32);
s32 func_000AC4EC(s32, s32, s32);
s32 func_000AC5C0(s32, s32, s32);
void func_000AC724(s32 arg0, s32 arg1);
void func_000AC740(s32 arg0, s32 arg1);
void func_000AC75C(s32 arg0, s32 arg1);
s32 func_000AC778(s32, s32, s32);
s32 func_000AC84C(s32, s32, s32);
void func_000AC9E4(s32 arg0, s32 arg1);
void func_000ACA00(s32 arg0, s32 arg1);
s32 func_000ACA1C(s32, s32, s32);
void func_000ACACC(s32 arg0, s32 arg1);
s32 func_000ACAE8(s32, s32, s32);
void func_000ACC14(s32 arg0, s32 arg1);
void func_000ACC30(void);
M2C_UNK func_000ACC4C();
s32 func_000ACD98(s32, s32, s32);
s32 func_000ACEE4(s32, s32, s32);
void func_000AD0EC(s32 arg0, s32 arg1);
void func_000AD108(s32 arg0, s32 arg1);
s32 func_000AD124(s32, s32, s32);
s32 func_000AD268(s32, s32, s32);
void func_000AD45C(s32 arg0, s32 arg1);
void func_000AD478(s32 arg0, s32 arg1);
M2C_UNK func_000AE270();
void func_000AE2F0(void);
void func_000AE30C(void);
s32 func_000AE3C8(s32, s32, s32, s32);
void func_000AE4A0(s32 arg0, s32 arg1, s32 arg2);
void func_000AE4BC(s32 arg0, s32 arg1, s32 arg2);
void func_000AE658(void);
s32 func_000AE674(void);
s32 func_000AE67C(void);
M2C_UNK func_000AE6E4(void ****, M2C_UNK);
M2C_UNK func_000AE750(void ****, M2C_UNK);
M2C_UNK func_000AF080();
s32 func_000AF24C(void);
s32 func_000AF390(void ****arg0, s32 arg1);
s32 func_000AF5C4(void ****arg0);
s32 func_000AF5FC(void ****arg0);
s32 func_000AF634(void ****arg0);
s32 func_000AF654(void ****arg0);
s32 func_000AF6B0(void);
s32 func_000AF6D0(void ****arg0);
s32 func_000AF940(s32);
M2C_UNK func_000AFB3C(s32);
s32 func_000AFB7C(s32, s32);
s32 func_000B0718(void **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
void func_000B0AA0(s32 arg0);
s32 func_000B0B44(s32, s32);
s32 func_000B0BB4(s32);
s32 func_000B19F0(s32 arg0, s32 arg1);
s32 func_000B1A94(s32 arg0);
s32 func_000B1AB4(s32 arg0);
s32 func_000B1F08(s32);
M2C_UNK func_000B209C(s32);
s32 func_000B20DC(void *arg0);
s32 func_000B2104(struct Unk_func_000B2104_0 *arg0);
s32 func_000B2114(void *arg0);
s32 func_000B2778(s32);
s32 func_000B2848(struct Unk_func_0001F6B0_0 *arg0);
s32 func_000B2858(s32);
s32 func_000B2970(s32);
s32 func_000B2AF4(s32);
s32 func_000B3E9C(void);
s32 func_000B3EA4(void);
s32 func_000B4160(s32);
M2C_UNK func_000B42B0(s32);
s32 func_000B42F0(void *arg0);
s32 func_000B4318(struct Unk_func_000B4318_0 *arg0);
s32 func_000B4810(s32, s32);
s32 func_000B4960(struct Unk_func_000B4960_0 *arg0);
s32 func_000B4970(struct Unk_func_000B4970_0 *arg0);
s32 func_000B4C4C(s32);
s32 func_000B56EC(s32 arg0);
s32 func_000B5720(void);
s32 func_000B7898(s32);
M2C_UNK func_000B79B4(s32);
s32 func_000B79F4(void *arg0);
s32 func_000B7A1C(struct Unk_func_000B7A1C_0 *arg0);
s32 func_000B7A28(void *arg0);
s32 func_000B7A50(struct Unk_func_000227B0_0 *arg0);
M2C_UNK func_000B9270(s32, M2C_UNK);
s32 func_000B9AC0(struct Unk_func_000B9AC0_0 *arg0, struct Unk_func_000B9AC0_1 *arg1);
s32 func_000B9AE4(void);
s32 func_000BB31C(void);
s32 func_000BB324(void);
s32 func_000BB6A0(s32);
M2C_UNK func_000BB7CC(s32);
s32 func_000BB80C(void *arg0);
s32 func_000BB834(struct Unk_func_000BB834_0 *arg0);
s32 func_000BB844(void *arg0);
s32 func_000BB9D8(struct Unk_func_00022BE8_0 *arg0);
void func_000BB9E8(void *arg0, s32 arg1);
s32 *func_000BBB80();
s32 func_000BC3D4(void);
void func_000BD264(s32 arg0, s32 arg1);
void func_000BD298(struct Unk_func_000BD298_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_000BDFC0(struct Unk_func_000BDFC0_0 *arg0, M2C_UNK arg1);
void func_000BE270(struct Unk_func_000BE270_0 *arg0, s32 *arg1, s32 *arg2);
void func_000BE69C(s32 arg0);
void func_000BE6D4(struct Unk_func_000BE6D4_0 *arg0);
s32 func_000BEAE4(struct Unk_func_000BEAE4_0 *arg0, s32 arg1);
s32 func_000BED34(s32 arg0, M2C_UNK arg1);
M2C_UNK func_000BED5C(s32, M2C_UNK);
void func_000BEED0(struct Unk_func_000BEED0_0 *arg0, s32 arg1);
void func_000BEED8(struct Unk_func_000BEED8_0 *arg0, s32 arg1);
void func_000BEEE0(struct Unk_func_000BEEE0_0 *arg0, s32 arg1);
s32 func_000BEFFC(s32, s32, s32, s32, s32);
s32 func_000BF15C(s32, s32, s32);
void func_000BF224(void ****arg0, struct Unk_func_000BF224_1 *arg1);
M2C_UNK func_000BF398();
s32 func_000BF3D0(struct Unk_func_000BF3D0_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000BF47C(s32 *arg0);
M2C_UNK func_000BF908(s32, M2C_UNK);
void func_000BF9C4(void **arg0);
void func_000BFA88(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_000C12D0(s32, s32);
void func_000C1694(s32 arg0, struct Unk_func_000C1694_1 *arg1, struct Unk_func_000C1694_2 *arg2);
s32 func_000C2BF4(s32, s32, s32, s32);
void func_000C47C8(s32 arg0);
void func_000C4800(s32 arg0);
void func_000C481C(s32 arg0, s32 arg1);
void func_000C48EC(s32 *arg0, s32 arg1);
s32 func_000C48F4(s32, s32, s32, s32, s32);
void func_000C4D2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000C4D68(s32 arg0, s32 arg1, s32 *arg2, s32 arg3);
void func_000C4DEC(s32 arg0);
void func_000C51BC(struct Unk_func_000C51BC_0 *arg0);
void func_000C5708(s32 arg0);
M2C_UNK func_000C57D0(s32);
s32 func_000C580C(s32, s32);
void func_000C5908(s32 arg0);
void func_000C5A24(s32 arg0);
void func_000C5B40(s32 arg0);
void func_000C6454(struct Unk_func_000C6454_0 *arg0);
s32 func_000C64BC(struct Unk_func_000C64BC_0 *arg0, struct Unk_func_000C64BC_1 *arg1);
void func_000C6560(void);
void func_000C7138(struct Unk_func_000C7138_0 *arg0, s32 arg1);
void func_000C7190(struct Unk_func_000BF3D0_0 *arg0);
void func_000C71C4(struct Unk_func_000C71C4_0 *arg0);
M2C_UNK func_000C7230();
void *func_000C74F0();
void *func_000C7560();
s32 func_000C7568(void);
void func_000C77E4(struct Unk_func_000C7138_0 *arg0, s32 arg1);
M2C_UNK func_000C7854(s32);
M2C_UNK func_000C7E78(s32, M2C_UNK, void *);
M2C_UNK func_000C7EA0(s32, M2C_UNK);
void **func_000C8334(struct Unk_vt_func_000C8334_arg0 **arg0);
void **func_000C8374(void **arg0);
void func_000C842C(struct Unk_vt_func_000C842C_arg0 **arg0, void **arg1);
s32 func_000C859C(void **arg0);
void func_000C86E8(s32 **arg0, s32 arg1);
void func_000C8B54(s32 ***arg0, s32 arg1);
void func_000C8BB8(s32 arg0, struct Unk_func_000C8BB8_1 *arg1);
void func_000C8C18(s32 ***arg0, s32 arg1);
s32 func_000C902C(struct Unk_vt_func_000C902C_arg0 **arg0);
void func_000C9038(struct Unk_vt_func_000C9038_arg0 **arg0, s32 arg1);
M2C_UNK func_000C90D4(void *, s32, void ****, void *);
void func_000C932C(struct Unk_func_000C932C_0 *arg0);
M2C_UNK func_000C9644(s32);
s32 func_000C996C(struct Unk_func_000C996C_0 *arg0);
M2C_UNK func_000C9994(void *, s32);
s32 func_000C9A60(s32, s32, s32);
void func_000C9AB0(void **arg0, s32 *arg1, s32 *arg2, void **arg3);
void func_000C9AEC(s32 *arg0, s32 arg1);
void func_000C9C24(s32 *arg0, s32 arg1);
s32 func_000C9C60(s32, s32, s32);
void func_000C9CD0(void **arg0, s32 *arg1, s32 *arg2, void **arg3);
s32 func_000C9D10(s32, s32, s32);
void func_000C9D80(void **arg0, s32 *arg1, s32 *arg2, void **arg3);
s32 func_000C9DC0(s32);
s32 func_000C9DCC();
void func_000C9DD8(void **arg0, s32 arg1);
void func_000C9DEC(void **arg0, s32 arg1);
s32 func_000C9E00(struct Unk_vt_func_000C9E00_arg0 **arg0);
s32 func_000C9E10();
s32 func_000C9E20(struct Unk_vt_func_000C9E20_arg0 **arg0);
s32 func_000C9E30(struct Unk_vt_func_000C9E30_arg0 **arg0);
s32 func_000C9E40(struct Unk_vt_func_000C9E40_arg0 **arg0);
s32 func_000C9E54(struct Unk_vt_func_000C9E54_arg0 **arg0);
s32 func_000C9E64(struct Unk_vt_func_000C9E64_arg0 **arg0);
M2C_UNK func_000C9E70();
void func_000C9ECC(struct Unk_vt_func_000C9ECC_arg0 **arg0, s32 arg1);
s32 func_000C9ED8(struct Unk_vt_func_000C9ED8_arg0 **arg0);
s32 func_000C9EE4(struct Unk_vt_func_000C9EE4_arg0 **arg0);
s32 func_000C9EF0(void **arg0, s32 arg1);
s32 func_000C9F00(struct Unk_vt_func_000C9F00_arg0 **arg0);
void func_000C9F0C(struct Unk_vt_func_000C9F0C_arg0 **arg0, s32 arg1);
s32 func_000C9F18(struct Unk_vt_func_000C9F18_arg0 **arg0);
s32 func_000C9FDC(struct Unk_vt_func_000C9FDC_arg0 **arg0);
void func_000C9FE8(struct Unk_vt_func_000C9FE8_arg0 **arg0, s32 arg1);
s32 func_000C9FF4(struct Unk_vt_func_000C9FF4_arg0 **arg0);
void func_000CA000(struct Unk_vt_func_000CA000_arg0 **arg0, s32 arg1);
s32 **func_000CA00C();
M2C_UNK func_000CA018(s32, M2C_UNK);
s32 func_000CA024(struct Unk_vt_func_000CA024_arg0 **arg0);
s32 func_000CA098(struct Unk_vt_func_000CA098_arg0 **arg0);
void func_000CA0A4(struct Unk_vt_func_000CA0A4_arg0 **arg0, s32 arg1);
s32 func_000CA0B0(s32, s32);
void func_000CA128(s32 **arg0);
void func_000CA19C(void);
M2C_UNK func_000CA1A4();
M2C_UNK func_000CA430(s32 ***, s32);
s32 func_000CA568(s32, s32);
void func_000CA720(s32 arg0);
M2C_UNK func_000CA73C(s32);
M2C_UNK func_000CA758();
M2C_UNK func_000CAD58();
void func_000CAFF8(void ***arg0, s32 arg1);
void func_000CB0F4(s32 ***arg0);
s32 func_000CB1F0(s32, s32, s32);
M2C_UNK func_000CB274();
M2C_UNK func_000CB520(M2C_UNK, M2C_UNK);
void func_000CB768(void ****arg0);
M2C_UNK func_000CB7F8(s32);
s32 func_000CBC8C(s32, s32);
void func_000CBCF4(void ****arg0);
void func_000CBD08(void ****arg0);
M2C_UNK func_000CBD1C(void *);
void func_000CBD24(struct Unk_func_000CBD24_0 *arg0);
void func_000CBD2C(struct Unk_func_000CBD2C_0 *arg0, s32 arg1, s32 arg2);
s32 func_000CBECC(struct Unk_vt_func_000CBECC_arg0 **arg0);
void **func_000CBED8(void ****);
s32 func_000CBF3C(struct Unk_vt_func_000CBF3C_arg0 **arg0);
s32 func_000CBF48(struct Unk_vt_func_000CBF48_arg0 **arg0);
void func_000CBF54(void **arg0);
s32 func_000CBF70(struct Unk_vt_func_000CBF70_arg0 **arg0);
s32 func_000CBF7C(struct Unk_vt_func_000CBF7C_arg0 **arg0);
s32 func_000CBF88(s32, s32, s32, s32, s32);
M2C_UNK func_000CC248();
M2C_UNK func_000CC464();
void func_000CC4BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000CC55C(struct Unk_vt_func_000CC55C_arg0 **arg0);
s32 func_000CC568(void ****arg0);
void func_000CC590(void);
M2C_UNK func_000CCA4C();
s32 func_000CCAE0(s32, M2C_UNK, M2C_UNK);
s32 func_000CCB28(s32, M2C_UNK, M2C_UNK);
void func_000CCCDC(void **arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4);
void func_000CCCF4(struct Unk_vt_func_000CCCF4_arg0 **arg0, s32 arg1);
s32 func_000CCD00(void);
s32 func_000CCD08(void);
s32 func_000CCD10(void);
M2C_UNK func_000CCD18(s32, M2C_UNK);
s32 func_000CCE14(M2C_UNK, s32);
s32 func_000CD494(struct Unk_vt_func_000CD494_arg0 **arg0);
M2C_UNK func_000CD980();
M2C_UNK func_000CD9B4();
s32 func_000CE200(struct Unk_func_000CE200_0 *arg0, s32 *arg1);
M2C_UNK func_000CEA60();
M2C_UNK func_000CEBB8();
s32 func_000CEE74(s32, s32);
s32 func_000D0500(s32 arg0);
s32 func_000D08C4(void);
s32 func_000D08E4(void);
s32 func_000D0EE8(s32);
M2C_UNK func_000D1030(s32);
s32 func_000D1070(void *arg0);
s32 func_000D1098(struct Unk_func_000D1098_0 *arg0);
s32 func_000D10A8(void *arg0);
s32 func_000D122C(struct Unk_func_000202C8_0 *arg0);
s32 func_000D223C(s32);
s32 func_000D22A4(void **);
M2C_UNK func_000D2350(void **, s32);
s32 func_000D2834();
s32 func_000D295C(void **, M2C_UNK, M2C_UNK);
s32 func_000D2F70(void);
s32 func_000D2F78(void);
s32 func_000D2FA0(void);
s32 func_000D2FA8(void);
s32 func_000D2FB0(void);
s32 func_000D2FB8(void);
s32 func_000D2FC0(void);
s32 func_000D2FC8(s32 arg0, M2C_UNK arg1);
s32 func_000D3088(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000D30E8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_000D3148(void);
s32 func_000D3164(void);
s32 func_000D316C(void);
M2C_UNK func_000D409C(void *);
s32 func_000D4170(s32, s32, s32, s32, s32);
s32 func_000D4268(s32, s32, s32, s32);
s32 func_000D4428(s32, s32, s32);
s32 func_000D45B0(s32 arg0, struct Unk_func_000D45B0_1 *arg1);
s32 func_000D45F4(s32 arg0, s32 arg1, M2C_UNK arg2);
s32 func_000D4718(s32 *arg0, struct Unk_func_000D4718_1 *arg1);
M2C_UNK func_000D484C();
s32 func_000D488C(void);
s32 func_000D4B18(s32 arg0, s32 arg1, s32 arg2);
void func_000D4DDC(void);
void func_000D4F2C(s32 arg0);
void func_000D5268(s32 arg0);
M2C_UNK func_000D5288(void *);
M2C_UNK func_000D536C(void *);
void func_000D5418(struct Unk_func_000D5418_0 *arg0);
void func_000D5524(struct Unk_func_000D5524_0 *arg0, s32 arg1);
M2C_UNK func_000D7164(M2C_UNK, s32);
void func_000D77C4(s32 arg0, M2C_UNK arg1);
void func_000D78B0(s32 arg0, s32 arg1);
void func_000D7A24(s32 arg0, s32 arg1);
s32 func_000DAC4C(void);
void func_000DBD14(void);
void func_000DCE98(struct Unk_func_000DCE98_0 *arg0);
void func_000E0190(struct Unk_func_000E0190_0 *arg0);
void func_000E1C70(struct Unk_func_000E1C70_0 *arg0);
void func_000E2548(struct Unk_vt_func_000E2548_arg0 **arg0);
void func_000E25A0(void **arg0, s32 arg1);
void func_000E2734(void **arg0);
void func_000E3AD4(void **arg0);
s32 func_000E3B00(void);
void func_000E3B08(void);
void func_000E4954(void);
void func_000E495C(void **arg0);
void *func_000E4B08(void *arg0, s32 arg1);
void *func_000E4B48(void *arg0, s32 arg1);
void func_000E5EC0(void);
void func_000E6068(struct Unk_func_000E6068_0 *arg0);
s32 func_000E6258(s32 arg0, s32 arg1);
s32 func_000E6298(s32, s32, s32, s32, s32, s32);
void func_000E6308(s32 arg0, M2C_UNK arg1, s32 arg2);
void func_000E6330(s32 arg0, s32 arg1);
M2C_UNK func_000E6350();
M2C_UNK func_000E63A8(void **);
M2C_UNK func_000E643C();
void func_000E6488(struct Unk_func_000E6488_0 *arg0);
s32 func_000E67D4(void);
void func_000E7960(struct Unk_func_000E7960_0 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4);
void func_000E7B40(void);
s32 func_000EAE64(s32 ***arg0);
void func_000EAE74(s32 **arg0, s32 arg1);
void func_000EAEB0(s32 **arg0);
s32 func_000EAEDC(s32 **arg0, s32 arg1);
s32 func_000EAF1C(s32 **arg0);
void func_000EAF58(s32 **arg0, s32 arg1);
s32 func_000EAF94(s32 **arg0);
void func_000EAFD0(s32 arg0, s32 arg1);
void func_000EB014(s32 arg0, s32 arg1);
void func_000EB05C(s32 arg0, s32 **arg1);
M2C_UNK func_000EB0B0(s32, s32, s32);
void func_000EB10C(s32 arg0, M2C_UNK arg1, s32 arg2);
s32 func_000EB1C0(s32 arg0, s32 arg1, s32 **arg2);
M2C_UNK func_000EB22C(s32, M2C_UNK, s32, s32);
void func_000EB2A0(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_000EB2FC(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000EB358(s32 **arg0);
s32 func_000EB39C(s32 **arg0);
s32 func_000EB3E0(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_000EB44C(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_000EB4B8(s32 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_000EB534(s32 **arg0);
void func_000EB574(s32 **arg0);
s32 func_000EB5B4(s32 **arg0);
s32 func_000EB604(s32 **arg0);
void func_000EB648(s32 *arg0);
void func_000EB664(s32 *arg0);
void func_000EB680(s32 *arg0);
void func_000EB69C(s32 *arg0);
void func_000EB6B8(s32 *arg0);
void func_000EB6D4(s32 *arg0);
void func_000EB6F0(s32 **arg0, M2C_UNK arg1);
void func_000EB734(struct Unk_vt_func_000EB734_arg0 **arg0, s32 arg1);
s32 func_000EB740(struct Unk_vt_func_000EB740_arg0 **arg0);
s32 func_000EB74C(s32 **arg0, M2C_UNK arg1);
s32 func_000EB7A0(s32 **arg0, M2C_UNK arg1);
void func_000EB7F4(s32 **arg0, M2C_UNK arg1);
s32 func_000EB8AC(s32 **arg0);
s32 func_000EB8F0(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_000EB9B0(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000EBA14(s32 **arg0, M2C_UNK arg1);
s32 func_000EBA68(s32 **arg0, M2C_UNK arg1, M2C_UNK arg2);
M2C_UNK func_000EBACC();
s32 func_000EBB5C();
M2C_UNK func_000EBCD4(s32, M2C_UNK, s32 *, s32);
void func_000EBE7C(s32 arg0, M2C_UNK arg1, s32 *arg2);
void func_000EBED0(s32 arg0);
M2C_UNK func_000EBEEC();
void func_000EBFFC(struct Unk_func_000EBFFC_0 *arg0, s32 arg1, s32 arg2);
s32 func_000EC008(void *);
s32 func_000EC024(void *);
s32 func_000EC040(void *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_000EC158(void *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_000EC1C0(s32, s32, s32, s32, s32);
void func_000EC280(struct Unk_func_000EC280_0 *arg0);
void func_000EC290(struct Unk_func_000EC290_0 *arg0);
s32 func_000EC2A0(void *);
M2C_UNK func_000EC2AC(s32);
M2C_UNK func_000EC2C8(s32);
M2C_UNK func_000EC2D4(s32);
M2C_UNK func_000EC2F0(s32);
M2C_UNK func_000EC2FC(s32);
M2C_UNK func_000EC318(s32);
M2C_UNK func_000EC324(void *, M2C_UNK);
M2C_UNK func_000EC350(void *, M2C_UNK);
void func_000EC358(s32 arg0);
s32 func_000EC374(void *);
s32 func_000EC37C(void *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_000EC3DC(void *, s32, s32, s32);
M2C_UNK func_000EC478(void *);
s32 func_000EC4C4(void *, s32, s32, s32);
void func_000ECEE4(s32 arg0);
void func_000ECF04(s32 arg0);
void func_000ECF20(struct Unk_func_000ECF20_0 *arg0);
s32 func_000ECF7C(struct Unk_vt_func_000ECF7C_arg0 **arg0, s32 arg1);
void func_000ED07C(s32 arg0, s32 arg1, s32 arg2);
void func_000ED0CC(struct Unk_func_000ED0CC_0 *arg0, s32 arg1);
void func_000ED178(struct Unk_func_000EC280_0 *arg0);
s32 func_000EE138(struct Unk_func_000EE138_0 *arg0);
M2C_UNK func_000EE174();
s32 func_000EE1FC(struct Unk_func_000EE1FC_0 *arg0, s32 arg1, s32 arg2);
M2C_UNK func_000EE45C(void *, M2C_UNK, M2C_UNK);
M2C_UNK func_000EE55C(void *);
s32 func_000EE5C0(struct Unk_func_000EE5C0_0 *arg0);
M2C_UNK func_000EE60C(void *);
void func_000EEF40(struct Unk_func_000EEF40_0 *arg0, s32 arg1);
void func_000EEF48(struct Unk_vt_func_000EEF48_arg0 **arg0, s32 arg1);
s32 func_000EEF54(struct Unk_vt_func_000EEF54_arg0 **arg0);
s32 func_000EEF60(struct Unk_func_000EEF60_0 *arg0);
s32 func_000EF068(struct Unk_func_000EF068_0 *arg0, s32 arg1, s32 *arg2);
void func_000EF124(s32 arg0);
void func_000EF140(void);
void func_000EF15C(struct Unk_func_000EC280_0 *arg0);
s32 func_000EF178(struct Unk_func_000EF178_0 *arg0);
s32 func_000EF7A4(void);
s32 func_000EF7AC(void);
s32 func_000EF7B4(void);
s32 func_000EFA90(struct Unk_func_000EFA90_0 *arg0, s32 arg1);
void func_000EFBB8(struct Unk_func_000EFBB8_0 *arg0, s32 arg1);
void func_000EFBC0(s32 *arg0);
s32 func_000EFBE8(s32 *, s32, M2C_UNK);
s32 func_000EFC60(s32 *arg0, s32 arg1, s32 arg2, M2C_UNK arg3);
void func_000EFCCC(s32 *arg0, s32 arg1, s32 arg2);
s32 func_000EFD20(s32 *arg0, s32 arg1, s32 arg2);
M2C_UNK func_000EFDCC(s32 *, s32, M2C_UNK);
void func_000EFE44(s32 *arg0, s32 arg1, s32 arg2, M2C_UNK arg3);
void func_000EFE94(s32 *arg0, s32 arg1, s32 arg2);
void func_000EFEE8(s32 *arg0, s32 arg1, s32 arg2);
M2C_UNK func_000F025C(s32);
s32 func_000F0710(s32, s32, s32, s32, s32);
void func_000F07F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK func_000F0C2C(s32, M2C_UNK, s32 *, s32);
void func_000F0D28(s32 arg0, M2C_UNK arg1, s32 *arg2);
M2C_UNK func_000F0F48(s32);
void func_000F1234(struct Unk_func_000F1234_0 *arg0);
void func_000F1420(s32 *arg0, s32 arg1);
M2C_UNK func_000F151C();
s32 func_000F1594(s32, s32, s32);
s32 func_000F1624(s32 arg0, s32 arg1);
void func_000F16C8(void);
void func_000F16E4(struct Unk_func_000F16E4_0 *arg0);
M2C_UNK func_000F1718(s32, M2C_UNK, M2C_UNK);
s32 func_000F1DEC(struct Unk_func_000F1DEC_0 *arg0);
M2C_UNK *func_000F1E00(void);
M2C_UNK *func_000F1E0C(void);
void func_000F1EAC(s32 arg0);
s32 func_000F1EC8(void);
s32 func_000F1EEC(void);
s32 func_000F1EF4(s32, s32);
s32 func_000F1F44(s32, s32);
s32 func_000F20C8(s32, s32);
void func_000F2148(void);
void func_000F2150(struct Unk_func_000F2150_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000F2160(struct Unk_func_000F2160_0 *arg0);
s32 func_000F2168(s32 arg0, struct Unk_func_000F2168_1 *arg1, s32 arg2);
s32 func_000F218C(s32 arg0, struct Unk_func_000F218C_1 *arg1);
s32 func_000F21AC(s32 arg0, struct Unk_func_000F21AC_1 *arg1);
s32 func_000F21CC(s32 arg0, s32 *arg1);
s32 func_000F21EC(s32 arg0, struct Unk_func_000F21EC_1 *arg1);
u8 func_000F220C(s32 arg0, struct Unk_func_000F220C_1 *arg1);
u8 func_000F222C(s32 arg0, struct Unk_func_000F222C_1 *arg1);
u8 func_000F224C(s32 arg0, struct Unk_func_000F224C_1 *arg1);
u8 func_000F226C(s32 arg0, struct Unk_func_000F226C_1 *arg1);
u8 func_000F228C(s32 arg0, struct Unk_func_000F228C_1 *arg1);
u8 func_000F2540(s32 arg0, struct Unk_func_000F2540_1 *arg1);
s32 func_000F2560(s32 arg0, s32 arg1);
s32 func_000F2578(s32 arg0, struct Unk_func_000F2578_1 *arg1, void **arg2);
s32 func_000F2674(s32 arg0, struct Unk_func_000F2674_1 *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7, s32 *arg_sp0, s32 *arg_sp4);
s32 func_000F276C(s32 arg0, struct Unk_func_000F276C_1 *arg1, s32 *arg2);
s32 func_000F27B0(s32 arg0, struct Unk_func_000F27B0_1 *arg1, s32 *arg2);
s32 func_000F2860(s32 arg0, struct Unk_func_000F2860_1 *arg1, s32 *arg2);
s32 func_000F288C(s32 arg0, struct Unk_func_000F288C_1 *arg1, s32 *arg2);
s32 func_000F2C38(s32 arg0, struct Unk_func_000F2C38_1 *arg1, void **arg2);
s32 func_000F2C7C(s32 arg0, struct Unk_func_000F2C7C_1 *arg1, s32 *arg2, s32 *arg3);
s32 func_000F2CCC(s32 arg0, struct Unk_func_000F2CCC_1 *arg1, s32 *arg2, s32 *arg3, void **arg4);
s32 func_000F2D58(s32 arg0, struct Unk_func_000F2D58_1 *arg1, s32 *arg2);
u8 func_000F2D84(struct Unk_func_000F2D84_0 *arg0);
s32 func_000F2D98(struct Unk_func_000F2D98_0 *arg0);
s32 func_000F2DAC(struct Unk_func_000F2DAC_0 *arg0);
s32 func_000F2DC0(s32 arg0);
M2C_UNK func_000F2F48();
s32 func_000F2FDC(s32 arg0, s32 arg1);
M2C_UNK func_000F3018();
void func_000F3060(s32 arg0, s32 arg1);
void func_000F3090(struct Unk_func_000F3090_0 *arg0);
void func_000F3128(struct Unk_func_000F3128_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000F3138(struct Unk_func_000F3138_0 *arg0);
void func_000F3A44(struct Unk_func_000F3A44_0 *arg0, s32 arg1);
void func_000F3A54(struct Unk_func_000F3A54_0 *arg0);
s32 func_000F3C54(s32);
void *func_000F503C();
s32 func_000F53B4(s32, s32, s32, s32);
void func_000F5C34(struct Unk_func_000F5C34_0 *arg0);
M2C_UNK func_000F70A0();
void func_000F72F0(struct Unk_func_000F72F0_0 *arg0);
void func_000F7300(struct Unk_func_000F7300_0 *arg0);
void func_000F7C94(struct Unk_func_000F7C94_0 *arg0);
void func_000F7CA4(struct Unk_func_000F7CA4_0 *arg0);
void func_000F7CB4(struct Unk_func_000F7CB4_0 *arg0);
void func_000F7CC4(struct Unk_func_000F7CC4_0 *arg0);
void func_000F7CD4(struct Unk_func_000F7CD4_0 *arg0);
s32 func_000FD6B4(struct Unk_func_000FD6B4_0 *arg0);
s32 func_000FD6E0(struct Unk_func_000FD6E0_0 *arg0);
s32 func_000FD70C(struct Unk_func_000FD70C_0 *arg0);
void func_000FD724(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000FD770(s32, s32);
s32 func_00100C48(s32);
void func_00101F08(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_00101F44(s32, s32, s32, s32);
s32 func_001025D0(struct Unk_func_001025D0_0 *arg0, s32 arg1);
void func_00102740(struct Unk_func_00102740_0 *arg0, s32 arg1, s32 arg2);
void func_001027B8(s32 arg0, struct Unk_func_001027B8_1 *arg1, M2C_UNK arg2);
void func_001027E0(void);
void func_001027E8(struct Unk_func_001027E8_0 *arg0, s8 arg1, s32 arg2);
void func_001027F4(struct Unk_func_001027F4_0 *arg0, s32 arg1, s32 arg2);
s32 func_00102FA4(void);
s32 func_0010B5F0(void);
void func_0010BB48(void);
M2C_UNK func_0010BB64();
s32 func_0010BB8C(s32);
void func_0010BBBC(s32 arg0);
M2C_UNK func_0010C3E0(M2C_UNK, s32, s32);
s32 func_0010C4EC(s32, s32, s32);
void func_0010C5A4(void);
void func_0010C5E0(void);
s32 func_0010C61C(s32 *arg0, s32 arg1);
s32 func_0010CB14(s32 arg0, struct Unk_func_0010CB14_1 *arg1);
void func_00110A30(s32 arg0);
void func_00110A50(void);
M2C_UNK func_00110AF8(s32, s32);
s32 func_00110EB0(s32, s32);
s32 func_00111290(s32, s32);
M2C_UNK func_00111398(s32, s32, M2C_UNK);
M2C_UNK func_00111438(s32);
void func_00111444(s32 arg0, M2C_UNK arg1);
void func_00111484(void);
s32 func_00111A00(s32, s32);
void func_00111AB8(struct Unk_func_00111AB8_0 *arg0, struct Unk_func_00111AB8_1 *arg1);
void func_00111E54(s32 arg0, s32 arg1);
void func_00113320(struct Unk_func_00113320_0 *arg0);
s32 func_001133C4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK func_001134E8(s32, s16);
s32 func_001135A8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
u32 func_001136F0(s32 arg0);
s32 func_001136FC(u32 arg0);
s32 func_00113B40(s32 arg0);
void func_00113D18(void);
void func_00113D34(void);
void func_00113D50(s32 arg0);
void func_00113D6C(s32 arg0);
void func_00113D88(s32 arg0);
void func_00113DA4(s32 arg0);
void func_00113DC0(s32 arg0);
void func_00113DDC(s32 arg0);
void func_00113DF8(s32 arg0);
void func_00113E14(s32 arg0);
void func_00113E30(s32 arg0);
void func_00113E4C(s32 arg0, s32 arg1);
M2C_UNK func_00113E9C(s32);
M2C_UNK func_001142EC(s32);
void func_001145AC(s32 arg0, s32 arg1);
M2C_UNK func_001145FC(s32);
M2C_UNK func_00114A88(s32);
void func_00114D58(s32 arg0, s32 arg1);
M2C_UNK func_00114DA8(s32);
M2C_UNK func_0011524C(s32);
M2C_UNK func_0011552C();
void func_00115540(s32 arg0);
void func_0011554C(s32 arg0);
M2C_UNK func_00115558();
M2C_UNK func_00115708(s32);
M2C_UNK func_00115C0C(s32);
s32 func_0011A154(s32, s32, s32);
s32 func_0011A34C(s32);
s32 func_0011A4E0(s32, s32, s32);
s32 func_0011A618(void);
void func_0011A620(void);
s32 func_0011A63C(void);
s32 func_0011A644(void);
s32 func_0011A64C(void);
s32 func_0011A654(void);
s32 func_0011A65C(void);
s32 func_0011A664(void);
s32 func_0011A66C(void);
s32 func_0011A674(void);
s32 func_0011A67C(void);
void func_0011A6DC(void);
void func_0011A6F8(void);
s32 func_0011A714(void);
s32 func_0011A72C(void);
M2C_UNK *get_crc_table(void);
M2C_UNK inflateReset(s32);
s32 inflateSyncPoint(struct Unk_inflateSyncPoint_0 *arg0);
s32 module_reboot_before(void);
s32 module_start(void);
s32 module_stop(void);
void png_do_chop(struct Unk_png_do_chop_0 *arg0, u8 *arg1);
void png_do_swap(struct Unk_png_do_swap_0 *arg0, void *arg1);
u8 png_get_mmx_bitdepth_threshold(struct Unk_png_get_mmx_bitdepth_threshold_0 *arg0);
s32 png_get_mmx_rowbytes_threshold(struct Unk_png_get_mmx_rowbytes_threshold_0 *arg0);
s32 png_get_pHYs(s32 arg0, struct Unk_png_get_pHYs_1 *arg1, s32 *arg2, s32 *arg3, s32 *arg4);
s32 png_get_user_height_max(struct Unk_png_get_user_height_max_0 *arg0);
s32 png_get_user_width_max(struct Unk_png_get_user_width_max_0 *arg0);
void png_set_bgr(struct Unk_png_set_bgr_0 *arg0);
s32 png_set_filler(s32, s32, s32);
s32 png_set_interlace_handling(struct Unk_png_set_interlace_handling_0 *arg0);
void png_set_invert_alpha(struct Unk_png_set_invert_alpha_0 *arg0);
void png_set_invert_mono(struct Unk_png_set_invert_mono_0 *arg0);
void png_set_packing(struct Unk_png_set_packing_0 *arg0);
void png_set_packswap(struct Unk_png_set_packswap_0 *arg0);
void png_set_read_status_fn(struct Unk_png_set_read_status_fn_0 *arg0, s32 arg1);
void png_set_swap(struct Unk_png_set_swap_0 *arg0);
void png_set_swap_alpha(struct Unk_png_set_swap_alpha_0 *arg0);
void sceHVNetfront_Module_0146B875(struct Unk_vt_sceHVNetfront_Module_0146B875_arg0 **arg0);
s32 sceHVNetfront_Module_015932EE(s32, s32, s32, s32);
void sceHVNetfront_Module_0316CB2F(void);
M2C_UNK sceHVNetfront_Module_03D34A77(s32, s32, M2C_UNK);
void sceHVNetfront_Module_05F33A6C(struct Unk_sceHVNetfront_Module_05F33A6C_0 *arg0, s32 arg1);
s32 sceHVNetfront_Module_07C7E121(void);
s32 sceHVNetfront_Module_07F2F8A0(s32 **arg0);
void sceHVNetfront_Module_081DEF97(void);
M2C_UNK sceHVNetfront_Module_08549708(s32);
s32 *sceHVNetfront_Module_08AC1E83(s32 arg0, s32 arg1);
void sceHVNetfront_Module_092E2C73(void **arg0);
M2C_UNK sceHVNetfront_Module_09FA691C(void *);
s32 sceHVNetfront_Module_0A399803(s32 arg0, M2C_UNK arg1);
void sceHVNetfront_Module_0ABF34A9(void **arg0);
s32 sceHVNetfront_Module_0C2B2F3B(struct Unk_vt_sceHVNetfront_Module_0C2B2F3B_arg0 **arg0);
void sceHVNetfront_Module_0C3F76E2(s32 *arg0, s32 arg1);
s32 sceHVNetfront_Module_0C8E766E(s32, s32);
M2C_UNK sceHVNetfront_Module_0D525122(s32);
s32 sceHVNetfront_Module_0DCCBB6F(s32, s32, s32, s32, s32);
M2C_UNK sceHVNetfront_Module_0E1F569F(s32, M2C_UNK);
M2C_UNK sceHVNetfront_Module_0EB196AD(s32);
s32 sceHVNetfront_Module_0EF6CBAE(struct Unk_sceHVNetfront_Module_0EF6CBAE_0 *arg0);
M2C_UNK sceHVNetfront_Module_0F5AA1D5(void *, M2C_UNK);
void sceHVNetfront_Module_0FB109D0(void);
void sceHVNetfront_Module_0FB2D27A(void);
void sceHVNetfront_Module_0FD607BB(void);
M2C_UNK sceHVNetfront_Module_10C4F8A3(s32, s32);
void sceHVNetfront_Module_11F03B41(struct Unk_vt_sceHVNetfront_Module_11F03B41_arg0 **arg0);
void sceHVNetfront_Module_125D89FA(struct Unk_vt_sceHVNetfront_Module_125D89FA_arg0 **arg0, s32 arg1);
void sceHVNetfront_Module_12AE9009(s32 arg0, s32 *arg1);
s32 *sceHVNetfront_Module_12E3C14E(s32, s32);
void sceHVNetfront_Module_131F0AB6(s32 arg0, s32 arg1);
void sceHVNetfront_Module_14411643(void);
void sceHVNetfront_Module_144F7F76(void);
s32 sceHVNetfront_Module_1461AF80();
s32 sceHVNetfront_Module_14A6B003(s32, s32, s32);
s32 sceHVNetfront_Module_15875ED4(s32);
s32 sceHVNetfront_Module_16459EDF(void);
s32 sceHVNetfront_Module_16508B17();
s32 sceHVNetfront_Module_1672EC47();
s32 sceHVNetfront_Module_169508E3(s32 **arg0);
void sceHVNetfront_Module_1702E191(void);
void sceHVNetfront_Module_19553EDD(s32 arg0);
s32 sceHVNetfront_Module_19BA8C5E(s32);
s32 **sceHVNetfront_Module_19F6AEBF(s32 **arg0);
M2C_UNK sceHVNetfront_Module_1A02495A(s32, s32, s32);
M2C_UNK sceHVNetfront_Module_1A741A10(s32, s32, void *);
M2C_UNK sceHVNetfront_Module_1B83D569(s32, M2C_UNK, M2C_UNK, s32);
void sceHVNetfront_Module_1C77605A(struct Unk_sceHVNetfront_Module_1C77605A_0 *arg0, s32 arg1, s32 arg2);
void sceHVNetfront_Module_1CC15992(struct Unk_func_00055A08_0 *arg0, s32 arg1, struct Unk_sceHVNetfront_Module_1CC15992_2 *arg2);
M2C_UNK sceHVNetfront_Module_1DF9F3CD(void *, s32);
s32 sceHVNetfront_Module_1E850C3D(s32 **arg0);
s32 sceHVNetfront_Module_2045C943(s32 arg0, s32 arg1);
void sceHVNetfront_Module_20A7707B(struct Unk_sceHVNetfront_Module_20A7707B_0 *arg0, s32 arg1, s32 arg2);
void sceHVNetfront_Module_2263AFB9(s32 **arg0);
void sceHVNetfront_Module_2281D96A(void ****arg0);
void sceHVNetfront_Module_22AF3BA2(s32 arg0, s32 arg1, s32 arg2);
void sceHVNetfront_Module_22E35EF2(void);
s32 sceHVNetfront_Module_234F9191(s32, M2C_UNK);
s32 sceHVNetfront_Module_2408FBF3(void *, M2C_UNK, void *);
s32 sceHVNetfront_Module_24614BB0(s32, M2C_UNK);
s32 sceHVNetfront_Module_24B1FCE6(s32);
void sceHVNetfront_Module_2594578F(s32 *arg0, s32 arg1);
s32 sceHVNetfront_Module_25AEB6E8(void *arg0, s32 *arg1);
s32 sceHVNetfront_Module_25F5CA8C(struct Unk_vt_sceHVNetfront_Module_25F5CA8C_arg0 **arg0, s32 arg1);
s32 sceHVNetfront_Module_27D353B1(u8 *);
void sceHVNetfront_Module_2907C1F0(void **arg0, M2C_UNK arg1);
s32 sceHVNetfront_Module_2A065450(s32 **arg0, s32 arg1, s32 arg2);
void sceHVNetfront_Module_2A1DCF7E(s32 *arg0);
M2C_UNK sceHVNetfront_Module_2A34EDF3();
void sceHVNetfront_Module_2B314C92(void **arg0, struct Unk_sceHVNetfront_Module_2B314C92_1 *arg1);
void sceHVNetfront_Module_2B3ECF44(void **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 sceHVNetfront_Module_2B629F59(s32, s32);
s32 **sceHVNetfront_Module_2BB00E05(s32 **arg0);
s32 sceHVNetfront_Module_2BC1C7AD(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void sceHVNetfront_Module_2BD387F9(s32 arg0);
void sceHVNetfront_Module_2CCCD8B0(struct Unk_vt_sceHVNetfront_Module_2CCCD8B0_arg0 **arg0, s32 arg1);
void sceHVNetfront_Module_2D98366C(s32 arg0, M2C_UNK arg1, s32 arg2);
void sceHVNetfront_Module_2E02B3E3(s32 arg0);
void sceHVNetfront_Module_2FA79A94(struct Unk_func_00099878_0 *arg0);
M2C_UNK sceHVNetfront_Module_309FE171(s32);
s32 sceHVNetfront_Module_30FFB4C9(s32 **arg0);
M2C_UNK sceHVNetfront_Module_32E4FDC6(s32);
s32 sceHVNetfront_Module_33028746(struct Unk_sceHVNetfront_Module_33028746_0 *arg0, s32 arg1);
s32 sceHVNetfront_Module_3445D8F8(s32 **arg0, s32 arg1, s32 arg2);
M2C_UNK sceHVNetfront_Module_34C99643();
s32 sceHVNetfront_Module_350ABDEC(s32, s32);
void sceHVNetfront_Module_3850E9A6(void **arg0, s32 arg1);
M2C_UNK sceHVNetfront_Module_38FB998B(s32);
s32 sceHVNetfront_Module_39D070F1(u8 *arg0, s32 arg1);
s32 sceHVNetfront_Module_39EE6D2A(struct Unk_vt_sceHVNetfront_Module_39EE6D2A_arg0 **arg0);
M2C_UNK sceHVNetfront_Module_3AB64B09(s32 **);
void sceHVNetfront_Module_3CD6256A(s32 arg0);
void sceHVNetfront_Module_3DEAAAB0(struct Unk_sceHVNetfront_Module_3DEAAAB0_0 *arg0, s32 arg1, s32 arg2);
s32 sceHVNetfront_Module_3EDA77E7(s32);
M2C_UNK sceHVNetfront_Module_40EFD93B(s32, void *);
s32 **sceHVNetfront_Module_4136A224(s32 **arg0);
s32 sceHVNetfront_Module_41CEA51D(s32, M2C_UNK, M2C_UNK);
M2C_UNK sceHVNetfront_Module_42E27595(s32, M2C_UNK, s32, s32);
void sceHVNetfront_Module_4329FB08(void *arg0);
s32 sceHVNetfront_Module_43BDE443(struct Unk_vt_sceHVNetfront_Module_43BDE443_arg0 **arg0);
M2C_UNK sceHVNetfront_Module_440B8F87(s32, s32, M2C_UNK);
s32 sceHVNetfront_Module_4417421E(struct Unk_sceHVNetfront_Module_4417421E_0 *arg0, s32 arg1, s32 arg2);
s32 sceHVNetfront_Module_44660B53(s32, s32, s32);
void sceHVNetfront_Module_447295B3(s32 arg0);
s32 sceHVNetfront_Module_457A4136(void *, M2C_UNK);
void sceHVNetfront_Module_45AC12ED(void **arg0, s32 arg1);
s32 sceHVNetfront_Module_4681A961(s32, s32);
void sceHVNetfront_Module_46A9D965(s32 arg0, M2C_UNK arg1, s32 arg2);
void sceHVNetfront_Module_46EE5586(void *arg0, s32 arg1, s32 arg2);
M2C_UNK sceHVNetfront_Module_46EF316E(s32, M2C_UNK);
M2C_UNK sceHVNetfront_Module_488D3C7B(s32, s32);
void sceHVNetfront_Module_48B72D3A(struct Unk_sceHVNetfront_Module_48B72D3A_0 *arg0, s32 arg1);
void sceHVNetfront_Module_49A6D9F9(void);
s32 sceHVNetfront_Module_4B122153(struct Unk_sceHVNetfront_Module_4B122153_0 *arg0, s32 arg1);
void sceHVNetfront_Module_4B5CEB81(s32 arg0, void **arg1, s32 arg2);
void sceHVNetfront_Module_4B6F7563(void);
void sceHVNetfront_Module_4C96FA60(struct Unk_sceHVNetfront_Module_4C96FA60_0 *arg0, s32 arg1, s32 arg2);
s32 sceHVNetfront_Module_4DC20E88(void);
M2C_UNK sceHVNetfront_Module_4E064DB2(s32);
s32 sceHVNetfront_Module_4E297BC5(s32, s32);
s32 sceHVNetfront_Module_4E6D9390(struct Unk_sceHVNetfront_Module_4E6D9390_0 *arg0, struct Unk_sceHVNetfront_Module_4E6D9390_1 *arg1);
void sceHVNetfront_Module_4E8351E4(s32 arg0);
void sceHVNetfront_Module_4EA9EF34(s32 **arg0);
s32 sceHVNetfront_Module_50475141(struct Unk_sceHVNetfront_Module_50475141_0 *arg0, s32 arg1, s32 arg2);
void sceHVNetfront_Module_50CD0162(struct Unk_sceHVNetfront_Module_50CD0162_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void **sceHVNetfront_Module_51CAE7B4(void **arg0);
s32 sceHVNetfront_Module_52564790(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
s32 sceHVNetfront_Module_52E49519(s32 *arg0);
void sceHVNetfront_Module_533FF02B(s32 arg0);
void sceHVNetfront_Module_5412D662(void);
s32 sceHVNetfront_Module_5575313B(void);
void sceHVNetfront_Module_55C75F96(void **arg0);
void sceHVNetfront_Module_56891AC0(void);
s32 sceHVNetfront_Module_56988A48(s32 arg0, s32 arg1);
s32 sceHVNetfront_Module_57C112FD(s32 **arg0, M2C_UNK arg1);
s32 sceHVNetfront_Module_57FC5C24(s32);
s32 sceHVNetfront_Module_57FDE0C7(s32, s32);
void sceHVNetfront_Module_58E21566(struct Unk_func_00053CCC_0 *arg0, s32 arg1);
void sceHVNetfront_Module_58F4BEAC(s32 *arg0);
s32 sceHVNetfront_Module_59F62E22(struct Unk_sceHVNetfront_Module_59F62E22_0 *arg0, s32 arg1, s32 arg2);
M2C_UNK sceHVNetfront_Module_5BA9037D(s32, s32, s32);
s32 *sceHVNetfront_Module_5BF885D2(s16, M2C_UNK);
M2C_UNK sceHVNetfront_Module_5CA39435();
s32 sceHVNetfront_Module_5CB97BC6(s32 arg0);
s32 sceHVNetfront_Module_5CCF6A9B(s32 arg0, M2C_UNK arg1);
s32 sceHVNetfront_Module_5D1D77DA(s32, s32, s32);
M2C_UNK sceHVNetfront_Module_5D4D03A3(s32);
M2C_UNK sceHVNetfront_Module_5DBB6513(void *, s32, M2C_UNK, M2C_UNK);
void sceHVNetfront_Module_5DF595A9(struct Unk_sceHVNetfront_Module_5DF595A9_0 *arg0, s32 arg1, s32 arg2);
s32 sceHVNetfront_Module_5E3D4ABB(s32, M2C_UNK, s32);
void sceHVNetfront_Module_5E44B688(void **arg0, s32 arg1);
void sceHVNetfront_Module_5EEBE755(void);
s32 sceHVNetfront_Module_603889A9(M2C_UNK);
s32 sceHVNetfront_Module_60ED98CD(s32);
void sceHVNetfront_Module_6148A422(void);
s32 sceHVNetfront_Module_62803759(s32, s32);
void sceHVNetfront_Module_62C6B537(void);
void sceHVNetfront_Module_6448C9FD(void);
M2C_UNK sceHVNetfront_Module_65813EA4(s32, s32, M2C_UNK);
void sceHVNetfront_Module_67FC33F8(struct Unk_func_00053CCC_0 *arg0, s32 arg1, s32 arg2);
void sceHVNetfront_Module_692B427C(void **arg0, s32 arg1, s32 arg2);
void sceHVNetfront_Module_6A6AB360(struct Unk_sceHVNetfront_Module_6A6AB360_0 *arg0, s32 arg1, s32 arg2);
s32 sceHVNetfront_Module_6AC5DDC6(struct Unk_sceHVNetfront_Module_6AC5DDC6_0 *arg0, struct Unk_sceHVNetfront_Module_6AC5DDC6_1 *arg1);
s32 sceHVNetfront_Module_6C319E19(struct Unk_vt_sceHVNetfront_Module_6C319E19_arg0 **arg0);
void sceHVNetfront_Module_6C78CC40(void **arg0, s32 arg1);
void sceHVNetfront_Module_6CA88BC3(void **arg0, void **arg1);
s32 *sceHVNetfront_Module_6D4EE418(s32);
M2C_UNK sceHVNetfront_Module_6DC3FDE4(s32);
M2C_UNK sceHVNetfront_Module_6DDF3D61(M2C_UNK, M2C_UNK, s32, s16);
M2C_UNK sceHVNetfront_Module_6F1E32E6();
void sceHVNetfront_Module_6F26FEF5(s32 **arg0, s32 arg1);
void sceHVNetfront_Module_6F772B18(struct Unk_vt_sceHVNetfront_Module_6F772B18_arg0 **arg0, s32 ***arg1, s32 arg2);
s32 sceHVNetfront_Module_7011BF0F(void);
M2C_UNK sceHVNetfront_Module_703D7675(s32, s32);
s32 sceHVNetfront_Module_70683D75(struct Unk_sceHVNetfront_Module_70683D75_0 *arg0, s32 arg1);
M2C_UNK sceHVNetfront_Module_71125C97(s32);
void sceHVNetfront_Module_728066E6(struct Unk_sceHVNetfront_Module_728066E6_0 *arg0);
M2C_UNK sceHVNetfront_Module_74A30655(s32 **, M2C_UNK, M2C_UNK);
s32 sceHVNetfront_Module_7526590E(void);
s32 sceHVNetfront_Module_754AA115(s32, s32, s32, s32, s32);
void sceHVNetfront_Module_75B6ED88(s32 arg0);
void sceHVNetfront_Module_77986A50(void);
s32 sceHVNetfront_Module_77FCD4C1(s32, s32);
s32 sceHVNetfront_Module_783814D1(s32, s32, s32, s32);
void sceHVNetfront_Module_78614BE7(void);
s32 **sceHVNetfront_Module_794DB63E();
void sceHVNetfront_Module_7A41AD6E(struct Unk_sceHVNetfront_Module_7A41AD6E_0 *arg0);
void sceHVNetfront_Module_7A785747(void);
void sceHVNetfront_Module_7B120250(s32 arg0, s32 arg1);
void sceHVNetfront_Module_7B63B90F(void);
void sceHVNetfront_Module_7C5BAB1D(void **arg0, s32 arg1);
s32 sceHVNetfront_Module_7C762DEC(s32, s32, s32, s32);
void sceHVNetfront_Module_7C778057(void);
s32 sceHVNetfront_Module_7D1421C0(s32);
void sceHVNetfront_Module_7D655E00(struct Unk_sceHVNetfront_Module_7D655E00_0 *arg0, s32 arg1, struct Unk_sceHVNetfront_Module_7D655E00_2 *arg2);
void sceHVNetfront_Module_7DF3A448(void **arg0);
M2C_UNK sceHVNetfront_Module_7E1DC98D();
void sceHVNetfront_Module_7F17DC79(void);
void sceHVNetfront_Module_81130A27(struct Unk_sceHVNetfront_Module_81130A27_0 *arg0, s32 arg1, s16 arg2);
s32 sceHVNetfront_Module_818326B6(s32 arg0, s32 arg1, s32 arg2, s32 *arg3);
s32 sceHVNetfront_Module_81A43081(void);
M2C_UNK sceHVNetfront_Module_823748DE();
s32 *sceHVNetfront_Module_83191313(s32, s32);
M2C_UNK sceHVNetfront_Module_831B4A41();
void sceHVNetfront_Module_84BDA560(s32 arg0);
void sceHVNetfront_Module_863666A0(struct Unk_sceHVNetfront_Module_863666A0_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sceHVNetfront_Module_8690B158(struct Unk_sceHVNetfront_Module_8690B158_0 *arg0, s32 arg1);
s32 sceHVNetfront_Module_86AB5444(s32);
M2C_UNK sceHVNetfront_Module_86F90291(M2C_UNK, M2C_UNK);
M2C_UNK sceHVNetfront_Module_880239D0(s32 **);
s32 sceHVNetfront_Module_882E0127(void *arg0, s32 *arg1);
M2C_UNK sceHVNetfront_Module_88977645(s32, M2C_UNK);
void *sceHVNetfront_Module_896E55F6(s32 **);
void sceHVNetfront_Module_89FF7199(struct Unk_sceHVNetfront_Module_89FF7199_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void sceHVNetfront_Module_8AB563FF(void);
s32 sceHVNetfront_Module_8AF2F499(s32, s32, s32, s32, s32);
s32 sceHVNetfront_Module_8C9ECF26(s32 arg0);
M2C_UNK sceHVNetfront_Module_8CA61859(void *, s32);
s32 sceHVNetfront_Module_8CAFBEC9(void);
s32 sceHVNetfront_Module_8D3E0625(struct Unk_sceHVNetfront_Module_8D3E0625_0 *arg0, s32 arg1, s32 arg2, struct Unk_sceHVNetfront_Module_8D3E0625_3 *arg3);
s32 sceHVNetfront_Module_8F6A9B89(s32 arg0, s32 arg1, s32 arg2);
s32 sceHVNetfront_Module_905CB6D7(struct Unk_sceHVNetfront_Module_905CB6D7_0 *arg0);
M2C_UNK sceHVNetfront_Module_907152F5(s32, s32, M2C_UNK);
M2C_UNK sceHVNetfront_Module_90958874(void *, s32);
void sceHVNetfront_Module_90A5AF9D(s32 arg0, s32 arg1);
s32 sceHVNetfront_Module_90AB89E7(s32);
s32 sceHVNetfront_Module_9373433B(s32 arg0, M2C_UNK arg1);
s32 sceHVNetfront_Module_957CE668(s32, s32);
s32 sceHVNetfront_Module_96BF9A55(s32);
M2C_UNK sceHVNetfront_Module_9716DAAD(void ***, M2C_UNK);
s32 sceHVNetfront_Module_98A11887(s32 arg0);
void sceHVNetfront_Module_99111A60(void);
M2C_UNK sceHVNetfront_Module_9AA02806(void *);
void sceHVNetfront_Module_9AA96525(s32 arg0);
s32 sceHVNetfront_Module_9BA8E706(s32, s32, s32, s32);
void sceHVNetfront_Module_9C5ACD64(s32 *arg0, s32 arg1);
void sceHVNetfront_Module_9C6C2E91(s32 arg0, s32 arg1, s32 arg2);
void sceHVNetfront_Module_9C897ECC(s32 arg0);
M2C_UNK sceHVNetfront_Module_9CDC3730(s32, s32, s32);
M2C_UNK sceHVNetfront_Module_9D1EA353(s32, s32);
s32 sceHVNetfront_Module_9D2B3653(s32);
s32 sceHVNetfront_Module_9D42259B(struct Unk_vt_sceHVNetfront_Module_9D42259B_arg0 **arg0);
void sceHVNetfront_Module_9D9CB3AF(struct Unk_func_00053CCC_0 *arg0, s32 arg1, s32 arg2);
s32 sceHVNetfront_Module_9DAD41C2(s32, s32, s32, s32, s32, s32);
void sceHVNetfront_Module_9E409DB4(s32 ****arg0);
s32 sceHVNetfront_Module_9E9146BE(struct Unk_vt_sceHVNetfront_Module_9E9146BE_arg0 **arg0);
s32 sceHVNetfront_Module_9E9DD219(struct Unk_sceHVNetfront_Module_9E9DD219_0 *arg0, s32 arg1);
void sceHVNetfront_Module_9FDE9873(struct Unk_sceHVNetfront_Module_9FDE9873_0 *arg0);
void sceHVNetfront_Module_9FF54B2A(struct Unk_func_00049AD0_1 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK sceHVNetfront_Module_A02BB72A(s32, M2C_UNK, s32, s32);
void sceHVNetfront_Module_A03FCFFE(struct Unk_sceHVNetfront_Module_A03FCFFE_0 *arg0, s32 arg1, s32 arg2);
M2C_UNK sceHVNetfront_Module_A08F42C0(s32);
s32 sceHVNetfront_Module_A20CC0BA(void *, s32);
M2C_UNK sceHVNetfront_Module_A2F4AC9E(s32);
s32 sceHVNetfront_Module_A499ED24(void);
s32 sceHVNetfront_Module_A57E0937(s32 arg0);
void sceHVNetfront_Module_A606F102(void);
s32 sceHVNetfront_Module_A65312B1(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void sceHVNetfront_Module_A71A4744(void);
M2C_UNK sceHVNetfront_Module_A76795B7();
void sceHVNetfront_Module_A7781C73(void);
void sceHVNetfront_Module_A8078858(struct Unk_vt_sceHVNetfront_Module_A8078858_arg0 **arg0, s32 arg1);
void sceHVNetfront_Module_A86CAFDE(void **arg0, M2C_UNK arg1, M2C_UNK arg2);
void sceHVNetfront_Module_A9E1B08D(void);
void sceHVNetfront_Module_AA3634F4(struct Unk_vt_sceHVNetfront_Module_AA3634F4_arg0 **arg0, s32 arg1);
M2C_UNK sceHVNetfront_Module_AAFCCCFA();
void sceHVNetfront_Module_AB5986DF(void);
void sceHVNetfront_Module_AB616A03(void **arg0);
M2C_UNK sceHVNetfront_Module_ABAE54FF(s32, s32);
s32 sceHVNetfront_Module_AD3723FF(s32, s32, s32, s32);
s32 sceHVNetfront_Module_AE662080(void);
void sceHVNetfront_Module_AE6CB5A5(s32 arg0);
M2C_UNK sceHVNetfront_Module_AE926D7C(s32, s32, s32);
void sceHVNetfront_Module_AEF7B564(s32 *arg0, M2C_UNK arg1);
M2C_UNK sceHVNetfront_Module_AFCC3786(s32);
s32 sceHVNetfront_Module_B05DB1D4(s32 **arg0, M2C_UNK arg1);
M2C_UNK sceHVNetfront_Module_B205F749(void *, s32);
s16 sceHVNetfront_Module_B23D7F7F(s32 **arg0, s32 arg1, s32 arg2);
M2C_UNK sceHVNetfront_Module_B29BE9CE(s32 **);
void sceHVNetfront_Module_B3475EA5(struct Unk_sceHVNetfront_Module_B3475EA5_0 *arg0, s32 arg1, s32 arg2, s32 arg3);
void sceHVNetfront_Module_B355C896(s32 arg0, struct Unk_sceHVNetfront_Module_B355C896_1 *arg1);
void sceHVNetfront_Module_B3733A46(void);
void sceHVNetfront_Module_B3AF6022(s32 arg0, struct Unk_sceHVNetfront_Module_B3AF6022_1 *arg1);
s32 sceHVNetfront_Module_B3E4445A();
void sceHVNetfront_Module_B3E7A28A(s32 **arg0);
s32 sceHVNetfront_Module_B541796B(s32 **arg0, s32 arg1, s32 arg2);
s32 sceHVNetfront_Module_B58682CA(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void sceHVNetfront_Module_B642A9C7(void);
s32 sceHVNetfront_Module_B6F9B107(s32, s32, s32);
s32 sceHVNetfront_Module_B71993AE(s32, s32);
s32 sceHVNetfront_Module_B725FAEC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 sceHVNetfront_Module_B730C75F(s32);
void sceHVNetfront_Module_B7DF3AB0(void **arg0);
void sceHVNetfront_Module_B8C28371(void);
s32 sceHVNetfront_Module_BA0F8BF7(struct Unk_vt_sceHVNetfront_Module_BA0F8BF7_arg0 **arg0);
s32 sceHVNetfront_Module_BA4FFC3A();
M2C_UNK sceHVNetfront_Module_BB5E8F0E(s32, s32);
s32 sceHVNetfront_Module_BBDFB7FD(struct Unk_sceHVNetfront_Module_BBDFB7FD_0 *arg0);
M2C_UNK *sceHVNetfront_Module_BF1F29EC(s32 arg0);
M2C_UNK sceHVNetfront_Module_BFE8268F(s32);
M2C_UNK sceHVNetfront_Module_C04FADD9(void *);
M2C_UNK sceHVNetfront_Module_C0A215A2(void *);
void sceHVNetfront_Module_C3B0CA67(s32 *arg0);
void sceHVNetfront_Module_C40D454A(void **arg0);
M2C_UNK sceHVNetfront_Module_C412B8FC(s32, M2C_UNK, M2C_UNK);
void sceHVNetfront_Module_C4BC962C(s32 arg0, struct Unk_sceHVNetfront_Module_C4BC962C_1 *arg1);
void sceHVNetfront_Module_C6C0BD2A(void **arg0, s32 arg1, s32 arg2);
M2C_UNK sceHVNetfront_Module_C6EE5561();
void sceHVNetfront_Module_C7AA9F45(struct Unk_sceHVNetfront_Module_C7AA9F45_0 *arg0);
void sceHVNetfront_Module_C9B744B4(void);
s32 sceHVNetfront_Module_CA65803E(s32);
void sceHVNetfront_Module_CAE363A8(s32 **arg0);
s32 sceHVNetfront_Module_CAE659B5(void);
void sceHVNetfront_Module_CB726F9E(void **arg0, s32 *arg1, struct Unk_sceHVNetfront_Module_CB726F9E_2 *arg2);
void sceHVNetfront_Module_CC51DF45(void **arg0, s32 arg1);
s32 sceHVNetfront_Module_CE95AE54();
s32 sceHVNetfront_Module_CF3077BE(M2C_UNK, M2C_UNK);
void sceHVNetfront_Module_CF69A52B(struct Unk_func_000591B4_0 *arg0, s32 arg1);
void *sceHVNetfront_Module_D091BFB4(s32 **, s32);
void sceHVNetfront_Module_D193E37E(struct Unk_sceHVNetfront_Module_D193E37E_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK sceHVNetfront_Module_D1EF37CB(void *, s32, M2C_UNK, M2C_UNK);
void sceHVNetfront_Module_D2270E78(void);
s32 sceHVNetfront_Module_D3206B42(void);
s32 sceHVNetfront_Module_D33B0FB2(s32 arg0, s32 arg1);
void sceHVNetfront_Module_D34DCBBE(void);
s32 sceHVNetfront_Module_D35CA859(s32 **arg0, s32 arg1);
s32 sceHVNetfront_Module_D38CE2BC(struct Unk_sceHVNetfront_Module_D38CE2BC_0 *arg0);
void sceHVNetfront_Module_D392E84A(void ****arg0);
s32 **sceHVNetfront_Module_D39BDE45(M2C_UNK);
void sceHVNetfront_Module_D42BFA17(struct Unk_sceHVNetfront_Module_D42BFA17_0 *arg0);
M2C_UNK sceHVNetfront_Module_D5A24BD1(s32, M2C_UNK);
void sceHVNetfront_Module_D5F20A4D(s32 arg0, struct Unk_sceHVNetfront_Module_D5F20A4D_1 *arg1);
M2C_UNK sceHVNetfront_Module_D611E938(s32, M2C_UNK, s32);
s32 sceHVNetfront_Module_D728FA9F(struct Unk_vt_sceHVNetfront_Module_D728FA9F_arg0 **arg0);
M2C_UNK sceHVNetfront_Module_D77AFB32();
s32 sceHVNetfront_Module_D9560A46(s32, M2C_UNK, s32, M2C_UNK);
void sceHVNetfront_Module_D97D8CB2(s32 arg0);
s32 sceHVNetfront_Module_D9956972(void);
s32 sceHVNetfront_Module_D9FE99F5(s32, M2C_UNK);
void sceHVNetfront_Module_DA60A0AF(struct Unk_vt_sceHVNetfront_Module_DA60A0AF_arg0 **arg0, s32 arg1);
void sceHVNetfront_Module_DB246B1D(s32 arg0);
s32 sceHVNetfront_Module_DB779BC4(s32 arg0, M2C_UNK arg1);
s32 sceHVNetfront_Module_DCC7ADEA(struct Unk_vt_sceHVNetfront_Module_DCC7ADEA_arg0 **arg0);
void sceHVNetfront_Module_DFCBF9BC(void);
s32 sceHVNetfront_Module_E0BC5E08(void);
s32 sceHVNetfront_Module_E1A51715(struct Unk_vt_sceHVNetfront_Module_E1A51715_arg0 **arg0);
M2C_UNK *sceHVNetfront_Module_E2C32DF7(void);
void sceHVNetfront_Module_E2C79DAF(struct Unk_vt_sceHVNetfront_Module_E2C79DAF_arg0 **arg0);
void sceHVNetfront_Module_E31B0CF8(void **arg0, struct Unk_func_00045A64_1 *arg1);
void sceHVNetfront_Module_E330BB9F(struct Unk_sceHVNetfront_Module_E330BB9F_0 *arg0);
void sceHVNetfront_Module_E3E135CC(s32 arg0, s32 arg1, s32 arg2);
s32 sceHVNetfront_Module_E459881C(s32);
void sceHVNetfront_Module_E5842D1C(void);
s32 sceHVNetfront_Module_E5F5CA1A(s32 **arg0, s32 arg1, s32 arg2);
s32 sceHVNetfront_Module_E6D4D13C(s32, s32, s32);
void sceHVNetfront_Module_E778D3F3(s32 arg0, s32 arg1);
s32 sceHVNetfront_Module_E7909110(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 sceHVNetfront_Module_E7C67B64(s32, s32, s32, s32);
void sceHVNetfront_Module_E875CDC8(struct Unk_sceHVNetfront_Module_E875CDC8_0 *arg0);
void sceHVNetfront_Module_E884F119(s32 arg0);
void sceHVNetfront_Module_E992C60B(void **arg0, s32 arg1, struct Unk_sceHVNetfront_Module_E992C60B_2 *arg2);
M2C_UNK sceHVNetfront_Module_EA8FFAF4();
s32 sceHVNetfront_Module_EAA204F0(s32);
s32 sceHVNetfront_Module_ECAD3AF5(s32);
void sceHVNetfront_Module_ED3A897E(s32 arg0);
s32 sceHVNetfront_Module_EE835D7A(M2C_UNK);
void sceHVNetfront_Module_EEA26996(void **arg0, struct Unk_sceHVNetfront_Module_EEA26996_1 *arg1);
void sceHVNetfront_Module_EF305D32(void);
void sceHVNetfront_Module_EF9A1668(s32 **arg0);
void sceHVNetfront_Module_EFDFDF36(void);
void sceHVNetfront_Module_F0614C11(void);
M2C_UNK sceHVNetfront_Module_F1423651(void *);
s32 sceHVNetfront_Module_F2D8CC12(s32, s32, M2C_UNK);
void sceHVNetfront_Module_F2D9F9FD(void);
void sceHVNetfront_Module_F2FE2FA3(void);
s32 sceHVNetfront_Module_F45546DA(struct Unk_sceHVNetfront_Module_F45546DA_0 *arg0);
M2C_UNK sceHVNetfront_Module_F489E9B4(void *, s32);
M2C_UNK sceHVNetfront_Module_F55329EF(s32);
void sceHVNetfront_Module_F55D8699(struct Unk_sceHVNetfront_Module_F55D8699_0 *arg0);
void sceHVNetfront_Module_F6316E3A(void);
void sceHVNetfront_Module_F9D901ED(struct Unk_vt_sceHVNetfront_Module_F9D901ED_arg0 **arg0);
s32 **sceHVNetfront_Module_FA39DAA2(void);
void sceHVNetfront_Module_FB59447A(s32 arg0);
s32 sceHVNetfront_Module_FD6F2F09(void);
void sceHVNetfront_Module_FD8A0A98(void);
void sceHVNetfront_Module_FDE5859B(void);
void sceHVNetfront_Module_FF428AF7(s32 arg0, s32 *arg1);
s32 sceHVNetfront_Module_FF5E3F11();
void sceHVNetfront_Module_FF6A3B64(void);
s32 sceHVNetfront_Module_FF85936E(struct Unk_sceHVNetfront_Module_FF85936E_0 *arg0, s32 arg1);
s32 sceHVWWW_Library_0E71B25C();
M2C_UNK sceHVWWW_Library_3CAF5AEF(s32);
M2C_UNK sceHVWWW_Library_4881039E(s32);
M2C_UNK sceHVWWW_Library_52782A62(s32, M2C_UNK);
M2C_UNK sceHVWWW_Library_62FB650D();
M2C_UNK sceHVWWW_Library_68822481(s32, s32, s32, s32);
M2C_UNK sceHVWWW_Library_A596909E();
M2C_UNK sceHVWWW_Library_AC4DE680(s32);
M2C_UNK sceHVWWW_Library_F32F9DB7(s32, s32, s32, s32, s32, s32);
s32 sceHttpFlushAuthList(void);
M2C_UNK sceHttp_77EE5319();
M2C_UNK sceHttp_DD6E7857();
M2C_UNK sceIoRename();
M2C_UNK sceKernelClearEventFlag(s32, M2C_UNK);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
u32 sceKernelCreateEventFlag(void *, u32, u32, void *);
u32 sceKernelCreateSema(void *, u32, s32, s32, void *);
M2C_UNK sceKernelDeleteEventFlag(s32);
M2C_UNK sceKernelDeleteSema(s32);
u32 sceKernelGetThreadId(void);
M2C_UNK sceKernelLibcGettimeofday();
M2C_UNK sceKernelLibcTime();
s32 sceKernelPollEventFlag(s32, u32, s32, void *);
M2C_UNK sceKernelSetEventFlag(s32, M2C_UNK);
M2C_UNK sceKernelSignalSema(s32, M2C_UNK);
M2C_UNK sceKernelSleepThread();
M2C_UNK sceKernelWaitSema(s32, M2C_UNK, M2C_UNK);
s32 sceRtcGetCurrentTick(void *);

#endif
