/* cflags: -O2 -frename-registers */
#include "common.h"
#include "threadman_decls.h"

INCLUDE_ASM("nonmatchings/threadman", func_00000000);

INCLUDE_ASM("nonmatchings/threadman", func_0000017C);

INCLUDE_ASM("nonmatchings/threadman", func_000001B4);

INCLUDE_ASM("nonmatchings/threadman", func_0000022C);

INCLUDE_ASM("nonmatchings/threadman", func_0000030C);

INCLUDE_ASM("nonmatchings/threadman", func_00000408);

s32 func_00000448(s32 arg0, s32 arg1) {
    struct Unk_func_00000448_temp_s0 *temp_s0;
    struct Unk_func_00000448_temp_s0 *var_s1;
    s32 var_s2;
    void *temp_s3;
    struct Unk_func_00000448_temp_v1 *temp_v1;

    temp_v1 = arg0 + (M2C_FIELD(D_000172B4, u8 *, 0x15) * 4);
    var_s1 = temp_v1->unkC;
    temp_s3 = &temp_v1->unkC;
    var_s2 = 0;
    if (var_s1 != temp_s3) {
        do {
            temp_s0 = var_s1;
            var_s1 = var_s1->unk0;
            func_0000022C((s32) temp_s0);
            var_s2 += 1;
            temp_s0->unk40 = arg1;
        } while (var_s1 != temp_s3);
    }
    return var_s2;
}

void func_000004CC(struct Unk_func_000004CC_0 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = arg0->unk38;
    arg0->unk54 = 0;
    if (temp_v1 != 0) {
        func_0000EA04(temp_v1, arg0->unk3C);
        arg0->unk38 = 0;
        arg0->unk3C = 0;
    }
    temp_v1_2 = arg0->unk20;
    if (temp_v1_2 == 0) {

    } else {
        SysMemForKernel_5367923C(temp_v1_2, 0x5BD49380);
    }
}

void func_00000534(s32 arg0) {
    SysMemForKernel_5367923C(arg0, 0x85FE2B4C);
}

INCLUDE_RODATA("nonmatchings/threadman", D_00016414);

s32 func_00000554(void) {
    SysMemForKernel_FEFC8666("WaitQ", 0x14, &D_00016414, 0, &D_000172B4);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00000590);

s32 func_000006C8(struct Unk_func_000006C8_0 *arg0, struct Unk_func_000006C8_1 *arg1) {
    struct Unk_func_000006C8_temp_a0 *temp_a0;
    struct Unk_func_000006C8_temp_a1 *temp_a1;

    SysMemForKernel_CE05CCB7();
    temp_a0 = (u8 *)arg0 + (arg1->unk15 * 4);
    temp_a0->unk4 = 0;
    temp_a1 = &temp_a0->unkC;
    temp_a0->unk8 = 0;
    temp_a0->unk0 = 0;
    temp_a0->unkC = temp_a1;
    temp_a1->unk4 = temp_a1;
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/threadman", func_00000720);

INCLUDE_ASM("nonmatchings/threadman", func_00000814);

s32 func_000008C8(void) {
    return 0;
}

s32 func_000008D0(s32 arg0, struct Unk_func_000008D0_1 *arg1) {
    struct Unk_func_000008D0_temp_a1 *temp_a1;

    temp_a1 = arg0 + (arg1->unk15 * 4);
    temp_a1->unk8 = (s32) (temp_a1->unk8 - 1);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_000008F0);

s32 func_000009F8(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (D_00016C74.unk418 == 0) {
        temp_v0 = D_00016C74.unk4 != (s32) D_00016C74.unk0;
        if (temp_v0 != 0) {
            M2C_FIELD(D_00016C74.unk0, void **, 0xF4) = (void *) (D_00016C74.unk0 + 0xF8);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/threadman", func_00000A34);

INCLUDE_ASM("nonmatchings/threadman", func_00000A74);

INCLUDE_ASM("nonmatchings/threadman", func_00000B88);

INCLUDE_ASM("nonmatchings/threadman", func_00000C98);

INCLUDE_ASM("nonmatchings/threadman", sceKernelRegisterThreadEventHandler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseThreadEventHandler);

INCLUDE_ASM("nonmatchings/threadman", func_0000114C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadEventHandlerStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateCallback);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteCallback);

INCLUDE_ASM("nonmatchings/threadman", sceKernelNotifyCallback);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelCallback);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetCallbackCount);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckCallback);

INCLUDE_ASM("nonmatchings/threadman", func_00001D5C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferCallbackStatus);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForUser_6E9EA350);

INCLUDE_ASM("nonmatchings/threadman", func_00002188);

INCLUDE_ASM("nonmatchings/threadman", func_00002214);

INCLUDE_ASM("nonmatchings/threadman", func_000022E4);

INCLUDE_ASM("nonmatchings/threadman", func_0000233C);

INCLUDE_RODATA("nonmatchings/threadman", D_0001644C);

INCLUDE_RODATA("nonmatchings/threadman", D_00016464);

INCLUDE_ASM("nonmatchings/threadman", func_000023C4);

INCLUDE_ASM("nonmatchings/threadman", func_00002448);

s32 func_0000261C(struct Unk_func_0000261C_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/threadman", func_00002644);

s32 func_0000275C(struct Unk_func_0000275C_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/threadman", func_00002784);

INCLUDE_ASM("nonmatchings/threadman", func_0000289C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSleepThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSleepThreadCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWakeupThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelWakeupThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDonateWakeupThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeThread);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_8FD9F70C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitThreadEnd);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitThreadEndCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelayThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelayThreadCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelaySysClockThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelaySysClockThreadCB);

void func_00003CF8(struct Unk_func_00003CF8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    arg0->unk38 = 0;
    if (func_0000022C((s32) arg0) > 0) {
        D_00016C78 = 0;
    }
    sceKernelCpuResumeIntr(temp_v0);
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSignalSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitSemaCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelPollSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSemaStatus);

INCLUDE_RODATA("nonmatchings/threadman", D_00016630);

INCLUDE_ASM("nonmatchings/threadman", func_00004ADC);

s32 func_00004B20(struct Unk_func_00004B20_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

s32 func_00004B48(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00004B68);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelClearEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitEventFlagCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelPollEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferEventFlagStatus);

INCLUDE_RODATA("nonmatchings/threadman", D_00016664);

INCLUDE_ASM("nonmatchings/threadman", func_00005BF0);

s32 func_00005C34(struct Unk_func_00005C34_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

s32 func_00005C5C(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelUnlockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelLockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelLockMutexCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryLockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMutexStatus);

INCLUDE_ASM("nonmatchings/threadman", func_00006C80);

INCLUDE_RODATA("nonmatchings/threadman", D_00016690);

INCLUDE_ASM("nonmatchings/threadman", func_00006D28);

s32 func_00006D6C(struct Unk_func_00006D6C_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

s32 func_00006D94(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00006DB4);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbxCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelPollMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelReceiveMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMbxStatus);

INCLUDE_RODATA("nonmatchings/threadman", D_000166F8);

INCLUDE_ASM("nonmatchings/threadman", func_00007BB8);

INCLUDE_ASM("nonmatchings/threadman", func_00007BFC);

s32 func_00007CFC(struct Unk_func_00007CFC_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

s32 func_00007D24(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipeCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTrySendMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipeCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryReceiveMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMsgPipeStatus);

INCLUDE_ASM("nonmatchings/threadman", func_0000995C);

INCLUDE_ASM("nonmatchings/threadman", func_00009A30);

INCLUDE_ASM("nonmatchings/threadman", func_00009B08);

INCLUDE_RODATA("nonmatchings/threadman", D_0001671C);

INCLUDE_ASM("nonmatchings/threadman", func_00009B50);

s32 func_00009B94(struct Unk_func_00009B94_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

s32 func_00009BBC(s32 arg0, struct Unk_func_00009BBC_1 *arg1, s32 arg2, s32 arg3) {
    u8 temp_a1;
    struct Unk_func_00009BBC_temp_v0 *temp_v0;

    temp_a1 = arg1->unk15;
    temp_v0 = arg0 + (temp_a1 * 4);
    if (temp_v0->unk14 == 0) {

    } else {
        sceKernelFreePartitionMemory(temp_v0->unk1C, temp_a1);
    }
    SysMemForKernel_CE05CCB7(arg0, arg1, arg2, arg3);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00009C3C);

INCLUDE_ASM("nonmatchings/threadman", func_00009D60);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVplCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryAllocateVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferVplStatus);

INCLUDE_ASM("nonmatchings/threadman", func_0000AB4C);

INCLUDE_RODATA("nonmatchings/threadman", D_00016754);

INCLUDE_ASM("nonmatchings/threadman", func_0000AB94);

s32 func_0000ABD8(struct Unk_func_0000ABD8_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000AC00);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateFplCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryAllocateFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferFplStatus);

INCLUDE_ASM("nonmatchings/threadman", func_0000BB7C);

INCLUDE_ASM("nonmatchings/threadman", func_0000BBD0);

INCLUDE_ASM("nonmatchings/threadman", func_0000BC20);

INCLUDE_RODATA("nonmatchings/threadman", D_00016778);

INCLUDE_ASM("nonmatchings/threadman", func_0000BC68);

s32 func_0000BCAC(struct Unk_func_0000BCAC_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000BCD4);

INCLUDE_RODATA("nonmatchings/threadman", D_0001679C);

INCLUDE_ASM("nonmatchings/threadman", func_0000BD5C);

INCLUDE_ASM("nonmatchings/threadman", func_0000BF7C);

INCLUDE_ASM("nonmatchings/threadman", func_0000C250);

INCLUDE_ASM("nonmatchings/threadman", func_0000C2EC);

INCLUDE_ASM("nonmatchings/threadman", sceKernelUSec2SysClock);

INCLUDE_ASM("nonmatchings/threadman", func_0000C46C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelAlarm);

INCLUDE_ASM("nonmatchings/threadman", func_0000C638);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferAlarmStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateVTimer);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteVTimer);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetVTimerBase);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetVTimerBaseWide);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetVTimerTime);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetVTimerTimeWide);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetVTimerTime);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetVTimerTimeWide);

INCLUDE_ASM("nonmatchings/threadman", sceKernelStartVTimer);

INCLUDE_ASM("nonmatchings/threadman", sceKernelStopVTimer);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetVTimerHandler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetVTimerHandlerWide);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelVTimerHandler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferVTimerStatus);

s32 ThreadManForUser_0E927AED(void) {
    return 0;
}

s64 sceKernelUSec2SysClockWide(u32 arg0) {
    return (s64) arg0;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USec);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USecWide);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTime);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTimeWide);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTimeLow);

INCLUDE_ASM("nonmatchings/threadman", func_0000E61C);

INCLUDE_ASM("nonmatchings/threadman", func_0000E674);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetAlarm);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetSysClockAlarm);

INCLUDE_ASM("nonmatchings/threadman", func_0000E8AC);

INCLUDE_ASM("nonmatchings/threadman", func_0000EA04);

INCLUDE_RODATA("nonmatchings/threadman", D_000167C8);

INCLUDE_RODATA("nonmatchings/threadman", D_000167E0);

INCLUDE_RODATA("nonmatchings/threadman", D_000167F8);

INCLUDE_RODATA("nonmatchings/threadman", D_00016810);

INCLUDE_ASM("nonmatchings/threadman", func_0000EB1C);

INCLUDE_ASM("nonmatchings/threadman", func_0000EBE0);

INCLUDE_ASM("nonmatchings/threadman", func_0000EBF8);

INCLUDE_ASM("nonmatchings/threadman", func_0000EC6C);

INCLUDE_ASM("nonmatchings/threadman", func_0000ECF0);

INCLUDE_ASM("nonmatchings/threadman", func_0000ED7C);

INCLUDE_ASM("nonmatchings/threadman", func_0000EE74);

INCLUDE_ASM("nonmatchings/threadman", func_0000EFF4);

s32 func_0000F140(struct Unk_func_0000F140_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

s32 func_0000F168(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

s32 func_0000F188(struct Unk_func_0000F188_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

s32 func_0000F1B0(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

s32 func_0000F1D0(struct Unk_func_0000F1D0_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

s32 func_0000F1F8(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

s32 func_0000F218(struct Unk_func_0000F218_0 *arg0, struct Unk_func_0000F218_1 *arg1) {
    struct Unk_func_0000F218_temp_a0 *temp_a0;

    SysMemForKernel_CE05CCB7();
    temp_a0 = (u8 *)arg0 + (arg1->unk15 * 4);
    temp_a0->unk10 = 0;
    temp_a0->unk4 = temp_a0;
    temp_a0->unk0 = temp_a0;
    return arg0->unkC;
}

s32 func_0000F264(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_04E72261);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_D198B811);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_3AD875C3);

INCLUDE_ASM("nonmatchings/threadman", func_0000F698);

void ThreadManForKernel_A249EAAE(s32 arg0) {
    ThreadManForKernel_3AD875C3(arg0, 0, 1);
}

INCLUDE_ASM("nonmatchings/threadman", syslib_D3744BE0);

s32 func_0000FD6C(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000FD74);

INCLUDE_ASM("nonmatchings/threadman", func_0000FE78);

INCLUDE_ASM("nonmatchings/threadman", func_0000FF9C);

INCLUDE_ASM("nonmatchings/threadman", func_0000FFF4);

INCLUDE_ASM("nonmatchings/threadman", func_00010484);

INCLUDE_RODATA("nonmatchings/threadman", D_00016928);

INCLUDE_RODATA("nonmatchings/threadman", D_00016930);

INCLUDE_RODATA("nonmatchings/threadman", D_00016984);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_00010CFC);

INCLUDE_ASM("nonmatchings/threadman", sceKernelStartThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelExitThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelExitDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_00011574);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendDispatchThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeDispatchThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeCurrentThreadAttr);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeThreadPriority);

INCLUDE_ASM("nonmatchings/threadman", sceKernelRotateThreadReadyQueue);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseWaitThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadExitStatus);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_BC31C1B9);

void func_000127F8(struct Unk_func_000127F8_0 *arg0, s32 arg1) {
    struct Unk_func_000127F8_var_s0 *var_s0;

    if (arg0->unkD8 & 0x200000) {
        sceKernelCpuResumeIntr(arg1);
        sceKernelMemset(arg0->unk78, 0, arg0->unk7C);
        if (arg0->unkD8 < 0) {
            sceKernelMemset(arg0->unk84, 0, arg0->unk88);
            var_s0 = arg0->unk8C;
        } else {
            var_s0 = arg0->unk8C;
        }
        if (var_s0 != NULL) {
            do {
                sceKernelMemset(var_s0->unk4, 0, var_s0->unkC);
                var_s0 = var_s0->unk0;
            } while (var_s0 != NULL);
        }
        sceKernelCpuSuspendIntr();
    }
}

INCLUDE_ASM("nonmatchings/threadman", func_0001289C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckThreadStack);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadStackFreeSize);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_D890B370);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadRunStatus);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_2D69D086);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdList);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdType);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_C9BBE9A2);

INCLUDE_RODATA("nonmatchings/threadman", D_000169E0);

INCLUDE_ASM("nonmatchings/threadman", func_00013BEC);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_B50F4E46);

INCLUDE_ASM("nonmatchings/threadman", func_00013C4C);

INCLUDE_ASM("nonmatchings/threadman", func_00013D58);

INCLUDE_ASM("nonmatchings/threadman", func_00013DB0);

void ThreadManForUser_532A522E(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(D_00016C74.unk0, void **, 0x110), s32 *, 0x18));
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadId);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadCurrentPriority);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_F6427665);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_85A2A5BF);

INCLUDE_ASM("nonmatchings/threadman", func_00014130);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_4FE44D5E);

s32 ThreadManForKernel_FCB5EB49(void) {
    return D_000172F4;
}

s32 ThreadManForKernel_80CA77BA(s32 arg0) {
    D_000173BC = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSystemStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadProfiler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferGlobalProfiler);

s32 func_0001444C(void) {
    sceKernelExitDeleteThread(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_0001446C);

INCLUDE_ASM("nonmatchings/threadman", func_00014480);

INCLUDE_ASM("nonmatchings/threadman", func_0001449C);

INCLUDE_ASM("nonmatchings/threadman", func_0001472C);

INCLUDE_ASM("nonmatchings/threadman", func_000149B0);

INCLUDE_ASM("nonmatchings/threadman", func_00014AF4);

INCLUDE_ASM("nonmatchings/threadman", func_00014F74);

INCLUDE_ASM("nonmatchings/threadman", func_00015128);

INCLUDE_ASM("nonmatchings/threadman", func_000153A8);

INCLUDE_ASM("nonmatchings/threadman", func_0001544C);

INCLUDE_ASM("nonmatchings/threadman", func_000154D0);
