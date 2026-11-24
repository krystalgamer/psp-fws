/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

s32 func_00081074(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x5001;
    if (arg0 != 0) {
        var_v1 = func_00098970(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_081074", func_000810A0);

void func_000810FC(void) {
    func_00098D00();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_081074", func_00081118);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_081074", func_000812CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_081074", func_00081388);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_081074", func_000815B8);

s32 func_000815F8(struct Unk_func_000815F8_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = arg0->unk20;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_081074", func_00081614);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_081074", func_00081670);

s32 func_0008174C(struct Unk_func_0008174C_0 *arg0, u32 arg1, u32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0x5001;
    if (arg0 != NULL) {
        var_v1 = 0x500A;
        if (((arg1 >= (u32) arg0->unkC) | (arg2 >= 3U)) == 0) {
            var_v1 = (func_000A398C(arg0->unk10, (s32) arg1, (s32) arg2, arg3) == 0) ? 0 : 0x5001;
        }
    }
    return var_v1;
}

