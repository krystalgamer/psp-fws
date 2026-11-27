/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "camera_plugin_decls.h"

void func_0000CC64(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_0000CEF0(arg0, arg1, var_v0);
}

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000CCB4);

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000CD9C);

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000CE30);

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000CEF0);

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000CF9C);

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000D004);

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000D06C);

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000D0B8);

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000D160);

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000D2A8);

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000D384);

void func_0000D464(void) {
    func_0000D0B8();
}

INCLUDE_ASM("nonmatchings/camera_plugin_00CC64", func_0000D480);

s32 func_0000D50C(void) {
    return __builtin_allegrex_max(sceIoWrite(), -1);
}

s32 func_0000D530(void) {
    return __builtin_allegrex_max(sceIoRead(), -1);
}
