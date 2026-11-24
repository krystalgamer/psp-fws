#ifndef HTMLVIEWER_UI_DECLS_H
#define HTMLVIEWER_UI_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct D_000644E4_s {
    u8 pad0[0x2C];
    volatile s32 unk2C;
};

struct D_0006E670_s {
    volatile s32 unk0;
    volatile s32 unk4;
};

struct Unk_Unk_func_00008E8C_0_14 {
    u8 pad0[0x80];
    s32 unk80;
};

struct Unk_Unk_func_00009A10_temp_v0_C {
    u8 pad0[0x8];
    u16 unk8;
};

struct Unk_Unk_func_0000AF10_temp_s1_C {
    u8 pad0[0x34];
    s32 unk34;
};

struct Unk_Unk_func_0000CE4C_temp_a0_C {
    u8 pad0[0x8];
    u16 unk8;
};

struct Unk_func_00000EDC_temp_v0 {
    u8 pad0[0x1B24];
    s32 unk1B24;
    s32 unk1B28;
    u8 pad1B2C[0x10C];
    s32 unk1C38;
};

struct Unk_func_00002298_temp_v0 {
    u8 pad0[0x1B34];
    s32 unk1B34;
    u8 pad1B38[0x4];
    s32 unk1B3C;
    u8 pad1B40[0x58];
    s32 unk1B98;
};

struct Unk_func_00002298_temp_v0_2 {
    u8 pad0[0x154];
    s32 unk154;
};

struct Unk_func_00003480_0 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct Unk_func_00003E24_sp0 {
    u8 pad0[0x14];
    u16 unk14;
    u16 unk16;
};

struct Unk_func_00004D04_temp_v0 {
    u8 pad0[0x1C70];
    s32 unk1C70;
};

struct Unk_func_000062A4_temp_v0 {
    u8 pad0[0x1A];
    s16 unk1A;
    s32 unk1C;
};

struct Unk_func_000066C0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000066C0_temp_s0 {
    u8 pad0[0x14D0];
    s32 unk14D0;
    s32 unk14D4;
};

struct Unk_func_00007F3C_sp0 {
    u8 pad0[0x4];
    u16 unk4;
    u16 unk6;
    void *unk8;
};

struct Unk_func_00008B48_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00008BF0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00008E74_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00008E80_0 {
    u8 pad0[0xC];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_00008E8C_0 {
    u8 pad0[0x14];
    struct Unk_Unk_func_00008E8C_0_14 *unk14;
};

struct Unk_func_00008E98_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00009064_0 {
    u8 pad0[0x4C2];
    s16 unk4C2;
};

struct Unk_func_00009120_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0000916C_temp_v0_2 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_000096F4_0 {
    u8 pad0[0xC];
    M2C_UNK (*unkC)(s32, M2C_UNK, s32);
    s32 unk10;
    s32 unk14;
};

struct Unk_func_00009A10_temp_v0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    struct Unk_Unk_func_00009A10_temp_v0_C *unkC;
    s32 unk10;
};

struct Unk_func_00009E5C_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0000A020_temp_v0 {
    u8 pad0[0x54];
    s32 unk54;
    s32 unk58;
};

struct Unk_func_0000AF10_temp_s1 {
    u8 pad0[0xC];
    struct Unk_Unk_func_0000AF10_temp_s1_C *unkC;
};

struct Unk_func_0000B384_temp_s0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_0000B384_temp_v0_2 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0000CE4C_temp_a0 {
    u8 pad0[0xC];
    struct Unk_Unk_func_0000CE4C_temp_a0_C *unkC;
};

struct Unk_func_0000FA7C_0 {
    u8 pad0[0x4];
    void * unk4;
    u16 unk8;
    u8 padA[0x24];
    s16 unk2E;
};

struct Unk_func_0000FDE0_0 {
    u8 pad0[0x8C];
    s32 unk8C;
    s32 unk90;
};

struct Unk_func_0000FE64_0 {
    u8 pad0[0x4];
    void * unk4;
    void * unk8;
};

struct Unk_func_0001035C_0 {
    u8 pad0[0x54];
    s32 unk54;
    s32 unk58;
};

struct Unk_func_00011668_0 {
    s16 unk0;
    s16 unk2;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct Unk_func_000117F0_0 {
    u8 pad0[0x18];
    s32 unk18;
};

struct Unk_func_00011EC4_0 {
    u8 pad0[0x44];
    s32 unk44;
    u8 pad48[0x4];
    s32 unk4C;
};

struct Unk_func_00011F38_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_00012020_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00012020_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00012068_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_000120B4_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_00012564_0 {
    u8 pad0[0x3C];
    M2C_UNK (*unk3C)(M2C_UNK, s32, s32);
    s32 unk40;
};

struct Unk_func_00012564_1 {
    s32 unk0;
    u8 pad4[0x10];
    s32 unk14;
    s32 unk18;
};

struct Unk_func_000125D4_0 {
    u8 pad0[0x3C];
    M2C_UNK (*unk3C)(M2C_UNK, s32, s32);
    s32 unk40;
};

struct Unk_func_000125D4_1 {
    s32 unk0;
    u8 pad4[0x18];
    s32 unk1C;
    s32 unk20;
};

struct Unk_func_00012644_0 {
    u8 pad0[0x3C];
    M2C_UNK (*unk3C)(M2C_UNK, s32, s32);
    s32 unk40;
};

struct Unk_func_00012644_1 {
    s32 unk0;
    u8 pad4[0x20];
    s32 unk24;
    s32 unk28;
};

struct Unk_func_000126B4_0 {
    u8 pad0[0x3C];
    M2C_UNK (*unk3C)(M2C_UNK, s32, s32);
    s32 unk40;
};

struct Unk_func_000126B4_1 {
    s32 unk0;
    u8 pad4[0x28];
    s32 unk2C;
    s32 unk30;
};

struct Unk_func_00012EC0_temp_v0 {
    u8 pad0[0x98];
    s32 unk98;
    u8 pad9C[0x44];
    s32 unkE0;
    s32 unkE4;
};

struct Unk_func_00012F74_1 {
    u8 pad0[0xAC];
    u16 unkAC;
    u8 unkAE;
};

struct Unk_func_00012F74_temp_v0 {
    u8 pad0[0x24];
    u8 unk24;
    u8 pad25[0x3];
    u16 unk28;
};

struct Unk_func_000135A8_temp_v0 {
    u8 pad0[0x9C];
    s32 unk9C;
    u8 padA0[0x18];
    s32 unkB8;
    u8 padBC[0xC];
    s32 unkC8;
    u8 padCC[0x4];
    s32 unkD0;
    s32 unkD4;
    u8 padD8[0x8];
    s32 unkE0;
    s32 unkE4;
};

struct Unk_func_00013874_temp_v0 {
    u8 pad0[0xE0];
    s32 unkE0;
    s32 unkE4;
};

struct Unk_func_00013AF8_temp_v0 {
    u8 pad0[0xA0];
    s32 unkA0;
    u8 padA4[0x30];
    s32 unkD4;
    s32 unkD8;
};

struct Unk_func_00013D90_temp_v0 {
    u8 pad0[0xB0];
    s32 unkB0;
    s32 unkB4;
};

struct Unk_func_00013F3C_temp_v0 {
    u8 pad0[0xC4];
    s32 unkC4;
};

struct Unk_func_00013F94_1 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00013F94_temp_v0 {
    s32 unk0;
    u8 pad4[0x7C];
    s32 unk80;
    u8 pad84[0x14];
    s32 unk98;
    u8 pad9C[0x28];
    s32 unkC4;
};

struct Unk_func_00014280_temp_v0 {
    u8 pad0[0xD4];
    s32 unkD4;
    s32 unkD8;
};

struct Unk_func_00014474_temp_v0 {
    u8 pad0[0xB8];
    s32 unkB8;
    s32 unkBC;
};

struct Unk_func_0001463C_temp_v0 {
    u8 pad0[0x98];
    s32 unk98;
    s32 unk9C;
    s32 unkA0;
    s32 unkA4;
};

struct Unk_func_00014924_temp_v0 {
    u8 pad0[0xB8];
    s32 unkB8;
    s32 unkBC;
};

struct Unk_func_00014DA8_temp_v0 {
    u8 pad0[0xA4];
    s32 unkA4;
    u8 padA8[0x60];
    s32 unk108;
    s32 unk10C;
};

struct Unk_func_0001550C_temp_v0 {
    u8 pad0[0xBC];
    s32 unkBC;
};

struct Unk_func_00015568_temp_v0 {
    u8 pad0[0xE4];
    s32 unkE4;
    s32 unkE8;
};

struct Unk_func_000155D0_temp_v0 {
    u8 pad0[0xC8];
    s32 unkC8;
    s32 unkCC;
};

struct Unk_func_00015638_temp_v0 {
    u8 pad0[0xEC];
    s32 unkEC;
    s32 unkF0;
};

struct Unk_func_000156A0_temp_v0 {
    u8 pad0[0xF4];
    s32 unkF4;
    s32 unkF8;
};

struct Unk_func_00015D6C_temp_v0 {
    u8 pad0[0x108];
    s32 unk108;
    s32 unk10C;
};

struct Unk_func_000164A8_temp_v0 {
    u8 pad0[0xD8];
    s32 unkD8;
    s32 unkDC;
};

struct Unk_func_00017330_temp_v0 {
    u8 pad0[0xE0];
    s32 unkE0;
    s32 unkE4;
};

struct Unk_func_000174AC_temp_v0 {
    u8 pad0[0xC0];
    s32 unkC0;
    u8 padC4[0x2C];
    s32 unkF0;
};

struct Unk_func_000181B0_temp_v0 {
    u8 pad0[0xCC];
    s32 unkCC;
};

struct Unk_func_00018440_temp_v0 {
    u8 pad0[0xE0];
    s32 unkE0;
    s32 unkE4;
    u8 padE8[0xC];
    s32 unkF4;
    s32 unkF8;
};

struct Unk_func_0001865C_temp_v0 {
    u8 pad0[0x90];
    s32 unk90;
    s32 unk94;
};

struct Unk_func_00019E48_temp_v0 {
    u8 pad0[0xC4];
    s32 unkC4;
    s32 unkC8;
    s32 unkCC;
};

struct Unk_func_0001A504_temp_v0 {
    u8 pad0[0x104];
    s32 unk104;
};

struct Unk_func_0001BF98_temp_v0 {
    u8 pad0[0xD8];
    s32 unkD8;
    s32 unkDC;
};

struct Unk_func_0001C1EC_temp_v0 {
    u8 pad0[0xC4];
    s32 unkC4;
    s32 unkC8;
};

struct Unk_func_0001C598_temp_v0 {
    u8 pad0[0xE0];
    s32 unkE0;
    s32 unkE4;
};

struct Unk_func_0001CA64_temp_v0 {
    u8 pad0[0xD8];
    s32 unkD8;
    s32 unkDC;
};

struct Unk_func_0001CCE0_temp_v0 {
    u8 pad0[0xC4];
    s32 unkC4;
    s32 unkC8;
};

struct Unk_func_0001CD7C_temp_v0 {
    u8 pad0[0x9C];
    s32 unk9C;
    s32 unkA0;
};

struct Unk_func_0001CE38_temp_v0 {
    u8 pad0[0xAC];
    s32 unkAC;
    s32 unkB0;
};

struct Unk_func_0001D274_temp_v0 {
    u8 pad0[0xC4];
    s32 unkC4;
    s32 unkC8;
};

struct Unk_func_0001D304_temp_s0 {
    u8 pad0[0xCC];
    s32 unkCC;
};

struct Unk_func_0001D52C_temp_v0 {
    u8 pad0[0xC0];
    s32 unkC0;
    s32 unkC4;
};

struct Unk_func_0001D9AC_temp_v0 {
    u8 pad0[0xB0];
    s32 unkB0;
};

struct Unk_func_0001DCA4_1 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_0001DCA4_temp_v0 {
    u8 pad0[0x98];
    s32 unk98;
    u8 pad9C[0x4];
    s32 unkA0;
    u8 padA4[0xC];
    s32 unkB0;
};

struct Unk_func_0001DD1C_temp_v0 {
    u8 pad0[0xC0];
    s32 unkC0;
    s32 unkC4;
};

struct Unk_func_0001E3E0_temp_v0 {
    u8 pad0[0xB8];
    s32 unkB8;
    s32 unkBC;
};

struct Unk_func_0001E520_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
    u8 padAC[0xC];
    s32 unkB8;
    s32 unkBC;
};

struct Unk_func_0001EA8C_temp_v0 {
    u8 pad0[0xB8];
    s32 unkB8;
    s32 unkBC;
};

struct Unk_func_0001EC34_0 {
    u8 pad0[0x88];
    s32 unk88;
    s32 unk8C;
};

struct Unk_func_0001EC40_0 {
    u8 pad0[0x98];
    s32 unk98;
    s32 unk9C;
};

struct Unk_func_0001FACC_temp_v0 {
    u8 pad0[0xC0];
    s32 unkC0;
};

struct Unk_func_0001FDFC_temp_v0 {
    u8 pad0[0xF0];
    s32 unkF0;
    s32 unkF4;
    u8 padF8[0xC];
    s32 unk104;
    s32 unk108;
    u8 pad10C[0xC];
    s32 unk118;
    s32 unk11C;
};

struct Unk_func_0001FF04_temp_v0 {
    u8 pad0[0xF0];
    s32 unkF0;
    u8 padF4[0x10];
    s32 unk104;
    u8 pad108[0x10];
    s32 unk118;
};

struct Unk_func_000200F4_temp_v0 {
    u8 pad0[0xD8];
    s32 unkD8;
    s32 unkDC;
};

struct Unk_func_0002128C_temp_s0 {
    u8 pad0[0x120];
    s32 unk120;
};

struct Unk_func_000218F0_temp_v0 {
    u8 pad0[0xB4];
    s32 unkB4;
    s32 unkB8;
};

struct Unk_func_00021CC8_temp_v0 {
    u8 pad0[0xB4];
    s32 unkB4;
    s32 unkB8;
};

struct Unk_func_00021FF0_0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

struct Unk_func_0002225C_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000229D8_0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_00022A38_0 {
    s32 unk0;
    u8 pad4[0x8];
    s32 unkC;
    s32 unk10;
};

struct Unk_func_00024888_0 {
    u8 pad0[0x90];
    s32 unk90;
    s32 unk94;
    s32 unk98;
    s32 unk9C;
    s32 unkA0;
    u8 padA4[0x4];
    s32 unkA8;
    s32 unkAC;
    u8 padB0[0x4];
    s32 unkB4;
    s32 unkB8;
};

struct Unk_func_00024ECC_temp_v0 {
    s32 unk0;
    u8 pad4[0x278];
    M2C_UNK (*unk27C)(s32);
    s32 unk280;
};

struct Unk_func_00025648_temp_v0 {
    s32 unk0;
    u8 pad4[0x8C];
    s32 unk90;
    s32 unk94;
    s32 unk98;
    s32 unk9C;
    s32 unkA0;
    u8 padA4[0x4];
    s32 unkA8;
    s32 unkAC;
    u8 padB0[0x4];
    s32 unkB4;
    s32 unkB8;
};

struct Unk_func_00025BD8_1 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_00025BD8_temp_v0 {
    s32 unk0;
    u8 pad4[0x258];
    s32 unk25C;
    u8 pad260[0x14];
    s32 unk274;
};

struct Unk_func_00025C84_1 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_00025C84_temp_v0 {
    s32 unk0;
    u8 pad4[0x258];
    s32 unk25C;
    u8 pad260[0x14];
    s32 unk274;
};

struct Unk_func_00025D24_1 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_00025D24_temp_v0 {
    s32 unk0;
    u8 pad4[0x258];
    s32 unk25C;
    u8 pad260[0x14];
    s32 unk274;
};

struct Unk_func_00026110_temp_s0 {
    s32 unk0;
    u8 pad4[0x258];
    s32 unk25C;
    u8 pad260[0x14];
    s32 unk274;
};

struct Unk_func_000265F8_temp_v0 {
    u8 pad0[0x284];
    s32 unk284;
};

struct Unk_func_000266C8_temp_v0_2 {
    s32 unk0;
    u8 pad4[0x274];
    s32 unk278;
};

struct Unk_func_00026748_temp_v0 {
    s32 unk0;
    u8 pad4[0xB0];
    s32 unkB4;
};

struct Unk_func_00026E84_temp_v0 {
    u8 pad0[0xB0];
    s32 unkB0;
    s32 unkB4;
    s32 unkB8;
    s32 unkBC;
    s32 unkC0;
    s32 unkC4;
    s32 unkC8;
    s32 unkCC;
    u8 padD0[0x30];
    s32 unk100;
    s32 unk104;
    u8 pad108[0x4C];
    s32 unk154;
    u8 pad158[0x74];
    s32 unk1CC;
};

struct Unk_func_000274E0_temp_v0 {
    u8 pad0[0xB8];
    s32 unkB8;
    s32 unkBC;
    s32 unkC0;
    s32 unkC4;
    s32 unkC8;
    s32 unkCC;
    u8 padD0[0x30];
    s32 unk100;
    s32 unk104;
};

struct Unk_func_000275F0_temp_s0 {
    u8 pad0[0x1BC];
    s32 unk1BC;
};

struct Unk_func_00027624_temp_v1 {
    u8 pad0[0x1BC];
    s32 unk1BC;
};

struct Unk_func_0002764C_temp_s0 {
    u8 pad0[0x1BC];
    s32 unk1BC;
};

struct Unk_func_00027694_temp_v0_2 {
    u8 pad0[0xD0];
    s32 unkD0;
    s32 unkD4;
};

struct Unk_func_0002A3D4_temp_v0 {
    u8 pad0[0x158];
    s32 unk158;
    u8 pad15C[0x70];
    s32 unk1CC;
};

struct Unk_func_0002AEE0_0 {
    u8 pad0[0x1CC];
    s32 unk1CC;
};

struct Unk_func_0002AF8C_temp_v0 {
    u8 pad0[0x1A8];
    s32 unk1A8;
};

struct Unk_func_0002B9EC_temp_v0 {
    u8 pad0[0xB4];
    s32 unkB4;
};

struct Unk_func_0002BA40_temp_v0 {
    u8 pad0[0xB4];
    s32 unkB4;
};

struct Unk_func_0002BAAC_temp_v0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    u8 padC[0x8];
    s32 unk14;
    u8 pad18[0x18];
    s32 unk30;
};

struct Unk_func_0002C39C_0 {
    s32 unk0;
    u8 pad4[0x120];
    s32 unk124;
    s32 unk128;
    s32 unk12C;
};

struct Unk_func_0002D254_temp_v0 {
    u8 pad0[0x98];
    s32 unk98;
    u8 pad9C[0xC];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
};

struct Unk_func_0002D2E8_temp_s0 {
    s32 unk0;
    u8 pad4[0xA4];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
};

struct Unk_func_0002D35C_temp_a0 {
    u8 pad0[0x170];
    s32 unk170;
};

struct Unk_func_0002D35C_temp_v0 {
    u8 pad0[0xA4];
    s32 unkA4;
    u8 padA8[0x8];
    s32 unkB0;
};

struct Unk_func_0002D3C0_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
};

struct Unk_func_0002D44C_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
};

struct Unk_func_00030350_0 {
    u8 pad0[0xE0];
    s32 unkE0;
};

struct Unk_func_000303A8_temp_v0 {
    u8 pad0[0xE0];
    s32 unkE0;
};

struct Unk_func_00030410_temp_v0 {
    u8 pad0[0xE0];
    s32 unkE0;
};

struct Unk_func_00030480_temp_v0 {
    u8 pad0[0xE0];
    s32 unkE0;
};

struct Unk_func_00030508_0 {
    u8 pad0[0xE0];
    s32 unkE0;
};

struct Unk_func_00030A40_temp_v0 {
    u8 pad0[0xB4];
    s32 unkB4;
};

struct Unk_func_00030CE8_temp_s0 {
    u8 pad0[0xE0];
    s32 unkE0;
};

struct Unk_func_00030D4C_1 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00030F40_temp_v0 {
    s32 unk0;
    u8 pad4[0x9C];
    s32 unkA0;
};

struct Unk_func_00031DAC_0 {
    u8 pad0[0x34];
    struct Unk_func_00031DAC_temp_s0 *unk34;
    u8 pad38[0x8];
    s32 unk40;
};

struct Unk_func_00031DAC_temp_s0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00031E20_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00031E8C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00033408_temp_v0 {
    u8 pad0[0xEC];
    s32 unkEC;
    u8 padF0[0x18];
    s32 unk108;
};

struct Unk_func_0003346C_temp_s1 {
    u8 pad0[0xEC];
    s32 unkEC;
    u8 padF0[0x18];
    s32 unk108;
};

struct Unk_func_000334F0_temp_s0 {
    u8 pad0[0xD8];
    s32 unkD8;
};

struct Unk_func_000334F0_temp_s1 {
    u8 pad0[0x1C40];
    s32 unk1C40;
};

struct Unk_func_00033C54_0 {
    u8 pad0[0xF0];
    s32 unkF0;
};

struct Unk_func_00033C70_0 {
    u8 pad0[0xF4];
    s32 unkF4;
};

struct Unk_func_00033C8C_0 {
    u8 pad0[0xFC];
    s32 unkFC;
};

struct Unk_func_00033CA8_temp_v0 {
    s32 unk0;
    u8 pad4[0x9C];
    s32 unkA0;
};

struct Unk_func_000348B0_1 {
    u8 pad0[0xA0];
    s32 unkA0;
    u8 padA4[0x64];
    s32 unk108;
};

struct Unk_func_000369F4_temp_v0 {
    u8 pad0[0x98];
    s32 unk98;
};

struct Unk_func_00038390_temp_v0 {
    s32 unk0;
    u8 pad4[0x94];
    s32 unk98;
    u8 pad9C[0x4];
    s32 unkA0;
    s32 unkA4;
};

struct Unk_func_000385A8_0 {
    u8 pad0[0x98];
    s32 unk98;
    u8 pad9C[0xC];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
};

struct Unk_func_000385A8_temp_s0 {
    u8 pad0[0x170];
    s32 unk170;
    u8 pad174[0x4];
    s32 unk178;
    u8 pad17C[0x4];
    s32 unk180;
};

struct Unk_func_0003A128_temp_v0 {
    u8 pad0[0x98];
    s32 unk98;
    u8 pad9C[0x28];
    s32 unkC4;
};

struct Unk_func_0003A260_temp_v0 {
    u8 pad0[0x98];
    s32 unk98;
    u8 pad9C[0x28];
    s32 unkC4;
};

struct Unk_func_0003AE10_1 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_0003AE10_temp_v0 {
    u8 pad0[0x9C];
    s32 unk9C;
    u8 padA0[0x4];
    s32 unkA4;
};

struct Unk_func_0003B7F0_temp_v0 {
    u8 pad0[0x98];
    s32 unk98;
};

struct Unk_func_0003B924_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_0003C140_temp_v0 {
    u8 pad0[0xB0];
    s32 unkB0;
    s32 unkB4;
};

struct Unk_func_0003C264_temp_v0 {
    s32 unk0;
    u8 pad4[0xA4];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
    s32 unkB4;
};

struct Unk_func_0003C314_temp_v0 {
    u8 pad0[0xB0];
    s32 unkB0;
};

struct Unk_func_0003DF44_temp_v0 {
    u8 pad0[0xB0];
    s32 unkB0;
    s32 unkB4;
};

struct Unk_func_0003DFC4_temp_v0 {
    s32 unk0;
    u8 pad4[0xA4];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
    s32 unkB4;
};

struct Unk_func_0003E040_temp_v0 {
    s32 unk0;
    u8 pad4[0xA4];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
    s32 unkB4;
};

struct Unk_func_0003E0E0_temp_v0 {
    u8 pad0[0xB0];
    s32 unkB0;
};

struct Unk_func_0003E1D0_temp_v0 {
    u8 pad0[0xAC];
    s32 unkAC;
    s32 unkB0;
};

struct Unk_func_0003E3A8_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
    s32 unkB4;
};

struct Unk_func_0003E430_temp_v0 {
    u8 pad0[0xB0];
    s32 unkB0;
};

struct Unk_func_0003EA20_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
};

struct Unk_func_0003EA20_temp_v0_2 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct Unk_func_0003EADC_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
};

struct Unk_func_0003EB34_temp_s1 {
    u8 pad0[0x178];
    s32 unk178;
    u8 pad17C[0x4];
    s32 unk180;
};

struct Unk_func_0003EB34_temp_v0 {
    u8 pad0[0xA4];
    s32 unkA4;
    u8 padA8[0x8];
    s32 unkB0;
};

struct Unk_func_0003EBA8_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
};

struct Unk_func_0003EC2C_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
};

struct Unk_func_0003F6FC_temp_v0 {
    u8 pad0[0x9C];
    s32 unk9C;
    u8 padA0[0x28];
    s32 unkC8;
};

struct Unk_func_0003F76C_temp_v0 {
    s32 unk0;
    u8 pad4[0x7C];
    s32 unk80;
    u8 pad84[0x18];
    s32 unk9C;
    u8 padA0[0x28];
    s32 unkC8;
};

struct Unk_func_0003F81C_temp_v0 {
    u8 pad0[0x9C];
    s32 unk9C;
};

struct Unk_func_00040038_0 {
    u8 pad0[0xAC];
    s32 unkAC;
    s32 unkB0;
    s32 unkB4;
    s32 unkB8;
    s32 unkBC;
};

struct Unk_func_00040420_0 {
    u8 pad0[0xC8];
    s32 unkC8;
    u8 padCC[0x8];
    s32 unkD4;
};

struct Unk_func_00040420_temp_v0_3 {
    u8 pad0[0x168];
    s32 unk168;
};

struct Unk_func_00041240_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
    s32 unkAC;
    s32 unkB0;
};

struct Unk_func_00041240_temp_v0_2 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000414AC_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
};

struct Unk_func_000414AC_temp_v0_2 {
    u8 pad0[0x16C];
    s32 unk16C;
    u8 pad170[0x4];
    s32 unk174;
};

struct Unk_func_00041588_temp_v0 {
    u8 pad0[0xB0];
    s32 unkB0;
};

struct Unk_func_00041588_temp_v0_2 {
    u8 pad0[0x16C];
    s32 unk16C;
    u8 pad170[0x4];
    s32 unk174;
};

struct Unk_func_000415EC_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
    s32 unkB4;
};

struct Unk_func_000416B4_temp_v0 {
    u8 pad0[0xA8];
    s32 unkA8;
};

struct Unk_func_00041700_1 {
    u8 pad0[0x10];
    s32 unk10;
};

struct Unk_func_00041700_temp_v0 {
    s32 unk0;
    u8 pad4[0x7C];
    s32 unk80;
    u8 pad84[0x14];
    s32 unk98;
    u8 pad9C[0x4];
    s32 unkA0;
    u8 padA4[0x4];
    s32 unkA8;
    u8 padAC[0x4];
    s32 unkB0;
};

struct Unk_func_00042330_temp_v0 {
    u8 pad0[0xB4];
    s32 unkB4;
    s32 unkB8;
    s32 unkBC;
    s32 unkC0;
    s32 unkC4;
    s32 unkC8;
    u8 padCC[0x4];
    s32 unkD0;
    u8 padD4[0x8];
    s32 unkDC;
};

struct Unk_func_000423F8_temp_v0 {
    s32 unk0;
    u8 pad4[0x98];
    s32 unk9C;
    u8 padA0[0x3C];
    s32 unkDC;
    s32 unkE0;
};

struct Unk_func_000424A8_temp_s0 {
    s32 unk0;
    u8 pad4[0x98];
    s32 unk9C;
    u8 padA0[0x3C];
    s32 unkDC;
    s32 unkE0;
    u8 padE4[0x4];
    s32 unkE8;
    u8 padEC[0x8];
    s32 unkF4;
};

struct Unk_func_00042558_temp_v0 {
    u8 pad0[0x9C];
    s32 unk9C;
};

struct Unk_func_0004262C_1 {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad14[0x4];
    s32 unk18;
};

struct Unk_func_0004262C_temp_v0 {
    s32 unk0;
    u8 pad4[0x7C];
    s32 unk80;
    u8 pad84[0x14];
    s32 unk98;
    s32 unk9C;
    u8 padA0[0xC];
    s32 unkAC;
    s32 unkB0;
    u8 padB4[0x20];
    s32 unkD4;
};

struct Unk_func_00043008_temp_v0 {
    u8 pad0[0x98];
    s32 unk98;
    u8 pad9C[0x3C];
    s32 unkD8;
};

struct Unk_func_000436EC_0 {
    u8 pad0[0xF8];
    s32 unkF8;
};

struct Unk_func_00043A0C_1 {
    u8 pad0[0x9C];
    s32 unk9C;
    u8 padA0[0x14];
    s32 unkB4;
    u8 padB8[0x14];
    s32 unkCC;
};

struct Unk_func_00045460_temp_v0 {
    u8 pad0[0xA4];
    s32 unkA4;
    u8 padA8[0xC];
    s32 unkB4;
};

struct Unk_func_000454B8_temp_v0 {
    u8 pad0[0xA4];
    s32 unkA4;
    u8 padA8[0xC];
    s32 unkB4;
};

struct Unk_func_0004550C_temp_v0 {
    u8 pad0[0xA4];
    s32 unkA4;
};

struct Unk_func_000456F4_temp_s1 {
    u8 pad0[0xA4];
    s32 unkA4;
};

struct Unk_func_00045E20_temp_v0 {
    u8 pad0[0x128];
    s32 unk128;
};

struct Unk_func_00046DB4_temp_v0 {
    s32 unk0;
    u8 pad4[0xC];
    s32 unk10;
};

struct Unk_func_0004A3B8_0 {
    u8 pad0[0x284];
    M2C_UNK * unk284;
    M2C_UNK * unk288;
    s32 unk28C;
};

struct Unk_func_0004A4D0_0 {
    u8 pad0[0x280];
    s32 unk280;
    u8 pad284[0x8];
    s32 unk28C;
};

struct Unk_func_0004A7A0_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0004A7AC_0 {
    u8 pad0[0x2BA];
    u16 unk2BA;
};

struct Unk_func_0004BD90_1 {
    u8 pad0[0x6644];
    s32 unk6644;
};

struct Unk_func_0005996C_temp_v0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_0005A5FC_0 {
    u8 pad0[0xE];
    s16 unkE;
};

struct Unk_module_reboot_before_temp_s0 {
    u8 pad0[0x1C38];
    s32 unk1C38;
    s32 unk1C3C;
    s32 unk1C40;
};

struct Unk_sceHVUI_Module_55C70B0A_temp_v0 {
    u8 pad0[0x1B24];
    s32 unk1B24;
    u8 pad1B28[0xCC];
    s32 unk1BF4;
    u8 pad1BF8[0x3C];
    s32 unk1C34;
};

struct Unk_vt_func_00016C3C_arg0 {
    u8 pad0[0xC0];
    s32 unkC0;
};

struct Unk_vt_func_00016F20_arg0 {
    u8 pad0[0xBC];
    s32 unkBC;
};

struct Unk_vt_func_0001D344_arg0 {
    u8 pad0[0xCC];
    s32 unkCC;
};

struct Unk_vt_func_00020D04_arg0 {
    u8 pad0[0xC0];
    s32 unkC0;
};

struct Unk_vt_func_000212CC_arg0 {
    u8 pad0[0x120];
    s32 unk120;
};

extern M2C_UNK D_0005E250;
extern M2C_UNK D_0005EDCC;
extern M2C_UNK D_0005F364;
extern M2C_UNK D_0005F408;
extern M2C_UNK D_0005FB0C;
extern M2C_UNK D_0005FE58;
extern s32 D_00061018;
extern s32 D_00061498;
extern M2C_UNK D_0006190C;
extern s32 D_00061994;
extern s32 D_000619C0;
extern M2C_UNK D_00061A08;
extern s32 D_00061A28;
extern M2C_UNK D_00061A2C;
extern s32 D_00063554;
extern s32 D_00063610;
extern s32 D_00063618;
extern s32 D_0006361C;
extern s32 D_00063620;
extern s32 D_00063624;
extern s32 D_0006362C;
extern s32 D_00063630;
extern s32 D_000638C0;
extern M2C_UNK D_000638C4;
extern s32 D_000638D0;
extern s32 D_000638D4;
extern s32 D_000638D8;
extern s32 D_000638DC;
extern s32 D_000638E0;
extern s32 D_000638E4;
extern M2C_UNK D_00063D00;
extern s32 D_00063F98;
extern s32 D_00063F9C;
extern s32 D_000641A4;
extern M2C_UNK D_000641A8;
extern u16 D_00064228;
extern s32 D_0006423C;
extern s32 D_0006424C;
extern M2C_UNK D_00064360;
extern s32 D_0006437C;
extern s32 D_00064384;
extern s32 D_00064388;
extern s32 *D_0006438C;
extern s32 D_00064390;
extern s32 D_000644D8;
extern void *D_000644E0;
extern struct D_000644E4_s D_000644E4;
extern s32 D_00064510;
extern s32 D_00064514;
extern s32 D_0006D9D4;
extern s32 D_0006D9D8;
extern s32 D_0006DA5C;
extern s32 D_0006DA64;
extern s32 D_0006DA68;
extern s32 D_0006DA6C;
extern struct D_0006E670_s D_0006E670;
extern M2C_UNK func_00008DC0;
extern M2C_UNK func_000099EC;
extern M2C_UNK func_00009F80;
extern M2C_UNK func_0000BBAC;
extern M2C_UNK func_00023838;
extern M2C_UNK func_00030BFC;
extern M2C_UNK func_00031708;
extern M2C_UNK func_00032FEC;
extern M2C_UNK func_00035D18;
extern M2C_UNK func_00035DF4;
extern M2C_UNK func_00035ED4;
extern M2C_UNK func_0003BB4C;
extern M2C_UNK func_00040B08;
extern M2C_UNK func_00040ECC;
extern M2C_UNK func_00040F2C;
extern M2C_UNK func_0004130C;
extern M2C_UNK func_00043738;
extern M2C_UNK func_00044E94;
extern M2C_UNK func_00058288;

s32 func_0000055C(void);
void func_00000564(void);
s32 func_00000580(void);
s32 func_00000588(void);
s32 func_00000590(void);
s32 func_00000598(void);
s32 func_000005A0(void);
s32 func_000005A8(void);
s32 func_000005B0(void);
s32 func_000005B8(void);
s32 func_000005C0(void);
void func_00000620(void);
void func_0000063C(void);
s32 func_00000658(void);
s32 func_00000670(void);
void func_00000678(void);
M2C_UNK *func_000006C4(void);
s32 func_000006D0(s32 arg0);
M2C_UNK func_00000C6C();
void func_00000EDC(void);
void func_00000FBC(s32 arg0);
s32 func_00000FDC();
void func_00001068(void);
s32 func_00001094(void);
s32 func_000016F4(void);
void func_00002298(void);
void func_00002958(void);
s32 func_000029C0(s32);
void *func_00003480(struct Unk_func_00003480_0 *arg0, s32 *arg1);
void *func_000034B8(u8 *arg0);
s32 func_00003AC4(s32);
void *func_00003D10();
s32 func_00003D1C(void);
s32 func_00003D28(void);
s32 func_00003D34(void);
s32 func_00003D40(void);
M2C_UNK func_00003D4C(M2C_UNK);
void func_00003D80(s32 arg0);
s32 func_00003D8C(void);
void func_00003D98(s32 arg0);
s32 func_00003E24(s32 arg0, s32 *arg1, s32 *arg2);
s32 func_00004060(s32, s32);
M2C_UNK func_000041C0();
M2C_UNK func_0000427C();
s32 func_000042A4(void);
M2C_UNK func_00004408(M2C_UNK);
s32 func_00004430(void);
s32 func_00004464(void);
s32 func_00004498(void);
s32 func_000044CC(void *arg0, s32 arg1, s32 arg2);
s32 func_00004500(s32 arg0);
s32 func_00004534(s32 arg0, void *arg1, s32 arg2);
M2C_UNK func_00004568(s32);
M2C_UNK func_000045D0();
s32 func_00004604(s32 arg0, void *arg1, u32 arg2);
s32 func_00004638(s32 arg0);
s32 func_0000466C(s32 arg0, void *arg1, u32 arg2);
s32 func_000046A0(s32 arg0, void *arg1);
s32 func_000046D4(s32 arg0, void *arg1);
s32 func_00004708(s32 arg0);
s32 func_0000473C(s32 arg0);
s32 func_00004770(s32 arg0);
s32 func_000047A4(s32 arg0, void *arg1);
void func_000047D8(void);
void func_000047F4(void);
void func_00004810(void);
void func_0000487C(void);
void func_000048A4(s32 arg0);
void func_000048B0(void);
M2C_UNK func_000048E0(s32, M2C_UNK, M2C_UNK);
M2C_UNK func_000049B8(s32, M2C_UNK, M2C_UNK);
void func_00004A54(void);
s32 func_00004B3C(void);
void func_00004BB4(void);
void func_00004BE0(void);
void func_00004C18(void);
void func_00004C54(s32 arg0);
s32 func_00004C84(void);
s32 func_00004CBC(s32 *arg0);
void func_00004D04(s32 arg0);
s32 func_00005748(void);
void func_00005A80(void);
void func_00005AC8(void);
s32 func_00005B04(void);
void func_00005C78(void);
void *func_00005EB0();
void func_00005EE4(void);
void func_00005F00(void);
s32 func_00006188(s32, s32, s32, s32);
s32 func_000062A4(void);
void func_000062F4(void);
void func_0000632C(void);
void func_000066C0(struct Unk_func_000066C0_0 *arg0);
void func_00007F3C(s32 arg0, s32 *arg1);
s32 func_000083D8(s32, s32, s32, s32, s32);
s32 func_00008528(s32 *arg0);
s32 func_00008560(s32);
void func_0000873C(void);
M2C_UNK func_00008794();
M2C_UNK func_000087D0();
s32 func_000087F4(s32, s32, s32);
void func_00008B04(s32 arg0, M2C_UNK arg1);
s32 func_00008B48(struct Unk_func_00008B48_0 *arg0);
M2C_UNK func_00008B50(M2C_UNK, s32);
void func_00008B78(s32 arg0);
s32 func_00008BF0(struct Unk_func_00008BF0_0 *arg0);
M2C_UNK func_00008BF8(M2C_UNK, s32);
void func_00008C20(s32 arg0);
M2C_UNK func_00008C98(void *);
M2C_UNK func_00008DE4();
void func_00008E58(void);
void func_00008E74(struct Unk_func_00008E74_0 *arg0, s32 arg1, s32 arg2);
void func_00008E80(struct Unk_func_00008E80_0 *arg0, s32 arg1, s32 arg2);
s32 func_00008E8C(struct Unk_func_00008E8C_0 *arg0);
s32 func_00008E98(struct Unk_func_00008E98_0 *arg0);
M2C_UNK func_00008EA0(M2C_UNK, s32);
void func_00008EC8(s32 arg0);
void func_00008F54(void);
M2C_UNK func_00008F5C(s32);
void func_00009064(struct Unk_func_00009064_0 *arg0);
void func_00009120(struct Unk_func_00009120_0 *arg0);
M2C_UNK func_00009148(void *);
s32 func_0000916C(void);
void func_000091C4(s32 arg0);
s32 func_00009200();
s32 func_000093B8(s32, s32);
s32 func_000093F8(s32 arg0, s32 arg1);
void func_000096F4(struct Unk_func_000096F4_0 *arg0, s32 arg1);
s32 func_000099D0(s32, s32);
void func_00009A10(s32 arg0, s32 arg1);
M2C_UNK func_00009E44(void *, void *);
void func_00009E5C(struct Unk_func_00009E5C_0 *arg0);
void func_00009FA4(s32 arg0);
void func_0000A020(s32 arg0);
void func_0000A0D4(s32 arg0);
M2C_UNK func_0000A57C(s32, s32, M2C_UNK);
void func_0000A5F8(s32 arg0, s32 arg1, M2C_UNK arg2);
s32 func_0000A724(s32, s32, M2C_UNK, M2C_UNK);
s32 func_0000A834(s32, s32, M2C_UNK);
s32 func_0000A8C4(s32 arg0, s32 arg1, M2C_UNK arg2);
s32 func_0000A92C(s32 arg0, s32 arg1, M2C_UNK arg2);
s32 func_0000AD94(s32, void *);
M2C_UNK func_0000AE28(s32, s32);
M2C_UNK func_0000AE44(s32, s32);
s32 func_0000AF10(s32 arg0, s32 arg1);
s32 func_0000B384(s32 arg0);
M2C_UNK func_0000BA58(s32, s32, M2C_UNK);
void func_0000BBCC(s32 arg0);
s32 func_0000BDB4(s32 arg0, s32 arg1);
M2C_UNK func_0000BE14(s32, s32, s32, M2C_UNK);
void func_0000C0F4(s32 arg0, s32 arg1, s32 arg2);
void func_0000C114(s32 arg0, s32 arg1, s32 arg2);
s16 func_0000C138(s16 arg0, s16 arg1, s16 arg2, s16 arg3);
M2C_UNK func_0000C178(s16, s32, u32, u32);
M2C_UNK func_0000C1D0(s32, s16, s32, u32);
void func_0000C22C(s16 arg0, s16 arg1, s32 arg2, s32 arg3);
void func_0000C2A0(s16 arg0, s16 arg1, s32 arg2, s32 arg3);
M2C_UNK func_0000C804();
void func_0000CC64(void);
s32 func_0000CE20(s32, s32);
s32 func_0000CE4C(void **arg0, s32 arg1);
s32 func_0000E2BC(s32 *arg0);
M2C_UNK func_0000E3FC(s32, s32, M2C_UNK);
void func_0000E518(void);
M2C_UNK func_0000EC10(s32);
s32 func_0000ECB4(void);
void func_0000ECBC(void);
void func_0000ED68(void);
s32 func_0000F6C0(s32 arg0);
M2C_UNK func_0000F714(s32);
s32 func_0000F7F8(s32 arg0);
void func_0000FA7C(struct Unk_func_0000FA7C_0 *arg0);
M2C_UNK func_0000FC3C(s32, s32);
void func_0000FCB4(s32 arg0);
void func_0000FDE0(struct Unk_func_0000FDE0_0 *arg0, s32 arg1);
s32 func_0000FE1C(s32 arg0);
void func_0000FE64(struct Unk_func_0000FE64_0 *arg0);
M2C_UNK func_0000FFDC(s32);
void func_0001004C(void);
void func_0001035C(struct Unk_func_0001035C_0 *arg0, s32 arg1, s32 arg2);
M2C_UNK func_00010564(s32, s32);
s32 func_00010670(s32, s32);
M2C_UNK func_000106D0(s32, s32);
M2C_UNK func_00010730(s32, s32);
void func_000108AC(void);
M2C_UNK func_000108B4(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_00010A68(void *, s32);
M2C_UNK func_00010A88(s32, s32);
s32 func_00010AA8(s32 arg0, s32 arg1);
s32 func_000111BC(s32, s32, s32);
M2C_UNK func_0001153C(M2C_UNK, s32);
M2C_UNK func_00011618(M2C_UNK, s32);
s32 func_00011668(struct Unk_func_00011668_0 *arg0, s32 arg1);
M2C_UNK func_0001178C(void *);
void func_000117F0(struct Unk_func_000117F0_0 *arg0);
void func_00011870(s16 *arg0, s16 arg1);
s32 func_00011964(s32 arg0, M2C_UNK arg1);
s32 func_000119B8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_00011A1C(s32 arg0, M2C_UNK arg1);
s32 func_00011A70(s32 arg0);
s32 func_00011AB4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_00011B28(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_00011D5C(s32 arg0);
M2C_UNK func_00011DC0(s32);
void func_00011EC4(struct Unk_func_00011EC4_0 *arg0);
void func_00011F38(struct Unk_func_00011F38_0 *arg0, s32 arg1);
M2C_UNK func_00011F74(void *, s32);
s32 func_00012020(struct Unk_func_00012020_0 *arg0, struct Unk_func_00012020_1 *arg1);
s32 func_00012068(struct Unk_func_00012068_0 *arg0);
s32 func_000120B4(struct Unk_func_000120B4_0 *arg0);
s32 func_00012564(struct Unk_func_00012564_0 *arg0, struct Unk_func_00012564_1 *arg1, M2C_UNK arg2);
s32 func_000125D4(struct Unk_func_000125D4_0 *arg0, struct Unk_func_000125D4_1 *arg1, M2C_UNK arg2);
s32 func_00012644(struct Unk_func_00012644_0 *arg0, struct Unk_func_00012644_1 *arg1, M2C_UNK arg2);
s32 func_000126B4(struct Unk_func_000126B4_0 *arg0, struct Unk_func_000126B4_1 *arg1, M2C_UNK arg2);
M2C_UNK func_0001275C(s32);
void func_00012EC0(s32 arg0);
void func_00012F74(s32 arg0, struct Unk_func_00012F74_1 *arg1);
M2C_UNK func_00013044(void *, M2C_UNK);
M2C_UNK func_00013290(s32, M2C_UNK);
void func_00013394(s32 arg0, M2C_UNK arg1);
void func_000133E0(s32 arg0, s32 arg1);
M2C_UNK func_00013438(s32, s32);
void func_000134B8(s32 arg0, s32 arg1);
M2C_UNK func_000134F4(s32, s32);
s32 func_000135A8(s32 arg0, M2C_UNK arg1);
M2C_UNK func_0001372C(s32, M2C_UNK);
s32 func_00013874(s32 arg0);
void func_00013904(s32 arg0, s32 arg1, s32 arg2);
void func_00013920(s32 arg0, s32 arg1, s32 arg2);
s32 func_0001393C(s32, s32, s32, s32);
void func_00013AF8(s32 arg0);
M2C_UNK func_00013C34(void *);
void func_00013D90(s32 arg0, s32 arg1, s32 arg2);
void func_00013DE4(s32 arg0, M2C_UNK arg1);
void func_00013F3C(s32 arg0, s32 arg1);
s32 func_00013F94(s32 arg0, struct Unk_func_00013F94_1 *arg1);
s32 func_00014280(s32 arg0);
void func_00014474(s32 arg0);
s32 func_00014510(s32);
void func_0001463C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_000146B0(void);
s32 func_00014924(s32 arg0);
void func_00014B98(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_00014BB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_00014BD8(s32, s32, s32, s32, s32, s32, s32);
void func_00014DA8(s32 arg0);
M2C_UNK func_00014E58(void *, M2C_UNK);
void func_000152C8(s32 arg0, s32 arg1);
void func_000153E4(s32 arg0, s32 arg1);
void func_0001550C(s32 arg0, s32 arg1);
s32 func_00015568(s32 arg0, s32 arg1, s32 arg2);
s32 func_000155D0(s32 arg0, s32 arg1, s32 arg2);
s32 func_00015638(s32 arg0, s32 arg1, s32 arg2);
s32 func_000156A0(s32 arg0, s32 arg1, s32 arg2);
s32 func_00015D6C(s32 arg0);
s32 func_00015EF4(void);
M2C_UNK func_00015EFC(s32);
M2C_UNK func_00015F78(s32);
void func_0001628C(s32 arg0, s32 arg1, s32 arg2);
void func_000162A8(s32 arg0, s32 arg1, s32 arg2);
s32 func_000162C4(s32, s32, s32, s32);
void func_000164A8(s32 arg0);
s32 func_00016684(s32 arg0);
s32 func_00016C24(void);
s32 func_00016C2C(void);
s32 func_00016C34(void);
s32 func_00016C3C(struct Unk_vt_func_00016C3C_arg0 **arg0);
s32 func_00016C48(s32, M2C_UNK);
void func_00016CF0(s32 *arg0, s32 arg1);
s32 func_00016F20(struct Unk_vt_func_00016F20_arg0 **arg0);
s32 func_00016F2C(void **, s32);
M2C_UNK func_000170D0(s32);
M2C_UNK func_000171F0(s32 *, s32, M2C_UNK);
void func_00017330(s32 arg0, s32 arg1, s32 arg2);
s32 func_00017384(s32, M2C_UNK);
s32 func_000174AC(s32 arg0);
void func_00017500(s32 arg0, s32 arg1);
M2C_UNK func_000177CC(s32, s32);
s32 func_000180BC(s32, M2C_UNK, s32);
s32 func_000181B0(s32 arg0);
void func_00018440(s32 arg0);
M2C_UNK func_000185A4(s32, M2C_UNK, M2C_UNK);
void func_0001865C(s32 arg0, s32 *arg1, s32 *arg2);
s32 func_00018F6C(void);
void func_0001903C(s32 arg0, s32 arg1);
s32 func_0001941C(s32, s32, s32, s32, s32, s32, s32);
M2C_UNK func_00019718(s32, s32);
s32 func_00019E48(s32 arg0);
M2C_UNK func_00019ED4(s32);
s32 func_00019FF8(s32 arg0);
void func_0001A4C0(s32 arg0, s32 arg1);
void func_0001A504(s32 arg0, s32 arg1);
M2C_UNK func_0001A618(s32, M2C_UNK, M2C_UNK);
void func_0001BF98(s32 arg0);
M2C_UNK func_0001C034(void *, M2C_UNK, M2C_UNK);
void func_0001C0D4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
void func_0001C1EC(s32 arg0, s32 arg1, s32 arg2);
void func_0001C310(s32 arg0, s32 arg1);
s32 func_0001C590(void);
void func_0001C598(s32 arg0, s32 arg1, s32 arg2);
void func_0001C5EC(s32 arg0);
s32 func_0001CA64(s32 arg0);
void func_0001CAF4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0001CB10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0001CB2C(s32, s32, s32, s32, s32, s32);
void func_0001CCE0(s32 arg0);
void func_0001CD7C(s32 arg0, s32 arg1, s32 arg2);
void func_0001CE38(s32 arg0, s32 arg1);
s32 func_0001CE84(void);
s32 func_0001D274(s32 arg0);
void func_0001D304(s32 arg0);
s32 func_0001D344(struct Unk_vt_func_0001D344_arg0 **arg0);
void func_0001D350(s32 arg0, s32 arg1, s32 arg2);
void func_0001D36C(s32 arg0, s32 arg1, s32 arg2);
s32 func_0001D388(s32, s32, s32, s32);
void func_0001D52C(s32 arg0);
M2C_UNK func_0001D5C8(void *, M2C_UNK);
void func_0001D750(s32 arg0, s32 arg1);
void func_0001D794(s32 arg0, s32 arg1);
M2C_UNK func_0001D898(s32);
void func_0001D9AC(s32 arg0, s32 arg1);
s32 func_0001DCA4(s32 arg0, struct Unk_func_0001DCA4_1 *arg1);
s32 func_0001DD1C(s32 arg0);
void func_0001E02C(s32 arg0);
s32 func_0001E264(void);
void func_0001E3E0(s32 arg0);
void func_0001E520(s32 arg0, s32 arg1);
s32 func_0001E5BC(void);
M2C_UNK func_0001E6B4(void *, s32);
s32 func_0001EA8C(s32 arg0);
M2C_UNK func_0001EB1C();
M2C_UNK func_0001EBE0(void *);
void func_0001EC34(struct Unk_func_0001EC34_0 *arg0, s32 arg1, s32 arg2);
void func_0001EC40(struct Unk_func_0001EC40_0 *arg0);
M2C_UNK func_0001EC68(void *);
M2C_UNK func_0001EC88(void *, M2C_UNK);
s32 func_0001EF04(s32 arg0);
void func_0001EF4C(s32 arg0);
void func_0001EF68(s32 arg0);
M2C_UNK func_0001F9D4(s32, M2C_UNK, M2C_UNK, s32);
s32 func_0001FACC(s32 arg0, M2C_UNK arg1);
M2C_UNK func_0001FB3C(s32, M2C_UNK, M2C_UNK);
void func_0001FD74(s32 arg0, M2C_UNK arg1);
void func_0001FDB8(s32 arg0, s32 arg1);
void func_0001FDFC(s32 arg0);
s32 func_0001FF04(s32 arg0);
void func_000200F4(s32 arg0, s32 arg1, s32 arg2);
void func_00020140(s32 arg0);
s32 func_00020AE8(void);
s32 func_00020D04(struct Unk_vt_func_00020D04_arg0 **arg0);
M2C_UNK func_00021098(s32);
void func_0002128C(s32 arg0);
s32 func_000212CC(struct Unk_vt_func_000212CC_arg0 **arg0);
M2C_UNK func_000212D8();
void func_0002134C(void *arg0);
void func_00021378(s32 arg0);
void func_000214BC(s32 arg0);
void func_000218F0(s32 arg0, s32 arg1, s32 arg2);
s32 func_00021990(s32 arg0);
s32 func_000219E8(void);
void func_00021AE4(void *arg0);
void func_00021B00(s32 arg0);
s32 func_00021C44(void);
void func_00021CC8(s32 arg0, s32 arg1, s32 arg2);
s32 func_00021D68(s32 arg0);
s32 func_00021DC0(void);
void func_00021FF0(struct Unk_func_00021FF0_0 *arg0);
void func_00022140(s32 arg0);
void func_0002225C(struct Unk_func_0002225C_0 *arg0);
s32 func_000229D8(struct Unk_func_000229D8_0 *arg0);
s32 func_00022A38(struct Unk_func_00022A38_0 *arg0);
M2C_UNK func_00022AF0(s32);
M2C_UNK func_00022B64(void *);
s32 func_00022CB4(void *);
s32 func_00022CD0(s32 arg0);
s32 func_00022D14(void *);
s32 func_00022D30(s32 arg0);
M2C_UNK *func_00024810(void);
M2C_UNK func_0002481C(void *);
void func_00024888(struct Unk_func_00024888_0 *arg0);
s32 func_00024CAC(s32, s32, s32, s32, s32);
void func_00024ECC(s32 arg0);
M2C_UNK func_00024F48(s32);
M2C_UNK func_00024F84();
s32 func_00024FB8(s32 arg0);
M2C_UNK func_00025134(void *, M2C_UNK);
s32 func_000255F4(s32 arg0);
s32 func_00025640(void);
s32 func_00025648(s32 arg0);
s32 func_00025BD8(s32 arg0, struct Unk_func_00025BD8_1 *arg1);
s32 func_00025C84(s32 arg0, struct Unk_func_00025C84_1 *arg1);
s32 func_00025D24(s32 arg0, struct Unk_func_00025D24_1 *arg1);
s32 func_00026108(void);
s32 func_00026110(s32 arg0);
s32 func_00026320(void);
s32 func_00026354(void);
s32 func_0002638C();
s32 func_000263C4(void);
s32 func_00026414(void *, M2C_UNK);
M2C_UNK func_0002649C(s32, M2C_UNK);
s32 func_000265F8(s32 arg0);
M2C_UNK func_0002665C(s32, M2C_UNK);
s32 func_000266C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_00026748(s32 arg0);
M2C_UNK func_000267A8(M2C_UNK);
M2C_UNK func_00026870(M2C_UNK);
void func_00026E84(s32 arg0);
s32 func_000274E0(s32 arg0);
void func_000275F0(void **arg0);
void func_00027624(void **arg0);
void func_0002764C(void **arg0);
s32 func_00027694(void **arg0, s32 arg1);
s32 func_00027D84(void);
s32 func_000283B4(s32 arg0);
void func_00028608(void);
void func_00029E28(s32 arg0);
void func_0002A3D4(s32 arg0, s32 arg1);
void func_0002A468(s32 arg0);
void func_0002AEE0(struct Unk_func_0002AEE0_0 *arg0);
s32 func_0002AF8C(s32 arg0);
s32 func_0002B9EC(s32 arg0);
void func_0002BA40(s32 arg0);
void func_0002BAAC(s32 arg0);
void func_0002C39C(struct Unk_func_0002C39C_0 *arg0);
void func_0002C3FC(s32 arg0);
s32 func_0002CF38(void);
M2C_UNK func_0002CF6C(M2C_UNK, M2C_UNK, s32);
s32 func_0002CFB8();
void func_0002CFDC(s32 arg0);
void func_0002D000(s32 arg0);
s32 func_0002D050(s32, s32, s32, s32);
void func_0002D254(s32 arg0);
s32 func_0002D2E8(s32 arg0);
void func_0002D35C(s32 arg0);
s32 func_0002D3C0(s32 arg0);
s32 func_0002D44C(s32 arg0);
void func_0002DAA4(s32 arg0);
s32 func_0002DAF0(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK func_0002F35C(s32, M2C_UNK);
M2C_UNK func_0002F488(s32, M2C_UNK);
M2C_UNK func_0002F5AC();
void func_0002F630(s32 arg0);
s32 func_0002F680(s32, void *, s32);
M2C_UNK func_0002F99C(s32);
void func_0002FA30(s32 arg0);
s32 func_0002FC9C(void *);
void func_00030350(struct Unk_func_00030350_0 *arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_000303A8(s32 arg0);
s32 func_00030410(s32 arg0);
s32 func_00030480(s32 arg0, s32 arg1);
s32 func_00030508(struct Unk_func_00030508_0 *arg0, M2C_UNK arg1);
s32 func_00030554(s32);
s32 func_0003072C(s32);
s32 func_00030A40(s32 arg0);
s32 func_00030CE8(s32 arg0);
s32 func_00030D44(void);
s32 func_00030D4C(s32 arg0, struct Unk_func_00030D4C_1 *arg1);
M2C_UNK func_00030E78(s32);
M2C_UNK func_00030EEC(s32, M2C_UNK);
s32 func_00030F40(s32 arg0, s32 arg1, s32 arg2);
void func_000311B0(void);
void func_000316CC(s32 arg0);
s32 func_000316EC(s32);
s32 func_00031740(s32 *arg0);
s32 func_00031778(s32 arg0, s32 arg1);
s32 func_00031DAC(struct Unk_func_00031DAC_0 *arg0);
s32 func_00031E20(struct Unk_func_00031E20_0 *arg0);
s32 func_00031E8C(struct Unk_func_00031E8C_0 *arg0);
s32 func_00032778(s32 arg0);
void func_00033408(s32 arg0);
s32 func_0003346C(s32 arg0);
s32 func_000334F0(s32 arg0);
M2C_UNK func_00033C0C(s32);
void func_00033C54(struct Unk_func_00033C54_0 *arg0);
void func_00033C70(struct Unk_func_00033C70_0 *arg0);
void func_00033C8C(struct Unk_func_00033C8C_0 *arg0);
s32 func_00033CA8(s32 arg0, s32 arg1, s32 arg2);
void func_0003435C(s32 *arg0, s32 arg1, s32 arg2);
void func_00034380(void);
M2C_UNK func_00034694(void *);
s32 func_000346B8(s32, void *, s32);
s32 func_000348B0(s32 arg0, struct Unk_func_000348B0_1 *arg1, s32 arg2);
void func_000352DC(s32 arg0);
s32 func_00035310(void);
void func_000353D4(void);
s32 func_00035778(void);
s32 func_00035798();
s32 func_000357A4(void);
M2C_UNK *func_000357B0(void);
u16 func_000357BC(void);
s32 func_000357C8(s32, s32);
void func_00035860(s32 arg0);
void func_00035898(s32 arg0);
void func_000358D0(s32 arg0);
s32 func_000369BC(void **arg0);
s32 func_000369F4(s32 arg0, void **arg1);
s32 func_00038390(s32 arg0);
void func_000385A8(struct Unk_func_000385A8_0 *arg0);
void func_00038614(s32 arg0);
s32 func_00038720(void);
s32 func_00038728(void);
s32 func_00038BF8(s32);
s32 func_0003A0A0(void *, s32, s32);
s32 func_0003A128(s32 arg0, s32 arg1);
s32 func_0003A1C0(void *, s32, s32);
s32 func_0003A260(s32 arg0, s32 arg1);
s32 func_0003A4C4(void);
s32 func_0003AE10(s32 arg0, struct Unk_func_0003AE10_1 *arg1);
void func_0003B7F0(s32 arg0);
void func_0003B854(s32 arg0);
void func_0003B8C4(void *arg0);
void func_0003B8F4(void *arg0);
void func_0003B924(struct Unk_func_0003B924_0 *arg0);
M2C_UNK func_0003BA18();
s32 *func_0003BB40(void);
void func_0003C140(s32 arg0);
s32 func_0003C264(s32 arg0);
s32 func_0003C314(s32 arg0);
void func_0003C8BC(s32 arg0);
s32 func_0003C8DC(s32, s32, s32, s32, s32, s32, s32);
s32 func_0003CFBC(s32 arg0);
void func_0003DF44(s32 arg0);
s32 func_0003DFC4(s32 arg0);
s32 func_0003E040(s32 arg0);
s32 func_0003E0E0(s32 arg0);
s32 func_0003E1D0(s32 arg0);
s32 func_0003E3A8(s32 arg0);
void func_0003E430(s32 arg0);
void func_0003E480(s32 arg0);
s32 func_0003E4A0(s32, M2C_UNK, M2C_UNK);
void func_0003EA20(s32 arg0);
s32 func_0003EADC(s32 arg0);
void func_0003EB34(s32 arg0);
s32 func_0003EBA8(s32 arg0);
s32 func_0003EC2C(s32 arg0);
void func_0003EF0C(s32 arg0);
s32 func_0003F3E0(s32, s32);
s32 func_0003F6FC(s32 arg0);
s32 func_0003F76C(s32 arg0);
s32 func_0003F81C(s32 arg0);
void func_0003FDE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0003FE04(s32 arg0);
s32 func_0003FE40(s32 arg0);
void func_00040004(void);
void func_00040038(struct Unk_func_00040038_0 *arg0);
void func_00040420(struct Unk_func_00040420_0 *arg0);
s32 func_00040CD8(s32);
s32 func_00040E10(s32);
s32 func_00040F8C(s32, s32, s32, s32, s32);
void func_00041240(s32 arg0);
s32 func_000414AC(s32 arg0);
void func_00041588(s32 arg0);
s32 func_000415EC(s32 arg0);
s32 func_000416B4(s32 arg0);
s32 func_00041700(s32 arg0, struct Unk_func_00041700_1 *arg1);
void func_00041B18(s32 arg0);
s32 func_00041B4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_000420F4(s32, s32, s32);
void func_00042330(s32 arg0);
s32 func_000423F8(s32 arg0);
s32 func_000424A8(s32 arg0);
s32 func_00042558(s32 arg0);
M2C_UNK func_000425A4(void *);
s32 func_0004262C(s32 arg0, struct Unk_func_0004262C_1 *arg1);
M2C_UNK func_00042FEC(s32, s32, M2C_UNK, M2C_UNK);
void func_00043008(s32 arg0);
s32 func_00043078(s32 arg0, s32 arg1);
void func_000430E8(s32 arg0);
M2C_UNK func_00043538(void *, s32);
void func_000436EC(struct Unk_func_000436EC_0 *arg0);
s32 func_00043A0C(s32 arg0, struct Unk_func_00043A0C_1 *arg1);
s32 func_00044470(s32);
s32 func_0004452C(void *);
s32 func_00044678(s32);
s32 func_000447B4(s32);
M2C_UNK func_00044808(void *, M2C_UNK);
M2C_UNK func_0004506C(M2C_UNK);
void func_000450E8(void);
s32 func_00045460(s32 arg0);
s32 func_000454B8(s32 arg0);
s32 func_0004550C(s32 arg0);
void func_000456F4(s32 arg0);
s32 func_00045C24(s32, s32, s32);
void func_00045E20(s32 arg0);
s32 func_00045E8C(s32 arg0);
void func_000460F8(s32 arg0);
s32 func_0004613C(s32 arg0);
void func_0004682C(s32 *arg0);
s32 func_000469BC(s32 arg0);
s32 func_00046B40(void *);
M2C_UNK func_00046CE8(void *);
void func_00046DB4(s32 arg0);
s32 func_00046E24(s32 arg0);
s32 func_00046E74(s32, s32);
s32 func_00047068(s32, s32);
s32 func_00047168(s32);
s32 func_000475E4(s32);
s32 func_00047898(s32 arg0);
void func_000479E8(s32 arg0);
void func_00047A14(void);
s32 func_00047BE8(s32, s32);
s32 func_00047C48(s32);
void func_00047D24(void);
s32 func_00047D5C(s32 arg0);
M2C_UNK func_00047DB0(s32);
M2C_UNK func_00047E10(s32);
M2C_UNK func_00047E70(s32);
s32 func_00048300(s32);
s32 func_000483D8(s32 *arg0);
M2C_UNK func_00048CFC();
void func_00048E34(void);
s32 func_00049A60(s32, s32);
s32 func_00049C34(void);
s32 func_00049C70(void);
void func_00049C90(void);
s32 func_00049CA8(s32);
s32 func_00049D54(void);
s32 func_0004A14C(s32 *arg0, s32 arg1);
s32 func_0004A1B0(s32);
void func_0004A3B8(struct Unk_func_0004A3B8_0 *arg0);
void func_0004A498(struct Unk_func_0004A3B8_0 *arg0);
s32 func_0004A4D0(struct Unk_func_0004A4D0_0 *arg0, s32 arg1);
void func_0004A52C(struct Unk_func_0004A3B8_0 *arg0);
void func_0004A6B8(struct Unk_func_0004A3B8_0 *arg0);
s32 func_0004A7A0(struct Unk_func_0004A7A0_0 *arg0);
s32 func_0004A7AC(struct Unk_func_0004A7AC_0 *arg0);
s32 func_0004A854(s32 *arg0);
s32 func_0004A888(s32 arg0, M2C_UNK arg1);
s32 func_0004A8E0(s32, M2C_UNK);
s32 func_0004AAF0(s32 arg0, M2C_UNK arg1);
s32 func_0004AB48(s32, M2C_UNK);
s32 func_0004AF50(s32, M2C_UNK, M2C_UNK);
M2C_UNK func_0004B25C(s32, M2C_UNK);
s32 func_0004B3D0(s32 arg0, void *arg1, u32 arg2);
s32 func_0004B4D4(s32, M2C_UNK);
s32 func_0004B850();
s32 func_0004B8CC(s32, s32);
M2C_UNK func_0004BAE8(s32);
void func_0004BD90(s32 arg0, struct Unk_func_0004BD90_1 *arg1);
s32 func_0004BDF4(void);
s32 func_0004C0DC();
void func_0004C138(void);
s32 *func_0004C224(void);
s32 func_0004C430(void);
s32 func_0004C664(void);
s32 func_0004C6FC(void);
s32 func_0004C720(s32, s32, s32);
s32 func_0004CA50(void);
void func_0004CDA0(void);
s32 func_0004D12C(s32);
s32 func_0004DACC(s32, s32, s32, s32, s32);
s32 func_0004DD50(s32, s32, s32, s32, s32);
s32 func_0004DE60(s32, s32, s32, s32, s32, s32, s32);
void func_0004F018(s32 arg0);
M2C_UNK func_0004F068(M2C_UNK, s32);
s32 func_0004FD40(s32, s32, s32, s32);
s32 func_00053AE8(void);
void func_00053BE4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_00053CCC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_00053D38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
s32 func_00053DC4(void);
s32 func_0005472C(s32, M2C_UNK);
s32 func_0005479C(s32, M2C_UNK, M2C_UNK);
s32 func_00054804(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0005486C(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_00054B78(s32, M2C_UNK);
s32 func_00054BB4(s32);
s32 func_00056CE8(void);
void func_00056F2C(void);
s32 func_00056F48(s32, s32);
M2C_UNK func_00057374();
void func_00058534(s32 arg0);
void func_00058554(void);
s32 func_000589B4(s32, s32);
void func_000594A0(void);
s32 func_00059518(s32, s32);
void func_0005996C(s32 arg0, s32 arg1);
void func_0005A5FC(struct Unk_func_0005A5FC_0 *arg0);
M2C_UNK func_0005A750(s32, s16);
s32 module_reboot_before(void);
s32 module_stop(void);
M2C_UNK sceFontDoneLib(s32);
M2C_UNK sceGeContinue();
void * sceGeEdramGetAddr(void);
s32 sceGeListEnQueue(void *, void *, s32, void *);
s32 sceGeListSync(s32, s32);
M2C_UNK sceHVNetfront_Module_07C7E121();
M2C_UNK sceHVNetfront_Module_22E35EF2();
M2C_UNK sceHVNetfront_Module_504892A0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32 (*)(s32));
M2C_UNK sceHVNetfront_Module_5575313B();
M2C_UNK sceHVNetfront_Module_6F1E32E6();
M2C_UNK sceHVNetfront_Module_76411162(M2C_UNK, M2C_UNK, s32);
M2C_UNK sceHVNetfront_Module_831B4A41();
M2C_UNK sceHVNetfront_Module_98A11887(s32);
M2C_UNK sceHVNetfront_Module_A777EA56(s32);
M2C_UNK sceHVNetfront_Module_BB2076F2(s32, M2C_UNK);
s32 sceHVNetfront_Module_D3206B42();
M2C_UNK sceHVNetfront_Module_D97D8CB2(s32);
M2C_UNK sceHVNetfront_Module_DB246B1D(M2C_UNK);
M2C_UNK sceHVNetfront_Module_DCF92220(void *, M2C_UNK *);
s32 sceHVNetfront_Module_E3D7CBBF(M2C_UNK, void *, M2C_UNK, s32 (*)(s32, s32));
M2C_UNK sceHVNetfront_Module_F2FE2FA3();
M2C_UNK sceHVNetfront_Module_F6316E3A();
s32 sceHVSlim_Library_00A9596D();
M2C_UNK sceHVSlim_Library_05F33A6C(s32, s32);
M2C_UNK sceHVSlim_Library_08549708();
M2C_UNK sceHVSlim_Library_0D525122();
s32 sceHVSlim_Library_0F61EC8E(s32, M2C_UNK);
M2C_UNK sceHVSlim_Library_14411643(void *);
s32 sceHVSlim_Library_15875ED4(M2C_UNK);
M2C_UNK sceHVSlim_Library_1A02495A(s32, void *, M2C_UNK);
s32 sceHVSlim_Library_24B1FCE6(s32);
s32 sceHVSlim_Library_27D353B1(s32);
M2C_UNK sceHVSlim_Library_32E4FDC6(s32);
s32 sceHVSlim_Library_3EDA77E7(s32);
M2C_UNK sceHVSlim_Library_457A4136(M2C_UNK *, M2C_UNK);
M2C_UNK sceHVSlim_Library_5CA39435();
M2C_UNK sceHVSlim_Library_6DC3FDE4(s32, s32);
M2C_UNK sceHVSlim_Library_700625E1(s32, M2C_UNK, s32);
M2C_UNK sceHVSlim_Library_880239D0(s32);
void *sceHVSlim_Library_896E55F6(s32);
s32 sceHVSlim_Library_8C9ECF26(s32);
s32 sceHVSlim_Library_9D38B11B(s32, s32, s32, s32, M2C_UNK);
M2C_UNK sceHVSlim_Library_A2F4AC9E();
M2C_UNK sceHVSlim_Library_B29BE9CE(s32);
M2C_UNK sceHVSlim_Library_B8C28371(void *);
M2C_UNK sceHVSlim_Library_BB5E8F0E(s32, s32);
M2C_UNK sceHVSlim_Library_CA65803E(s32);
s32 sceHVSlim_Library_D39BDE45(M2C_UNK);
M2C_UNK sceHVSlim_Library_D611E938(void *, M2C_UNK, M2C_UNK);
s32 sceHVSlim_Library_D9FE99F5(s32, s32);
M2C_UNK sceHVSlim_Library_E459881C();
s32 sceHVUI_Module_260E54A0(void);
s32 sceHVUI_Module_3D368B11(s32 *arg0);
s32 sceHVUI_Module_55C70B0A(s32 arg0);
void sceHVUI_Module_9F97083C(void);
s32 sceHVUI_Module_B198BF1D(void);
s32 sceHVUI_Module_E19596A8(void);
s32 sceHttpAbortRequest(s32);
s32 sceHttpCreateConnectionWithURL(s32, void *, s32);
s32 sceHttpCreateTemplate(void *, s32, s32);
s32 sceHttpDeleteTemplate(s32);
s32 sceHttpDisableAuth(s32);
s32 sceHttpDisableCookie(s32);
s32 sceHttpEnableRedirect(s32);
M2C_UNK sceHttpFlushAuthList();
s32 sceHttpGetContentLength(s32, void *);
s32 sceHttpGetNetworkErrno(s32, void *);
s32 sceHttpGetStatusCode(s32, void *);
s32 sceHttpReadData(s32, void *, u32);
M2C_UNK sceHttpSaveSystemCookie();
s32 sceHttpSendRequest(s32, void *, u32);
M2C_UNK sceHttp_457D221D();
M2C_UNK sceHttp_B0257723();
M2C_UNK sceHttp_DD6E7857();
s32 sceIoClose(s32);
M2C_UNK sceIoDclose(s32);
s32 sceIoDevctl(void *, s32, void *, u32, void *, u32);
s32 sceIoDopen(void *);
s32 sceIoRead(s32, void *, u32);
M2C_UNK sceIoRename();
s32 sceKernelCheckCallback(void);
s32 sceKernelCpuSuspendIntr(void);
s32 sceKernelCreateEventFlag(void *, u32, u32, void *);
s32 sceKernelDeleteEventFlag(s32);
s32 sceKernelDeleteSema(s32);
M2C_UNK sceKernelDeleteThread(s32);
s32 sceKernelGetThreadId(void);
M2C_UNK sceKernelLibcGettimeofday();
M2C_UNK sceKernelLibcTime();
s32 sceKernelSetEventFlag(s32, u32);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK sceKernelWaitThreadEnd(s32, M2C_UNK);
M2C_UNK sceKernelWakeupThread();
s32 sceNetApctlDisconnect();
s32 sceNetApctlGetInfo();
s32 sceNetApctlGetState();

#endif
