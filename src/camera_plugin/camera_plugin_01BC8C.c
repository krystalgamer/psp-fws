/* cflags: -O1 -frename-registers */
#include "common.h"
#include "camera_plugin_decls.h"

s32 func_0001BC8C(struct Unk_func_0001BC8C_0 *arg0) {
    return arg0->unk28 & 1;
}

s32 func_0001BC98(struct Unk_func_0001BC98_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk28, 1, 1);
}

s32 func_0001BCA4(struct Unk_func_0001BCA4_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk28, 4, 1);
}

void func_0001BCB0(struct Unk_func_0001BCB0_0 *arg0) {
    arg0->unk28 = (s32) (arg0->unk28 | 1);
}

void func_0001BCC0(struct Unk_func_0001BCC0_0 *arg0) {
    arg0->unk28 = (s32) (arg0->unk28 | 2);
}

void func_0001BCD0(struct Unk_func_0001BCD0_0 *arg0) {
    arg0->unk28 = (s32) (arg0->unk28 | 0x10);
}

s32 func_0001BCE0(s32 arg0) {
    return arg0 + 0x84;
}

s32 func_0001BCE8(s32 arg0) {
    return arg0 + 0xBC;
}

s32 func_0001BCF0(s32 arg0) {
    return arg0 + 0x11C;
}

s32 func_0001BCF8(s32 arg0) {
    return arg0 + 0xF4;
}

s32 func_0001BD00(s32 arg0) {
    return arg0 + 0x154;
}

s32 func_0001BD08(s32 arg0) {
    return arg0 + 0x198;
}

s32 func_0001BD10(s32 arg0) {
    return arg0 + 0x1B0;
}

s32 func_0001BD18(struct Unk_func_0001BD18_0 *arg0) {
    return arg0->unk18C;
}

s32 func_0001BD20(struct Unk_func_0001BD20_0 *arg0) {
    return arg0->unk190;
}
