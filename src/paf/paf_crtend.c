/* cflags: -O2 */
#include "common.h"
#include "paf_decls.h"

void func_0016B0B0(void) {
    func_ptr *p;

    for (p = D_0016E474 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

INCLUDE_ASM("nonmatchings/paf_crtend", func_0016B108);

INCLUDE_ASM("nonmatchings/paf_crtend", func_0016B450);

INCLUDE_ASM("nonmatchings/paf_crtend", func_0016B4B8);

INCLUDE_ASM("nonmatchings/paf_crtend", func_0016B52C);

INCLUDE_ASM("nonmatchings/paf_crtend", func_0016B8A4);

INCLUDE_ASM("nonmatchings/paf_crtend", func_0016B92C);

INCLUDE_ASM("nonmatchings/paf_crtend", func_0016BB94);

INCLUDE_ASM("nonmatchings/paf_crtend", func_0016BCA8);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_crtend", D_001A2C40);
#endif

INCLUDE_RODATA("nonmatchings/paf_crtend", D_001A2D00);

INCLUDE_RODATA("nonmatchings/paf_crtend", D_001A2D90);
