/* cflags: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION != 100
s32 func_0003AF58(void **arg0, s32 arg1, s32 *arg2) {
    s32 temp_v0;
    s32 var_a2;
    u32 temp_v1;
    struct Unk_func_0003AF58_temp_a0 *temp_a0;

    temp_v1 = arg1 & 0xFFFF;
    var_a2 = 0x200B;
    if (temp_v1 != 0) {
        temp_a0 = *arg0;
        var_a2 = 0x2003;
        if (temp_a0->unk0 != 0) {
            var_a2 = 0x200B;
            if ((u32) temp_a0->unk8 >= temp_v1) {
                temp_v0 = func_00042278((s32) temp_a0, temp_v1 - 1);
                var_a2 = 0x2003;
                if (temp_v0 != 0) {
                    *arg2 = temp_v0;
                    var_a2 = 0;
                }
            }
        }
    }
    return var_a2;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0003AFC4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0003B020);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0003B094);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0003B13C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0003B180);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0002E310);
#endif

#if FW_VERSION != 100
s32 func_0003B214(struct Unk_func_00039644_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if ((arg0->unk7C != 0) && (arg0->unk84 != 0)) {
        var_v1 = 0;
        *arg1 = arg0->unk90;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0003B240);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0002E414);
#endif

#if FW_VERSION != 100
s32 func_0003B314(struct Unk_func_0003969C_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (arg0->unkA0 != 0) {
        var_v1 = 0;
        *arg1 = arg0->unkB4;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0003B334);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0002E4CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0002E4EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0002E540);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0002E5BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0002E5DC);
#endif

#if FW_VERSION != 100
s32 func_0003B3C8(struct Unk_func_000396F4_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (arg0->unkC8 != 0) {
        var_v1 = 0;
        *arg1 = arg0->unkD8;
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03AF58", func_0003B438);
#endif

#if FW_VERSION != 100
s32 func_0003B4AC(struct Unk_func_00039778_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (arg0->unk188 != 0) {
        var_v1 = 0;
        *arg1 = arg0->unk194;
    }
    return var_v1;
}
#endif

