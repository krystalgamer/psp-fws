/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0796B4", func_000796B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0796B4", func_00079720);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0796B4", func_0007977C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0796B4", func_000797F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0796B4", func_0007989C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0796B4", func_000798F4);

s32 func_000799C0(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if ((M2C_FIELD(arg0, s32 *, 0x7C) != 0) && (M2C_FIELD(arg0, s32 *, 0x84) != 0)) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x90);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0796B4", func_000799EC);

s32 func_00079AC0(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0xA0) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0xB4);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0796B4", func_00079AE0);

s32 func_00079B74(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0xD8);
    }
    return var_v1;
}

s32 func_00079B94(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_000951F8(arg0 + 0x180, arg1, 1);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_0796B4", func_00079BE4);

s32 func_00079C58(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0x194) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x1A0);
    }
    return var_v1;
}

