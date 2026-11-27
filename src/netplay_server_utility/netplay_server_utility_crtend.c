/* lang: c++ */
/* cflags: -O2 */
#include "common.h"
#include "netplay_server_utility_decls.h"

void func_00003A00(void) {
    func_ptr *p;

    for (p = D_00004068 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_utility_crtend", func_00003A58);
#endif

INCLUDE_RODATA("nonmatchings/netplay_server_utility_crtend", D_00004490);
