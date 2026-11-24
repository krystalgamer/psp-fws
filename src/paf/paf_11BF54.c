#include "common.h"
#include "paf_decls.h"

void func_0011BF54(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0019D328;
    if (M2C_FIELD(arg0, u8 *, 0x6C) == 0) {

    } else {
        func_001654B8(0, 0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) > 0) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0x68));
    }
    func_0011CE28((s32) arg0);
}

