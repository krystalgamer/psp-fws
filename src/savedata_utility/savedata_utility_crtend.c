/* lang: c++ */
/* cflags: -O2 */
#include "common.h"
#include "savedata_utility_decls.h"

void func_000237C8(void) {
    func_ptr *p;

    for (p = D_00024264 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/savedata_utility_crtend", func_00023820);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/savedata_utility_crtend", func_0001E1FC);
#endif

INCLUDE_RODATA("nonmatchings/savedata_utility_crtend", D_000256F0);

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/savedata_utility_crtend", D_00020358);
#endif
