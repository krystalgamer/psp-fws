/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

void func_0015B7AC(struct Unk_func_0015B7AC_0 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        arg0->unk88 = arg2;
        arg0->unk84 = arg1;
    }
}

s32 func_0015B7C4(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x84);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_15B7AC", func_0015B7D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_15B7AC", func_0015B9B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_15B7AC", func_0015BB14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_15B7AC", func_0015BCC0);

s32 func_0015BEB4(void) {
    return 1;
}

