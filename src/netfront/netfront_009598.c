/* cflags: -O1 */
#include "common.h"
#include "netfront_decls.h"

void func_00009598(struct Unk_func_00009598_0 *arg0, s32 arg1) {
    s32 temp_a0;
    struct Unk_func_00009598_temp_v0 *temp_v0;

    if (arg0 != NULL) {
        temp_a0 = arg0->unk4C;
        if (temp_a0 != 0) {
            temp_v0 = temp_a0 + (arg1 * 0x34);
            temp_v0->unk10 = 0;
            temp_v0->unk0 = 0;
            temp_v0->unk14 = 0;
            temp_v0->unk18 = 0;
            temp_v0->unk1C = 0;
            temp_v0->unk20 = 0;
            temp_v0->unk24 = 0;
            temp_v0->unk28 = 0;
            temp_v0->unk2C = 0;
            temp_v0->unk30 = 0;
            temp_v0->unk4 = 0;
            temp_v0->unk8 = 0;
            temp_v0->unkC = 0;
        }
    }
}

INCLUDE_ASM("nonmatchings/netfront_009598", func_000095F4);

void func_00009668(struct Unk_func_00009668_0 *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk4C;
        if (temp_v0 != 0) {
            func_000096A4((s32) arg0, temp_v0 + (arg1 * 0x34));
        }
    }
}

INCLUDE_ASM("nonmatchings/netfront_009598", func_000096A4);

s32 func_00009750(struct Unk_func_00009750_0 *arg0, struct Unk_func_00009750_1 *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((arg0->unk0 == arg1->unk0) && (arg0->unk4 == arg1->unk4) && (arg0->unk8 == arg1->unk8)) {
        var_a2 = arg0->unkC != arg1->unkC;
    }
    return var_a2;
}

s32 func_00009798(struct Unk_func_00009798_0 *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk48 == 0) {
        arg0->unk48 = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_000097B8(struct Unk_func_000097B8_0 *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk48 != 0) {
        arg0->unk48 = 0;
        var_v1 = 0;
    }
    return var_v1;
}

