/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003CC14);

INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003CD4C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003CE88);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003D098);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_03CC14", D_000567A0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03CC14", D_000567AC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03CC14", D_000567B8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03CC14", D_000567C4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03CC14", D_000567C8);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003D098);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003D18C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003D4A4);

#if FW_VERSION != 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_03CC14", D_00056840);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/lftv_middleware_03CC14", D_00058B70);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003D648);

INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003D800);

INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003D844);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003D8D4);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_00038AAC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0005A2A8);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03CC14", func_0003D908);
#else
void func_0003D8D4(void) {
    struct Unk_func_0003D8D4_temp_a1 *temp_a1;

    temp_a1 = *D_0005C60C;
    temp_a1->unk8(D_0005C60C, temp_a1);
}

s32 func_0003D900(void) {
    return -1;
}

s32 func_0003D908(void) {
    return -1;
}
#endif
