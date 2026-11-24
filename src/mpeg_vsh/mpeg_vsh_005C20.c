/* cflags: -O2 -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_005C20", func_00005C20);

s32 func_00005C5C(s32 arg0) {
    return arg0 + 0xE;
}

void *func_00005C64(void **arg0) {
    void *temp_a1;

    temp_a1 = *arg0;
    return temp_a1 + (M2C_FIELD(temp_a1, s32 *, 0x24) * 0x644) + 0x28;
}

s32 func_00005C84(void) {
    return 0;
}

