/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 152 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_16980C", func_0016980C);
#endif

#if FW_VERSION < 152
void func_0016980C(struct Unk_func_0016980C_0 *arg0) {
    func_0016B084(M2C_FIELD(arg0, s32 *, 0x14) + 0x14);
}
#endif

#if FW_VERSION == 282
void func_0016980C(struct Unk_func_0016980C_0 *arg0) {
    func_0016B084(arg0->unk20 + 0x14);
}
#endif
