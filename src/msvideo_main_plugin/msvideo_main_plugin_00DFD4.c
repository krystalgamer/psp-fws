#include "common.h"
#include "msvideo_main_plugin_decls.h"

void func_0000DFD4(s32 arg0) {
    void *sp0;
    sceNetApctlGetState(&sp0);
    if (sp0 == 0) {

    } else {
        D_000B60AC = 1;
        func_0002D754((s32) &func_0000A214, arg0);
    }
}

s32 func_0000E028(struct Unk_func_0000E028_0 *arg0) {
    s32 var_a1;

    var_a1 = 1;
    if (D_000B6020 != 0) {
        if (D_000B6020 == arg0->unk34) {
            var_a1 = 0;
        }
    } else {
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E054);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AF330);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE6D0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE6E4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE700);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E238);

void func_0000E2B0(void) {
    func_0002B68C(1);
    func_0000E2D4(0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E2D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E354);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E394);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E454);

void func_0000E4E0(struct Unk_func_0000E4E0_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk68;
    if (temp_v0 == 0) {

    } else {
        func_00020340(temp_v0);
    }
}

void func_0000E510(struct Unk_func_0000E510_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk68;
    if (temp_v0 == 0) {

    } else {
        func_00020464(temp_v0);
    }
}

void func_0000E540(struct Unk_func_0000E540_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk68;
    if (temp_v0 == 0) {

    } else {
        func_000205F8(temp_v0);
    }
}

void func_0000E570(struct Unk_func_0000E570_0 *arg0, s32 arg1, s32 arg2) {
    struct Unk_func_0000E570_temp_v0 *temp_v0;

    temp_v0 = arg0->unk68;
    if (temp_v0 != NULL) {
        temp_v0->unk350 = arg1;
        temp_v0->unk354 = arg2;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E58C);

void func_0000E5F4(void) {
    func_0000E58C(1, 0xFFFF);
}

void func_0000E614(void) {
    func_0000E58C(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E634);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E6AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E6F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E734);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E770);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E7AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E7FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E8AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E930);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000E9E0);

s32 func_0000EA50(struct Unk_func_0000EA50_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000EA58);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00010368);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000EB7C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AF3B8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AFB20);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AFB34);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AFB50);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AFB94);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AFBB8_v310);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AFBD0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AF3E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AFBF0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AFC04_v310);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AFC1C);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000EAF0);
#endif

#if FW_VERSION != 310
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000EB7C);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AF3B8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE778);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE78C);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE7A8_v303);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE7EC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE810);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE828);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AF3E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE848_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE7A8_v302);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE7EC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE810);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE828);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AF3E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE848_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE7A8_v301);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE7EC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE810);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE828);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AF3E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE848_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE7A8_v300);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE7EC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE810);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE828);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AF3E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE848_v300);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE85C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE874);
#endif

s32 func_0000ECC4(struct Unk_func_0000ECC4_0 *arg0) {
    return arg0->unk18;
}

void func_0000ECCC(struct Unk_func_0000ECCC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000ECDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000ED1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000ED70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000EDF4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000EEEC);

s32 func_0000EFB8(void) {
    return 0;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_000108D8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00010B28);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000EFC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000F1C8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000F44C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000F4C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000F54C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000F770);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000F82C);

void func_0000FA60(struct Unk_func_0000FA60_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FA70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FAB0);

void func_0000FB2C(struct Unk_func_0000FB2C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000FB70((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FB70);

void func_0000FC38(M2C_UNK **arg0) {
    *arg0 = &D_000AF3E8;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FC48);
#else
void func_0000FC48(M2C_UNK **arg0) {
    *arg0 = &D_000AF3E8;
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FC70);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FCA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FCD8);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00011770);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00011878);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FDA0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FE68);
#endif

s32 func_0000FF38(struct Unk_func_0000FF38_0 *arg0) {
    return arg0->unkC;
}

s32 func_0000FF40(void) {
    return D_000B60E0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FF4C);

#if FW_VERSION >= 301 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FF7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00011B28);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE8AC);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AFC90);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE8E8_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE8E8_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE8E8_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00DFD4", D_000AE8E8_v300);
#endif

#if FW_VERSION == 300 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0000FF7C);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00011B28);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00011C48);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00010040);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00010110);
#endif

void func_000101F4(struct Unk_func_000101F4_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00010204);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00010244);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_00010298);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_0001030C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00DFD4", func_000103F8);
