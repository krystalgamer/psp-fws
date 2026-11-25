/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lcdc_decls.h"

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lcdc", D_00000C8C);

INCLUDE_RODATA("nonmatchings/lcdc", D_00000D1C);

INCLUDE_RODATA("nonmatchings/lcdc", D_00000D24);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lcdc", D_00000E14);

INCLUDE_RODATA("nonmatchings/lcdc", D_00000ED8);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_B55500A3);
#endif

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_C6F10C77);

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_73A3A01D);

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_0BC2B5E2);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_236095AC);

INCLUDE_ASM("nonmatchings/lcdc", func_00000628);

INCLUDE_ASM("nonmatchings/lcdc", func_00000640);

INCLUDE_ASM("nonmatchings/lcdc", func_0000064C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_F6F413C5);
#endif

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_551C5BC3);

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_FE5A8859);

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_7BDC15C8);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lcdc", module_start);
#else
s32 module_start(void) {
    sceLcdc_driver_B55500A3();
    return 0;
}
#endif

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00000C30);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_B55500A3);
#endif

#if FW_VERSION < 282
s32 sceLcdc_driver_0E8E8774(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00000C30);
    return 0;
}

s32 sceLcdc_driver_DCD51769(void) {
    sceSysreg_driver_F74F14E9();
    sceSysreg_driver_E89243BE();
    return 0;
}

s32 sceLcdc_driver_A182B32C(void) {
    sceSysreg_driver_63B1AADF();
    D_00000C70 = 1;
    return 0;
}

s32 sceLcdc_driver_A0032C3D(void) {
    sceSysreg_driver_F74F14E9();
    D_00000C70 = 0;
    return 0;
}
#else
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00000EF0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_0E8E8774);

s32 sceLcdc_driver_DCD51769(void) {
    sceSysreg_driver_F74F14E9();
    sceSysreg_driver_E89243BE();
    return 0;
}

s32 sceLcdc_driver_A182B32C(void) {
    sceSysreg_driver_63B1AADF();
    D_00000F30 = 1;
    return 0;
}

s32 sceLcdc_driver_A0032C3D(void) {
    sceSysreg_driver_F74F14E9();
    D_00000F30 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_00EF7E87);
#endif

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_A2E70DA6);

#if FW_VERSION == 271
s32 sceLcdc_driver_825DB9C5(void) {
    return D_00000DA8;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lcdc", D_00000B90);

INCLUDE_RODATA("nonmatchings/lcdc", D_00000BF0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_236095AC);

s32 sceLcdc_driver_825DB9C5(void) {
    return D_00000F3C;
}
#endif

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_965D1633);

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_B3BA421A);

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_3107417C);

INCLUDE_ASM("nonmatchings/lcdc", sceLcdc_driver_E08B076B);

INCLUDE_ASM("nonmatchings/lcdc", func_00000B30);
