/* cflags: -O2 -frename-registers */
#include "common.h"
#include "hpremote_decls.h"

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/hpremote", D_00002104);

INCLUDE_RODATA("nonmatchings/hpremote", D_00002108);

INCLUDE_RODATA("nonmatchings/hpremote", D_0000211C);

INCLUDE_RODATA("nonmatchings/hpremote", D_00002134);

INCLUDE_RODATA("nonmatchings/hpremote", D_00002148);

INCLUDE_RODATA("nonmatchings/hpremote", D_00002164);

INCLUDE_RODATA("nonmatchings/hpremote", D_00002184);

INCLUDE_RODATA("nonmatchings/hpremote", D_0000219C);

INCLUDE_RODATA("nonmatchings/hpremote", D_000021B4);

INCLUDE_RODATA("nonmatchings/hpremote", D_000021CC);

INCLUDE_RODATA("nonmatchings/hpremote", D_000021E4);

INCLUDE_RODATA("nonmatchings/hpremote", D_000021F4);

INCLUDE_RODATA("nonmatchings/hpremote", D_00002214);

INCLUDE_RODATA("nonmatchings/hpremote", D_0000221C);

INCLUDE_RODATA("nonmatchings/hpremote", D_0000226C);

INCLUDE_RODATA("nonmatchings/hpremote", D_0000227C);

INCLUDE_RODATA("nonmatchings/hpremote", D_0000234C);

INCLUDE_RODATA("nonmatchings/hpremote", D_0000236C);

INCLUDE_RODATA("nonmatchings/hpremote", D_00002370);

INCLUDE_RODATA("nonmatchings/hpremote", D_00002374);

INCLUDE_RODATA("nonmatchings/hpremote", D_00002378);

INCLUDE_RODATA("nonmatchings/hpremote", D_000023A8);

INCLUDE_RODATA("nonmatchings/hpremote", D_000023AC);

INCLUDE_RODATA("nonmatchings/hpremote", D_000023B0);

INCLUDE_RODATA("nonmatchings/hpremote", D_000023B8);

INCLUDE_RODATA("nonmatchings/hpremote", D_000023D8);
#endif

INCLUDE_RODATA("nonmatchings/hpremote", D_00001FD8);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmInit);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/hpremote", sceHprmResume);
#endif

INCLUDE_ASM("nonmatchings/hpremote", func_000001B8);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/hpremote", func_00000368);

INCLUDE_ASM("nonmatchings/hpremote", func_000003D4);
#else
INCLUDE_ASM("nonmatchings/hpremote", func_000001FC);

INCLUDE_ASM("nonmatchings/hpremote", func_00000290);
#endif

INCLUDE_ASM("nonmatchings/hpremote", func_0000030C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/hpremote", func_0000070C);
#else
INCLUDE_ASM("nonmatchings/hpremote", func_00000484);
#endif

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

#if FW_VERSION >= 350
s32 func_00000AF4(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00002080, s32, 0x1F4) = 1;
    M2C_VFIELD(&D_00002080, s32, 0x1E0) = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1EC) = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1F0) = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1E4) = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1E8) = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
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

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/hpremote", sceHprm_driver_FD7DE6CD);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmUpdateCableType);
#else
INCLUDE_ASM("nonmatchings/hpremote", sceHprmUnregitserCallback);
#endif

INCLUDE_ASM("nonmatchings/hpremote", sceHprmGetModel);

#if FW_VERSION >= 350
s32 sceHprmReset(void) {
    sceKernelSetEventFlag(D_00002198, 8U);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 sceHprmSetIdleCancelKey(s32 arg0) {
    D_0000213C = arg0;
    return 0;
}
#else
s32 sceHprmSetIdleCancelKey(s32 arg0) {
    D_0000225C = arg0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/hpremote", sceHprmPeekCurrentKey);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmPeekLatch);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmReadLatch);

s32 module_start(void) {
    sceHprmInit();
    return 0;
}

INCLUDE_ASM("nonmatchings/hpremote", module_reboot_before);

INCLUDE_ASM("nonmatchings/hpremote", sceHprmEnd);

#if FW_VERSION >= 350
s32 sceHprmSuspend(void) {
    D_000025B4 = 1;
    sceSysregUartIoDisable(4);
    sceSysregUartClkEnable(4);
    return 0;
}
#endif

#if FW_VERSION == 340
s32 sceHprmSuspend(void) {
    D_00002244_v340 = 1;
    sceSysregUartIoDisable(4);
    sceSysregUartClkEnable(4);
    return 0;
}
#endif

#if FW_VERSION == 330
s32 sceHprmSuspend(void) {
    D_00002244_v330 = 1;
    sceSysregUartIoDisable(4);
    sceSysregUartClkEnable(4);
    return 0;
}
#endif

#if FW_VERSION < 330
s32 sceHprmSuspend(void) {
    sceSysregUartIoDisable(4);
    sceSysregUartClkEnable(4);
    return 0;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/hpremote", sceHprmResume);
#endif

INCLUDE_ASM("nonmatchings/hpremote", sceHprmSetConnectCallback);

#if FW_VERSION >= 150 && FW_VERSION < 282
u8 sceHprmGetHpDetect(void) {
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

s32 sceHprmReset(void) {
    sceKernelSetEventFlag(D_00002078, 8U);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/hpremote", sceHprmGetInternalState);
#endif

#if FW_VERSION == 100
s32 sceHprmGetInternalState(s32 **arg0) {
    if (arg0 != NULL) {
        *arg0 = (s32 *) &D_00002080;
    }
    return D_00002080.unk120;
}
#endif

#if FW_VERSION < 282
s32 sceHprmGetIdleCancelKey(s32 *arg0) {
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
        sceHprmResume();
        break;
    case 0x400C:
        sceSysregUartIoDisable(4);
        sceSysregUartClkEnable(4);
        break;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
u8 sceHprmGetHpDetect(void) {
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
s32 sceHprmGetCableType(void) {
    return D_000022B0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 sceHprmReset(void) {
    sceKernelSetEventFlag(D_00002198, 8U);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 sceHprmGetInternalState(M2C_UNK **arg0) {
    if (arg0 != NULL) {
        *arg0 = &D_00002080;
    }
    return D_00002080.unk120;
}

s32 sceHprmGetIdleCancelKey(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_0000225C;
    }
    return 0;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/hpremote", func_0000134C);
#endif

#if FW_VERSION >= 350
void func_000016EC(s8 arg0) {
    D_0000263C = arg0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_0000134C(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x1000C:
        sceHprmResume();
        break;
    case 0x400C:
        sceSysregUartIoDisable(4);
        sceSysregUartClkEnable(4);
        break;
    }
    return 0;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/hpremote", func_000013AC);
#endif

INCLUDE_ASM("nonmatchings/hpremote", func_000013F0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/hpremote", func_00001720);
#endif

INCLUDE_ASM("nonmatchings/hpremote", func_00001418);

INCLUDE_ASM("nonmatchings/hpremote", func_00001658);

INCLUDE_ASM("nonmatchings/hpremote", func_0000181C);

#if FW_VERSION >= 271
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
