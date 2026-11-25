#include "common.h"
#include "paf_decls.h"

void func_000E4304(M2C_UNK **arg0) {
    *arg0 = &D_0019A4A0;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

#if FW_VERSION == 282
void func_000E433C(struct Unk_func_000E433C_0 *arg0) {
    func_000FEDBC(arg0->unk1E8);
}

s32 func_000E4358(struct Unk_func_000E4358_0 *arg0) {
    return arg0->unk1E8->unk20->unk148;
}

void func_000E4368(struct Unk_func_000E4368_0 *arg0) {
    func_000CEE18(arg0->unk1E8->unk20);
}

void scePaf_6E1B5B50(struct Unk_scePaf_6E1B5B50_0 *arg0) {
    func_000D0648(arg0->unk1E8->unk20);
}

void func_000E43A8(struct Unk_func_000E43A8_0 *arg0) {
    func_000D0580(arg0->unk1E8->unk20);
}

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E43C8);

void scePaf_BFFAEE83(struct Unk_scePaf_BFFAEE83_0 *arg0) {
    scePaf_14CE7F6F(arg0->unk1E8->unk20);
}

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_9AFD4AD4);

void func_000E4408(struct Unk_func_000E4408_0 *arg0) {
    func_000D0E94(arg0->unk1E8->unk20);
}

void scePaf_7116224C(struct Unk_scePaf_7116224C_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk20->unk194 = arg1;
}

void func_000E4438(struct Unk_func_000E4438_0 *arg0, s32 arg1, s32 arg2) {
    func_000CEEAC(arg0->unk1E8->unk20, arg1, arg2 & 0xFF);
}
#endif

s32 func_000E445C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47D0 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E4488(void) {
    return D_001A47D0;
}

s32 func_000E4494(void) {
    return D_001A47D0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008A628);

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_D2E0D705);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008A838);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008A860);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008A898);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008A8A8);

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_6E1B5B50);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008A8E8);

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_BFFAEE83);

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_9AFD4AD4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008CBA4);

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_7116224C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008A928);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008A944);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008A970);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008A97C);
#endif

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0019A3B8);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0019A488);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0019A4A0);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0012EA84);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0012EA98);
#endif

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0019A574);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0011C4E4);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0011C500);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0011C51C);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0011C538);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0011C554);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0012EB6C);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0012EB88);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0012EBA4);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0012EBC0);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0012EBDC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0019A57C);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0019A59C);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0019A5BC);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0019A5DC);

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0019A5FC);
#endif

INCLUDE_RODATA("nonmatchings/paf_0E4304", D_0019A61C);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E44A0);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E4728);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E49B0);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E4B28);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E4CA0);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E4E20);

s32 func_000E4F0C(struct Unk_func_000E4F0C_0 *arg0, struct Unk_func_000E4F0C_1 *arg1) {
    if (((u32) (arg1->unk8 - 1) >= 2U) || (arg0->unk331 != 0)) {
        scePaf_360956CC(arg0, arg1);
    }
    arg0->unk331 = 0U;
    return 0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008B430);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008B5B0);
#else
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E4F58);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E5014);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E50D4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008B784);
#else
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E5130);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E5390);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008B9EC);
#else
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E5428);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E54F4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008BABC);
#else
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E5558);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E55A4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008BB34);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008BDE8);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008C09C);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008C34C);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008C600);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008C8F4);
#else
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E55E0);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E58B4);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E5B88);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E5E5C);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E6130);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E67A0);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_A76B9604);

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_5075C799);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008CE10);
#else
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E6D80);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E6E18);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E700C);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_A72594EF);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_7B6F0E32);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_A72594EF);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_86926BB9);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E7374);

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_F88ABAE1);

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_522A877E);

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_BEF0151C);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E7C18);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_E1C76B22);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_44EB8C62);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008F9F8);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008FC50);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008D798);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008FEC4);
#endif

#if FW_VERSION == 282
void scePaf_44EB8C62(struct Unk_scePaf_44EB8C62_0 *arg0) {
    s32 temp_a1;
    s32 var_s0;

    var_s0 = arg0->unk348;
    if (arg0->unk34C < var_s0) {

    } else {
        do {
            temp_a1 = var_s0;
            var_s0 += 1;
            arg0->unk0->unkD0(arg0, temp_a1);
        } while (arg0->unk34C >= var_s0);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008D95C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E7ECC);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E807C);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8348);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000900EC);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_00090268);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8410);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8544);
#endif

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8714);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8898);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008DF84);
#else
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8B48);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8C18);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E4304", func_0008E09C);
#else
void func_000E8C68(struct Unk_func_000E8C68_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8C78);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8CDC);
#endif

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8E10);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8E64);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_0E4304", func_000909C8);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_00090A3C);
#endif

#if FW_VERSION == 282
void func_000E8EDC(struct Unk_func_000E8EDC_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_000C517C((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E8F20);

INCLUDE_ASM("nonmatchings/paf_0E4304", func_000E9010);
#endif

s32 func_000E90A0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47D4 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E90CC(void) {
    return D_001A47D4;
}

s32 func_000E90D8(void) {
    return D_001A47D4;
}

void scePaf_6DD28F44(void) {
    func_000FF044();
}

void func_000E9100(struct Unk_func_000E9100_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a2;

    var_a2 = arg2;
    if (var_a2 == 0) {
        temp_v0 = scePaf_B7E6052B(0x70);
        func_000FF148(temp_v0, arg0);
        var_a2 = temp_v0;
    }
    scePaf_87516C3B(arg0, arg1, var_a2);
    arg0->unk0 = &D_0019A7B8;
    arg0->unk14 = 0x100;
}

INCLUDE_ASM("nonmatchings/paf_0E4304", scePaf_4ADAEF94);
