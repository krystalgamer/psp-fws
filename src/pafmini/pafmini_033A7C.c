/* cflags: -O1 */
#include "common.h"
#include "pafmini_decls.h"

void func_00033A7C(struct Unk_func_00033A7C_0 *arg0) {
    arg0->unk4 = arg0;
    arg0->unk0 = 0;
}

void func_00033A88(struct Unk_func_00033A88_0 *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk4 = arg1;
    *arg1 = *temp_v1;
    *temp_v1 = arg1;
}

INCLUDE_ASM("nonmatchings/pafmini_033A7C", func_00033AA0);

void func_00033AC0(struct Unk_func_00033AC0_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

s32 func_00033AC8(struct Unk_func_00033AC8_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk4;
    }
    return var_v0;
}

M2C_UNK *func_00033ADC(M2C_UNK **arg0, s32 arg1) {
    M2C_UNK *var_a0;
    s32 var_a2;

    var_a0 = *arg0;
    var_a2 = 0;
    if ((arg1 > 0) & (var_a0 != NULL)) {
        do {
            var_a0 = *var_a0;
            var_a2 += 1;
        } while ((var_a2 < arg1) & (var_a0 != NULL));
    }
    return var_a0;
}
