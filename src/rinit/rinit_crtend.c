/* cflags: -O2 */
#include "common.h"
#include "rinit_decls.h"

void __do_global_ctors_aux(void) {
    func_ptr *p;

    for (p = D_0000B28C - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

INCLUDE_RODATA("nonmatchings/rinit_crtend", __thenan_df);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000C058);
