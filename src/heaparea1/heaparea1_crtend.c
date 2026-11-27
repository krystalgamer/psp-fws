/* cflags: -O2 */
#include "common.h"
#include "heaparea1_decls.h"

void func_000002FC(void) {
    func_ptr *p;

    for (p = D_00000478 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/heaparea1_crtend", func_00000354);
#endif
