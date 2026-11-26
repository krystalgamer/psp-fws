/* cflags: -O2 -frename-registers */
#include "common.h"
#include "threadman_decls.h"

INCLUDE_ASM("nonmatchings/threadman", func_00000000);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/threadman", func_0000017C);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_000001B4);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/threadman", func_0000022C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00000344);

INCLUDE_ASM("nonmatchings/threadman", func_00000480);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000000B0);

INCLUDE_ASM("nonmatchings/threadman", func_000001D0);

INCLUDE_ASM("nonmatchings/threadman", func_00000268);

INCLUDE_ASM("nonmatchings/threadman", func_00000308);

INCLUDE_ASM("nonmatchings/threadman", func_000003F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000003F0(s32 arg0, s32 arg1) {
    M2C_UNK *temp_s0;
    M2C_UNK *var_s1;
    s32 var_s2;
    void *temp_s3;
    void *temp_v1;

    temp_v1 = arg0 + (M2C_FIELD(D_00016444, u8 *, 0x15) * 4);
    var_s1 = M2C_FIELD(temp_v1, M2C_UNK **, 0xC);
    temp_s3 = temp_v1 + 0xC;
    var_s2 = 0;
    if (var_s1 != temp_s3) {
        do {
            temp_s0 = var_s1;
            var_s1 = M2C_FIELD(var_s1, M2C_UNK **, 0);
            func_0000022C((s32) temp_s0);
            var_s2 += 1;
            M2C_FIELD(temp_s0, s32 *, 0x40) = arg1;
        } while (var_s1 != temp_s3);
    }
    return var_s2;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000004CC(struct Unk_func_000004CC_0 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = arg0->unk38;
    arg0->unk54 = 0;
    if (temp_v1 != 0) {
        func_0000DAF4(temp_v1, arg0->unk3C);
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

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/threadman", func_00000544_v152);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/threadman", func_00000544_v151);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/threadman", func_00000544_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000005F4(s32 arg0) {
    SysMemForKernel_5367923C(arg0, 0x85FE2B4C);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015410);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00000554);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_0001524C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014928);

INCLUDE_RODATA("nonmatchings/threadman", D_00014948);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00000614);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00000698);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000474);

INCLUDE_ASM("nonmatchings/threadman", func_00000524);

INCLUDE_ASM("nonmatchings/threadman", func_00000544);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00000544(void *arg0, void *arg1) {
    void *temp_a0;
    void *temp_a1;

    SysMemForKernel_CE05CCB7();
    temp_a0 = arg0 + (M2C_FIELD(arg1, u8 *, 0x15) * 4);
    M2C_FIELD(temp_a0, s32 *, 4) = 0;
    temp_a1 = temp_a0 + 0xC;
    M2C_FIELD(temp_a0, s32 *, 8) = 0;
    M2C_FIELD(temp_a0, s32 *, 0) = 0;
    M2C_FIELD(temp_a0, void **, 0xC) = temp_a1;
    M2C_FIELD(temp_a1, void **, 4) = temp_a1;
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/threadman", func_00000868);

INCLUDE_ASM("nonmatchings/threadman", func_0000095C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000059C);

INCLUDE_ASM("nonmatchings/threadman", func_00000630);
#endif

#if FW_VERSION < 282
s32 func_00000680(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00000A18(s32 arg0, void *arg1) {
    void *temp_a1;

    temp_a1 = arg0 + (M2C_FIELD(arg1, u8 *, 0x15) * 4);
    M2C_FIELD(temp_a1, s32 *, 8) = (s32) (M2C_FIELD(temp_a1, s32 *, 8) - 1);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00000A38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00000688);

INCLUDE_ASM("nonmatchings/threadman", func_000006A8);

INCLUDE_ASM("nonmatchings/threadman", func_0000072C);

INCLUDE_ASM("nonmatchings/threadman", func_000007F4);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/threadman", func_000008A0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
s32 func_000008A0(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (M2C_VFIELD(&D_00015E08, s32, 0x418) == 0) {
        temp_v0 = M2C_VFIELD(&D_00015E08, s32, 4) != (s32) M2C_FIELD(&D_00015E08, void **, 0);
        if (temp_v0 != 0) {
            M2C_FIELD(M2C_FIELD(&D_00015E08, void **, 0), void **, 0xEC) = (void *) (M2C_FIELD(&D_00015E08, void **, 0) + 0xF0);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 270
s32 func_000008A0(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (M2C_VFIELD(&D_00015E08, s32, 0x418) == 0) {
        temp_v0 = M2C_VFIELD(&D_00015E08, s32, 4) != (s32) M2C_FIELD(&D_00015E08, void **, 0);
        if (temp_v0 != 0) {
            M2C_FIELD(M2C_FIELD(&D_00015E08, void **, 0), void **, 0xE4) = (void *) (M2C_FIELD(&D_00015E08, void **, 0) + 0xE8);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000030C);

INCLUDE_ASM("nonmatchings/threadman", func_00000408);
#endif

#if FW_VERSION >= 300
s32 func_00000448(s32 arg0, s32 arg1) {
    M2C_UNK *temp_s0;
    M2C_UNK *var_s1;
    s32 var_s2;
    void *temp_s3;
    void *temp_v1;

    temp_v1 = arg0 + (M2C_FIELD(D_000172B4, u8 *, 0x15) * 4);
    var_s1 = M2C_FIELD(temp_v1, M2C_UNK **, 0xC);
    temp_s3 = temp_v1 + 0xC;
    var_s2 = 0;
    if (var_s1 != temp_s3) {
        do {
            temp_s0 = var_s1;
            var_s1 = M2C_FIELD(var_s1, M2C_UNK **, 0);
            func_0000022C((s32) temp_s0);
            var_s2 += 1;
            M2C_FIELD(temp_s0, s32 *, 0x44) = arg1;
        } while (var_s1 != temp_s3);
    }
    return var_s2;
}
#endif

#if FW_VERSION == 282
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

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_000004CC);
#endif

#if FW_VERSION == 282
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

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 310
s32 func_000009F8(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (D_00016C74.unk418 == 0) {
        temp_v0 = D_00016C74.unk4 != (s32) D_00016C74.unk0;
        if (temp_v0 != 0) {
            M2C_FIELD(D_00016C74.unk0, void **, 0x100) = (void *) (D_00016C74.unk0 + 0x104);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_000009F8(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (D_00016C74.unk418 == 0) {
        temp_v0 = D_00016C74.unk4 != (s32) D_00016C74.unk0;
        if (temp_v0 != 0) {
            M2C_FIELD(D_00016C74.unk0, void **, 0xFC) = (void *) (D_00016C74.unk0 + 0x100);
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
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
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/threadman", func_00000A74);

INCLUDE_ASM("nonmatchings/threadman", func_00000B88);

INCLUDE_ASM("nonmatchings/threadman", func_00000C98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForUser_6E9EA350);

INCLUDE_ASM("nonmatchings/threadman", func_00000B84);

INCLUDE_ASM("nonmatchings/threadman", func_00000BD8);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelRegisterThreadEventHandler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseThreadEventHandler);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00001260);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00001220);

INCLUDE_ASM("nonmatchings/threadman", func_00001430);

INCLUDE_ASM("nonmatchings/threadman", func_000014BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000114C);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadEventHandlerStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateCallback);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteCallback);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/threadman", sceKernelNotifyCallback);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelCallback);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetCallbackCount);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckCallback);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00001E8C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferCallbackStatus);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForUser_6E9EA350);

INCLUDE_ASM("nonmatchings/threadman", func_00002228);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000021A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_0000217C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_000022B4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_00001D5C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferCallbackStatus);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForUser_6E9EA350);

INCLUDE_ASM("nonmatchings/threadman", func_00002188);

INCLUDE_ASM("nonmatchings/threadman", func_00002214);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_000022E4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelNotifyCallback);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelCallback);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetCallbackCount);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckCallback);

INCLUDE_ASM("nonmatchings/threadman", func_00001FC4);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_0000233C);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015440);

INCLUDE_RODATA("nonmatchings/threadman", D_00015458);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00002330);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000245C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00002574);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferCallbackStatus);
#endif

#if FW_VERSION < 282
s32 func_00002394(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#else
INCLUDE_RODATA("nonmatchings/threadman", D_0001644C);

INCLUDE_RODATA("nonmatchings/threadman", D_00016464);

INCLUDE_ASM("nonmatchings/threadman", func_000023C4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00002250);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/threadman", func_00002448);
#endif

#if FW_VERSION >= 282
s32 func_0000261C(struct Unk_func_0000261C_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

INCLUDE_ASM("nonmatchings/threadman", func_00002644);

#if FW_VERSION < 282
s32 func_000024D4(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#else
s32 func_0000275C(struct Unk_func_0000275C_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

INCLUDE_ASM("nonmatchings/threadman", func_00002784);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00002828);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_000029B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00002614);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000289C);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelSleepThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSleepThreadCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWakeupThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelWakeupThread);

#if FW_VERSION >= 282
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

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00003C3C(void *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    if (func_0000022C((s32) arg0) > 0) {
        D_00015E0C = 0;
    }
    sceKernelCpuResumeIntr(temp_v0);
}
#endif

#if FW_VERSION >= 300
void func_00003CF8(struct Unk_func_00003CF8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCpuSuspendIntr();
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    if (func_0000022C((s32) arg0) > 0) {
        D_00017328 = 0;
    }
    sceKernelCpuResumeIntr(temp_v0);
}
#endif

#if FW_VERSION == 282
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

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014CB0);

INCLUDE_RODATA("nonmatchings/threadman", D_00014CBC);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSignalSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelWaitSemaCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelPollSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelSema);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSemaStatus);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015470);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00004894);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00004A80);
#endif

#if FW_VERSION < 282
s32 func_000047B8(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000047E0(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#else
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
#endif

INCLUDE_ASM("nonmatchings/threadman", func_00004B68);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000048B0);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateEventFlag);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014D10);

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

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00005A7C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015490);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000059FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00005C44);
#endif

#if FW_VERSION < 282
s32 func_0000598C(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000059B4(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelUnlockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelLockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelLockMutexCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryLockMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMutex);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMutexStatus);

INCLUDE_ASM("nonmatchings/threadman", func_00006B7C);

INCLUDE_RODATA("nonmatchings/threadman", D_000166B4);

INCLUDE_ASM("nonmatchings/threadman", func_00006C24);

s32 func_00006C68(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00006C90(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_00006CB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000059D4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMbx);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014D7C);

INCLUDE_RODATA("nonmatchings/threadman", D_00014D88);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMbx);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00005D40);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMbxCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelPollMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelReceiveMbx);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMbxStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_000154A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000067BC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00007B40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00006A50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_00006ADC);
#endif

#if FW_VERSION < 282
s32 func_00006878(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_000068A0(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000068C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateMsgPipe);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014E18);

INCLUDE_RODATA("nonmatchings/threadman", D_00014E24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSendMsgPipeCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTrySendMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReceiveMsgPipeCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryReceiveMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelMsgPipe);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferMsgPipeStatus);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00008828);

INCLUDE_ASM("nonmatchings/threadman", func_000088FC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_000154C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000875C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/threadman", func_0000860C);

INCLUDE_ASM("nonmatchings/threadman", func_000086E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00008A44);
#endif

#if FW_VERSION < 282
s32 func_000087C0(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/threadman", func_000087E8);

INCLUDE_ASM("nonmatchings/threadman", func_00008878);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000897C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00008CB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000089A0);

INCLUDE_ASM("nonmatchings/threadman", func_000089F0);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014E78);

INCLUDE_RODATA("nonmatchings/threadman", D_00014E80);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateVplCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryAllocateVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelVpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferVplStatus);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_000154E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000097A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00009AEC);
#endif

#if FW_VERSION < 282
s32 func_00009874(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/threadman", func_0000989C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00009918);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateFpl);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014EDC);

INCLUDE_RODATA("nonmatchings/threadman", D_00014EE4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/threadman", D_00016664);

INCLUDE_ASM("nonmatchings/threadman", func_00005BF0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00005B0C);
#endif

#if FW_VERSION >= 282
s32 func_00005C34(struct Unk_func_00005C34_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00005C5C);
#endif

#if FW_VERSION == 282
s32 func_00005C5C(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00006D94);
#endif

#if FW_VERSION == 282
s32 func_00006D94(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_0000AC9C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateFpl);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelAllocateFplCB);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTryAllocateFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelFreeFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelFpl);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferFplStatus);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000A7CC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/threadman", func_0000A818);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000BB7C);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_0000BBD0);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015500);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000A814);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000AB0C);
#endif

#if FW_VERSION < 282
s32 func_0000A8A8(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/threadman", func_0000A8D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000A968);

INCLUDE_ASM("nonmatchings/threadman", func_0000A9F4);

INCLUDE_ASM("nonmatchings/threadman", func_0000AA0C);

INCLUDE_ASM("nonmatchings/threadman", func_0000AA80);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00014F2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000A918);

INCLUDE_ASM("nonmatchings/threadman", func_0000AB2C);

INCLUDE_ASM("nonmatchings/threadman", func_0000AE84);

INCLUDE_ASM("nonmatchings/threadman", func_0000AF20);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000AB04);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/threadman", func_0000AEA0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/threadman", func_0000AEF8);
#endif

#if FW_VERSION == 100
s32 ThreadManForUser_0E927AED(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000ADAC);

INCLUDE_ASM("nonmatchings/threadman", func_0000AE54);

INCLUDE_ASM("nonmatchings/threadman", func_0000AF9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000B258);

INCLUDE_ASM("nonmatchings/threadman", func_0000B304);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelUSec2SysClock);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000B490);
#endif

#if FW_VERSION == 100
s64 sceKernelUSec2SysClockWide(u32 arg0) {
    return (s64) arg0;
}

INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USec);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSysClock2USecWide);

INCLUDE_ASM("nonmatchings/threadman", func_0000B634);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTime);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTimeWide);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetSystemTimeLow);

INCLUDE_ASM("nonmatchings/threadman", func_0000B7F4);

INCLUDE_ASM("nonmatchings/threadman", func_0000B84C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000BC20);

INCLUDE_RODATA("nonmatchings/threadman", D_00016778);

INCLUDE_ASM("nonmatchings/threadman", func_0000BC68);

s32 func_0000BCAC(struct Unk_func_0000BCAC_0 *arg0) {
    SysMemForKernel_CE05CCB7();
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000BCD4);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/threadman", D_0001679C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00014F74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000B8BC);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetAlarm);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetSysClockAlarm);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000BD5C);

INCLUDE_ASM("nonmatchings/threadman", func_0000BF7C);

INCLUDE_ASM("nonmatchings/threadman", func_0000C250);

INCLUDE_ASM("nonmatchings/threadman", func_0000C2EC);

INCLUDE_ASM("nonmatchings/threadman", sceKernelUSec2SysClock);

INCLUDE_ASM("nonmatchings/threadman", func_0000C46C);
#endif

INCLUDE_ASM("nonmatchings/threadman", sceKernelCancelAlarm);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000B694);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000BDC8);

INCLUDE_ASM("nonmatchings/threadman", func_0000BEBC);

INCLUDE_ASM("nonmatchings/threadman", func_0000BFC0);

INCLUDE_ASM("nonmatchings/threadman", func_0000C048);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 150
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
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000D6D8);

INCLUDE_ASM("nonmatchings/threadman", func_0000D730);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetAlarm);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSetSysClockAlarm);

INCLUDE_ASM("nonmatchings/threadman", func_0000D994);

INCLUDE_ASM("nonmatchings/threadman", func_0000DAF4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015518);

INCLUDE_RODATA("nonmatchings/threadman", D_00015530);

INCLUDE_RODATA("nonmatchings/threadman", D_00015548);

INCLUDE_RODATA("nonmatchings/threadman", D_00015560);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000D820);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000DBF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000DDB0);

INCLUDE_ASM("nonmatchings/threadman", func_0000DDC8);

INCLUDE_ASM("nonmatchings/threadman", func_0000DE3C);

INCLUDE_ASM("nonmatchings/threadman", func_0000DEC0);

INCLUDE_ASM("nonmatchings/threadman", func_0000DF4C);

INCLUDE_ASM("nonmatchings/threadman", func_0000E094);
#endif

#if FW_VERSION < 282
s32 func_0000DDDC(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0000DE04(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

s32 func_0000DE24(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0000DE4C(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}

s32 func_0000DE6C(void *arg0) {
    SysMemForKernel_CE05CCB7();
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0000DE94(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/threadman", func_0000E61C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000E674);
#else
s32 func_0000E674(void *arg0, void *arg1) {
    void *temp_a0;

    SysMemForKernel_CE05CCB7();
    temp_a0 = arg0 + (M2C_FIELD(arg1, u8 *, 0x15) * 4);
    M2C_FIELD(temp_a0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_a0, void **, 4) = temp_a0;
    M2C_FIELD(temp_a0, void **, 0) = temp_a0;
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/threadman", func_0000DF00);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_0000DF00(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000DF3C);
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_0000F288);
#endif

#if FW_VERSION == 282
s32 func_0000F1F8(void) {
    SysMemForKernel_CE05CCB7();
    return 0;
}
#endif

#if FW_VERSION >= 282
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
#endif

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_04E72261);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_D198B811);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_3AD875C3);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000E7A8);
#endif

#if FW_VERSION < 282
void ThreadManForKernel_A249EAAE(s32 arg0) {
    ThreadManForKernel_3AD875C3(arg0, 0, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000E524);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0000F698);

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

#if FW_VERSION < 282
s32 func_0000ED50(void) {
    return -1;
}
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000FCC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_0000EFD8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0000F0DC);

INCLUDE_ASM("nonmatchings/threadman", func_0000F200);

INCLUDE_ASM("nonmatchings/threadman", func_0000F258);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000103C4);

INCLUDE_RODATA("nonmatchings/threadman", D_000169B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_0000F5B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_B50F4E46);

INCLUDE_ASM("nonmatchings/threadman", func_0000ED74);

INCLUDE_ASM("nonmatchings/threadman", func_0000EE28);
#endif

#if FW_VERSION >= 282
s32 func_0000FD6C(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/threadman", func_0000FD74);

INCLUDE_ASM("nonmatchings/threadman", func_0000FE78);

INCLUDE_ASM("nonmatchings/threadman", func_0000FF9C);

INCLUDE_ASM("nonmatchings/threadman", func_0000FFF4);

INCLUDE_ASM("nonmatchings/threadman", func_00010484);
#endif

INCLUDE_RODATA("nonmatchings/threadman", D_00016928);

INCLUDE_RODATA("nonmatchings/threadman", D_00016930);

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/threadman", D_00015064);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00015078);

INCLUDE_RODATA("nonmatchings/threadman", D_00015094);

INCLUDE_RODATA("nonmatchings/threadman", D_000150A8);

INCLUDE_RODATA("nonmatchings/threadman", D_000150BC);

INCLUDE_RODATA("nonmatchings/threadman", D_000150C8);

INCLUDE_RODATA("nonmatchings/threadman", D_000150D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_00015A14);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/threadman", D_000150F0);

INCLUDE_RODATA("nonmatchings/threadman", D_00015100);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_0000FFA4);

INCLUDE_ASM("nonmatchings/threadman", sceKernelStartThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelExitThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelExitDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_00010848);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendDispatchThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeDispatchThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeCurrentThreadAttr);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeThreadPriority);

INCLUDE_ASM("nonmatchings/threadman", sceKernelRotateThreadReadyQueue);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseWaitThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadExitStatus);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_DD55A192);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_BC31C1B9);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void func_00011B68(void *arg0, s32 arg1) {
    void *var_s0;

    if (M2C_FIELD(arg0, s32 *, 0xD8) & 0x200000) {
        sceKernelCpuResumeIntr(arg1);
        sceKernelMemset(M2C_FIELD(arg0, void **, 0x78), 0, M2C_FIELD(arg0, u32 *, 0x7C));
        if (M2C_FIELD(arg0, s32 *, 0xD8) < 0) {
            sceKernelMemset(M2C_FIELD(arg0, void **, 0x84), 0, M2C_FIELD(arg0, u32 *, 0x88));
            var_s0 = M2C_FIELD(arg0, void **, 0x8C);
        } else {
            var_s0 = M2C_FIELD(arg0, void **, 0x8C);
        }
        if (var_s0 != NULL) {
            do {
                sceKernelMemset(M2C_FIELD(var_s0, void **, 4), 0, M2C_FIELD(var_s0, u32 *, 8));
                var_s0 = M2C_FIELD(var_s0, void **, 0);
            } while (var_s0 != NULL);
        }
        sceKernelCpuSuspendIntr();
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
void func_00011B68(void *arg0, s32 arg1) {
    void *var_s0;

    if (M2C_FIELD(arg0, s32 *, 0xD0) & 0x200000) {
        sceKernelCpuResumeIntr(arg1);
        memset(M2C_FIELD(arg0, s32 *, 0x70), 0, M2C_FIELD(arg0, s32 *, 0x74));
        if (M2C_FIELD(arg0, s32 *, 0xD0) < 0) {
            memset(M2C_FIELD(arg0, s32 *, 0x7C), 0, M2C_FIELD(arg0, s32 *, 0x80));
            var_s0 = M2C_FIELD(arg0, void **, 0x84);
        } else {
            var_s0 = M2C_FIELD(arg0, void **, 0x84);
        }
        if (var_s0 != NULL) {
            do {
                memset(M2C_FIELD(var_s0, s32 *, 4), 0, M2C_FIELD(var_s0, s32 *, 8));
                var_s0 = M2C_FIELD(var_s0, void **, 0);
            } while (var_s0 != NULL);
        }
        sceKernelCpuSuspendIntr();
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00011C0C);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckThreadStack);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadStackFreeSize);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_D890B370);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadRunStatus);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_2D69D086);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSystemStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdList);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdType);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/threadman", D_00015578);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00012904);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_00012F30);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_B50F4E46);

INCLUDE_ASM("nonmatchings/threadman", func_00012FD8);

INCLUDE_ASM("nonmatchings/threadman", func_000130E4);

INCLUDE_ASM("nonmatchings/threadman", func_0001313C);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
void ThreadManForUser_532A522E(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(D_00015E08, void **, 0x108), s32 *, 0x18));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 270
void ThreadManForUser_532A522E(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(D_00015E08, void **, 0x100), s32 *, 0x18));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadId);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadCurrentPriority);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_F6427665);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_85A2A5BF);

INCLUDE_ASM("nonmatchings/threadman", func_000134BC);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_4FE44D5E);

s32 ThreadManForKernel_FCB5EB49(void) {
    return D_00016480;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 ThreadManForKernel_80CA77BA(s32 arg0) {
    D_00015CD4 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadProfiler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferGlobalProfiler);

s32 func_000136C0(void) {
    sceKernelExitDeleteThread(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/threadman", func_000136E0);

INCLUDE_ASM("nonmatchings/threadman", func_000136F4);

INCLUDE_ASM("nonmatchings/threadman", func_00013710);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_0001335C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000EE3C);

INCLUDE_ASM("nonmatchings/threadman", func_0000EF10);

INCLUDE_ASM("nonmatchings/threadman", func_0000F034);

INCLUDE_ASM("nonmatchings/threadman", func_0000F08C);

INCLUDE_ASM("nonmatchings/threadman", func_0000F0E4);

INCLUDE_ASM("nonmatchings/threadman", func_0000F13C);

INCLUDE_ASM("nonmatchings/threadman", func_0000F1EC);

INCLUDE_ASM("nonmatchings/threadman", func_0000F234);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/threadman", D_00016984);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0000F378);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00013B34);

INCLUDE_ASM("nonmatchings/threadman", func_00013C70);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00014E9C);

INCLUDE_ASM("nonmatchings/threadman", func_00015050);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/threadman", func_00013B38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/threadman", func_0001415C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_0000F50C);

INCLUDE_ASM("nonmatchings/threadman", func_0000F570);

INCLUDE_ASM("nonmatchings/threadman", func_0000F880);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelCreateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_00010CFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000102C8);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelStartThread);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_000106E4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelExitThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelExitDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateDeleteThread);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_000116C4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/threadman", func_00011574);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendDispatchThread);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00011940);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeDispatchThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeCurrentThreadAttr);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeThreadPriority);

INCLUDE_ASM("nonmatchings/threadman", sceKernelRotateThreadReadyQueue);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseWaitThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadExitStatus);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_BC31C1B9);
#endif

#if FW_VERSION >= 300
void func_000127F8(struct Unk_func_000127F8_0 *arg0, s32 arg1) {
    void *var_s0;

    if (M2C_FIELD(arg0, s32 *, 0x14) & 0x200000) {
        sceKernelCpuResumeIntr(arg1);
        sceKernelMemset(arg0->unk84, 0, arg0->unk88);
        if (M2C_FIELD(arg0, s32 *, 0x14) < 0) {
            sceKernelMemset(M2C_FIELD(arg0, void **, 0x90), 0, M2C_FIELD(arg0, u32 *, 0x94));
            var_s0 = M2C_FIELD(arg0, void **, 0x98);
        } else {
            var_s0 = M2C_FIELD(arg0, void **, 0x98);
        }
        if (var_s0 != NULL) {
            do {
                sceKernelMemset(M2C_FIELD(var_s0, void **, 4), 0, M2C_FIELD(var_s0, u32 *, 0xC));
                var_s0 = M2C_FIELD(var_s0, void **, 0);
            } while (var_s0 != NULL);
        }
        sceKernelCpuSuspendIntr();
    }
}
#endif

#if FW_VERSION == 282
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

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 310
s32 module_reboot_before(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    ExceptionManagerForKernel_1AA6CFFA(0xB, &func_00015B40);
    InterruptManagerForKernel_F987B1F0(D_00017AFC);
    InterruptManagerForKernel_F987B1F0(0x41);
    sceKernelCpuResumeIntr(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_B50F4E46);

INCLUDE_ASM("nonmatchings/threadman", func_00013C4C);

INCLUDE_ASM("nonmatchings/threadman", func_00013D58);

INCLUDE_ASM("nonmatchings/threadman", func_00013DB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", ThreadManForUser_532A522E);
#endif

#if FW_VERSION >= 310
void ThreadManForUser_532A522E(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(D_00016C74.unk0, void **, 0x11C), s32 *, 0x18));
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void ThreadManForUser_532A522E(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(D_00016C74.unk0, void **, 0x118), s32 *, 0x18));
}
#endif

#if FW_VERSION == 282
void ThreadManForUser_532A522E(void) {
    sceKernelExitThread(M2C_FIELD(M2C_FIELD(D_00016C74.unk0, void **, 0x110), s32 *, 0x18));
}
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_00014480);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelExitThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelExitDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_000109C4);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelTerminateDeleteThread);

INCLUDE_ASM("nonmatchings/threadman", func_000110A0);

INCLUDE_ASM("nonmatchings/threadman", sceKernelSuspendDispatchThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelResumeDispatchThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeCurrentThreadAttr);

INCLUDE_ASM("nonmatchings/threadman", sceKernelChangeThreadPriority);

INCLUDE_ASM("nonmatchings/threadman", sceKernelRotateThreadReadyQueue);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReleaseWaitThread);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadId);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadCurrentPriority);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadExitStatus);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_F6427665);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_85A2A5BF);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_DD55A192);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_BC31C1B9);

INCLUDE_ASM("nonmatchings/threadman", func_000123E0);

INCLUDE_ASM("nonmatchings/threadman", func_000124A0);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_4FE44D5E);

INCLUDE_ASM("nonmatchings/threadman", sceKernelCheckThreadStack);

INCLUDE_ASM("nonmatchings/threadman", func_000126C4);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadStackFreeSize);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_D890B370);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadRunStatus);

INCLUDE_ASM("nonmatchings/threadman", func_00012F3C);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_2D69D086);

INCLUDE_ASM("nonmatchings/threadman", ThreadManForKernel_FCB5EB49);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0001449C);

INCLUDE_ASM("nonmatchings/threadman", func_0001472C);

INCLUDE_ASM("nonmatchings/threadman", func_000149B0);

INCLUDE_ASM("nonmatchings/threadman", func_00014AF4);

INCLUDE_ASM("nonmatchings/threadman", func_00014F74);

INCLUDE_ASM("nonmatchings/threadman", func_00015128);
#endif

INCLUDE_ASM("nonmatchings/threadman", func_000153A8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", sceKernelReferSystemStatus);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdList);

INCLUDE_ASM("nonmatchings/threadman", sceKernelGetThreadmanIdType);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferThreadProfiler);

INCLUDE_ASM("nonmatchings/threadman", sceKernelReferGlobalProfiler);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_00013A4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/threadman", func_000144B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/threadman", func_00013AC4);

INCLUDE_ASM("nonmatchings/threadman", func_00013C88);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/threadman", func_0001544C);

INCLUDE_ASM("nonmatchings/threadman", func_000154D0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/threadman", func_00015840);

INCLUDE_ASM("nonmatchings/threadman", func_000158C0);

INCLUDE_ASM("nonmatchings/threadman", func_000159F8);

INCLUDE_ASM("nonmatchings/threadman", func_00015B08);

INCLUDE_ASM("nonmatchings/threadman", func_00015B40);
#endif
