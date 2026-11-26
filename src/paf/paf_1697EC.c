/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 151 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_1697EC", func_001697EC);
#endif

#if FW_VERSION < 151
void func_001697EC(struct Unk_func_001697EC_0 *arg0) {
    func_0016B084(M2C_FIELD(arg0, s32 *, 0x14) + 0x10);
}
#endif

#if FW_VERSION == 282
void func_001697EC(struct Unk_func_001697EC_0 *arg0) {
    func_0016B084(arg0->unk20 + 0x10);
}
#endif
