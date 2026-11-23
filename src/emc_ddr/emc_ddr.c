#include "common.h"
#include "emc_ddr_decls.h"

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", module_start);

s32 module_reboot_before(void) {
    DmacManForKernel_32757C57(0);
    sceDdr_driver_8698F5DA();
    return 0;
}

s32 sceDdr_driver_17D39E17(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_8698F5DA);

s32 sceDdr_driver_623A233F(void) {
    return 0;
}

s32 sceDdr_driver_92289EC0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_87D86769);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_286E1372);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_0DC43DE4);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_6078F911);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_B5694ECD);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_D7C6C313);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_5B5831E5);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_F23B7983);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_91CD8F94);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_888129E8);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", func_000002A0);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_7251F5AB);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", func_00000390);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_655A9AB0);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_6955346C);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", func_00000480);

INCLUDE_ASM("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", sceDdr_driver_4CE55E76);

INCLUDE_RODATA("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", D_000008C0);

INCLUDE_RODATA("tmp/asm/282/emc_ddr/nonmatchings/emc_ddr", D_00000900);
