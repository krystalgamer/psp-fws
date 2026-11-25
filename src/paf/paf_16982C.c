/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_16982C", func_0016982C);
#else
s32 func_0016982C(struct Unk_func_0016982C_0 *arg0, s32 *arg1) {
    *arg1 = func_0016B084(arg0->unk28 + 6);
    return 0;
}
#endif
