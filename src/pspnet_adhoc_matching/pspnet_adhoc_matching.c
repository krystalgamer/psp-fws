/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhoc_matching_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingInit);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingCreate);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingStart);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingStop);

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00000530);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingDelete);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_000045B4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_000045B8);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_000045C4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_000045D4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_000045E4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_000045F4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_00004608);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_00004620);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_00004634);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_00004644);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_00004658);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_000046F8);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_00004700);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_00004704);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_0000475C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_00004760);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_00004774);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_matching", D_00004784);
#endif

#if FW_VERSION != 103
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingSelectTarget);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingCancelTarget);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingSetHelloOpt);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetHelloOpt);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetMembers);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingSendData);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingAbortSendData);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingTerm);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingCancelTarget);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingCancelTargetWithOpt);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingDelete);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetPoolMaxAlloc);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceNetAdhocMatchingGetPoolMaxAlloc(void) {
    func_000028B4();
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetPoolStat);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00000E8C);
#endif

#if FW_VERSION < 150
void sceNetAdhocMatchingGetPoolMaxAlloc(void) {
    _sce_pspnet_adhoc_matching_pool_maxalloc();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00000E88);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001054);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00000D58);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00000FB4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001430);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_0000143C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001FA0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_0000123C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001BF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001DB8);
#endif

#if FW_VERSION < 150
void func_00000D58(void *arg0, s32 *arg1) {
    sceKernelDeleteMbx(M2C_FIELD(arg0, u32 *, 0x3C));
    _sce_pspnet_pmp_unlock(*arg1);
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, u32 *, 0x38), NULL);
    *arg1 = _sce_pspnet_pmp_lock();
    sceNetFreeThreadinfo(M2C_FIELD(arg0, u32 *, 0x38));
    sceKernelDeleteThread(M2C_FIELD(arg0, u32 *, 0x38));
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00000DBC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001030);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_0000113C);
#endif

#if FW_VERSION == 282
void func_0000113C(struct Unk_func_0000113C_0 *arg0, s32 *arg1) {
    sceKernelDeleteMbx(arg0->unk40);
    _sce_pspnet_pmp_unlock(*arg1);
    sceKernelWaitThreadEnd(arg0->unk3C, NULL);
    *arg1 = _sce_pspnet_pmp_lock();
    sceNetFreeThreadinfo(arg0->unk3C);
    sceKernelDeleteThread(arg0->unk3C);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000014D8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001808);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000011A0);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001430);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001F54);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000021B8);
#endif

#if FW_VERSION < 201
s32 func_0000213C(void *arg0) {
    s32 temp_v0;

    temp_v0 = sceNetAdhocPdpCreate(&D_00003410, (u32) M2C_FIELD(arg0, u16 *, 0x14), M2C_FIELD(arg0, u32 *, 0x18), 0);
    M2C_FIELD(arg0, s32 *, 0x34) = temp_v0;
    return __builtin_allegrex_min(temp_v0, 0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_0000213C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000181C(void *arg0) {
    sceNetAdhocPdpDelete(M2C_FIELD(arg0, s32 *, 0x38), 0);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}
#endif

#if FW_VERSION < 201
void func_0000181C(void *arg0) {
    sceNetAdhocPdpDelete(M2C_FIELD(arg0, s32 *, 0x34), 0);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_0000184C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001F3C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_0000194C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00001A74(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x48) > 0) {
        func_00002824(M2C_FIELD(arg0, s32 *, 0x4C));
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
}
#endif

#if FW_VERSION < 201
void func_00001A74(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) > 0) {
        func_00002824(M2C_FIELD(arg0, s32 *, 0x48));
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001AAC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00001AAC(void *arg0) {
    void *sp0;
    s32 temp_v0;

    sceNetMemset(&sp0, 0xFF, 6);
    temp_v0 = sceNetAdhocPdpSend(M2C_FIELD(arg0, s32 *, 0x38), &sp0, (u32) M2C_FIELD(arg0, u16 *, 0x14), M2C_FIELD(arg0, void **, 0x4C), M2C_FIELD(arg0, s32 *, 0x48), 0U, 1);
    return ((temp_v0 ^ 0x80410709) == 0) ? 0 : temp_v0;
}
#endif

#if FW_VERSION >= 282
void func_00002188(struct Unk_func_00002188_0 *arg0) {
    sceNetAdhocPdpDelete(arg0->unk38, 0);
    arg0->unk38 = 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002A08);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000021B8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000022B4);

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

    sceNetMemset(&sp0, 0xFF, 6);
    temp_v0 = sceNetAdhocPdpSend(arg0->unk38, &sp0, (u32) arg0->unk14, arg0->unk4C, arg0->unk48, 0U, 1);
    return ((temp_v0 ^ 0x80410709) == 0) ? 0 : temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002480);

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001C24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00001C24(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = sceNetAdhocPdpSend(M2C_FIELD(arg0, s32 *, 0x38), arg1 + 8, (u32) M2C_FIELD(arg0, u16 *, 0x14), M2C_FIELD(arg0, void **, 0x68), M2C_FIELD(arg0, s32 *, 0x64), 0U, 1);
    return ((temp_v0 ^ 0x80410709) == 0) ? 0 : temp_v0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_00001C24(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = sceNetAdhocPdpSend(M2C_FIELD(arg0, s32 *, 0x34), arg1 + 8, (u32) M2C_FIELD(arg0, u16 *, 0x14), M2C_FIELD(arg0, void **, 0x64), M2C_FIELD(arg0, s32 *, 0x60), 0U, 1);
    return ((temp_v0 ^ 0x80410709) == 0) ? 0 : temp_v0;
}
#endif

#if FW_VERSION >= 282
s32 func_0000256C(struct Unk_func_0000256C_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = sceNetAdhocPdpSend(arg0->unk38, arg1 + 8, (u32) arg0->unk14, arg0->unk68, arg0->unk64, 0U, 1);
    return ((temp_v0 ^ 0x80410709) == 0) ? 0 : temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000025B4);

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00001D08(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x64) > 0) {
        func_00002824(M2C_FIELD(arg0, s32 *, 0x68));
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
    }
}
#endif

#if FW_VERSION < 201
void func_00001D08(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x60) > 0) {
        func_00002824(M2C_FIELD(arg0, s32 *, 0x64));
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001D40);
#else
void func_00002648(struct Unk_func_00002648_0 *arg0) {
    if (arg0->unk64 > 0) {
        func_00003178(arg0->unk68);
        arg0->unk64 = 0;
        arg0->unk68 = NULL;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002680);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002700);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00001E50);
#endif

#if FW_VERSION < 150
void func_00001E50(void *arg0, s32 *arg1) {
    sceNetAdhocSetSocketAlert(M2C_FIELD(arg0, s32 *, 0x34), 0x20);
    _sce_pspnet_pmp_unlock(*arg1);
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, u32 *, 0x40), NULL);
    *arg1 = _sce_pspnet_pmp_lock();
    sceNetFreeThreadinfo(M2C_FIELD(arg0, u32 *, 0x40));
    sceKernelDeleteThread(M2C_FIELD(arg0, u32 *, 0x40));
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002794);
#endif

#if FW_VERSION == 282
void func_00002794(struct Unk_func_00002794_0 *arg0, s32 *arg1) {
    sceNetAdhocSetSocketAlert(arg0->unk38, 0x20);
    _sce_pspnet_pmp_unlock(*arg1);
    sceKernelWaitThreadEnd(arg0->unk44, NULL);
    *arg1 = _sce_pspnet_pmp_lock();
    sceNetFreeThreadinfo(arg0->unk44);
    sceKernelDeleteThread(arg0->unk44);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000027FC);

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000020AC(void *arg0, void *arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x54);
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg1, s32 *, 0x54) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
    M2C_FIELD(arg1, s32 *, 0x54) = sceKernelSetAlarm(M2C_FIELD(arg0, u32 *, 0x2C), (s32) &func_000022A4, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000020AC(void *arg0, void *arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x50);
    if (temp_v1 > 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg1, s32 *, 0x50) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
    M2C_FIELD(arg1, s32 *, 0x50) = sceKernelSetAlarm(M2C_FIELD(arg0, u32 *, 0x2C), (s32) &func_000022A4, arg1);
}
#endif

#if FW_VERSION < 150
void func_000020AC(void *arg0, void *arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x50);
    if (temp_v1 > 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg1, s32 *, 0x50) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
    M2C_FIELD(arg1, s32 *, 0x50) = sceKernelSetAlarm(M2C_FIELD(arg0, u32 *, 0x2C), (s32) &pmp_rexmt_handler, arg1);
}
#endif

#if FW_VERSION >= 350
void func_000029F8(struct Unk_func_000029F8_0 *arg0, struct Unk_func_000029F8_1 *arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = arg1->unk54;
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        arg1->unk54 = -1;
    }
    sceKernelCpuResumeIntr(temp_s1);
    arg1->unk54 = sceKernelSetAlarm(arg0->unk2C, (s32) func_00002C08, arg1);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
#endif

#if FW_VERSION >= 350
void func_00003308(void *arg0, void *arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x9C);
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg1, s32 *, 0x9C) = -1;
    }
    sceKernelCpuResumeIntr(temp_s1);
    M2C_FIELD(arg1, s32 *, 0x9C) = sceKernelSetAlarm(M2C_FIELD(arg0, u32 *, 0x2C), (s32) &func_000035DC, arg1);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00003308(void *arg0, void *arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg1, s32 *, 0x9C);
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg1, s32 *, 0x9C) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
    M2C_FIELD(arg1, s32 *, 0x54) = sceKernelSetAlarm(M2C_FIELD(arg0, u32 *, 0x2C), (s32) &func_000035DC, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002A6C);

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000021A8(void *arg0, u32 arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
    M2C_FIELD(arg0, s32 *, 0x6C) = sceKernelSetAlarm(arg1, (s32) &func_00002948, arg0);
}
#endif

#if FW_VERSION < 201
void func_000021A8(void *arg0, u32 arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_v1 > 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
    M2C_FIELD(arg0, s32 *, 0x68) = sceKernelSetAlarm(arg1, (s32) &func_00002374, arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00002204(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00002204(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v1 > 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION < 150
void _sce_pspnet_pmp_stoptimer(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v1 > 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000226C(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION < 201
void func_0000226C(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_v1 > 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000022A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00002300(void *arg0) {
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_a2 & 1) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (temp_a2 | 1);
        M2C_FIELD(arg0, s32 *, 0x48) = 3;
        M2C_FIELD(arg0, void **, 0x4C) = arg0;
        sceKernelSendMbx(M2C_FIELD(arg0, u32 *, 0x60), arg0 + 0x40);
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00002300(void *arg0) {
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_a2 & 1) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_a2 | 1);
        M2C_FIELD(arg0, s32 *, 0x44) = 3;
        M2C_FIELD(arg0, void **, 0x48) = arg0;
        sceKernelSendMbx(M2C_FIELD(arg0, u32 *, 0x58), arg0 + 0x3C);
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002948);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000029A4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", pmp_rexmt_handler);

s32 pmp_keepalive_handler(void *arg0) {
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_a2 & 1) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_a2 | 1);
        M2C_FIELD(arg0, s32 *, 0x44) = 3;
        M2C_FIELD(arg0, void **, 0x48) = arg0;
        sceKernelSendMbx(M2C_FIELD(arg0, u32 *, 0x58), arg0 + 0x3C);
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002374);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000023D8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002B24);
#endif

#if FW_VERSION >= 350
void func_00002AF4(struct Unk_func_00002AF4_0 *arg0, u32 arg1) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = arg0->unk6C;
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        arg0->unk6C = -1;
    }
    sceKernelCpuResumeIntr(temp_s1);
    arg0->unk6C = sceKernelSetAlarm(arg1, (s32) func_00002CC0, arg0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
#endif

#if FW_VERSION >= 350
void func_00003478(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x54) = -1;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x9C);
    if (temp_v1_2 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1_2);
        M2C_FIELD(arg0, s32 *, 0x9C) = -1;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00003478(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x9C);
    if (temp_v1_2 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1_2);
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 350
void func_00002B68(struct Unk_func_00002B68_0 *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x9C);
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x9C) = -1;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00002B68(struct Unk_func_00002B68_0 *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x9C);
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION == 282
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
#endif

#if FW_VERSION >= 350
void func_00002BB8(struct Unk_func_00002BB8_0 *arg0) {
    s32 temp_s1;
    s32 temp_v1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v1 = arg0->unk6C;
    if (temp_v1 >= 0) {
        sceKernelCancelAlarm((u32) temp_v1);
        arg0->unk6C = -1;
    }
    sceKernelCpuResumeIntr(temp_s1);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
#endif

#if FW_VERSION >= 350
s32 func_00002C08(struct Unk_func_00002C08_0 *arg0) {
    s32 temp_a2;

    temp_a2 = arg0->unk50;
    if (temp_a2 & 1) {

    } else {
        arg0->unk50 = temp_a2 | 1;
        arg0->unk48 = 2;
        arg0->unk4C = arg0;
        sceKernelSendMbx(arg0->unk60, &arg0->pad0[0x40]);
    }
    arg0->unk54 = -1;
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000035DC);
#endif

#if FW_VERSION >= 350
s32 func_00002C64(struct Unk_func_00002C64_0 *arg0) {
    s32 temp_a2;

    temp_a2 = arg0->unk50;
    if (temp_a2 & 1) {

    } else {
        arg0->unk50 = temp_a2 | 1;
        arg0->unk48 = 3;
        arg0->unk4C = arg0;
        sceKernelSendMbx(arg0->unk60, &arg0->pad0[0x40]);
    }
    arg0->unk54 = -1;
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
#endif

#if FW_VERSION >= 350
s32 func_00002CC0(struct Unk_func_00002CC0_0 *arg0) {
    s32 temp_a2;

    temp_a2 = arg0->unk60;
    if (temp_a2 & 1) {

    } else {
        arg0->unk60 = temp_a2 | 1;
        arg0->unk58 = 4;
        arg0->unk5C = 0;
        sceKernelSendMbx(arg0->unk40, &arg0->pad44[0xC]);
    }
    arg0->unk6C = -1;
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
#endif

#if FW_VERSION < 103 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002D1C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_0000382C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000038AC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003920);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_0000245C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002528);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000025B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000260C(void) {
    if (D_00003A44 >= 0) {
        sceKernelDeleteSema(D_00003A44);
    }
    D_00003A44 = -1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000260C(void) {
    if (D_00003454 > 0) {
        sceKernelDeleteSema(D_00003454);
    }
    D_00003454 = -1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002648);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000026A4(s32 arg0) {
    if (arg0 > 0) {
        D_00003A48 = -1;
        sceKernelSignalSema(D_00003A44, 1);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000026A4(s32 arg0) {
    if (arg0 == 0) {

    } else {
        D_00003458 = -1;
        sceKernelSignalSema(D_00003454, 1);
    }
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002DC8);
#endif

#if FW_VERSION < 150 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", _sce_pspnet_pmp_lockinit);
#endif

#if FW_VERSION < 150
void _sce_pspnet_pmp_lockterm(void) {
    if (D_000033F4 > 0) {
        sceKernelDeleteSema(D_000033F4);
    }
    D_000033F4 = -1;
}
#endif

#if FW_VERSION >= 282
void func_00002EE8(void) {
    if (D_00003DB4 >= 0) {
        sceKernelDeleteSema(D_00003DB4);
    }
    D_00003DB4 = -1;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000039B0);

void func_00003A1C(s32 arg0) {
    if (arg0 > 0) {
        D_00004898 = -1;
        sceKernelSignalSema(D_00003DB4, 1);
    }
}
#endif

#if FW_VERSION < 150
s32 _sce_pspnet_pmp_lock(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelGetThreadId();
    var_v1 = 0;
    if (temp_v0 != D_000033F8) {
        sceKernelWaitSema(D_000033F4, 1, NULL);
        D_000033F8 = temp_v0;
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", _sce_pspnet_pmp_lock);
#endif

#if FW_VERSION < 150 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", _sce_pspnet_pmp_unlock);
#endif

#if FW_VERSION < 282
s32 func_000026F8(void) {
    D_00003DC8 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000026F0(void) {
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

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_0000275C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002794);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000027D8(void) {
    if (D_00003DB0 >= 0) {
        sceKernelDeleteVpl((u32) D_00003DB0);
        D_00003DB0 = -1;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000027D8(void) {
    if (D_00003DB0 > 0) {
        sceKernelDeleteVpl((u32) D_00003DB0);
        D_00003DB0 = -1;
    }
}
#endif

#if FW_VERSION < 150
s32 func_00002708(void) {
    return (-(D_00003DC8 == 0) & 0x7FBEF7EF) - 0x7FBEF7EF;
}
#endif

#if FW_VERSION >= 282
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

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003040);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003B04);
#endif

#if FW_VERSION < 150
s32 _sce_pspnet_pmp_malloc_init(u32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = sceKernelCreateVpl("SceNetAdhocMatchingMemoryPool", 2, 0U, arg0, NULL);
    temp_v0 = __builtin_allegrex_min(temp_v0_2, 0);
    D_00003DB0 = temp_v0_2;
    return temp_v0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", _sce_pspnet_pmp_malloc_init);
#endif

#if FW_VERSION < 150
void _sce_pspnet_pmp_malloc_term(void) {
    if (D_00003DB0 > 0) {
        sceKernelDeleteVpl((u32) D_00003DB0);
        D_00003DB0 = -1;
    }
}
#endif

#if FW_VERSION >= 282
void func_000030C8(void) {
    if (D_00003DB0 >= 0) {
        sceKernelDeleteVpl((u32) D_00003DB0);
        D_00003DB0 = -1;
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003104);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002824);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000028B4(void) {
    return D_00003404;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002E90);
#endif

#if FW_VERSION < 150
s32 _sce_pspnet_adhoc_matching_pool_maxalloc(void) {
    return D_00003404;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002858);
#else
void func_00003178(void *arg0) {
    sceKernelFreeVpl((u32) D_00003DB0, arg0);
}

s32 func_000031A0(void) {
    return D_00003DC4;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000031AC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003210);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003388);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003E80);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003EB0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002AAC);
#endif

#if FW_VERSION < 150 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", _sce_pspnet_pmp_get_ctx);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002A74);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003424);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003560);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00004018);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000032A8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002BD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000035C4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003674);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003390);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002C90);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002CE4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002528);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002D28);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002DEC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002E24);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002E98);

u8 *func_00002ED8(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002F0C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002F00);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002F38);

void func_00002F78(s32 arg0, s32 arg1) {
    func_00002E24(arg1, arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00002F9C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_000036AC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_00003774);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc_matching", func_0000382C);
#endif
