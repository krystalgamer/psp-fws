#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_00079C78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_00079CC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_00079D68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_00079DC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_00079E38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_00079E88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_00079EB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_00079F0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_00079FC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A070);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A120);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A1E8);

s32 func_0007A2B0(void *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {
        *arg1 = 0;
    } else {
        *arg1 = scePaf_C1B0AA0D(temp_v0) + 1;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A2F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A330);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A458);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A498);

s32 func_0007A574(void *arg0, s32 *arg1) {
    s32 var_a2;
    u16 temp_v1;

    var_a2 = 0x2003;
    temp_v1 = M2C_FIELD(arg0, u16 *, 0);
    if (temp_v1 >= 0xAU) {
        if (temp_v1 != 0xA) {
            func_00078688(arg1, M2C_FIELD(arg0, s32 **, 0xC), temp_v1 - 0xA);
        }
        var_a2 = 0;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A5BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A620);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A6F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A81C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A95C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007A9EC);

s32 func_0007AA8C(void **arg0, s32 *arg1) {
    s32 var_a2;
    void *temp_a0;

    temp_a0 = *arg0;
    var_a2 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0xA8) != 0) {
        var_a2 = 0x2002;
        if (M2C_FIELD(temp_a0, s32 *, 0xC4) != 0) {
            var_a2 = 0;
            *arg1 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 0xD0), s32 *, 0xC);
        }
    }
    return var_a2;
}

s32 func_0007AAC0(void *arg0, s32 *arg1) {
    s32 var_t0;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = M2C_FIELD(arg0, void **, 0x30);
    var_t0 = 0x2003;
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, void **, 0xC);
        var_t0 = 0;
        *arg1 = (M2C_FIELD(temp_v1, u8 *, 8) << 0x18) | (M2C_FIELD(temp_v1, u8 *, 9) << 0x10) | (M2C_FIELD(temp_v1, u8 *, 0xA) << 8) | M2C_FIELD(temp_v1, u8 *, 0xB);
    }
    return var_t0;
}

s32 func_0007AB0C(void *arg0, s32 *arg1) {
    s32 var_a0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x30);
    var_a0 = 0x2003;
    if ((temp_v1 != NULL) && (M2C_FIELD(temp_v1, s32 *, 8) != 0)) {
        var_a0 = 0;
        *arg1 = M2C_FIELD(temp_v1, s32 *, 0);
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_079C78", func_0007AB38);

