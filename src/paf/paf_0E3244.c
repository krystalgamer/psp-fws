#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0E3244", func_000E3244);
#else
void func_000E3244(M2C_UNK **arg0) {
    *arg0 = &D_0019A3B8;
    func_000F022C((s32) arg0);
}
#endif
