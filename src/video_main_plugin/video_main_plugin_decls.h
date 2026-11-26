#ifndef VIDEO_MAIN_PLUGIN_DECLS_H
#define VIDEO_MAIN_PLUGIN_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_D_000571FC {
    u8 pad0[0x94];
    u8 unk94;
};

struct Unk_D_0005721C {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_D_00081D70 {
    u8 pad0[0x94];
    u8 unk94;
};

struct Unk_D_00081E50 {
    u8 pad0[0x10];
    u8 unk10;
};

struct Unk_Unk_Unk_func_000209A0_0_8_1C {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_Unk_func_0001D464_0_8 {
    u8 pad0[0x11C];
    s32 unk11C;
};

struct Unk_Unk_func_000209A0_0_8 {
    u8 pad0[0x1C];
    struct Unk_Unk_Unk_func_000209A0_0_8_1C *unk1C;
};

struct Unk_func_000007B8_0 {
    u8 pad0[0x20];
    s32 unk20;
    s32 unk24;
};

struct Unk_func_000007D8_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00001098_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00001ADC_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00001B0C_0 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00001D2C_0 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_func_00001D5C_0 {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct Unk_func_000027A0_temp_v0_2 {
    u8 pad0[0x2C];
    s32 (*unk2C)();
};

struct Unk_func_00002ADC_temp_v0_2 {
    u8 pad0[0x4];
    M2C_UNK (*unk4)(M2C_UNK);
};

struct Unk_func_00002B24_temp_v0_2 {
    u8 pad0[0x4];
    M2C_UNK (*unk4)(M2C_UNK);
};

struct Unk_func_00004C14_temp_v0_2 {
    u8 pad0[0x8];
    M2C_UNK (*unk8)(M2C_UNK);
};

struct Unk_func_00005964_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000065E4_0 {
    u8 pad0[0x1D4];
    s32 unk1D4;
};

struct Unk_func_00006640_0 {
    u8 pad0[0x1EC];
    s32 unk1EC;
};

struct Unk_func_00008DD8_0 {
    u8 pad0[0xAC];
    s32 unkAC;
    u8 padB0[0x4];
    void ** unkB4;
    u8 padB8[0x8];
    u8 unkC0;
};

struct Unk_func_00008E70_0 {
    u8 pad0[0xAC];
    s32 unkAC;
    u8 padB0[0x10];
    u8 unkC0;
};

struct Unk_func_0000FF90_0 {
    u8 pad0[0xB14];
    s8 unkB14;
};

struct Unk_func_0000FFF4_0 {
    u8 pad0[0xA40];
    void **unkA40;
    u8 padA44[0x234];
    s32 unkC78;
};

struct Unk_func_000100D0_0 {
    u8 pad0[0xA40];
    s32 unkA40;
    u8 padA44[0x230];
    s32 unkC74;
};

struct Unk_func_00010230_0 {
    u8 pad0[0xA7C];
    s32 unkA7C;
};

struct Unk_func_0001050C_0 {
    u8 pad0[0xA4C];
    void ** unkA4C;
};

struct Unk_func_00010C3C_0 {
    u8 pad0[0xADC];
    u8 unkADC;
};

struct Unk_func_00012338_0 {
    u8 pad0[0xC58];
    s32 unkC58;
};

struct Unk_func_00012AB8_0 {
    u8 pad0[0x1D4];
    s32 unk1D4;
    s32 unk1D8;
    s8 unk1DC;
};

struct Unk_func_000130D4_0 {
    u8 pad0[0x44];
    void ** unk44;
};

struct Unk_func_000137A0_0 {
    u8 pad0[0x44];
    void ** unk44;
};

struct Unk_func_00015C9C_0 {
    u8 pad0[0x78C];
    s32 unk78C;
};

struct Unk_func_00015ED8_0 {
    u8 pad0[0x778];
    s32 unk778;
    s32 unk77C;
};

struct Unk_func_00016788_0 {
    u8 pad0[0xDC];
    s32 unkDC;
};

struct Unk_func_00016794_0 {
    u8 pad0[0xE0];
    s32 unkE0;
};

struct Unk_func_000167A0_0 {
    u8 pad0[0xE4];
    s32 unkE4;
};

struct Unk_func_000167AC_0 {
    u8 pad0[0x794];
    s32 unk794;
};

struct Unk_func_000167D4_0 {
    u8 pad0[0x798];
    s32 unk798;
};

struct Unk_func_00016BE4_0 {
    u8 pad0[0x84];
    s32 unk84;
};

struct Unk_func_00016BF0_0 {
    u8 pad0[0xD20];
    s32 unkD20;
};

struct Unk_func_00016BFC_0 {
    u8 pad0[0x88];
    s32 unk88;
};

struct Unk_func_00016CB4_0 {
    u8 pad0[0x3E8];
    s32 unk3E8;
    u8 pad3EC[0x40];
    u8 unk42C;
    u8 pad42D[0x35B];
    s32 unk788;
};

struct Unk_func_0001C690_0 {
    u8 pad0[0x54];
    s32 unk54;
};

struct Unk_func_0001C7B4_0 {
    u8 pad0[0x78];
    s32 unk78;
};

struct Unk_func_0001C7F0_0 {
    u8 pad0[0x78];
    s32 unk78;
};

struct Unk_func_0001D2C0_0 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0001D358_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0001D3A8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D43C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D448_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D464_0 {
    u8 pad0[0x8];
    struct Unk_Unk_func_0001D464_0_8 *unk8;
};

struct Unk_func_0001D58C_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_0001D66C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D738_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D768_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D798_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D7C8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D7F8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D8A8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D8D8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D9C4_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001D9F4_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001DA24_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001DB00_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001DE88_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001E040_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001E3D0_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001E6D8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001EC1C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001EE34_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
};

struct Unk_func_0001F698_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F770_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F7A4_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F7D8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F808_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F838_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F868_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F898_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F8C8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F8F8_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F934_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001F968_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001FD4C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_0001FEAC_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_0001FF04_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_00020324_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002037C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000209A0_0 {
    u8 pad0[0x8];
    struct Unk_Unk_func_000209A0_0_8 *unk8;
};

struct Unk_func_00020CD8_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00020D1C_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00020FDC_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0002107C_0 {
    u8 pad0[0x8];
    u32 unk8;
};

struct Unk_func_00021280_0 {
    u8 pad0[0x8];
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000212D8_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x8];
    s32 unk10;
};

struct Unk_func_00021868_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00021944_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00021950_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00021A4C_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00021A58_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00021B3C_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00022078_temp_s1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00022A04_temp_s2 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00022B48_0 {
    u8 pad0[0x18];
    u32 unk18;
};

struct Unk_func_00022B58_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00022B84_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_00023130_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002369C_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00023D84_0 {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad8[0x4];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

struct Unk_func_00023D84_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_00023D84_temp_v0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000242A8_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000242C0_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_000242D8_0 {
    M2C_UNK *unk0;
    s32 unk4;
    struct Unk_func_000242D8_var_v0 *unk8;
};

struct Unk_func_000242D8_var_v0 {
    u8 pad0[0x8];
    void *unk8;
};

struct Unk_func_00024330_0 {
    M2C_UNK *unk0;
    s32 unk4;
    struct Unk_func_00024330_var_v0 *unk8;
};

struct Unk_func_00024330_var_v0 {
    u8 pad0[0x8];
    void *unk8;
};

struct Unk_func_00024388_0 {
    M2C_UNK *unk0;
    s32 unk4;
    struct Unk_func_00024388_var_v0 *unk8;
};

struct Unk_func_00024388_var_v0 {
    u8 pad0[0x8];
    void *unk8;
};

struct Unk_func_00024C1C_0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_00024C64_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024C9C_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024CD4_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024D0C_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024D44_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024D90_0 {
    M2C_UNK *unk0;
    u8 pad4[0x4];
    s32 unk8;
};

struct Unk_func_00024E54_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_00024E94_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_00024ED4_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_00024F14_0 {
    M2C_UNK *unk0;
    s32 unk4;
};

struct Unk_func_00025088_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00025F14_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_0002699C_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00026B40_0 {
    s32 unk0;
    s32 unk4;
};

struct Unk_func_00026B8C_1 {
    u8 unk0;
    u8 unk1;
};

struct Unk_func_00026DDC_1 {
    u8 pad0[0x4];
    u8 unk4;
};

struct Unk_func_00026DDC_temp_s2 {
    u8 pad0[0x7];
    u8 unk7;
    u8 unk8;
};

struct Unk_func_00026E50_1 {
    u8 pad0[0x4];
    s8 unk4;
};

struct Unk_func_00026E90_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00027480_1 {
    u8 pad0[0x4];
    s8 unk4;
};

struct Unk_func_00027500_1 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00027500_temp_s0 {
    u8 pad0[0x2E];
    u8 unk2E;
};

struct Unk_func_00027548_1 {
    void * unk0;
    s32 unk4;
};

struct Unk_func_00027548_temp_s0_2 {
    u8 pad0[0x11];
    u8 unk11;
};

struct Unk_func_000275E0_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_000276A4_0 {
    u8 pad0[0x8];
    struct Unk_func_000276A4_temp_a2 *unk8;
};

struct Unk_func_000276A4_1 {
    s8 unk0;
    s8 unk1;
    s8 unk2;
    s8 unk3;
};

struct Unk_func_000276A4_temp_a2 {
    u8 unk0;
    u8 unk1;
};

struct Unk_func_000276E0_0 {
    u8 pad0[0x8];
    struct Unk_func_000276E0_temp_s0 *unk8;
};

struct Unk_func_000276E0_1 {
    s8 unk0;
    u8 pad1[0x2];
    u8 unk3;
    s8 unk4;
    s8 unk5;
};

struct Unk_func_000276E0_temp_s0 {
    u8 unk0;
    u8 pad1[0x3];
    u8 unk4;
    u8 unk5;
};

struct Unk_func_0002774C_0 {
    u8 pad0[0x8];
    struct Unk_func_0002774C_temp_s0 *unk8;
};

struct Unk_func_0002774C_1 {
    s8 unk0;
    u8 pad1[0x2];
    s8 unk3;
    s8 unk4;
};

struct Unk_func_0002774C_temp_s0 {
    u8 unk0;
    u8 pad1[0x4];
    u8 unk5;
};

struct Unk_func_00027D70_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00028D98_0 {
    u8 pad0[0x330];
    s32 unk330;
};

struct Unk_func_0002A634_0 {
    u8 pad0[0xFC];
    s32 unkFC;
};

struct Unk_func_0002AEE0_0 {
    u8 pad0[0x1FD];
    u8 unk1FD;
    s8 unk1FE;
};

struct Unk_func_0002AEE0_1 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_0002B4A0_0 {
    u8 pad0[0x20];
    s8 unk20;
    u8 pad21[0x17];
    s32 unk38;
    u8 pad3C[0x8];
    s32 unk44;
    s8 unk48;
    u8 pad49[0x3];
    s32 unk4C;
};

struct Unk_func_0002BBDC_0 {
    u8 pad0[0x50];
    s32 unk50;
};

struct Unk_func_0002CA04_0 {
    u8 pad0[0x3C];
    s32 unk3C;
    s32 unk40;
    u8 pad44[0xC];
    s32 unk50;
};

struct Unk_func_0002CAAC_0 {
    u8 pad0[0x78];
    s32 unk78;
};

struct Unk_func_0002CAB4_0 {
    u8 pad0[0x80];
    s32 unk80;
};

struct Unk_func_0002CF60_0 {
    u8 pad0[0x28];
    s8 unk28;
};

struct Unk_func_0002CF6C_0 {
    u8 pad0[0x28];
    s8 unk28;
};

struct Unk_func_0002E08C_0 {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct Unk_func_0002E208_0 {
    u8 pad0[0x20];
    u8 unk20;
};

struct Unk_func_0002E4A0_0 {
    u8 pad0[0xC];
    struct Unk_func_0002E4A0_temp_v1 *unkC;
};

struct Unk_func_0002E4A0_temp_v1 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0002E504_0 {
    u8 pad0[0x35];
    u8 unk35;
};

struct Unk_func_0002E50C_0 {
    u8 pad0[0x37];
    u8 unk37;
};

struct Unk_func_0002ED84_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_0002ED8C_0 {
    u8 pad0[0x38];
    s32 unk38;
};

struct Unk_func_0002F8CC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0002F954_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0002FFB0_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_0002FFB0_var_v0 *unk4;
};

struct Unk_func_0002FFB0_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_000305D4_0 {
    M2C_UNK * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_func_000309C0_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00030A6C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00030AE4_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00030C0C_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00030CD0_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00030D48_0 {
    u8 pad0[0xC];
    s32 unkC;
};

struct Unk_func_00031B18_0 {
    u8 pad0[0x20];
    void *unk20;
    u8 pad24[0x8];
    s32 unk2C;
    s32 unk30;
    s32 unk34;
};

struct Unk_func_00031B18_temp_v1 {
    u8 pad0[0x4D8];
    s32 unk4D8;
};

struct Unk_func_00032A24_0 {
    M2C_UNK * unk0;
    u8 pad4[0x40];
    s32 unk44;
};

struct Unk_func_00032A64_0 {
    M2C_UNK * unk0;
    u8 pad4[0x40];
    s32 unk44;
};

struct Unk_func_00032AA4_0 {
    M2C_UNK * unk0;
    u8 pad4[0x40];
    s32 unk44;
};

struct Unk_func_00034258_0 {
    u8 pad0[0x94];
    s8 unk94;
};

struct Unk_func_0003429C_0 {
    u8 pad0[0x94];
    u8 unk94;
};

struct Unk_func_00034888_0 {
    u8 pad0[0x10];
    u8 unk10;
    u8 pad11[0x83];
    u8 unk94;
};

struct Unk_func_000348C8_0 {
    u8 pad0[0x94];
    u8 unk94;
    u8 pad95[0x1];
    u8 unk96;
};

struct Unk_func_00034940_0 {
    u8 pad0[0x96];
    s8 unk96;
};

struct Unk_func_00034964_0 {
    u8 pad0[0x96];
    s8 unk96;
};

struct Unk_func_00037AA0_0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00038D88_0 {
    u8 pad0[0x98];
    struct Unk_func_00038D88_temp_v1 *unk98;
};

struct Unk_func_00038D88_temp_v1 {
    u8 pad0[0x1950];
    s32 unk1950;
    s32 unk1954;
};

struct Unk_func_00038D9C_0 {
    u8 pad0[0x98];
    struct Unk_func_00038D9C_temp_v1 *unk98;
};

struct Unk_func_00038D9C_temp_v1 {
    u8 pad0[0x1950];
    s32 unk1950;
    s32 unk1954;
};

struct Unk_func_0003B640_0 {
    u8 pad0[0x8];
    s32 unk8;
    u8 unkC;
    u8 unkD;
};

struct Unk_func_0003B640_1 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_func_0003B678_0 {
    u8 pad0[0x6];
    u8 unk6;
};

struct Unk_func_0003B678_1 {
    u8 pad0[0x28];
    s32 unk28;
};

struct Unk_func_0003D464_var_a0 {
    u8 pad0[0x4];
    struct Unk_func_0003D464_var_v0 *unk4;
};

struct Unk_func_0003D464_var_v0 {
    u8 pad0[0x4];
    void *unk4;
};

struct Unk_func_0003E434_0 {
    u8 pad0[0x4C];
    void **unk4C;
    u8 pad50[0xB8];
    s32 unk108;
    u8 pad10C[0xC];
    s32 unk118;
};

struct Unk_func_0003EAF0_0 {
    u8 pad0[0xA0];
    struct Unk_func_0003EAF0_temp_v0 *unkA0;
    u8 padA4[0x8];
    s32 unkAC;
};

struct Unk_func_0003EAF0_temp_v0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0003EB0C_0 {
    u8 pad0[0xA0];
    struct Unk_func_0003EB0C_temp_v0 *unkA0;
    u8 padA4[0xC];
    s32 unkB0;
};

struct Unk_func_0003EB0C_temp_v0 {
    u8 pad0[0x8];
    s32 unk8;
};

struct Unk_func_0003F460_0 {
    u8 pad0[0x50];
    s32 unk50;
};

struct Unk_func_0003F46C_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_0003F500_0 {
    u8 pad0[0x58];
    s32 unk58;
};

struct Unk_func_000415C8_0 {
    u8 pad0[0x68];
    struct Unk_func_000415C8_var_v0 *unk68;
    u8 pad6C[0x4];
    struct Unk_func_000415C8_var_a0 *unk70;
};

struct Unk_func_000415C8_var_a0 {
    u8 pad0[0x24];
    struct Unk_func_000415C8_var_a0 *unk24;
};

struct Unk_func_000415C8_var_v0 {
    u8 pad0[0x38];
    struct Unk_func_000415C8_var_v0 *unk38;
};

struct Unk_func_00041A88_0 {
    u8 pad0[0x5C];
    s8 unk5C;
};

struct Unk_func_00041E70_0 {
    u8 pad0[0x74];
    void **unk74;
};

struct Unk_func_00041E70_1 {
    u8 pad0[0x24];
    s32 unk24;
};

struct Unk_func_00042008_0 {
    u8 pad0[0x48];
    s32 unk48;
};

struct Unk_func_000425C4_0 {
    u8 pad0[0xA4];
    struct Unk_func_000425C4_var_v0 *unkA4;
};

struct Unk_func_000425C4_var_v0 {
    u8 pad0[0x30];
    struct Unk_func_000425C4_var_v0 *unk30;
};

struct Unk_func_00043018_0 {
    u8 pad0[0x9C];
    struct Unk_func_00043018_temp_a0 *unk9C;
};

struct Unk_func_00043018_temp_a0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_00044108_0 {
    u8 pad0[0x58];
    s8 unk58;
};

struct Unk_func_00044218_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_000455A8_0 {
    u8 pad0[0x6C];
    struct Unk_func_000455A8_var_v0 *unk6C;
};

struct Unk_func_000455A8_var_v0 {
    u8 pad0[0x20];
    struct Unk_func_000455A8_var_v0 *unk20;
};

struct Unk_func_000458F0_0 {
    u8 pad0[0x58];
    s8 unk58;
};

struct Unk_func_00045A14_0 {
    u8 pad0[0x178];
    s32 unk178;
};

struct Unk_func_00045A20_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_00045A98_0 {
    u8 pad0[0x44];
    void ** unk44;
};

struct Unk_func_00046094_0 {
    u8 pad0[0x60];
    struct Unk_func_00046094_var_v0 *unk60;
};

struct Unk_func_00046094_var_v0 {
    u8 pad0[0x18];
    struct Unk_func_00046094_var_v0 *unk18;
};

struct Unk_func_0004640C_0 {
    u8 pad0[0x58];
    s8 unk58;
};

struct Unk_func_000465A0_0 {
    u8 pad0[0x44];
    s32 unk44;
};

struct Unk_func_00048EC8_0 {
    u8 pad0[0x1281];
    u8 unk1281;
    u8 pad1282[0x46];
    s32 unk12C8;
    s32 unk12CC;
    s32 unk12D0;
    s32 unk12D4;
    s32 unk12D8;
    s32 unk12DC;
    s32 unk12E0;
    s32 unk12E4;
    u8 pad12E8[0x48];
    s32 unk1330;
    s32 unk1334;
    s32 unk1338;
    s32 unk133C;
    s32 unk1340;
    s32 unk1344;
    s32 unk1348;
    s32 unk134C;
};

struct Unk_func_0004A25C_0 {
    M2C_UNK * unk0;
    u8 pad4[0x4];
    M2C_UNK * unk8;
};

struct Unk_func_0004A278_0 {
    M2C_UNK * unk0;
    u8 pad4[0x4];
    M2C_UNK * unk8;
};

struct Unk_func_0004A2AC_0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_func_0004C260_0 {
    u8 pad0[0x530];
    u32 unk530;
};

struct Unk_func_0004C28C_0 {
    u8 pad0[0x534];
    s32 unk534;
    s32 unk538;
};

struct Unk_func_0004C2B0_0 {
    u8 pad0[0x4D8];
    s32 unk4D8;
    u8 pad4DC[0x60];
    s8 unk53C;
};

struct Unk_func_0004C2D8_0 {
    u8 pad0[0x4D8];
    s32 unk4D8;
    u8 pad4DC[0x61];
    s8 unk53D;
};

struct Unk_func_0004CFA8_0 {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0x8];
    void * unk20;
};

struct Unk_func_0004CFA8_temp_v0_2 {
    u8 pad0[0x1FD];
    s8 unk1FD;
    s8 unk1FE;
};

struct Unk_func_0004D010_0 {
    u8 pad0[0x20];
    s32 unk20;
};

struct Unk_func_0004D684_0 {
    u8 pad0[0x10];
    u8 unk10;
};

struct Unk_func_0004D6B4_0 {
    u8 pad0[0x24];
    u8 unk24;
};

struct Unk_func_0004D6E4_0 {
    u8 pad0[0x30];
    s32 unk30;
};

struct Unk_func_0004D840_0 {
    M2C_UNK *unk0;
    u8 pad4[0x1C];
    s32 unk20;
    s32 unk24;
    s32 unk28;
};

struct Unk_func_0004DDAC_0 {
    u8 pad0[0x50];
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
};

struct Unk_func_0004DDAC_1 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct Unk_vt_func_00008DD8_temp_a0 {
    u8 pad0[0xC8];
    M2C_UNK (*unkC8)(void **, M2C_UNK, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_00008DD8_temp_a0_2 {
    u8 pad0[0xC8];
    M2C_UNK (*unkC8)(void **, M2C_UNK, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_00008DD8_temp_v0_2 {
    u8 pad0[0xC8];
    M2C_UNK (*unkC8)(void **, M2C_UNK, M2C_UNK, M2C_UNK);
};

struct Unk_vt_func_0000D3A0_arg0 {
    u8 pad0[0x78];
    s32 (*unk78)(void **);
    u8 pad7C[0x4C];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D3FC_arg0 {
    u8 pad0[0x7C];
    s32 (*unk7C)(void **);
    u8 pad80[0x48];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D458_arg0 {
    u8 pad0[0x80];
    s32 (*unk80)(void **);
    u8 pad84[0x44];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D518_arg0 {
    u8 pad0[0x88];
    s32 (*unk88)(void **, M2C_UNK);
    u8 pad8C[0x3C];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D57C_arg0 {
    u8 pad0[0x8C];
    s32 (*unk8C)(void **, M2C_UNK);
    u8 pad90[0x38];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D644_arg0 {
    u8 pad0[0x94];
    s32 (*unk94)(void **, M2C_UNK, M2C_UNK);
    u8 pad98[0x30];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D6B8_arg0 {
    u8 pad0[0x98];
    s32 (*unk98)(void **, M2C_UNK, M2C_UNK);
    u8 pad9C[0x2C];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D72C_arg0 {
    u8 pad0[0x9C];
    s32 (*unk9C)(void **);
    u8 padA0[0x28];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D834_arg0 {
    u8 pad0[0xA4];
    s32 (*unkA4)(void **, M2C_UNK, M2C_UNK);
    u8 padA8[0x20];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D8A8_arg0 {
    u8 pad0[0xA8];
    s32 (*unkA8)(void **, M2C_UNK, M2C_UNK);
    u8 padAC[0x1C];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D91C_arg0 {
    u8 pad0[0xAC];
    s32 (*unkAC)(void **, M2C_UNK, M2C_UNK);
    u8 padB0[0x18];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D990_arg0 {
    u8 pad0[0xB0];
    s32 (*unkB0)(void **, M2C_UNK);
    u8 padB4[0x14];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000D9F4_arg0 {
    u8 pad0[0xB4];
    s32 (*unkB4)(void **, M2C_UNK);
    u8 padB8[0x10];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000DA58_arg0 {
    u8 pad0[0xB8];
    s32 (*unkB8)(void **, M2C_UNK);
    u8 padBC[0xC];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000DABC_arg0 {
    u8 pad0[0xBC];
    s32 (*unkBC)(void **, M2C_UNK);
    u8 padC0[0x8];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000DB20_arg0 {
    u8 pad0[0xC0];
    s32 (*unkC0)(void **);
    u8 padC4[0x4];
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000DB7C_arg0 {
    u8 pad0[0xC4];
    s32 (*unkC4)(void **);
    M2C_UNK (*unkC8)();
    M2C_UNK (*unkCC)(void **);
};

struct Unk_vt_func_0000FFF4_temp_a0 {
    u8 pad0[0x78];
    M2C_UNK (*unk78)(void **, s32);
};

struct Unk_vt_func_0001050C_temp_a0 {
    u8 pad0[0xC];
    s32 (*unkC)(void **);
};

struct Unk_vt_func_000130D4_temp_a0 {
    u8 pad0[0x70];
    M2C_UNK (*unk70)(void **);
};

struct Unk_vt_func_000137A0_temp_a0 {
    u8 pad0[0x70];
    M2C_UNK (*unk70)(void **);
};

struct Unk_vt_func_0001E400_arg0 {
    u8 pad0[0x68];
    s32 (*unk68)(void **);
};

struct Unk_vt_func_00022A04_temp_v0 {
    u8 pad0[0x4];
    s32 unk4;
};

struct Unk_vt_func_0003E434_temp_a0 {
    u8 pad0[0x24];
    M2C_UNK (*unk24)(void **, M2C_UNK, s32);
};

struct Unk_vt_func_0003E434_temp_v0 {
    u8 pad0[0x24];
    M2C_UNK (*unk24)(void **, M2C_UNK, s32);
};

struct Unk_vt_func_00045A98_temp_a0 {
    u8 pad0[0x70];
    M2C_UNK (*unk70)(void **);
};

struct Unk_vt_func_0004A44C_arg0 {
    u8 pad0[0x10];
    M2C_UNK (*unk10)();
};

struct Unk_vt_func_0004A470_arg0 {
    u8 pad0[0x14];
    M2C_UNK (*unk14)();
};

struct Unk_vt_func_0004A494_arg0 {
    u8 pad0[0x18];
    M2C_UNK (*unk18)();
};

struct Unk_vt_func_0004A4DC_arg0 {
    u8 pad0[0x20];
    M2C_UNK (*unk20)();
};

struct Unk_vt_func_0004A500_arg0 {
    u8 pad0[0x24];
    M2C_UNK (*unk24)();
};

struct Unk_vt_func_0004A524_arg0 {
    u8 pad0[0x28];
    M2C_UNK (*unk28)();
};

extern M2C_UNK D_00051158;
extern s32 D_00051904;
extern M2C_UNK D_00051960;
extern M2C_UNK D_00051998;
extern M2C_UNK D_000519C8;
extern M2C_UNK D_000519DC;
extern s32 D_00051A1C;
extern M2C_UNK D_00051A44;
extern M2C_UNK D_00051D30_v271;
extern M2C_UNK D_00051D68;
extern M2C_UNK D_00051DA8_v300;
extern M2C_UNK D_00051DA8_v301;
extern M2C_UNK D_00051DA8_v302;
extern M2C_UNK D_00051DA8_v303;
extern s32 D_00051DD0;
extern M2C_UNK D_00051DD8;
extern M2C_UNK D_00051E84;
extern M2C_UNK D_000522D4;
extern M2C_UNK D_000523C8_v271;
extern M2C_UNK D_00052478;
extern M2C_UNK D_00052538;
extern M2C_UNK D_00052A30;
extern M2C_UNK D_00052F88;
extern M2C_UNK D_00053078;
extern M2C_UNK D_000534C8;
extern M2C_UNK D_000534D8;
extern M2C_UNK D_000534E8;
extern M2C_UNK D_000534F8;
extern M2C_UNK D_00053508;
extern M2C_UNK D_00053518;
extern M2C_UNK D_000535A0;
extern M2C_UNK D_00053668;
extern M2C_UNK D_000536F0;
extern M2C_UNK D_00053708;
extern M2C_UNK D_000538B8;
extern M2C_UNK D_000538F4;
extern M2C_UNK D_00053B58;
extern M2C_UNK D_00053D78;
extern M2C_UNK D_00054620;
extern M2C_UNK D_00054E28;
extern M2C_UNK D_00054E60;
extern M2C_UNK D_00054E90;
extern M2C_UNK D_000551F8;
extern M2C_UNK D_00055220;
extern s32 D_00055298;
extern M2C_UNK D_0005534C;
extern void *D_00055394;
extern s32 D_000553A0;
extern s32 D_000553A8;
extern s32 D_00055470;
extern s32 D_000554A4;
extern s32 D_000554C0;
extern M2C_UNK D_00055890;
extern M2C_UNK D_00055F88;
extern M2C_UNK D_00056020;
extern s32 D_000563A0;
extern M2C_UNK D_000565C0;
extern M2C_UNK D_00056640;
extern M2C_UNK D_00056760;
extern M2C_UNK D_00056780;
extern M2C_UNK D_000567A0;
extern s32 D_000569B8;
extern s32 D_00056A84;
extern u8 D_00056BD5;
extern s32 D_00056BD8;
extern s32 D_0005714C;
extern s32 D_00057150;
extern s8 D_000571E0;
extern s8 D_000571E2;
extern u8 D_000571E7;
extern u8 D_000571E8;
extern u8 D_000571F0;
extern s8 D_000571F1;
extern u8 D_000571F4;
extern struct Unk_D_000571FC *D_000571FC;
extern void *D_00057200;
extern s32 D_00057204;
extern s32 D_00057208;
extern s8 D_00057211;
extern struct Unk_D_0005721C *D_0005721C;
extern s32 D_00057220;
extern u8 D_00057224;
extern s32 D_00057238;
extern s32 D_0005723C;
extern s32 D_00057240;
extern s32 D_00057254;
extern s32 D_00057270;
extern s32 D_00080050;
extern s32 D_0008005C;
extern s32 D_00080060;
extern s32 D_00080064;
extern s32 D_00080080;
extern s32 D_00080318;
extern struct Unk_D_00081D70 *D_00081D70;
extern s32 D_00081D7C;
extern s32 D_00081D84;
extern s32 D_00081DF0;
extern struct Unk_D_00081E50 *D_00081E50;
extern s32 D_00081E84;
extern s32 D_00081EA0;
extern s32 D_00081EA4;
extern s32 D_00081EB0;
extern s32 D_00081EB4;
extern s32 D_00081ED4;
extern s32 D_00081F40;
extern s32 D_00081F44;
extern s32 D_00081F48;
extern s32 D_00081F4C;
extern M2C_UNK func_00005334;
extern s32 func_00013118;
extern s32 func_000131A0;
extern M2C_UNK func_00015CD8;
extern M2C_UNK func_0002F8F8;
extern s32 func_0002F980;
extern M2C_UNK func_000324B8;

s32 func_00000178_v330(void);
void func_00000184(s32 arg0);
s32 func_000001B8(s32, s32);
void func_000001DC(void);
M2C_UNK func_000001F8(M2C_UNK);
void func_00000260(void);
void func_000002A4(void);
void func_000002D8(void);
M2C_UNK func_000006E0(s32);
void func_00000794(void);
void func_000007B8(struct Unk_func_000007B8_0 *arg0);
void func_000007D8(struct Unk_func_000007D8_0 *arg0);
s32 func_00000804(s32 arg0);
M2C_UNK func_000008F0(s32);
M2C_UNK func_000009F8(s32);
void func_00000FFC(void);
s32 func_00001098(struct Unk_func_00001098_0 *arg0);
void func_00001160(M2C_UNK **arg0);
void func_0000118C(M2C_UNK **arg0);
void func_000011B8(M2C_UNK **arg0);
void func_00001ADC(struct Unk_func_00001ADC_0 *arg0);
void func_00001B0C(struct Unk_func_00001B0C_0 *arg0);
void func_00001C88(void);
void func_00001CEC(void);
void func_00001D2C(struct Unk_func_00001D2C_0 *arg0);
void func_00001D5C(struct Unk_func_00001D5C_0 *arg0);
s32 func_00001DE0(s32, s32);
M2C_UNK func_00002180();
void func_000027A0(void);
s32 func_000027FC(s32, s32, s32);
s32 func_0000291C(void);
void func_00002ADC(void);
void func_00002B24(void);
void func_00002B6C(void);
void func_000040C4(void);
s32 func_00004BD8(void);
void func_00004C14(void);
s32 func_00005030(void);
s32 func_00005050(void);
void func_000053B0(void);
s32 func_00005878(s32);
void func_00005964(struct Unk_func_00005964_0 *arg0);
void func_00005B1C(s32 *arg0, s32 arg1);
void func_00005B3C(s32 arg0, s32 arg1);
void func_00005B8C(s32 arg0, s32 arg1);
void func_00005BDC(void);
void func_00005D58(s32 *arg0, s32 arg1);
M2C_UNK func_00005DF0(s32, s32);
M2C_UNK func_00005E68();
s32 func_00005F6C(s32, s32, s32);
s32 func_00006018(s32, s32, s32);
M2C_UNK func_000060CC();
M2C_UNK func_00006308();
s32 func_000065E4(struct Unk_func_000065E4_0 *arg0);
s32 func_00006640(struct Unk_func_00006640_0 *arg0, s32 arg1);
void func_0000664C(void);
void func_00006654(void);
void func_0000665C(void);
void func_00006664(void);
s32 func_00006728(void);
u8 func_00008DD8(struct Unk_func_00008DD8_0 *arg0);
u8 func_00008E20(void *arg0);
s32 func_00008E70(struct Unk_func_00008E70_0 *arg0, s32 arg1);
M2C_UNK *func_00009B64(void);
void func_0000AE88(void);
M2C_UNK func_0000AEA4();
M2C_UNK *func_0000B0F0(void);
s32 func_0000BF44(void);
M2C_UNK func_0000BF58();
M2C_UNK func_0000C2B8(s32);
M2C_UNK func_0000C488(s32);
void func_0000CB90(M2C_UNK **arg0);
void func_0000CBA0(M2C_UNK **arg0);
s32 func_0000CBF4(void);
s32 func_0000CC48(void);
s32 func_0000CC7C(void);
s32 func_0000CCAC(void);
s32 func_0000CCE0(void);
M2C_UNK func_0000D0E4(s32);
s32 func_0000D3A0(struct Unk_vt_func_0000D3A0_arg0 **arg0);
s32 func_0000D3FC(struct Unk_vt_func_0000D3FC_arg0 **arg0);
s32 func_0000D458(struct Unk_vt_func_0000D458_arg0 **arg0);
s32 func_0000D518(struct Unk_vt_func_0000D518_arg0 **arg0, M2C_UNK arg1);
s32 func_0000D57C(struct Unk_vt_func_0000D57C_arg0 **arg0, M2C_UNK arg1);
s32 func_0000D644(struct Unk_vt_func_0000D644_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0000D6B8(struct Unk_vt_func_0000D6B8_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0000D72C(struct Unk_vt_func_0000D72C_arg0 **arg0);
s32 func_0000D834(struct Unk_vt_func_0000D834_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0000D8A8(struct Unk_vt_func_0000D8A8_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0000D91C(struct Unk_vt_func_0000D91C_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 func_0000D990(struct Unk_vt_func_0000D990_arg0 **arg0, M2C_UNK arg1);
s32 func_0000D9F4(struct Unk_vt_func_0000D9F4_arg0 **arg0, M2C_UNK arg1);
s32 func_0000DA58(struct Unk_vt_func_0000DA58_arg0 **arg0, M2C_UNK arg1);
s32 func_0000DABC(struct Unk_vt_func_0000DABC_arg0 **arg0, M2C_UNK arg1);
s32 func_0000DB20(struct Unk_vt_func_0000DB20_arg0 **arg0);
void func_0000DB68(s32 arg0);
s32 func_0000DB7C(struct Unk_vt_func_0000DB7C_arg0 **arg0);
void func_0000DE54(s32 arg0, s32 arg1);
s32 func_0000DECC(s32, s32);
M2C_UNK func_0000DF94(s32);
s32 func_0000E084(s32);
void func_0000E700(void *arg0, void *arg1);
s32 func_0000E750(s32);
M2C_UNK func_0000EA6C(s32);
void func_0000ECC0(void *arg0);
void func_0000ED00(void *arg0);
M2C_UNK func_0000ED28(s32);
M2C_UNK func_0000F048(s32);
M2C_UNK func_0000F238(s32);
s32 func_0000F3FC(void *arg0);
M2C_UNK func_0000F440(s32);
s32 func_0000F718(s32, s32, s32);
M2C_UNK func_0000F820(s32);
s32 func_0000F8C8(s32, s32, s32, s32);
s32 func_0000F944(void *arg0, s32 *arg1);
s32 func_0000F948(void);
s32 func_0000FAE0(void);
s32 func_0000FAE8(void);
s32 func_0000FAF0(void);
s32 func_0000FAF8(void);
M2C_UNK func_0000FB00(s32);
M2C_UNK func_0000FC34(s32);
s32 func_0000FD9C(s32, s32);
M2C_UNK func_0000FE2C(s32);
s32 func_0000FED4(s32, s32);
void func_0000FF18(s32 arg0);
void func_0000FF34(s32 arg0);
s32 func_0000FF50(s32 arg0);
s32 func_0000FF6C(void *arg0, s32 arg1, u32 arg2);
s32 func_0000FF70(s32 arg0);
s32 func_0000FF90(struct Unk_func_0000FF90_0 *arg0);
M2C_UNK func_0000FFBC(s32);
s32 func_0000FFF4(struct Unk_func_0000FFF4_0 *arg0, s32 arg1);
s32 func_00010024(s32, s32, s32, s32, s32);
void func_00010044(s32 arg0);
void func_00010060(s32 arg0);
void func_0001007C(s32 arg0);
void func_00010098(s32 arg0);
void func_000100B4(s32 arg0);
s32 func_000100D0(struct Unk_func_000100D0_0 *arg0);
M2C_UNK func_0001010C(s32);
M2C_UNK func_00010144(s32);
s32 func_00010230(struct Unk_func_00010230_0 *arg0, s32 *arg1);
M2C_UNK func_00010290(s32);
M2C_UNK func_000103C4(s32);
M2C_UNK func_00010494(s32);
s32 func_00010504(void);
s32 func_0001050C(struct Unk_func_0001050C_0 *arg0, s32 *arg1);
s32 func_0001054C(void);
s32 func_00010554(void);
M2C_UNK func_0001055C(s32);
M2C_UNK func_00010610(s32);
M2C_UNK func_000106B0(s32);
s32 func_00010724(void);
M2C_UNK func_0001072C(s32);
M2C_UNK func_000107E8(s32);
void func_000108A4(void *arg0);
void func_000108E0(s32 arg0);
s32 func_000108FC(void);
s32 func_00010904(void);
s32 func_0001090C(void);
M2C_UNK func_00010914(s32);
s32 func_00010920(s32 arg0);
void func_00010954(s32 arg0);
M2C_UNK func_000109D0(s32);
M2C_UNK func_00010A8C(s32);
M2C_UNK func_00010BA4(s32);
M2C_UNK func_00010BE8(s32);
u8 func_00010C3C(struct Unk_func_00010C3C_0 *arg0);
M2C_UNK func_00010C44(s32);
M2C_UNK func_00010D00(s32);
M2C_UNK func_00010DA8(s32);
void func_00010E24(s32 arg0);
s32 func_00010FB0(s32, s32);
s32 func_00011108(s32, s32);
s32 func_000111D4(void *arg0);
M2C_UNK func_000111E4(s32);
s32 func_00011260(s32, s32, s32);
s32 func_000113D0(s32, s32, s32);
s32 func_0001160C(void);
s32 func_00011614(void);
s32 func_0001161C(void);
s32 func_00011624(void);
void func_0001162C(s32 arg0);
void func_00011648(s32 arg0);
void func_00011664(s32 arg0);
void func_00011680(s32 arg0);
void func_0001169C(s32 arg0);
void func_000117A0(s32 arg0);
void func_000117BC(s32 arg0);
void func_000117D8(s32 arg0);
void func_00011814(s32 arg0, s32 arg1);
void func_00011830(s32 arg0, s32 arg1);
void func_0001186C(s32 arg0, s32 arg1, s32 arg2);
void func_00011888(s32 arg0, s32 arg1, s32 arg2);
void func_000118A4(s32 arg0);
s32 func_000118AC(void *arg0);
s32 func_000118DC(void *arg0);
s32 func_00011914(s32, s32);
void func_0001192C(s32 arg0, s32 arg1, s32 arg2);
void func_00011948(s32 arg0, s32 arg1, s32 arg2);
void func_00011964(s32 arg0, s32 arg1, s32 arg2);
void func_00011980(s32 arg0, s32 arg1);
s32 func_0001198C(s32, s32);
void func_0001199C(s32 arg0, s32 arg1);
void func_000119B8(s32 arg0, s32 arg1);
void func_000119D4(s32 arg0, s32 arg1);
void func_000119F0(s32 arg0);
void func_00011A0C(s32 arg0);
u8 func_00011A28_v271(void *arg0);
s32 func_00011AE4(void);
void func_00011B10(s32 arg0);
void func_00011B2C(s32 arg0);
void func_00011B48(s32 arg0);
void func_00011B84(s32 arg0);
void func_00011BA0(s32 arg0);
void func_00011BDC(s32 arg0);
void func_00011BF0(void);
void func_00011BF8(s32 arg0);
s32 func_00011CC0(void *arg0);
void func_00011D0C(s32 arg0);
u8 func_00011D24(void *arg0);
void func_00011D28(s32 arg0);
u8 func_00011D2C(void *arg0);
void func_00011D44(s32 arg0);
void func_00011D60(s32 arg0);
void func_00011D7C(s32 arg0);
void func_00011D98(s32 arg0);
void func_00011DB4(s32 arg0);
void func_00011DD0(s32 arg0);
void func_00011DEC(s32 arg0);
void func_00011E08(s32 arg0, s32 arg1);
void func_00011E24(s32 arg0);
void func_00011E40(s32 arg0);
void func_00011E5C(s32 arg0);
void func_00011E78(s32 arg0);
void func_00011E94(s32 arg0);
void func_00011EB0(s32 arg0);
void func_00011ECC(s32 arg0);
void func_00011EE8(s32 arg0);
void func_00011F04(s32 arg0, s32 *arg1);
void func_00011F20(s32 arg0);
void func_00011F3C(s32 arg0);
void func_00011F58(s32 arg0);
void func_00011F90(s32 arg0, s32 *arg1);
void func_00011FE4(s32 arg0);
void func_00012000(s32 arg0);
void func_0001201C(s32 arg0);
void func_00012054(s32 arg0);
void func_00012070(s32 arg0);
void func_000120E4(s32 arg0);
void func_00012100(s32 arg0);
s32 func_0001210C(void *arg0);
void func_0001211C(s32 arg0);
void func_00012138(s32 arg0);
void func_00012154(s32 arg0);
void func_0001218C(s32 arg0);
void func_000121A8(s32 arg0);
void func_000121C4(s32 arg0);
void func_000121E0(s32 arg0);
void func_000121FC(s32 arg0);
void func_00012218(M2C_UNK **arg0);
void func_00012228(M2C_UNK **arg0);
void func_00012250(void);
s32 func_00012258(void);
s32 func_00012260(void);
s32 func_00012268(void);
s32 func_00012270(void);
s32 func_00012278(void);
s32 func_00012280(void);
s32 func_00012288(void);
s32 func_00012290(void);
s32 func_00012298(void);
s32 func_000122A0(void);
s32 func_000122A8(void);
s32 func_000122B0(void);
s32 func_000122B8(void);
s32 func_000122C0(void);
s32 func_000122C8(void);
s32 func_000122D0(void);
s32 func_000122D8(void);
s32 func_000122E0(void);
s32 func_000122E8(void);
s32 func_000122F0(void);
s32 func_000122F8(void);
s32 func_00012300(void);
s32 func_00012308(void);
s32 func_00012310(void);
s32 func_00012318(void);
s32 func_00012320(void);
s32 func_00012328(void);
s32 func_00012330(void);
s32 func_00012338(struct Unk_func_00012338_0 *arg0);
void func_0001234C(void);
M2C_UNK func_00012424(s32);
M2C_UNK func_00012454(s32);
s32 func_000125A4(void *arg0);
void func_000125AC(void *arg0);
s32 func_00012784(void *arg0);
void func_00012AA4(s32 arg0, s32 arg1, s32 arg2);
s32 func_00012AB8(struct Unk_func_00012AB8_0 *arg0);
void func_00012AC0(s32 arg0, s32 arg1, s32 arg2);
void func_00012ACC(s32 arg0);
void func_00012AE8(s32 arg0);
M2C_UNK func_00012BBC(s32);
M2C_UNK func_00012C04(s32);
s32 func_00012C60(void);
s32 func_00012E2C(void);
void func_00013040(s32 arg0);
void func_0001305C(void);
s32 func_000130D4(struct Unk_func_000130D4_0 *arg0);
s32 func_000130DC(void);
void func_000130EC(void *arg0);
void func_00013174(void *arg0);
void func_000131B8(s32 arg0);
void func_000131D4(s32 arg0);
void func_00013204(void);
M2C_UNK func_00013290(s32);
M2C_UNK func_000132C0(s32);
void func_00013574(void);
s32 func_000137A0(struct Unk_func_000137A0_0 *arg0);
void func_000137D0(void **arg0);
void func_00013880(s32 arg0);
void func_0001389C(s32 arg0);
M2C_UNK func_00013A98(s32);
M2C_UNK func_00013AC8(s32);
void func_00013DF0(s32 arg0);
void func_00013DF4(void *arg0, s32 arg1, s32 arg2);
void func_00013E0C(s32 arg0);
void func_00013E10(M2C_UNK **arg0);
s32 func_00013E28(void);
void func_00013E28_v271(M2C_UNK **arg0);
void func_00013E40(M2C_UNK **arg0);
s32 func_00013EE0(void);
void func_000141E0(void *arg0);
void func_0001428C(void *arg0);
void func_00014304(void *arg0);
void func_0001442C(void *arg0);
void func_00014568(void *arg0);
M2C_UNK func_00014E8C(s32);
M2C_UNK func_000151CC(s32);
s32 func_00015338(s32 arg0);
M2C_UNK func_0001562C(s32);
M2C_UNK func_0001576C(s32);
s32 func_00015C78(s32 arg0);
s32 func_00015C9C(struct Unk_func_00015C9C_0 *arg0);
s32 func_00015ED8(struct Unk_func_00015ED8_0 *arg0, s32 arg1, s32 arg2);
s32 func_00016018(s32, s32);
void func_000160B0(void);
void func_000160D0(M2C_UNK **arg0);
void func_000160FC(M2C_UNK **arg0);
void func_00016244(void *arg0);
void func_00016284(void *arg0);
void func_000162C4(void *arg0);
s32 func_00016590(void);
s32 func_00016598(void);
s32 func_00016788(struct Unk_func_00016788_0 *arg0, s32 arg1);
s32 func_00016794(struct Unk_func_00016794_0 *arg0, s32 arg1);
s32 func_000167A0(struct Unk_func_000167A0_0 *arg0, s32 arg1);
s32 func_000167AC(struct Unk_func_000167AC_0 *arg0, s32 arg1);
s32 func_000167D4(struct Unk_func_000167D4_0 *arg0, s32 arg1);
void func_00016818(M2C_UNK **arg0);
void func_00016828(M2C_UNK **arg0);
s32 func_00016850(void);
s32 func_00016868(void);
s32 func_00016870(void);
s32 func_00016878(void);
s32 func_00016880(void);
s32 func_00016888(void);
s32 func_00016890(void);
void func_00016A98(M2C_UNK **arg0);
void func_00016AC4(M2C_UNK **arg0);
void func_00016AF0(M2C_UNK **arg0);
s32 func_00016B30(s32);
s32 func_00016BE4(struct Unk_func_00016BE4_0 *arg0, s32 arg1);
s32 func_00016BF0(struct Unk_func_00016BF0_0 *arg0, s32 arg1);
s32 func_00016BFC(struct Unk_func_00016BFC_0 *arg0, s32 arg1);
s32 func_00016C08(s32, s32);
s32 func_00016CB4(struct Unk_func_00016CB4_0 *arg0, s32 *arg1);
s32 func_0001759C(s32);
void func_00017A70(void *arg0);
void func_00017AB4(void *arg0);
s32 func_00017AF0(s32);
void func_000180A0(void *arg0);
void func_000180E0(void *arg0);
void func_00018118(void *arg0);
void func_00018150(void);
void func_00018158(void *arg0);
void func_0001817C(void *arg0);
void func_000190AC(s32 arg0);
s32 func_0001919C(s32);
void func_00019330(s32 arg0);
s32 func_000196E0(s32);
s32 func_000197B4(s32);
void func_00019FB4(s32 arg0);
void func_0001A01C(void);
s32 func_0001A184(s32, s32);
void func_0001A2E4(void);
void func_0001A304(void);
void func_0001A324(M2C_UNK **arg0);
void func_0001A334(M2C_UNK **arg0);
void func_0001B2B4(void *arg0);
void func_0001B384(void);
s32 func_0001B38C(void);
void func_0001B55C(void);
s32 func_0001B658(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_0001B7D4(s32, s32);
s32 func_0001B818(s32 *arg0, s32 arg1);
s32 func_0001B854(s32 *arg0, s32 arg1, s32 arg2);
s32 func_0001B890(s32 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_0001B94C(s32 *arg0, s32 arg1);
void func_0001BBFC(s32 arg0);
void func_0001BC18(s32 arg0);
void func_0001BC34(s32 arg0);
void func_0001BC50(s32 arg0);
void func_0001BC6C(s32 arg0);
void func_0001BC88(s32 arg0);
s32 func_0001BD38(void);
void func_0001BEB4(void);
s32 func_0001BEBC(void);
s32 func_0001BEC4(void);
s32 func_0001BECC(void);
s32 func_0001BED4(void);
s32 func_0001BEDC(void);
void func_0001BEDC_v271(void);
s32 func_0001BEE4(void);
s32 func_0001BEEC(void);
s32 func_0001BEF4(void);
s32 func_0001BEFC(void);
s32 func_0001BF04(void);
s32 func_0001BF0C(void);
s32 func_0001BF14(void);
s32 func_0001BF1C(void);
s32 func_0001BF24(void);
s32 func_0001BF2C(void);
s32 func_0001BF34(void);
s32 func_0001BF3C(void);
s32 func_0001BF44(void);
s32 func_0001BF4C(void);
s32 func_0001BF54(void);
s32 func_0001BF5C(void);
s32 func_0001BF64(void);
s32 func_0001BF6C(void);
s32 func_0001BF74(void);
s32 func_0001BF7C(void);
s32 func_0001BF84(void);
s32 func_0001BF8C(void);
s32 func_0001BF94(void);
s32 func_0001BF9C(void);
s32 func_0001BFA4(void);
void func_0001C3C0(void);
s32 func_0001C690(struct Unk_func_0001C690_0 *arg0, s32 arg1);
s32 func_0001C7B4(struct Unk_func_0001C7B4_0 *arg0, s32 arg1);
s32 func_0001C7F0(struct Unk_func_0001C7F0_0 *arg0, s32 arg1);
M2C_UNK *func_0001CCEC(void);
s32 func_0001D2C0(struct Unk_func_0001D2C0_0 *arg0, M2C_UNK arg1);
void func_0001D358(struct Unk_func_0001D358_0 *arg0);
void func_0001D3A8(struct Unk_func_0001D3A8_0 *arg0);
s32 func_0001D40C(s32 arg0, s32 arg1);
s32 func_0001D43C(struct Unk_func_0001D43C_0 *arg0, s32 arg1);
s32 func_0001D448(struct Unk_func_0001D448_0 *arg0, s32 arg1);
s32 func_0001D464(struct Unk_func_0001D464_0 *arg0);
void func_0001D58C(struct Unk_func_0001D58C_0 *arg0);
void func_0001D66C(struct Unk_func_0001D66C_0 *arg0);
void func_0001D738(struct Unk_func_0001D738_0 *arg0);
void func_0001D768(struct Unk_func_0001D768_0 *arg0);
void func_0001D798(struct Unk_func_0001D798_0 *arg0);
void func_0001D7C8(struct Unk_func_0001D7C8_0 *arg0);
void func_0001D7F8(struct Unk_func_0001D7F8_0 *arg0);
void func_0001D8A8(struct Unk_func_0001D8A8_0 *arg0);
void func_0001D8D8(struct Unk_func_0001D8D8_0 *arg0);
void func_0001D9C4(struct Unk_func_0001D9C4_0 *arg0);
void func_0001D9F4(struct Unk_func_0001D9F4_0 *arg0);
void func_0001DA24(struct Unk_func_0001DA24_0 *arg0);
void func_0001DB00(struct Unk_func_0001DB00_0 *arg0);
void func_0001DE88(struct Unk_func_0001DE88_0 *arg0);
void func_0001E040(struct Unk_func_0001E040_0 *arg0);
void func_0001E3D0(struct Unk_func_0001E3D0_0 *arg0);
void func_0001E400(struct Unk_vt_func_0001E400_arg0 **arg0);
M2C_UNK func_0001E450(void **, s32, s32);
void func_0001E468(s32 *arg0, s32 *arg1);
s32 func_0001E590(s32, s32, s32, s32);
void func_0001E668(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0001E6D8(struct Unk_func_0001E6D8_0 *arg0);
void func_0001EC1C(struct Unk_func_0001EC1C_0 *arg0);
s32 func_0001ED94(void);
s32 func_0001ED9C(void);
void func_0001EE34(struct Unk_func_0001EE34_0 *arg0, s32 arg1);
void func_0001EE54(void *arg0, void *arg1);
void func_0001EE8C(void *arg0, void *arg1);
void func_0001EF64(s32 arg0, void *arg1);
void func_0001F698(struct Unk_func_0001F698_0 *arg0);
void func_0001F770(struct Unk_func_0001F770_0 *arg0, s32 arg1);
void func_0001F7A4(struct Unk_func_0001F7A4_0 *arg0, s32 arg1);
void func_0001F7D8(struct Unk_func_0001F7D8_0 *arg0);
void func_0001F808(struct Unk_func_0001F808_0 *arg0);
void func_0001F838(struct Unk_func_0001F838_0 *arg0);
void func_0001F868(struct Unk_func_0001F868_0 *arg0);
void func_0001F898(struct Unk_func_0001F898_0 *arg0);
void func_0001F8C8(struct Unk_func_0001F8C8_0 *arg0);
s32 func_0001F8F8(struct Unk_func_0001F8F8_0 *arg0);
s32 func_0001F934(struct Unk_func_0001F934_0 *arg0);
void func_0001F968(struct Unk_func_0001F968_0 *arg0);
s32 func_0001F998();
s32 func_0001FAA8(s32 arg0);
s32 func_0001FAC8(s32 arg0);
void func_0001FB80(M2C_UNK **arg0);
void func_0001FB90(M2C_UNK **arg0);
s32 func_0001FBB8(void);
s32 func_0001FBC0(void);
s32 func_0001FBC8(void);
s32 func_0001FBD0(void);
s32 func_0001FBD8(void);
s32 func_0001FBE0(void);
s32 func_0001FC6C(void);
s32 func_0001FC74(void);
s32 func_0001FC98(void);
s32 func_0001FCA0(void);
s32 func_0001FCA8(void);
s32 func_0001FD24(void);
s32 func_0001FD2C(void);
s32 func_0001FD34(void);
s32 func_0001FD3C(void);
s32 func_0001FD44(void);
s32 func_0001FD4C(struct Unk_func_0001FD4C_0 *arg0);
s32 func_0001FDD4(s32);
void func_0001FEAC(struct Unk_func_0001FEAC_0 *arg0);
s32 func_0001FF04(struct Unk_func_0001FF04_0 *arg0, s32 arg1);
M2C_UNK func_0001FF2C();
M2C_UNK func_0002001C(void *);
M2C_UNK func_00020024(void *, s32);
s32 func_0002007C(void *, s32);
M2C_UNK func_000200D4(void *, s32);
s32 func_00020148(s32 arg0, s32 arg1);
void func_00020154(s32 *arg0);
void func_0002015C(s32 *arg0);
s32 func_00020164(s32 *arg0);
s32 func_00020170(s32 *arg0, s32 arg1);
M2C_UNK func_000201A8(void *);
M2C_UNK func_0002025C(void *);
void func_00020324(struct Unk_func_00020324_0 *arg0);
s32 func_0002037C(struct Unk_func_0002037C_0 *arg0);
M2C_UNK func_0002044C(void *);
M2C_UNK func_000204A8(void *);
M2C_UNK func_0002081C(void *);
M2C_UNK func_00020838(void *);
M2C_UNK func_00020844(void *);
M2C_UNK func_00020988(void *);
M2C_UNK func_00020994(void *);
s32 func_000209A0(struct Unk_func_000209A0_0 *arg0);
M2C_UNK func_000209B0(void *);
M2C_UNK func_000209C0(void *);
M2C_UNK func_000209D0(void *);
M2C_UNK func_00020AA4(void *);
void func_00020B24(void);
void func_00020B40(void);
void func_00020B5C(void);
void func_00020B78(void);
void func_00020B94(void);
M2C_UNK func_00020BA0(void *);
void func_00020BB0(void);
void func_00020BCC(void);
void func_00020BE8(void);
void **func_00020BF8(void *, s32);
void func_00020C04(void);
void func_00020C20(void);
void func_00020C78(void **arg0);
void func_00020CD8(struct Unk_func_00020CD8_0 *arg0);
void func_00020D1C(struct Unk_func_00020D1C_0 *arg0);
M2C_UNK func_00020D60(s32);
void func_00020E08(M2C_UNK **arg0);
void func_00020E18(M2C_UNK **arg0);
void func_00020E40(M2C_UNK **arg0);
s32 func_00020E44(void *);
s32 func_00020E4C(void *);
void func_00020E50(M2C_UNK **arg0);
void func_00020E78(M2C_UNK **arg0);
void func_00020E88(M2C_UNK **arg0);
s32 func_00020EB0(void *arg0, s32 arg1);
void func_00020EB0_v271(M2C_UNK **arg0);
void func_00020EC0(M2C_UNK **arg0);
M2C_UNK func_00020EE0(void *);
void func_00020EE8(M2C_UNK **arg0);
M2C_UNK func_00020EEC(void *);
void func_00020EF8(M2C_UNK **arg0);
void func_00020F20(M2C_UNK **arg0);
void func_00020F30(M2C_UNK **arg0);
void func_00020F58(M2C_UNK **arg0);
void func_00020F68(M2C_UNK **arg0);
s32 func_00020FDC(struct Unk_func_00020FDC_0 *arg0, s32 arg1);
M2C_UNK func_00020FE8(void *);
s32 func_0002107C(struct Unk_func_0002107C_0 *arg0, u32 arg1);
s32 func_000211A8(s32);
void func_00021280(struct Unk_func_00021280_0 *arg0);
s32 func_000212D8(struct Unk_func_000212D8_0 *arg0, s32 arg1);
M2C_UNK func_00021314(void *);
s32 func_00021420(void *);
M2C_UNK func_000214D0(void *);
M2C_UNK func_000214D8(void *);
M2C_UNK func_00021548(void *);
M2C_UNK func_00021600(void *);
M2C_UNK func_00021674(void *);
M2C_UNK func_00021748(void *);
void func_00021868(struct Unk_func_00021868_0 *arg0);
M2C_UNK func_00021874(void *);
s32 func_000218EC(s32 *arg0);
M2C_UNK func_000218F4(void *);
void func_00021944(struct Unk_func_00021944_0 *arg0);
void func_00021950(struct Unk_func_00021950_0 *arg0);
s32 func_0002195C(s32 *arg0);
M2C_UNK func_00021964(void *);
M2C_UNK func_000219EC(void *);
void func_00021A4C(struct Unk_func_00021A4C_0 *arg0);
void func_00021A58(struct Unk_func_00021A58_0 *arg0);
s32 func_00021A64(s32 *arg0);
M2C_UNK func_00021A6C(void *);
void func_00021B3C(struct Unk_func_00021B3C_0 *arg0, s32 arg1);
void func_00021B88(void);
void func_00021C80(void);
void func_00021C88(void);
s32 func_00021D9C(s32);
M2C_UNK func_00021DA4(s32);
s32 func_00021F54(M2C_UNK);
void func_00022078(s32 arg0);
void func_00022220(s32 arg0);
M2C_UNK func_000223C4(s32);
M2C_UNK func_00022444(s32);
void func_000224C4(s32 arg0);
void func_00022504(s32 arg0);
void func_00022544(s32 arg0);
s32 func_00022794(s32 arg0, s32 *arg1);
void func_000227E4(void);
void func_000227EC(void);
void func_00022A04(s32 arg0);
void func_00022A8C(s32 arg0);
void func_00022ABC(s32 arg0);
M2C_UNK func_00022AEC();
s32 func_00022B48(struct Unk_func_00022B48_0 *arg0, u32 arg1);
void func_00022B58(struct Unk_func_00022B58_0 *arg0);
void func_00022B84(struct Unk_func_00022B84_0 *arg0);
void func_00022DB0(M2C_UNK **arg0);
s32 func_00022F14(void *, s32);
M2C_UNK func_00022F64(void *, s32);
M2C_UNK func_000230B8(s32);
M2C_UNK func_000230D0(s32);
M2C_UNK func_000230E0(s32);
M2C_UNK func_000230F8(s32);
M2C_UNK func_00023108(s32);
M2C_UNK func_00023120(s32);
void func_00023130(struct Unk_func_00023130_0 *arg0);
void func_00023440(M2C_UNK **arg0);
M2C_UNK func_000235A4(void *, s32);
M2C_UNK func_00023674(s32);
M2C_UNK func_00023684(s32);
void func_0002369C(struct Unk_func_0002369C_0 *arg0);
void func_000237C8(M2C_UNK **arg0);
void func_000237F0(M2C_UNK **arg0);
void func_00023818(M2C_UNK **arg0);
void func_00023840(M2C_UNK **arg0);
void func_00023868(M2C_UNK **arg0);
void func_00023890(M2C_UNK **arg0);
s32 func_00023D84(struct Unk_func_00023D84_0 *arg0, struct Unk_func_00023D84_1 *arg1);
void func_00023F6C(void);
void func_0002417C(void);
void func_0002420C(void);
void func_00024214(s32 arg0, M2C_UNK arg1, s32 arg2);
void func_0002423C(s32 arg0, M2C_UNK arg1);
void func_00024260(M2C_UNK **arg0);
void func_00024270(M2C_UNK **arg0);
void func_00024280(M2C_UNK **arg0);
void func_000242A8(struct Unk_func_000242A8_0 *arg0);
void func_000242C0(struct Unk_func_000242C0_0 *arg0);
void func_000242D8(struct Unk_func_000242D8_0 *arg0);
void func_00024330(struct Unk_func_00024330_0 *arg0);
void func_00024388(struct Unk_func_00024388_0 *arg0);
s32 func_00024770(s32 arg0, s32 *arg1);
s32 func_000247C0(s32 arg0, s32 arg1, s32 *arg2);
s32 func_000248B0(s32 arg0);
M2C_UNK func_0002493C(M2C_UNK, s32, s32);
M2C_UNK func_00024998(M2C_UNK, s32);
void func_00024A80(void);
s32 func_00024B64(s32);
s32 func_00024C1C(struct Unk_func_00024C1C_0 *arg0);
s32 func_00024C3C(void);
void func_00024C64(struct Unk_func_00024C64_0 *arg0);
void func_00024C9C(struct Unk_func_00024C9C_0 *arg0);
void func_00024CD4(struct Unk_func_00024CD4_0 *arg0);
void func_00024D0C(struct Unk_func_00024D0C_0 *arg0);
void func_00024D44(struct Unk_func_00024D44_0 *arg0);
void func_00024D90(struct Unk_func_00024D90_0 *arg0);
void func_00024E54(struct Unk_func_00024E54_0 *arg0);
void func_00024E94(struct Unk_func_00024E94_0 *arg0);
void func_00024ED4(struct Unk_func_00024ED4_0 *arg0, s32 arg1);
void func_00024F14(struct Unk_func_00024F14_0 *arg0, s32 arg1);
M2C_UNK func_00024FE0(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_00025068(void *, M2C_UNK);
s32 func_00025088(struct Unk_func_00025088_0 *arg0, M2C_UNK arg1);
M2C_UNK func_000250D0(s32);
M2C_UNK func_000250EC(s32);
s32 func_00025130(s32);
s32 func_00025180(s32);
s32 func_000251D0(s32);
void func_00025234(void);
s32 func_0002523C(s32, s32, s32, s32);
void func_000252A4(s32 arg0);
s32 func_00025418(s32);
s32 func_00025464(s32 *arg0, M2C_UNK arg1);
s32 func_000254AC(void);
M2C_UNK func_000254D4(s32, M2C_UNK);
s32 func_000254FC(s32, s32);
void func_000256DC(void);
void func_000256E4(void);
s32 func_000256EC(void);
s32 func_000256F4(void);
void func_000256FC(void);
s32 func_00025910(s32 arg0);
s32 func_000259A8(s32 arg0);
s32 func_00025B48(s32 arg0);
M2C_UNK func_00025C6C(M2C_UNK, M2C_UNK);
void func_00025CE8(void);
void func_00025D08(void);
void func_00025F14(struct Unk_func_00025F14_0 *arg0);
void func_00025F2C(M2C_UNK **arg0);
void func_00025F3C(M2C_UNK **arg0);
M2C_UNK func_0002658C(M2C_UNK);
M2C_UNK func_000265F0(s32);
M2C_UNK func_000266F4(M2C_UNK, M2C_UNK);
void func_00026770(void);
void func_00026790(void);
void func_0002699C(struct Unk_func_0002699C_0 *arg0);
void func_000269B4(M2C_UNK **arg0);
void func_000269C4(M2C_UNK **arg0);
s32 func_00026A64(s32 *arg0);
void func_00026ACC(s32 *arg0);
void func_00026AE8(s32 *arg0);
void func_00026B40(struct Unk_func_00026B40_0 *arg0, s32 arg1);
void func_00026B8C(s32 *arg0, struct Unk_func_00026B8C_1 *arg1);
M2C_UNK func_00026BA8(s32);
M2C_UNK func_00026D9C(s32);
s32 func_00026DDC(s32 *arg0, struct Unk_func_00026DDC_1 *arg1);
s32 func_00026E50(s32 *arg0, struct Unk_func_00026E50_1 *arg1);
s32 func_00026E90(struct Unk_func_00026E90_0 *arg0, s32 *arg1);
s32 func_00027004(s32 *arg0);
s32 func_00027030(s32 *arg0);
s32 func_0002705C(s32 *arg0, s32 *arg1);
s32 func_00027480(s32 *arg0, struct Unk_func_00027480_1 *arg1);
s32 func_000274C0(s32 *arg0);
s32 func_00027500(void **arg0, struct Unk_func_00027500_1 *arg1);
s32 func_00027548(s32 *arg0, struct Unk_func_00027548_1 *arg1);
s32 func_00027590(s32 *arg0, void *arg1);
s32 func_000275E0(struct Unk_func_000275E0_0 *arg0, s32 *arg1);
s32 func_000276A4(struct Unk_func_000276A4_0 *arg0, struct Unk_func_000276A4_1 *arg1);
s32 func_000276E0(struct Unk_func_000276E0_0 *arg0, struct Unk_func_000276E0_1 *arg1);
s32 func_0002774C(struct Unk_func_0002774C_0 *arg0, struct Unk_func_0002774C_1 *arg1);
s32 func_000279FC(s32 arg0);
s32 func_00027D70(struct Unk_func_00027D70_0 *arg0, s32 arg1);
u32 func_00027DB4(u8 *arg0, s32 *arg1);
void func_00027DF4(s32 arg0);
s32 func_00027E10(s32);
s32 func_00027E28(s32);
void func_00027E54(void);
M2C_UNK func_00027E70(s32);
void func_000286B4(void);
s32 func_000286D0(s32);
s32 func_00028838(u32 arg0, u32 arg1);
void func_00028D98(struct Unk_func_00028D98_0 *arg0, s32 arg1);
M2C_UNK func_00028DB8(s32);
M2C_UNK func_000291E8(s32);
void func_00029370(M2C_UNK **arg0);
void func_00029380(M2C_UNK **arg0);
s32 func_000293D4(void);
void func_000293E0(void);
void func_00029404(void);
M2C_UNK func_00029428();
M2C_UNK func_0002945C();
M2C_UNK func_0002948C();
M2C_UNK func_000294C0();
void func_0002A348(s32 arg0);
void func_0002A634(struct Unk_func_0002A634_0 *arg0, s32 arg1);
s32 func_0002A6AC();
M2C_UNK func_0002A864();
void func_0002AEE0(struct Unk_func_0002AEE0_0 *arg0, struct Unk_func_0002AEE0_1 *arg1);
M2C_UNK func_0002AF30(s32);
void func_0002B4A0(struct Unk_func_0002B4A0_0 *arg0);
void func_0002B4E0(struct Unk_func_0002B4A0_0 *arg0);
s32 func_0002BBDC(struct Unk_func_0002BBDC_0 *arg0);
s32 func_0002BEF8(s32, s32, s32);
s32 func_0002C57C(s32, s32);
s32 func_0002C6B4(s32);
s32 func_0002C804(s32);
s32 func_0002CA04(struct Unk_func_0002CA04_0 *arg0);
void func_0002CA84(s32 arg0, s32 arg1);
s32 func_0002CAA4(s32 arg0);
s32 func_0002CAAC(struct Unk_func_0002CAAC_0 *arg0);
s32 func_0002CAB4(struct Unk_func_0002CAB4_0 *arg0, s32 arg1);
s32 func_0002CAC0(s32);
M2C_UNK func_0002CAFC(s32);
M2C_UNK func_0002CBA0(s32);
M2C_UNK func_0002CD38(s32);
void func_0002CF60(struct Unk_func_0002CF60_0 *arg0);
void func_0002CF6C(struct Unk_func_0002CF6C_0 *arg0);
M2C_UNK func_0002D2D8(s32, M2C_UNK);
M2C_UNK func_0002D754(s32);
M2C_UNK func_0002D790(s32, M2C_UNK);
M2C_UNK func_0002D8E8(s32, M2C_UNK);
M2C_UNK func_0002DA40();
M2C_UNK func_0002DBB0();
s32 func_0002DFAC(s32);
s32 func_0002E08C(struct Unk_func_0002E08C_0 *arg0);
s32 func_0002E0F4(s32, s32);
s32 func_0002E16C(s32, s32);
u8 func_0002E208(struct Unk_func_0002E208_0 *arg0);
void func_0002E2C4(struct Unk_func_0002B4A0_0 *arg0);
s32 func_0002E4A0(struct Unk_func_0002E4A0_0 *arg0);
u8 func_0002E504(struct Unk_func_0002E504_0 *arg0);
u8 func_0002E50C(struct Unk_func_0002E50C_0 *arg0);
void func_0002EB2C(void);
s32 func_0002ED84(struct Unk_func_0002ED84_0 *arg0);
void func_0002ED8C(struct Unk_func_0002ED8C_0 *arg0);
void func_0002F284(void);
void func_0002F2A0(void);
s32 func_0002F3FC(s32);
s32 func_0002F438(s32);
s32 func_0002F60C(void);
void func_0002F820(s32 arg0);
void func_0002F83C(void);
s32 func_0002F8BC(void);
void func_0002F8CC(struct Unk_func_0002F8CC_0 *arg0);
void func_0002F954(struct Unk_func_0002F954_0 *arg0);
void func_0002F9E4(void);
void func_0002FD54(void);
M2C_UNK func_0002FD8C();
void func_0002FFB0(void **arg0);
void func_000305D4(struct Unk_func_000305D4_0 *arg0, s32 arg1, s32 arg2);
void func_000305F0(M2C_UNK **arg0);
void func_00030608(M2C_UNK **arg0);
void func_00030620(M2C_UNK **arg0);
void *func_0003064C(s32 arg0, s32 arg1);
s32 func_000306C0(void);
void func_000309C0(struct Unk_func_000309C0_0 *arg0);
void func_00030A6C(struct Unk_func_00030A6C_0 *arg0);
void func_00030AE4(struct Unk_func_00030AE4_0 *arg0);
void func_00030C0C(struct Unk_func_00030C0C_0 *arg0);
void func_00030CD0(struct Unk_func_00030CD0_0 *arg0);
void func_00030D48(struct Unk_func_00030D48_0 *arg0);
M2C_UNK func_00031154(M2C_UNK);
s32 func_000312E8();
M2C_UNK func_00031320();
s32 func_00031B18(struct Unk_func_00031B18_0 *arg0);
M2C_UNK func_000327F8(M2C_UNK, M2C_UNK);
void func_00032890(void);
void func_000328B0(M2C_UNK **arg0);
void func_000328DC(M2C_UNK **arg0);
void func_00032A24(struct Unk_func_00032A24_0 *arg0);
void func_00032A64(struct Unk_func_00032A64_0 *arg0);
void func_00032AA4(struct Unk_func_00032AA4_0 *arg0);
s32 func_00032D98(void);
void func_00032FF8(M2C_UNK **arg0);
void func_00033008(M2C_UNK **arg0);
s32 func_00033030(void);
s32 func_00033048(void);
s32 func_00033050(void);
s32 func_00033058(void);
s32 func_00033060(void);
s32 func_00033068(void);
s32 func_00033070(void);
void func_00033278(M2C_UNK **arg0);
void func_000332A4(M2C_UNK **arg0);
void func_000332D0(M2C_UNK **arg0);
s32 func_00033310(s32);
M2C_UNK func_00033D7C();
void func_00034258(struct Unk_func_00034258_0 *arg0);
void func_0003429C(struct Unk_func_0003429C_0 *arg0);
s32 func_000342D8(s32);
void func_00034888(struct Unk_func_00034888_0 *arg0);
void func_000348C8(struct Unk_func_000348C8_0 *arg0);
void func_00034900(struct Unk_func_0003429C_0 *arg0);
void func_00034938(void);
void func_00034940(struct Unk_func_00034940_0 *arg0);
void func_00034964(struct Unk_func_00034964_0 *arg0);
void func_00035898(s32 arg0);
M2C_UNK func_00035988();
void func_00035B1C(s32 arg0);
M2C_UNK func_00035ECC(s32);
M2C_UNK func_00035FA0(s32);
void func_00036468(void);
void func_00036484(void);
M2C_UNK func_000364A0();
void func_000367A0(s32 arg0);
void func_00036808(void);
void func_00036850(void);
M2C_UNK func_00036898();
void func_000368CC(void);
M2C_UNK func_00036908();
M2C_UNK func_00036970(M2C_UNK, M2C_UNK);
void func_00036AD0(void);
void func_00036AEC(s32 *arg0, void *arg1);
void func_00036AF0(void);
void func_00036B10(M2C_UNK **arg0);
void func_00036B20(M2C_UNK **arg0);
s32 func_00036B48(s32, s32, s32, s32, s32);
s32 func_00036CC0(s32);
s32 func_00037354(s32, s32);
s32 func_0003737C(s32, s32, s32);
s32 func_000373F4(s32);
M2C_UNK func_000374AC(s32);
void func_0003751C(s32 arg0);
s32 func_00037568(s32);
s32 func_000375CC(s32);
s32 func_00037660();
s32 func_00037730(s32);
s32 func_000377F4(s32, s32);
void func_00037AA0(struct Unk_func_00037AA0_0 *arg0);
void func_00037B70(void);
s32 func_00037B78(void);
void func_00037D48(void);
void func_00037D54(void);
s32 func_00037E44(s32 *arg0);
M2C_UNK func_00037FC0(s32, u8);
s32 func_00038004(s32 *arg0, s32 arg1);
s32 func_00038040(s32 *arg0, s32 arg1, s32 arg2);
M2C_UNK func_0003807C(s32, s32, u8, u8);
s32 func_00038138(s32 *arg0);
u8 func_0003824C(s32);
s32 func_00038458(s32, s32);
s32 func_00038524(void);
void func_00038630(void);
void func_000386C8(void);
s32 func_00038D88(struct Unk_func_00038D88_0 *arg0, s32 *arg1);
s32 func_00038D9C(struct Unk_func_00038D9C_0 *arg0, s32 arg1, s32 arg2);
M2C_UNK *func_000394D8(void);
void func_0003AC54(s32 *arg0, s32 *arg1);
s32 func_0003B580(void);
s32 func_0003B588(void);
M2C_UNK *func_0003B634(void);
void func_0003B640(struct Unk_func_0003B640_0 *arg0, struct Unk_func_0003B640_1 *arg1);
M2C_UNK *func_0003B66C(void);
void func_0003B678(struct Unk_func_0003B678_0 *arg0, struct Unk_func_0003B678_1 *arg1);
M2C_UNK *func_0003B69C(void);
M2C_UNK *func_0003B6CC(void);
M2C_UNK *func_0003B744(void);
M2C_UNK *func_0003B778(void);
void func_0003C378(void *arg0, s32 arg1);
void func_0003C3D0(s32 arg0, s32 arg1);
s32 func_0003D104(void);
s32 func_0003D264(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_0003D310(void);
void func_0003D32C(void);
void func_0003D348(void);
void func_0003D364(void);
void func_0003D380(void);
void func_0003D39C(void);
void func_0003D3B8(void);
void func_0003D3D4(void);
void func_0003D3F0(void);
void func_0003D40C(void);
void func_0003D464(void **arg0);
void func_0003D5F4(M2C_UNK **arg0);
void func_0003D604(M2C_UNK **arg0);
void func_0003D62C(M2C_UNK **arg0);
void func_0003D63C(M2C_UNK **arg0);
void func_0003D664(M2C_UNK **arg0);
void func_0003D674(M2C_UNK **arg0);
void func_0003D69C(M2C_UNK **arg0);
void func_0003D6AC(M2C_UNK **arg0);
void func_0003D6D4(M2C_UNK **arg0);
void func_0003D6E4(M2C_UNK **arg0);
void func_0003D70C(M2C_UNK **arg0);
void func_0003D71C(M2C_UNK **arg0);
void func_0003D744(M2C_UNK **arg0);
void func_0003D754(M2C_UNK **arg0);
s32 func_0003D93C(void *arg0);
M2C_UNK func_0003DB4C(s32);
M2C_UNK func_0003DC14(s32);
void func_0003DCE4(s32 arg0);
void func_0003DCF0(void);
M2C_UNK func_0003DEF0(s32);
s32 func_0003E434(struct Unk_func_0003E434_0 *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3);
s32 func_0003E498(void *arg0, s32 arg1);
s32 func_0003E52C(void *arg0, s32 arg1);
s32 func_0003EAF0(struct Unk_func_0003EAF0_0 *arg0);
s32 func_0003EB0C(struct Unk_func_0003EB0C_0 *arg0);
s32 func_0003EB28(s32);
M2C_UNK func_0003ED04(s32);
M2C_UNK func_0003F3D8(s32);
s32 func_0003F460(struct Unk_func_0003F460_0 *arg0, s32 arg1);
s32 func_0003F46C(struct Unk_func_0003F46C_0 *arg0, s32 arg1);
M2C_UNK func_0003F4F4(s32);
s32 func_0003F500(struct Unk_func_0003F500_0 *arg0, s32 arg1);
s32 func_0003FFE0(void *, s32, M2C_UNK, M2C_UNK);
void func_00041194(s32 arg0);
void func_000411B0(s32 arg0);
void func_000411CC(s32 arg0);
M2C_UNK func_0004146C(s32);
M2C_UNK func_00041510(s32);
void func_000415BC(s32 arg0);
void func_000415C8(struct Unk_func_000415C8_0 *arg0);
M2C_UNK func_00041814(s32);
s32 func_00041A40(void *arg0, s32 arg1);
s32 func_00041A88(struct Unk_func_00041A88_0 *arg0);
s32 func_00041E70(struct Unk_func_00041E70_0 *arg0, struct Unk_func_00041E70_1 *arg1);
void func_00042008(struct Unk_func_00042008_0 *arg0, s32 arg1);
void func_00042060(s32 arg0);
void func_0004207C(s32 arg0);
void func_00042098(s32 arg0);
s32 func_00042114(void);
M2C_UNK func_00042478(s32);
M2C_UNK func_00042514(s32);
void func_000425B8(s32 arg0);
void func_000425C4(struct Unk_func_000425C4_0 *arg0);
M2C_UNK func_0004295C(s32);
void func_00042A9C(s32 arg0);
M2C_UNK func_00042E1C(s32);
M2C_UNK func_00042E2C(s32);
M2C_UNK func_00042E44(s32);
s32 func_00042E8C(void *arg0);
s32 func_00043018(struct Unk_func_00043018_0 *arg0, s32 *arg1);
s32 func_00043098(s32);
M2C_UNK func_0004326C(s32);
M2C_UNK func_000432B8(s32);
void func_00043408(s32 arg0);
void func_00043424(s32 arg0);
void func_00043440(s32 arg0);
M2C_UNK func_0004394C(s32);
M2C_UNK func_000439F4(s32);
void func_00043AB0(void *arg0);
M2C_UNK func_00043F8C(s32);
s32 func_00044074(void *arg0, s32 arg1);
s32 func_00044108(struct Unk_func_00044108_0 *arg0);
s32 func_00044218(struct Unk_func_00044218_0 *arg0, s32 arg1);
s32 func_00044244(void);
s32 func_0004424C(void);
void func_00044CFC(s32 arg0);
void func_00044D18(s32 arg0);
void func_00044D34(s32 arg0);
s32 func_00044DC4(void);
s32 func_00044DE4(void);
s32 func_00044F90(void);
void func_00044FBC(s32 arg0);
void func_00044FC8(void);
M2C_UNK func_000453AC(s32);
M2C_UNK func_000454A0(s32);
void func_000455A8(struct Unk_func_000455A8_0 *arg0);
s32 func_0004570C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK func_000457C4(s32);
s32 func_00045824(void);
s32 func_000458F0(struct Unk_func_000458F0_0 *arg0);
s32 func_00045A14(struct Unk_func_00045A14_0 *arg0, s32 arg1);
s32 func_00045A20(struct Unk_func_00045A20_0 *arg0, s32 arg1);
s32 func_00045A80(void);
s32 func_00045A88(void);
s32 func_00045A90(void);
s32 func_00045A98(struct Unk_func_00045A98_0 *arg0);
void func_00045B90(s32 arg0);
void func_00045BAC(s32 arg0);
void func_00045BC8(s32 arg0);
s32 func_00045E00(s32, s32);
M2C_UNK func_00045F18(s32);
M2C_UNK func_00045FCC(s32);
void func_00046088(s32 arg0);
void func_00046094(struct Unk_func_00046094_0 *arg0);
M2C_UNK func_000462BC(s32);
s32 func_0004640C(struct Unk_func_0004640C_0 *arg0);
s32 func_000465A0(struct Unk_func_000465A0_0 *arg0, s32 arg1);
s32 func_000465FC(void);
void func_00046604(s32 arg0);
void func_00046620(s32 arg0);
void func_0004663C(s32 arg0);
s32 func_0004672C(void *arg0, s32 arg1);
s32 func_00046738(void *arg0, s32 arg1);
s32 func_000467C0(void *arg0, s32 arg1);
s32 func_000467CC(void *arg0, s32 arg1);
s32 func_000472AC(s32, s32, s32, s32);
void func_00047904(void *arg0);
void func_0004833C(void *arg0);
s32 func_00048788(s32 arg0, s32 *arg1, s32 arg2);
void func_00048854(s32 arg0);
void func_00048860(void *arg0);
s32 func_00048D20(void *arg0);
void func_00048EB8(void *arg0, s32 arg1);
void func_00048EC8(struct Unk_func_00048EC8_0 *arg0);
s32 func_00048F24(s32, s32);
s32 func_00049108(void *arg0, void *arg1);
void func_000492A0(void *arg0, s32 arg1);
s32 func_000497AC(s32);
void func_00049850(s32 arg0);
void func_0004985C(void *arg0);
void func_00049C4C(void);
void func_0004A224(M2C_UNK **arg0);
void func_0004A234(M2C_UNK **arg0);
void func_0004A25C(struct Unk_func_0004A25C_0 *arg0);
void func_0004A278(struct Unk_func_0004A278_0 *arg0);
void func_0004A2AC(struct Unk_func_0004A2AC_0 *arg0, s32 arg1);
s32 func_0004A2C4(void *arg0, s32 *arg1);
void func_0004A2D4(s32 arg0);
void func_0004A2F0(s32 arg0);
void func_0004A30C(s32 arg0);
void func_0004A44C(struct Unk_vt_func_0004A44C_arg0 **arg0);
void func_0004A470(struct Unk_vt_func_0004A470_arg0 **arg0);
void func_0004A494(struct Unk_vt_func_0004A494_arg0 **arg0);
void func_0004A4DC(struct Unk_vt_func_0004A4DC_arg0 **arg0);
void func_0004A500(struct Unk_vt_func_0004A500_arg0 **arg0);
void func_0004A524(struct Unk_vt_func_0004A524_arg0 **arg0);
void func_0004A548(s32 arg0);
void func_0004A564(s32 arg0);
void func_0004A580(s32 arg0);
void func_0004A59C(s32 arg0);
void func_0004A6B8(void);
s32 func_0004A6C0(void);
s32 func_0004A6C8(void);
s32 func_0004A6D0(void);
void func_0004A6D0_v271(s32 arg0);
s32 func_0004A6D8(void);
s32 func_0004A6E0(void);
s32 func_0004A6E8(void);
s32 func_0004A6F0(void);
void func_0004A6F8(void);
void func_0004AB54(s32 arg0);
s32 func_0004B21C(void *arg0);
s32 func_0004B32C(void *arg0, s32 arg1);
s32 func_0004B358(void);
s32 func_0004B360(void);
s32 func_0004B6B4(void);
s32 func_0004BF48(void);
s32 func_0004C014(void *arg0);
s32 func_0004C048(s32, s32, s32);
void func_0004C0CC(void *arg0);
s32 func_0004C138(void *arg0, s32 arg1);
s32 func_0004C144(void *arg0, s32 arg1);
s32 func_0004C1A4(void);
s32 func_0004C1B4(void);
s32 func_0004C1BC(void *arg0);
void func_0004C260(struct Unk_func_0004C260_0 *arg0, u32 arg1);
void func_0004C28C(struct Unk_func_0004C28C_0 *arg0, s32 arg1, s32 arg2);
void func_0004C2B0(struct Unk_func_0004C2B0_0 *arg0, s8 arg1);
void func_0004C2D8(struct Unk_func_0004C2D8_0 *arg0, s8 arg1);
s32 func_0004C304(s32, s32, s32);
M2C_UNK func_0004C484();
M2C_UNK func_0004C5C0(M2C_UNK, M2C_UNK);
void func_0004C694(void);
void func_0004C6B4(void);
s32 func_0004C700(void);
void func_0004C7AC(s32 arg0);
s32 func_0004C7B8(void);
void func_0004C7B8_v271(void *arg0);
s32 func_0004C7C4(s32 arg0);
s32 func_0004CCC4(void *arg0, s32 arg1);
s32 func_0004CD20(void);
void func_0004CDB8(M2C_UNK **arg0);
void func_0004CDE4(M2C_UNK **arg0);
void func_0004CF10(M2C_UNK **arg0);
void func_0004CF3C(M2C_UNK **arg0);
void func_0004CF68(M2C_UNK **arg0);
void func_0004CFA8(struct Unk_func_0004CFA8_0 *arg0);
void func_0004D008(void);
s32 func_0004D010(struct Unk_func_0004D010_0 *arg0);
void func_0004D384(M2C_UNK **arg0);
void func_0004D3B0(M2C_UNK **arg0);
void func_0004D3DC(M2C_UNK **arg0);
void func_0004D684(struct Unk_func_0004D684_0 *arg0);
void func_0004D6B4(struct Unk_func_0004D6B4_0 *arg0);
s32 func_0004D6E4(struct Unk_func_0004D6E4_0 *arg0);
void func_0004D840(struct Unk_func_0004D840_0 *arg0, s32 arg1);
void func_0004D890(void);
s32 func_0004DB00(void);
void func_0004DB28(M2C_UNK **arg0);
void func_0004DB54(M2C_UNK **arg0);
s32 func_0004DC48(s32 arg0, s32 *arg1);
void func_0004DDAC(struct Unk_func_0004DDAC_0 *arg0, struct Unk_func_0004DDAC_1 *arg1);
M2C_UNK func_0004FF58();
s32 module_stop(void);
s32 sceDisplayGetMode(void *, void *, void *);
M2C_UNK sceIoClose();
s32 sceIoDclose(u32);
s32 sceKernelCreateEventFlag(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 sceKernelCreateSema(void *, u32, s32, s32, void *);
s32 sceKernelDeleteEventFlag();
s32 sceKernelDeleteSema(s32);
s32 sceKernelPollSema(s32, s32);
s32 sceKernelSignalSema(s32, s32);
s32 sceKernelWaitSema(s32, s32, void *);
M2C_UNK scePaf_0CC722C1(void *, s32);
M2C_UNK scePaf_0CFDBE2F(s32);
M2C_UNK scePaf_0F3527DD();
M2C_UNK scePaf_1F0E9712(s32);
M2C_UNK scePaf_2FA84441(s32);
M2C_UNK scePaf_3067FC77(s32, M2C_UNK *, void *);
void *scePaf_338C3774(void *, M2C_UNK);
M2C_UNK scePaf_4E67BB08(s32);
M2C_UNK scePaf_545FE2DA(s32);
void *scePaf_5DFB5858();
M2C_UNK scePaf_5FAC9869();
s32 scePaf_6C234A6A(s32);
void *scePaf_72514A05(s32, M2C_UNK *, M2C_UNK);
M2C_UNK scePaf_7C2C2742();
M2C_UNK scePaf_7EC15225(void *);
M2C_UNK scePaf_84BD418F(s32);
M2C_UNK scePaf_86B41BA3(void *);
M2C_UNK scePaf_95948FB6(s32);
M2C_UNK scePaf_997D2809(void *);
M2C_UNK scePaf_AD1721B8(s32);
M2C_UNK scePaf_B7865607(s32);
void *scePaf_B7E6052B(M2C_UNK);
M2C_UNK scePaf_BA433BEF(s32);
M2C_UNK scePaf_C9831AFF(M2C_UNK *, s32);
s32 scePaf_CA79D58B(s32);
M2C_UNK scePaf_D0AD10FF();
M2C_UNK scePaf_D24E4016(s32);
void *scePaf_D4FAE7D0(M2C_UNK *);
M2C_UNK scePaf_E1242646();
M2C_UNK scePaf_ED89C94B(s32);
M2C_UNK scePaf_F47CA1C2(s32, s32, M2C_UNK *, M2C_UNK);
M2C_UNK scePaf_F95EA3F1(void *, s32, M2C_UNK);
s32 scePaf_FD4C9F47(s32);
M2C_UNK scePaf_FF2F98C6(void *, s32, u8);
void sceVideo_9DD8CE8E(void);
M2C_UNK sceVshCommonGui_441D55D7(M2C_UNK);
M2C_UNK sceVshCommonGui_4704D5BD(M2C_UNK);
M2C_UNK sceVshCommonGui_54BC644C(void *, s32);
M2C_UNK sceVshCommonGui_6C81492F(void *, s32);
s32 sceVshCommonGui_764A5495();
M2C_UNK sceVshCommonGui_A0DE7090(M2C_UNK);
s32 sceVshCommonGui_DBEE94DC();
s32 vsh_34DA1B67();
M2C_UNK vsh_6286E89D(s32, M2C_UNK *);

#endif
