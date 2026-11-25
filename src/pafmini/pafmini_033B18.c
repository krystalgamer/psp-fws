#include "common.h"
#include "pafmini_decls.h"

s32 *func_00033B18(s32 **arg0, s32 arg1) {
    s32 **var_a2;
    s32 *temp_s1;

    temp_s1 = func_00033ADC(arg0, arg1);
    var_a2 = arg0;
    if (arg1 != 0) {
        var_a2 = func_00033ADC(arg0, arg1 - 1);
    }
    *var_a2 = (s32 *) *temp_s1;
    if (M2C_FIELD(arg0, s32 ***, 4) == temp_s1) {
        M2C_FIELD(arg0, s32 ***, 4) = var_a2;
    }
    return temp_s1;
}

void scePaf_C4BAD564(s32 arg0) {
    sceKernelDelayThread(arg0 * 0x3E8);
}

INCLUDE_RODATA("nonmatchings/pafmini_033B18", D_000D6BC0);

INCLUDE_RODATA("nonmatchings/pafmini_033B18", D_000D6BC8);

INCLUDE_RODATA("nonmatchings/pafmini_033B18", D_000D6BD4);

INCLUDE_RODATA("nonmatchings/pafmini_033B18", D_000D6BDC);

INCLUDE_RODATA("nonmatchings/pafmini_033B18", D_000D6BE4);

INCLUDE_ASM("nonmatchings/pafmini_033B18", scePaf_BAE16A39);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_033B18", scePaf_41F702EA);
#endif

INCLUDE_ASM("nonmatchings/pafmini_033B18", scePaf_D27DE19A);

void scePaf_2CFAE498(s32 arg0) {
    func_000340C4((s32) &D_000E15CC, arg0);
}

void scePaf_58846DF3(s32 arg0) {
    func_000340C4((s32) &D_000E15D8, arg0);
}

void scePaf_E357380E(s32 arg0) {
    func_000340C4((s32) &D_000E15E4, arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_033B18", func_00033FE0);

void func_00034084(void) {
    func_00033FE0(1, 0xFFFF);
}

void func_000340A4(void) {
    func_00033FE0(0, 0xFFFF);
}
