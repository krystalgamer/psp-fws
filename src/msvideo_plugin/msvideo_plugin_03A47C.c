#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003A47C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003A540);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003A5D8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002D800);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002D8C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002D964);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002D9B4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002DA04);
#else
s32 func_0003A674(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v0;

    temp_v0 = func_0004CFA0(arg0 + 0x174);
    if (temp_v0 == 0) {
        if (*arg2 != 0) {
            *arg1 += 1;
        }
    }
    return ((temp_v0 ^ 7) != 0) ? temp_v0 : 0x2003;
}

s32 func_0003A6D4(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_0004A140(arg0 + 0x174);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003A720);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003A7B0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003AC0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003AD1C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002DF2C);
#else
s32 func_0003AE38(void **arg0, s32 *arg1, s32 *arg2) {
    s32 var_a3;
    struct Unk_func_0003AE38_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    var_a3 = 0x2003;
    if (temp_a0->unkD4 != 0) {
        var_a3 = 0;
        *arg1 = temp_a0->unkDC;
        *arg2 = temp_a0->unkE0;
    }
    return var_a3;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003AE64);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002DFB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002DFD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002E02C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003AF58);
#else
s32 func_0003AEC0(void **arg0, s32 *arg1) {
    s32 var_v1;
    struct Unk_func_0003AEC0_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0x2003;
    if (temp_a0->unkC != 0) {
        var_v1 = 0;
        *arg1 = temp_a0->unk20;
    }
    return var_v1;
}

s32 func_0003AEE4(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_00043A14(*arg0, arg1, 1);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}

s32 func_0003AF34(void **arg0, u16 *arg1) {
    s32 var_v1;
    struct Unk_func_0003AF34_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0x2003;
    if (temp_a0->unk0 != 0) {
        var_v1 = 0;
        *arg1 = temp_a0->unk8;
    }
    return var_v1;
}
#endif
