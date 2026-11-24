/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

void func_0015B720(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x6C) = arg3;
        M2C_FIELD(arg0, s32 *, 0x64) = arg1;
        M2C_FIELD(arg0, s32 *, 0x68) = arg2;
    }
}

s32 func_0015B73C(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x64);
}

void func_0015B748(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    }
}

s32 func_0015B758(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x70);
}

