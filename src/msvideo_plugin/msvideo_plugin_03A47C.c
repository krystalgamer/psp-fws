/* cflags[100]: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003A47C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003A540);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003A5D8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002D800);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002D8C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002D964);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002D9B4);
#endif

#if FW_VERSION == 100
s32 func_0002D9B4(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_0004A140(arg0 + 0x178);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = 8;
        if ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) {
            var_a1 = temp_v0;
        }
    }
    return var_a1;
}
#endif

#if FW_VERSION == 152
s32 func_0002D9B4(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_0004A140(arg0 + 0x178);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 201
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002DFB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002DFD8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0002E02C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002E02C(void **arg0, u16 *arg1) {
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
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_03A47C", func_0003AF58);
#endif

#if FW_VERSION == 100
s32 func_0003AF58(void **arg0, s32 arg1, s32 *arg2) {
    s32 temp_v0;
    s32 var_a2;
    u32 temp_v1;
    void *temp_a0;

    temp_v1 = arg1 & 0xFFFF;
    var_a2 = 0x200B;
    if (temp_v1 != 0) {
        temp_a0 = *arg0;
        var_a2 = 0x2003;
        if (M2C_FIELD(temp_a0, s32 *, 0) != 0) {
            var_a2 = 0x200B;
            if ((u32) M2C_FIELD(temp_a0, u32 *, 8) >= temp_v1) {
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

#if FW_VERSION == 201
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
