/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

void func_0015B788(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x80) = arg2;
        M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    }
}

s32 func_0015B7A0(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x7C);
}

