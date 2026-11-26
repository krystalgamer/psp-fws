#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_E618F7A8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_AD43F865);

s32 scePaf_EA39A7C1(void) {
    return D_000E1648;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_6B1E90C7);
#else
void scePaf_6B1E90C7(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1644 += 1;
    sceKernelResumeDispatchThread(temp_a0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_66907719);
#else
void scePaf_66907719(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1644 -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D5F3BAB1);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_AAD0EE78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_AAD0EE78(s32 arg0) {
    D_0010F208 = arg0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_E69C3B1B);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_E69C3B1B(s32 arg0) {
    D_0010F20C = arg0;
}
#endif

#if FW_VERSION == 260
void scePaf_17BC4F41(s32 arg0) {
    D_000E1514 = arg0;
}

void scePaf_C2911954(s32 arg0) {
    D_000E1518 = arg0;
}
#endif

#if FW_VERSION == 282
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
#endif

s32 scePaf_872F948B(void) {
    return D_000E1608;
}

s32 func_00034834(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003483C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00034898);

s32 func_00034B84(void) {
    return 1;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A044BFC0);
#else
void scePaf_A044BFC0(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1684 += 1;
    sceKernelResumeDispatchThread(temp_a0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F1CF9579);
#else
void scePaf_F1CF9579(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_000E1684 -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}
#endif

void scePaf_D726F4A2(s32 arg0) {
    D_000E165C = arg0;
}

s32 scePaf_132148FD(void) {
    return D_000E1664;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_533F3856);

void scePaf_139D9047(s32 arg0) {
    D_000E1688 = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_8D3B3587);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00034EA4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00034F70);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003504C);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035168);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontNewLib);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6C0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D375C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontDoneLib);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0009EE28);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00034A68);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00034B44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3770);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3784);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3798);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6C5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D37AC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D37C0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6C74);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D53AC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D37C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D37D8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6C9C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D53D4);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D37EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3800);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6CC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3814);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3828);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D383C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D5430);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3848_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3854);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D386C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3878);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3884);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D388C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3894);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D38A4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D38B4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D38BC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D38C8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D38D0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D38DC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D38EC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D38F8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3908);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3914);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D5508);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3920_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3934);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3940);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D395C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3968);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D5564);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D397C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3990);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D39A4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D39B8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D39CC);
#endif

#if FW_VERSION == 201 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontDoneLib);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0009EE28);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00033774);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00033850);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00033870);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00033BCC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00033FC0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontOpenUserFile);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00034134);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontClose);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontGetFontInfo);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontGetCharInfo);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00034598);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontGetCharGlyphImage);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000349FC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000373B0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003743C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000374C8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000374FC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003507C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003509C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037614);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003761C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000350CC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000351A8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035264);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035380);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000353C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000355B0);
#endif

#if FW_VERSION == 260
s32 func_000355B0(void *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x48);
        M2C_FIELD(temp_v1, M2C_UNK (**)(s32, s32), 0x10)(M2C_FIELD(temp_v1, s32 *, 0), temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    } else {
        temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x48);
        M2C_FIELD(temp_v1_2, M2C_UNK (**)(s32, s32), 0x10)(M2C_FIELD(temp_v1_2, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003562C);
#endif

#if FW_VERSION == 260
s32 func_0003562C(void *arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) > 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            sceFontClose(M2C_FIELD(arg0, s32 *, 0x2C) + var_s1);
            var_s1 += 0x4C;
        } while (var_s2 < M2C_FIELD(arg0, s32 *, 4));
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035690);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000356E4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036ABC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035768_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035C34);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035DC0);
#endif

#if FW_VERSION == 260
s32 func_00035DC0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(arg1, u8 *, 5);
    M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg1, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 7) = (u8) M2C_FIELD(arg1, u8 *, 7);
    M2C_FIELD(arg0, u16 *, 8) = (u16) M2C_FIELD(arg1, u16 *, 8);
    M2C_FIELD(arg0, u16 *, 0xA) = (u16) M2C_FIELD(arg1, u16 *, 0xA);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035E10);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036074);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003632C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000365E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036B30);
#endif

#if FW_VERSION == 260
s32 func_00036B30(void *arg0, s32 *arg1) {
    s32 temp_v1;
    u8 temp_a2;

    temp_v1 = ((u32) ((M2C_FIELD(arg0, u16 *, 0x1E8) * M2C_FIELD(arg0, s32 *, 0x1E4)) + 7) >> 3) * 2;
    *arg1 = temp_v1;
    temp_a2 = M2C_FIELD(arg0, u8 *, 0x1EA);
    *arg1 = ((s32) ((temp_v1 + temp_a2) - 1) / (s32) temp_a2) * temp_a2;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036B80);
#endif

#if FW_VERSION == 260
s32 func_00036B80(void *arg0, s32 *arg1) {
    s32 temp_v1;
    u8 temp_a2;

    temp_v1 = ((u32) ((M2C_FIELD(arg0, u16 *, 0x1F0) * M2C_FIELD(arg0, s32 *, 0x1EC)) + 7) >> 3) * 2;
    *arg1 = temp_v1;
    temp_a2 = M2C_FIELD(arg0, u8 *, 0x1F2);
    *arg1 = ((s32) ((temp_v1 + temp_a2) - 1) / (s32) temp_a2) * temp_a2;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036BD0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036D50);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037298);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003777C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037AC4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003A2F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037CF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037E38);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003A57C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037EF4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038220);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038434);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003AB90);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038554);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000388B8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038B78);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038C70);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038CCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038D44);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038D7C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038E60);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000390F0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00039164);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000393CC);
#endif

#if FW_VERSION == 260
s32 func_000393CC(void) {
    sceReg_FA8A5739();
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000393EC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00039528);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00039570);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000397A4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00039838);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00039970);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00039A24);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00039A60);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00039B88);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000356F0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035750);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003582C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6D80);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6D9C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6DB0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6DC4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6DD8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6DEC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E00);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E14);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E28);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E2C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E40);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E54);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E68);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E7C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E90);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6EA4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6EB0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6EBC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6ED4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6EE0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6EEC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6EF4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6EFC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F0C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F1C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F24);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F30);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F38);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F44);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F54);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F60);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F70);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F7C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F88);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F9C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6FA8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6FC4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6FD0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6FE4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6FF8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D700C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7020);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7034);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003584C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035BFC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00035FE0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontOpenUserFile);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036154);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000361C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036210);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036278);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontClose);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontGetFontInfo);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontGetCharInfo);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036878);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", sceFontGetCharGlyphImage);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00036DB0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000373B0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003743C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000374C8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000374FC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037530);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037550);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037580);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037848);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000379D4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037AE4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037BC4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037CE4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037DF8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00037E3C);

s32 func_00038028(struct Unk_func_00038028_0 *arg0) {
    s32 temp_v0;
    struct Unk_func_00038028_temp_v1 *temp_v1;
    struct Unk_func_00038028_temp_v1_2 *temp_v1_2;

    temp_v0 = arg0->unk8;
    if (temp_v0 == 0) {

    } else {
        temp_v1 = arg0->unk4->unk48;
        temp_v1->unk10(temp_v1->unk0, temp_v0);
    }
    arg0->unk8 = 0;
    if (arg0->unkC == 0) {
        arg0->unkC = 0;
    } else {
        temp_v1_2 = arg0->unk4->unk48;
        temp_v1_2->unk10(temp_v1_2->unk0, arg0->unkC);
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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038108);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003815C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000381E0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038710);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000388EC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038B50);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00038E08);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000390C4);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000396AC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003982C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00039D74);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003A2AC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003A5E0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003A810);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003AA74);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003AC40);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003ACFC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003AFA8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003B1B0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003B2C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003B744);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003B94C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003BA44);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003BA90);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003BB74);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003BE04);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003BE78);

s32 func_0003C0E0(void) {
    sceReg_FA8A5739();
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C100);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C23C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C284);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C4B8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C54C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C684);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C738);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C774);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C89C);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C92C);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003C9C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003CA60);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003CB0C);
#endif

M2C_UNK *scePaf_962FA087(void) {
    return &D_000E1750;
}

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_DF642973);
#endif

#if FW_VERSION == 260
s32 scePaf_DF642973(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000DD304;
    D_000DD304 = arg0;
    return temp_v0;
}
#endif

#if FW_VERSION == 282
s32 scePaf_DF642973(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E093C;
    D_000E093C = arg0;
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D24E4016);

s32 scePaf_3829AC24(void) {
    return -1;
}

s32 scePaf_1F0E9712(void) {
    return -1;
}

s32 scePaf_0CFDBE2F(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_ED89C94B);

s32 scePaf_95948FB6(void) {
    return -1;
}

s32 scePaf_BA433BEF(void) {
    return -1;
}

s32 scePaf_B7865607(void) {
    return -1;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_7952AE83);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_ED83B18F);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D6C1FF36);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000550F4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000551B8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055204);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7064);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D6232F26);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_E418D7E0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_2CB6FBBE);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_442F1731);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_71EDAD83);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005537C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000553F0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055438);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055480);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005558C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000556C4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003D130);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_0E8A3B52);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003D330);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D96449B4);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000557A4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_FDB98CAC);

void func_0003D5A4(struct Unk_func_0003D5A4_0 *arg0, s32 *arg1, s32 arg2) {
    func_0000AC60((u8 *)arg0 + 0x64, *arg1);
    arg0->unk60 = arg2;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_BA1F20EE);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000559E8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_20F5234E);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_6F74F263);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003DD14);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003DDCC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003DE84);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003DEDC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003DF18);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E294);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E468);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E584);

void func_0003E5F0(void) {
    func_0003E584(1, 0xFFFF);
}

void func_0003E610(void) {
    func_0003E584(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E630);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E69C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E710);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E77C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E7F0);
#else
void func_0003E7F0(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_ED83B18F(arg0, arg1, arg2 & 0xFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E80C);
#else
void func_0003E80C(void) {
    scePaf_D6C1FF36();
}
#endif

void func_0003E828(void) {
    scePaf_D6232F26();
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E844);
#else
void func_0003E844(void) {
    scePaf_2CB6FBBE();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E860);
#else
void func_0003E860(void) {
    scePaf_442F1731();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E87C);
#else
void func_0003E87C(void) {
    scePaf_71EDAD83();
}
#endif

void func_0003E898(M2C_UNK **arg0) {
    *arg0 = &D_000D7588;
}

void func_0003E8A8(M2C_UNK **arg0) {
    *arg0 = &D_000D7588;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E8D0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E954);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E9D8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003EA1C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7508);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7540);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7548);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7588);

#if FW_VERSION != 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003EA60);
#else
void func_0003EA60(void) {
    s32 temp_v0;

    temp_v0 = scePaf_B7E6052B(0x330);
    scePaf_84485F54(temp_v0, 0, 0);
    D_000E1784 = temp_v0;
    func_00002464(temp_v0 + 4, (s32) "phi_manager");
}
#endif

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003EAF8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003EB54);

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_7C2C2742);
#endif

#if FW_VERSION == 260
void scePaf_7C2C2742(void) {
    sceGuStart(0, D_000DE160, D_000DE164);
}
#endif

#if FW_VERSION == 282
void scePaf_7C2C2742(void) {
    sceGuStart(0, D_000E17A8, D_000E17AC);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D0AD10FF);
#else
void scePaf_D0AD10FF(void) {
    sceGuFinish();
    sceGuSync(0, 0);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003EC3C);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_B0C3E598);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056FA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
M2C_UNK *func_00056FA8(void) {
    return &D_000E17B4;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_2A7CDE78);
#endif

#if FW_VERSION == 260
void scePaf_2A7CDE78(s32 arg0) {
    D_000DDA0C = arg0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056FB4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00056FB4(s32 arg0) {
    D_0010ED30 = arg0;
}
#endif

#if FW_VERSION == 282
M2C_UNK *scePaf_B0C3E598(void) {
    return &D_000E17B4;
}

void scePaf_2A7CDE78(s32 arg0) {
    D_000E1044 = arg0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003ECA4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003EDF4);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_81773E1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058298);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003EFA4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005839C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057268);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003EFF4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F07C);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056B48);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058744_v150);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F38C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F408);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F458);

s32 func_0003F488(void) {
    return D_000E1768;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F494);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F504);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F58C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F5B4);

s32 func_0003F624(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E1788;
    D_000E1788 = arg0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F634);

#if FW_VERSION == 100 || (FW_VERSION >= 250 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000578E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_000578E4(s32 arg0) {
    s32 temp_s0;

    temp_s0 = D_000E178C;
    D_000E178C = arg0;
    if (temp_s0 != arg0) {
        func_0007E9F8(arg0);
    }
    return temp_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_2AD8DE45);
#endif

#if FW_VERSION == 260
s32 scePaf_2AD8DE45(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000DDA10;
    D_000DDA10 = arg0;
    return temp_v0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F674);

s32 scePaf_2AD8DE45(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E1048;
    D_000E1048 = arg0;
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F754);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F784);

void func_0003F904(void) {
    func_0003F784(1, 0xFFFF);
}

void func_0003F924(void) {
    func_0003F784(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F944);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003F998);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003FB5C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003FC48);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003FCBC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003FDCC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003FE8C);

void func_0003FEF8(struct Unk_func_0003FEF8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003FF08);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003FF48);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003FF70);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003FFF0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004003C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040088);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000400E8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040148);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_2FF0A287);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D75B0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D75C0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D75C8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004028C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_FF74C932);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000403DC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040514);

s32 func_00040774(struct Unk_func_00040774_0 *arg0) {
    return arg0->unk1B8;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004077C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040808);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000408AC);

void func_000408D0(struct Unk_func_000408D0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000408E0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040920);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040A0C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040A80);

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003DB7C);
#endif

#if FW_VERSION == 260
void func_0003DB7C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x18) = 1;
}
#endif

#if FW_VERSION == 282
void func_00040B40(struct Unk_func_00040B40_0 *arg0) {
    arg0->unk18 = 1;
}
#endif

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

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040BE4);
#else
void func_00040BE4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg7;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000D1940;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((arg2 & 0xFFFF0000) | (arg1 & 0xFFFF));
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = arg5;
    M2C_FIELD(arg0, s32 *, 0x14) = arg6;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_E9BF6BEB);
#else
void scePaf_E9BF6BEB(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg7;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000D1940;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((arg2 & 0xFFFF0000) | (arg1 & 0xFFFF));
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = arg5;
    M2C_FIELD(arg0, s32 *, 0x14) = arg6;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040C54);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040CD0);

void func_00040D38(s32 arg0) {
    scePaf_3E203AEB(D_000E1F08, 0, arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040D60);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040D88);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D75E8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040DB0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040DF8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040E24);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040E84);

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059090);
#endif

#if FW_VERSION == 260
s32 func_00059090(s32 arg0) {
    void *sp0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v1;

    D_000DDA18 = 1;
    D_000DE884 = 0;
    D_000DE8A0 = 0;
    temp_v0 = scePaf_3586BE05(0x10, arg0);
    D_000DE8A4 = temp_v0;
    if (temp_v0 != 0) {
        D_000E1F08 = scePaf_6D491648(0, arg0, temp_v0);
    }
    temp_v0_2 = func_00087FF4((s32) &D_000DDA1C, 0x47);
    D_000E1F00 = temp_v0_2;
    M2C_VFIELD(&D_000DDA28, s32, 8) = func_0009E02C(temp_v0_2);
    temp_v0_3 = sceFontNewLib(&D_000DDA28, &sp0);
    D_000E1EBC = temp_v0_3;
    if ((temp_v0_3 != 0) && (sp0 != 0)) {
        sceFontDoneLib(temp_v0_3);
        D_000E1EBC = 0;
    }
    var_v1 = 1;
    if (D_000E1EBC == 0) {
        var_v1 = 0;
        D_000DE8A0 |= 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00059090(s32 arg0) {
    void *sp0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v1;

    D_0010ED38 = 1;
    D_000FD210 = 0;
    D_000FD224 = 0;
    temp_v0 = scePaf_3586BE05(0x10, arg0);
    D_0010FA1C = temp_v0;
    if (temp_v0 != 0) {
        D_000E1F08 = scePaf_6D491648(0, arg0, temp_v0);
    }
    temp_v0_2 = func_00087FF4((s32) &D_000FC528, 0x47);
    D_000E1F00 = temp_v0_2;
    M2C_VFIELD(&D_000FC534, s32, 8) = func_0009E02C(temp_v0_2);
    temp_v0_3 = func_0009EA14((s32) &D_000FC534, &sp0);
    D_000E1EBC = temp_v0_3;
    var_v1 = 1;
    if (temp_v0_3 == 0) {
        var_v1 = 0;
        D_000FD224 |= 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005913C);
#endif

#if FW_VERSION == 260
void func_0005913C(void) {
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
    if (D_000DE8A4 != 0) {
        scePaf_545FE2DA(D_000DE8A4);
        D_000DE8A4 = 0;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0005913C(void) {
    func_0009ED0C(D_000E1EBC);
    D_000E1EBC = 0;
    if (D_000E1F00 != 0) {
        func_000881D4(D_000E1F00);
        D_000E1F00 = 0;
    }
    if (D_000E1F08 != 0) {
        scePaf_8A861692(D_000E1F08);
        D_000E1F08 = 0;
    }
    if (D_0010FA1C != 0) {
        scePaf_545FE2DA(D_0010FA1C);
        D_0010FA1C = 0;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F8301DBC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E0E8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E13C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E18C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000591E0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059214);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005924C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040EB8);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F8301DBC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000410FC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004115C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000411AC);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7634);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7640);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7650);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000411FC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041250);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000412A4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004132C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000413B4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000414B0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041604);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003E6FC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041728);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004175C);

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004177C);
#endif

#if FW_VERSION == 260
void func_0004177C(struct Unk_func_0004177C_0 *arg0, struct Unk_func_0004177C_1 *arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) arg1->unk0;
    arg0->unk10 = arg1->unk4;
    arg0->unk14 = arg1->unk8;
    func_0003EB28((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0004177C(struct Unk_func_0004177C_0 *arg0, struct Unk_func_0004177C_1 *arg1) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) arg1->unk0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) arg1->unk4;
    arg0->unk10 = arg1->unk8;
    func_00059A5C((s32) arg0);
}
#endif

#if FW_VERSION == 282
void func_0004177C(struct Unk_func_0004177C_0 *arg0, struct Unk_func_0004177C_1 *arg1) {
    arg0->unk10 = (s32) arg1->unk0;
    arg0->unk14 = (s32) arg1->unk4;
    arg0->unk18 = (s32) arg1->unk8;
    func_00041BE0();
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000417AC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059784);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000417D8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004190C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041A98);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000599A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003EB28);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003EBC4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059A5C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041B10);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041BE0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041C8C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041D80);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041DA0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041DD0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041E00);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041E30);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0003ED98);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_462E5873);

s32 func_00041E6C(s32 arg0) {
    return func_00041E8C(arg0 & 0xFFFF) == 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041E8C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041F6C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042054);

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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059DF0);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042178);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000421A8);
#endif

#if FW_VERSION == 260
void func_000421A8(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_000421EC(arg0, arg1);
    if (M2C_FIELD(temp_v0, s8 *, 0x15) != 0) {

    } else {
        func_00041838(arg0, (s32) temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000421EC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040414);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041838);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041A64);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041B9C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041C1C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041DE4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041E38);
#endif

#if FW_VERSION == 282
void func_000421A8(s32 arg0, s32 arg1) {
    struct Unk_func_000421A8_temp_v0 *temp_v0;

    temp_v0 = func_000421EC(arg0, arg1);
    if (temp_v0->unk15 != 0) {

    } else {
        func_000423B4(arg0, temp_v0);
    }
}
#endif

#if FW_VERSION != 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000421EC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00040414);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059EEC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059F30);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000406C8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A080);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A1EC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A25C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A440);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A5B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void func_0005A5B4(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg1, M2C_UNK **, 8);
    temp_a2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK **, 4);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = arg1;
    M2C_FIELD(arg1, M2C_UNK **, 8) = temp_v0;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (M2C_FIELD(temp_a2, M2C_UNK **, 4) == arg1) {
        M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
    } else {
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 0) = temp_a2;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A5F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void func_0005A5F4(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg1, M2C_UNK **, 4);
    temp_a2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK **, 8);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(arg1, M2C_UNK **, 4) = temp_v0;
    M2C_FIELD(temp_v1, M2C_UNK **, 8) = arg1;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (M2C_FIELD(temp_a2, M2C_UNK **, 4) == arg1) {
        M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
    } else {
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 0) = temp_a2;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042244);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000423B4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000425E0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042718);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042798);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042960);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000429B4);
#endif

void func_00042A08(void) {
    func_00042A24();
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042A24);

void func_00042A7C(void) {
    func_00042A98();
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042A98);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00041F48);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A694);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A71C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void *func_0005A71C(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042AC4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042B80);

s32 func_00042B94(void) {
    return D_000E1090;
}

s32 func_00042BA0(void) {
    return D_000E1090;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042BAC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042C58);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042D04);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042D70);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042DDC);

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00042E4C);
#endif

#if FW_VERSION >= 260
void func_00042E4C(struct Unk_vt_func_00042E4C_arg0 **arg0) {
    (*arg0)->unk18();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00042E4C(struct Unk_vt_func_00042E4C_arg0 **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_65920294);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_37DDBDD8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00043008);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A4F53FED);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004316C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_1AD33D73);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_DF887DED);

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_92A46B32);
#else
s32 scePaf_92A46B32(s32 arg0, s32 arg1) {
    u32 temp_a0;

    scePaf_4E60E34C(arg0, 0x1000B, arg1);
    temp_a0 = M2C_FIELD(arg1, u32 *, 4);
    if ((temp_a0 >> 0x10) & 1) {
        M2C_FIELD(arg1, u32 *, 4) = (u32) ((temp_a0 & 0xFFF0FFFF) | 0x40000);
    }
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_905347E9);

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_585B93BC);
#else
s32 scePaf_585B93BC(s32 arg0, s32 arg1) {
    u32 temp_a0;

    scePaf_4E60E34C(arg0, 0x2000E, arg1);
    temp_a0 = M2C_FIELD(arg1, u32 *, 4);
    if ((temp_a0 >> 0x10) & 1) {
        M2C_FIELD(arg1, u32 *, 4) = (u32) ((temp_a0 & 0xFFF0FFFF) | 0x20000);
    }
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_DC544921);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00043550);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_39C55C03);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F47CA1C2);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_4E60E34C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00043A40);

void scePaf_AAA8D3DA(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_F47CA1C2(arg0, 0x100000, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00043CC0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00043DB4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_DDA68BE8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_EAA5AFF6);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_3F81333A);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005CF6C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000440BC);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7678);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D034);

s32 scePaf_01CF521E(struct Unk_scePaf_01CF521E_0 *arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = arg0->unk10;
    var_a1 = 1;
    if (!(((u32) temp_v0 >> 0x10) & 1)) {
        arg0->unk10 = temp_v0 | 0x10000;
        var_a1 = 0;
    }
    return var_a1;
}

s32 scePaf_3C68DCB7(void *arg0) {
    s32 var_a1;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x10);
    var_a1 = 1;
    if ((temp_v0 >> 0x10) & 1) {
        M2C_FIELD(arg0, u32 *, 0x10) = (u32) (temp_v0 & 0xFFFEFFFF);
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D198);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D268);

void func_0005D2EC(void) {
    func_0005D268(1, 0xFFFF);
}

void func_0005D30C(void) {
    func_0005D268(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D32C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005BC24);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005BD9C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005BDC8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044194);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_3C68DCB7);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000442F0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000443B8);

void func_00044450(void) {
    func_000443B8(1, 0xFFFF);
}

void func_00044470(void) {
    func_000443B8(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044490);
#endif

void func_00044510(struct Unk_func_00044510_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044520);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044560);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004459C);

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D4A0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044604);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044698);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000447A0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044880);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000448F4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D8F8);

void ***func_0005D9A4(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005DA0C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005DA48);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000449D0);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044AE4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044B20);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7690);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7118);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D76D8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044B78);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D76F0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7700);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7710);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3CA8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7720);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7724);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7170);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3CB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F1D6C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001045A4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7730);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7758);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D775C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7764);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7768);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D776C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00044E40);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045088);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045110);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045198);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000451D8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004520C);

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000452E0);
#endif

#if FW_VERSION == 260
void func_000452E0(struct Unk_func_000452E0_0 *arg0) {
    void **temp_a0;

    temp_a0 = arg0->unk8C;
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, u8 *), 0x98)(temp_a0, 0x12, &arg0->pad0[0x60]);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000452E0(struct Unk_func_000452E0_0 *arg0) {
    void **temp_a0;

    temp_a0 = arg0->unk8C;
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, u8 *), 0x94)(temp_a0, 0x12, &arg0->pad0[0x60]);
}
#endif

#if FW_VERSION == 282
void func_000452E0(struct Unk_func_000452E0_0 *arg0) {
    struct Unk_vt_func_000452E0_temp_a0 **temp_a0;

    temp_a0 = arg0->unk8C;
    (*temp_a0)->unk98(temp_a0, 0x12, (u8 *)arg0 + 0x60);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045310);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045334);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004540C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045560);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000428FC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D0E4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045AD0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045D94);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045E0C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045E3C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045E44);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00045F70);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00046060);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00046150);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005F0A0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00046280);
#endif

void func_000463D4(void) {
}

void func_000463DC(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000463E4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004648C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00046540);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00046578);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005F444);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005F464);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004662C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004664C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00046694);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00046888);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000469D4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00046AC8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00046BF0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00046D58);

void func_00047124(s32 arg0) {
    func_000481B0(arg0 + 0xAC);
    func_0004540C(arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_6741C662);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_26DF747F);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004722C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_09AC6844);

void func_00047288(struct Unk_func_00047288_0 *arg0, s32 arg1) {
    arg0->unkE4 = arg1;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00047290);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000473D0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_41BCFB59);

void func_00047530(struct Unk_func_00047530_0 *arg0, s32 arg1) {
    arg0->unkD8 = arg1;
}

void scePaf_541F36E9(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00047588(arg0, arg1, arg2, 0, arg3, (s32) &D_000E1094, arg4);
}

void scePaf_86C87E62(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00047588(arg0, arg1, arg2, arg3, arg4, (s32) &D_000E1094, arg5);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00047588);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_6840D208);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00047880);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F1546D14);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_5DE0445F);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_FE575092);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_6C3BBB68);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_FA05BF7B);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00047F00);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00047FD0);

void func_00048010(struct Unk_func_00048010_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048020);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000480C8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004813C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000481B0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004824C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000482CC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004838C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004844C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048488);

void func_000484E0(s32 arg0) {
    scePaf_3586BE05(0x10, arg0);
}

void func_00048500(void) {
    scePaf_545FE2DA();
}

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D77C0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D77C4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004851C);

void func_0004874C(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048754);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000487AC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000487D0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048804);

void func_000488EC(void) {
    func_000515A4();
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048908);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000489A4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A69BABE3);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000616A4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048A24);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048A68);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048AB8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048B08);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048B70);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048C48);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048C78);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006196C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048CEC);
#endif

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048E2C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048F80);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049178);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004922C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049358);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000493D4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049444);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000494B8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D77D0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D77D4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3D60);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3DE0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3E68);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3EA0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3F1C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D3F9C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D4024);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D751C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D5C44);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D405C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104640);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F1E8C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104740);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104774);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001047EC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2038);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F20BC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2130);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F0370);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F20F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001046BC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104740);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104774);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001047EC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104868);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001048EC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104920);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D77E0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7860);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D78E8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7920);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D799C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7A1C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7AA4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7ADC);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7B58);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000621EC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006235C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000624CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00060610);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006075C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049554);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000496C4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049834);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049898);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000498FC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049968);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062660);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00060A3C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000499C8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049D40);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049DA4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049E08);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049EAC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00049FE8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004A0A4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004A184);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004A290);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004A54C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004A5A4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004A65C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004A6D8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000474A8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004A76C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004A7D4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004AC28);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B354);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B43C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_14CE7F6F);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B508);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B570);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B5D0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B644);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B6BC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B744);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B880);
#else
void func_0004B880(struct Unk_func_0004B880_0 *arg0, s32 arg1) {
    func_0004B8A0((s32) arg0, arg0->unk15C, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B8A0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B99C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B9F0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004BB04);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062BC4);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004BC50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004BE34);
#else
s32 func_0004BE34(struct Unk_func_0004BE34_0 *arg0) {
    return arg0->unk188 == 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00048B34);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004BF08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064AB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062E08);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004BE40);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004BF08);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004BFE4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C098);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C148);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C310);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C4D8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C594);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C5FC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000634EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00065238);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C6E0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C754);
#endif

void func_0004C7A0(struct Unk_func_0004C7A0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C7B0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C884);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C958);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004CC50);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004CD70);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004CDAC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004CE04);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004CE60);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00063DD0);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00063D0C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004CF60);
#endif

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D0C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D140);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D1D0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D22C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064054);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064074);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void func_00064074(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064084);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void func_00064084(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064094);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064100);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006416C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004A240);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00066028);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064310);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D2AC);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D364);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D3D4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D4D0);

void func_0004D5E8(void) {
    func_0004D604();
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D604);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000663F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000646A8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D67C);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7C38);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104A88);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F22E8);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104B18);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104B1C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104B7C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7D38);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104BB4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D818);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000648F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00066800);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00066D20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064A90);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064F98);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D8F0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004DA80);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004DFFC);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E188);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E1D8);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004D6F8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00065154);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00067054);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00065258);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E228);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E344);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E470);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E50C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004B554);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000672F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00065504);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E5E0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E830);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00065898);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006780C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00065A54);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E9AC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004EB48);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004EB9C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004EC48);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000679B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00065BF0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00065F6C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00068030);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006623C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004ECF4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004F158);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004F414);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004F574);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004F5D4);
#else
s32 func_0004F5D4(struct Unk_func_0004F5D4_0 *arg0, u32 arg1, u32 arg2) {
    u32 var_v1;

    var_v1 = arg0->unk10;
    if ((var_v1 < arg2) && (arg1 < (u32) arg0->unk14)) {
        func_00050290(arg0, 3);
        var_v1 = arg0->unk10;
    }
    return var_v1 < arg1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006824C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000663D0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004F630);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004F6EC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00066598);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004C7D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00068500);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00066680);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004F7FC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004F8EC);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004FAC4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004FD48);

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004FF24);
#endif

#if FW_VERSION == 260
void func_0004FF24(struct Unk_func_0004FF24_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if ((arg0->unk8 == 0) || (arg0->unk44 == 0)) {

    } else {
        sceGuColor(arg2);
        sceGuDisable(9);
        func_00065898(arg0->unk8, arg3, arg1, arg4, arg5, arg6);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0004FF24(struct Unk_func_0004FF24_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if (arg0->unk8 == 0) {

    } else {
        sceGuColor(arg2);
        sceGuDisable(9);
        func_00065898(arg0->unk8, arg3, arg1, arg4, arg5, arg6);
    }
}
#endif

#if FW_VERSION == 282
void func_0004FF24(struct Unk_func_0004FF24_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if ((arg0->unk8 == 0) || (arg0->unk44 == 0)) {

    } else {
        sceGuColor(arg2);
        sceGuDisable(9);
        func_0004E9AC(arg0->unk8, arg3, arg1, arg4, arg5, arg6);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004FFCC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050088);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D76E0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D76E4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104B1C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104B7C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7D38);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7780);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7800);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050144);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00050144(struct Unk_func_00050144_0 *arg0, struct Unk_func_00050144_1 *arg1) {
    arg0->unk30 = arg1->unk0;
    arg0->unk34 = arg1->unk4;
    arg0->unk38 = arg1->unk8;
    arg0->unk3C = arg1->unkC;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00068D38);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00068DB4);
#endif

#if FW_VERSION == 282
void func_00050144(struct Unk_func_00050144_0 *arg0, struct Unk_func_00050144_1 *arg1) {
    arg0->unk30 = (s32) arg1->unk0;
    arg0->unk34 = (s32) arg1->unk4;
    arg0->unk38 = (s32) arg1->unk8;
    arg0->unk3C = (s32) arg1->unkC;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00066EB8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00066F64);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050168);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000501E4);
#endif

s32 func_00050290(struct Unk_func_0004F5D4_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = arg0->unk4;
    if (arg1 < var_v1) {
        arg0->unk4 = arg1;
        var_v1 = arg1;
    }
    return var_v1;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00067028);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void func_00067028(void) {
    void *temp_v0;

    if (D_0010FA70 == NULL) {
        temp_v0 = scePaf_B7E6052B(0xC);
        func_00064084(temp_v0);
        D_0010FA70 = temp_v0;
    }
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00067078);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000670C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void func_000670C8(void) {
    if (D_0010FA70 != NULL) {
        M2C_FIELD(D_0010FA70, s32 *, 8) = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000502B0);

void func_000503E0(void) {
    func_000502B0(1, 0xFFFF);
}

void func_00050400(void) {
    func_000502B0(0, 0xFFFF);
}

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050420);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050510);
#endif

void func_0005059C(struct Unk_func_0005059C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000505AC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000672A0);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000505EC);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000506E0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00067380);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00067380(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00067390);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000691E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000673D0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00067424);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006751C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00069358);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00067590_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006762C);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050764);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050844);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000509A0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050A30);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006970C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006793C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050A84);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050B3C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050C88);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050D54);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050DE8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050EC8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050F04);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050F60);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00050FE0);

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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000510D4);
#else
void func_000510D4(struct Unk_func_000510D4_0 *arg0) {
    arg0->unk0 = &D_000D7E70;
    scePaf_1B043852((u8 *)arg0 + 0x28);
    sceKernelDeleteSema(arg0->unk24);
    func_00051184((s32) ((u8 *)arg0 + 0x14));
    func_00051184((s32) ((u8 *)arg0 + 8));
    scePaf_E977B833((s32) arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051128);
#else
void func_00051128(struct Unk_func_00051128_0 *arg0) {
    arg0->unk0 = &D_000D7E70;
    scePaf_1B043852((u8 *)arg0 + 0x28);
    sceKernelDeleteSema(arg0->unk24);
    func_00051184((s32) ((u8 *)arg0 + 0x14));
    func_00051184((s32) ((u8 *)arg0 + 8));
    scePaf_E977B833((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051184);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7CA0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7CA4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7CA8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7D08);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7D38);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7D40);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7DC0);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7E50);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7E5C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7E70);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E1C4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00068010);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000511DC);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000512A8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0004E3A0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000681A8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000513B8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051570);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000515A4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000515B0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000515BC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000515C8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000515D4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051794);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000517D8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7EDC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7EE0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7EE4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7EE8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7EEC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7EF0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7EF4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7EF8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7EFC);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7940);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6068);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D4480);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2550);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F0790);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2510);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104D30);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7F00);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000517FC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051894);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051A70);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051AA8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051AE8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051B20);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051B94);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00051BF8);

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

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7F58);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7F68);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7F74);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D79C0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D60E8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D4500);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F25D0);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F0810);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2590);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00104DB0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7F80);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_87516C3B);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_84485F54);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_715E8DAB);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000523E0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000524CC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D35B454A);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_4DB0D5D4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_8AB03D91);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A89157EE);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_5045C01F);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_BDC894D8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_72514A05);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00052A78);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_50FFFCD2);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A88CBB4C);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00069C78);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00052F88);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_47E35A50);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_41A7BDD2);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00053194);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006BE50);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00053224);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D587826C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_61B105C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_B6841F37);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000534E0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_3A4934E3);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_0AEDCDA1);

void scePaf_58BFC2AC(struct Unk_scePaf_58BFC2AC_0 *arg0, struct Unk_scePaf_58BFC2AC_1 *arg1) {
    arg0->unk230 = (s32) arg1->unk0;
    arg0->unk234 = (s32) arg1->unk4;
    arg0->unk238 = (s32) arg1->unk8;
    arg0->unk23C = (s32) arg1->unkC;
    func_00054270((s32) arg0, 1);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_0C66B594);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_206C1F70);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000539F8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_9563887D);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00053B60);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_21B885B8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00053FF8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054270);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054334);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_39F89900);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_1F0B8678);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_5DB527D4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_25391E36);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054964);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000549FC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054A94);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054B30);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054BCC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054C28);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054CC4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054D58);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054DA0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00054E40);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_927854C5);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D02C0D2E);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_222526B6);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_33096E46);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_EF52945B);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_3F52824F);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_672036FE);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_1C286704);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_2E6CA751);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_01A35C15);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_B42D784E);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_470ABD60);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_08A02EFF);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_29DC646F);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_4FCA0DE9);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_2A6499A5);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D07AF3FA);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_BAFF6806);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_FCF42D6D);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_AA978F61);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_E796C85B);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_CFF2B69C);

s32 scePaf_4EA868E6(struct Unk_scePaf_4EA868E6_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_scePaf_4EA868E6_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk1E8;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk74(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_DB230BE1);

s32 scePaf_C2E4423A(struct Unk_scePaf_C2E4423A_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_scePaf_C2E4423A_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk1E8;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk7C(temp_v1);
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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005597C);

s32 func_00055A8C(struct Unk_func_00055A8C_0 *arg0) {
    return arg0->unk1D4;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055A94);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055B4C);

void func_00055B6C(s32 arg0) {
    scePaf_D24E4016(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055B88);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055BA4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055BC0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055C04);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055C44);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055C80);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055CC0);

void func_00055CE4(struct Unk_vt_func_00055CE4_arg0 **arg0) {
    (*arg0)->unk10();
}

void func_00055D08(struct Unk_vt_func_00055D08_arg0 **arg0) {
    (*arg0)->unk14();
}

void func_00055D2C(struct Unk_vt_func_00055D2C_arg0 **arg0) {
    (*arg0)->unk18();
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055D50);

void func_00055D74(struct Unk_vt_func_00055D74_arg0 **arg0) {
    (*arg0)->unk20();
}

void func_00055D98(struct Unk_vt_func_00055D98_arg0 **arg0) {
    (*arg0)->unk24();
}

void func_00055DBC(struct Unk_vt_func_00055DBC_arg0 **arg0) {
    (*arg0)->unk28();
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055DE0);

void func_00055DFC(s32 arg0) {
    scePaf_ED89C94B(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055E18);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055E34);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055E50);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055E90);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055ED0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00055F10);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_CDC81771);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F1649F5B);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006CDC0);
#endif

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_8BA04801);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_93A60B78);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_AEE1CBAD);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_19A779E2);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000564BC);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005652C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000565C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056654);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000566A8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8000);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D80D8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8168);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8174);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8188);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8258);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8264);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056764);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056A48);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056BD8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056C30);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056C88);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_4FF65BDC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056D1C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056D38);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056EE8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00056FC8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057048);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000570B0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000571F4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057324);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057360);

void func_000573C8(struct Unk_func_000573C8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000573D8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057418);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057484);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057510);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005758C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057618);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000576B4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057818);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000578B0);

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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A0A25707);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006E704);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_7B099943);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006E884);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006E92C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006E9D4);
#else
s32 scePaf_CAE6374A(void) {
    return D_000E122C;
}
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D82AC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D82C0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D82D0);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001051B8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_16033F84);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006F4B8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006F568);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_CB7CCB28);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_0A189A1A);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00071604);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007175C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000718A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006F70C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001051FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D4970);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105208);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105228);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F29EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2A00);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_0010522C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2A08);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105230);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2A10);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2A14);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_E5BAC873);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D7E80);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D65A8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D49C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2A48);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_38876947);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006F864);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006F998);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F6AB6655);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_C6CF9352);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007003C);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070054);
#endif

#if FW_VERSION == 260
void func_00070054(void *arg0) {
    void **temp_v0;

    temp_v0 = M2C_FIELD(arg0, void ***, 0x3CC);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0xBC)(temp_v0, 0, 0);
    } else {
        func_000706E4((s32) arg0, 1);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00070054(void *arg0) {
    void **temp_v0;

    temp_v0 = M2C_FIELD(arg0, void ***, 0x3CC);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0xB8)(temp_v0, 0, 0);
    } else {
        func_000706E4((s32) arg0, 1);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007009C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000700F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2A48);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F0D70);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2A5C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2A7C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105268);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000701D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070260);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00070260(s32 arg0) {
    func_0007028C(arg0);
    scePaf_47E35A50(arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007028C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00072318);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000706DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000568CC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00072358);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000723BC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00072494);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007249C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000724A4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000724E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000703AC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000705E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000705E0(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x330) != 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x35C);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000705F8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000706E4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000708DC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000709CC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000709EC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070A18);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070A44);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070AB4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070AD4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070AF4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070B14);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070B34);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070B54);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070BAC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070BD8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070C04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070C30);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00070C30(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_0010EF10 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070C5C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00070C5C(void) {
    return D_0010EF10;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_CAE6374A);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 scePaf_CAE6374A(void) {
    return D_0010EF10;
}
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D83A0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D83AC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D83B0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D83B8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D83C0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D83C4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000579BC);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_E6C072E4);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00070D2C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057B5C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057BA0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057BE4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057C30);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057D80);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007101C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057738);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057780);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007136C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00057DDC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005816C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000581C0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058228);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058280);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000582CC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058318);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058354);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005854C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058744);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058938);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058B30);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058D14);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00058FCC);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_66B35152);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000721B4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D2463C79);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059350);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_58CAE908);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_9DD9CA07);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059600);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005976C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059AB4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000590D4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059310);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000594C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000596F4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00072B0C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00072D04);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00072EFC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059BE0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059E1C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059FCC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A200);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A2DC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A55C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A5EC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059B44);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00059C44);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00073310);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007334C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A650);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A750);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A8BC);

void func_0005A954(void) {
    func_0005A8BC(1, 0xFFFF);
}

void func_0005A974(struct Unk_func_0005A974_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00073454);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00073494);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00073494(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A984);

#if FW_VERSION == 282
void func_0005A9E8(struct Unk_func_0005A9E8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005A9F8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005AA38);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005AA8C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005AB20);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005AB94);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005ABD4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005AC54);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005AD94);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005AE7C);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005AFB0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005B034);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005B0B8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005B154);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005B1F0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8450);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8520);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00073CE8);
#else
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D852C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005B294);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_DF9138A8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_78054045);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_95DA7A68);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00074654);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00074754);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00074754(void *arg0) {
    s32 var_a1;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = 3;
    do {
        var_a1 -= 1;
        M2C_FIELD(var_a0, s32 *, 0x338) = (s32) M2C_FIELD(M2C_FIELD(var_a0, void **, 0x390), s32 *, 0x344);
        var_a0 += 4;
    } while (var_a1 >= 0);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005BB18);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005BBEC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005BC9C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005BCDC);
#else
void func_0005BCDC(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_s1;
    void *var_s0;

    var_s1 = 3;
    var_s0 = arg0;
    do {
        temp_a0 = M2C_FIELD(var_s0, s32 *, 0x390);
        temp_a1 = M2C_FIELD(var_s0, s32 *, 0x338);
        var_s1 -= 1;
        var_s0 += 4;
        scePaf_C2C25056(temp_a0, temp_a1);
    } while (var_s1 >= 0);
}
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8540);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8548);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D854C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8550);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8554);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8558);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D855C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8560);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8564);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8568);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D856C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000747C0);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005BDA4);
#endif

s32 func_0005BF74(struct Unk_func_0005BF74_0 *arg0) {
    return arg0->unk330 == 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005BF80);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C1A8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C234);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C260);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00074BF8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00074CF0);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C28C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C2E4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C33C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C368);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C394);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C3C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C3EC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C460);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C4D4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C55C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C5C8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007502C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8144);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105508);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8228);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D686C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105508);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6950);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D4C84);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105508);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D4D68);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2D1C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105508);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2DF8);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F0F5C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105508);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F1038);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2CDC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105508);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2DB8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001054F4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105508);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001055D0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000750DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000750DC(void) {
    func_0007502C(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000750FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000750FC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_0010EF18 != arg1) {
        var_v0 = func_00067C4C(arg0, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075128);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00075128(void) {
    return D_0010EF18;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_ED3E4EB1);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075140);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075180);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000751C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000751FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000772EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075238_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007527C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000756E4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075778);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075880);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075988);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075A8C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075B94);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075C8C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075D84);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00075E44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005CA88);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00076094);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105610);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8330);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6A58);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D4E70);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2F08);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F1148);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F2EC8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001056E0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8678);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007610C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0007610C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00076548);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007611C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00076214);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0007838C(s32 arg0, s32 arg1, s32 arg2) {
    func_00068EE0(arg0, arg1, arg2 & 0xFF);
}
#endif

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C638);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000763DC);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D2E0D705);
#endif

void func_0005C768(M2C_UNK **arg0) {
    *arg0 = &D_000D8678;
    scePaf_715E8DAB((s32) arg0);
}

void func_0005C790(M2C_UNK **arg0) {
    *arg0 = &D_000D8678;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005CFC8);
#endif

#if FW_VERSION == 260
void func_0005CFC8(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) = arg1;
}
#endif

#if FW_VERSION == 282
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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C854);

void scePaf_BFFAEE83(struct Unk_scePaf_BFFAEE83_0 *arg0) {
    scePaf_14CE7F6F(arg0->unk1E8->unk20);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_9AFD4AD4);

void func_0005C894(struct Unk_func_0005C894_0 *arg0) {
    func_0004C754(arg0->unk1E8->unk20);
}

void scePaf_7116224C(struct Unk_scePaf_7116224C_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk20->unk194 = arg1;
}

void func_0005C8C4(struct Unk_func_0005C8C4_0 *arg0, s32 arg1, s32 arg2) {
    func_0004A76C(arg0->unk1E8->unk20, arg1, arg2 & 0xFF);
}
#endif

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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007656C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D2E0D705);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007677C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0007677C(M2C_UNK **arg0) {
    *arg0 = &D_001057D8;
    scePaf_715E8DAB((s32) arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000767A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000767A4(M2C_UNK **arg0) {
    *arg0 = &D_001057D8;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000767DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000767DC(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), void **, 0x1C), s32 *, 0x148);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000767EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000767EC(void *arg0) {
    func_0004A6D8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x1C));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_6E1B5B50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_6E1B5B50(struct Unk_scePaf_6E1B5B50_0 *arg0) {
    func_0004BF08(M2C_FIELD(arg0->unk1E8, s32 *, 0x1C));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D2D8);
#endif

#if FW_VERSION == 260
void func_0005D2D8(void *arg0, s32 arg1) {
    func_00048B34(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x1C), arg1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007682C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_BFFAEE83);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_BFFAEE83(struct Unk_scePaf_BFFAEE83_0 *arg0) {
    scePaf_14CE7F6F(M2C_FIELD(arg0->unk1E8, s32 *, 0x1C));
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_9AFD4AD4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00078940(void *arg0, s32 arg1) {
    func_00065238(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x1C), arg1);
}

void scePaf_7116224C(struct Unk_scePaf_7116224C_0 *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0->unk1E8, void **, 0x1C), s32 *, 0x194) = arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D368);
#endif

#if FW_VERSION == 260
void func_0005D368(void *arg0, s32 arg1, s32 arg2) {
    func_000474A8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x1C), arg1, arg2 & 0xFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007686C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0007686C(void *arg0, s32 arg1) {
    func_0008B798(M2C_FIELD(arg0, s32 *, 0x1E8), arg1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00076888);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00076888(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_0010EF24 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000768B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000768B4(void) {
    return D_0010EF24;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000768C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000768C0(void) {
    return D_0010EF24;
}
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8580);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8590);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8660);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001057D8);
#else
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8678);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D874C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D504C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D5068);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D5084);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D50A0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D857C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6CA4);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D50BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F3094);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F30B0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F30CC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F30E8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F3104);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001058AC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001058C8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_001058E4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105900);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_0010591C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8754);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8774);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8794);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D87B4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D87D4);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D87F4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005C92C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005CBB4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005CE3C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005CFB4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D12C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D2AC);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_CD3A094C);
#endif

#if FW_VERSION == 260
s32 scePaf_CD3A094C(struct Unk_func_0005D398_0 *arg0, struct Unk_func_0005D398_1 *arg1) {
    if (((u32) (arg1->unk8 - 1) >= 2U) || (arg0->unk331 != 0)) {
        scePaf_360956CC(arg0, arg1);
    }
    arg0->unk331 = 0;
    return 0;
}
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
s32 func_0005D398(struct Unk_func_0005D398_0 *arg0, struct Unk_func_0005D398_1 *arg1) {
    if (((u32) (arg1->unk8 - 1) >= 2U) || (arg0->unk331 != 0)) {
        scePaf_360956CC(arg0, arg1);
    }
    arg0->unk331 = 0U;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005DEAC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005DF68);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_75F11CEB);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00077374);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000774F4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D3E4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D4A0);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D560);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000776C8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_201F42F6);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D5BC);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D81C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00079AB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00077930);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D8B4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D980);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F06D84E9);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_86D5A2F6);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00077A00);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005D9E4);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005DA30);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005E4EC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005E7C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005EA94);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005ED68);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005F03C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00077A78);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00077D2C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00077FE0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00078290);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00078544);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007AA1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00078838_v100);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005DA6C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005DD40);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005E014);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005E2E8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005E5BC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005EC2C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A76B9604);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_5075C799);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007AF38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00078D54);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005F20C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005F2A4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005F498);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A72594EF);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_7B6F0E32);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A72594EF);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_7B6F0E32);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00060190);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_86926BB9);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0005F800);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F88ABAE1);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_522A877E);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_BEF0151C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000600A4);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_E1C76B22);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_44EB8C62);
#endif

#if FW_VERSION >= 260
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

#if FW_VERSION >= 150 && FW_VERSION < 201
void scePaf_44EB8C62(struct Unk_scePaf_44EB8C62_0 *arg0) {
    s32 temp_a1;
    s32 var_s0;

    var_s0 = arg0->unk348;
    if (arg0->unk34C < var_s0) {

    } else {
        do {
            temp_a1 = var_s0;
            var_s0 += 1;
            M2C_FIELD(arg0->unk0, M2C_UNK (**)(struct Unk_scePaf_44EB8C62_0 *, s32), 0xCC)(arg0, temp_a1);
        } while (arg0->unk34C >= var_s0);
    }
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007B794);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007B9EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007BAB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00060EB0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007BC60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000796DC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000798A0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00060358);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00060508);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000607D4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061240);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007BE88);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007C004);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006089C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000609D0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00060BA0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00060D24);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00079EC8);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00060FD4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000610A4);

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061A60);
#endif

#if FW_VERSION == 260
void func_00061A60(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061A70);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061AD4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007A8A8_v152);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007A8A8_v151);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00079FE0);
#endif

#if FW_VERSION == 282
void func_000610F4(struct Unk_func_000610F4_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061104);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061168);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006129C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000612F0);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007C764);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007C7D8);
#endif

#if FW_VERSION == 260
void func_0007C7D8(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00040A80((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0007C7D8(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00076214((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061D18);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061E08);
#endif

#if FW_VERSION == 282
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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000613AC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006149C);
#endif

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_4ADAEF94);

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D153385E);

void scePaf_86A5AE7D(struct Unk_scePaf_86A5AE7D_0 *arg0) {
    func_00074EA4(arg0->unk1E8);
}

void scePaf_5A8D4BDB(struct Unk_scePaf_5A8D4BDB_0 *arg0) {
    func_00074ED8(arg0->unk1E8);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_2120282A);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_8159EB28);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_5CE11C03);

void scePaf_05073826(struct Unk_scePaf_05073826_0 *arg0) {
    func_00074EF8(arg0->unk1E8);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A4B48F00);

void scePaf_224C33F0(struct Unk_scePaf_224C33F0_0 *arg0) {
    func_00074F08(arg0->unk1E8);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_3DBE861F);

void scePaf_FA78AF39(struct Unk_scePaf_FA78AF39_0 *arg0) {
    func_00074F18(arg0->unk1E8);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A3761F27);

void scePaf_DE75C2BA(struct Unk_scePaf_DE75C2BA_0 *arg0) {
    func_00074F2C(arg0->unk1E8);
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_4129A915);

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

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006381C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006393C);
#endif

#if FW_VERSION == 260
void func_0006393C(M2C_UNK **arg0) {
    *arg0 = &D_000D6F38;
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_677F1705);
#endif

#if FW_VERSION == 260
s32 scePaf_677F1705(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1240 != arg1) {
        var_v0 = func_00076888(arg0, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_7C2DB482);
#endif

#if FW_VERSION == 260
s32 scePaf_7C2DB482(void) {
    return D_000E1240;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061978);

void func_00061A98(M2C_UNK **arg0) {
    *arg0 = &D_000D8A68;
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061AC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_00061AC0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1240 != arg1) {
        var_v0 = func_00076888(arg0, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
s32 func_00061AC0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1240 != arg1) {
        var_v0 = func_0005C8E8(arg0, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
s32 func_00061AEC(void) {
    return D_000E1240;
}
#endif

s32 scePaf_7C31F453(void) {
    return D_000E1240;
}

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8884);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8898);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8970);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E48);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6E50);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8978);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8980);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8990);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F38);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8A68);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8A74);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D6F50);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_DDAF43EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000F3360);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105B70);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8A80);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061B04);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007A8A8);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F60816FE);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_02F6DB7E);
#endif

#if FW_VERSION == 260
void scePaf_02F6DB7E(M2C_UNK **arg0) {
    *arg0 = &D_000D8BF8;
    func_0005CE3C((s32) arg0);
}
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
void func_00061EF4(M2C_UNK **arg0) {
    *arg0 = &D_000D8BF8;
    func_0005CE3C((s32) arg0);
}
#endif

void func_00061F1C(M2C_UNK **arg0) {
    *arg0 = &D_000D8BF8;
    func_0005CE3C((s32) arg0);
}

void func_00061F44(M2C_UNK **arg0) {
    *arg0 = &D_000D8BF8;
    func_0005CE3C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_C6DF54AD);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_3C4AA878);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_7BC88D19);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A0100F5B);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_020A7084);
#endif

#if FW_VERSION == 260
s32 scePaf_020A7084(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 var_v0;

    temp_a4 = arg2 & 0xFF;
    if (arg1 != 0x33) {
        var_v0 = func_00079AB0(arg0, arg1, temp_a4);
    } else {
        M2C_FIELD(arg0, s8 *, 0x6C8) = (s8) temp_a4;
        func_0007EA14(arg0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_829C3411);
#endif

#if FW_VERSION == 260
s32 scePaf_829C3411(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_scePaf_86B41BA3_0 *temp_v0;

    func_00079AB0(arg0, arg1, arg2);
    switch (arg1) {                                 /* irregular */
    case 49:
        temp_v0 = M2C_FIELD(arg0, struct Unk_scePaf_86B41BA3_0 **, 0x700);
        M2C_FIELD(temp_v0, s8 *, 0x1FD) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1FE) = 0;
        scePaf_86B41BA3(temp_v0);
        break;
    case 14:
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(s32, M2C_UNK, M2C_UNK, s32), 0x80)(arg0, 0xA, 0xE, arg2 & ~0xF0);
        func_00063994(arg0);
        break;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_F59525B2);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_7CEC4010);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_4ACED608);
#endif

#if FW_VERSION == 260
void scePaf_4ACED608(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_0005E7C0(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x70)(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_BAEAB61A);
#endif

#if FW_VERSION == 260
void scePaf_BAEAB61A(s32 arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_0005EA94(arg0, arg1, arg2);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32), 0x74)(temp_v0, arg2);
    }
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_8ECB2367);
#endif

#if FW_VERSION == 260
void scePaf_8ECB2367(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_0005ED68(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x78)(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_C3AD96FE);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D44604DD);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_DF92BA98);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_256DE321);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_A37BC366);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00061F7C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007AD30);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062134);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062364);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007D664);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007D970);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0007D970(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 var_v0;

    temp_a4 = arg2 & 0xFF;
    if (arg1 != 0x32) {
        var_v0 = func_00079AB0(arg0, arg1, temp_a4);
    } else {
        M2C_FIELD(arg0, s8 *, 0x6C8) = (s8) temp_a4;
        func_0007EA14(arg0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007AF10);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062488);

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
#endif

#if FW_VERSION == 100 || FW_VERSION == 201 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000627A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000627A0(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_scePaf_86B41BA3_0 *temp_v0;

    func_00079AB0(arg0, arg1, arg2);
    switch (arg1) {                                 /* irregular */
    case 48:
        temp_v0 = M2C_FIELD(arg0, struct Unk_scePaf_86B41BA3_0 **, 0x700);
        M2C_FIELD(temp_v0, s8 *, 0x1FE) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1FF) = 0;
        scePaf_86B41BA3(temp_v0);
        break;
    case 14:
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(s32, M2C_UNK, M2C_UNK, s32), 0x7C)(arg0, 0xA, 0xE, arg2 & ~0xF0);
        func_00063994(arg0);
        break;
    }
    return 0;
}
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062840);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000628D8);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062914);
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062968);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00062968(struct Unk_func_00062968_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_00077D2C((s32) arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = arg0->unk700;
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x6C)(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION == 282
void func_00062968(struct Unk_func_00062968_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct Unk_vt_func_00062968_temp_v0 **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_0005DD40(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = arg0->unk700;
        (*temp_v0)->unk70(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000629B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000629B4(struct Unk_func_000629B4_0 *arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_00077FE0((s32) arg0, arg1, arg2);
    } else {
        temp_v0 = arg0->unk700;
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32), 0x70)(temp_v0, arg2);
    }
}
#endif

#if FW_VERSION == 282
void func_000629B4(struct Unk_func_000629B4_0 *arg0, s32 arg1, s32 arg2) {
    struct Unk_vt_func_000629B4_temp_v0 **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_0005E014(arg0, arg1, arg2);
    } else {
        temp_v0 = arg0->unk700;
        (*temp_v0)->unk74(temp_v0, arg2);
    }
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000629FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000629FC(struct Unk_func_000629FC_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_00078290((s32) arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = arg0->unk700;
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x74)(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION == 282
void func_000629FC(struct Unk_func_000629FC_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct Unk_vt_func_000629FC_temp_v0 **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_0005E2E8(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = arg0->unk700;
        (*temp_v0)->unk78(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062A48);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062A90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007DCAC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007DD7C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007DE30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007B2BC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007B364);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007B410);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062AD8);

s32 scePaf_6141934B(struct Unk_scePaf_6141934B_0 *arg0, s32 arg1) {
    s32 var_v0;

    if ((arg1 & 0xFFFF) != 8) {
        var_v0 = func_0005F20C(arg0, arg1);
    } else {
        var_v0 = arg0->unk700;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062BD8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062C8C);

s32 scePaf_5A99AE67(s32 arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_A72594EF();
    if (temp_v0 >= 0) {
        scePaf_EAA5AFF6(arg0, 0x0100000C);
    }
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00062F70);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D5F5E68F);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007E298);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_B6DD6FC6);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007E6D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00063D34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007E764);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007E844);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007B6E8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007BA0C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007BACC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007BBD4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000632C8);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000636C0);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00063750);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00063850);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00063994);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007EA14);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007EC3C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00065D4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007EE64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007BD40);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00063A1C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00063C64);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00063E8C);

void func_00063FE4(void) {
    func_0005D9E4();
}
#endif

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

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064044);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_D1159069);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006420C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000642C4);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006437C);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8BE8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8BF8);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_00105D50);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CD0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CD4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CD8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CDC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CE0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CE4);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CE8);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CEC);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CF0);

INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CF4);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0346A8", D_000D8CF8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0006443C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064AA4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007CAD0);
#else
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064B74);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064BBC);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064CF0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064D3C);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064E20);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00064F08);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000650BC);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_000651A4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_0007D0C8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_AE02F241);

INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_95040C08);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_07BA4C80);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_0346A8", scePaf_252F37A3);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0346A8", func_00065908);
