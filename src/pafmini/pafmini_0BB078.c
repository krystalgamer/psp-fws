/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "pafmini_decls.h"

#if FW_VERSION == 282
s32 func_000BB078(s32 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = *arg0;
    var_a0 = 0;
    if (temp_v0 != 0) {
        *arg2 = temp_v0 + arg1;
        var_a0 = 1;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB098);

s32 func_000BB158(s32 arg0, s32 arg1) {
    return arg0 + (arg1 * 8) + 4;
}

s32 func_000BB168(s32 *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = *arg0;
    return (temp_v1 == 0) ? 0 : (temp_v1 + arg1);
}

void func_000BB178(s32 arg0, s32 arg1, s32 arg2) {
    func_000BB2DC(arg0, arg1, 8, arg2);
}

s32 func_000BB198(struct Unk_func_000BB198_0 *arg0) {
    s32 var_v0;

    var_v0 = -1;
    if (arg0 != NULL) {
        var_v0 = arg0->unkC(arg0->unk0, 1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB1C8);

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB1FC);

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB290);

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB2DC);

void func_000BB318(s32 arg0, s32 arg1) {
    func_000BB2DC(arg0, 0, 0x1C, arg1);
}

void func_000BB33C(s32 arg0, s32 arg1, s32 arg2) {
    func_000BB2DC(arg0, arg1, 8, arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB35C);

s32 func_000BB3C0(s32 arg0, s32 arg1, s32 arg2) {
    return func_000BB1FC(arg0, arg1, 0x41, arg2) != 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB3E4);

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB490);

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB588);

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB6A0);

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB7B4);

INCLUDE_ASM("nonmatchings/pafmini_0BB078", func_000BB88C);

void func_000BB97C(struct Unk_func_000BB97C_0 *arg0, s32 arg1) {
    arg0->unk1F80 = 0;
    func_000BB88C((s32) arg0, arg1, 0);
}

void func_000BB99C(struct Unk_func_000BB99C_0 *arg0, s32 arg1) {
    s32 temp_a2;

    temp_a2 = arg0->unk1F80 + 1;
    arg0->unk1F80 = temp_a2;
    func_000BB88C((s32) arg0, arg1, temp_a2);
}
#endif
