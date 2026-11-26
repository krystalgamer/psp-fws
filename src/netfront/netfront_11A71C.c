/* cflags: -Os */
#include "common.h"
#include "netfront_decls.h"

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/netfront_11A71C", func_0011A71C);

s32 func_0011A72C(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/netfront_11A71C", func_0011A734);

INCLUDE_ASM("nonmatchings/netfront_11A71C", func_0011A804);
#endif
