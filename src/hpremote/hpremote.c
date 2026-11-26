/* cflags: -O2 -frename-registers */
#include "common.h"
#include "hpremote_decls.h"

INCLUDE_RODATA("nonmatchings/hpremote", D_00001FD8);

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_1C5BC5A0);

INCLUDE_ASM("nonmatchings/hpremote", func_000001B8);

INCLUDE_ASM("nonmatchings/hpremote", func_000001FC);

INCLUDE_ASM("nonmatchings/hpremote", func_00000290);

INCLUDE_ASM("nonmatchings/hpremote", func_0000030C);

INCLUDE_ASM("nonmatchings/hpremote", func_00000484);

#if FW_VERSION < 282
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

#if FW_VERSION == 330
s32 func_00000AF4(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00002080, s32, 0x1E4) = 1;
    D_00002080.unk1D0 = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1DC) = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1E0) = 0;
    D_00002080.unk1D4 = 0;
    D_00002080.unk1D8 = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
s32 func_00000AF4(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00002080, s32, 0x1E0) = 1;
    D_00002080.unk1CC = 0;
    D_00002080.unk1D8 = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1DC) = 0;
    D_00002080.unk1D0 = 0;
    D_00002080.unk1D4 = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
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

INCLUDE_ASM("nonmatchings/hpremote", func_00000B40);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmRegisterCallback);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmUnregitserCallback);

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_BAD0828E);

#if FW_VERSION < 282
s32 sceHprm_driver_F04591FA(s32 arg0) {
    D_0000213C = arg0;
    return 0;
}
#else
s32 sceHprm_driver_F04591FA(s32 arg0) {
    D_0000225C = arg0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_1910B327);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmPeekLatch);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmReadLatch);

s32 module_start(void) {
    sceHprm_driver_1C5BC5A0();
    return 0;
}

INCLUDE_ASM("nonmatchings/hpremote", module_reboot_before);

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_588845DA);

#if FW_VERSION == 330
s32 sceHprm_driver_526BB7F4(void) {
    D_00002244_v330 = 1;
    sceSysreg_driver_BB823481(4);
    sceSysreg_driver_7725CA08(4);
    return 0;
}
#else
s32 sceHprm_driver_526BB7F4(void) {
    sceSysreg_driver_BB823481(4);
    sceSysreg_driver_7725CA08(4);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_2C7B8B05);

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_D22913DB);

#if FW_VERSION >= 150 && FW_VERSION < 282
u8 sceHprm_driver_71B5FB67(void) {
    return D_00002176;
}
#endif

#if FW_VERSION < 282
s32 sceHprmIsHeadphoneExist(void) {
    return (s32) D_00002141;
}

s32 sceHprmIsRemoteExist(void) {
    return __builtin_allegrex_max(D_00002142, 0);
}

s32 sceHprmIsMicrophoneExist(void) {
    return __builtin_allegrex_max(D_00002143, 0);
}

s32 sceHprm_driver_4D1E622C(void) {
    sceKernelSetEventFlag(D_00002078, 8U);
    return 0;
}

INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_7B038374);

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

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00001250(s32 arg0) {
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

#if FW_VERSION >= 282
u8 sceHprm_driver_71B5FB67(void) {
    return D_00002226;
}

s32 sceHprmIsHeadphoneExist(void) {
    return (s32) D_00002261;
}

s32 sceHprmIsRemoteExist(void) {
    return __builtin_allegrex_max(D_00002262, 0);
}

s32 sceHprmIsMicrophoneExist(void) {
    return __builtin_allegrex_max(D_00002263, 0);
}
#endif

#if FW_VERSION >= 310
s32 sceHprm_driver_C1777D84(void) {
    return D_000022B0;
}
#endif

#if FW_VERSION >= 282
s32 sceHprm_driver_4D1E622C(void) {
    sceKernelSetEventFlag(D_00002198, 8U);
    return 0;
}

s32 sceHprm_driver_7B038374(M2C_UNK **arg0) {
    if (arg0 != NULL) {
        *arg0 = &D_00002080;
    }
    return D_00002080.unk120;
}

s32 sceHprm_driver_971AE8FB(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_0000225C;
    }
    return 0;
}
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/hpremote", func_0000134C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
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

#if FW_VERSION == 100 || FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/hpremote", func_00001924);
#else
s32 func_00001924(void) {
    s32 temp_a4;
    s32 temp_s1;
    s32 var_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    if (M2C_VFIELD(&D_00002080, s32, 0xC) == 0) {
        func_0000030C();
    }
    if (M2C_VFIELD(&D_00002080, s32, 0xC) == 0) {
        sceKernelCpuResumeIntr(temp_s1);
        var_v0 = 0;
    } else {
        temp_a4 = (M2C_VFIELD(&D_00002080, s32, 0x10) + M2C_VFIELD(&D_00002080, s32, 0xC)) - 1;
        M2C_VFIELD(&D_00002080, s32, 0x10) = (s32) (temp_a4 - (((s32) (temp_a4 + ((u32) (temp_a4 >> 0x1F) >> 0x19)) >> 7) << 7));
        M2C_VFIELD(&D_00002080, s32, 0xC) = 1;
        sceKernelCpuResumeIntr(temp_s1);
        var_v0 = 1;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/hpremote", func_000019D0);
