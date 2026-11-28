/* lang: c++ */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 282
s32 func_001689B4(struct Unk_func_001689B4_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x80615001;
    if (arg0->unk0 & 8) {
        var_v1 = 0;
        *arg1 = arg0->unk4;
    }
    return var_v1;
}
#endif
