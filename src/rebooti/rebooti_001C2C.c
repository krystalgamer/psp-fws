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

void func_00001CCC(const void *src, void *dst, u32 n) {
    func_00001ED0(dst, src, n);
}

void func_00001CF0(const void *a, const void *b, s32 n) {
    func_00001F44(a, b, n);
}
