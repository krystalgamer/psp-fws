/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_00169860(void *arg0, s32 *arg1) {
    *arg1 = func_0016B084(M2C_FIELD(arg0, s32 *, 0x28) + 0xC);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_169860", func_00169894);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_169860", func_001698BC);

