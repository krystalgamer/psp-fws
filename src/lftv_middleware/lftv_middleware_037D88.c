/* lang: c++ */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037D88);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", _ZN14Class_00056480D0Ev);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037DB0);
#endif

#if FW_VERSION >= 303
s32 func_00037DB0(struct Unk_func_00037DB0_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk1018 = arg1;
    arg0->unk4 = arg2;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00052FFC);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053050);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00035D48);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00035DA0);
#endif

#if FW_VERSION < 282
Class_0007D8C0::~Class_0007D8C0() {
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000530F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00035E58);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00035F04);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00035FCC);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00036084);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00036100);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000361E4);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000363D0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000365D0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00032914);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000329D0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053430);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0005312C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007D910);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007D920);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007D930);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007D93C);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000532A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000532B0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000532C0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053360);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053400);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0005348C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053518);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00036BE4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_000512B0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_00055DE8_v282);

__asm__(".globl _ZTV19Class_00055DE8_v282\n_ZTV19Class_00055DE8_v282 = D_00055DE8_v282 - 8\n");
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000535AC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_000512B0);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00032E5C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0005390C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_037D88", D_0007DB70);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037200);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000372A0);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00032FF8);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053B40);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00033018);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00036F50);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00033020_v271);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00033030);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000330D0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037080);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00033150);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00033504);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053B0C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053B40);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053BC0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053C3C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00053DF0);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054318);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0005442C);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00033584);
#endif

#if FW_VERSION < 271
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
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0003370C);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000546F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054760);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00033790);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000338F8);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00033974);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037778);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037948);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037974);

Class_00055DE8_v282::~Class_00055DE8_v282() {
}

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000379E8);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000379F8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0003397C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_0005476C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054A6C);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00054B90);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037DC0);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_00037EF4);

INCLUDE_ASM("nonmatchings/lftv_middleware_037D88", func_000382D0);
