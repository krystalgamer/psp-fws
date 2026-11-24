#include "common.h"
#include "paf_decls.h"

void func_000EE370(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0019AE48;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x370));
    scePaf_715E8DAB((s32) arg0);
}

