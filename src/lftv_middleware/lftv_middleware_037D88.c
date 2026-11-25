/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037D88);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037DB0);
#else
s32 func_00037DB0(struct Unk_func_00037DB0_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk1018 = arg1;
    arg0->unk4 = arg2;
    return 0;
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00052FFC);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053050);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000530A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000530CC);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000530F4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053430);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0005312C);
#endif

#if FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007D910);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007D920);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007D930);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007D93C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000532A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000532B0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000532C0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053360);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053400);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0005348C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053518);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000535AC);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0005390C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007DB70);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037200);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000372A0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053B0C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053B40);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053BC0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053C3C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053DF0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054318);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0005442C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054434);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007DDA8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007DDC0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007DDDC);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007E0D0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007DDF8);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000544DC);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054534);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000545B0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054690);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000546F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054760);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0005476C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054A6C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054B90);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037DC0);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037EF4);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000382D0);
