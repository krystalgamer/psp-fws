/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

s32 func_00011BE4(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_000A43D0 != 0) {
        var_v0 = D_000A43D0 + 0x519000;
    }
    return var_v0;
}

s32 func_00011C08(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_000A43D0 != 0) {
        var_v0 = D_000A43D0 + 0x625800;
    }
    return var_v0;
}

s32 func_00011C2C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_000A43D0 != 0) {
        var_v0 = D_000A43D0 + 0x725800;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_011BE4", func_00011C50);

s32 func_00011C5C(void) {
    return scePaf_75062BCF() != 0;
}

