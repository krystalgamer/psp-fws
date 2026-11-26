/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1698E4", func_001698E4);
#endif

#if FW_VERSION < 152
s32 func_001698E4(struct Unk_func_001698E4_0 *arg0, s32 *arg1) {
    *arg1 = (s32) *M2C_FIELD(arg0, u8 **, 0x20);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_001698E4(struct Unk_func_001698E4_0 *arg0, s32 *arg1) {
    *arg1 = (s32) *arg0->unk30;
    return 0;
}
#endif
