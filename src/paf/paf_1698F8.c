/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1698F8", func_001698F8);
#endif

#if FW_VERSION < 200
s32 func_001698F8(struct Unk_func_001698F8_0 *arg0, s32 *arg1) {
    *arg1 = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u8 *, 1);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_001698F8(struct Unk_func_001698F8_0 *arg0, s32 *arg1) {
    *arg1 = (s32) arg0->unk30->unk1;
    return 0;
}
#endif
