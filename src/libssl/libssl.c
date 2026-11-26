/* cflags: -Os */
#include "common.h"
#include "libssl_decls.h"

INCLUDE_ASM("nonmatchings/libssl", func_00000000);

INCLUDE_ASM("nonmatchings/libssl", func_000002D8);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000002FC);

INCLUDE_ASM("nonmatchings/libssl", func_000003C4);

INCLUDE_ASM("nonmatchings/libssl", func_000003FC);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00000308);

INCLUDE_ASM("nonmatchings/libssl", func_000003D4);

INCLUDE_ASM("nonmatchings/libssl", func_0000040C);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00000598);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00000664);

INCLUDE_ASM("nonmatchings/libssl", func_000007B4);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00000678);

INCLUDE_ASM("nonmatchings/libssl", func_000007D8);
#endif

void func_000007F0(struct Unk_func_000007F0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
}

INCLUDE_ASM("nonmatchings/libssl", func_00000804);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00000824);
#else
void func_00000824(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00000874(arg0, arg1, arg2, arg5);
    func_000008E4(arg0, arg3, arg4);
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00000874);

INCLUDE_ASM("nonmatchings/libssl", func_000008B8);

INCLUDE_ASM("nonmatchings/libssl", func_000008E4);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000008FC);

INCLUDE_ASM("nonmatchings/libssl", func_00000A1C);

INCLUDE_ASM("nonmatchings/libssl", func_00000CCC);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00000924);

INCLUDE_ASM("nonmatchings/libssl", func_00000A38);

INCLUDE_ASM("nonmatchings/libssl", func_00000CEC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libssl", func_00000EC8);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00000E88);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00000FF0);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00001008);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00001054);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00001160);

INCLUDE_ASM("nonmatchings/libssl", func_00001210);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00001240);

INCLUDE_ASM("nonmatchings/libssl", func_000012D8);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000129C);

INCLUDE_ASM("nonmatchings/libssl", func_00001338);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000013CC);

INCLUDE_ASM("nonmatchings/libssl", func_0000147C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000014F8);

INCLUDE_ASM("nonmatchings/libssl", func_000015D0);

INCLUDE_ASM("nonmatchings/libssl", func_00001734);

INCLUDE_ASM("nonmatchings/libssl", func_000018F8);

INCLUDE_ASM("nonmatchings/libssl", func_00001A2C);

INCLUDE_ASM("nonmatchings/libssl", func_00001C54);

INCLUDE_ASM("nonmatchings/libssl", func_00001E3C);

INCLUDE_ASM("nonmatchings/libssl", func_00001FA0);

INCLUDE_ASM("nonmatchings/libssl", func_00002120);

INCLUDE_ASM("nonmatchings/libssl", func_000021DC);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00001560);

INCLUDE_ASM("nonmatchings/libssl", func_00001634);

INCLUDE_ASM("nonmatchings/libssl", func_000017AC);

INCLUDE_ASM("nonmatchings/libssl", func_00001974);

INCLUDE_ASM("nonmatchings/libssl", func_00001AA0);

INCLUDE_ASM("nonmatchings/libssl", func_00001CC0);

INCLUDE_ASM("nonmatchings/libssl", func_00001E9C);

INCLUDE_ASM("nonmatchings/libssl", func_00001FFC);

INCLUDE_ASM("nonmatchings/libssl", func_00002184);

INCLUDE_ASM("nonmatchings/libssl", func_00002248);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000022B0);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00002390);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000023E8);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00002408);

INCLUDE_ASM("nonmatchings/libssl", func_000024AC);

INCLUDE_ASM("nonmatchings/libssl", func_00002510);

INCLUDE_ASM("nonmatchings/libssl", func_000025B0);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000026E4);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00002748);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000027D4);

INCLUDE_ASM("nonmatchings/libssl", func_000027F4);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00002814);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00002878);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00002D90);
#else
void func_00002D90(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00002878(0, arg0, arg1, arg2, arg3);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00002DC4);

INCLUDE_ASM("nonmatchings/libssl", func_00002E8C);

INCLUDE_ASM("nonmatchings/libssl", func_00002FF4);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00002E54);

INCLUDE_ASM("nonmatchings/libssl", func_00002F20);

INCLUDE_ASM("nonmatchings/libssl", func_0000307C);
#endif

s32 func_00003258(void) {
    return 0;
}

M2C_UNK *func_00003260(void) {
    return &D_0002A698;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000326C);

INCLUDE_ASM("nonmatchings/libssl", func_000032F0);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000032E4);

INCLUDE_ASM("nonmatchings/libssl", func_00003368);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00003340);

INCLUDE_ASM("nonmatchings/libssl", func_000033D0);

INCLUDE_ASM("nonmatchings/libssl", func_00003440);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00003458);
#else
void *func_00003458(void) {
    void *temp_v0;
    void *var_v0;

    temp_v0 = CRYPTO_malloc(0x14);
    var_v0 = NULL;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x10) = 1;
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

void *func_0000349C(void) {
    struct Unk_func_0000349C_temp_v0 *temp_v0;
    void *var_v0;

    temp_v0 = CRYPTO_malloc(0x10C);
    var_v0 = NULL;
    if (temp_v0 != NULL) {
        func_000034E4(temp_v0);
        temp_v0->unk108 = 1;
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/libssl", func_000034E4);

INCLUDE_ASM("nonmatchings/libssl", func_00003518);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/libssl", D_0002A07C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A080);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A090);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A0A8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A0B4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A0C4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A0D8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A0E8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A0F0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A150);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A15C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A71C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A720);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A744);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A750);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A778);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002A668);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A698);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A6AC);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00003584);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00003608);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000036D0);
#else
s32 func_000036D0(s32 arg0) {
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_00003458();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = func_0000379C((s32) temp_v0, arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000370C);

INCLUDE_ASM("nonmatchings/libssl", func_00003898);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000379C);

INCLUDE_ASM("nonmatchings/libssl", func_00003934);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000390C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00003984);

INCLUDE_ASM("nonmatchings/libssl", func_00003AF0);

INCLUDE_ASM("nonmatchings/libssl", func_00003B7C);

INCLUDE_ASM("nonmatchings/libssl", func_00003BE4);

INCLUDE_ASM("nonmatchings/libssl", func_00003CAC);

INCLUDE_ASM("nonmatchings/libssl", func_00003E18);

INCLUDE_ASM("nonmatchings/libssl", func_00003E68);

INCLUDE_ASM("nonmatchings/libssl", func_00003F04);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00003A28);

INCLUDE_ASM("nonmatchings/libssl", func_00003B98);

INCLUDE_ASM("nonmatchings/libssl", func_00003C24);

INCLUDE_ASM("nonmatchings/libssl", func_00003C8C);

INCLUDE_ASM("nonmatchings/libssl", func_00003D50);

INCLUDE_ASM("nonmatchings/libssl", func_00003ED0);

INCLUDE_ASM("nonmatchings/libssl", func_00003F20);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00003F7C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00004084);

INCLUDE_ASM("nonmatchings/libssl", func_0000423C);

INCLUDE_ASM("nonmatchings/libssl", func_000043A0);

INCLUDE_ASM("nonmatchings/libssl", func_00004DB0);

INCLUDE_ASM("nonmatchings/libssl", func_00005094);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000413C);

INCLUDE_ASM("nonmatchings/libssl", func_000042F8);

INCLUDE_ASM("nonmatchings/libssl", func_00004484);

INCLUDE_ASM("nonmatchings/libssl", func_00004EE0);

INCLUDE_ASM("nonmatchings/libssl", func_000051C0);
#endif

void *func_0000546C(void) {
    struct Unk_func_0000546C_temp_v0 *temp_v0;
    void *var_v0;

    temp_v0 = CRYPTO_malloc(0x50);
    var_v0 = NULL;
    if (temp_v0 != NULL) {
        func_000054B4(temp_v0);
        temp_v0->unk4C = 1;
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/libssl", func_000054B4);

INCLUDE_ASM("nonmatchings/libssl", func_000054F8);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00005550);

INCLUDE_ASM("nonmatchings/libssl", func_000058FC);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00005690);

INCLUDE_ASM("nonmatchings/libssl", func_00005A44);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00005A5C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00005B84);

INCLUDE_ASM("nonmatchings/libssl", func_00005C60);

INCLUDE_ASM("nonmatchings/libssl", func_00005DE8);

INCLUDE_ASM("nonmatchings/libssl", func_00005EF8);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00005CD0);

INCLUDE_ASM("nonmatchings/libssl", func_00005DAC);

INCLUDE_ASM("nonmatchings/libssl", func_00005F2C);

INCLUDE_ASM("nonmatchings/libssl", func_00006058);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00006094);

INCLUDE_ASM("nonmatchings/libssl", func_00006210);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_000064A8);

INCLUDE_ASM("nonmatchings/libssl", func_00006514);

INCLUDE_ASM("nonmatchings/libssl", func_000065DC);

INCLUDE_ASM("nonmatchings/libssl", func_00006708);

INCLUDE_ASM("nonmatchings/libssl", func_0000684C);

INCLUDE_ASM("nonmatchings/libssl", func_000068F0);

INCLUDE_ASM("nonmatchings/libssl", func_00006FFC);

INCLUDE_ASM("nonmatchings/libssl", func_000075D8);

INCLUDE_ASM("nonmatchings/libssl", func_00007788);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00006340);

INCLUDE_ASM("nonmatchings/libssl", func_000063A8);

INCLUDE_ASM("nonmatchings/libssl", func_0000646C);

INCLUDE_ASM("nonmatchings/libssl", func_0000658C);

INCLUDE_ASM("nonmatchings/libssl", func_000066C0);

INCLUDE_ASM("nonmatchings/libssl", func_0000675C);

INCLUDE_ASM("nonmatchings/libssl", func_00006E58);

INCLUDE_ASM("nonmatchings/libssl", func_00007424);

INCLUDE_ASM("nonmatchings/libssl", func_000075D4);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002A7EC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A7F0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A7F4);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00007788);

INCLUDE_ASM("nonmatchings/libssl", func_00007DB8);

INCLUDE_ASM("nonmatchings/libssl", func_00008434);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000793C);

INCLUDE_ASM("nonmatchings/libssl", func_00007F6C);

INCLUDE_ASM("nonmatchings/libssl", func_00008608);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00008474);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000084E4);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000086BC);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002A888);

INCLUDE_RODATA("nonmatchings/libssl", D_0002A988);

INCLUDE_RODATA("nonmatchings/libssl", D_0002B188);

INCLUDE_RODATA("nonmatchings/libssl", D_0002B1C8);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00008834);

INCLUDE_ASM("nonmatchings/libssl", func_00008E6C);

INCLUDE_ASM("nonmatchings/libssl", func_00009C6C);

INCLUDE_ASM("nonmatchings/libssl", func_0000A968);

INCLUDE_ASM("nonmatchings/libssl", func_0000AAE0);

INCLUDE_ASM("nonmatchings/libssl", func_0000AE34);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00008A14);

INCLUDE_ASM("nonmatchings/libssl", func_0000904C);

INCLUDE_ASM("nonmatchings/libssl", func_00009D40);

INCLUDE_ASM("nonmatchings/libssl", func_0000AA34);

INCLUDE_ASM("nonmatchings/libssl", func_0000ABB4);

INCLUDE_ASM("nonmatchings/libssl", func_0000AF1C);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002BA10);

INCLUDE_RODATA("nonmatchings/libssl", D_0002BB10);

M2C_UNK *func_0000AEB8(void) {
    return "rc4( f)";
}

INCLUDE_RODATA("nonmatchings/libssl", D_0002BB44);

INCLUDE_RODATA("nonmatchings/libssl", D_0002BB70);

M2C_UNK *func_0000AEC4(void) {
    return "md2(int)";
}

void func_0000AED0(struct Unk_func_0000AED0_0 *arg0) {
    arg0->unk0 = 0;
    func_00029D1C((s32) ((u8 *)arg0 + 0x54), 0, 0x40);
    func_00029D1C((s32) ((u8 *)arg0 + 0x14), 0, 0x40);
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000AF24);

INCLUDE_ASM("nonmatchings/libssl", func_0000B008);

INCLUDE_ASM("nonmatchings/libssl", func_0000B1C8);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000B018);

INCLUDE_ASM("nonmatchings/libssl", func_0000B104);

INCLUDE_ASM("nonmatchings/libssl", func_0000B2D0);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000B298);
#else
void func_0000B298(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0x67452301;
    M2C_FIELD(arg0, s32 *, 4) = 0xEFCDAB89;
    M2C_FIELD(arg0, s32 *, 8) = 0x98BADCFE;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x10325476;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    func_00029D1C((s32) (arg0 + 0x18), 0, 0x40);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000B2FC);

INCLUDE_ASM("nonmatchings/libssl", func_0000B9B0);

INCLUDE_ASM("nonmatchings/libssl", func_0000BC74);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000B410);

INCLUDE_ASM("nonmatchings/libssl", func_0000BAC8);

INCLUDE_ASM("nonmatchings/libssl", func_0000BD98);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000BE84);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000BF08);

INCLUDE_ASM("nonmatchings/libssl", func_0000BF54);

INCLUDE_ASM("nonmatchings/libssl", func_0000C61C);

INCLUDE_ASM("nonmatchings/libssl", func_0000CA48);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000C02C);

INCLUDE_ASM("nonmatchings/libssl", func_0000C078);

INCLUDE_ASM("nonmatchings/libssl", func_0000C748);

INCLUDE_ASM("nonmatchings/libssl", func_0000CBB0);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000CC88);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_0000CD44);
#else
void func_0000CD44(struct Unk_func_0000CD44_0 *arg0) {
    arg0->unk0->unk10(arg0->unkC);
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000CD68);

M2C_UNK *func_0000CDC8(void) {
    return &D_0002E3BC;
}

M2C_UNK *func_0000CDD4(void) {
    return &D_0002E3E4;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000CDE0);

INCLUDE_ASM("nonmatchings/libssl", func_0000CE90);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000CF48);

INCLUDE_ASM("nonmatchings/libssl", func_0000D01C);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000CF20);

M2C_UNK *func_0000CF5C(void) {
    return &D_0002E40C;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000CF68);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000D114);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000CFC8);

M2C_UNK *func_0000CFFC(void) {
    return &D_0002E434;
}

M2C_UNK *func_0000D008(void) {
    return &D_0002E45C;
}

M2C_UNK *func_0000D014(void) {
    return &D_0002E484;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000D020);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000D1F0);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000D0D4);

INCLUDE_ASM("nonmatchings/libssl", func_0000D108);

INCLUDE_ASM("nonmatchings/libssl", func_0000D14C);

INCLUDE_ASM("nonmatchings/libssl", func_0000D1C8);

s32 func_0000D2BC(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        temp_s0 = func_0000D108(func_0000EDE8());
        var_v0 = func_00019D30(arg1, temp_s0, arg0 + 0xC, func_0000EE30(arg0));
    }
    return var_v0;
}

M2C_UNK *func_0000D328(void) {
    return &D_0002E4AC;
}

void func_0000D334(struct Unk_func_0000D334_0 *arg0) {
    arg0->unk78 = 0;
    arg0->unk74 = 0;
}

INCLUDE_ASM("nonmatchings/libssl", func_0000D340);

M2C_UNK *func_0000D36C(void) {
    return &D_0002E4D4;
}

M2C_UNK *func_0000D378(void) {
    return &D_0002E4FC;
}

INCLUDE_ASM("nonmatchings/libssl", func_0000D384);

INCLUDE_ASM("nonmatchings/libssl", func_0000D3F0);

INCLUDE_ASM("nonmatchings/libssl", func_0000D41C);

void func_0000D480(void) {
    CRYPTO_free();
}

void func_0000D49C(struct Unk_func_0000D49C_0 *arg0) {
    arg0->unk4 = 0x30;
    arg0->unk0 = 0;
    arg0->unk58 = 0;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000D4B0);

INCLUDE_ASM("nonmatchings/libssl", func_0000D698);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000D6B0);

INCLUDE_ASM("nonmatchings/libssl", func_0000D89C);
#endif

void func_0000D7D0(struct Unk_func_0000D7D0_0 *arg0) {
    arg0->unk4 = 0x1E;
    arg0->unk0 = 0;
    arg0->unk58 = 0;
    arg0->unk5C = 0;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000D7E8);

INCLUDE_ASM("nonmatchings/libssl", func_0000DA38);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000D9EC);

INCLUDE_ASM("nonmatchings/libssl", func_0000DC44);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000DC00);

M2C_UNK *func_0000DC6C(void) {
    return &D_0002E524;
}

M2C_UNK *func_0000DC78(void) {
    return &D_0002E560;
}

M2C_UNK *func_0000DC84(void) {
    return &D_0002E59C;
}

M2C_UNK *func_0000DC90(void) {
    return &D_0002E5D8;
}

M2C_UNK *func_0000DC9C(void) {
    return &D_0002E614;
}

M2C_UNK *func_0000DCA8(void) {
    return &D_0002E650;
}

INCLUDE_ASM("nonmatchings/libssl", func_0000DCB4);

INCLUDE_ASM("nonmatchings/libssl", func_0000DD18);

void func_0000DDF0(s32 arg0) {
    func_00014D3C(arg0, 2);
}

void func_0000DE0C(s32 arg0) {
    func_00014D3C(arg0, 1);
}

void func_0000DE28(void) {
    func_00015028(2);
    func_00015028(1);
}

INCLUDE_ASM("nonmatchings/libssl", func_0000DE4C);

INCLUDE_ASM("nonmatchings/libssl", func_0000DEC8);

s32 func_0000DF3C(void) {
    return 0;
}

s32 func_0000DF44(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/libssl", EVP_PKEY_new);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", EVP_PKEY_reference_inc);
#else
void EVP_PKEY_reference_inc(s32 arg0) {
    func_0001C4F0(arg0 + 8, 1, 0xA, (s32) &D_0002C198, 0xA8);
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000DFD8);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000E06C);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000E294);
#endif

INCLUDE_ASM("nonmatchings/libssl", EVP_PKEY_free);

INCLUDE_ASM("nonmatchings/libssl", func_0000E160);

INCLUDE_ASM("nonmatchings/libssl", func_0000E19C);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_0000E280);
#else
void func_0000E280(struct Unk_vt_func_0000E280_arg0 **arg0) {
    (*arg0)->unk14();
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000E2A4);

INCLUDE_ASM("nonmatchings/libssl", func_0000E388);

INCLUDE_ASM("nonmatchings/libssl", func_0000E4B8);

INCLUDE_ASM("nonmatchings/libssl", func_0000E53C);

INCLUDE_ASM("nonmatchings/libssl", func_0000E57C);

INCLUDE_ASM("nonmatchings/libssl", func_0000E5F4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libssl", func_0000E888);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000E66C);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000E7DC);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000E8C4);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000EAE0);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0000E9EC);

INCLUDE_ASM("nonmatchings/libssl", func_0000EA34);

s32 func_0000EAB0(s32 arg0) {
    return arg0 + 0x2C;
}

INCLUDE_ASM("nonmatchings/libssl", func_0000EAB8);

INCLUDE_ASM("nonmatchings/libssl", func_0000ECDC);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000ED70);
#else
s32 func_0000ED70(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = func_00019C28(arg1, arg0 + 0xC, func_0000EE30(arg0));
    }
    return var_v0;
}
#endif

s32 func_0000EDBC(struct Unk_func_0000EDBC_0 *arg0) {
    return arg0->unk8;
}

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_0000EDC4);
#else
s32 func_0000EDC4(struct Unk_vt_func_0000EDC4_arg0 **arg0) {
    return (*arg0)->unk8;
}
#endif

s32 func_0000EDD0(s32 *arg0) {
    return *arg0;
}

s32 func_0000EDD8(struct Unk_func_0000EDD8_0 *arg0) {
    return arg0->unk8;
}

s32 func_0000EDE0(struct Unk_func_0000EDE0_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/libssl", func_0000EDE8);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_0000EDF0);
#else
s32 func_0000EDF0(struct Unk_vt_func_0000EDF0_arg0 **arg0) {
    return (*arg0)->unk4;
}
#endif

s32 func_0000EDFC(struct Unk_func_0000EDFC_0 *arg0) {
    s32 var_v0;

    var_v0 = arg0->unk80;
    if (var_v0 == 0) {
        var_v0 = arg0->unk0->unk8;
    }
    return var_v0;
}

void func_0000EE18(struct Unk_func_0000EE18_0 *arg0, s32 arg1) {
    arg0->unk80 = arg1;
}

s32 func_0000EE20(struct Unk_func_0000EE20_0 *arg0) {
    return arg0->unk84;
}

void func_0000EE28(struct Unk_func_0000EE28_0 *arg0, s32 arg1) {
    arg0->unk84 = arg1;
}

INCLUDE_ASM("nonmatchings/libssl", func_0000EE30);

INCLUDE_ASM("nonmatchings/libssl", func_0000EE3C);

INCLUDE_ASM("nonmatchings/libssl", func_0000EF14);

INCLUDE_ASM("nonmatchings/libssl", func_0000EFD0);

INCLUDE_ASM("nonmatchings/libssl", func_0000F048);

INCLUDE_ASM("nonmatchings/libssl", func_0000F094);

void *func_0000F0FC(struct Unk_func_0000F0FC_0 *arg0) {
    void *var_v0;

    var_v0 = NULL;
    if (arg0 != NULL) {
        arg0->unk8 = 0;
        var_v0 = arg0;
        arg0->unk4 = 0;
        arg0->unk0 = 0;
    }
    return var_v0;
}

void func_0000F11C(s32 arg0) {
    D_000304D8 = arg0;
}

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", CRYPTO_get_time_cb);
#else
s32 CRYPTO_get_time_cb(void) {
    return D_000304D8;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_time);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000F16C);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000F3A0);

INCLUDE_ASM("nonmatchings/libssl", func_0000F254);
#endif

#if FW_VERSION == 271
s32 func_0000F254(void) {
    return D_000304AC;
}
#endif

#if FW_VERSION >= 282
s32 func_0000F254(void) {
    return D_000304DC;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_time_offset);

INCLUDE_RODATA("nonmatchings/libssl", D_0002BF7C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002BFA8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C0A8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C0D4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C118);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C198);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C1B0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C1DC);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000F298);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000F4C8);

INCLUDE_ASM("nonmatchings/libssl", func_0000F944);
#endif

#if FW_VERSION == 271
s32 func_0000F944(void) {
    return D_000304B0;
}
#endif

#if FW_VERSION >= 282
s32 func_0000F944(void) {
    return D_000304E0;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_time_export);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0000F988);

INCLUDE_ASM("nonmatchings/libssl", func_0000FA74);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0000FBE0);

INCLUDE_ASM("nonmatchings/libssl", func_0000FCC8);

INCLUDE_ASM("nonmatchings/libssl", func_00010110);
#endif

#if FW_VERSION == 271
s32 func_00010110(void) {
    return D_000304B4;
}
#endif

#if FW_VERSION >= 282
s32 func_00010110(void) {
    return D_000304E4;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_time_import);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00010154);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000103A8);
#endif

#if FW_VERSION >= 282
void func_000101D4(s32 arg0) {
    D_000304E8 = arg0;
}
#else
INCLUDE_ASM("nonmatchings/libssl", func_000101E0);
#endif

#if FW_VERSION == 271
s32 func_000101E0_v271(void) {
    return D_000304B8;
}
#endif

#if FW_VERSION >= 282
s32 func_000101E0(void) {
    return D_000304E8;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_time_cmp);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001027C);

INCLUDE_ASM("nonmatchings/libssl", func_00010378);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000104E0);

INCLUDE_ASM("nonmatchings/libssl", func_000105EC);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00010550);

INCLUDE_ASM("nonmatchings/libssl", func_00010730);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00010810);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00010A98);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00010A48);

void func_00010C18(s32 arg0, s32 arg1) {
    func_00010730(arg0, arg1, 4, 0);
}

INCLUDE_ASM("nonmatchings/libssl", func_00010C38);

INCLUDE_ASM("nonmatchings/libssl", func_00010C80);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C288);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00010E64);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00011100);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0001113C);

void func_00011190(s32 arg0) {
    if (arg0 != 0) {
        func_00011234();
        CRYPTO_free(arg0);
    }
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000111C4);
#else
s32 func_000111C4(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0);
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000111DC);

INCLUDE_ASM("nonmatchings/libssl", func_00011234);

INCLUDE_ASM("nonmatchings/libssl", d2i_PrivateKey);

INCLUDE_ASM("nonmatchings/libssl", func_000113F0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libssl", func_00011B30);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00011874);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00011950);

INCLUDE_ASM("nonmatchings/libssl", func_00011B3C);

void func_00011BAC(struct Unk_func_00011BAC_0 *arg0) {
    if (arg0 != NULL) {
        func_00019104(arg0->unk0);
        func_00011190(arg0->unk4);
        CRYPTO_free(arg0);
    }
}

INCLUDE_ASM("nonmatchings/libssl", func_00011BE8);

INCLUDE_ASM("nonmatchings/libssl", func_00011CA8);

INCLUDE_ASM("nonmatchings/libssl", func_00011E54);

void func_00011EDC(struct Unk_func_00011EDC_0 *arg0) {
    if (arg0 != NULL) {
        func_00011BAC(arg0->unk0);
        func_00019B68(arg0->unk4);
        CRYPTO_free(arg0);
    }
}

INCLUDE_ASM("nonmatchings/libssl", BIO_printf);

M2C_UNK *func_00011F90(void) {
    return &D_0002E710;
}

INCLUDE_ASM("nonmatchings/libssl", func_00011F9C);

INCLUDE_ASM("nonmatchings/libssl", func_0001204C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000120D0);

INCLUDE_ASM("nonmatchings/libssl", func_0001225C);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000123B8);

INCLUDE_ASM("nonmatchings/libssl", func_0001253C);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00012458);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00012804);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00012AE4);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00012950);

void func_00012994(struct Unk_func_00012994_0 *arg0, s32 arg1) {
    arg0->unk14 = (s32) (arg0->unk14 | arg1);
}

s32 func_000129A4(struct Unk_func_000129A4_0 *arg0) {
    return arg0->unk14;
}

void BIO_set_retry_special(struct Unk_sceSsl_lib_EE624680_0 *arg0) {
    arg0->unk14 = (s32) (arg0->unk14 | 0xC);
}

void BIO_set_retry_read(struct Unk_sceSsl_lib_8A2F6963_0 *arg0) {
    arg0->unk14 = (s32) (arg0->unk14 | 9);
}

void BIO_set_retry_write(struct Unk_sceSsl_lib_067173A8_0 *arg0) {
    arg0->unk14 = (s32) (arg0->unk14 | 0xA);
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000129DC);
#else
void func_000129DC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) & ~arg1);
}
#endif

INCLUDE_ASM("nonmatchings/libssl", BIO_clear_retry_flags);

s32 BIO_get_retry_flags(struct Unk_sceSsl_lib_CA6A3C74_0 *arg0) {
    return arg0->unk14 & 0xF;
}

s32 BIO_should_read(struct Unk_sceSsl_lib_E3C30923_0 *arg0) {
    return arg0->unk14 & 1;
}

s32 BIO_should_write(struct Unk_sceSsl_lib_089FF1F1_0 *arg0) {
    return arg0->unk14 & 2;
}

s32 BIO_should_io_special(struct Unk_sceSsl_lib_ABCD28B8_0 *arg0) {
    return arg0->unk14 & 4;
}

s32 BIO_retry_type(struct Unk_sceSsl_lib_1BCA32E3_0 *arg0) {
    return arg0->unk14 & 7;
}

s32 BIO_should_retry(struct Unk_sceSsl_lib_9052D21A_0 *arg0) {
    return arg0->unk14 & 8;
}

void BIO_set_cb(struct Unk_sceSsl_lib_26A7CF72_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

void BIO_set_cb_arg(struct Unk_sceSsl_lib_ECE07B61_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

s32 BIO_get_cb_arg(struct Unk_sceSsl_lib_EC4A18D7_0 *arg0) {
    return arg0->unk8;
}

s32 BIO_get_cb(struct Unk_sceSsl_lib_558CAA41_0 *arg0) {
    return arg0->unk4;
}

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", BIO_method_name);
#else
s32 BIO_method_name(struct Unk_vt_sceSsl_lib_0FD2F220_arg0 **arg0) {
    return (*arg0)->unk4;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", BIO_method_type);
#else
s32 BIO_method_type(s32 **arg0) {
    return **arg0;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00012A84);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", BIO_new_mem);
#else
void BIO_new_mem(void) {
    BIO_new(func_00012A84());
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00012AB4);

INCLUDE_ASM("nonmatchings/libssl", func_00012B00);

INCLUDE_ASM("nonmatchings/libssl", func_00012B60);

INCLUDE_ASM("nonmatchings/libssl", func_00012C40);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C37C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C384);

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/libssl", func_00012C7C);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/libssl", func_00012CFC);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00012E08);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00012FF4);

INCLUDE_ASM("nonmatchings/libssl", func_00013108);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00012ED0);

M2C_UNK *func_00012F14(void) {
    return &D_0002E758;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", BIO_new_socket);
#else
s32 BIO_new_socket(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = BIO_new(func_00012F14());
    var_v0 = 0;
    if (temp_v0 != 0) {
        func_0001A534(temp_v0, 0x68, arg1, arg0);
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

s32 func_00012F88(struct Unk_func_00012F88_0 *arg0) {
    arg0->unkC = 0;
    arg0->unk1C = 0;
    arg0->unk20 = 0;
    arg0->unk14 = 0;
    return 1;
}

INCLUDE_ASM("nonmatchings/libssl", func_00012FA0);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00012FFC);
#else
s32 func_00012FFC(void *arg0, void *arg1, u32 arg2) {
    s32 var_s1;

    var_s1 = 0;
    if (arg1 != NULL) {
        var_s1 = sceNetInetRecv(M2C_FIELD(arg0, s32 *, 0x1C), arg1, arg2, 0);
        BIO_clear_retry_flags((s32) arg0);
    }
    return var_s1;
}
#endif

s32 func_00013048(struct Unk_func_00013048_0 *arg0, void *arg1, u32 arg2) {
    s32 temp_s0;

    temp_s0 = sceNetInetSend(arg0->unk1C, arg1, arg2, 0);
    BIO_clear_retry_flags((s32) arg0);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/libssl", func_0001308C);

INCLUDE_ASM("nonmatchings/libssl", func_0001319C);

INCLUDE_ASM("nonmatchings/libssl", func_000131E0);

INCLUDE_ASM("nonmatchings/libssl", func_00013230);

INCLUDE_ASM("nonmatchings/libssl", func_00013280);

INCLUDE_ASM("nonmatchings/libssl", func_00013340);

s32 func_00013494(struct Unk_func_00013494_0 *arg0) {
    return arg0->unk4 + arg0->unk0;
}

void func_000134A4(s32 *arg0, s32 arg1) {
    *arg0 += arg1;
}

INCLUDE_ASM("nonmatchings/libssl", func_000134B4);

s32 func_00013538(s32 *arg0) {
    return *arg0;
}

INCLUDE_ASM("nonmatchings/libssl", sceSsl_lib_9A789D37);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00013554);

INCLUDE_ASM("nonmatchings/libssl", func_000135D0);

INCLUDE_ASM("nonmatchings/libssl", func_0001378C);

INCLUDE_ASM("nonmatchings/libssl", func_0001385C);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00013860);

INCLUDE_ASM("nonmatchings/libssl", func_000138DC);

INCLUDE_ASM("nonmatchings/libssl", func_00013A98);

INCLUDE_ASM("nonmatchings/libssl", func_00013B60);
#endif

void func_00013A2C(void) {
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00013A34);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00013D40);

INCLUDE_ASM("nonmatchings/libssl", sceSsl_lib_9266C0D5);
#endif

#if FW_VERSION == 271
s32 sceSsl_lib_9266C0D5(void) {
    return D_00030CD0;
}
#endif

#if FW_VERSION >= 282
s32 sceSsl_lib_9266C0D5(void) {
    return D_00030D00;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_00013B08);
#endif

#if FW_VERSION == 271
s32 func_00013B08(void) {
    return D_00030CCC;
}
#endif

#if FW_VERSION >= 282
s32 func_00013B08(void) {
    return D_00030CFC;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00013B14);

void func_00013B38(s32 arg0) {
    if (arg0 != 0) {
        CRYPTO_free();
    }
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00013B58);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00013E60);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00013CA8);

INCLUDE_ASM("nonmatchings/libssl", func_00013D78);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libssl", func_000140BC);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00013DA8);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00013E90);

INCLUDE_ASM("nonmatchings/libssl", func_00013F78);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00014048);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001435C);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00014150);

INCLUDE_ASM("nonmatchings/libssl", func_000141D8);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000142DC);

INCLUDE_ASM("nonmatchings/libssl", func_000143A0);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00014600);

INCLUDE_ASM("nonmatchings/libssl", func_000146C8);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000143F8);

INCLUDE_ASM("nonmatchings/libssl", func_00014414);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000144A4);

INCLUDE_ASM("nonmatchings/libssl", func_000145DC);

INCLUDE_ASM("nonmatchings/libssl", func_000146E4);

INCLUDE_ASM("nonmatchings/libssl", func_000147F4);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000147D4);

INCLUDE_ASM("nonmatchings/libssl", func_00014910);

INCLUDE_ASM("nonmatchings/libssl", func_00014A20);

INCLUDE_ASM("nonmatchings/libssl", func_00014B30);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002C5A0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C5A8);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00014854);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00014B98);
#endif

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_set_mem_functions);

INCLUDE_ASM("nonmatchings/libssl", func_00014918);

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_get_mem_functions);

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_get_locked_mem_functions);

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_malloc_locked);

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_free_locked);

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_malloc);

INCLUDE_ASM("nonmatchings/libssl", func_00014A0C);

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_free);

void func_00014A54(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        CRYPTO_free();
    }
    CRYPTO_malloc(arg1);
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00014A88);

INCLUDE_ASM("nonmatchings/libssl", func_00014C64);

INCLUDE_ASM("nonmatchings/libssl", func_00014CD0);

INCLUDE_ASM("nonmatchings/libssl", func_00014D3C);

INCLUDE_ASM("nonmatchings/libssl", func_00014E18);

INCLUDE_ASM("nonmatchings/libssl", func_00014F30);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00014DCC);

INCLUDE_ASM("nonmatchings/libssl", func_00014FB0);

INCLUDE_ASM("nonmatchings/libssl", func_00015024);

INCLUDE_ASM("nonmatchings/libssl", func_00014D3C);

INCLUDE_ASM("nonmatchings/libssl", func_00015170);

INCLUDE_ASM("nonmatchings/libssl", func_00015288);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00014FE8);

INCLUDE_ASM("nonmatchings/libssl", func_00015028);

void func_000150F0(void) {
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000150F8);

INCLUDE_ASM("nonmatchings/libssl", func_00015178);

INCLUDE_ASM("nonmatchings/libssl", func_000151FC);

INCLUDE_ASM("nonmatchings/libssl", func_00015280);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001544C);

INCLUDE_ASM("nonmatchings/libssl", func_000154D0);

INCLUDE_ASM("nonmatchings/libssl", func_00015558);

INCLUDE_ASM("nonmatchings/libssl", func_000155E0);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00015338);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001538C);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000156F0);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000153CC);

INCLUDE_ASM("nonmatchings/libssl", func_00015494);

INCLUDE_ASM("nonmatchings/libssl", func_000154BC);

M2C_UNK *RAND_default_method(void) {
    return &D_0002FACC;
}

INCLUDE_ASM("nonmatchings/libssl", func_000154F0);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001554C);

INCLUDE_ASM("nonmatchings/libssl", func_00015770);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000158BC);

INCLUDE_ASM("nonmatchings/libssl", func_00015AE8);
#endif

INCLUDE_ASM("nonmatchings/libssl", RAND_set_rand_method);

INCLUDE_ASM("nonmatchings/libssl", RAND_get_rand_method);

INCLUDE_ASM("nonmatchings/libssl", RAND_cleanup);

INCLUDE_ASM("nonmatchings/libssl", RAND_seed);

INCLUDE_ASM("nonmatchings/libssl", RAND_bytes);

M2C_UNK *func_00015C18(void) {
    return &D_0002FADC;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00015C24);

INCLUDE_ASM("nonmatchings/libssl", func_00015F28);

INCLUDE_ASM("nonmatchings/libssl", func_00016384);

INCLUDE_ASM("nonmatchings/libssl", func_000167C8);

INCLUDE_ASM("nonmatchings/libssl", func_00016A50);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00015F94);

INCLUDE_ASM("nonmatchings/libssl", func_000162A4);

INCLUDE_ASM("nonmatchings/libssl", func_00016704);

INCLUDE_ASM("nonmatchings/libssl", func_00016B28);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libssl", func_00016DB0_v260);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libssl", func_00016DB0_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/libssl", func_00016DB0_v201);
#endif

s32 func_00016D08(struct Unk_func_00016D08_0 *arg0) {
    arg0->unk38 = (s32) (arg0->unk38 | 6);
    return 1;
}

INCLUDE_ASM("nonmatchings/libssl", func_00016D1C);

void func_00016D94(void) {
    func_00016DBC(0);
}

void func_00016DB0(s32 arg0) {
    D_00030D38 = arg0;
}

INCLUDE_ASM("nonmatchings/libssl", func_00016DBC);

s32 func_00016EE8(struct Unk_func_00016EE8_0 *arg0, s32 arg1) {
    arg0->unk54 = arg1;
    return 1;
}

INCLUDE_RODATA("nonmatchings/libssl", D_0002C5FC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C604);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C610);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C618);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C620);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C624);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C628);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C62C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C630);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C634);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C638);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C648);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C650);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C668);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C670);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C688);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C6A0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C6B8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C6C0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C6C8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C6CC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C6D8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C6DC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C6E8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C6EC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C6FC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C700);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C714);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C718);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C72C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C730);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C748);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C74C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C750);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C758);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C764);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C778);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C78C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C7AC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C7C0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C7D4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C7DC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C7EC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C7F4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C7FC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C804);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C80C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C814);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C81C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C824);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C82C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C838);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C844);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C850);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C85C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C868);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C874);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C880);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C88C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C894);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C89C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C8A4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C8AC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C8B4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C8BC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C8C4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C8CC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C8D0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C8D4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C8DC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C8F4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C900);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C90C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C91C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C92C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C934);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C93C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C948);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C954);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C95C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C964);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C974);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C988);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C994);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C9A4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C9B0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C9C4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C9D8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002C9EC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CA0C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CA18);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CA38);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CA44);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CA64);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CA70);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CA84);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CA90);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CA9C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CAAC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CABC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CAC8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CAD4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CAE4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CAF4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CAFC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CB04);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CB10);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CB28);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CB30);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CB3C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CB44);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CB58);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CB70);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CB84);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CB94);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CBA4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CBB0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CBC4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CBD0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CBE4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CBF4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CC0C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CC20);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CC3C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CC4C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CC64);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CC74);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CC8C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CC9C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CCB8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CCC4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CCD8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CCE8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CD08);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CD14);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CD20);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CD28);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CD40);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CD60);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CD6C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CD80);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CD98);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CDB8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CDC8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CDE8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CDF8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CE18);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CE2C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CE48);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CE54);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CE68);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CE7C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CE98);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CEB0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CED0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CED8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CEE0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CEE8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CEF0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CEF8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF00);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF08);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF10);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF18);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF20);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF2C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF38);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF40);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF48);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF54);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF60);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF64);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF70);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF74);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF7C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF80);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF8C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CF90);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CFA4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CFBC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CFDC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CFE8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CFF4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002CFF8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D008);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D00C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D014);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D018);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D024);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D030);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D03C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D048);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D054);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D060);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D06C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D078);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D084);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D09C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D0A8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D0B4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D0C0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D0CC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D0D8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D0E4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D0E8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D0F8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D104);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D110);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D120);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D134);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D13C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D144);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D14C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D154);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D15C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D164);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D16C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D174);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D178);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D190);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D198);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D1AC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D1DC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D1F4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D20C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D224);

INCLUDE_ASM("nonmatchings/libssl", func_00016EF4);

void func_000170E8(s32 arg0) {
    func_00013CA8(arg0 + 0x2C);
}

void func_00017104(s32 arg0) {
    func_00013D78(arg0 + 0x2C);
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00017120);
#else
s32 func_00017120(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00003368(M2C_FIELD(arg0, s32 *, 0xC)) + 7;
    return (s32) (temp_v0 + ((u32) (temp_v0 >> 0x1F) >> 0x1D)) >> 3;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00017150);

INCLUDE_ASM("nonmatchings/libssl", func_00017174);

INCLUDE_ASM("nonmatchings/libssl", func_00017198);

INCLUDE_ASM("nonmatchings/libssl", func_000171BC);

s32 func_000171E0(struct Unk_func_000171E0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk8->unk24;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/libssl", func_000171F8);

void sceSsl_lib_A87C65C7(struct Unk_sceSsl_lib_A87C65C7_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk4C = arg1;
    arg0->unk50 = arg2;
}

s32 func_00017544(struct Unk_func_00017544_0 *arg0) {
    return arg0->unk4C;
}

s32 func_0001754C(struct Unk_func_0001754C_0 *arg0) {
    return arg0->unk50;
}

s32 sceSsl_lib_72D77445(s32 arg0) {
    return arg0 | 0x4000;
}

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/libssl", func_0001755C);
#else
s32 func_0001755C(s32 arg0) {
    return arg0 & ~0x4000;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00017568);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000175B4);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00017928);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00017708);

INCLUDE_ASM("nonmatchings/libssl", func_00017774);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001781C);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00017B94);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000178CC);

INCLUDE_ASM("nonmatchings/libssl", func_000179A8);

INCLUDE_ASM("nonmatchings/libssl", func_00017A90);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00017B50);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00017EC0);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00017CD0);

INCLUDE_ASM("nonmatchings/libssl", func_00017E60);

INCLUDE_ASM("nonmatchings/libssl", func_00017F5C);

void func_00018064(struct Unk_func_00018064_0 *arg0, s32 arg1) {
    if (arg0->unk10 != arg1) {
        arg0->unk8 = 0;
    }
    arg0->unk10 = arg1;
}

INCLUDE_ASM("nonmatchings/libssl", func_00018078);

INCLUDE_ASM("nonmatchings/libssl", func_0001810C);

INCLUDE_ASM("nonmatchings/libssl", func_00018190);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000182D4);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00018654);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00018344);

void func_0001844C(s32 *arg0, s32 arg1) {
    func_00018190((s32) arg0, arg1, *arg0);
}

void func_0001846C(s32 arg0, s32 arg1) {
    func_00018190(arg0, arg1, 0);
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00018488);
#else
s32 func_00018488(s32 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (*arg0 > 0)) {
        var_v1 = func_00018654((s32) arg0, 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000184B8);
#else
s32 func_000184B8(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        if (temp_v0 > 0) {
            var_v1 = func_00018654((s32) arg0, temp_v0 - 1);
        }
    }
    return var_v1;
}
#endif

void func_000184E8(struct Unk_func_000184E8_0 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk0;
        if (temp_v0 > 0) {
            func_00029D1C(arg0->unk4, 0, temp_v0 * 4);
            arg0->unk0 = 0;
        }
    }
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00018528);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000188C0);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000185A8);

INCLUDE_ASM("nonmatchings/libssl", func_00018614);

INCLUDE_ASM("nonmatchings/libssl", func_000187F4);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000188EC);

INCLUDE_ASM("nonmatchings/libssl", func_00018AA4);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00018C8C);

INCLUDE_ASM("nonmatchings/libssl", func_00018E48);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00018CB8);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00018DE0);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001918C);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00018E64);

INCLUDE_ASM("nonmatchings/libssl", func_00018F04);

INCLUDE_ASM("nonmatchings/libssl", func_000190A4);

INCLUDE_ASM("nonmatchings/libssl", func_00019104);

void func_000191C8(s32 arg0, s32 arg1, s32 arg2) {
    func_00010550(arg0, arg1, arg2, 2);
}

void func_000191E4(s32 arg0, s32 arg1) {
    func_00010730(arg0, arg1, 0x17, 0);
}

INCLUDE_ASM("nonmatchings/libssl", func_00019204);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000192B8);

INCLUDE_ASM("nonmatchings/libssl", func_000194DC);

INCLUDE_ASM("nonmatchings/libssl", func_00019524);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00019680);

INCLUDE_ASM("nonmatchings/libssl", func_000198B4);

INCLUDE_ASM("nonmatchings/libssl", func_000198FC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libssl", func_00019A24);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libssl", func_00019AEC_v260);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libssl", func_00019AEC_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/libssl", func_00019AEC_v201);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libssl", func_0001963C);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00019704);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000197F4);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00019860);

INCLUDE_ASM("nonmatchings/libssl", func_000198C0);

INCLUDE_ASM("nonmatchings/libssl", func_00019948);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00019C4C);

INCLUDE_ASM("nonmatchings/libssl", func_00019CAC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libssl", func_00019D30_v260);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libssl", func_00019D30_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/libssl", func_00019D30_v201);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00019A14);

void func_00019AEC(void) {
    func_00019B08(4);
}

INCLUDE_ASM("nonmatchings/libssl", func_00019B08);

INCLUDE_ASM("nonmatchings/libssl", func_00019B68);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D26C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D29C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D2A0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D2A4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D2A8);

INCLUDE_ASM("nonmatchings/libssl", func_00019BB0);

INCLUDE_ASM("nonmatchings/libssl", func_00019C28);

INCLUDE_ASM("nonmatchings/libssl", func_00019CB8);

INCLUDE_ASM("nonmatchings/libssl", func_00019D30);

INCLUDE_ASM("nonmatchings/libssl", func_00019E54);

INCLUDE_ASM("nonmatchings/libssl", BIO_new);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001A094);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001A498);
#endif

INCLUDE_ASM("nonmatchings/libssl", BIO_free);

INCLUDE_ASM("nonmatchings/libssl", BIO_read);

INCLUDE_ASM("nonmatchings/libssl", BIO_write);

INCLUDE_ASM("nonmatchings/libssl", BIO_gets);

INCLUDE_ASM("nonmatchings/libssl", func_0001A534);

INCLUDE_ASM("nonmatchings/libssl", BIO_ctrl);

INCLUDE_ASM("nonmatchings/libssl", BIO_push);

INCLUDE_ASM("nonmatchings/libssl", BIO_pop);

s32 BIO_get_retry_reason(struct Unk_sceSsl_lib_4A6078CF_0 *arg0) {
    return arg0->unk18;
}

INCLUDE_ASM("nonmatchings/libssl", BIO_free_all);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", BIO_copy_next_retry);
#endif

#if FW_VERSION == 271
void BIO_copy_next_retry(struct Unk_func_00012994_0 *arg0) {
    func_00012994(arg0, BIO_get_retry_flags((struct Unk_sceSsl_lib_CA6A3C74_0 *) arg0->unk24));
    arg0->unk18 = arg0->unk24->unk18;
}
#endif

#if FW_VERSION >= 282
void BIO_copy_next_retry(struct Unk_func_00012994_0 *arg0) {
    func_00012994(arg0, BIO_get_retry_flags(arg0->unk24));
    arg0->unk18 = (s32) arg0->unk24->unk18;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0001A7A8);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001A7D4);
#else
void func_0001A7D4(s32 arg0, s32 arg1, s32 arg2) {
    PEM_ASN1_read_bio((s32) &func_0001DCB8, (s32) &D_0002D2EC, arg0, arg1, arg2);
}
#endif

s32 func_0001A80C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/libssl", func_0001A814);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001AAA8);
#else
void func_0001AAA8(void) {
    func_00029D1C((s32) &D_000313DC, 0, 0xF0);
}
#endif

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_set_flag);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D2EC);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001AAFC);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001AF14);
#endif

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_get_flag);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_new);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_free);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_verify);

INCLUDE_ASM("nonmatchings/libssl", func_0001AEF8);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_to_binary);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_from_binary);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_reference_inc);

INCLUDE_ASM("nonmatchings/libssl", func_0001B020);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_subject_name_cmp);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_get_issuer_name);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_get_subject_name);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_get_pubkey);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_get_serialNumber_info);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_get_notAfter);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_get_notBefore);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_NAME_new);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_NAME_free);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_NAME_dup);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_NAME_hash);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_NAME_cmp);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_NAME_from_binary);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_NAME_to_binary);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_NAME_get_entry_count);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_NAME_get_entry);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_NAME_ENTRY_get_info);

void SSLCERT_NAME_ENTRY_get_oid_info(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SSLCERT_NAME_ENTRY_get_info(arg0, arg1, arg2, arg3, 0, 0, 0);
}

void SSLCERT_NAME_ENTRY_get_data_info(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    SSLCERT_NAME_ENTRY_get_info(arg0, 0, 0, 0, arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/libssl", func_0001B790);

INCLUDE_ASM("nonmatchings/libssl", func_0001B7DC);

INCLUDE_ASM("nonmatchings/libssl", func_0001B824);

INCLUDE_ASM("nonmatchings/libssl", func_0001B858);

INCLUDE_ASM("nonmatchings/libssl", func_0001B8A4);

INCLUDE_ASM("nonmatchings/libssl", func_0001B8F0);

INCLUDE_ASM("nonmatchings/libssl", func_0001B938);

INCLUDE_ASM("nonmatchings/libssl", func_0001B980);

INCLUDE_ASM("nonmatchings/libssl", func_0001B9C8);

INCLUDE_ASM("nonmatchings/libssl", func_0001BA10);

INCLUDE_ASM("nonmatchings/libssl", func_0001BC1C);

INCLUDE_ASM("nonmatchings/libssl", func_0001BC68);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_check_private_key);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_PEM_read_bio_SSLCERT);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_PKEY_new);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_PKEY_free);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_PKEY_from_PUBKEY_binary);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_PKEY_reference_inc);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/libssl", SSLCERT_get_key_usage_int);
#endif

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_get_basic_constraints_int);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D3E8);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_OID_to_string);

INCLUDE_ASM("nonmatchings/libssl", SSLCERT_fingerprint);

void func_0001C408(void) {
    func_0001D31C();
}

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", CRYPTO_get_locking_cb);
#else
s32 CRYPTO_get_locking_cb(void) {
    return D_00030DF0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", CRYPTO_get_add_lock_cb);
#else
s32 CRYPTO_get_add_lock_cb(void) {
    return D_00030DF4;
}
#endif

void CRYPTO_set_locking_cb(s32 arg0) {
    func_0001C408();
    D_00030DF0 = arg0;
}

void CRYPTO_set_add_lock_cb(s32 arg0) {
    D_00030DF4 = arg0;
}

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", CRYPTO_get_id_cb);
#else
s32 CRYPTO_get_id_cb(void) {
    return D_00030DF8;
}
#endif

void CRYPTO_set_id_cb(s32 arg0) {
    D_00030DF8 = arg0;
}

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_thread_id);

INCLUDE_ASM("nonmatchings/libssl", CRYPTO_lock);

INCLUDE_ASM("nonmatchings/libssl", func_0001C4F0);

s32 func_0001C598(void) {
    ERR_put_error(9, 0x77, 0x22, 0, 0);
    return -1;
}

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libssl", D_0002DAF4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DAF8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/libssl", D_0002DA70_v250);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DA74_v250);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/libssl", D_0002DA70_v201);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DA74_v201);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/libssl", D_0002DA80);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DA84);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DA90);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DA94);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DAA0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DAA4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DAB8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libssl", D_0002DB40);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/libssl", D_0002DABC);
#endif

INCLUDE_ASM("nonmatchings/libssl", PEM_ASN1_read_bio);

INCLUDE_ASM("nonmatchings/libssl", PEM_do_header);

INCLUDE_ASM("nonmatchings/libssl", PEM_get_EVP_CIPHER_CTX);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001CC80);

INCLUDE_ASM("nonmatchings/libssl", func_0001CD78);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001D0D0);

INCLUDE_ASM("nonmatchings/libssl", func_0001D1C0);

INCLUDE_ASM("nonmatchings/libssl", func_0001D310);
#endif

#if FW_VERSION >= 271
s32 func_0001D310(void) {
    return D_0002FB80;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0001D31C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001D328);
#else
void func_0001D328(void) {
    D_0002FB80 = 1;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001D338);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001D77C);
#endif

void *func_0001D3A0(void) {
    struct Unk_func_0001D3A0_temp_v0 *temp_v0;
    void *var_v0;

    temp_v0 = CRYPTO_malloc(0xAC);
    var_v0 = NULL;
    if (temp_v0 != NULL) {
        func_00029D1C((s32) temp_v0, 0, 0xAC);
        func_00001210((u8 *)temp_v0 + 0x4C, 0, 0, 0);
        func_00001210((u8 *)temp_v0 + 0x28, 0, 0, 0);
        temp_v0->unk98 = 0;
        temp_v0->unkA4 = 0;
        temp_v0->unkA8 = 1;
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/libssl", func_0001D420);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001D4C0);
#else
void func_0001D4C0(s32 arg0) {
    func_0001C4F0(arg0 + 0xA8, 1, 3, (s32) &D_0002D63C, 0xB2);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001D4F0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/libssl", func_0001D850);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libssl", func_0001D70C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libssl", func_0001D6DC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_0001D940);

INCLUDE_ASM("nonmatchings/libssl", func_0001DCB8);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/libssl", func_0001D850);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_0001DE44);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001D9DC);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0001DA44);

INCLUDE_ASM("nonmatchings/libssl", func_0001DACC);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001DB18);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001DF90);
#endif

s32 func_0001DD1C(s32 arg0) {
    return arg0 + 0x14;
}

s32 func_0001DD24(s32 arg0) {
    return arg0 + 0x38;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001DD2C);
#else
void func_0001DD2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0001EA48(arg0, (s32) &D_0002D6F8, arg1, arg2, arg3);
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0001DD60);

INCLUDE_ASM("nonmatchings/libssl", func_0001DDAC);

void func_0001DDE4(s32 arg0, s32 arg1) {
    func_0001DDAC(arg0 + 0x38, arg1 + 0x38);
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001DE04);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001E280);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0001DE7C);

INCLUDE_ASM("nonmatchings/libssl", func_0001DEC4);

INCLUDE_ASM("nonmatchings/libssl", func_0001DF0C);

INCLUDE_ASM("nonmatchings/libssl", func_0001DF54);

INCLUDE_ASM("nonmatchings/libssl", func_0001DFF0);

INCLUDE_ASM("nonmatchings/libssl", func_0001E090);

INCLUDE_ASM("nonmatchings/libssl", func_0001E1A8);

INCLUDE_ASM("nonmatchings/libssl", func_0001E1F8);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_0001E27C);
#endif

#if FW_VERSION == 271
s32 func_0001E27C(struct Unk_func_0001E27C_0 *arg0, struct Unk_func_0001E27C_1 *arg1) {
    if (arg1 != NULL) {
        arg1->unk0 = arg0->unk0;
        arg1->unk4 = arg0->unk4;
        arg1->unk8 = arg0->unk8;
        arg1->unkC = arg0->unkC;
        arg1->unk10 = arg0->unk10;
    }
    return 1;
}
#endif

#if FW_VERSION >= 282
s32 func_0001E27C(struct Unk_func_0001E27C_0 *arg0, struct Unk_func_0001E27C_1 *arg1) {
    if (arg1 != NULL) {
        arg1->unk0 = (s32) arg0->unk0;
        arg1->unk4 = (s32) arg0->unk4;
        arg1->unk8 = (s32) arg0->unk8;
        arg1->unkC = (s32) arg0->unkC;
        arg1->unk10 = (s32) arg0->unk10;
    }
    return 1;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_0001E740);

void *func_0001E828(void) {
    void *temp_v0;
    void *var_v1;

    temp_v0 = CRYPTO_malloc(0x24);
    var_v1 = NULL;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        var_v1 = temp_v0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
    }
    return var_v1;
}
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001E2B4);

INCLUDE_ASM("nonmatchings/libssl", func_0001E3A0);
#endif

void func_0001E3F0(s32 arg0) {
    if (arg0 != 0) {
        CRYPTO_free();
    }
}

s32 func_0001E410(void) {
    return 0;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001E418);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001E8A0);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0001E50C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001E5B0);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001EA48);

INCLUDE_ASM("nonmatchings/libssl", func_0001E770);
#endif

#if FW_VERSION == 271
s32 func_0001E770(void) {
    return D_00030EC0;
}
#endif

#if FW_VERSION >= 282
s32 func_0001E770(void) {
    return D_00030EF0;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0001E77C);

INCLUDE_ASM("nonmatchings/libssl", ERR_free_strings);

INCLUDE_ASM("nonmatchings/libssl", ERR_put_error);

void ERR_clear_error(void) {
    struct Unk_sceSsl_lib_04E677AF_temp_v0 *temp_v0;

    temp_v0 = func_0001EC18();
    temp_v0->unk148 = 0;
    temp_v0->unk144 = 0;
}

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libssl", ERR_get_error);
#else
void ERR_get_error(void) {
    func_0001EA04(1, 0, 0, 0, 0);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libssl", ERR_peek_error);
#else
void ERR_peek_error(void) {
    func_0001EA04(0, 0, 0, 0, 0);
}
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002D63C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D654);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D658);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D65C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D660);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D664);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D668);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D670);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D67C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D684);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D690);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D69C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6A8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6B0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6BC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6C0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6C4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6C8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6CC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6D0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6D8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6E0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6E8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6F0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6F8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D6FC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D704);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D70C);

INCLUDE_ASM("nonmatchings/libssl", func_0001EA04);

INCLUDE_ASM("nonmatchings/libssl", ERR_remove_state);

s32 func_0001EBF0(s32 *arg0) {
    return *arg0 * 0xD;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001EC08);
#else
s32 func_0001EC08(s32 *arg0, s32 *arg1) {
    return *arg0 - *arg1;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0001EC18);

INCLUDE_ASM("nonmatchings/libssl", func_0001EDD0);

INCLUDE_ASM("nonmatchings/libssl", func_0001EE24);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001EF34);
#else
s32 func_0001EF34(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0 == 0x300) {
        var_v1 = SSLv3_client_method();
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", SSLv3_client_method);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0001EFFC);

INCLUDE_ASM("nonmatchings/libssl", func_0001F7C4);

INCLUDE_ASM("nonmatchings/libssl", func_0001FA14);

INCLUDE_ASM("nonmatchings/libssl", func_0001FCF8);

INCLUDE_ASM("nonmatchings/libssl", func_000200B0);

INCLUDE_ASM("nonmatchings/libssl", func_00020528);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0001F4C0);

INCLUDE_ASM("nonmatchings/libssl", func_0001FC90);

INCLUDE_ASM("nonmatchings/libssl", func_0001FEE8);

INCLUDE_ASM("nonmatchings/libssl", func_000201D0);

INCLUDE_ASM("nonmatchings/libssl", func_0002059C);

INCLUDE_ASM("nonmatchings/libssl", func_00020A20);
#endif

void func_00020854(s32 *arg0, s32 *arg1) {
    SSLCERT_NAME_cmp(*arg0, *arg1);
}

INCLUDE_ASM("nonmatchings/libssl", func_00020874);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000208EC);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00020E04);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00020B94);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00020CD8);

INCLUDE_ASM("nonmatchings/libssl", func_00020EFC);

INCLUDE_ASM("nonmatchings/libssl", func_000210C0);

INCLUDE_ASM("nonmatchings/libssl", func_000212B4);

INCLUDE_ASM("nonmatchings/libssl", func_0002163C);

INCLUDE_ASM("nonmatchings/libssl", func_000217E0);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00021204);

INCLUDE_ASM("nonmatchings/libssl", func_00021430);

INCLUDE_ASM("nonmatchings/libssl", func_000215FC);

INCLUDE_ASM("nonmatchings/libssl", func_00021804);

INCLUDE_ASM("nonmatchings/libssl", func_00021B9C);

INCLUDE_ASM("nonmatchings/libssl", func_00021D50);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000219BC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D724);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00021AB0);

INCLUDE_ASM("nonmatchings/libssl", func_00022218);

INCLUDE_ASM("nonmatchings/libssl", func_0002235C);

INCLUDE_ASM("nonmatchings/libssl", func_00022410);

INCLUDE_ASM("nonmatchings/libssl", func_0002257C);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00022034);

INCLUDE_ASM("nonmatchings/libssl", func_000227A8);

INCLUDE_ASM("nonmatchings/libssl", func_000228E8);

INCLUDE_ASM("nonmatchings/libssl", func_000229A0);

s32 func_00022B14(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;

    temp_v0 = func_00021B9C((s32) arg0, arg1, M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(arg0, s32 *, 0x48));
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x48);
    var_a0 = 1;
    if (temp_v0 != temp_v0_2) {
        var_a0 = -1;
        if (temp_v0 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x48) = (s32) (temp_v0_2 - temp_v0);
            var_a0 = 0;
            M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + temp_v0);
        }
    }
    return var_a0;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000225E4);

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/libssl", func_00022584);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/libssl", func_0002260C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_00022BA8);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002D740);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D744);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D74C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D754);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D75C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D764);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D76C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D770);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D774);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D77C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D784);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D78C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D794);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D798);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D79C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7A0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7A8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7AC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7B0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7B8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7C0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7C8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7CC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7D4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7D8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7E0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7E4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7E8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7EC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7F0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D7F8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D800);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D808);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D810);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D814);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D81C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D824);

INCLUDE_ASM("nonmatchings/libssl", func_0002264C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000226F0);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00022C8C);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0002284C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000228A8);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00022E4C);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002D898);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D8C8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D8D0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D8D4);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/libssl", D_0002D8AC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libssl", D_0002D8DC);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002D8E4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D8EC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D8F4);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/libssl", D_0002DED4);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002D900);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D908);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D910);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/libssl", D_0002DA30);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/libssl", D_0002D870);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/libssl", D_0002D920);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/libssl", D_0002D8E8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/libssl", D_0002DF78_v260);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/libssl", D_0002DEF4_v250);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/libssl", D_0002DEF4_v201);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/libssl", D_0002D918);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002D95C);

INCLUDE_ASM("nonmatchings/libssl", func_00023810);

M2C_UNK *SSL_CIPHER_get_name(struct Unk_sceSsl_lib_A2CE8DCD_0 *arg0) {
    M2C_UNK *var_v0;

    var_v0 = &D_0002D95C;
    if (arg0 != NULL) {
        var_v0 = arg0->unk4;
    }
    return var_v0;
}

s32 func_00023868(s32 *arg0) {
    return *arg0;
}

INCLUDE_ASM("nonmatchings/libssl", func_00023870);

s32 SSL_get_session(struct Unk_sceSsl_lib_EF5A4BD4_0 *arg0) {
    return arg0->unkB8;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0002390C);
#else
void func_00023EAC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;

    temp_a0 = D_000316A0;
    D_000316A0 += 1;
    func_00013E60(temp_a0, (s32) &D_000310C4, arg0, arg1, arg2, arg3, arg4);
}
#endif

void func_00023960(s32 arg0) {
    func_00013CA8(arg0 + 0xB8);
}

void func_0002397C(s32 arg0) {
    func_00013D78(arg0 + 0xB8);
}

INCLUDE_ASM("nonmatchings/libssl", func_00023998);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00023A30);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00023FD0);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00023E64);

INCLUDE_ASM("nonmatchings/libssl", SSL_CTX_remove_session);

INCLUDE_ASM("nonmatchings/libssl", SSL_SESSION_free);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", SSL_SESSION_reference_inc);
#else
void SSL_SESSION_reference_inc(s32 arg0) {
    func_0001C4F0(arg0 + 0x98, 1, 0xE, (s32) &D_0002D970, 0x187);
}
#endif

INCLUDE_ASM("nonmatchings/libssl", SSL_set_session);

s32 func_00024340(struct Unk_func_00024340_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk9C;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/libssl", func_00024354);

INCLUDE_ASM("nonmatchings/libssl", func_0002438C);

s32 SSL_CTX_set_timeout(struct Unk_sceSsl_lib_4214B7AF_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk28;
        arg0->unk28 = arg1;
    }
    return var_v0;
}

s32 SSL_CTX_get_timeout(struct Unk_sceSsl_lib_795B9EDF_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk28;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/libssl", func_000243F0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002D970);

INCLUDE_ASM("nonmatchings/libssl", SSL_CTX_flush_sessions);

INCLUDE_ASM("nonmatchings/libssl", func_0002454C);

INCLUDE_ASM("nonmatchings/libssl", func_000245EC);

INCLUDE_ASM("nonmatchings/libssl", func_00024654);

s32 func_000246E0(struct Unk_func_000246E0_0 *arg0) {
    return arg0->unk10;
}

s32 func_000246E8(s32 arg0) {
    return arg0 + 0x14;
}

s32 func_000246F0(struct Unk_func_000246F0_0 *arg0) {
    return arg0->unk44;
}

s32 func_000246F8(s32 arg0) {
    return arg0 + 0x48;
}

INCLUDE_ASM("nonmatchings/libssl", func_00024700);

INCLUDE_ASM("nonmatchings/libssl", func_00024738);

INCLUDE_ASM("nonmatchings/libssl", func_0002477C);

s32 func_000247F0(void) {
    return 0;
}

s32 func_000247F8(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/libssl", func_00024800);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0002485C);
#else
void func_0002485C(s32 arg0) {
    func_0001C4F0(arg0 + 8, 1, 0xA, (s32) &D_0002D994, 0xCE);
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0002488C);

void func_00024904(s32 *arg0) {
    func_00024920(*arg0);
}

INCLUDE_ASM("nonmatchings/libssl", func_00024920);

INCLUDE_ASM("nonmatchings/libssl", func_000249B0);

INCLUDE_ASM("nonmatchings/libssl", func_00024A14);

INCLUDE_ASM("nonmatchings/libssl", func_00024A50);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00024B68);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00025128);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00024C18);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00024D0C);

INCLUDE_ASM("nonmatchings/libssl", func_00024D5C);

INCLUDE_ASM("nonmatchings/libssl", func_00025110);

INCLUDE_ASM("nonmatchings/libssl", func_00025348);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000252D4);

INCLUDE_ASM("nonmatchings/libssl", func_00025328);

INCLUDE_ASM("nonmatchings/libssl", func_000256DC);

INCLUDE_ASM("nonmatchings/libssl", func_00025914);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002D994);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000253EC);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000259C0);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/libssl", func_00025448);
#else
s32 func_00025448(void) {
    return 0x28;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00025450);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00025510);

INCLUDE_ASM("nonmatchings/libssl", func_000255F8);

INCLUDE_ASM("nonmatchings/libssl", func_00025788);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00025AE8);

INCLUDE_ASM("nonmatchings/libssl", func_00025BC8);

INCLUDE_ASM("nonmatchings/libssl", func_00025D48);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00025AE4);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00025BDC);

INCLUDE_ASM("nonmatchings/libssl", func_00025C30);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0002619C);

INCLUDE_ASM("nonmatchings/libssl", func_000261F4);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00025D90);

INCLUDE_ASM("nonmatchings/libssl", func_00025DEC);

void func_00025E44(s32 arg0, s32 arg1, s32 arg2) {
    func_00025F10(arg0, arg1, 0, 0, arg2);
}

INCLUDE_ASM("nonmatchings/libssl", func_00025E68);

INCLUDE_ASM("nonmatchings/libssl", func_00025F10);

INCLUDE_ASM("nonmatchings/libssl", func_00026048);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libssl", func_000267CC);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00026208);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002DA70);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DA74);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DA78);

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/libssl", func_000262B8);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/libssl", func_00026358);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_0002691C);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/libssl", func_000263E4);
#else
s32 func_000263E4(void) {
    return -1;
}
#endif

s32 func_000263EC(void) {
    return 0x1C20;
}

M2C_UNK *func_000263F4(void) {
    return &D_000303F4;
}

s32 func_00026400(void) {
    return 0x23;
}

INCLUDE_ASM("nonmatchings/libssl", func_00026408);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0002643C);
#else
s32 func_0002643C(void *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0xF1) {
        var_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5C), s32 *, 0xB4);
    }
    return var_a1;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0002645C);

INCLUDE_ASM("nonmatchings/libssl", func_00026530);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0002661C);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00026BE0);
#endif

INCLUDE_RODATA("nonmatchings/libssl", D_0002DC10);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DC40);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DC4C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DC58);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DC68);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DC74);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DC88);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DC98);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DCAC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DCB8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DCC0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DCC8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DCD8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DCE8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DCF8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DD04);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DD14);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DD2C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DD40);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DD54);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DD6C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DD80);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DD94);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DDAC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DDC0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DDD8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DDF0);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DE04);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DE1C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DE2C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DE3C);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DE48);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DE58);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DE68);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DE78);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DE90);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_0002673C);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00026D08);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0002681C);

INCLUDE_ASM("nonmatchings/libssl", func_0002688C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00026964);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00026F34);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_0002699C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000269C4);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00026F94);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00026AEC);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00026BFC);

INCLUDE_ASM("nonmatchings/libssl", func_00026D30);

INCLUDE_ASM("nonmatchings/libssl", func_00026DFC);

INCLUDE_ASM("nonmatchings/libssl", func_00026EA8);
#else
INCLUDE_ASM("nonmatchings/libssl", func_000271D4);

INCLUDE_ASM("nonmatchings/libssl", func_00027318);

INCLUDE_ASM("nonmatchings/libssl", func_000273F0);

s32 func_000274A8(void *arg0) {
    s32 var_v1;
    void *temp_a0;

    var_v1 = 1;
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x5C);
        var_v1 = 0;
        if (!(M2C_FIELD(temp_a0, s32 *, 0) & 1)) {
            M2C_FIELD(temp_a0, s32 *, 0x110) = 1;
            var_v1 = 1;
        }
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00026EDC);

s32 SSL_library_init_custom(void) {
    func_00028C10();
    func_00026FA0();
    func_0001A814();
    return 1;
}

INCLUDE_ASM("nonmatchings/libssl", func_00026FA0);

s32 SSL_library_cleanup(void) {
    func_0000DE28();
    RAND_cleanup();
    func_00015028(-1);
    func_000150F0();
    func_0001BA10();
    func_00028C10();
    ERR_remove_state(0);
    ERR_free_strings();
    return 1;
}

INCLUDE_RODATA("nonmatchings/libssl", D_0002DEDC);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DEE8);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DEF4);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DF00);

INCLUDE_ASM("nonmatchings/libssl", SSL_get_ex_data_X509_STORE_CTX_idx);

INCLUDE_ASM("nonmatchings/libssl", func_00027114);

INCLUDE_ASM("nonmatchings/libssl", func_00027188);

INCLUDE_ASM("nonmatchings/libssl", func_000272A0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libssl", func_0002796C);
#else
INCLUDE_ASM("nonmatchings/libssl", func_0002735C);
#endif

INCLUDE_ASM("nonmatchings/libssl", SSL_get_client_CA_list_count);

INCLUDE_ASM("nonmatchings/libssl", SSL_get_client_CA_list_item);

void SSL_CTX_set_client_cert_cb(struct Unk_sceSsl_lib_BF55C31C_0 *arg0, s32 arg1) {
    arg0->unkC8 = arg1;
}

INCLUDE_ASM("nonmatchings/libssl", SSL_clear);

INCLUDE_ASM("nonmatchings/libssl", SSL_new);

INCLUDE_ASM("nonmatchings/libssl", SSL_free);

INCLUDE_ASM("nonmatchings/libssl", SSL_set_bio);

s32 SSL_get_rbio(struct Unk_sceSsl_lib_2E2E2B09_0 *arg0) {
    return arg0->unkC;
}

s32 SSL_get_wbio(struct Unk_sceSsl_lib_868C15DF_0 *arg0) {
    return arg0->unk10;
}

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", SSL_get_default_timeout);
#else
void SSL_get_default_timeout(struct Unk_sceSsl_lib_D49A570C_0 *arg0) {
    arg0->unk8->unk50();
}
#endif

INCLUDE_ASM("nonmatchings/libssl", SSL_read);

INCLUDE_ASM("nonmatchings/libssl", SSL_write);

INCLUDE_ASM("nonmatchings/libssl", SSL_shutdown);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DF30);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DF54);

INCLUDE_RODATA("nonmatchings/libssl", D_0002DF78);

INCLUDE_ASM("nonmatchings/libssl", SSL_CTX_ctrl);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00027CB4);
#endif

#if FW_VERSION == 271
s32 func_00027CE8(struct Unk_func_00027CE8_0 *arg0) {
    s32 var_v0;
    void *temp_v0;

    if (((arg0 == NULL) || (var_v0 = arg0->unk68, (var_v0 == 0))) && ((temp_v0 = arg0->unkE4, (temp_v0 == NULL)) || (var_v0 = M2C_FIELD(temp_v0, s32 *, 8), (var_v0 == 0)))) {
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_00027D1C(struct Unk_func_00027D1C_0 *arg0) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk6C;
        if ((var_v0 == 0) && ((temp_v0 = arg0->unkE4, (temp_v0 == NULL)) || (var_v0 = M2C_FIELD(temp_v0, s32 *, 0xC), (var_v0 == 0)))) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libssl", func_000282E0);

INCLUDE_ASM("nonmatchings/libssl", func_00028310);

INCLUDE_ASM("nonmatchings/libssl", func_00028348);

INCLUDE_ASM("nonmatchings/libssl", func_00028380);

INCLUDE_ASM("nonmatchings/libssl", func_00028420);

INCLUDE_ASM("nonmatchings/libssl", func_0002844C);
#endif

#if FW_VERSION >= 282
s32 func_00027CE8(struct Unk_func_00027CE8_0 *arg0) {
    s32 var_v0;
    struct Unk_func_00027CE8_temp_v0 *temp_v0;

    if (((arg0 == NULL) || (var_v0 = arg0->unk68, (var_v0 == 0))) && ((temp_v0 = arg0->unkE4, (temp_v0 == NULL)) || (var_v0 = temp_v0->unk8, (var_v0 == 0)))) {
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_00027D1C(struct Unk_func_00027D1C_0 *arg0) {
    s32 var_v0;
    struct Unk_func_00027D1C_temp_v0 *temp_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk6C;
        if ((var_v0 == 0) && ((temp_v0 = arg0->unkE4, (temp_v0 == NULL)) || (var_v0 = temp_v0->unkC, (var_v0 == 0)))) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00027D50);

INCLUDE_ASM("nonmatchings/libssl", func_00027DEC);

INCLUDE_ASM("nonmatchings/libssl", func_00027E18);
#endif

INCLUDE_ASM("nonmatchings/libssl", SSL_CTX_new);

INCLUDE_ASM("nonmatchings/libssl", SSL_CTX_free);

void SSL_CTX_set_app_verify_cb(struct Unk_sceSsl_lib_529A9477_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk84 = arg1;
    arg0->unk88 = arg2;
}

INCLUDE_ASM("nonmatchings/libssl", SSL_CTX_set_verify);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000282B8);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00028900);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000284F0);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00028600);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00028C84);
#endif

INCLUDE_ASM("nonmatchings/libssl", SSL_get_error);

INCLUDE_ASM("nonmatchings/libssl", SSL_set_connect_state);

s32 func_0002889C(void) {
    ERR_put_error(0x14, 0xC6, 0x22, 0, 0);
    return 0;
}

s32 func_000288CC(void) {
    ERR_put_error(0x14, 0xA1, 0x22, 0, 0);
    return 0;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_000288FC);
#else
INCLUDE_ASM("nonmatchings/libssl", func_00028F84);

INCLUDE_ASM("nonmatchings/libssl", SSL_get_current_cipher);
#endif

#if FW_VERSION >= 271
s32 SSL_get_current_cipher(struct Unk_sceSsl_lib_88897D26_0 *arg0) {
    s32 var_v0;
    struct Unk_sceSsl_lib_88897D26_temp_v0 *temp_v0;

    temp_v0 = arg0->unkB8;
    if ((temp_v0 == NULL) || (var_v0 = temp_v0->unkAC, (var_v0 == 0))) {
        var_v0 = 0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", func_000289B8);

INCLUDE_ASM("nonmatchings/libssl", func_00028AD4);

void SSL_CTX_set_quiet_shutdown(struct Unk_sceSsl_lib_42DF4592_0 *arg0, s32 arg1) {
    arg0->unkD0 = arg1;
}

s32 SSL_CTX_get_quiet_shutdown(struct Unk_sceSsl_lib_E14101E4_0 *arg0) {
    return arg0->unkD0;
}

void SSL_set_quiet_shutdown(struct Unk_sceSsl_lib_4AF959E3_0 *arg0, s32 arg1) {
    arg0->unk2C = arg1;
}

s32 SSL_get_quiet_shutdown(struct Unk_sceSsl_lib_6A19E0AA_0 *arg0) {
    return arg0->unk2C;
}

void sceSsl_lib_D5ABC603(struct Unk_sceSsl_lib_D5ABC603_0 *arg0, s32 arg1) {
    arg0->unkD4 = arg1;
}

s32 sceSsl_lib_909E9D31(struct Unk_sceSsl_lib_909E9D31_0 *arg0) {
    return arg0->unkD4;
}

void sceSsl_lib_AE3986D3(struct Unk_sceSsl_lib_AE3986D3_0 *arg0, s32 arg1) {
    arg0->unk30 = arg1;
}

s32 sceSsl_lib_340F8829(struct Unk_sceSsl_lib_340F8829_0 *arg0) {
    return arg0->unk30;
}

void SSL_set_shutdown(struct Unk_sceSsl_lib_86D4034D_0 *arg0, s32 arg1) {
    arg0->unk34 = arg1;
}

s32 SSL_get_shutdown(struct Unk_sceSsl_lib_D1205C58_0 *arg0) {
    return arg0->unk34;
}

s32 SSL_version(s32 *arg0) {
    return *arg0;
}

s32 SSL_get_SSL_CTX(struct Unk_sceSsl_lib_E92302C5_0 *arg0) {
    return arg0->unkE4;
}

void SSL_set_info_cb(struct Unk_sceSsl_lib_C270B3A8_0 *arg0, s32 arg1) {
    arg0->unkC8 = arg1;
}

void SSL_set_alert_info_cb(struct Unk_sceSsl_lib_BE423CD1_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkCC = arg1;
    arg0->unkD0 = arg2;
}

s32 SSL_get_info_cb(struct Unk_sceSsl_lib_95E346AB_0 *arg0) {
    return arg0->unkC8;
}

s32 func_00028BAC(struct Unk_func_00028BAC_0 *arg0) {
    return arg0->unkCC;
}

s32 func_00028BB4(struct Unk_func_00028BB4_0 *arg0) {
    return arg0->unkD0;
}

void SSL_set_app_data_cb(struct Unk_sceSsl_lib_9CB1A62F_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkD4 = arg1;
    arg0->unkD8 = arg2;
}

s32 func_00028BC8(struct Unk_func_00028BC8_0 *arg0) {
    return arg0->unkD4;
}

s32 func_00028BD0(struct Unk_func_00028BD0_0 *arg0) {
    return arg0->unkD8;
}

s32 SSL_state(struct Unk_sceSsl_lib_104F749D_0 *arg0) {
    return arg0->unk38;
}

void SSL_set_verify_result(struct Unk_sceSsl_lib_5605C9FE_0 *arg0, s32 arg1) {
    arg0->unkEC = arg1;
}

s32 SSL_get_verify_result(struct Unk_sceSsl_lib_AA3B27CF_0 *arg0) {
    return arg0->unkEC;
}

void func_00028BF0(struct Unk_func_00028BF0_0 *arg0, s32 arg1) {
    arg0->unkD8 = arg1;
}

s32 func_00028BF8(struct Unk_func_00028BF8_0 *arg0) {
    return arg0->unkD8;
}

s32 SSL_want(struct Unk_sceSsl_lib_C97D0510_0 *arg0) {
    return arg0->unk18;
}

s32 SSL_reuse(struct Unk_sceSsl_lib_A8F0AD39_0 *arg0) {
    return arg0->unk64;
}

INCLUDE_ASM("nonmatchings/libssl", func_00028C10);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00028C20);
#else
s32 func_00028C20(s32 arg0) {
    D_00031164 |= arg0;
    return 1;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/libssl", func_00028C38);
#else
s32 func_000292C8(s32 arg0) {
    D_00031164 &= ~arg0;
    return 1;
}

INCLUDE_ASM("nonmatchings/libssl", func_00028C54);
#endif

#if FW_VERSION >= 271
s32 func_00028C54(s32 arg0) {
    return D_00031164 & arg0;
}
#endif

INCLUDE_ASM("nonmatchings/libssl", SSL_use_certificate);

INCLUDE_ASM("nonmatchings/libssl", func_00028D28);

INCLUDE_ASM("nonmatchings/libssl", SSL_use_PrivateKey);

INCLUDE_ASM("nonmatchings/libssl", func_00028FA8);

INCLUDE_ASM("nonmatchings/libssl", sceSslInit);

INCLUDE_ASM("nonmatchings/libssl", sceSslEnd);

INCLUDE_ASM("nonmatchings/libssl", sceSslGetUsedMemoryMax);

INCLUDE_ASM("nonmatchings/libssl", sceSslGetUsedMemoryCurrent);

INCLUDE_ASM("nonmatchings/libssl", sceSslGetSerialNumber);

INCLUDE_ASM("nonmatchings/libssl", sceSslGetNameEntryCount);

INCLUDE_ASM("nonmatchings/libssl", sceSslGetNameEntryInfo);

INCLUDE_ASM("nonmatchings/libssl", sceSslGetNotAfter);

INCLUDE_ASM("nonmatchings/libssl", sceSslGetNotBefore);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/libssl", sceSslGetKeyUsage);
#endif

INCLUDE_ASM("nonmatchings/libssl", sceSslGetSubjectName);

INCLUDE_ASM("nonmatchings/libssl", sceSslGetIssuerName);

INCLUDE_ASM("nonmatchings/libssl", func_00029930);

INCLUDE_ASM("nonmatchings/libssl", func_000299A0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/libssl", func_00029ACC);
#endif

INCLUDE_ASM("nonmatchings/libssl", func_00029A40);

INCLUDE_ASM("nonmatchings/libssl", func_00029C5C);

INCLUDE_ASM("nonmatchings/libssl", func_00029CB0);

void func_00029CE4(void) {
    sceNetMemcmp();
}

void func_00029D00(void) {
    sceNetMemcpy();
}

INCLUDE_ASM("nonmatchings/libssl", func_00029D1C);

void func_00029D38(void) {
    sceNetVsprintf();
}

void func_00029D54(void) {
    sceNetStrlen();
}

void func_00029D70(void) {
    sceNetStrcmp();
}

void func_00029D8C(void) {
    sceNetStrncmp();
}

void func_00029DA8(void) {
    sceNetStrcpy();
}

void func_00029DC4(void) {
    sceNetStrncpy();
}

void func_00029DE0(void) {
    sceNetStrcat();
}
