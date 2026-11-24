#include "common.h"
#include "paf_decls.h"

s32 *func_000B8224(s32 **arg0, s32 arg1) {
    s32 **var_a2;
    s32 *temp_s1;

    temp_s1 = func_000B81E8(arg0, arg1);
    var_a2 = arg0;
    if (arg1 != 0) {
        var_a2 = func_000B81E8(arg0, arg1 - 1);
    }
    *var_a2 = (s32 *) *temp_s1;
    if (M2C_FIELD(arg0, s32 ***, 4) == temp_s1) {
        M2C_FIELD(arg0, s32 ***, 4) = var_a2;
    }
    return temp_s1;
}

void scePaf_C4BAD564(s32 arg0) {
    sceKernelDelayThread(arg0 * 0x3E8);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198760);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198768);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198774);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_0019877C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", scePaf_BAE16A39);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", scePaf_41F702EA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", scePaf_D27DE19A);

void scePaf_2CFAE498(s32 arg0) {
    func_0000C480((s32) &D_001A5244, arg0);
}

void scePaf_58846DF3(s32 arg0) {
    func_0000C480((s32) &D_001A5250, arg0);
}

void scePaf_E357380E(s32 arg0) {
    func_0000C480((s32) &D_001A525C, arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B86EC);

void func_000B8790(void) {
    func_000B86EC(1, 0xFFFF);
}

void func_000B87B0(void) {
    func_000B86EC(0, 0xFFFF);
}

s32 func_000B87D0(void) {
    sceCtrlReadBufferPositive(&D_001A52C4, 1);
    return D_001A52C4.unk4;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B8804);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B882C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B8888);

s32 func_000B8C4C(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", scePaf_78F94D84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", scePaf_5822F12A);

void scePaf_FD9DE7B9(s32 arg0) {
    D_001A3CC0 = arg0 * arg0;
    scePaf_5822F12A();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", scePaf_E618F7A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", scePaf_AD43F865);

s32 scePaf_EA39A7C1(void) {
    return D_001A52C0;
}

void scePaf_6B1E90C7(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52BC += 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_66907719(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52BC -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", scePaf_D5F3BAB1);

void scePaf_AAD0EE78(s32 arg0) {
    D_001A5270 = arg0;
}

void scePaf_E69C3B1B(s32 arg0) {
    D_001A5274 = arg0;
}

void scePaf_17BC4F41(s32 arg0) {
    D_001A5278 = arg0;
}

void scePaf_C2911954(s32 arg0) {
    D_001A527C = arg0;
}

s32 scePaf_872F948B(void) {
    return D_001A5280;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B8EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B8F38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B8F94);

s32 func_000B9280(void) {
    return 1;
}

void scePaf_A044BFC0(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52FC += 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_F1CF9579(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52FC -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_D726F4A2(s32 arg0) {
    D_001A52D4 = arg0;
}

s32 scePaf_132148FD(void) {
    return D_001A52DC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", scePaf_533F3856);

void scePaf_139D9047(s32 arg0) {
    D_001A5300 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", scePaf_8D3B3587);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B95A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B966C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B9748);

void func_000B97D0(struct Unk_func_000B97D0_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a2;
    struct Unk_func_000B97D0_temp_v1 *temp_v1;

    var_a2 = arg0->unk4;
    temp_v0 = arg0->unk8;
    if (temp_v0 < (var_a2 + 1)) {
        func_000B9864((s32) arg0, temp_v0 + 0xA);
        var_a2 = arg0->unk4;
    }
    temp_v1 = arg0->unk0 + (var_a2 * 0xC);
    if (temp_v1 != NULL) {
        temp_v1->unk0 = &D_001ABCF0;
        temp_v1->unk4 = 0;
        func_00002AE4((s32) temp_v1, arg1);
        var_a2 = arg0->unk4;
    }
    arg0->unk4 = (s32) (var_a2 + 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B9864);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", sceFontNewLib);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", sceFontDoneLib);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B9DEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B9E4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B9F28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198920);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_0019893C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198950);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198964);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198978);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_0019898C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_001989A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_001989B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_001989C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_001989CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_001989E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_001989F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A30);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198A9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198AAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198ABC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198AC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198AD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198AD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198AE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198AF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198B00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198B10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198B1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198B28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198B3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198B48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198B64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198B70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198B84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198B98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198BAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198BC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_0B8224", D_00198BD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000B9F48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BA2F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BA6DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", sceFontOpenUserFile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BA850);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BA8BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BA90C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BA974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", sceFontClose);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", sceFontGetFontInfo);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", sceFontGetCharInfo);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BAF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", sceFontGetCharGlyphImage);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BB4AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BBAAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BBB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BBBC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BBBF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BBC2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BBC4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BBC7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BBF44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BC0D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BC1E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BC2C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BC3E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BC4F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BC538);

s32 func_000BC724(struct Unk_func_000BC724_0 *arg0) {
    s32 temp_v0;
    struct Unk_func_000BC724_temp_v1 *temp_v1;
    struct Unk_func_000BC724_temp_v1_2 *temp_v1_2;

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

s32 func_000BC7A0(struct Unk_func_000BC7A0_0 *arg0) {
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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BC804);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BC858);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BC8DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BCE0C);

s32 func_000BCF98(struct Unk_func_000BCF98_0 *arg0, struct Unk_func_000BCF98_1 *arg1) {
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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BCFE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BD24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BD504);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_0B8224", func_000BD7C0);

