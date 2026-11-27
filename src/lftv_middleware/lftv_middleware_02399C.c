/* lang: c++ */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_02399C", func_0002399C);

INCLUDE_ASM("nonmatchings/lftv_middleware_02399C", func_000239E8);

void func_00023A34(void) {
}

void func_00023A3C(void) {
}

INCLUDE_ASM("nonmatchings/lftv_middleware_02399C", func_00023A44);

s32 func_00023A90(struct Unk_func_00023A90_0 *arg0) {
    s32 var_a1;
    u32 temp_v0;
    u32 temp_v1;

    temp_v0 = arg0->unk4;
    var_a1 = 0;
    if (temp_v0 != 0) {
        temp_v1 = arg0->unk8;
        if (temp_v1 < temp_v0) {
            var_a1 = arg0->unk0 + temp_v1;
        }
    }
    return var_a1;
}
