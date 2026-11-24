#include "common.h"
#include "paf_decls.h"

M2C_UNK *func_0009D6D0(void) {
    return " libpng version 1.2.10 - April 23, 2006 (header)\n";
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09D6D0", func_0009D6DC);

void func_0009D75C(s32 arg0) {
    inflateReset(arg0 + 0x434);
}

s32 func_0009D778(void) {
    return 0x27E2;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09D6D0", func_0009D780);

s32 func_0009D798(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09D6D0", scePaf_7894B61F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09D6D0", func_0009D8A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09D6D0", func_0009D940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09D6D0", func_0009DA4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_09D6D0", func_0009DAA8);

void func_0009DB04(void *arg0) {
    scePaf_9F10613F(arg0, 1);
}

void func_0009DB20(void) {
}

void func_0009DB28(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x408) = arg1;
        M2C_FIELD(arg0, s32 *, 0x400) = arg2;
        M2C_FIELD(arg0, s32 *, 0x404) = arg3;
    }
}

s32 func_0009DB44(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x408);
    }
    return var_v0;
}

