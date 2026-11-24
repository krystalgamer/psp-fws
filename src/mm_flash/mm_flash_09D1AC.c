/* cflags: -Os */
#include "common.h"
#include "mm_flash_decls.h"

void func_0009D1AC(s32 arg0) {
    if (arg0 != 0) {
        func_00090730(*func_0009F1C0(), arg0, 0);
    }
}

void func_0009D1E8(void *arg0) {
    func_000000E8(M2C_FIELD(M2C_FIELD(arg0, void **, 0xFFC), s32 *, 4));
}

void func_0009D208(void *arg0) {
    func_00088558(arg0);
}

void func_0009D224(void *arg0) {
    func_000885B0(arg0);
}

void func_0009D240(void) {
    func_00091B44();
}

void func_0009D25C(void *arg0, s32 arg1) {
    func_00088518(arg0, arg1);
}

s32 func_0009D278(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10D8);
}

s32 func_0009D280(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 func_0009D288(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10E0);
}

void func_0009D290(void *arg0) {
    func_000000E8(M2C_FIELD(arg0, s32 *, 4));
}

