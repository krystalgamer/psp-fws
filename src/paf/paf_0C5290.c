#include "common.h"
#include "paf_decls.h"

void func_000C5290(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0016EE68;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((arg1 & 0xFFFF) | 0x410000);
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

