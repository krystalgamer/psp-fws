#include "common.h"
#include "msvideo_plugin_decls.h"

s32 func_00037A18(s32 arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (arg0 != 0x61766331) {
        if (arg0 == 0x6D703476) {
            var_a1 = 1;
        }
    } else {
        var_a1 = 1;
    }
    return var_a1;
}

s32 func_00037A48(struct Unk_func_00037A48_0 *arg0, u32 arg1) {
    s32 cmp_tmp = (u32) arg0->unk34 < arg1;
    return cmp_tmp == 0;
}

s32 func_00037A58(struct Unk_func_00037A58_0 *arg0, u32 arg1) {
    s32 cmp_tmp = arg1 < (u32) arg0->unk34;
    return cmp_tmp == 0;
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_037A18", D_00065150);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_037A18", D_00065210);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00037A68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00037B3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00037CCC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00037D44);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00037E64);

void func_00037EFC(void) {
    sceMpegDelete();
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_037A18", D_0006538C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_037A18", D_000653B4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_037A18", D_000653D4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_037A18", D_000653EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00037F18);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00037FF8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_000381E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038274);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_000383A8);

s32 func_0003848C(void **arg0) {
    s32 var_v1;
    struct Unk_func_0003848C_temp_v0 *temp_v0;

    var_v1 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v1 = (func_00038820(temp_v0->unk0, temp_v0->unk8) == 0) ? 0 : 0x80618006;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_000384CC);

s32 func_00038514(void **arg0) {
    s32 var_v1;
    struct Unk_func_00038514_temp_v0 *temp_v0;

    var_v1 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v1 = (func_0003884C(temp_v0->unk0, temp_v0->unk8) == 0) ? 0 : 0x80618006;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038554);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038660);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_000386E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_0003877C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038820);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_0003884C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038890);

s32 func_00038934(struct Unk_func_00038934_0 *arg0, s32 arg1) {
    s32 var_v0;
    struct Unk_func_00038934_temp_a0 *temp_a0;

    var_v0 = 4;
    if (arg0 != NULL) {
        temp_a0 = arg0->unk4;
        if (temp_a0 != NULL) {
            temp_a0->unk0 = arg1;
            temp_a0->unk24 = 1;
            var_v0 = 0;
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038960);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_000389A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038A08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038A70);

