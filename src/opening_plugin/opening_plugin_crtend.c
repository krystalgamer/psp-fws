/* cflags: -O2 */
#include "common.h"
#include "opening_plugin_decls.h"

void func_00001024(void) {
    func_ptr *p;

    for (p = D_000013D4 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/opening_plugin_crtend", func_0000107C);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/opening_plugin_crtend", D_00001638);

INCLUDE_RODATA("nonmatchings/opening_plugin_crtend", D_00001648);
#endif
