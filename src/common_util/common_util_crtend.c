/* cflags: -O2 */
#include "common.h"
#include "common_util_decls.h"

void func_00008378(void) {
    func_ptr *p;

    for (p = D_000088E8 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/common_util_crtend", func_000083D0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/common_util_crtend", D_00008030);
#endif

INCLUDE_RODATA("nonmatchings/common_util_crtend", D_00008B70);
