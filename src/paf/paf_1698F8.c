/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_001698F8(void *arg0, s32 *arg1) {
    *arg1 = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x30), u8 *, 1);
    return 0;
}

