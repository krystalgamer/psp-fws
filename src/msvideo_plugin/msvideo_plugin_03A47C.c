#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003A47C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003A540);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003A5D8);

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

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003A720);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003A7B0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003AC0C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003AD1C);

s32 func_0003AE38(void **arg0, s32 *arg1, s32 *arg2) {
    s32 var_a3;
    void *temp_a0;

    temp_a0 = *arg0;
    var_a3 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0xD4) != 0) {
        var_a3 = 0;
        *arg1 = M2C_FIELD(temp_a0, s32 *, 0xDC);
        *arg2 = M2C_FIELD(temp_a0, s32 *, 0xE0);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_03A47C", func_0003AE64);

s32 func_0003AEC0(void **arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0xC) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(temp_a0, s32 *, 0x20);
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
    void *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(temp_a0, u16 *, 8);
    }
    return var_v1;
}

