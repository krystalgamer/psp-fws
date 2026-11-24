/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

void func_0015B7AC(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x88) = arg2;
        M2C_FIELD(arg0, s32 *, 0x84) = arg1;
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

