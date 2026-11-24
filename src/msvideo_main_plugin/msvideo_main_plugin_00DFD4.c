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

s32 func_0000E028(void *arg0) {
    s32 var_a1;

    var_a1 = 1;
    if (D_000B6020 != 0) {
        if (D_000B6020 == M2C_FIELD(arg0, s32 *, 0x34)) {
            var_a1 = 0;
        }
    } else {
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E054);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E238);

void func_0000E2B0(void) {
    func_0002B68C(1);
    func_0000E2D4(0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E2D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E354);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E394);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E454);

void func_0000E4E0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_v0 == 0) {

    } else {
        func_00020340(temp_v0);
    }
}

void func_0000E510(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_v0 == 0) {

    } else {
        func_00020464(temp_v0);
    }
}

void func_0000E540(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_v0 == 0) {

    } else {
        func_000205F8(temp_v0);
    }
}

void func_0000E570(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x68);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x350) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x354) = arg2;
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E58C);

void func_0000E5F4(void) {
    func_0000E58C(1, 0xFFFF);
}

void func_0000E614(void) {
    func_0000E58C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E634);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E6AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E6F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E734);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E770);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E7AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E7FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E8AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E930);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000E9E0);

s32 func_0000EA50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000EA58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000EAF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000EB7C);

s32 func_0000ECC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

void func_0000ECCC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000ECDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000ED1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000ED70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000EDF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000EEEC);

s32 func_0000EFB8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000EFC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000F1C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000F44C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000F4C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000F54C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000F770);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000F82C);

void func_0000FA60(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000FA70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000FAB0);

void func_0000FB2C(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000FB70((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000FB70);

void func_0000FC38(M2C_UNK **arg0) {
    *arg0 = &D_000AF3E8;
}

void func_0000FC48(M2C_UNK **arg0) {
    *arg0 = &D_000AF3E8;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000FC70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000FCA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000FCD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000FDA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000FE68);

s32 func_0000FF38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0000FF40(void) {
    return D_000B60E0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000FF4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0000FF7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_00010040);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_00010110);

void func_000101F4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_00010204);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_00010244);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_00010298);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_0001030C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00DFD4", func_000103F8);

