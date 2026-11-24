/* cflags: -O1 -frename-registers */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

s32 func_000A6698(struct Unk_func_000A6698_0 *arg0) {
    return arg0->unk28 & 1;
}

s32 func_000A66A4(struct Unk_func_000A66A4_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk28, 1, 1);
}

s32 func_000A66B0(struct Unk_func_000A66B0_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk28, 4, 1);
}

void func_000A66BC(struct Unk_func_000A66BC_0 *arg0) {
    arg0->unk28 = (s32) (arg0->unk28 | 1);
}

void func_000A66CC(struct Unk_func_000A66CC_0 *arg0) {
    arg0->unk28 = (s32) (arg0->unk28 | 2);
}

void func_000A66DC(struct Unk_func_000A66DC_0 *arg0) {
    arg0->unk28 = (s32) (arg0->unk28 | 0x10);
}

s32 func_000A66EC(s32 arg0) {
    return arg0 + 0x84;
}

s32 func_000A66F4(s32 arg0) {
    return arg0 + 0xBC;
}

s32 func_000A66FC(s32 arg0) {
    return arg0 + 0x11C;
}

s32 func_000A6704(s32 arg0) {
    return arg0 + 0xF4;
}

s32 func_000A670C(s32 arg0) {
    return arg0 + 0x154;
}

s32 func_000A6714(s32 arg0) {
    return arg0 + 0x198;
}

s32 func_000A671C(s32 arg0) {
    return arg0 + 0x1B0;
}

s32 func_000A6724(struct Unk_func_000A6724_0 *arg0) {
    return arg0->unk18C;
}

s32 func_000A672C(struct Unk_func_000A672C_0 *arg0) {
    return arg0->unk190;
}

