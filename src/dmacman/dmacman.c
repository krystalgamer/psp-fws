#include "common.h"
#include "dmacman_decls.h"

INCLUDE_ASM("nonmatchings/dmacman", module_start);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_1C46158A);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", func_00000328);

INCLUDE_ASM("nonmatchings/dmacman", func_00000400);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_D8BC3120);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_2E3BC333);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_32757C57);
#endif

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_7B9634E1);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_59615199);
#endif

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_745E19EF);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_F64BAB99);

INCLUDE_ASM("nonmatchings/dmacman", func_00000800);
#endif

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_3BDEA96C);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_92700CCD);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_A84B084B);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_D0358BE9);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_3FAD5844);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_CE467D9B);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_7D21A2EF);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_DB286D65);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/dmacman", func_00000B5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", func_00000F68);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dmacman", func_00000B10);
#endif

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_5AF32783);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_E18A93A5);

#if FW_VERSION == 100
s32 func_00001388(void **arg0, u32 arg1) {
    s32 temp_v0;
    s32 var_a2;
    u32 var_a3;
    void *temp_v1;

    temp_v1 = *arg0;
    var_a3 = 0;
    var_a2 = 0;
    do {
        temp_v0 = (s32) ((M2C_FIELD(temp_v1, s32 *, 0x18) << 8) | M2C_FIELD(temp_v1, s32 *, 0x14)) >> var_a2;
        var_a2 += 1;
        var_a3 += temp_v0 & 1;
    } while (var_a2 < 0x10);
    return var_a3 >= arg1;
}
#endif

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_904110FC);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/dmacman", func_00001114);

INCLUDE_ASM("nonmatchings/dmacman", func_000014C8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dmacman", func_0000108C);

INCLUDE_ASM("nonmatchings/dmacman", func_00001418);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_D8BC3120);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_2E3BC333);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_59615199);

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_F64BAB99);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_1FC036B7);
#endif

s32 DmacManForKernel_D3F62265(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_A893DA2C);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/dmacman", func_00001A08);

INCLUDE_ASM("nonmatchings/dmacman", func_00001A8C);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", func_000015A8);

INCLUDE_ASM("nonmatchings/dmacman", func_00001860);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001A78);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B08);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B88);

INCLUDE_ASM("nonmatchings/dmacman", func_00001BA8);
#endif
