/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_0016888C(s32 arg0, s32 arg1, s32 *arg2) {
    *arg2 = (arg0 << 0x18) + (arg1 << 0x10);
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_16888C", func_001688A4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_16888C", func_00121374);

INCLUDE_ASM("nonmatchings/paf_16888C", func_0012137C);

INCLUDE_ASM("nonmatchings/paf_16888C", func_001213A0);
#endif
