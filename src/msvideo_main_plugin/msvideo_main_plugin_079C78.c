#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_00079C78);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_00079CC8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_00079D68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_00079DC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_00079E38);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_00079E88);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_00079EB4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_00079F0C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_00079FC0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A070);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A120);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A1E8);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A2B0);
#endif

#if FW_VERSION >= 350
s32 func_0007A2B0(struct Unk_func_0007790C_0 *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 == 0) {
        *arg1 = 0;
    } else {
        *arg1 = scePaf_C1B0AA0D(temp_v0) + 1;
    }
    return 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
s32 func_0007A2B0(struct Unk_func_0007790C_0 *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 == 0) {
        *arg1 = 0;
    } else {
        *arg1 = sce_paf_private_strlen((s32 *) temp_v0) + 1;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A2F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A330);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A458);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A498);

s32 func_0007A574(struct Unk_func_00077A30_0 *arg0, s32 *arg1) {
    s32 var_a2;
    u16 temp_v1;

    var_a2 = 0x2003;
    temp_v1 = arg0->unk0;
    if (temp_v1 >= 0xAU) {
        if (temp_v1 != 0xA) {
            func_00078688(arg1, arg0->unkC, temp_v1 - 0xA);
        }
        var_a2 = 0;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A5BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A620);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A6F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A81C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A95C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007A9EC);

s32 func_0007AA8C(void **arg0, s32 *arg1) {
    s32 var_a2;
    struct Unk_func_0007AA8C_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    var_a2 = 0x2003;
    if (temp_a0->unkA8 != 0) {
        var_a2 = 0x2002;
        if (temp_a0->unkC4 != 0) {
            var_a2 = 0;
            *arg1 = temp_a0->unkD0->unkC;
        }
    }
    return var_a2;
}

s32 func_0007AAC0(struct Unk_func_00077C54_0 *arg0, s32 *arg1) {
    s32 var_t0;
    struct Unk_func_0007AAC0_temp_v0 *temp_v0;
    struct Unk_func_0007AAC0_temp_v1 *temp_v1;

    temp_v0 = arg0->unk30;
    var_t0 = 0x2003;
    if (temp_v0 != NULL) {
        temp_v1 = temp_v0->unkC;
        var_t0 = 0;
        *arg1 = (temp_v1->unk8 << 0x18) | (temp_v1->unk9 << 0x10) | (temp_v1->unkA << 8) | temp_v1->unkB;
    }
    return var_t0;
}

s32 func_0007AB0C(struct Unk_func_00077C80_0 *arg0, s32 *arg1) {
    s32 var_a0;
    struct Unk_func_0007AB0C_temp_v1 *temp_v1;

    temp_v1 = arg0->unk30;
    var_a0 = 0x2003;
    if ((temp_v1 != NULL) && (temp_v1->unk8 != 0)) {
        var_a0 = 0;
        *arg1 = temp_v1->unk0;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_079C78", func_0007AB38);
