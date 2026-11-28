/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
/* cflags: -O2 */
#include "common.h"
#include "heaparea2_decls.h"

void func_000002FC(void) {
    func_ptr *p;

    for (p = D_00000478 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/heaparea2_crtend", func_00000354);
#endif
