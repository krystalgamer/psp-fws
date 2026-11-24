/* cflags: -O2 -frename-registers */
#include "common.h"
#include "hpremote_decls.h"

INCLUDE_RODATA("tmp/asm/282/hpremote/nonmatchings/hpremote", D_00001FD8);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", sceHprm_driver_1C5BC5A0);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_000001B8);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_000001FC);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_00000290);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_0000030C);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_00000484);

s32 func_00000AF4(void) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_VFIELD(&D_00002080, s32, 0x1D8) = 1;
    M2C_VFIELD(&D_00002080, s32, 0x1C4) = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1D0) = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1D4) = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1C8) = 0;
    M2C_VFIELD(&D_00002080, s32, 0x1CC) = 0;
    sceKernelCpuResumeIntr(temp_v0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_00000B40);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", sceHprmRegisterCallback);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", sceHprmUnregitserCallback);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", sceHprm_driver_BAD0828E);

s32 sceHprm_driver_F04591FA(s32 arg0) {
    D_0000225C = arg0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", sceHprm_driver_1910B327);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", sceHprmPeekLatch);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", sceHprmReadLatch);

s32 module_start(void) {
    sceHprm_driver_1C5BC5A0();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", module_reboot_before);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", sceHprm_driver_588845DA);

s32 sceHprm_driver_526BB7F4(void) {
    sceSysreg_driver_BB823481(4);
    sceSysreg_driver_7725CA08(4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", sceHprm_driver_2C7B8B05);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", sceHprm_driver_D22913DB);

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

s32 sceHprm_driver_4D1E622C(void) {
    sceKernelSetEventFlag(D_00002198, 8U);
    return 0;
}

s32 sceHprm_driver_7B038374(M2C_UNK **arg0) {
    if (arg0 != NULL) {
        *arg0 = &D_00002080;
    }
    return M2C_VFIELD(&D_00002080, s32, 0x120);
}

s32 sceHprm_driver_971AE8FB(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_0000225C;
    }
    return 0;
}

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

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_000013AC);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_000013F0);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_00001418);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_00001658);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_0000181C);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_00001924);

INCLUDE_ASM("tmp/asm/282/hpremote/nonmatchings/hpremote", func_000019D0);
