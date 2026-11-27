/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16982C", func_0016982C);
#endif

#if FW_VERSION < 200
s32 func_0016982C(struct Unk_func_0016982C_0 *arg0, s32 *arg1) {
    *arg1 = func_0016B084(M2C_FIELD(arg0, s32 *, 0x18) + 6);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0016982C(struct Unk_func_0016982C_0 *arg0, s32 *arg1) {
    *arg1 = func_0016B084(arg0->unk28 + 6);
    return 0;
}
#endif
