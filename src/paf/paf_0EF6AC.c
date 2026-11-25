#include "common.h"
#include "paf_decls.h"

void func_000EF6AC(M2C_UNK **arg0) {
    *arg0 = &D_0019B058;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_2D94D547);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_752AB253);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_12D445E1);
#else
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_00093450);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_00093514);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000935D8);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EF900);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EF9C0);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_C07B7162);
#endif

#if FW_VERSION == 282
void scePaf_C07B7162(struct Unk_scePaf_C07B7162_0 *arg0) {
    func_00106250(arg0->unk1E8);
}
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EFA00);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EFB48);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EFBA8);

s32 func_000EFBD4(void) {
    return D_001A481C;
}

s32 scePaf_5A818E41(void) {
    return D_001A481C;
}

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B044);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B058);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B128);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EB50);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198C30);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198C50);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198C70);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198C90);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198CB0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EBC0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EBE4);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EC08);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EC2C);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EC50);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F610);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011D058);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011D07C);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011D0A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F680);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F6A4);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F6C8);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F6EC);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F710);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B130);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B1A0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B1C0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B1E0);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B200);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B220);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EFBEC);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EFF0C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F022C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F039C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F050C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0684);

s32 func_000F0920(struct Unk_func_000E4F0C_0 *arg0, struct Unk_func_000E4F0C_1 *arg1) {
    if (((u32) (arg1->unk8 - 1) >= 4U) || (arg0->unk331 == 0) || (arg0->unk1EC != 5)) {
        scePaf_360956CC(arg0, arg1);
    }
    arg0->unk334 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0978);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0AC0);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0C3C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0D20);

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_00094A80);
#endif

#if FW_VERSION == 270
s32 func_00094A80(void *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg1 == 5;
    scePaf_ED83B18F(arg0 + 0x370, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x430, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x4F0, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x5B0, 0xD, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_00097E48);
#endif

#if FW_VERSION == 282
s32 func_000F0DB8(struct Unk_func_000F0DB8_0 *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg1 == 5;
    scePaf_ED83B18F((u8 *)arg0 + 0x370, 0xD, temp_s0);
    scePaf_ED83B18F((u8 *)arg0 + 0x430, 0xD, temp_s0);
    scePaf_ED83B18F((u8 *)arg0 + 0x4F0, 0xD, temp_s0);
    scePaf_ED83B18F((u8 *)arg0 + 0x5B0, 0xD, temp_s0);
    arg0->unk1EC = arg1;
    return 0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0E3C);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0E94);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0EE4);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0F30);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F0F6C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1080);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1194);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F129C);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F13B0);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F14FC);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EA774);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1544);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F15A4);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_8DB4B066);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_C2C25056);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_06EA7CDE);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_A9970EF5);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1840);

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EAB3C);
#endif

#if FW_VERSION == 270
s32 func_000EAB3C(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, u8 *, 0x332) != 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0x438) = arg1;
        M2C_FIELD(arg0, s32 *, 0x5B8) = arg1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 func_000F18C8(struct Unk_func_000F18C8_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk332 != 0) {
        var_v1 = 0;
        arg0->unk438 = arg1;
        arg0->unk5B8 = arg1;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F18E8);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011DAD8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011DBB8);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011B2D8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011B3B8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011D158);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0011D238);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F780);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0012F860);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1B14);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EAE60);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00198E08);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_001952A0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_00193788);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018F6B8);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0018EDA8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000EAEC0);
#endif

#if FW_VERSION == 270
void func_000EAEC0(void) {
    func_000EAE60(1, 0xFFFF);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1BF4);

void func_000F1C54(void) {
    func_000F1BF4(1, 0xFFFF);
}
#endif

s32 func_000F1C74(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4820 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000F1CA0(void) {
    return D_001A4820;
}

s32 scePaf_96C46364(void) {
    return D_001A4820;
}

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1CB8);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_2A2EB136);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_000F1DD0);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B2A8);

INCLUDE_RODATA("nonmatchings/paf_0EF6AC", D_0019B378);
#endif

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_BB457D6F);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_0ED80B09);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_777635B9);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_70BECA15);
#endif

void func_000F202C(struct Unk_func_000F202C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk334 = 1;
    scePaf_3F52824F((s32) arg0, arg1, arg2 & 0xFF);
}

void func_000F2050(struct Unk_func_000F2050_0 *arg0) {
    arg0->unk334 = 1;
    scePaf_672036FE();
}

void func_000F2074(struct Unk_func_000F2074_0 *arg0) {
    arg0->unk334 = 1;
    arg0->unk335 = 1;
    scePaf_1C286704((s32) arg0);
}

void func_000F209C(struct Unk_func_000F209C_0 *arg0) {
    arg0->unk334 = 1;
    arg0->unk335 = 1;
    scePaf_2E6CA751((s32) arg0);
}

void func_000F20C4(struct Unk_func_000F20C4_0 *arg0) {
    arg0->unk334 = 1;
    scePaf_DB230BE1();
}

s32 scePaf_D1EE972C(struct Unk_scePaf_D1EE972C_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        var_v1 = func_00106950(temp_v0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_E732CF74);

void scePaf_FA758B05(struct Unk_scePaf_FA758B05_0 *arg0) {
    func_00106ABC(arg0->unk1E8);
}

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_608F02C6);
#else
INCLUDE_ASM("nonmatchings/paf_0EF6AC", func_00095D40);
#endif

s32 scePaf_DC8B0309(struct Unk_scePaf_DC8B0309_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00106B1C(temp_v0);
    }
    return var_v1;
}

s32 scePaf_FA87D725(struct Unk_scePaf_FA87D725_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00106B34(temp_v0);
    }
    return var_v1;
}

s32 scePaf_409E25A3(struct Unk_scePaf_409E25A3_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00106B4C(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_64775957);

INCLUDE_ASM("nonmatchings/paf_0EF6AC", scePaf_FC37FABD);
