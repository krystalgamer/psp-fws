#include "common.h"
#include "paf_decls.h"

void func_001188A0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0019D238;
    sceKernelDeleteThread(M2C_FIELD(arg0, u32 *, 4));
}

