#include "common.h"
#include "paf_decls.h"

void func_000EE100(M2C_UNK **arg0) {
    *arg0 = &D_0019AD38;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_000EE138(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4810 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EE164(void) {
    return D_001A4810;
}

s32 scePaf_503FA456(void) {
    return D_001A4810;
}

INCLUDE_RODATA("nonmatchings/paf_0EE100", D_0019AC58);

INCLUDE_RODATA("nonmatchings/paf_0EE100", D_0019AD28);

INCLUDE_RODATA("nonmatchings/paf_0EE100", D_0019AD38);

INCLUDE_RODATA("nonmatchings/paf_0EE100", D_0019AE0C);

INCLUDE_RODATA("nonmatchings/paf_0EE100", D_0019AE18);

INCLUDE_ASM("nonmatchings/paf_0EE100", func_000EE17C);

INCLUDE_ASM("nonmatchings/paf_0EE100", func_000EE258);

