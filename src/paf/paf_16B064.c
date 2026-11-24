/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_0016B064(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0) << 0x10) + (M2C_FIELD(arg0, u8 *, 1) << 8) + M2C_FIELD(arg0, u8 *, 2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_16B064", func_0016B084);

