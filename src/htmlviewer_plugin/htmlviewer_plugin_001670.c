/* cflags: -Os */
#include "common.h"
#include "htmlviewer_plugin_decls.h"

void func_00001670(void) {
    s32 temp_v0;
    s32 temp_v0_3;
    struct Unk_func_00001670_temp_v0_2 *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00006FA0);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unkA4(1);
            temp_v0_2->unkBC(1);
            temp_v0_2->unkC8(1);
        }
    }
    temp_v0_3 = scePaf_B7E6052B(4);
    scePaf_72A0044D(temp_v0_3, &D_00006FB0, 0, 0);
    D_000080A0 = temp_v0_3;
    if ((sceNetResolverInit() >= 0) && (sceHttpInit(0x25800U) >= 0) && (sceHttpsInit(0, NULL, NULL, NULL) >= 0)) {
        if (sceHttpsLoadDefaultCert(0U, 0U) >= 0) {
            sceHttpLoadSystemCookie();
        }
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001760);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001840);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001890);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000018EC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001A1C);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00001B94);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00002178);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000022A4);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000023D8);

void func_000024AC(void) {
    func_00003980(1);
    sceVshCommonGui_80271F41();
    scePaf_6B1E90C7();
    scePaf_A0ED77C4(0, &func_000018EC, 0, -1, -1, &func_00001A1C);
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_000024FC);

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00002614);

void func_000026F8(void) {
    s32 temp_v0;
    struct Unk_func_000026F8_temp_v0_2 *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00007110);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unkC(0, &func_00002764, 0, &func_00002614);
        }
    }
    func_000039B0(1);
    scePaf_66907719();
}

INCLUDE_ASM("nonmatchings/htmlviewer_plugin_001670", func_00002764);

void func_0000278C(void) {
    s32 temp_v0;
    struct Unk_func_0000278C_temp_v0_2 *temp_v0_2;

    D_000081C8 = 0;
    temp_v0 = scePaf_D4FAE7D0(&D_00006E34);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            D_000081C8 = temp_v0_2->unk2C();
        }
    }
}

void func_000027E8(void) {
    func_00005014();
    scePaf_66907719();
}

void func_0000280C(void) {
    func_000050D0();
}

