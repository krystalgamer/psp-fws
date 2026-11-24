#include "common.h"
#include "pafmini_decls.h"

s32 func_00065F80(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1270 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00065FAC(void) {
    return D_000E1270;
}

s32 scePaf_CEAC29F3(void) {
    return D_000E1270;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00065FC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_275BCDC6);

void func_0006617C(M2C_UNK **arg0) {
    *arg0 = &D_000D8E30;
    scePaf_715E8DAB((s32) arg0);
}

void func_000661A4(M2C_UNK **arg0) {
    *arg0 = &D_000D8E30;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_000661DC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1274 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00066208(void) {
    return D_000E1274;
}

s32 scePaf_503FA456(void) {
    return D_000E1274;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D8D50);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D8E20);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D8E30);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D8F04);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D8F10);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00066220);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000662FC);

void func_00066414(struct Unk_func_00066414_0 *arg0) {
    arg0->unk0 = &D_000D8F40;
    sceKernelDeleteSema(arg0->unk370);
    scePaf_715E8DAB((s32) arg0);
}

void func_00066450(struct Unk_func_00066450_0 *arg0) {
    arg0->unk0 = &D_000D8F40;
    sceKernelDeleteSema(arg0->unk370);
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00066494);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_B104EC1B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_4E62343D);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_3CEDE012);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_85696453);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_6E94BA7B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_18D51B42);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_03064559);

void scePaf_2A5DDF04(struct Unk_scePaf_2A5DDF04_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk3F8 = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00066980);

s32 func_000669F4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1278 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00066A20(void) {
    return D_000E1278;
}

s32 scePaf_256218C2(void) {
    return D_000E1278;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D8F2C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D8F40);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9010);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9018);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9024);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00066A38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_C8FD64AA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00066DB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00066E10);

void func_00066E74(struct Unk_vt_func_00066E74_arg0 **arg0) {
    sceGumMatrixMode(2);
    sceGumLoadIdentity();
    (*arg0)->unk60(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00066EB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_79C3CBF7);

s32 func_000670A0(struct Unk_func_000670A0_0 *arg0) {
    return arg0->unk554;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000670A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067120);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000671BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000671E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067230);

s32 func_000672AC(s32 arg0, M2C_UNK arg1) {
    scePaf_DC544921();
    scePaf_4E60E34C(arg0, 0x80005, arg1);
    return 1;
}

void func_000672F4(struct Unk_func_000672F4_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067304);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067344);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067430);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000674A4);

s32 func_00067564(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E127C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00067590(void) {
    return D_000E127C;
}

s32 scePaf_F7FB133E(void) {
    return D_000E127C;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9040);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9050);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9120);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000675A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_57AF63CE);

void func_00067728(M2C_UNK **arg0) {
    *arg0 = &D_000D9150;
    scePaf_715E8DAB((s32) arg0);
}

void func_00067750(M2C_UNK **arg0) {
    *arg0 = &D_000D9150;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_2D94D547);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_752AB253);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_12D445E1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000679A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067A64);

void scePaf_C07B7162(struct Unk_scePaf_C07B7162_0 *arg0) {
    func_00077BCC(arg0->unk1E8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067AA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067BEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067C4C);

s32 func_00067C78(void) {
    return D_000E1280;
}

s32 scePaf_5A818E41(void) {
    return D_000E1280;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D913C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9150);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9220);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9228);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9298);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D92B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D92D8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D92F8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9318);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067C90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00067FB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000682D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00068440);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000685B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00068728);

s32 func_000689C4(struct Unk_func_0005D398_0 *arg0, struct Unk_func_0005D398_1 *arg1) {
    if (((u32) (arg1->unk8 - 1) >= 4U) || (arg0->unk331 == 0) || (arg0->unk1EC != 5)) {
        scePaf_360956CC(arg0, arg1);
    }
    arg0->unk334 = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00068A1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00068B64);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00068CE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00068DC4);

s32 func_00068E5C(struct Unk_func_00068E5C_0 *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg1 == 5;
    scePaf_ED83B18F((u8 *)arg0 + 0x370, 0xD, temp_s0);
    scePaf_ED83B18F((u8 *)arg0 + 0x430, 0xD, temp_s0);
    scePaf_ED83B18F((u8 *)arg0 + 0x4F0, 0xD, temp_s0);
    scePaf_ED83B18F((u8 *)arg0 + 0x5B0, 0xD, temp_s0);
    arg0->unk1EC = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00068EE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00068F38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00068F88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00068FD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00069010);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00069124);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00069238);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00069340);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00069454);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000695A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000695E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00069648);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_8DB4B066);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_C2C25056);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_06EA7CDE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_A9970EF5);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_000698E4);

s32 func_0006996C(struct Unk_func_0006996C_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk332 != 0) {
        var_v1 = 0;
        arg0->unk438 = arg1;
        arg0->unk5B8 = arg1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_0006998C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00069BB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00069C98);

void func_00069CF8(void) {
    func_00069C98(1, 0xFFFF);
}

s32 func_00069D18(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1284 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00069D44(void) {
    return D_000E1284;
}

s32 scePaf_96C46364(void) {
    return D_000E1284;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00069D5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_2A2EB136);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", func_00069E74);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D93A0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", D_000D9470);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_BB457D6F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_0ED80B09);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_777635B9);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_70BECA15);

void func_0006A0D0(struct Unk_func_0006A0D0_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk334 = 1;
    scePaf_3F52824F((s32) arg0, arg1, arg2 & 0xFF);
}

void func_0006A0F4(struct Unk_func_0006A0F4_0 *arg0) {
    arg0->unk334 = 1;
    scePaf_672036FE();
}

void func_0006A118(struct Unk_func_0006A118_0 *arg0) {
    arg0->unk334 = 1;
    arg0->unk335 = 1;
    scePaf_1C286704((s32) arg0);
}

void func_0006A140(struct Unk_func_0006A140_0 *arg0) {
    arg0->unk334 = 1;
    arg0->unk335 = 1;
    scePaf_2E6CA751((s32) arg0);
}

void func_0006A168(struct Unk_func_0006A168_0 *arg0) {
    arg0->unk334 = 1;
    scePaf_DB230BE1();
}

s32 scePaf_D1EE972C(struct Unk_scePaf_D1EE972C_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        var_v1 = func_000782CC(temp_v0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_E732CF74);

void scePaf_FA758B05(struct Unk_scePaf_FA758B05_0 *arg0) {
    func_00078438(arg0->unk1E8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_608F02C6);

s32 scePaf_DC8B0309(struct Unk_scePaf_DC8B0309_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00078498(temp_v0);
    }
    return var_v1;
}

s32 scePaf_FA87D725(struct Unk_scePaf_FA87D725_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_000784B0(temp_v0);
    }
    return var_v1;
}

s32 scePaf_409E25A3(struct Unk_scePaf_409E25A3_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_000784C8(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_64775957);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_065F80", scePaf_FC37FABD);

