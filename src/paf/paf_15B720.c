/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 282
void func_0015B720(struct Unk_func_0015B720_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 != NULL) {
        arg0->unk6C = arg3;
        arg0->unk64 = arg1;
        arg0->unk68 = arg2;
    }
}

s32 func_0015B73C(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x64);
}

void func_0015B748(struct Unk_func_0015B748_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk70 = arg1;
    }
}

s32 func_0015B758(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x70);
}
#endif
