#include "common.h"
#include "paf_decls.h"

void func_001184B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_0019D210, 0x200U, 4U, NULL);
}

