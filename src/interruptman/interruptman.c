/* cflags: -O2 -frename-registers */
#include "common.h"
#include "interruptman_decls.h"

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", syslib_D3744BE0);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_58DD8978);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_15894D0B);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_B5A15B30);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_43A7BBDC);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_4D6E7305);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_750E2507);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_494D6D2B);

void InterruptManagerForKernel_55242A8B(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003F9C = (s32) func_000030AC;
    D_00003FA0 = (s32) func_000030B4;
    sceKernelCpuResumeIntr(temp_a0);
}

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_272766F8);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_B386A459);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_CDC86B64);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_D6878EB6);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_F4454E44);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelRegisterSubIntrHandler);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelReleaseSubIntrHandler);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelSuspendSubIntr);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_36B1EF81);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000015F8);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00001628);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000016A0);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00001740);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_0000179C);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00001850);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_0FC68A56);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_02314986);

M2C_UNK *InterruptManagerForKernel_00B6B0F3(void) {
    return &D_00003E00;
}

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00001978);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_F987B1F0);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_07E138EE);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_02475AAF);

void InterruptManagerForKernel_D774BA45(s32 arg0) {
    InterruptManagerForKernel_750E2507(arg0, 0);
}

void InterruptManagerForKernel_2CD783A1(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003F9C = arg1;
    D_00003FA0 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_7A05D976);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_7EF7500F);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_27BC9A45);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_0E224D66);

s32 InterruptManagerForKernel_20804B41(void) {
    return D_00004E7C;
}

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelEnableSubIntr);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelDisableSubIntr);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelResumeSubIntr);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelIsSubInterruptOccurred);

s32 InterruptManager_D2E8363F(void) {
    return 0x80020001;
}

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelRegisterUserSpaceIntrStack);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_30C08374);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_35634A64);

s32 InterruptManagerForKernel_2DC9709B(void) {
    return D_00003F94;
}

s32 InterruptManagerForKernel_E9E652A9(void) {
    return D_00003F98;
}

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_F4D443F3);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_8B61808B);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000022C0);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00002310);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00002380);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000027C0);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_43CD40EF);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_FE28C6D9);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_7AD28215);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_53991063);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_468BC716);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_85F7766D);

s32 func_000030AC(s32 arg0) {
    return arg0;
}

s32 func_000030B4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000030BC);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003118);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003150);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000031D0);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003230);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_0000327C);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000032C4);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_05E9D6C4);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_8DC2BAEF);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelCpuSuspendIntr);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelCpuResumeIntr);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", sceKernelCpuResumeIntrWithSync);

s32 func_0000340C(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003414);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003440);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003550);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000035F4);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003644);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000036A4);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_D63F3B31);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_72CE22E8);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003734);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", InterruptManagerForKernel_DD55A192);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003780);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003790);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000037C0);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000037EC);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003828);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003838);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003878);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000038BC);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000038CC);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000038D8);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000038E4);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000038F0);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_000038FC);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_0000392C);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003940);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003958);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003970);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_00003980);

INCLUDE_ASM("tmp/asm/282/interruptman/nonmatchings/interruptman", func_0000399C);
