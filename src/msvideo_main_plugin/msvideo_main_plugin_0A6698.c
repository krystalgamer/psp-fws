/* cflags: -O1 -frename-registers */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

s32 func_000A6698(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28) & 1;
}

s32 func_000A66A4(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0x28), 1, 1);
}

s32 func_000A66B0(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0x28), 4, 1);
}

void func_000A66BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) | 1);
}

void func_000A66CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) | 2);
}

void func_000A66DC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) | 0x10);
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

s32 func_000A6724(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18C);
}

s32 func_000A672C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x190);
}

