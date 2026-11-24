#include "common.h"
#include "paf_decls.h"

void func_00117408(M2C_UNK **arg0) {
    *arg0 = &D_0019CEF8;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void func_00117440(struct Unk_func_00117440_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0->unk1E8, s32 *, 0x28) = arg1;
}

s32 func_0011744C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4934 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00117478(void) {
    return D_001A4934;
}

s32 func_00117484(void) {
    return D_001A4934;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_117408", func_00117490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_117408", func_00117510);

