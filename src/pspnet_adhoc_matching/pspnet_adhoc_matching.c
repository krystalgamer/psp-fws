/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhoc_matching_decls.h"

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingInit);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingCreate);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingStart);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingStop);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingDelete);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingSelectTarget);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingSetHelloOpt);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetHelloOpt);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetMembers);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingTerm);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingCancelTarget);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingCancelTargetWithOpt);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetPoolMaxAlloc);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetPoolStat);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00000E88);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00001054);

void func_0000113C(struct Unk_func_0000113C_0 *arg0, s32 *arg1) {
    sceKernelDeleteMbx(arg0->unk40);
    func_00002F90(*arg1);
    sceKernelWaitThreadEnd(arg0->unk3C, NULL);
    *arg1 = func_00002F24();
    sceNetFreeThreadinfo(arg0->unk3C);
    sceKernelDeleteThread(arg0->unk3C);
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000011A0);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00001430);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00001F54);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_0000213C);

void func_00002188(struct Unk_func_00002188_0 *arg0) {
    sceNetAdhocPdpDelete(arg0->unk38, 0);
    arg0->unk38 = 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000021B8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000022B4);

void func_000023E8(struct Unk_func_000023E8_0 *arg0) {
    if (arg0->unk48 > 0) {
        func_00003178(arg0->unk4C);
        arg0->unk48 = 0;
        arg0->unk4C = NULL;
    }
}

s32 func_00002420(struct Unk_func_00002420_0 *arg0) {
    void *sp0;
    s32 temp_v0;

    sceNet_lib_57CC57DA(&sp0, 0xFF, 6);
    temp_v0 = sceNetAdhocPdpSend(arg0->unk38, &sp0, (u32) arg0->unk14, arg0->unk4C, arg0->unk48, 0U, 1);
    return ((temp_v0 ^ 0x80410709) == 0) ? 0 : temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002480);

s32 func_0000256C(struct Unk_func_0000256C_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = sceNetAdhocPdpSend(arg0->unk38, arg1 + 8, (u32) arg0->unk14, arg0->unk68, arg0->unk64, 0U, 1);
    return ((temp_v0 ^ 0x80410709) == 0) ? 0 : temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000025B4);

void func_00002648(struct Unk_func_00002648_0 *arg0) {
    if (arg0->unk64 > 0) {
        func_00003178(arg0->unk68);
        arg0->unk64 = 0;
        arg0->unk68 = NULL;
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002680);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002700);

void func_00002794(struct Unk_func_00002794_0 *arg0, s32 *arg1) {
    sceNetAdhocSetSocketAlert(arg0->unk38, 0x20);
    func_00002F90(*arg1);
    sceKernelWaitThreadEnd(arg0->unk44, NULL);
    *arg1 = func_00002F24();
    sceNetFreeThreadinfo(arg0->unk44);
    sceKernelDeleteThread(arg0->unk44);
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000027FC);

void func_000029F8(struct Unk_func_000029F8_0 *arg0, struct Unk_func_000029F8_1 *arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = arg1->unk54;
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        arg1->unk54 = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
    arg1->unk54 = sceKernelSetAlarm(arg0->unk2C, (s32) func_00002C08, arg1);
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002A6C);

void func_00002AF4(struct Unk_func_00002AF4_0 *arg0, u32 arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = arg0->unk6C;
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        arg0->unk6C = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
    arg0->unk6C = sceKernelSetAlarm(arg1, (s32) func_00002CC0, arg0);
}

void func_00002B68(struct Unk_func_00002B68_0 *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = arg0->unk54;
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        arg0->unk54 = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
}

void func_00002BB8(struct Unk_func_00002BB8_0 *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = arg0->unk6C;
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        arg0->unk6C = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
}

s32 func_00002C08(struct Unk_func_00002C08_0 *arg0) {
    s32 temp_a2;

    temp_a2 = arg0->unk50;
    if (temp_a2 & 1) {
        arg0->unk54 = 0;
    } else {
        arg0->unk50 = (s32) (temp_a2 | 1);
        arg0->unk48 = 2;
        arg0->unk4C = arg0;
        sceKernelSendMbx(arg0->unk60, (u8 *)arg0 + 0x40);
        arg0->unk54 = 0;
    }
    return 0;
}

s32 func_00002C64(struct Unk_func_00002C64_0 *arg0) {
    s32 temp_a2;

    temp_a2 = arg0->unk50;
    if (temp_a2 & 1) {
        arg0->unk54 = 0;
    } else {
        arg0->unk50 = (s32) (temp_a2 | 1);
        arg0->unk48 = 3;
        arg0->unk4C = arg0;
        sceKernelSendMbx(arg0->unk60, (u8 *)arg0 + 0x40);
        arg0->unk54 = 0;
    }
    return 0;
}

s32 func_00002CC0(struct Unk_func_00002CC0_0 *arg0) {
    s32 temp_a2;

    temp_a2 = arg0->unk60;
    if (temp_a2 & 1) {
        arg0->unk6C = 0;
    } else {
        arg0->unk60 = (s32) (temp_a2 | 1);
        arg0->unk58 = 4;
        arg0->unk5C = 0;
        sceKernelSendMbx(arg0->unk40, (u8 *)arg0 + 0x50);
        arg0->unk6C = 0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002D1C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002DC8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002E94);

void func_00002EE8(void) {
    if (D_00003DB4 >= 0) {
        sceKernelDeleteSema(D_00003DB4);
    }
    D_00003DB4 = -1;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002F24);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002F90);

s32 func_00002FC4(void) {
    D_00003DC8 = 0;
    return 0;
}

s32 func_00002FD4(void) {
    s32 temp_a1;
    s32 temp_s0;
    s32 var_s1;

    var_s1 = D_00003DC8;
    if (var_s1 != 0) {
        do {
            temp_s0 = M2C_FIELD(var_s1, s32 *, 0);
            sceKernelFreeVpl((u32) D_00003DB0, M2C_FIELD(var_s1, void **, 0x1C));
            M2C_FIELD(var_s1, void **, 0x1C) = NULL;
            temp_a1 = var_s1;
            var_s1 = temp_s0;
            sceKernelFreeVpl((u32) D_00003DB0, (void *) temp_a1);
        } while (temp_s0 != 0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003040);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003078);

void func_000030C8(void) {
    if (D_00003DB0 >= 0) {
        sceKernelDeleteVpl((u32) D_00003DB0);
        D_00003DB0 = -1;
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003104);

void func_00003178(void *arg0) {
    sceKernelFreeVpl((u32) D_00003DB0, arg0);
}

s32 func_000031A0(void) {
    return D_00003DC4;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000031AC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003210);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003388);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000033F4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003424);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003560);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000035C4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003674);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000036AC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003774);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_0000382C);
