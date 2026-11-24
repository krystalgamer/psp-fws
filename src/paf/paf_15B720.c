/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_15B720", func_0015B720);

s32 func_0015B73C(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x64);
}

void func_0015B748(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    }
}

s32 func_0015B758(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x70);
}

