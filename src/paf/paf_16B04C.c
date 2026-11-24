/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_0016B04C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 1) + (M2C_FIELD(arg0, u8 *, 0) << 8)) & 0xFFFF;
}

