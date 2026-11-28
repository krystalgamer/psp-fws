/* lang: c++ */
/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 282
void func_0015B764(struct Unk_func_0015B764_0 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        arg0->unk78 = arg2;
        arg0->unk74 = arg1;
    }
}

s32 func_0015B77C(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x74);
}
#endif
