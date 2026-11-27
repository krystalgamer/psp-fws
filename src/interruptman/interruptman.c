/* cflags[100]: -O1 -frename-registers */
/* cflags[100]: -Os */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "interruptman_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/interruptman", syslib_D3744BE0);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/interruptman", D_00003E3C);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003E40);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003E60);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003E78);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003E8C);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003EA0);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003EC0);

INCLUDE_RODATA("nonmatchings/interruptman", D_00003EDC);

INCLUDE_RODATA("nonmatchings/interruptman", D_000040B4);

INCLUDE_RODATA("nonmatchings/interruptman", D_000040C8);

INCLUDE_RODATA("nonmatchings/interruptman", D_00004110);

INCLUDE_RODATA("nonmatchings/interruptman", D_0000411C);

INCLUDE_RODATA("nonmatchings/interruptman", D_00004124);

INCLUDE_RODATA("nonmatchings/interruptman", D_00004130);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_15894D0B);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetIntrLevel);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_43A7BBDC);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelEnableIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelSuspendIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelResumeIntr);

void ReleaseContextHooks(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003AAC = (s32) func_00002FDC;
    D_00003AB0 = (s32) func_00002FE4;
    sceKernelCpuResumeIntr(temp_a0);
}

INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterDebuggerIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseDebuggerIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCallSubIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetUserIntrStack);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCallUserIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterSubIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseSubIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelSuspendSubIntr);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelQueryIntrHandlerInfo);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/interruptman", QueryIntrHandlerInfo);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", func_000015B4);

INCLUDE_ASM("nonmatchings/interruptman", func_000015E4);

INCLUDE_ASM("nonmatchings/interruptman", func_0000165C);

INCLUDE_ASM("nonmatchings/interruptman", func_000016FC);

INCLUDE_ASM("nonmatchings/interruptman", func_00001764);

INCLUDE_ASM("nonmatchings/interruptman", func_00001818);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetPrimarySyscallHandler);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuEnableIntr);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/interruptman", QueryInterruptManCB);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 *QueryInterruptManCB(void) {
    return &D_00003910;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_000001E0);

INCLUDE_ASM("nonmatchings/interruptman", func_00000230);

INCLUDE_ASM("nonmatchings/interruptman", func_00000274);

INCLUDE_ASM("nonmatchings/interruptman", func_000002B8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", func_00000348);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_15894D0B);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseIntrHandler);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_07E138EE);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetIntrLevel);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_43A7BBDC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsInterruptOccurred);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelEnableIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelSuspendIntr);
#endif

#if FW_VERSION < 282
void sceKernelDisableIntr(s32 arg0) {
    sceKernelSuspendIntr(arg0, 0);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelResumeIntr);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", RegisterContextHooks);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void RegisterContextHooks(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003AAC = arg1;
    D_00003AB0 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", ReleaseContextHooks);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", UnSupportIntr);

INCLUDE_ASM("nonmatchings/interruptman", SupportIntr);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 sceKernelGetIntrSyscallFrame(void) {
    return D_00004ABC;
}
#endif

#if FW_VERSION >= 282
void ReleaseContextHooks(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003F9C = (s32) func_000030AC;
    D_00003FA0 = (s32) func_000030B4;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterDebuggerIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseDebuggerIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCallSubIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetUserIntrStack);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCallUserIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterSubIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseSubIntrHandler);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelEnableSubIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelDisableSubIntr);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSuspendSubIntr);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelResumeSubIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsSubInterruptOccurred);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", QueryIntrHandlerInfo);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 QueryIntrHandlerInfo(void) {
    return 0x80020001;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelQueryIntrHandlerInfo);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_000015F8);

INCLUDE_ASM("nonmatchings/interruptman", func_00001628);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", func_00001DF8);

INCLUDE_ASM("nonmatchings/interruptman", func_00001E9C);

INCLUDE_ASM("nonmatchings/interruptman", func_00001F04);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_000016A0);

INCLUDE_ASM("nonmatchings/interruptman", func_00001740);

INCLUDE_ASM("nonmatchings/interruptman", func_0000179C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_00001850);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterUserSpaceIntrStack);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceKernelRegisterUserSpaceIntrStack(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_s0;

    temp_a0 = sceKernelCpuSuspendIntr();
    var_s0 = 0x8002006D;
    if (M2C_VFIELD(&D_00003910, s32, 0x1AC) == 0) {
        var_s0 = 0x8002006C;
        if (arg0 >= 0) {
            M2C_VFIELD(&D_00003910, s32, 0x1B0) = arg1;
            var_s0 = 0;
            M2C_VFIELD(&D_00003910, s32, 0x1AC) = arg0;
        }
    }
    sceKernelCpuResumeIntr(temp_a0);
    return var_s0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetPrimarySyscallHandler);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/interruptman", module_reboot_before);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuEnableIntr);

M2C_UNK *QueryInterruptManCB(void) {
    return &D_00003E00;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/interruptman", func_00001978);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelReleaseIntrHandler);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_07E138EE);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsInterruptOccurred);

void sceKernelDisableIntr(s32 arg0) {
    sceKernelSuspendIntr(arg0, 0);
}

void RegisterContextHooks(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003F9C = arg1;
    D_00003FA0 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

void InterruptManagerForKernel_7A05D976(s32 arg0, s32 arg1) {
    D_00003E00.unk1084 = arg1;
    D_00003E00.unk1080 = arg0;
}

void InterruptManagerForKernel_7EF7500F(void) {
    D_00003E00.unk1084 = 0;
    D_00003E00.unk1080 = 0;
}

INCLUDE_ASM("nonmatchings/interruptman", UnSupportIntr);

INCLUDE_ASM("nonmatchings/interruptman", SupportIntr);

s32 sceKernelGetIntrSyscallFrame(void) {
    return D_00004E7C;
}

INCLUDE_ASM("nonmatchings/interruptman", sceKernelEnableSubIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelDisableSubIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelResumeSubIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsSubInterruptOccurred);

s32 QueryIntrHandlerInfo(void) {
    return 0x80020001;
}

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

INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetCpuClockCounter);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetCpuClockCounterWide);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", _sceKernelGetCpuClockCounterLow);
#else
s32 _sceKernelGetCpuClockCounterLow(void) {
    return D_00003F94;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", _sceKernelGetCpuClockCounterHigh);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 _sceKernelGetCpuClockCounterHigh(void) {
    return D_00003AA8;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/interruptman", sceKernelSetPrimarySyscallHandler);
#endif

#if FW_VERSION >= 282
s32 _sceKernelGetCpuClockCounterHigh(void) {
    return D_00003F98;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", sceKernelRegisterSystemCallTable);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelQuerySystemCall);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/interruptman", func_000021D4);

INCLUDE_ASM("nonmatchings/interruptman", func_00002224);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_000022C0);

INCLUDE_ASM("nonmatchings/interruptman", func_00002310);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00002380);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_000027C0);
#endif

INCLUDE_ASM("nonmatchings/interruptman", ReturnToThread);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelIsIntrContext);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_7AD28215);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_53991063);
#else
s32 InterruptManagerForKernel_53991063(void) {
    return D_00003F8C;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetInterruptExitCount);
#else
s32 sceKernelGetInterruptExitCount(void) {
    return D_00003F90;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", SaveThreadContext);

#if FW_VERSION < 282
s32 func_00002FDC(s32 arg0) {
    return arg0;
}

s32 func_00002FE4(void) {
    return 0;
}
#else
s32 func_000030AC(s32 arg0) {
    return arg0;
}

s32 func_000030B4(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_000030BC);

INCLUDE_ASM("nonmatchings/interruptman", func_00003118);

INCLUDE_ASM("nonmatchings/interruptman", func_00003150);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/interruptman", func_00003390);
#else
INCLUDE_ASM("nonmatchings/interruptman", func_000031D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_00003230);

INCLUDE_ASM("nonmatchings/interruptman", func_0000327C);

INCLUDE_ASM("nonmatchings/interruptman", func_000032C4);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_05E9D6C4);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_8DC2BAEF);
#endif

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuSuspendIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuResumeIntr);

INCLUDE_ASM("nonmatchings/interruptman", sceKernelCpuResumeIntrWithSync);

#if FW_VERSION < 282
s32 func_000031AC(s32 arg0) {
    return arg0 == 0;
}
#else
s32 func_0000340C(s32 arg0) {
    return arg0 == 0;
}
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00003414);

INCLUDE_ASM("nonmatchings/interruptman", func_00003440);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", func_00003550);

INCLUDE_ASM("nonmatchings/interruptman", func_000035F4);

INCLUDE_ASM("nonmatchings/interruptman", func_00003644);

INCLUDE_ASM("nonmatchings/interruptman", func_000036A4);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_D63F3B31);

INCLUDE_ASM("nonmatchings/interruptman", InterruptManagerForKernel_72CE22E8);
#endif

INCLUDE_ASM("nonmatchings/interruptman", func_00003734);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/interruptman", sceKernelGetSyscallRA);
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
