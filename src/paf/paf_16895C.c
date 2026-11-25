/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
s32 func_0016895C(s32 arg0, s32 *arg1, s32 *arg2) {
    *arg1 = func_0016B084(arg0 + 0x10);
    *arg2 = func_0016B084(arg0 + 0x14);
    return 0;
}
#endif
