/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E326C", func_000E326C);
#else
void func_000E326C(M2C_UNK **arg0) {
    *arg0 = &D_0019A3B8;
    func_000F022C((s32) arg0);
}
#endif
