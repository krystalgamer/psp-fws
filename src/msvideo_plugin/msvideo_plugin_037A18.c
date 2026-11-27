/* lang: c++ */
/* cflags[150]: -Os */
/* cflags[100]: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_000381E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038274);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_000383A8);

#if FW_VERSION < 152
s32 func_0002B638(void **arg0) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v0 = (-(func_00038820(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 8)) == 0) & 0x7F9E7FFA) - 0x7F9E7FFA;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 152
s32 func_0002B638(void **arg0) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v1 = (func_00038820(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 8)) == 0) ? 0 : 0x80618006;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 201
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_000384CC);

#if FW_VERSION < 152
s32 func_0002B6C8(void **arg0) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v0 = (-(func_0002BA14(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, void **, 8)) == 0) & 0x7F9E7FFA) - 0x7F9E7FFA;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 152
s32 func_0002B6C8(void **arg0) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v1 = (func_0002BA14(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, void **, 8)) == 0) ? 0 : 0x80618006;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 201
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038554);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038660);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_000386E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_0003877C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038820);

#if FW_VERSION == 100 || FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_0002BA14);
#endif

#if FW_VERSION == 150
s32 func_0002BA14(s32 arg0, void *arg1) {
    s32 temp_v0;
    s32 var_s1;

    var_s1 = sceVideocodecDelete(arg0, M2C_FIELD(arg1, s32 *, 0x10));
    temp_v0 = sceVideocodecReleaseEDRAM(arg0);
    if (var_s1 != 0) {
        var_s1 = temp_v0;
    }
    return var_s1;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_0003884C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038890);

#if FW_VERSION < 201
s32 func_0002BAE0(void *arg0, s32 arg1) {
    s32 var_v0;
    void *temp_a0;

    var_v0 = 4;
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        if (temp_a0 != NULL) {
            M2C_FIELD(temp_a0, s32 *, 0) = arg1;
            M2C_FIELD(temp_a0, s32 *, 0x14) = 1;
            var_v0 = 0;
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_0002BB0C);
#else
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_000389A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038A08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_00038A70);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_0002C154);
#endif

#if FW_VERSION < 152
s32 func_0002C154(s32 *arg0) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0002D26C((s32) arg0);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_037A18", func_0002C18C);
#endif

#if FW_VERSION < 152
s32 func_0002C18C(s32 *arg0) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            var_v1 = func_0003A404((s32) arg0);
        }
    }
    return var_v1;
}
#endif
