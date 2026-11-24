/* cflags: -O2 -frename-registers */
#include "common.h"
#include "threadman_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000000);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00000000);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000017C);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_000001B4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000000B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000001D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000268);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000308);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000003F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014928);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014948);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000474);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000524);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000544);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000059C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000630);
#endif

#if FW_VERSION == 100
s32 func_00000680(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000688);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000006A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000072C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000007F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000008A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000022C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000030C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00000408);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
void func_00000534(s32 arg0) {
    SysMemForKernel_5367923C(arg0, 0x85FE2B4C);
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_00016414);
#endif

#if FW_VERSION != 100
s32 func_00000554(void) {
    SysMemForKernel_FEFC8666("WaitQ", 0x14, &D_00016414, 0, &D_000172B4);
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00000590);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00000720);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00000814);
#endif

#if FW_VERSION != 100
s32 func_000008C8(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000008D0(s32 arg0, struct Unk_func_000008D0_1 *arg1) {
    struct Unk_func_000008D0_temp_a1 *temp_a1;

    temp_a1 = arg0 + (arg1->unk15 * 4);
    temp_a1->unk8 = (s32) (temp_a1->unk8 - 1);
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_000008F0);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00000A34);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_00000A74);

INCLUDE_ASM("nonmatchings/threadman", func_00000B88);

INCLUDE_ASM("nonmatchings/threadman", func_00000C98);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForUser_6E9EA350);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000B84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000BD8);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelRegisterThreadEventHandler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseThreadEventHandler);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00001220);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00001430);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000014BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000114C);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadEventHandlerStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateCallback);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteCallback);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelNotifyCallback);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelCallback);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetCallbackCount);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckCallback);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00001D5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferCallbackStatus);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForUser_6E9EA350);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00002188);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00002214);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_000022E4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelNotifyCallback);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelCallback);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetCallbackCount);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckCallback);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00001FC4);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_0000233C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferCallbackStatus);
#endif

#if FW_VERSION == 100
s32 func_00002394(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_0001644C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_00016464);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_000023C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00002448);
#endif

#if FW_VERSION != 100
s32 func_0000261C(struct Unk_func_0000261C_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

INCLUDE_ASM("nonmatchings/threadman", func_00002644);

#if FW_VERSION == 100
s32 func_000024D4(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION != 100
s32 func_0000275C(struct Unk_func_0000275C_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

INCLUDE_ASM("nonmatchings/threadman", func_00002784);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00002614);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000289C);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelSleepThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSleepThreadCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWakeupThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelWakeupThread);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelDonateWakeupThread);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeThread);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_8FD9F70C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitThreadEnd);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitThreadEndCB);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00003518);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelayThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelayThreadCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelaySysClockThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDelaySysClockThreadCB);

#if FW_VERSION != 100
void func_00003CF8(struct Unk_func_00003CF8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    arg0->unk38 = 0;
    if (func_0000022C((s32) arg0) > 0) {
        D_00016C78 = 0;
    }
    sceKernelCpuResumeIntr(temp_v0);
}
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateSema);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014CB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014CBC);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSignalSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitSemaCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelPollSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSemaStatus);

#if FW_VERSION == 100
s32 func_000047B8(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_000047E0(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_00016630);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00004ADC);
#endif

#if FW_VERSION != 100
s32 func_00004B20(struct Unk_func_00004B20_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_00004B48(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/threadman", func_00004B68);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000048B0);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateEventFlag);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014D10);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014D1C);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelClearEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitEventFlagCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelPollEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelEventFlag);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferEventFlagStatus);

#if FW_VERSION == 100
s32 func_0000598C(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_000059B4(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000059D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMbx);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014D7C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014D88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMbx);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00005D40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMbx);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbx);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbxCB);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelPollMbx);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelReceiveMbx);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMbxStatus);
#endif

#if FW_VERSION == 100
s32 func_00006878(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_000068A0(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000068C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMsgPipe);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014E18);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014E24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMsgPipe);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipe);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipeCB);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTrySendMsgPipe);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipe);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipeCB);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTryReceiveMsgPipe);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMsgPipe);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMsgPipeStatus);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000860C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000086E4);
#endif

#if FW_VERSION == 100
s32 func_000087C0(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000087E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00008878);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000089A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000089F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014E78);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014E80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateVpl);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteVpl);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVpl);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVplCB);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTryAllocateVpl);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeVpl);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelVpl);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferVplStatus);
#endif

#if FW_VERSION == 100
s32 func_00009874(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000989C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00009918);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateFpl);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014EDC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014EE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteFpl);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateFpl);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_00016664);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00005BF0);
#endif

#if FW_VERSION != 100
s32 func_00005C34(struct Unk_func_00005C34_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_00005C5C(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMutex);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMutex);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelUnlockMutex);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelLockMutex);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelLockMutexCB);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTryLockMutex);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMutex);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMutexStatus);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00006C80);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_00016690);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00006D28);
#endif

#if FW_VERSION != 100
s32 func_00006D6C(struct Unk_func_00006D6C_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_00006D94(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00006DB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMbx);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMbx);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMbx);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbx);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbxCB);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelPollMbx);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelReceiveMbx);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMbxStatus);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_000166F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00007BB8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00007BFC);
#endif

#if FW_VERSION != 100
s32 func_00007CFC(struct Unk_func_00007CFC_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_00007D24(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMsgPipe);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMsgPipe);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipe);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipeCB);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTrySendMsgPipe);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipe);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipeCB);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTryReceiveMsgPipe);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMsgPipe);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMsgPipeStatus);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000995C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00009A30);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00009B08);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_0001671C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00009B50);
#endif

#if FW_VERSION != 100
s32 func_00009B94(struct Unk_func_00009B94_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00009C3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00009D60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateVpl);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteVpl);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVpl);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVplCB);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTryAllocateVpl);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeVpl);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelVpl);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferVplStatus);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000AB4C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_00016754);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000AB94);
#endif

#if FW_VERSION != 100
s32 func_0000ABD8(struct Unk_func_0000ABD8_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000AC00);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateFpl);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteFpl);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateFpl);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateFplCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryAllocateFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferFplStatus);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000A818);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000BB7C);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_0000BBD0);

#if FW_VERSION == 100
s32 func_0000A8A8(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000A8D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000A968);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000A9F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000AA0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000AA80);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014F2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000AB04);
#endif

#if FW_VERSION == 100
s32 ThreadManForUser_0E927AED(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000ADAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000AE54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000AF9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000B258);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000B304);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelUSec2SysClock);
#endif

#if FW_VERSION == 100
s64 sceKernelUSec2SysClockWide(u32 arg0) {
    return (s64) arg0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USec);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USecWide);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000B634);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTime);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTimeWide);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTimeLow);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000B7F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000B84C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000BC20);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_00016778);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000BC68);
#endif

#if FW_VERSION != 100
s32 func_0000BCAC(struct Unk_func_0000BCAC_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000BCD4);
#endif

INCLUDE_RODATA("nonmatchings/threadman", D_0001679C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00014F74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000B8BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSetAlarm);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSetSysClockAlarm);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000BD5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000BF7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000C250);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000C2EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelUSec2SysClock);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000C46C);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelAlarm);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000BDC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000BEBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000BFC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000C048);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000C638);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferAlarmStatus);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000C274);
#endif

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

#if FW_VERSION == 100
s32 func_0000DDDC(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_0000DE04(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0000DE24(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_0000DE4C(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0000DE6C(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_0000DE94(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 ThreadManForUser_0E927AED(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s64 sceKernelUSec2SysClockWide(u32 arg0) {
    return (s64) arg0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USec);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USecWide);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTime);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTimeWide);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTimeLow);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000E61C);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_0000E674);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000DF00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000DF3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSetAlarm);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSetSysClockAlarm);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000E8AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EA04);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_000167C8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_000167E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_000167F8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_00016810);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EB1C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EBE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EBF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EC6C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000ECF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000ED7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EE74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EFF4);
#endif

#if FW_VERSION != 100
s32 func_0000F140(struct Unk_func_0000F140_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_0000F168(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_0000F188(struct Unk_func_0000F188_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_0000F1B0(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_0000F1D0(struct Unk_func_0000F1D0_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_0000F1F8(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_0000F218(struct Unk_func_0000F218_0 *arg0, struct Unk_func_0000F218_1 *arg1) {
    struct Unk_func_0000F218_temp_a0 *temp_a0;

    SysMemForKernel_CE05CCB7();
    temp_a0 = (u8 *)arg0 + (arg1->unk15 * 4);
    temp_a0->unk10 = 0;
    temp_a0->unk4 = temp_a0;
    temp_a0->unk0 = temp_a0;
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_0000F264(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_04E72261);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_D198B811);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_3AD875C3);

#if FW_VERSION == 100
void ThreadManForKernel_A249EAAE(s32 arg0) {
    ThreadManForKernel_3AD875C3(arg0, 0, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000E524);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F698);
#endif

#if FW_VERSION != 100
void ThreadManForKernel_A249EAAE(s32 arg0) {
    ThreadManForKernel_3AD875C3(arg0, 0, 1);
}
#endif

INCLUDE_ASM("nonmatchings/threadman", syslib_D3744BE0);

#if FW_VERSION == 100
s32 func_0000ED30(void) {
    sceKernelExitDeleteThread(0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0000ED50(void) {
    return -1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_B50F4E46);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000ED74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EE28);
#endif

#if FW_VERSION != 100
s32 func_0000FD6C(void) {
    return -1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000FD74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000FE78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000FF9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0000FFF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00010484);
#endif

INCLUDE_RODATA("nonmatchings/threadman", D_00016928);

INCLUDE_RODATA("nonmatchings/threadman", D_00016930);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00015064);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00015078);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00015094);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_000150A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_000150BC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_000150C8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_000150D8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_000150F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/threadman", D_00015100);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EE3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EF10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F034);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F08C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F0E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F13C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F1EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F234);
#endif

INCLUDE_RODATA("nonmatchings/threadman", D_00016984);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F378);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F50C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F570);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F880);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_00010CFC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000102C8);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelStartThread);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000106E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForUser_532A522E);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelExitThread);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelExitDeleteThread);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateThread);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateDeleteThread);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00011574);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendDispatchThread);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeDispatchThread);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeCurrentThreadAttr);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeThreadPriority);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelRotateThreadReadyQueue);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseWaitThread);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadExitStatus);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_BC31C1B9);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0001289C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckThreadStack);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadStackFreeSize);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_D890B370);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadStatus);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadRunStatus);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_2D69D086);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdList);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdType);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_C9BBE9A2);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/threadman", D_000169E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00013BEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_B50F4E46);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00013C4C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00013D58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00013DB0);
#endif

#if FW_VERSION != 100
void ThreadManForUser_532A522E(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(D_00016C74.unk0, void **, 0x110), s32 *, 0x18));
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadId);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadCurrentPriority);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_F6427665);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_85A2A5BF);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00014130);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_4FE44D5E);
#endif

#if FW_VERSION != 100
s32 ThreadManForKernel_FCB5EB49(void) {
    return D_000172F4;
}
#endif

#if FW_VERSION != 100
s32 ThreadManForKernel_80CA77BA(s32 arg0) {
    D_000173BC = arg0;
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSystemStatus);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadProfiler);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferGlobalProfiler);
#endif

#if FW_VERSION != 100
s32 func_0001444C(void) {
    sceKernelExitDeleteThread(0);
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0001446C);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_00014480);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelExitThread);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelExitDeleteThread);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000109C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateThread);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateDeleteThread);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000110A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendDispatchThread);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeDispatchThread);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeCurrentThreadAttr);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeThreadPriority);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelRotateThreadReadyQueue);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseWaitThread);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadId);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadCurrentPriority);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadExitStatus);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_F6427665);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_85A2A5BF);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_DD55A192);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_BC31C1B9);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000123E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000124A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_4FE44D5E);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckThreadStack);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000126C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadStackFreeSize);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_D890B370);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadStatus);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadRunStatus);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00012F3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_2D69D086);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_FCB5EB49);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0001449C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0001472C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_000149B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00014AF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00014F74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_00015128);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_000153A8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSystemStatus);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdList);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdType);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadProfiler);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferGlobalProfiler);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00013A4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00013AC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00013C88);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_0001544C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/threadman", func_000154D0);
#endif
