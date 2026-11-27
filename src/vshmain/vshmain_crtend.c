/* lang: c++ */
/* cflags: -O2 */
#include "common.h"
#include "vshmain_decls.h"

#if FW_VERSION < 350
void func_00025D94(void) {
    func_ptr *p;

    for (p = D_00027820 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/vshmain_crtend", func_0002A604);

INCLUDE_ASM("nonmatchings/vshmain_crtend", func_0002AB78);

INCLUDE_RODATA("nonmatchings/vshmain_crtend", D_000386DC);
#endif
