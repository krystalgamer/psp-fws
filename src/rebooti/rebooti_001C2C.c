/* cflags[100]: -O2 -mno-split-addresses */
#include "common.h"
#include "rebooti_decls.h"

INCLUDE_ASM("nonmatchings/rebooti_001C2C", func_00001C2C);

INCLUDE_ASM("nonmatchings/rebooti_001C2C", func_00001C58);

INCLUDE_ASM("nonmatchings/rebooti_001C2C", func_00001C80);

s32 func_00001CB8(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("nonmatchings/rebooti_001C2C", func_00001CC0);

void bcopy(const void *src, void *dst, u32 n) {
    memmove(dst, src, n);
}

void bcmp(const void *a, const void *b, s32 n) {
    memcmp(a, b, n);
}
