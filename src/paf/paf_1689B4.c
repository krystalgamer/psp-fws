/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_001689B4(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x80615001;
    if (M2C_FIELD(arg0, s32 *, 0) & 8) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_v1;
}

