#include "common.h"
#include "mlnbridge_decls.h"

INCLUDE_ASM("nonmatchings/mlnbridge", module_start);

s32 module_stop(void) {
    sceMgr_driver_8429C9F3();
    return 0;
}

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridge_F9357984);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridge_DE730A46);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridge_7770FC23);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridge_13E68009);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridge_8D7E61DD);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridge_54EDC552);

INCLUDE_ASM("nonmatchings/mlnbridge", sceMlnBridge_3505ECCE);

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
