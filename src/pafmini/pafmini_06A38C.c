/* cflags: -Os */
#include "common.h"
#include "pafmini_decls.h"

s32 _ZN3paf6PhText13SetCurrentPosEj(struct Unk_scePaf_79F4AE65_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_000784E0(temp_v0);
    }
    return var_v1;
}

s32 _ZN3paf6PhText8CharLeftEj(struct Unk_scePaf_B6F52424_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00078514(temp_v0);
    }
    return var_v1;
}

s32 _ZN3paf6PhText9CharRightEj(struct Unk_scePaf_BA6B8B02_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00078548(temp_v0);
    }
    return var_v1;
}

s32 _ZN3paf6PhText6LineUpEj(struct Unk_scePaf_4D810FDC_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_0007857C(temp_v0);
    }
    return var_v1;
}

s32 _ZN3paf6PhText8LineDownEj(struct Unk_scePaf_ABCBC1C5_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_000785B0(temp_v0);
    }
    return var_v1;
}
