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

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198760);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198768);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198774);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0019877C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198784);

INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_BAE16A39);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_41F702EA);
#endif

INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_D27DE19A);

void scePaf_2CFAE498(s32 arg0) {
    func_0000C480((s32) &D_001A5244, arg0);
}

void scePaf_58846DF3(s32 arg0) {
    func_0000C480((s32) &D_001A5250, arg0);
}

void scePaf_E357380E(s32 arg0) {
    func_0000C480((s32) &D_001A525C, arg0);
}

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B86EC);

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

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8804);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B882C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8888);

s32 func_000B8C4C(void) {
    return 1;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_78F94D84);
#endif

#if FW_VERSION >= 151
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_5822F12A);
#else
s32 scePaf_5822F12A(void) {
    s32 temp_v0;

    temp_v0 = sceCtrlSetSamplingMode(1U);
    if (temp_v0 >= 0) {
        D_00138F94 = 1;
    }
    if (D_00138FA0 != 0) {

    } else {
        scePaf_E69C3B1B((s32) &func_000B8804);
    }
    return temp_v0;
}
#endif

void scePaf_FD9DE7B9(s32 arg0) {
    D_001A3CC0 = arg0 * arg0;
    scePaf_5822F12A();
}

INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_E618F7A8);

INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_AD43F865);

s32 scePaf_EA39A7C1(void) {
    return D_001A52C0;
}

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_6B1E90C7);
#endif

#if FW_VERSION == 150 || FW_VERSION == 282
void scePaf_6B1E90C7(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52BC += 1;
    sceKernelResumeDispatchThread(temp_a0);
}
#endif

#if FW_VERSION == 100
void scePaf_6B1E90C7(void) {
    D_001A52BC += 1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_66907719);
#endif

#if FW_VERSION == 150 || FW_VERSION == 282
void scePaf_66907719(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52BC -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}
#endif

#if FW_VERSION == 100
void scePaf_66907719(void) {
    D_001A52BC -= 1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_D5F3BAB1);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_AAD0EE78);
#endif

#if FW_VERSION < 151
void scePaf_AAD0EE78(s32 arg0) {
    D_00138F9C = arg0;
}
#endif

#if FW_VERSION == 282
void scePaf_AAD0EE78(s32 arg0) {
    D_001A5270 = arg0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_E69C3B1B);
#endif

#if FW_VERSION < 151
void scePaf_E69C3B1B(s32 arg0) {
    D_00138FA0 = arg0;
}
#endif

#if FW_VERSION == 282
void scePaf_E69C3B1B(s32 arg0) {
    D_001A5274 = arg0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_17BC4F41);
#endif

#if FW_VERSION == 282
void scePaf_17BC4F41(s32 arg0) {
    D_001A5278 = arg0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_C2911954);
#endif

#if FW_VERSION == 282
void scePaf_C2911954(s32 arg0) {
    D_001A527C = arg0;
}
#endif

s32 scePaf_872F948B(void) {
    return D_001A5280;
}

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8EF0);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8F38);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8F94);

s32 func_000B9280(void) {
    return 1;
}

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_A044BFC0);
#endif

#if FW_VERSION == 150 || FW_VERSION == 282
void scePaf_A044BFC0(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52FC += 1;
    sceKernelResumeDispatchThread(temp_a0);
}
#endif

#if FW_VERSION == 100
void scePaf_A044BFC0(void) {
    D_001A52FC += 1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_F1CF9579);
#endif

#if FW_VERSION == 150 || FW_VERSION == 282
void scePaf_F1CF9579(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52FC -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}
#endif

#if FW_VERSION == 100
void scePaf_F1CF9579(void) {
    D_001A52FC -= 1;
}
#endif

void scePaf_D726F4A2(s32 arg0) {
    D_001A52D4 = arg0;
}

s32 scePaf_132148FD(void) {
    return D_001A52DC;
}

INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_533F3856);

void scePaf_139D9047(s32 arg0) {
    D_001A5300 = arg0;
}

INCLUDE_ASM("nonmatchings/paf_0B8224", scePaf_8D3B3587);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B95A0);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B966C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9748);

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

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9864);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontNewLib);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001963A0);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001963BC);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001963D0);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001963E4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001963F8);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0019640C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00196420);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00192BA0_v260);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00192BB4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C724);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C738);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00192BF0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C6FC);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C710);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C724);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C738);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C74C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontDoneLib);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B98DC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B44A8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B4584);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C760);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0019644C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C764);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00196474);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00192C1C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C778);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C78C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C7B4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001964B0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00192C44);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C7A0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C7B4);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00192C6C_v260);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C7C8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C7DC);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C7E8);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C7F4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C80C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C818);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C824);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C82C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C834);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C844);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C854);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C85C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C868);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C870);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C87C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C88C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C898);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C8A8);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C8B4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C8C0);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C8D4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C8E0);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C8FC);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C908);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C91C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00192DD4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C930);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C944);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C958);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0018C96C);
#endif

#if FW_VERSION == 200 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontDoneLib);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B98DC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B4550);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B462C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B464C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B49A8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B4D9C);

INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontOpenUserFile);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B4F10);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9D70);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9DC0);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9E28);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontClose);

INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontGetFontInfo);

INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontGetCharInfo);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B5374);

INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontGetCharGlyphImage);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B57D8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBAAC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBB38);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBBC4);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBBF8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B5E58);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B5E78);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA660);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BB3F8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA668);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B5EA8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B5F84);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B6040);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BB894);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B615C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B61A0);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B638C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B6408);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B646C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B64C0);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B6544);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B6A10);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B6B9C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B6BEC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B6E50);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B7108);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B73C4);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B790C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B795C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B79AC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B7B2C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8074);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8558);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B88A0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BE3C0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BD340);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8AD4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8C14);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BD5C8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8CD0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B8FFC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9210);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BDBDC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9330);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9694);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9954);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9A4C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9AA8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9B20);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9B58);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9C3C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9ECC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9F40);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198814_v280);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00196684);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA1A8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA1C8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA304);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA34C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA580);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA614);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA74C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA800);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA83C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA964);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000C04D8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000C0508);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000C0570);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000C059C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000C063C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000C06E8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9DEC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9E4C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9F28);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198920);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0019893C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198950);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198964);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198978);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_0019898C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001989A0);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001989B4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001989C8);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001989CC);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001989E0);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_001989F4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A08);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A1C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A30);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A44);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A50);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A5C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A74);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A80);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A8C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A94);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198A9C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198AAC);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198ABC);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198AC4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198AD0);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198AD8);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198AE4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198AF4);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198B00);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198B10);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198B1C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198B28);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198B3C);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198B48);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198B64);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198B70);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198B84);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198B98);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198BAC);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198BC0);

INCLUDE_RODATA("nonmatchings/paf_0B8224", D_00198BD4);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000B9F48);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA2F8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA6DC);

INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontOpenUserFile);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA850);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA8BC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA90C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BA974);

INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontClose);

INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontGetFontInfo);

INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontGetCharInfo);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BAF74);

INCLUDE_ASM("nonmatchings/paf_0B8224", sceFontGetCharGlyphImage);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BB4AC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBAAC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBB38);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBBC4);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBBF8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBC2C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBC4C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBC7C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BBF44);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BC0D0);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BC1E0);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BC2C0);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BC3E0);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BC4F4);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BC538);

s32 func_000BC724(struct Unk_func_000BC724_0 *arg0) {
    s32 temp_v0;
    struct Unk_func_000BC724_temp_v1 *temp_v1;
    struct Unk_func_000BC724_temp_v1_2 *temp_v1_2;

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

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BC804);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BC858);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BC8DC);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BCE0C);

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

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BCFE8);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BD24C);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BD504);

INCLUDE_ASM("nonmatchings/paf_0B8224", func_000BD7C0);
#endif
