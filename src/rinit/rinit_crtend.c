/* cflags: -O2 */
#include "common.h"
#include "rinit_decls.h"

void __do_global_ctors_aux(void) {
    func_ptr *p;

    for (p = D_0000B28C - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000BF00);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000BF10);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000BFD8);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000BFF8);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000BFFC);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000C028);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000C02C);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000C030);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000C034);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000C038);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000C03C);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000C040);

INCLUDE_RODATA("nonmatchings/rinit_crtend", D_0000C058);
