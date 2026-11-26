/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00017CB0);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00017CD4);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00017FE8);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00017F4C);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00015FC0);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00014BBC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_000330F4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_017CB0", D_0005470C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_017CB0", D_0007A2A4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00033160);

INCLUDE_RODATA("nonmatchings/lftv_middleware_017CB0", D_0005470C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_017CB0", D_0007A044);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00017EA0);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00017FF0);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_000180F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_0001822C);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_000182FC);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018420);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_017CB0", D_00054720);
#endif

s32 func_00018640(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018648);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_000186B0);

s32 func_00018788(void) {
    return D_00057F9C;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018794);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_000187CC);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018810);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_000188D8);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00033D54);
#endif

s32 func_00018930(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018938);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_000189A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018A64);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018AB8);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018B14);

s32 func_00018B54(struct Unk_func_00018B54_0 *arg0) {
    return arg0->unk20;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018B5C);

s32 func_00018BD8(s32 arg0, s32 arg1) {
    func_0001903C(arg0, arg1);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018BF8);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018C74);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018EFC);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018F24);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00018F5C);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_0001903C);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_017CB0", D_00054738);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_000190E0);

INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_000190F0);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_017CB0", func_00034590);
#endif
