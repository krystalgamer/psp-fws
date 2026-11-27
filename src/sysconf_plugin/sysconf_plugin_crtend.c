/* cflags: -O2 */
#include "common.h"
#include "sysconf_plugin_decls.h"

void func_00017B7C(void) {
    func_ptr *p;

    for (p = D_00018D9C - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/sysconf_plugin_crtend", func_00017BD4);
#endif

INCLUDE_RODATA("nonmatchings/sysconf_plugin_crtend", D_0001EF18);
