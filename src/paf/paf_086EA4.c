#include "common.h"
#include "paf_decls.h"

void jpeg_set_linear_quality(s32 arg0, s32 arg1, s32 arg2) {
    jpeg_add_quant_table(arg0, 0, (s32) &D_00190E98, arg1, arg2);
    jpeg_add_quant_table(arg0, 1, (s32) &D_00190F98, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_086EA4", jpeg_quality_scaling);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_086EA4", jpeg_set_quality);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_086EA4", add_huff_table);

