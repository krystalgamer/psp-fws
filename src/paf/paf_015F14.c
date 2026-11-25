/* cflags: -Os */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_015F14", func_00015F14);
#else
void func_00015F14(struct Unk_func_00015F14_0 *arg0, s32 arg1, s32 arg2) {
    func_00014DE0(arg0, arg1, arg2);
    arg0->unk0 = &D_0016F610;
    arg0->unk28 = 0;
    scePaf_D6F088EF((u8 *)arg0 + 0x14, arg1 + 0x108);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_015F14", func_00015F64);
#else
void func_00015F64(struct Unk_func_00015F64_0 *arg0, s32 arg1, s32 arg2) {
    func_00014DE0(arg0, arg1, arg2);
    arg0->unk0 = &D_0016F610;
    arg0->unk28 = 0;
    scePaf_D6F088EF((u8 *)arg0 + 0x14, arg1 + 0x108);
}
#endif

INCLUDE_ASM("nonmatchings/paf_015F14", func_00015FB4);

s32 func_00015FC8(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F410) {
        var_a2 = func_00014F04(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00015FFC(void) {
    return &D_0016F410;
}

INCLUDE_ASM("nonmatchings/paf_015F14", func_00016008);

INCLUDE_ASM("nonmatchings/paf_015F14", func_000161B0);

INCLUDE_ASM("nonmatchings/paf_015F14", func_00016360);

INCLUDE_ASM("nonmatchings/paf_015F14", func_000165A4);

INCLUDE_ASM("nonmatchings/paf_015F14", func_000166F0);

s32 func_00016704(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F41C) {
        var_a2 = func_00014F04(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00016738(void) {
    return &D_0016F41C;
}
