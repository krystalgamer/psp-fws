/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_1698E4", func_001698E4);
#else
s32 func_001698E4(struct Unk_func_001698E4_0 *arg0, s32 *arg1) {
    *arg1 = (s32) *arg0->unk30;
    return 0;
}
#endif
