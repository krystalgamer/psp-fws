#include "common.h"
#include "paf_decls.h"

void func_00118050(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_0019D1F0, 0x200U, 3U, NULL);
}

