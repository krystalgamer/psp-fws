#include "common.h"
#include "msvideo_main_plugin_decls.h"

s32 func_00077F48(s32 **arg0) {
    s32 *temp_v0;
    s32 var_v1;

    temp_v0 = func_00080C20(8);
    var_v1 = 1;
    *arg0 = temp_v0;
    if (temp_v0 != NULL) {
        *temp_v0 = 0;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_00077F88(void) {
    func_00080F50();
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_00077FA8);

s32 func_00077FF0(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a1 != -1) {
        M2C_FIELD(arg0, s32 *, 0) = temp_a1;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_0007800C);

s32 func_00078030(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) == 2;
}

s32 func_00078040(s32 *arg0) {
    return *arg0 == 2;
}

s32 func_00078050(s32 *arg0) {
    return *arg0 == 9;
}

s32 func_00078060(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_00078068);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_000780B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_000783E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_000785CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_00078688);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_0007879C);

s32 func_000787E4(void **arg0) {
    s32 var_v1;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0) != 0) {
        var_v1 = (M2C_FIELD(temp_a0, s32 *, 0xC) != 0) ? 0 : 0x2003;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_00078804);

void func_00078864(void) {
    func_00082394();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_00078880);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_00078944);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_000789DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_00078A78);

s32 func_00078AE4(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v0;

    temp_v0 = func_00095170(arg0 + 0x180);
    if (temp_v0 == 0) {
        if (*arg2 != 0) {
            *arg1 += 1;
        }
    }
    return ((temp_v0 ^ 7) != 0) ? temp_v0 : 0x2003;
}

s32 func_00078B44(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_00092258(arg0 + 0x180);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_00078B90);

s32 func_00078C20(s32 arg0, void *arg1) {
    s32 temp_a1;
    s32 var_a0;
    void *temp_a1_2;
    void *temp_v1;

    temp_a1 = M2C_FIELD(arg1, s32 *, 4);
    var_a0 = 0;
    if (temp_a1 != arg0) {
        if (((temp_a1 == 0x656E6376) | (temp_a1 == 0x656E6361)) != 0) {
            temp_a1_2 = M2C_FIELD(arg1, void **, 0x30);
            if (temp_a1_2 != NULL) {
                temp_v1 = M2C_FIELD(temp_a1_2, void **, 0xC);
                var_a0 = ((M2C_FIELD(temp_v1, u8 *, 8) << 0x18) | (M2C_FIELD(temp_v1, u8 *, 9) << 0x10) | (M2C_FIELD(temp_v1, u8 *, 0xA) << 8) | M2C_FIELD(temp_v1, u8 *, 0xB)) == arg0;
            }
        }
    } else {
        var_a0 = 1;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_00078CB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_0007928C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_000793A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_000794C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_000794F8);

s32 func_00079554(void **arg0, s32 *arg1) {
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

s32 func_00079578(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_00082DDC(*arg0, arg1, 1);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}

s32 func_000795C8(void **arg0, u16 *arg1) {
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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_077F48", func_000795EC);

s32 func_00079688(void *arg0, M2C_UNK arg1) {
    scePaf_3308156F(arg1, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 8));
    return 0;
}

