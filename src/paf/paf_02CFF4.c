/* cflags: -Os */
#include "common.h"
#include "paf_decls.h"

void func_0002CFF4(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_0002CF30(arg0, arg1);
    if (temp_v0 != 0) {
        func_0002D1D8(arg0, temp_v0);
    }
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002AA78);
#else
INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D02C);
#endif

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D1D8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002AB6C);
#endif

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D288);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D40C);

INCLUDE_RODATA("nonmatchings/paf_02CFF4", D_001702B4);

INCLUDE_RODATA("nonmatchings/paf_02CFF4", D_001702B8);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D478);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D524);

s32 func_0002D538(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_001702B8) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0002D56C(void) {
    return &D_001702B8;
}

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D578);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D5E0);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D620);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D660);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002D810);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002DB58);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002DBA8);

INCLUDE_ASM("nonmatchings/paf_02CFF4", scePaf_56F4D69F);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002DC70);

INCLUDE_ASM("nonmatchings/paf_02CFF4", func_0002DCE0);

INCLUDE_ASM("nonmatchings/paf_02CFF4", scePaf_F2E5FDEB);

M2C_UNK *func_0002DD08(void) {
    return &D_001703B0;
}

INCLUDE_RODATA("nonmatchings/paf_02CFF4", D_0017032C);

INCLUDE_RODATA("nonmatchings/paf_02CFF4", D_00170338);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_02CFF4", D_00170344);
#endif

INCLUDE_RODATA("nonmatchings/paf_02CFF4", D_00170380);

INCLUDE_RODATA("nonmatchings/paf_02CFF4", D_001703B0);

INCLUDE_RODATA("nonmatchings/paf_02CFF4", D_001703C0);
