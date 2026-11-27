/* lang: c++ */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00038870);
#endif

#if FW_VERSION < 271 || FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_000564D0);
#endif

#if FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E158);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00055A10);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00038984);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_000561A8);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_000563AC);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E1B8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E1C0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E1D4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E1DC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E1F8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E208);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E224);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E22C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E230);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E234);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_0007E23C);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00038D3C);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00038F40);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00039094);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_0003921C);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_000392DC);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_000393C8);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_000351FC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00056688);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00039444);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_000395D4);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_000397D8);

void func_000397F0(s32 arg0) {
    func_00039B48(arg0);
    func_000399F4(arg0);
}

void func_0003981C(s32 arg0) {
    func_00039B48(arg0);
    func_000399F4(arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00039848);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_000398D8);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_000399F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00039AA8);

s32 func_00039B34(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return 0;
}

s32 func_00039B40(s32 *arg0) {
    return *arg0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00039B48);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00039BBC);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00039BF8);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00039C54);

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00039D18);

#if FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_00056628);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_00056648);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_00056660);

INCLUDE_RODATA("nonmatchings/lftv_middleware_038870", D_00056690);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_038870", func_00039DB8);
