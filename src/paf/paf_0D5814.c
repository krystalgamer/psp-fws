#include "common.h"
#include "paf_decls.h"

void func_000D5814(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00199A10;
    scePaf_1B043852(arg0 + 0x28);
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
    func_000D58C4((s32) (arg0 + 0x14));
    func_000D58C4((s32) (arg0 + 8));
    scePaf_E977B833((s32) arg0);
}

