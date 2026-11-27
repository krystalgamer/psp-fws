/* cflags: -O2 */
#include "common.h"
#include "common_gui_decls.h"

void func_00002D60(void) {
    func_ptr *p;

    for (p = D_00003234 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/common_gui_crtend", func_00002DB8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/common_gui_crtend", D_000037F0);
#endif
