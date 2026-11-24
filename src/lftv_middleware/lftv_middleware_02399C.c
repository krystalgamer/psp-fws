/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_02399C", func_0002399C);

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_02399C", func_000239E8);

void func_00023A34(void) {
}

void func_00023A3C(void) {
}

INCLUDE_ASM("tmp/asm/303/lftv_middleware/nonmatchings/lftv_middleware_02399C", func_00023A44);

s32 func_00023A90(void *arg0) {
    s32 var_a1;
    u32 temp_v0;
    u32 temp_v1;

    temp_v0 = M2C_FIELD(arg0, u32 *, 4);
    var_a1 = 0;
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(arg0, u32 *, 8);
        if (temp_v1 < temp_v0) {
            var_a1 = M2C_FIELD(arg0, s32 *, 0) + temp_v1;
        }
    }
    return var_a1;
}

