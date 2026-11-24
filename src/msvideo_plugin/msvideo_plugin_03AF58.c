/* cflags: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03AF58", func_0003AF58);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03AF58", func_0003AFC4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03AF58", func_0003B020);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03AF58", func_0003B094);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03AF58", func_0003B13C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03AF58", func_0003B180);

s32 func_0003B214(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if ((M2C_FIELD(arg0, s32 *, 0x7C) != 0) && (M2C_FIELD(arg0, s32 *, 0x84) != 0)) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x90);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03AF58", func_0003B240);

s32 func_0003B314(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0xA0) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0xB4);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03AF58", func_0003B334);

s32 func_0003B3C8(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0xD8);
    }
    return var_v1;
}

s32 func_0003B3E8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_0004D028(arg0 + 0x174, arg1, 1);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03AF58", func_0003B438);

s32 func_0003B4AC(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0x188) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x194);
    }
    return var_v1;
}

