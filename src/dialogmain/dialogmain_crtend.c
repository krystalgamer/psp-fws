/* lang: c++ */
/* cflags: -O2 */
#include "common.h"
#include "dialogmain_decls.h"

void func_000078E8(void) {
    func_ptr *p;

    for (p = D_00008488 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dialogmain_crtend", func_00005EC0);
#endif
