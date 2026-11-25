#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
u32 multiply(struct Unk_multiply_0 *arg0, s32 arg1, u32 arg2, s32 arg3) {
    u32 var_a4;

    var_a4 = arg1 * arg2;
    if (arg2 != 0) {
        if ((var_a4 / arg2) != arg1) {
            func_0005FFE0(arg0->unk188, arg0->unk0, (s32) "Integer overflow in %s", arg3);
            var_a4 = 0;
        }
    }
    return var_a4;
}

INCLUDE_ASM("nonmatchings/paf_069CF4", TIFFComputeTile);

INCLUDE_ASM("nonmatchings/paf_069CF4", TIFFCheckTile);
#endif
