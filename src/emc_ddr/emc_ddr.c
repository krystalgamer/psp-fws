/* cflags: -O2 -frename-registers */
#include "common.h"
#include "emc_ddr_decls.h"

#if FW_VERSION == 100
s32 sceDdr_driver_17D39E17(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceDdr_driver_8698F5DA(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceDdr_driver_623A233F(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceDdr_driver_92289EC0(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_start(void) {
    sceDdr_driver_17D39E17();
    DmacManForKernel_32757C57((s32) &sceDdr_driver_87D86769);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_reboot_before(void) {
    DmacManForKernel_32757C57(0);
    sceDdr_driver_8698F5DA();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 sceDdr_driver_17D39E17(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 sceDdr_driver_8698F5DA(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 sceDdr_driver_623A233F(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 sceDdr_driver_92289EC0(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_87D86769);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_286E1372);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_0DC43DE4);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_6078F911);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_B5694ECD);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_D7C6C313);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_5B5831E5);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_F23B7983);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_91CD8F94);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_888129E8);
#endif

INCLUDE_ASM("nonmatchings/emc_ddr", func_000002A0);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_7251F5AB);

INCLUDE_ASM("nonmatchings/emc_ddr", func_00000390);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_655A9AB0);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_6955346C);

INCLUDE_ASM("nonmatchings/emc_ddr", func_00000480);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_4CE55E76);

INCLUDE_RODATA("nonmatchings/emc_ddr", D_000008C0);

INCLUDE_RODATA("nonmatchings/emc_ddr", D_00000900);
