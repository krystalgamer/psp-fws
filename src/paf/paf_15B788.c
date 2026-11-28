/* lang: c++ */
/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 282
void func_0015B788(struct Unk_func_0015B788_0 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        arg0->unk80 = arg2;
        arg0->unk7C = arg1;
    }
}

s32 func_0015B7A0(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x7C);
}
#endif
