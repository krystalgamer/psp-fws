#include "common.h"
#include "mlnbridge_decls.h"

INCLUDE_ASM("nonmatchings/mlnbridge", module_start);

s32 module_stop(void) {
    sceMgrAesEnd();
    return 0;
}

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridgeSetDKS);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridgeAesCbcEncrypt);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridgeAesCbcDecrypt);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridgeAesEcbEncrypt);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridgeAesEcbDecrypt);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridgeSHA1);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridgeHMAC);

INCLUDE_ASM("nonmatchings/mlnbridge", func_000005B0);

INCLUDE_ASM("nonmatchings/mlnbridge", func_00000700);

INCLUDE_ASM("nonmatchings/mlnbridge", func_00000818);

INCLUDE_ASM("nonmatchings/mlnbridge", func_00000894);

INCLUDE_ASM("nonmatchings/mlnbridge", func_00000964);

INCLUDE_ASM("nonmatchings/mlnbridge", func_00000AD4);

INCLUDE_ASM("nonmatchings/mlnbridge", func_00000CA4);

INCLUDE_ASM("nonmatchings/mlnbridge", func_00000EA0);

INCLUDE_ASM("nonmatchings/mlnbridge", func_00000F10);

INCLUDE_ASM("nonmatchings/mlnbridge", func_00000F88);

INCLUDE_ASM("nonmatchings/mlnbridge", func_000010F0);

INCLUDE_RODATA("nonmatchings/mlnbridge", D_00001520);

INCLUDE_RODATA("nonmatchings/mlnbridge", D_00001538);
