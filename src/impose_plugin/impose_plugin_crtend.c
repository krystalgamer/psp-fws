/* cflags: -O2 */
#include "common.h"
#include "impose_plugin_decls.h"

void func_00001078(void) {
    func_ptr *p;

    for (p = D_00001364 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/impose_plugin_crtend", func_000010D0);
#endif
