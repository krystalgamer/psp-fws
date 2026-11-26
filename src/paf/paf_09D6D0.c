#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009D6D0);
#else
M2C_UNK *func_0009D6D0(void) {
    return " libpng version 1.2.10 - April 23, 2006 (header)\n";
}
#endif

INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009D6DC);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009D75C);
#endif

#if FW_VERSION < 151
void func_0009D75C(s32 arg0) {
    func_0006428C(arg0 + 0x434);
}
#endif

#if FW_VERSION == 282
void func_0009D75C(s32 arg0) {
    inflateReset(arg0 + 0x434);
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009D778);
#endif

#if FW_VERSION < 151
s32 func_0009D778(void) {
    return 0x27DE;
}
#endif

#if FW_VERSION == 282
s32 func_0009D778(void) {
    return 0x27E2;
}
#endif

INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009D780);

s32 func_0009D798(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/paf_09D6D0", scePaf_7894B61F);

INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009D8A4);

INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009D940);

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009D780_v280);

INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009D7DC);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_09D6D0", func_000544E4);

INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0005451C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009DA4C);

INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009DAA8);
#endif

void func_0009DB04(void *arg0) {
    scePaf_9F10613F(arg0, 1);
}

void func_0009DB20(void) {
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009DB28);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_09D6D0", func_0009D878);
#endif

#if FW_VERSION == 282
void func_0009DB28(struct Unk_func_0009DB28_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 != NULL) {
        arg0->unk408 = arg1;
        arg0->unk400 = arg2;
        arg0->unk404 = arg3;
    }
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_09D6D0", func_00054588);
#endif

#if FW_VERSION < 151
s32 func_00054588(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x408);
}
#endif

#if FW_VERSION == 282
s32 func_0009DB44(struct Unk_func_0009DB44_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk408;
    }
    return var_v0;
}
#endif
