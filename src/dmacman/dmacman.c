#include "common.h"
#include "dmacman_decls.h"

INCLUDE_ASM("nonmatchings/dmacman", module_start);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaExit);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_32757C57);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", func_00000328);

INCLUDE_ASM("nonmatchings/dmacman", func_00000400);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaChExclude);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaChReserve);
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaSoftRequest);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAlloc);
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpFree);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAssign);

INCLUDE_ASM("nonmatchings/dmacman", func_00000800);
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpEnQueue);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpDeQueue);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAllCancel);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpSetCallback);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpSetupMemcpy);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpSetupNormal);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpSetupLink);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpSync);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacman", func_00000B28);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/dmacman", func_00000B2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dmacman", func_00000B5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", func_00000F68);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_00000B10);
#endif

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpQuit);

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

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAssignMultiple);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dmacman", D_00001DF0);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001DF4);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E14);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E2C);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E44);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E5C);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E6C);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001E94);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001EA8);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001F78);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001F94);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001F98);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001F9C);

INCLUDE_RODATA("nonmatchings/dmacman", D_00001FAC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_0000108C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacman", func_000010BC);

INCLUDE_ASM("nonmatchings/dmacman", func_00001458);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dmacman", func_00001114);

INCLUDE_ASM("nonmatchings/dmacman", func_000014C8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001418);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaChExclude);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaChReserve);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAlloc);

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpAssign);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/dmacman", DmacManForKernel_1FC036B7);
#endif

s32 sceKernelDmaOnDebugMode(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dmacman", sceKernelDmaOpFreeLink);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001A08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001B04);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B84);

INCLUDE_ASM("nonmatchings/dmacman", func_00001BA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dmacman", func_00001A8C);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dmacman", func_000015A8);

INCLUDE_ASM("nonmatchings/dmacman", func_00001860);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dmacman", func_00001A78);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B08);

INCLUDE_ASM("nonmatchings/dmacman", func_00001B88);

INCLUDE_ASM("nonmatchings/dmacman", func_00001BA8);
#endif
