/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007ABE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007AC34);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007ACA8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007AD24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007ADC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007AE50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007AECC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007AF64);

s32 func_0007AFDC(struct Unk_func_0007AFDC_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 9;
    if (arg0->unk108 != 0) {
        var_v1 = 0;
        *arg1 = arg0->unk110;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007AFFC);

s32 func_0007B038(struct Unk_func_0007B038_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 9;
    if (arg0->unk108 != 0) {
        var_v1 = 0;
        *arg1 = arg0->unk118;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B058);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B094);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B0E4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B134);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B184);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B1D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B230);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B2DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B328);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B374);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B3C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B414);

s32 func_0007B574(struct Unk_func_0007B574_0 *arg0) {
    s32 var_v1;

    var_v1 = 2;
    if (arg0->unk28 != 0) {
        var_v1 = 0;
        arg0->unk0 = (s32) arg0->unk24;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B594);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B7D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007B9A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007BB0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007BC64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007BDC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007C0F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007C41C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007C730);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007CC18);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007CDD8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007CF24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007D074);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007D3E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007D5F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007DA20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007DD50);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_07ABE8", func_0007DF4C);

void func_0007E4AC(struct Unk_func_0007E4AC_0 *arg0, M2C_UNK arg1) {
    func_0007B1D4((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_0007B094(arg1);
}

void func_0007E4F4(struct Unk_func_0007E4F4_0 *arg0, s32 arg1) {
    func_0007B1D4((u8 *)arg0 + 9, 3, arg1);
    arg0->unkC = func_0007B094(arg1);
}
