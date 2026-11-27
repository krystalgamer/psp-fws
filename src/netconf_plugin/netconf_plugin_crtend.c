/* lang: c++ */
/* cflags: -O2 */
#include "common.h"
#include "netconf_plugin_decls.h"

void func_0001A008(void) {
    func_ptr *p;

    for (p = D_0001B0D4 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netconf_plugin_crtend", func_0001A060);
#endif
