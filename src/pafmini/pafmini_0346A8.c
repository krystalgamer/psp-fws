#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_E618F7A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_AD43F865);

s32 scePaf_EA39A7C1(void) {
    return D_000E1648;
}

void scePaf_6B1E90C7(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1644 += 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_66907719(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1644 -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D5F3BAB1);

void scePaf_AAD0EE78(s32 arg0) {
    D_000E15F8 = arg0;
}

void scePaf_E69C3B1B(s32 arg0) {
    D_000E15FC = arg0;
}

void scePaf_17BC4F41(s32 arg0) {
    D_000E1600 = arg0;
}

void scePaf_C2911954(s32 arg0) {
    D_000E1604 = arg0;
}

s32 scePaf_872F948B(void) {
    return D_000E1608;
}

s32 func_00034834(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003483C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00034898);

s32 func_00034B84(void) {
    return 1;
}

void scePaf_A044BFC0(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1684 += 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_F1CF9579(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1684 -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_D726F4A2(s32 arg0) {
    D_000E165C = arg0;
}

s32 scePaf_132148FD(void) {
    return D_000E1664;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_533F3856);

void scePaf_139D9047(s32 arg0) {
    D_000E1688 = arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_8D3B3587);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00034EA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00034F70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003504C);

void func_000350D4(struct Unk_func_000350D4_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a2;
    struct Unk_func_000350D4_temp_v1 *temp_v1;

    var_a2 = arg0->unk4;
    temp_v0 = arg0->unk8;
    if (temp_v0 < (var_a2 + 1)) {
        func_00035168((s32) arg0, temp_v0 + 0xA);
        var_a2 = arg0->unk4;
    }
    temp_v1 = arg0->unk0 + (var_a2 * 0xC);
    if (temp_v1 != NULL) {
        temp_v1->unk0 = &D_000E6030;
        temp_v1->unk4 = 0;
        func_00002F1C((s32) temp_v1, arg1);
        var_a2 = arg0->unk4;
    }
    arg0->unk4 = (s32) (var_a2 + 1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00035168);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", sceFontNewLib);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", sceFontDoneLib);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000356F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00035750);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003582C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6D80);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6D9C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6DB0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6DC4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6DD8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6DEC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6E00);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6E14);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6E28);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6E2C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6E40);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6E54);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6E68);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6E7C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6E90);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6EA4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6EB0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6EBC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6ED4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6EE0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6EEC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6EF4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6EFC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F0C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F1C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F24);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F30);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F38);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F44);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F54);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F60);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F70);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F7C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F88);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6F9C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6FA8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6FC4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6FD0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6FE4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D6FF8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D700C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7020);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7034);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003584C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00035BFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00035FE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", sceFontOpenUserFile);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00036154);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000361C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00036210);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00036278);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", sceFontClose);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", sceFontGetFontInfo);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", sceFontGetCharInfo);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00036878);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", sceFontGetCharGlyphImage);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00036DB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000373B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003743C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000374C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000374FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00037530);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00037550);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00037580);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00037848);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000379D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00037AE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00037BC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00037CE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00037DF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00037E3C);

s32 func_00038028(struct Unk_func_00038028_0 *arg0) {
    s32 temp_v0;
    struct Unk_func_00038028_temp_v1 *temp_v1;
    struct Unk_func_00038028_temp_v1_2 *temp_v1_2;

    temp_v0 = arg0->unk8;
    if (temp_v0 == 0) {

    } else {
        temp_v1 = M2C_FIELD(arg0->unk4, void **, 0x48);
        M2C_FIELD(temp_v1, M2C_UNK (**)(s32, s32), 0x10)(temp_v1->unk0, temp_v0);
    }
    arg0->unk8 = 0;
    if (arg0->unkC == 0) {
        arg0->unkC = 0;
    } else {
        temp_v1_2 = M2C_FIELD(arg0->unk4, void **, 0x48);
        M2C_FIELD(temp_v1_2, M2C_UNK (**)(s32, s32), 0x10)(temp_v1_2->unk0, arg0->unkC);
        arg0->unkC = 0;
    }
    return 0;
}

s32 func_000380A4(struct Unk_func_000380A4_0 *arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (arg0->unk4 > 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            sceFontClose(arg0->unk2C + var_s1);
            var_s1 += 0x4C;
        } while (var_s2 < arg0->unk4);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00038108);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003815C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000381E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00038710);

s32 func_0003889C(struct Unk_func_0003889C_0 *arg0, struct Unk_func_0003889C_1 *arg1) {
    arg0->unk0 = (u8) arg1->unk0;
    arg0->unk1 = (u8) arg1->unk1;
    arg0->unk2 = (u16) arg1->unk2;
    arg0->unk4 = (u8) arg1->unk4;
    arg0->unk5 = (u8) arg1->unk5;
    arg0->unk6 = (u8) arg1->unk6;
    arg0->unk7 = (u8) arg1->unk7;
    arg0->unk8 = (u16) arg1->unk8;
    arg0->unkA = (u16) arg1->unkA;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000388EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00038B50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00038E08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000390C4);

s32 func_0003960C(struct Unk_func_0003960C_0 *arg0, s32 *arg1) {
    s32 temp_v1;
    u8 temp_a2;

    temp_v1 = ((u32) ((arg0->unk1E8 * arg0->unk1E4) + 7) >> 3) * 2;
    *arg1 = temp_v1;
    temp_a2 = arg0->unk1EA;
    *arg1 = ((s32) ((temp_v1 + temp_a2) - 1) / (s32) temp_a2) * temp_a2;
    return 0;
}

s32 func_0003965C(struct Unk_func_0003965C_0 *arg0, s32 *arg1) {
    s32 temp_v1;
    u8 temp_a2;

    temp_v1 = ((u32) ((arg0->unk1F0 * arg0->unk1EC) + 7) >> 3) * 2;
    *arg1 = temp_v1;
    temp_a2 = arg0->unk1F2;
    *arg1 = ((s32) ((temp_v1 + temp_a2) - 1) / (s32) temp_a2) * temp_a2;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000396AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003982C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00039D74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003A2AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003A5E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003A810);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003AA74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003AC40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003ACFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003AFA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003B1B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003B2C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003B744);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003B94C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003BA44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003BA90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003BB74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003BE04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003BE78);

s32 func_0003C0E0(void) {
    sceReg_FA8A5739();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C100);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C23C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C284);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C4B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C54C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C684);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C738);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C774);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C89C);

s32 func_0003C8FC(u8 *arg0) {
    s32 var_a1;

    var_a1 = -3;
    if (D_000E1748 == 0) {
        D_000E174C = (s32) *arg0;
        var_a1 = 0;
        D_000E1748 = 1;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C92C);

s32 func_0003C994(void) {
    s32 var_v1;

    var_v1 = -2;
    if (D_000E1748 != 0) {
        D_000E1748 = 0;
        D_000E174C = -1;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003C9C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003CA60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003CB0C);

M2C_UNK *scePaf_962FA087(void) {
    return &D_000E1750;
}

s32 scePaf_DF642973(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E093C;
    D_000E093C = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D24E4016);

s32 scePaf_3829AC24(void) {
    return -1;
}

s32 scePaf_1F0E9712(void) {
    return -1;
}

s32 scePaf_0CFDBE2F(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_ED89C94B);

s32 scePaf_95948FB6(void) {
    return -1;
}

s32 scePaf_BA433BEF(void) {
    return -1;
}

s32 scePaf_B7865607(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_7952AE83);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_ED83B18F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D6C1FF36);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7064);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D6232F26);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_E418D7E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_2CB6FBBE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_442F1731);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_71EDAD83);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003D130);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_0E8A3B52);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003D330);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D96449B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_FDB98CAC);

void func_0003D5A4(struct Unk_func_0003D5A4_0 *arg0, s32 *arg1, s32 arg2) {
    func_0000AC60((u8 *)arg0 + 0x64, *arg1);
    arg0->unk60 = arg2;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_BA1F20EE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_20F5234E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_6F74F263);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003DD14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003DDCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003DE84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003DEDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003DF18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003E294);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003E468);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003E584);

void func_0003E5F0(void) {
    func_0003E584(1, 0xFFFF);
}

void func_0003E610(void) {
    func_0003E584(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003E630);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003E69C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003E710);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003E77C);

void func_0003E7F0(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_ED83B18F(arg0, arg1, arg2 & 0xFF);
}

void func_0003E80C(void) {
    scePaf_D6C1FF36();
}

void func_0003E828(void) {
    scePaf_D6232F26();
}

void func_0003E844(void) {
    scePaf_2CB6FBBE();
}

void func_0003E860(void) {
    scePaf_442F1731();
}

void func_0003E87C(void) {
    scePaf_71EDAD83();
}

void func_0003E898(M2C_UNK **arg0) {
    *arg0 = &D_000D7588;
}

void func_0003E8A8(M2C_UNK **arg0) {
    *arg0 = &D_000D7588;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003E8D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003E954);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003E9D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003EA1C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7508);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7540);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7548);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7588);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003EA60);

void func_0003EAB0(M2C_UNK **arg0) {
    *arg0 = &D_000D75B0;
}

void func_0003EAC0(M2C_UNK **arg0) {
    *arg0 = &D_000D75B0;
}

void func_0003EAD0(M2C_UNK **arg0) {
    *arg0 = &D_000D75B0;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003EAF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003EB54);

void scePaf_7C2C2742(void) {
    sceGuStart(0, D_000E17A8, D_000E17AC);
}

void scePaf_D0AD10FF(void) {
    sceGuFinish();
    sceGuSync(0, 0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003EC3C);

M2C_UNK *scePaf_B0C3E598(void) {
    return &D_000E17B4;
}

void scePaf_2A7CDE78(s32 arg0) {
    D_000E1044 = arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003ECA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003EDF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_81773E1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003EFA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003EFF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F07C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F38C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F408);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F458);

s32 func_0003F488(void) {
    return D_000E1768;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F494);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F504);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F58C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F5B4);

s32 func_0003F624(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E1788;
    D_000E1788 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F634);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F674);

s32 scePaf_2AD8DE45(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E1048;
    D_000E1048 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F754);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F784);

void func_0003F904(void) {
    func_0003F784(1, 0xFFFF);
}

void func_0003F924(void) {
    func_0003F784(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F944);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003F998);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003FB5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003FC48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003FCBC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003FDCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003FE8C);

void func_0003FEF8(struct Unk_func_0003FEF8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003FF08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003FF48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003FF70);

s32 func_0003FFAC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E104C != arg1) {
        var_v0 = func_00042B80(arg0, arg1);
    }
    return var_v0;
}

s32 func_0003FFD8(void) {
    return D_000E104C;
}

s32 func_0003FFE4(void) {
    return D_000E104C;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0003FFF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004003C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040088);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000400E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040148);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_2FF0A287);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D75B0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D75C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D75C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004028C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_FF74C932);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000403DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040514);

s32 func_00040774(struct Unk_func_00040774_0 *arg0) {
    return arg0->unk1B8;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004077C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040808);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000408AC);

void func_000408D0(struct Unk_func_000408D0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000408E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040920);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040A0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040A80);

void func_00040B40(struct Unk_func_00040B40_0 *arg0) {
    arg0->unk18 = 1;
}

s32 func_00040B4C(void) {
    return 0;
}

void func_00040B54(struct Unk_func_00040B54_0 *arg0) {
    arg0->unk0 = &D_000D1940;
    arg0->unk4 = 0x110000;
    arg0->unk8 = 0;
    arg0->unk1C = 0;
}

void scePaf_2313DDCA(struct Unk_scePaf_2313DDCA_0 *arg0) {
    arg0->unk0 = &D_000D1940;
    arg0->unk4 = 0x110000;
    arg0->unk8 = 0;
    arg0->unk1C = 0;
}

void func_00040B94(struct Unk_func_00040B94_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk1C = arg2;
    arg0->unk0 = &D_000D1940;
    arg0->unk4 = (s32) ((arg1 & 0xFFFF) | 0x410000);
    arg0->unk8 = 0;
}

void func_00040BBC(struct Unk_func_00040BBC_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk1C = arg2;
    arg0->unk0 = &D_000D1940;
    arg0->unk4 = (s32) ((arg1 & 0xFFFF) | 0x410000);
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040BE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_E9BF6BEB);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040C54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040CD0);

void func_00040D38(s32 arg0) {
    scePaf_3E203AEB(D_000E1F08, 0, arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040D60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040D88);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D75E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040DB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040DF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040E24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040E84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00040EB8);

void func_00040FEC(void) {
    if (D_000E1ECC != NULL) {
        func_00041A98(*D_000E1ECC);
        scePaf_545FE2DA(D_000E1ECC);
        D_000E1ECC = NULL;
    }
    sceFontDoneLib(D_000E1EBC);
    D_000E1EBC = 0;
    if (D_000E1F00 != 0) {
        func_000881D4(D_000E1F00);
        D_000E1F00 = 0;
    }
    if (D_000E1F08 != 0) {
        scePaf_8A861692(D_000E1F08);
        D_000E1F08 = 0;
    }
    if (D_000E1EFC != NULL) {
        scePaf_545FE2DA(D_000E1EFC);
        D_000E1EFC = NULL;
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_F8301DBC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000410FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004115C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000411AC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7634);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7640);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7650);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000411FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041250);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000412A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004132C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000413B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000414B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041604);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041728);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004175C);

void func_0004177C(struct Unk_func_0004177C_0 *arg0, struct Unk_func_0004177C_1 *arg1) {
    arg0->unk10 = (s32) arg1->unk0;
    arg0->unk14 = (s32) arg1->unk4;
    arg0->unk18 = (s32) arg1->unk8;
    func_00041BE0();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000417AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000417D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004190C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041A98);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041B10);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041BE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041C8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041D80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041DA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041DD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041E00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041E30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_462E5873);

s32 func_00041E6C(s32 arg0) {
    return func_00041E8C(arg0 & 0xFFFF) == 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041E8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00041F6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042054);

void func_00042100(void) {
    func_00042054(1, 0xFFFF);
}

void func_00042120(void) {
    func_00042054(0, 0xFFFF);
}

s32 *func_00042140(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_000421EC(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042178);

void func_000421A8(s32 arg0, s32 arg1) {
    struct Unk_func_000421A8_temp_v0 *temp_v0;

    temp_v0 = func_000421EC(arg0, arg1);
    if (temp_v0->unk15 != 0) {

    } else {
        func_000423B4(arg0, temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000421EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042244);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000423B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000425E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042718);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042798);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042960);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000429B4);

void func_00042A08(void) {
    func_00042A24();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042A24);

void func_00042A7C(void) {
    func_00042A98();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042A98);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042AC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042B80);

s32 func_00042B94(void) {
    return D_000E1090;
}

s32 func_00042BA0(void) {
    return D_000E1090;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042BAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042C58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042D04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042D70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00042DDC);

void func_00042E4C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_65920294);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_37DDBDD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00043008);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_A4F53FED);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004316C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_1AD33D73);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_DF887DED);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_92A46B32);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_905347E9);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_585B93BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_DC544921);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00043550);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_39C55C03);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_F47CA1C2);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_4E60E34C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00043A40);

void scePaf_AAA8D3DA(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_F47CA1C2(arg0, 0x100000, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00043CC0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00043DB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_DDA68BE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_EAA5AFF6);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_3F81333A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000440BC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7678);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044194);

s32 scePaf_01CF521E(struct Unk_scePaf_01CF521E_0 *arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = arg0->unk10;
    var_a1 = 1;
    if (__builtin_allegrex_ext(temp_v0, 0x10, 1) == 0) {
        arg0->unk10 = (s32) (temp_v0 | 0x10000);
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_3C68DCB7);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000442F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000443B8);

void func_00044450(void) {
    func_000443B8(1, 0xFFFF);
}

void func_00044470(void) {
    func_000443B8(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044490);

void func_00044510(struct Unk_func_00044510_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044520);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044560);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004459C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044604);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044698);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000447A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044880);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000448F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000449D0);

void ***func_00044A7C(void ***arg0, struct Unk_func_00044A7C_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_00044A7C_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044AE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044B20);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7690);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D76D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044B78);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D76F0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7700);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7710);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7720);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7724);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7730);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7758);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D775C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7764);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7768);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D776C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00044E40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045088);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045110);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045198);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000451D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004520C);

void func_000452E0(struct Unk_func_000452E0_0 *arg0) {
    void **temp_a0;

    temp_a0 = arg0->unk8C;
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x98)(temp_a0, 0x12, (u8 *)arg0 + 0x60);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045310);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045334);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004540C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045560);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045AD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045D94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045E0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045E3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045E44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00045F70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00046060);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00046150);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00046280);

void func_000463D4(void) {
}

void func_000463DC(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000463E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004648C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00046540);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00046578);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004662C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004664C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00046694);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00046888);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000469D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00046AC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00046BF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00046D58);

void func_00047124(s32 arg0) {
    func_000481B0(arg0 + 0xAC);
    func_0004540C(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_6741C662);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_26DF747F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004722C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_09AC6844);

void func_00047288(struct Unk_func_00047288_0 *arg0, s32 arg1) {
    arg0->unkE4 = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00047290);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000473D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_41BCFB59);

void func_00047530(struct Unk_func_00047530_0 *arg0, s32 arg1) {
    arg0->unkD8 = arg1;
}

void scePaf_541F36E9(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00047588(arg0, arg1, arg2, 0, arg3, (s32) &D_000E1094, arg4);
}

void scePaf_86C87E62(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00047588(arg0, arg1, arg2, arg3, arg4, (s32) &D_000E1094, arg5);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00047588);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_6840D208);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00047880);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_F1546D14);

void scePaf_607713A6(s32 arg0) {
    D_000E1100 = arg0;
}

void func_00047BB4(s32 arg0) {
    D_000E1F28 = arg0;
}

void scePaf_5EFC5387(s32 arg0) {
    D_000E1F2C = arg0;
}

void scePaf_DFC8650C(s32 arg0) {
    D_000E1F30 = arg0;
}

void func_00047BD8(struct Unk_func_00047BD8_0 *arg0, M2C_UNK *arg1) {
    if (arg1 != NULL) {
        arg0->unkEC = arg1;
        return;
    }
    arg0->unkEC = &D_000E1094;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_5DE0445F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_FE575092);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_6C3BBB68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00047F00);

void func_00047F80(void) {
    func_00047F00(1, 0xFFFF);
}

void func_00047FA0(void) {
    func_00047F00(0, 0xFFFF);
}

void func_00047FC0(struct Unk_func_00047FC0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00047FD0);

void func_00048010(struct Unk_func_00048010_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048020);

void ***func_00048060(void ***arg0, struct Unk_func_00048060_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_00048060_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000480C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004813C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000481B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004824C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000482CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004838C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004844C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048488);

void func_000484E0(s32 arg0) {
    scePaf_3586BE05(0x10, arg0);
}

void func_00048500(void) {
    scePaf_545FE2DA();
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D77C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D77C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004851C);

void func_0004874C(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048754);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000487AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000487D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048804);

void func_000488EC(void) {
    func_000515A4();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048908);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000489A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_A69BABE3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048A24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048A68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048AB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048B08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048B70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048C48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048C78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048CEC);

void func_00048DE8(struct Unk_func_00048DE8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00048DF8(struct Unk_func_00048DF8_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_0004922C((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048E2C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00048F80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049178);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004922C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049358);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000493D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049444);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000494B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D77D0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D77D4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D77E0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7860);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D78E8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7920);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D799C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7A1C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7AA4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7ADC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7B58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049554);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000496C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049834);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049898);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000498FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049968);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000499C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049D40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049DA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049E08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049EAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00049FE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004A0A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004A184);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004A290);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004A54C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004A5A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004A65C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004A6D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004A76C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004A7D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004AC28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B354);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B43C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_14CE7F6F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B508);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B570);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B5D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B644);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B6BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B744);

void func_0004B880(struct Unk_func_0004B880_0 *arg0, s32 arg1) {
    func_0004B8A0((s32) arg0, arg0->unk15C, arg1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B8A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B99C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004B9F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004BB04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004BC50);

s32 func_0004BE34(struct Unk_func_0004BE34_0 *arg0) {
    return arg0->unk188 == 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004BE40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004BF08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004BFE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C098);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C148);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C310);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C4D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C594);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C5FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C6E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C754);

void func_0004C7A0(struct Unk_func_0004C7A0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C7B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C884);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004C958);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004CC50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004CD70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004CDAC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004CE04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004CE60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004CF60);

void ***func_0004D058(void ***arg0, struct Unk_func_0004D058_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_0004D058_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D0C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D140);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D1D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D22C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D2AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D364);

void func_0004D3B4(struct Unk_func_0004D3B4_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_0004D3C4(struct Unk_func_0004D3C4_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D3D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D4D0);

void func_0004D5E8(void) {
    func_0004D604();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D604);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D67C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7C38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D818);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004D8F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004DA80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004DFFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004E188);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004E1D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004E228);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004E344);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004E470);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004E50C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004E5E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004E830);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004E9AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004EB48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004EB9C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004EC48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004ECF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004F158);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004F414);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004F574);

s32 func_0004F5D4(struct Unk_func_0004F5D4_0 *arg0, u32 arg1, u32 arg2) {
    u32 var_v1;

    var_v1 = arg0->unk10;
    if ((var_v1 < arg2) && (arg1 < (u32) arg0->unk14)) {
        func_00050290(arg0, 3);
        var_v1 = arg0->unk10;
    }
    return var_v1 < arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004F630);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004F6EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004F7FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004F8EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004FAC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004FD48);

void func_0004FF24(struct Unk_func_0004FF24_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if ((arg0->unk8 == 0) || (arg0->unk44 == 0)) {

    } else {
        sceGuColor(arg2);
        sceGuDisable(9);
        func_0004E9AC(arg0->unk8, arg3, arg1, arg4, arg5, arg6);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0004FFCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050088);

void func_00050144(struct Unk_func_00050144_0 *arg0, struct Unk_func_00050144_1 *arg1) {
    arg0->unk30 = (s32) arg1->unk0;
    arg0->unk34 = (s32) arg1->unk4;
    arg0->unk38 = (s32) arg1->unk8;
    arg0->unk3C = (s32) arg1->unkC;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050168);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000501E4);

s32 func_00050290(struct Unk_func_0004F5D4_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = arg0->unk4;
    if (arg1 < var_v1) {
        arg0->unk4 = arg1;
        var_v1 = arg1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000502B0);

void func_000503E0(void) {
    func_000502B0(1, 0xFFFF);
}

void func_00050400(void) {
    func_000502B0(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050420);

void func_0005045C(void **arg0) {
    void *temp_s0;
    struct Unk_func_0005045C_var_a0 *var_a0;
    struct Unk_func_0005045C_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_545FE2DA(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_545FE2DA(var_a0);
}

void func_000504B4(struct Unk_func_000504B4_0 *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    struct Unk_func_000504B4_var_v0 *var_v0;

    var_v1 = arg0->unk0;
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_545FE2DA(var_v0);
            var_v1 = arg0->unk0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    arg0->unk4 = 0;
    temp_v0 = arg0->unk0;
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050510);

void func_0005059C(struct Unk_func_0005059C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000505AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000505EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000506E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050764);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050844);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000509A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050A30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050A84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050B3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050C88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050D54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050DE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050EC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050F04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050F60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00050FE0);

void ***func_0005106C(void ***arg0, struct Unk_func_0005106C_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_0005106C_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

void func_000510D4(struct Unk_func_000510D4_0 *arg0) {
    arg0->unk0 = &D_000D7E70;
    scePaf_1B043852((u8 *)arg0 + 0x28);
    sceKernelDeleteSema(arg0->unk24);
    func_00051184((s32) ((u8 *)arg0 + 0x14));
    func_00051184((s32) ((u8 *)arg0 + 8));
    scePaf_E977B833((s32) arg0);
}

void func_00051128(struct Unk_func_00051128_0 *arg0) {
    arg0->unk0 = &D_000D7E70;
    scePaf_1B043852((u8 *)arg0 + 0x28);
    sceKernelDeleteSema(arg0->unk24);
    func_00051184((s32) ((u8 *)arg0 + 0x14));
    func_00051184((s32) ((u8 *)arg0 + 8));
    scePaf_E977B833((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00051184);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7CA0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7CA4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7CA8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7D08);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7D38);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7D40);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7DC0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7E50);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7E5C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7E70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000511DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000512A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000513B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00051570);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000515A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000515B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000515BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000515C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000515D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00051794);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000517D8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7EDC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7EE0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7EE4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7EE8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7EEC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7EF0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7EF4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7EF8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7EFC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7F00);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000517FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00051894);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00051A70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00051AA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00051AE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00051B20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00051B94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00051BF8);

void func_00051C20(M2C_UNK **arg0) {
    *arg0 = &D_000D7F58;
}

void func_00051C30(M2C_UNK **arg0) {
    *arg0 = &D_000D7F58;
    scePaf_4E67BB08(arg0);
}

void func_00051C58(void) {
}

s32 scePaf_5CA7F421(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1220 != arg1) {
        var_v0 = func_0003FFAC(arg0, arg1);
    }
    return var_v0;
}

s32 func_00051C8C(void) {
    return D_000E1220;
}

s32 scePaf_BAA88CDA(void) {
    return D_000E1220;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7F58);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7F68);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7F74);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D7F80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_87516C3B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_84485F54);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_715E8DAB);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000523E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000524CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D35B454A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_4DB0D5D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_8AB03D91);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_A89157EE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_5045C01F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_BDC894D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_72514A05);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00052A78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_50FFFCD2);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_A88CBB4C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00052F88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_47E35A50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_41A7BDD2);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00053194);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00053224);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D587826C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_61B105C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_B6841F37);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000534E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_3A4934E3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_0AEDCDA1);

void scePaf_58BFC2AC(struct Unk_scePaf_58BFC2AC_0 *arg0, struct Unk_scePaf_58BFC2AC_1 *arg1) {
    arg0->unk230 = (s32) arg1->unk0;
    arg0->unk234 = (s32) arg1->unk4;
    arg0->unk238 = (s32) arg1->unk8;
    arg0->unk23C = (s32) arg1->unkC;
    func_00054270((s32) arg0, 1);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_0C66B594);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_206C1F70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000539F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_9563887D);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00053B60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_21B885B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00053FF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054270);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054334);

s32 scePaf_360956CC(struct Unk_func_0005D398_0 *arg0, struct Unk_func_0005D398_1 *arg1) {
    u8 temp_a2;

    func_00043008();
    temp_a2 = arg1->unk8;
    if ((u32) (temp_a2 - 1) >= 4U) {
        if (arg0->unk1D4 == 0) {

        } else {
            func_00054964(arg0, 0, temp_a2);
        }
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_39F89900);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_1F0B8678);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_5DB527D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_25391E36);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054964);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000549FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054A94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054B30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054BCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054C28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054CC4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054D58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054DA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00054E40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_927854C5);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D02C0D2E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_222526B6);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_33096E46);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_EF52945B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_3F52824F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_672036FE);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_1C286704);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_2E6CA751);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_01A35C15);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_B42D784E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_470ABD60);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_08A02EFF);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_29DC646F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_4FCA0DE9);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_2A6499A5);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D07AF3FA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_BAFF6806);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_FCF42D6D);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_AA978F61);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_E796C85B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_CFF2B69C);

s32 scePaf_4EA868E6(struct Unk_scePaf_4EA868E6_0 *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk1E8;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x74)(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_DB230BE1);

s32 scePaf_C2E4423A(struct Unk_scePaf_C2E4423A_0 *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk1E8;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x7C)(temp_v1);
    }
    return var_v0;
}

void scePaf_86B41BA3(struct Unk_scePaf_86B41BA3_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1D0;
    if (temp_v0 == 0) {

    } else {
        func_000671E0(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005597C);

s32 func_00055A8C(struct Unk_func_00055A8C_0 *arg0) {
    return arg0->unk1D4;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055A94);

s32 func_00055AE8(struct Unk_func_00055AE8_0 *arg0, s32 arg1) {
    arg0->unk1EC = arg1;
    return 0;
}

void func_00055AF4(struct Unk_func_00055AF4_0 *arg0) {
    arg0->unk0 = &D_000D80D8;
    arg0->unk8 = &D_000D1930;
}

void func_00055B10(struct Unk_func_00055B10_0 *arg0) {
    arg0->unk0 = &D_000D80D8;
    arg0->unk8 = &D_000D1930;
    scePaf_4E67BB08(arg0);
}

void func_00055B44(struct Unk_func_00055B44_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055B4C);

void func_00055B6C(s32 arg0) {
    scePaf_D24E4016(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055B88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055BA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055BC0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055C04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055C44);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055C80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055CC0);

void func_00055CE4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}

void func_00055D08(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}

void func_00055D2C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055D50);

void func_00055D74(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}

void func_00055D98(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}

void func_00055DBC(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055DE0);

void func_00055DFC(s32 arg0) {
    scePaf_ED89C94B(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055E18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055E34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055E50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055E90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055ED0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00055F10);

void func_00055F50(void) {
}

s32 func_00055F58(void) {
    return -1;
}

s32 func_00055F60(void) {
    return -1;
}

s32 func_00055F68(void) {
    return -1;
}

s32 func_00055F70(void) {
    return -1;
}

s32 func_00055F78(void) {
    return 0;
}

s32 func_00055F80(void) {
    return 0;
}

s32 func_00055F88(void) {
    return 1;
}

void func_00055F90(void) {
}

s32 scePaf_EB553D60(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1224 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00055FC4(void) {
    return D_000E1224;
}

s32 scePaf_65C19AC0(void) {
    return D_000E1224;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_CDC81771);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_F1649F5B);

void scePaf_C1FAF826(M2C_UNK **arg0) {
    *arg0 = &D_000D8188;
    scePaf_715E8DAB((s32) arg0);
}

void func_0005615C(M2C_UNK **arg0) {
    *arg0 = &D_000D8188;
    scePaf_715E8DAB((s32) arg0);
}

void func_00056184(M2C_UNK **arg0) {
    *arg0 = &D_000D8188;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_8BA04801);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_93A60B78);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_AEE1CBAD);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_19A779E2);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000564BC);

s32 func_000564E8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1228 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00056514(void) {
    return D_000E1228;
}

s32 func_00056520(void) {
    return D_000E1228;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005652C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000565C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00056654);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000566A8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8000);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D80D8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8168);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8174);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8188);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8258);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8264);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00056764);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00056A48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00056BD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00056C30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00056C88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_4FF65BDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00056D1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00056D38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00056EE8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00056FC8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057048);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000570B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000571F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057324);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057360);

void func_000573C8(struct Unk_func_000573C8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000573D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057418);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057484);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057510);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005758C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057618);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000576B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057818);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000578B0);

s32 func_00057978(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E122C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000579A4(void) {
    return D_000E122C;
}

s32 scePaf_CAE6374A(void) {
    return D_000E122C;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D82AC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D82C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D82D0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D83A0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D83AC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D83B0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D83B8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D83C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D83C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000579BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_E6C072E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057B5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057BA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057BE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057C30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057D80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00057DDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005816C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000581C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00058228);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00058280);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000582CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00058318);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00058354);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005854C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00058744);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00058938);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00058B30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00058D14);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00058FCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_66B35152);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D2463C79);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00059350);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_58CAE908);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_9DD9CA07);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00059600);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005976C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00059AB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00059BE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00059E1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00059FCC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005A200);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005A2DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005A55C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005A5EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005A650);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005A750);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005A8BC);

void func_0005A954(void) {
    func_0005A8BC(1, 0xFFFF);
}

void func_0005A974(struct Unk_func_0005A974_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005A984);

void func_0005A9E8(struct Unk_func_0005A9E8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005A9F8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005AA38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005AA8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005AB20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005AB94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005ABD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005AC54);

void func_0005ACE4(struct Unk_func_0005ACE4_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_0005AB94((arg0->unk0 + (arg0->unk4 * 0x10)) - 0x10);
    temp_v1 = arg0->unk4 - 1;
    temp_v0 = arg0->unk8;
    arg0->unk4 = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_0005AE7C((s32) arg0, temp_v0 - 0xA);
    }
}

void func_0005AD50(struct Unk_func_0005AD50_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0005AD94((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005AD94);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005AE7C);

s32 func_0005AF6C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1230 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_0005AF98(void) {
    return D_000E1230;
}

s32 scePaf_9C9B6732(void) {
    return D_000E1230;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005AFB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005B034);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005B0B8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005B154);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005B1F0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8450);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8520);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D852C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005B294);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_DF9138A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_78054045);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_95DA7A68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005BB18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005BBEC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005BC9C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005BCDC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8540);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8548);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D854C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8550);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8554);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8558);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D855C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8560);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8564);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8568);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D856C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005BDA4);

s32 func_0005BF74(struct Unk_func_0005BF74_0 *arg0) {
    return arg0->unk330 == 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005BF80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C1A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C234);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C260);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C28C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C2E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C33C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C368);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C394);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C3C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C3EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C460);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C4D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C55C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C5C8);

s32 func_0005C5F4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1234 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_0005C620(void) {
    return D_000E1234;
}

s32 func_0005C62C(void) {
    return D_000E1234;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C638);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D2E0D705);

void func_0005C768(M2C_UNK **arg0) {
    *arg0 = &D_000D8678;
    scePaf_715E8DAB((s32) arg0);
}

void func_0005C790(M2C_UNK **arg0) {
    *arg0 = &D_000D8678;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void func_0005C7C8(struct Unk_func_0005C7C8_0 *arg0) {
    func_0007499C(arg0->unk1E8);
}

s32 func_0005C7E4(struct Unk_func_0005C7E4_0 *arg0) {
    return arg0->unk1E8->unk20->unk148;
}

void func_0005C7F4(struct Unk_func_0005C7F4_0 *arg0) {
    func_0004A6D8(arg0->unk1E8->unk20);
}

void scePaf_6E1B5B50(struct Unk_scePaf_6E1B5B50_0 *arg0) {
    func_0004BF08(arg0->unk1E8->unk20);
}

void func_0005C834(struct Unk_func_0005C834_0 *arg0) {
    func_0004BE40(arg0->unk1E8->unk20);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C854);

void scePaf_BFFAEE83(struct Unk_scePaf_BFFAEE83_0 *arg0) {
    scePaf_14CE7F6F(arg0->unk1E8->unk20);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_9AFD4AD4);

void func_0005C894(struct Unk_func_0005C894_0 *arg0) {
    func_0004C754(arg0->unk1E8->unk20);
}

void scePaf_7116224C(struct Unk_scePaf_7116224C_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk20->unk194 = arg1;
}

void func_0005C8C4(struct Unk_func_0005C8C4_0 *arg0, s32 arg1, s32 arg2) {
    func_0004A76C(arg0->unk1E8->unk20, arg1, arg2 & 0xFF);
}

s32 func_0005C8E8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1238 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_0005C914(void) {
    return D_000E1238;
}

s32 func_0005C920(void) {
    return D_000E1238;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8580);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8590);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8660);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8678);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D874C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8754);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8774);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8794);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D87B4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D87D4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D87F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005C92C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005CBB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005CE3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005CFB4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005D12C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005D2AC);

s32 func_0005D398(struct Unk_func_0005D398_0 *arg0, struct Unk_func_0005D398_1 *arg1) {
    if (((u32) (arg1->unk8 - 1) >= 2U) || (arg0->unk331 != 0)) {
        scePaf_360956CC(arg0, arg1);
    }
    arg0->unk331 = 0U;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005D3E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005D4A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005D560);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005D5BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005D81C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005D8B4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005D980);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005D9E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005DA30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005DA6C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005DD40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005E014);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005E2E8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005E5BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005EC2C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_A76B9604);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_5075C799);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005F20C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005F2A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005F498);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_A72594EF);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_7B6F0E32);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0005F800);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_F88ABAE1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_522A877E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_BEF0151C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000600A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_E1C76B22);

void scePaf_44EB8C62(struct Unk_scePaf_44EB8C62_0 *arg0) {
    s32 temp_a1;
    s32 var_s0;

    var_s0 = arg0->unk348;
    if (arg0->unk34C < var_s0) {

    } else {
        do {
            temp_a1 = var_s0;
            var_s0 += 1;
            M2C_FIELD(arg0->unk0, M2C_UNK (**)(void *, s32), 0xD0)(arg0, temp_a1);
        } while (arg0->unk34C >= var_s0);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00060358);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00060508);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000607D4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0006089C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000609D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00060BA0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00060D24);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00060FD4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000610A4);

void func_000610F4(struct Unk_func_000610F4_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00061104);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00061168);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0006129C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000612F0);

void func_00061368(struct Unk_func_00061368_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00040A80((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000613AC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0006149C);

s32 func_0006152C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E123C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00061558(void) {
    return D_000E123C;
}

s32 func_00061564(void) {
    return D_000E123C;
}

void scePaf_6DD28F44(void) {
    func_00074B60();
}

void func_0006158C(struct Unk_func_0006158C_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a2;

    var_a2 = arg2;
    if (var_a2 == 0) {
        temp_v0 = scePaf_B7E6052B(0x70);
        func_00074BEC(temp_v0, arg0);
        var_a2 = temp_v0;
    }
    scePaf_87516C3B(arg0, arg1, var_a2);
    arg0->unk0 = &D_000D8990;
    arg0->unk14 = 0x100;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_4ADAEF94);

void func_000616AC(M2C_UNK **arg0) {
    *arg0 = &D_000D8990;
    scePaf_715E8DAB((s32) arg0);
}

void func_000616D4(M2C_UNK **arg0) {
    *arg0 = &D_000D8990;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void scePaf_95708BC0(struct Unk_scePaf_95708BC0_0 *arg0) {
    func_00074E7C(arg0->unk1E8);
}

void scePaf_DEF9EBE7(struct Unk_scePaf_DEF9EBE7_0 *arg0) {
    func_00074E84(arg0->unk1E8);
}

void scePaf_C85155C9(struct Unk_scePaf_C85155C9_0 *arg0) {
    func_00074E8C(arg0->unk1E8);
}

void scePaf_F23F3226(struct Unk_scePaf_F23F3226_0 *arg0) {
    func_00074E94(arg0->unk1E8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D153385E);

void scePaf_86A5AE7D(struct Unk_scePaf_86A5AE7D_0 *arg0) {
    func_00074EA4(arg0->unk1E8);
}

void scePaf_5A8D4BDB(struct Unk_scePaf_5A8D4BDB_0 *arg0) {
    func_00074ED8(arg0->unk1E8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_2120282A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_8159EB28);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_5CE11C03);

void scePaf_05073826(struct Unk_scePaf_05073826_0 *arg0) {
    func_00074EF8(arg0->unk1E8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_A4B48F00);

void scePaf_224C33F0(struct Unk_scePaf_224C33F0_0 *arg0) {
    func_00074F08(arg0->unk1E8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_3DBE861F);

void scePaf_FA78AF39(struct Unk_scePaf_FA78AF39_0 *arg0) {
    func_00074F18(arg0->unk1E8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_A3761F27);

void scePaf_DE75C2BA(struct Unk_scePaf_DE75C2BA_0 *arg0) {
    func_00074F2C(arg0->unk1E8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_4129A915);

void scePaf_8A51BA1E(struct Unk_scePaf_8A51BA1E_0 *arg0) {
    func_00074F3C(arg0->unk1E8);
}

void scePaf_0FFA3ECE(struct Unk_scePaf_0FFA3ECE_0 *arg0) {
    func_00074F44(arg0->unk1E8);
}

void scePaf_89582FD0(struct Unk_scePaf_89582FD0_0 *arg0) {
    func_00074F4C(arg0->unk1E8);
}

void scePaf_84913A3A(struct Unk_scePaf_84913A3A_0 *arg0) {
    func_00074F54(arg0->unk1E8);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00061978);

void func_00061A98(M2C_UNK **arg0) {
    *arg0 = &D_000D8A68;
    scePaf_4E67BB08(arg0);
}

s32 func_00061AC0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1240 != arg1) {
        var_v0 = func_0005C8E8(arg0, arg1);
    }
    return var_v0;
}

s32 func_00061AEC(void) {
    return D_000E1240;
}

s32 scePaf_7C31F453(void) {
    return D_000E1240;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8884);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8898);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8970);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8978);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8980);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8990);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8A68);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8A74);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8A80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00061B04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_F60816FE);

void func_00061EF4(M2C_UNK **arg0) {
    *arg0 = &D_000D8BF8;
    func_0005CE3C((s32) arg0);
}

void func_00061F1C(M2C_UNK **arg0) {
    *arg0 = &D_000D8BF8;
    func_0005CE3C((s32) arg0);
}

void func_00061F44(M2C_UNK **arg0) {
    *arg0 = &D_000D8BF8;
    func_0005CE3C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00061F7C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062134);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062364);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062488);

s32 func_00062764(struct Unk_func_00062764_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 var_v0;

    temp_a4 = arg2 & 0xFF;
    if (arg1 != 0x33) {
        var_v0 = func_0005D8B4(arg0, arg1, temp_a4);
    } else {
        arg0->unk6C8 = (s8) temp_a4;
        func_00063A1C(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000627A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062840);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000628D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062914);

void func_00062968(struct Unk_func_00062968_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_0005DD40(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = arg0->unk700;
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x70)(temp_v0, arg2, arg3);
    }
}

void func_000629B4(struct Unk_func_000629B4_0 *arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_0005E014(arg0, arg1, arg2);
    } else {
        temp_v0 = arg0->unk700;
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32), 0x74)(temp_v0, arg2);
    }
}

void func_000629FC(struct Unk_func_000629FC_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_0005E2E8(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = arg0->unk700;
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x78)(temp_v0, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062A48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062A90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062AD8);

s32 scePaf_6141934B(struct Unk_scePaf_6141934B_0 *arg0, s32 arg1) {
    s32 var_v0;

    if ((arg1 & 0xFFFF) != 8) {
        var_v0 = func_0005F20C(arg0, arg1);
    } else {
        var_v0 = arg0->unk700;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062BD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062C8C);

s32 scePaf_5A99AE67(s32 arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_A72594EF();
    if (temp_v0 >= 0) {
        scePaf_EAA5AFF6(arg0, 0x0100000C);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00062F70);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D5F5E68F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000632C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000636C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00063750);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00063850);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00063994);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00063A1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00063C64);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00063E8C);

void func_00063FE4(void) {
    func_0005D9E4();
}

s32 func_00064000(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E126C != arg1) {
        var_v0 = func_00067C4C(arg0, arg1);
    }
    return var_v0;
}

s32 func_0006402C(void) {
    return D_000E126C;
}

s32 scePaf_9A8E343E(void) {
    return D_000E126C;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00064044);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_D1159069);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0006420C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000642C4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0006437C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8BE8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8BF8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CD0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CD4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CD8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CDC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CE0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CE4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CE8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CEC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CF0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CF4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", D_000D8CF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_0006443C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00064AA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00064B74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00064BBC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00064CF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00064D3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00064E20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00064F08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000650BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_000651A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_AE02F241);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_95040C08);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_07BA4C80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", scePaf_252F37A3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0346A8", func_00065908);

