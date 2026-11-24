/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_00169860(struct Unk_func_00169860_0 *arg0, s32 *arg1) {
    *arg1 = func_0016B084(arg0->unk28 + 0xC);
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_169860", func_00169894);

INCLUDE_ASM("nonmatchings/paf_169860", func_001698BC);

