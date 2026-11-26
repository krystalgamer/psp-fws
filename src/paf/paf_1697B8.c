/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 152 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_1697B8", func_001697B8);
#endif

#if FW_VERSION < 152
s32 func_001697B8(struct Unk_func_001697B8_0 *arg0, s32 *arg1) {
    *arg1 = func_0016B084(M2C_FIELD(arg0, s32 *, 0x14) + 0xC);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_001697B8(struct Unk_func_001697B8_0 *arg0, s32 *arg1) {
    *arg1 = func_0016B084(arg0->unk20 + 0xC);
    return 0;
}
#endif
