/* lang: c++ */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_169784", func_00169784);
#endif

#if FW_VERSION < 200
s32 func_00169784(struct Unk_func_00169784_0 *arg0, s32 *arg1) {
    *arg1 = func_0016B084(M2C_FIELD(arg0, s32 *, 0x14) + 6);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00169784(struct Unk_func_00169784_0 *arg0, s32 *arg1) {
    *arg1 = func_0016B084(arg0->unk20 + 6);
    return 0;
}
#endif
