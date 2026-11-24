#include "common.h"
#include "paf_decls.h"

s32 func_000BDD08(void *arg0, s32 *arg1) {
    s32 temp_v1;
    u8 temp_a2;

    temp_v1 = ((u32) ((M2C_FIELD(arg0, u16 *, 0x1E8) * M2C_FIELD(arg0, s32 *, 0x1E4)) + 7) >> 3) * 2;
    *arg1 = temp_v1;
    temp_a2 = M2C_FIELD(arg0, u8 *, 0x1EA);
    *arg1 = ((s32) ((temp_v1 + temp_a2) - 1) / (s32) temp_a2) * temp_a2;
    return 0;
}

