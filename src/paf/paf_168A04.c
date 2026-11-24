/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_00168A04(void *arg0) {
    s32 var_a1;

    var_a1 = 0x80615001;
    if ((M2C_FIELD(arg0, s32 *, 0) & 0xF) == 0xF) {
        var_a1 = M2C_FIELD(arg0, s32 *, 0x18);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00168A28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00168A88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00168B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00168BAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00168BFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00168C94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00168D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00168E44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00168EC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_0016904C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_001690BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_001690E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00169128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00169194);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00169238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_001692F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00169408);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_168A04", func_00169518);

