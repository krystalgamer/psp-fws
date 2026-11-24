/* cflags: -O2 -frename-registers */
#include "common.h"
#include "hpremote_decls.h"

INCLUDE_RODATA("nonmatchings/hpremote", D_00001FD8);

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_1C5BC5A0);

INCLUDE_ASM("nonmatchings/hpremote", func_000001B8);

INCLUDE_ASM("nonmatchings/hpremote", func_000001FC);

INCLUDE_ASM("nonmatchings/hpremote", func_00000290);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/hpremote", func_0000030C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/hpremote", func_0000030C);
#endif

INCLUDE_ASM("nonmatchings/hpremote", func_00000484);

#if FW_VERSION == 100
s32 func_00000AE4(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    D_00002080.unk1D8 = 1;
    D_00002080.unk1C4 = 0;
    D_00002080.unk1D0 = 0;
    D_00002080.unk1D4 = 0;
    D_00002080.unk1C8 = 0;
    D_00002080.unk1CC = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/hpremote", func_00000B40);
#endif

#if FW_VERSION != 100
s32 func_00000AF4(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    D_00002080.unk1D8 = 1;
    D_00002080.unk1C4 = 0;
    D_00002080.unk1D0 = 0;
    D_00002080.unk1D4 = 0;
    D_00002080.unk1C8 = 0;
    D_00002080.unk1CC = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/hpremote", func_00000B40);
#endif

INCLUDE_ASM("nonmatchings/hpremote", sceHprmRegisterCallback);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmUnregitserCallback);

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_BAD0828E);

#if FW_VERSION == 100
s32 sceHprm_driver_F04591FA(s32 arg0) {
    D_0000213C = arg0;
    return 0;
}
#endif

#if FW_VERSION != 100
s32 sceHprm_driver_F04591FA(s32 arg0) {
    D_0000225C = arg0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_1910B327);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmPeekLatch);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmReadLatch);

#if FW_VERSION == 100
s32 module_start(void) {
    sceHprm_driver_1C5BC5A0();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_start(void) {
    sceHprm_driver_1C5BC5A0();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/hpremote", module_reboot_before);

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_588845DA);

#if FW_VERSION == 100
s32 sceHprm_driver_526BB7F4(void) {
    sceSysreg_driver_BB823481(4);
    sceSysreg_driver_7725CA08(4);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 sceHprm_driver_526BB7F4(void) {
    sceSysreg_driver_BB823481(4);
    sceSysreg_driver_7725CA08(4);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_2C7B8B05);

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_D22913DB);

#if FW_VERSION == 100
s32 sceHprmIsHeadphoneExist(void) {
    return (s32) D_00002141;
}
#endif

#if FW_VERSION == 100
s32 sceHprmIsRemoteExist(void) {
    return __builtin_allegrex_max(D_00002142, 0);
}
#endif

#if FW_VERSION == 100
s32 sceHprmIsMicrophoneExist(void) {
    return __builtin_allegrex_max(D_00002143, 0);
}
#endif

#if FW_VERSION == 100
s32 sceHprm_driver_4D1E622C(void) {
    sceKernelSetEventFlag(D_00002078, 8U);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_7B038374);
#endif

#if FW_VERSION == 100
s32 sceHprm_driver_971AE8FB(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_0000213C;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/hpremote", func_00001250);
#endif

#if FW_VERSION != 100
u8 sceHprm_driver_71B5FB67(void) {
    return D_00002226;
}
#endif

#if FW_VERSION != 100
s32 sceHprmIsHeadphoneExist(void) {
    return (s32) D_00002261;
}
#endif

#if FW_VERSION != 100
s32 sceHprmIsRemoteExist(void) {
    return __builtin_allegrex_max(D_00002262, 0);
}
#endif

#if FW_VERSION != 100
s32 sceHprmIsMicrophoneExist(void) {
    return __builtin_allegrex_max(D_00002263, 0);
}
#endif

#if FW_VERSION != 100
s32 sceHprm_driver_4D1E622C(void) {
    sceKernelSetEventFlag(D_00002198, 8U);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 sceHprm_driver_7B038374(M2C_UNK **arg0) {
    if (arg0 != NULL) {
        *arg0 = &D_00002080;
    }
    return D_00002080.unk120;
}
#endif

#if FW_VERSION != 100
s32 sceHprm_driver_971AE8FB(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_0000225C;
    }
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_0000134C(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x1000C:
        sceHprm_driver_2C7B8B05();
        break;
    case 0x400C:
        sceSysreg_driver_BB823481(4);
        sceSysreg_driver_7725CA08(4);
        break;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/hpremote", func_000013AC);

INCLUDE_ASM("nonmatchings/hpremote", func_000013F0);

INCLUDE_ASM("nonmatchings/hpremote", func_00001418);

INCLUDE_ASM("nonmatchings/hpremote", func_00001658);

INCLUDE_ASM("nonmatchings/hpremote", func_0000181C);

INCLUDE_ASM("nonmatchings/hpremote", func_00001924);

INCLUDE_ASM("nonmatchings/hpremote", func_000019D0);
