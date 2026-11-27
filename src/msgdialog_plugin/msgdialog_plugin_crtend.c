/* cflags: -O2 */
#include "common.h"
#include "msgdialog_plugin_decls.h"

void func_00000FBC(void) {
    func_ptr *p;

    for (p = D_000012A8 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msgdialog_plugin_crtend", func_00001014);
#endif
