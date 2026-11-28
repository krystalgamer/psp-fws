/* compiler[282,300,301,302,303,310,311,330,340]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "emc_ddr_decls.h"

#if FW_VERSION >= 201
s32 module_start(void) {
    sceDdrInit();
    sceKernelDmaRegisterDdrFlush((s32) &sceDdrFlush);
    return 0;
}

s32 module_reboot_before(void) {
    sceKernelDmaRegisterDdrFlush(0);
    sceDdrEnd();
    return 0;
}
#endif

s32 sceDdrInit(void) {
    return 0;
}

s32 sceDdrEnd(void) {
    return 0;
}

s32 sceDdrSuspend(void) {
    return 0;
}

s32 sceDdrResume(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdrFlush);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdrSetPowerDownCounter);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdrGetPowerDownCounter);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdrReadDllDelay);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdrExecSeqCmd);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdrSetup);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_5B5831E5);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_F23B7983);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdrResetDevice);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_888129E8);
#endif

INCLUDE_ASM("nonmatchings/emc_ddr", func_000002A0);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_7251F5AB);

INCLUDE_ASM("nonmatchings/emc_ddr", func_00000390);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdrWriteMaxAllocate);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdr_driver_6955346C);

INCLUDE_ASM("nonmatchings/emc_ddr", func_00000480);

INCLUDE_ASM("nonmatchings/emc_ddr", sceDdrChangePllClock);

INCLUDE_RODATA("nonmatchings/emc_ddr", D_000008C0);

INCLUDE_RODATA("nonmatchings/emc_ddr", D_00000900);
