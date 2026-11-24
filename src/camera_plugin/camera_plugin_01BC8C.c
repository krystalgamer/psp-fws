/* cflags: -O1 -frename-registers */
#include "common.h"
#include "camera_plugin_decls.h"

s32 func_0001BC8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28) & 1;
}

s32 func_0001BC98(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0x28), 1, 1);
}

s32 func_0001BCA4(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0x28), 4, 1);
}

void func_0001BCB0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) | 1);
}

void func_0001BCC0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) | 2);
}

void func_0001BCD0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) | 0x10);
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

s32 func_0001BD18(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18C);
}

s32 func_0001BD20(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x190);
}

