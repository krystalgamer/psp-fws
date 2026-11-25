#include "common.h"
#include "emc_sm_decls.h"

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/emc_sm", D_000026F0);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_A513BB12);

INCLUDE_ASM("nonmatchings/emc_sm", func_0000014C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/emc_sm", func_00000160);
#else
INCLUDE_RODATA("nonmatchings/emc_sm", D_00002828);

INCLUDE_ASM("nonmatchings/emc_sm", func_0000015C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_84EE5D76);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_AE4438C7);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_41FFA822);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_7AF7B77A);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_FCDF7610);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_766756EF);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_0ADC8686);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_EB0A0022);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_5182C394);

s32 module_start(void) {
    sceNand_driver_A513BB12();
    return 0;
}

INCLUDE_ASM("nonmatchings/emc_sm", module_reboot_before);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_D305870E);

s32 sceNand_driver_73A68408(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_0F9BBBBD);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_84EE5D76);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_E41A11DE);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_89BDCA08);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_8AF0AB9F);

void sceNand_driver_E05AE88D(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceNand_driver_766756EF(arg0, arg1, arg2, arg3, 0x20);
}

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_8932166A);

void sceNand_driver_C478C1DE(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceNand_driver_766756EF(arg0, arg1, arg2, arg3, 0x31);
}

void sceNand_driver_BADD5D46(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    sceNand_driver_0ADC8686(arg0, arg1, arg2, arg3, 0x31);
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/emc_sm", func_00000FD4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/emc_sm", func_00001044);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/emc_sm", func_00000F18);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/emc_sm", func_00000F58);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/emc_sm", func_00000F40);

INCLUDE_ASM("nonmatchings/emc_sm", func_00000FEC);
#endif

INCLUDE_ASM("nonmatchings/emc_sm", func_00001180);

INCLUDE_ASM("nonmatchings/emc_sm", func_0000135C);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_D897C343);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_B2B021E5);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_C32EA051);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_5AC02755);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_8933B2E0);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_01F09203);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_C29DA136);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_3F76BC21);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_EBA0E6C6);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_2FF6081B);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_2674CFFE);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_9B2AC433);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_CE9843E6);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_B07C41D4);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_C1376222);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_716CD2B2);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_EF55F193);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_18B78661);

INCLUDE_ASM("nonmatchings/emc_sm", sceNand_driver_B795D2ED);

INCLUDE_ASM("nonmatchings/emc_sm", func_0000214C);

INCLUDE_RODATA("nonmatchings/emc_sm", D_00002860);
