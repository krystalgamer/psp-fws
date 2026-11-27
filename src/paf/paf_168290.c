/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_168290", func_00168290);
#endif

#if FW_VERSION < 200
s32 func_00168290(s32 *arg0) {
    s32 temp_a1;
    s32 var_a1;

    temp_a1 = *arg0;
    var_a1 = 0x80615001;
    if ((temp_a1 & 0xF) == 0xF) {
        var_a1 = 0x80615004;
        if ((u32) (temp_a1 >> 4) < 3U) {
            var_a1 = func_00169950((s32) arg0);
        }
    }
    return var_a1;
}
#endif

#if FW_VERSION == 282
s32 func_00168290(s32 *arg0) {
    s32 temp_a1;
    s32 var_a1;

    temp_a1 = *arg0;
    var_a1 = 0x80615001;
    if ((temp_a1 & 0xF) == 0xF) {
        var_a1 = 0x80615002;
        if ((u32) (temp_a1 >> 4) < 4U) {
            var_a1 = func_00169950((s32) arg0);
        }
    }
    return var_a1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_168290", func_001682E4);

INCLUDE_ASM("nonmatchings/paf_168290", func_001683E0);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_168290", func_00166C10);

INCLUDE_ASM("nonmatchings/paf_168290", func_00166C98);

INCLUDE_ASM("nonmatchings/paf_168290", func_00166D20);

INCLUDE_ASM("nonmatchings/paf_168290", func_00166DA8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_168290", func_001685B0);

INCLUDE_ASM("nonmatchings/paf_168290", func_00168638);

INCLUDE_ASM("nonmatchings/paf_168290", func_001686C0);

INCLUDE_ASM("nonmatchings/paf_168290", func_00168748);
#endif

INCLUDE_RODATA("nonmatchings/paf_168290", D_001A2B7C);

INCLUDE_RODATA("nonmatchings/paf_168290", D_001A2B84);

INCLUDE_RODATA("nonmatchings/paf_168290", D_001A2BC4);

INCLUDE_ASM("nonmatchings/paf_168290", func_001687AC);

INCLUDE_ASM("nonmatchings/paf_168290", func_001687E0);

#if FW_VERSION >= 271 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_168290", D_001A16C0);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_168290", D_001A0700);
#endif
