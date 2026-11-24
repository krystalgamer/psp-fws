#include "common.h"
#include "paf_decls.h"

s32 func_000BDD08(struct Unk_func_000BDD08_0 *arg0, s32 *arg1) {
    s32 temp_v1;
    u8 temp_a2;

    temp_v1 = ((u32) ((arg0->unk1E8 * arg0->unk1E4) + 7) >> 3) * 2;
    *arg1 = temp_v1;
    temp_a2 = arg0->unk1EA;
    *arg1 = ((s32) ((temp_v1 + temp_a2) - 1) / (s32) temp_a2) * temp_a2;
    return 0;
}

