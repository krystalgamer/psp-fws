#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_04953C", func_0004953C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_04953C", func_000496E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_04953C", func_00049800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_04953C", func_0004987C);

s32 func_000498D8(void *arg0, s32 arg1) {
    s32 var_a3;

    var_a3 = 0;
    if ((arg1 >= 0) && (arg1 < (M2C_FIELD(arg0, s32 *, 8) * M2C_FIELD(arg0, s32 *, 0xC)))) {
        var_a3 = M2C_FIELD(arg0, s32 *, 0) + (arg1 * 8);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_04953C", func_0004990C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_04953C", func_00049978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_04953C", func_00049AA4);

