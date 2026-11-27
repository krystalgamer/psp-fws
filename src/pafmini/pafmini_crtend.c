/* lang: c++ */
/* cflags: -O2 */
#include "common.h"
#include "pafmini_decls.h"

void func_000CE028(void) {
    func_ptr *p;

    for (p = D_000D11C0 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_crtend", func_000CE080);

INCLUDE_ASM("nonmatchings/pafmini_crtend", func_000CE3C8);

INCLUDE_ASM("nonmatchings/pafmini_crtend", func_000CE430);

INCLUDE_ASM("nonmatchings/pafmini_crtend", func_000CE4A4);

INCLUDE_ASM("nonmatchings/pafmini_crtend", func_000CE81C);

INCLUDE_ASM("nonmatchings/pafmini_crtend", func_000CE8A4);

INCLUDE_ASM("nonmatchings/pafmini_crtend", func_000CEB0C);

INCLUDE_ASM("nonmatchings/pafmini_crtend", func_000CEC20);

INCLUDE_RODATA("nonmatchings/pafmini_crtend", D_000E04F8);

INCLUDE_RODATA("nonmatchings/pafmini_crtend", D_000E0500);

INCLUDE_RODATA("nonmatchings/pafmini_crtend", D_000E0540);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_crtend", D_000E0580);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_crtend", D_000E0640);
