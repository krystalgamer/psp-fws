/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

s32 func_000796B4(void **arg0, s32 arg1, void **arg2) {
    s32 var_a2;
    u32 temp_v1;
    struct Unk_func_000796B4_temp_a0 *temp_a0;
    void *temp_v0;

    temp_v1 = arg1 & 0xFFFF;
    var_a2 = 0x200B;
    if (temp_v1 != 0) {
        temp_a0 = *arg0;
        var_a2 = 0x2003;
        if (temp_a0->unk0 != 0) {
            var_a2 = 0x200B;
            if ((u32) temp_a0->unk8 >= temp_v1) {
                temp_v0 = func_000815B8(temp_a0, temp_v1 - 1);
                var_a2 = 0x2003;
                if (temp_v0 != NULL) {
                    *arg2 = temp_v0;
                    var_a2 = 0;
                }
            }
        }
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0796B4", func_00079720);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0796B4", func_0007977C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0796B4", func_000797F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0796B4", func_0007989C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0796B4", func_000798F4);

s32 func_000799C0(struct Unk_func_000775E4_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if ((arg0->unk7C != 0) && (arg0->unk84 != 0)) {
        var_v1 = 0;
        *arg1 = arg0->unk90;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0796B4", func_000799EC);

s32 func_00079AC0(struct Unk_func_0007763C_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (arg0->unkA0 != 0) {
        var_v1 = 0;
        *arg1 = arg0->unkB4;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0796B4", func_00079AE0);

s32 func_00079B74(struct Unk_func_00077694_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (arg0->unkC8 != 0) {
        var_v1 = 0;
        *arg1 = arg0->unkD8;
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

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_0796B4", func_00079BE4);

s32 func_00079C58(struct Unk_func_00077718_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (arg0->unk194 != 0) {
        var_v1 = 0;
        *arg1 = arg0->unk1A0;
    }
    return var_v1;
}
