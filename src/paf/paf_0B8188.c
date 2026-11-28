/* lang: c++ */
/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

void func_000B8188(struct Unk_func_000B8188_0 *arg0) {
    arg0->unk4 = arg0;
    arg0->unk0 = 0;
}

void func_000B8194(struct Unk_func_000B8194_0 *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk4 = arg1;
    *arg1 = *temp_v1;
    *temp_v1 = arg1;
}

INCLUDE_ASM("nonmatchings/paf_0B8188", func_000B81AC);

void func_000B81CC(struct Unk_func_000B81CC_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

s32 func_000B81D4(struct Unk_func_000B81D4_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk4;
    }
    return var_v0;
}

M2C_UNK *func_000B81E8(M2C_UNK **arg0, s32 arg1) {
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
