/* lang: c++ */
/* cflags: -O2 */
#include "common.h"
#include "dlgsample_plugin_decls.h"

void func_000002F4(void) {
    func_ptr *p;

    for (p = D_000004B8 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

INCLUDE_RODATA("nonmatchings/dlgsample_plugin_0002F4", D_000004CC);

INCLUDE_RODATA("nonmatchings/dlgsample_plugin_0002F4", D_000004D4);
