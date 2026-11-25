/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_169860", func_00169860);
#else
s32 func_00169860(struct Unk_func_00169860_0 *arg0, s32 *arg1) {
    *arg1 = func_0016B084(arg0->unk28 + 0xC);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_169860", func_00121A34);

INCLUDE_ASM("nonmatchings/paf_169860", func_00121A40_v100);
#else
INCLUDE_ASM("nonmatchings/paf_169860", func_00169894);

INCLUDE_ASM("nonmatchings/paf_169860", func_001698BC);
#endif
