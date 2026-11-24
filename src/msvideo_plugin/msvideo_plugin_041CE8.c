/* cflags: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

s32 func_00041CE8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x5001;
    if (arg0 != 0) {
        func_0005E278(arg0);
        var_v0 = func_0004EEB4(arg0, arg1);
    }
    return var_v0;
}

s32 func_00041D30(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x5001;
    if (arg0 != 0) {
        var_v1 = func_000504D4(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_041CE8", func_00041D5C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_041CE8", func_00041DD4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_041CE8", func_00041F88);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_041CE8", func_00042044);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_041CE8", func_00042278);

s32 func_000422B8(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x20);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_041CE8", func_000422D4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_041CE8", func_00042330);

s32 func_00042410(void *arg0, u32 arg1, u32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x5001;
    if (arg0 != NULL) {
        var_v1 = 0x500A;
        if (((arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0xC)) | (arg2 >= 3U)) == 0) {
            var_v1 = (func_0005CFDC(M2C_FIELD(arg0, s32 *, 0x10), (s32) arg1, (s32) arg2, arg3) == 0) ? 0 : 0x5001;
        }
    }
    return var_v1;
}

