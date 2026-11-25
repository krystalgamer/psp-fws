/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION != 200
s32 func_00168918(s32 arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_0016B084(arg0 + 0xC);
    *arg1 = temp_v0;
    var_v0 = 0;
    if (temp_v0 & 0x7FF) {
        *arg1 = 0;
        var_v0 = 0x806151FE;
    }
    return var_v0;
}
#endif
