/* cflags: -O2 -frename-registers */
#include "common.h"
#include "interruptman_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/interruptman", syslib_D3744BE0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_02314986);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_00B6B0F3);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_000001E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_00000230);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_00000274);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_000002B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_00000348);
#endif

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_58DD8978);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_15894D0B);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_F987B1F0);
#endif

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_B5A15B30);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_43A7BBDC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_02475AAF);
#endif

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_4D6E7305);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_750E2507);

#if FW_VERSION == 100
void InterruptManagerForKernel_D774BA45(s32 arg0) {
    InterruptManagerForKernel_750E2507(arg0, 0);
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_494D6D2B);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_2CD783A1);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_55242A8B);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_27BC9A45);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_0E224D66);
#endif

#if FW_VERSION != 100
void InterruptManagerForKernel_55242A8B(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003F9C = (s32) func_000030AC;
    D_00003FA0 = (s32) func_000030B4;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_272766F8);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_B386A459);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_CDC86B64);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_D6878EB6);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_F4454E44);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterSubIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseSubIntrHandler);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelEnableSubIntr);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelDisableSubIntr);
#endif

INCLUDE_ASM("nonmatchings/interruptman", sceKernelSuspendSubIntr);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelResumeSubIntr);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsSubInterruptOccurred);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManager_D2E8363F);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_36B1EF81);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_000015F8);

INCLUDE_ASM("nonmatchings/interruptman", func_00001628);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_00001DF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_00001E9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_00001F04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_000016A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_00001740);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_0000179C);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00001850);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterUserSpaceIntrStack);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_0FC68A56);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_02314986);
#endif

#if FW_VERSION != 100
M2C_UNK *InterruptManagerForKernel_00B6B0F3(void) {
    return &D_00003E00;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_00001978);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_F987B1F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_07E138EE);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_02475AAF);
#endif

#if FW_VERSION != 100
void InterruptManagerForKernel_D774BA45(s32 arg0) {
    InterruptManagerForKernel_750E2507(arg0, 0);
}
#endif

#if FW_VERSION != 100
void InterruptManagerForKernel_2CD783A1(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003F9C = arg1;
    D_00003FA0 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION != 100
void InterruptManagerForKernel_7A05D976(s32 arg0, s32 arg1) {
    D_00003E00.unk1084 = arg1;
    D_00003E00.unk1080 = arg0;
}
#endif

#if FW_VERSION != 100
void InterruptManagerForKernel_7EF7500F(void) {
    D_00003E00.unk1084 = 0;
    D_00003E00.unk1080 = 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_27BC9A45);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_0E224D66);
#endif

#if FW_VERSION != 100
s32 InterruptManagerForKernel_20804B41(void) {
    return D_00004E7C;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelEnableSubIntr);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelDisableSubIntr);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelResumeSubIntr);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsSubInterruptOccurred);
#endif

#if FW_VERSION != 100
s32 InterruptManager_D2E8363F(void) {
    return 0x80020001;
}
#endif

#if FW_VERSION != 100
s32 sceKernelRegisterUserSpaceIntrStack(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_s0;

    temp_a0 = sceKernelCpuSuspendIntr();
    var_s0 = 0x8002006D;
    if (D_00003E00.unk1AC == 0) {
        var_s0 = 0x8002006C;
        if (arg0 >= 0) {
            D_00003E00.unk1B0 = arg1;
            var_s0 = 0;
            D_00003E00.unk1AC = arg0;
        }
    }
    sceKernelCpuResumeIntr(temp_a0);
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_30C08374);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_35634A64);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_2DC9709B);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_E9E652A9);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_0FC68A56);
#endif

#if FW_VERSION != 100
s32 InterruptManagerForKernel_2DC9709B(void) {
    return D_00003F94;
}
#endif

#if FW_VERSION != 100
s32 InterruptManagerForKernel_E9E652A9(void) {
    return D_00003F98;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_F4D443F3);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_8B61808B);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_000022C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_00002310);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00002380);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_000027C0);
#endif

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_43CD40EF);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_FE28C6D9);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_FE28C6D9);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_7AD28215);
#endif

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_53991063);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_468BC716);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_85F7766D);

#if FW_VERSION == 100
s32 func_00002FDC(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION == 100
s32 func_00002FE4(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000030AC(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION != 100
s32 func_000030B4(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_000030BC);

INCLUDE_ASM("nonmatchings/interruptman", func_00003118);

INCLUDE_ASM("nonmatchings/interruptman", func_00003150);

INCLUDE_ASM("nonmatchings/interruptman", func_000031D0);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_00003230);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_0000327C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_000032C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_05E9D6C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_8DC2BAEF);
#endif

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuSuspendIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuResumeIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuResumeIntrWithSync);

#if FW_VERSION == 100
s32 func_000031AC(s32 arg0) {
    return arg0 == 0;
}
#endif

#if FW_VERSION != 100
s32 func_0000340C(s32 arg0) {
    return arg0 == 0;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00003414);

INCLUDE_ASM("nonmatchings/interruptman", func_00003440);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_00003550);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_000035F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_00003644);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", func_000036A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_D63F3B31);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_72CE22E8);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00003734);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_DD55A192);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00003780);

INCLUDE_ASM("nonmatchings/interruptman", func_00003790);

INCLUDE_ASM("nonmatchings/interruptman", func_000037C0);

INCLUDE_ASM("nonmatchings/interruptman", func_000037EC);

INCLUDE_ASM("nonmatchings/interruptman", func_00003828);

INCLUDE_ASM("nonmatchings/interruptman", func_00003838);

INCLUDE_ASM("nonmatchings/interruptman", func_00003878);

INCLUDE_ASM("nonmatchings/interruptman", func_000038BC);

INCLUDE_ASM("nonmatchings/interruptman", func_000038CC);

INCLUDE_ASM("nonmatchings/interruptman", func_000038D8);

INCLUDE_ASM("nonmatchings/interruptman", func_000038E4);

INCLUDE_ASM("nonmatchings/interruptman", func_000038F0);

INCLUDE_ASM("nonmatchings/interruptman", func_000038FC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_000034E8);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_0000392C);

INCLUDE_ASM("nonmatchings/interruptman", func_00003940);

INCLUDE_ASM("nonmatchings/interruptman", func_00003958);

INCLUDE_ASM("nonmatchings/interruptman", func_00003970);

INCLUDE_ASM("nonmatchings/interruptman", func_00003980);

INCLUDE_ASM("nonmatchings/interruptman", func_0000399C);
