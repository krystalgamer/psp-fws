#include "common.h"
#include "memab_decls.h"

INCLUDE_ASM("nonmatchings/memab", func_00000000);

INCLUDE_ASM("nonmatchings/memab", func_000000E4);

INCLUDE_ASM("nonmatchings/memab", func_000001C4);

INCLUDE_ASM("nonmatchings/memab", func_0000026C);

INCLUDE_ASM("nonmatchings/memab", func_000002F8);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/memab", func_00000558);
#endif

INCLUDE_ASM("nonmatchings/memab", func_000005A4);

INCLUDE_ASM("nonmatchings/memab", func_000005F8);

INCLUDE_ASM("nonmatchings/memab", func_00000648);

INCLUDE_ASM("nonmatchings/memab", func_00000708);

INCLUDE_ASM("nonmatchings/memab", func_000008C4);

#if FW_VERSION < 352
s32 module_start(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateSema("SceMemab", 0U, 1, 1, NULL);
    D_000028E0 = temp_v0;
    return temp_v0 < 1;
}
#else
s32 module_start(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("SceMemab1", 0U, 1, 1, NULL);
    D_00002EA0 = temp_v0;
    var_v1 = 1;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema("SceMemab2", 0U, 1, 1, NULL);
        D_00003A78 = temp_v0_2;
        var_v1 = 0;
        if (temp_v0_2 <= 0) {
            sceKernelDeleteSema(D_00002EA0);
            var_v1 = 1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 352
s32 module_stop(void) {
    sceKernelDeleteSema(D_000028E0);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/memab", module_stop);
#endif

INCLUDE_ASM("nonmatchings/memab", sceAdhocBBInit);

INCLUDE_ASM("nonmatchings/memab", sceAdhocBBShutdown);

INCLUDE_ASM("nonmatchings/memab", sceAdhocBBAuth1);

INCLUDE_ASM("nonmatchings/memab", sceAdhocBBAuth2);

INCLUDE_ASM("nonmatchings/memab", sceAdhocBBAuth3);

INCLUDE_ASM("nonmatchings/memab", sceAdhocBBAuth4);

INCLUDE_ASM("nonmatchings/memab", sceAdhocBBAuth5);

INCLUDE_ASM("nonmatchings/memab", sceMemab_driver_E6D3ACE2);

INCLUDE_ASM("nonmatchings/memab", sceMemab_driver_B54E1AA7);

INCLUDE_ASM("nonmatchings/memab", sceMemab_driver_F1D2B9B0);

INCLUDE_ASM("nonmatchings/memab", sceMemab_driver_4DF566D3);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/memab", sceAdhocBBGMEncrypt);

INCLUDE_ASM("nonmatchings/memab", sceAdhocBBGMDecrypt);

INCLUDE_ASM("nonmatchings/memab", sceAdhocBBGMCreateSessionKey);
#endif
