/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "wlan_decls.h"

INCLUDE_ASM("nonmatchings/wlan", func_00000000);

INCLUDE_RODATA("nonmatchings/wlan", D_00018A00);

INCLUDE_RODATA("nonmatchings/wlan", D_00018A3C);

INCLUDE_RODATA("nonmatchings/wlan", D_00018A48);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_000173B8);

INCLUDE_RODATA("nonmatchings/wlan", D_000173CC);

INCLUDE_RODATA("nonmatchings/wlan", D_000173F4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018A9C);

INCLUDE_RODATA("nonmatchings/wlan", D_00018AB0);

INCLUDE_RODATA("nonmatchings/wlan", D_00018AD8);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_00018AEC);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_6D89822C);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/wlan", func_000003C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00000330);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/wlan", func_000003E8);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00000620);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_0001387C);

INCLUDE_RODATA("nonmatchings/wlan", D_00013888);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018B14);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018B20);
#endif

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_482CAE9A);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_C9A8CAB7);
#endif

#if FW_VERSION >= 300
void sceWlanDrv_driver_C9A8CAB7(void) {
    s32 *temp_s1;
    struct Unk_D_000191B0 *temp_s0;
    u32 temp_s2;

    temp_s0 = D_000191B0;
    temp_s2 = shiftK1();
    temp_s1 = &temp_s0->unk184;
    if (temp_s0 != NULL) {
        sceNetIfhandle_driver_54D1AEA1(temp_s1);
        sceNetIfhandle_driver_C9344A59(temp_s1);
        temp_s0->unk184 = 0;
    }
    setK1(temp_s2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void sceWlanDrv_driver_C9A8CAB7(void) {
    struct Unk_D_000191B0 *temp_s0;
    u32 temp_s2;
    u8 *temp_s1;

    temp_s0 = D_000191B0;
    temp_s2 = shiftK1();
    temp_s1 = temp_s0->pad188;
    if (temp_s0 != NULL) {
        sceNetIfhandle_driver_54D1AEA1(temp_s1);
        sceNetIfhandle_driver_C9344A59(temp_s1);
        M2C_FIELD(temp_s0, s32 *, 0x188) = 0;
    }
    setK1(temp_s2);
}
#endif

#if FW_VERSION == 282
void sceWlanDrv_driver_C9A8CAB7(void) {
    u32 temp_s2;
    struct Unk_sceWlanDrv_driver_C9A8CAB7_temp_s0 *temp_s0;
    void *temp_s1;

    temp_s0 = D_000191B0;
    temp_s2 = shiftK1();
    temp_s1 = &temp_s0->unk188;
    if (temp_s0 != NULL) {
        sceNetIfhandle_driver_54D1AEA1(temp_s1);
        sceNetIfhandle_driver_C9344A59(temp_s1);
        temp_s0->unk188 = 0;
    }
    setK1(temp_s2);
}
#endif

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_19E51F54);

INCLUDE_ASM("nonmatchings/wlan", sceWlanGetEtherAddr);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000008B4);

INCLUDE_ASM("nonmatchings/wlan", func_00000990);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_000134A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00000A6C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/wlan", func_000008A4);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/wlan", D_00013318);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/wlan", func_000008C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00000874);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00000A08);

INCLUDE_ASM("nonmatchings/wlan", func_00000AE4);

INCLUDE_RODATA("nonmatchings/wlan", D_00018B3C);

INCLUDE_ASM("nonmatchings/wlan", func_00000BC0);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_000011AC);

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00000E7C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00000F1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/wlan", D_00013A14);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000131C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_000010E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00001118);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00001B5C);
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000122C);

INCLUDE_ASM("nonmatchings/wlan", func_00001468);

INCLUDE_ASM("nonmatchings/wlan", func_000026F8);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00002818);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000021C8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_000028D0);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_FE8A0B46);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_749B813A);
#endif

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_7FF54BD2);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_05FE320C);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_00002D78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00001EC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00001F9C);

void func_0000227C(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x264), 1, NULL);
}

void func_000022A0(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x264), 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000022C0(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x174), 1, NULL);
}
#endif

#if FW_VERSION < 201
void func_000022C0(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x268), 1, NULL);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000022E4(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x174), 1);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00003448(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x1D8) == 0) {
        M2C_FIELD(&D_0002E3AC, s32 *, 0) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 4) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 8) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 0xC) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 0x10) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 0x14) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 0x18) = 0;
        temp_v0 = sceKernelSetAlarm(0x30D40U, (s32) &func_00003F08, arg0);
        if (temp_v0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1D8) = temp_v0;
            M2C_FIELD(arg0, M2C_UNK **, 0x1DC) = &D_0002E3AC;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
}

void func_000034CC(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1D8);
    if (temp_v1 != 0) {
        sceKernelCancelAlarm(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
        M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
    }
}
#endif

#if FW_VERSION < 201
void func_000022E4(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x268), 1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00002188(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x26C), 1, NULL);
}

void func_000021AC(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x26C), 1);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00002E78);
#endif

#if FW_VERSION >= 300
void func_00003114(struct Unk_func_00003114_0 *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x170), 1, NULL);
}
#endif

#if FW_VERSION == 282
void func_00003114(struct Unk_func_00003114_0 *arg0) {
    sceKernelWaitSema(arg0->unk174, 1, NULL);
}
#endif

#if FW_VERSION >= 300
void func_00003138(struct Unk_func_00003114_0 *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x170), 1);
}
#endif

#if FW_VERSION == 282
void func_00003138(struct Unk_func_00003114_0 *arg0) {
    sceKernelSignalSema(arg0->unk174, 1);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/wlan", func_00003158);
#endif

#if FW_VERSION == 282
void func_00003158(struct Unk_func_00003158_0 *arg0) {
    s32 temp_v0;

    if (arg0->unk1DC == 0) {
        D_0001925C.unk0 = 0;
        D_0001925C.unk4 = 0;
        D_0001925C.unk8 = 0;
        D_0001925C.unkC = 0;
        D_0001925C.unk10 = 0;
        D_0001925C.unk14 = 0;
        D_0001925C.unk18 = 0;
        temp_v0 = sceKernelSetAlarm(0x30D40U, (s32) func_00003CE0, arg0);
        if (temp_v0 < 0) {
            arg0->unk1DC = 0;
        } else {
            arg0->unk1DC = temp_v0;
            arg0->unk1E0 = &D_0001925C;
        }
    }
    arg0->unk1E4 = 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/wlan", func_000031DC);
#endif

#if FW_VERSION == 282
void func_000031DC(struct Unk_func_000031DC_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk1DC;
    if (temp_v1 != 0) {
        sceKernelCancelAlarm(temp_v1);
        arg0->unk1DC = 0;
        arg0->unk1E0 = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000321C);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/wlan", func_00003200);

s32 func_00003304(struct Unk_func_00003304_0 *arg0) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_s0;
    void *temp_a1;
    void *var_v1;

    temp_a0 = sceKernelCpuSuspendIntr();
    temp_a1 = M2C_FIELD(arg0, void **, 0x140);
    var_v1 = M2C_FIELD(temp_a1, void **, 4);
    var_s0 = M2C_FIELD(temp_a1, s32 *, 0) == 0;
    if (var_v1 != temp_a1) {
        do {
            temp_a3 = M2C_FIELD(var_v1, s32 *, 0);
            var_v1 = M2C_FIELD(var_v1, void **, 4);
            var_s0 += temp_a3 == 0;
        } while (var_v1 != temp_a1);
    }
    sceKernelCpuResumeIntr(temp_a0);
    return var_s0;
}

INCLUDE_ASM("nonmatchings/wlan", func_00003374);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/wlan", func_00002E2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00002350(void *arg0, s32 arg1) {
    s32 temp_a3;
    void *temp_a2;

    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x134), 1, NULL);
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x140);
    temp_a2 = temp_a3 + (((s32) (arg1 - (temp_a3 + (M2C_FIELD(arg0, s32 *, 0x13C) * 0x14))) / (s32) M2C_FIELD(arg0, s32 *, 0x138)) * 0x14);
    if (M2C_FIELD(temp_a2, s32 *, 0x10) == arg1) {
        M2C_FIELD(temp_a2, s32 *, 0) = 0;
        M2C_FIELD(arg0, void **, 0x144) = temp_a2;
    }
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x134), 1);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_000035F4(void *arg0) {
    s32 temp_a2;
    s32 var_s0;
    void *temp_a0;
    void *var_v1;

    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x134), 1, NULL);
    temp_a0 = M2C_FIELD(arg0, void **, 0x144);
    var_v1 = M2C_FIELD(temp_a0, void **, 4);
    var_s0 = M2C_FIELD(temp_a0, s32 *, 0) == 0;
    if (var_v1 != temp_a0) {
        do {
            temp_a2 = M2C_FIELD(var_v1, s32 *, 0);
            var_v1 = M2C_FIELD(var_v1, void **, 4);
            var_s0 += temp_a2 == 0;
        } while (var_v1 != temp_a0);
    }
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x134), 1);
    return var_s0;
}

void func_00003664(void *arg0) {
    void *temp_a0;
    void *var_v1;

    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x134), 1, NULL);
    temp_a0 = M2C_FIELD(arg0, void **, 0x144);
    if (M2C_FIELD(temp_a0, s32 *, 0) != 0) {
        M2C_FIELD(temp_a0, s32 *, 0) = 0;
    }
    var_v1 = M2C_FIELD(temp_a0, void **, 4);
    if (var_v1 != temp_a0) {
        do {
            if (M2C_FIELD(var_v1, s32 *, 0) != 0) {
                M2C_FIELD(var_v1, s32 *, 0) = 0;
            }
            var_v1 = M2C_FIELD(var_v1, void **, 4);
        } while (var_v1 != temp_a0);
    }
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x134), 1);
}
#endif

#if FW_VERSION < 201
void func_00002350(void *arg0, s32 arg1) {
    s32 temp_a3;
    void *temp_a2;

    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x228), 1, NULL);
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x234);
    temp_a2 = temp_a3 + (((s32) (arg1 - (temp_a3 + (M2C_FIELD(arg0, s32 *, 0x230) * 0x14))) / (s32) M2C_FIELD(arg0, s32 *, 0x22C)) * 0x14);
    if (M2C_FIELD(temp_a2, s32 *, 0x10) == arg1) {
        M2C_FIELD(temp_a2, s32 *, 0) = 0;
        M2C_FIELD(arg0, void **, 0x238) = temp_a2;
    }
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x228), 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000023EC(void *arg0) {
    void *temp_v1;
    void *var_v0;

    temp_v1 = M2C_FIELD(arg0, void **, 0x15C);
    var_v0 = M2C_FIELD(temp_v1, void **, 4);
    if (var_v0 != temp_v1) {
        do {
            M2C_FIELD(var_v0, s16 *, 0) = 0;
            M2C_FIELD(var_v0, s16 *, 2) = 0;
            var_v0 = M2C_FIELD(var_v0, void **, 4);
        } while (var_v0 != temp_v1);
    }
    M2C_FIELD(temp_v1, u16 *, 0) = (u16) (M2C_FIELD(temp_v1, u16 *, 0) | 2);
}
#endif

#if FW_VERSION < 201
void func_000023EC(void *arg0) {
    void *temp_v1;
    void *var_v0;

    temp_v1 = M2C_FIELD(arg0, void **, 0x250);
    var_v0 = M2C_FIELD(temp_v1, void **, 4);
    if (var_v0 != temp_v1) {
        do {
            M2C_FIELD(var_v0, s16 *, 0) = 0;
            M2C_FIELD(var_v0, s16 *, 2) = 0;
            var_v0 = M2C_FIELD(var_v0, void **, 4);
        } while (var_v0 != temp_v1);
    }
    M2C_FIELD(temp_v1, u16 *, 0) = (u16) (M2C_FIELD(temp_v1, u16 *, 0) | 2);
}
#endif

#if FW_VERSION == 282
void func_00003268(struct Unk_func_00003268_0 *arg0, s32 arg1) {
    s32 temp_a3;
    struct Unk_func_00003268_temp_a2 *temp_a2;

    sceKernelWaitSema(arg0->unk134, 1, NULL);
    temp_a3 = arg0->unk140;
    temp_a2 = temp_a3 + (((s32) (arg1 - (temp_a3 + (arg0->unk13C * 0x14))) / (s32) arg0->unk138) * 0x14);
    if (temp_a2->unk10 == arg1) {
        temp_a2->unk0 = 0;
        arg0->unk144 = temp_a2;
    }
    sceKernelSignalSema(arg0->unk134, 1);
}

s32 func_00003304(struct Unk_func_00003304_0 *arg0) {
    s32 temp_a2;
    s32 var_s0;
    struct Unk_func_00003304_temp_a0 *temp_a0;
    struct Unk_func_00003304_var_v1 *var_v1;

    sceKernelWaitSema(arg0->unk134, 1, NULL);
    temp_a0 = arg0->unk144;
    var_v1 = temp_a0->unk4;
    var_s0 = temp_a0->unk0 == 0;
    if (var_v1 != temp_a0) {
        do {
            temp_a2 = var_v1->unk0;
            var_v1 = var_v1->unk4;
            var_s0 += temp_a2 == 0;
        } while (var_v1 != temp_a0);
    }
    sceKernelSignalSema(arg0->unk134, 1);
    return var_s0;
}

void func_00003374(struct Unk_func_00003374_0 *arg0) {
    struct Unk_func_00003374_temp_a0 *temp_a0;
    struct Unk_func_00003374_var_v1 *var_v1;

    sceKernelWaitSema(arg0->unk134, 1, NULL);
    temp_a0 = arg0->unk144;
    if (temp_a0->unk0 != 0) {
        temp_a0->unk0 = 0;
    }
    var_v1 = temp_a0->unk4;
    if (var_v1 != temp_a0) {
        do {
            if (var_v1->unk0 != 0) {
                var_v1->unk0 = 0;
            }
            var_v1 = var_v1->unk4;
        } while (var_v1 != temp_a0);
    }
    sceKernelSignalSema(arg0->unk134, 1);
}
#endif

#if FW_VERSION >= 300
void func_000033E4(struct Unk_func_000033E4_0 *arg0) {
    void *temp_v1;
    void *var_v0;

    temp_v1 = M2C_FIELD(arg0, void **, 0x158);
    var_v0 = M2C_FIELD(temp_v1, void **, 4);
    if (var_v0 != temp_v1) {
        do {
            M2C_FIELD(var_v0, s16 *, 0) = 0;
            M2C_FIELD(var_v0, s16 *, 2) = 0;
            var_v0 = M2C_FIELD(var_v0, void **, 4);
        } while (var_v0 != temp_v1);
    }
    M2C_FIELD(temp_v1, u16 *, 0) = (u16) (M2C_FIELD(temp_v1, u16 *, 0) | 2);
}
#endif

#if FW_VERSION == 282
void func_000033E4(struct Unk_func_000033E4_0 *arg0) {
    struct Unk_func_000033E4_temp_v1 *temp_v1;
    struct Unk_func_000033E4_var_v0 *var_v0;

    temp_v1 = arg0->unk15C;
    var_v0 = temp_v1->unk4;
    if (var_v0 != temp_v1) {
        do {
            var_v0->unk0 = 0;
            var_v0->unk2 = 0;
            var_v0 = var_v0->unk4;
        } while (var_v0 != temp_v1);
    }
    temp_v1->unk0 = (u16) (temp_v1->unk0 | 2);
}
#endif

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_EC9232F0);

s32 module_reboot_before(void) {
    sceWlanDrv_driver_EC9232F0();
    return 0;
}

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_93440B11);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_5E7C8D94);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_5ED4049A);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_6D5C839E);
#endif

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_B4D7CB74);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_A447103A);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_9658C9F7);

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceWlanDrv_driver_4C7F62E0(void) {
    s32 temp_v1;
    struct Unk_D_000191B0 *temp_s1;
    u32 temp_s0;

    temp_s1 = D_000191B0;
    temp_s0 = shiftK1();
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1CC);
    if (temp_v1 > 0) {
        sceKernelCancelCallback(temp_v1);
        M2C_FIELD(temp_s1, s32 *, 0x1CC) = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceWlanDrv_driver_4C7F62E0(void) {
    s32 temp_v1;
    struct Unk_D_000191B0 *temp_s1;
    u32 temp_s0;

    temp_s1 = D_000191B0;
    temp_s0 = shiftK1();
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x2C4);
    if (temp_v1 > 0) {
        sceKernelCancelCallback(temp_v1);
        M2C_FIELD(temp_s1, s32 *, 0x2C4) = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceWlanDrv_driver_4C7F62E0(void) {
    s32 temp_v1;
    struct Unk_D_000191B0 *temp_s1;
    u32 temp_s0;

    temp_s1 = D_000191B0;
    temp_s0 = shiftK1();
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x2C0);
    if (temp_v1 > 0) {
        sceKernelCancelCallback(temp_v1);
        M2C_FIELD(temp_s1, s32 *, 0x2C0) = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 300
s32 sceWlanDrv_driver_4C7F62E0(void) {
    s32 temp_v1;
    struct Unk_D_000191B0 *temp_s1;
    u32 temp_s0;

    temp_s1 = D_000191B0;
    temp_s0 = shiftK1();
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1C8);
    if (temp_v1 > 0) {
        sceKernelCancelCallback(temp_v1);
        M2C_FIELD(temp_s1, s32 *, 0x1C8) = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 sceWlanDrv_driver_4C7F62E0(void) {
    s32 temp_v1;
    u32 temp_s0;
    struct Unk_sceWlanDrv_driver_4C7F62E0_temp_s1 *temp_s1;

    temp_s1 = D_000191B0;
    temp_s0 = shiftK1();
    temp_v1 = temp_s1->unk1CC;
    if (temp_v1 > 0) {
        sceKernelCancelCallback(temp_v1);
        temp_s1->unk1CC = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_81579D36);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_5BAA1FE5);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_4C14BACA);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_2D0FAE4E);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_56F467CA);

#if FW_VERSION >= 300
s32 sceWlanGetSwitchState(void) {
    return M2C_FIELD(D_000191B0, s32 *, 0x1CC) == 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
s32 sceWlanGetSwitchState(void) {
    return D_000191B0->unk1D0 == 1;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000390C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceWlanGetSwitchState(void) {
    return M2C_FIELD(D_000191B0, s32 *, 0x2C8) == 1;
}
#endif

#if FW_VERSION == 100
s32 sceWlanGetSwitchState(void) {
    return M2C_FIELD(D_000191B0, s32 *, 0x2C4) == 1;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00003A20);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00003A88);

INCLUDE_ASM("nonmatchings/wlan", func_00003AC0);

INCLUDE_ASM("nonmatchings/wlan", func_00003AE4);

INCLUDE_ASM("nonmatchings/wlan", func_00003B60);

INCLUDE_ASM("nonmatchings/wlan", func_00003B78);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00002B40);

INCLUDE_ASM("nonmatchings/wlan", func_00002B84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00002BC8(void *arg0, s32 arg1) {
    if (arg1 != 1) {

    } else if (M2C_FIELD(arg0, s32 *, 0x280) != 0) {
        sceNetIfhandle_driver_263767F6(arg0 + 0x280, 5, 0);
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00002BC8(void *arg0, s32 arg1) {
    if (arg1 != 1) {

    } else if (M2C_FIELD(arg0, s32 *, 0x27C) != 0) {
        sceNetIfhandle_driver_263767F6(arg0 + 0x27C, 5, 0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_FE8A0B46);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/wlan", func_0000367C);
#endif

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_40B0AA4A);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_8D5F551B);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00002C5C);

INCLUDE_ASM("nonmatchings/wlan", func_00002CD4);
#endif

#if FW_VERSION >= 300
void sceWlanDrv_driver_E50312AB(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000B24C(M2C_FIELD(D_000191B0, s32 *, 0x180), arg0, arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 282
void sceWlanDrv_driver_E50312AB(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000B24C(D_000191B0->unk184, arg0, arg1, arg2, arg3);
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00003C68);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00003F08);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/wlan", D_000175D0);

INCLUDE_ASM("nonmatchings/wlan", func_00003C10);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00002C50);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00002DC4);

INCLUDE_ASM("nonmatchings/wlan", func_00002F60);

INCLUDE_ASM("nonmatchings/wlan", func_0000310C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00003BEC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_000044F4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_000040BC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/wlan", func_00003060);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_00003908);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/wlan", func_000030AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_000033A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00003180);

INCLUDE_ASM("nonmatchings/wlan", func_0000345C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000368C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000036EC);

s32 func_000037A4(s32 *arg0) {
    func_000036EC(*arg0);
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_000049CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00003708);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000037A0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00004DAC);

INCLUDE_ASM("nonmatchings/wlan", func_00004F18);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/wlan", func_00003DC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_000037F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_000037CC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000509C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000052EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00005B2C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_00006F3C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00005F44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000063D4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_00007710);

INCLUDE_ASM("nonmatchings/wlan", func_00007AA4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00006760);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/wlan", func_00007F08);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00008234);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/wlan", func_000073B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00005184);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_0000529C);

INCLUDE_ASM("nonmatchings/wlan", func_000053CC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/wlan", func_000057D4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/wlan", func_00005AD4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/wlan", func_00006E24);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/wlan", func_00007950);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_00006FD8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/wlan", func_00005688);

INCLUDE_ASM("nonmatchings/wlan", func_0000598C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00005C88);

INCLUDE_ASM("nonmatchings/wlan", func_00005FA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00006278);

INCLUDE_ASM("nonmatchings/wlan", func_00006338);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_000060FC);

INCLUDE_ASM("nonmatchings/wlan", func_00006194);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00006258);

INCLUDE_ASM("nonmatchings/wlan", func_00006300);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00017E04);

INCLUDE_ASM("nonmatchings/wlan", func_00006458);

INCLUDE_ASM("nonmatchings/wlan", func_000064F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00006574(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x27C);
    func_000022C0(arg0);
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(temp_s0, u16 *, 0x124);
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(temp_s0, u16 *, 0x126);
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(temp_s0, u16 *, 0x128);
    func_000022E4(arg0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00006574(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x278);
    func_0000227C(arg0);
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(temp_s0, u16 *, 0xE8);
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(temp_s0, u16 *, 0xEA);
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(temp_s0, u16 *, 0xEC);
    func_000022A0(arg0);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 func_000065D4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return 0;
}

void func_000065E4(void) {

}

INCLUDE_ASM("nonmatchings/wlan", func_000065EC);

INCLUDE_ASM("nonmatchings/wlan", func_00006640);

INCLUDE_ASM("nonmatchings/wlan", func_000066A4);

s32 func_000066FC(s32 *arg0) {
    return *arg0 != 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/wlan", D_000175D0);

INCLUDE_RODATA("nonmatchings/wlan", D_000175DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018CE4);

INCLUDE_RODATA("nonmatchings/wlan", D_000175F8);

INCLUDE_RODATA("nonmatchings/wlan", D_00017608);
#endif

#if FW_VERSION >= 300
s32 func_00003CE0(struct Unk_func_00003CE0_0 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x1DC);
    temp_s1 = sceKernelCpuSuspendIntr();
    if ((temp_s0 != NULL) && !(M2C_FIELD(temp_s0, s32 *, 0x18) & 1)) {
        M2C_FIELD(temp_s0, s32 *, 8) = 0x80000012;
        M2C_FIELD(temp_s0, s32 *, 0x18) = 3;
        sceKernelSendMbx(M2C_FIELD(arg0, u32 *, 0x174), temp_s0);
    }
    sceKernelCpuResumeIntr(temp_s1);
    return 0x30D40;
}
#endif

#if FW_VERSION == 282
s32 func_00003CE0(struct Unk_func_00003CE0_0 *arg0) {
    s32 temp_s1;
    struct Unk_func_00003CE0_temp_s0 *temp_s0;

    temp_s0 = arg0->unk1E0;
    temp_s1 = sceKernelCpuSuspendIntr();
    if ((temp_s0 != NULL) && !(temp_s0->unk18 & 1)) {
        temp_s0->unk8 = 0x80000012;
        temp_s0->unk18 = 3;
        sceKernelSendMbx(arg0->unk178, temp_s0);
    }
    sceKernelCpuResumeIntr(temp_s1);
    return 0x30D40;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018CC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00003D64);

INCLUDE_ASM("nonmatchings/wlan", func_00003E7C);

INCLUDE_ASM("nonmatchings/wlan", func_00004050);

INCLUDE_ASM("nonmatchings/wlan", func_000041F8);

INCLUDE_ASM("nonmatchings/wlan", func_00004270);

INCLUDE_ASM("nonmatchings/wlan", func_00004668);

INCLUDE_ASM("nonmatchings/wlan", func_00004974);

INCLUDE_ASM("nonmatchings/wlan", func_00004A04);

s32 func_00004B20(s32 *arg0) {
    func_00004A04(*arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/wlan", func_00004B40);

INCLUDE_ASM("nonmatchings/wlan", func_00004BD4);

INCLUDE_ASM("nonmatchings/wlan", func_00004C00);

INCLUDE_ASM("nonmatchings/wlan", func_00004D6C);

INCLUDE_ASM("nonmatchings/wlan", func_00006BBC);

INCLUDE_ASM("nonmatchings/wlan", func_00006CA4);

INCLUDE_ASM("nonmatchings/wlan", func_00006DF8);

INCLUDE_ASM("nonmatchings/wlan", func_00007210);

INCLUDE_ASM("nonmatchings/wlan", func_0000765C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/wlan", func_0000798C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/wlan", func_000079E4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00007D78);

INCLUDE_ASM("nonmatchings/wlan", func_00008090);

s32 func_0000829C(struct Unk_func_0000829C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    return 0;
}

void func_000082AC(void) {
}

INCLUDE_ASM("nonmatchings/wlan", func_000082B4);

INCLUDE_ASM("nonmatchings/wlan", func_00008308);

INCLUDE_ASM("nonmatchings/wlan", func_0000835C);

s32 func_000083B4(s32 *arg0) {
    return *arg0 != 0;
}
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018CE4);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_00018CF0);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018D00);

INCLUDE_RODATA("nonmatchings/wlan", D_00018D10);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_00018D20);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_00017650);
#endif

#if FW_VERSION < 282
void func_00006708(u32 arg0) {
    sceKernelCreateVpl("SceWlanDrvHeap", 1, 1U, arg0, NULL);
}

void func_00006738(u32 arg0) {
    sceKernelDeleteVpl(arg0);
}
#else
INCLUDE_RODATA("nonmatchings/wlan", D_00018D48);

void func_000083C0(u32 arg0) {
    sceKernelCreateVpl("SceWlanDrvHeap", 1, 1U, arg0, NULL);
}

void func_000083F0(u32 arg0) {
    sceKernelDeleteVpl(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000840C);

INCLUDE_ASM("nonmatchings/wlan", func_00008440);

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000067B8(void *arg0, void *arg1) {
    sceKernelFreeVpl(M2C_FIELD(arg0, u32 *, 0x17C), arg1);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_0001766C);

INCLUDE_RODATA("nonmatchings/wlan", D_000169C8);

INCLUDE_RODATA("nonmatchings/wlan", D_000169D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000067B8(void *arg0, void *arg1) {
    sceKernelFreeVpl(M2C_FIELD(arg0, u32 *, 0x274), arg1);
}
#endif

#if FW_VERSION == 100
void func_000067B8(void *arg0, void *arg1) {
    sceKernelFreeVpl(M2C_FIELD(arg0, u32 *, 0x270), arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_00013A84);

INCLUDE_ASM("nonmatchings/wlan", func_00006980);

INCLUDE_ASM("nonmatchings/wlan", func_00006B94);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000067D4);

INCLUDE_ASM("nonmatchings/wlan", func_000068B4);

INCLUDE_ASM("nonmatchings/wlan", func_00006A24);

INCLUDE_ASM("nonmatchings/wlan", func_00006B04);

INCLUDE_ASM("nonmatchings/wlan", func_00006D74);

INCLUDE_ASM("nonmatchings/wlan", func_00006DFC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00007FA8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00007060);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000071F8);

s32 func_000090E8(struct Unk_func_000090E8_0 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_s1;

    *arg2 = 0;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BD90((s32) &arg0->unkC, arg1, 1, (s32) arg2), -1);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s1;
}

s32 func_00009160(struct Unk_func_00009160_0 *arg0, s32 arg1, u8 *arg2) {
    s32 temp_s1;
    u8 temp_s2;

    temp_s2 = *arg2;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BE8C((s32) &arg0->unkC, arg1, (s32) temp_s2, 1), -1);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/wlan", func_000091D4);

INCLUDE_ASM("nonmatchings/wlan", func_00009468);

INCLUDE_ASM("nonmatchings/wlan", func_000097DC);

INCLUDE_ASM("nonmatchings/wlan", func_00007C78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00008AF8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000A084);

INCLUDE_ASM("nonmatchings/wlan", func_0000A3CC);

INCLUDE_ASM("nonmatchings/wlan", func_0000A5DC);

INCLUDE_ASM("nonmatchings/wlan", func_0000A910);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000868C);

INCLUDE_ASM("nonmatchings/wlan", func_000088CC);
#endif

#if FW_VERSION >= 300
void func_00008470(struct Unk_func_00008470_0 *arg0, struct Unk_func_00008470_1 *arg1) {
    sceKernelFreeVpl(M2C_FIELD(arg0, u32 *, 0x178), arg1);
}
#endif

#if FW_VERSION == 282
void func_00008470(struct Unk_func_00008470_0 *arg0, struct Unk_func_00008470_1 *arg1) {
    sceKernelFreeVpl(arg0->unk17C, arg1);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018D64);

INCLUDE_RODATA("nonmatchings/wlan", D_00018D90);

INCLUDE_RODATA("nonmatchings/wlan", D_00018D9C);

INCLUDE_RODATA("nonmatchings/wlan", D_00018DB0);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018DE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00007F30);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000806C(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x100);
    if (arg0 != NULL) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0x10));
        sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 0xC));
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0xF8));
        sceKernelDeleteMbx(M2C_FIELD(arg0, u32 *, 0xFC));
        func_000067B8(M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, void **, 0x104));
        func_000067B8(M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, void **, 0x108));
        DmacManForKernel_745E19EF(M2C_FIELD(arg0, s32 *, 0xE8));
        func_000067B8(M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, void **, 0xEC));
        func_000067B8(temp_s1, arg0);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000806C(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0xFC);
    if (arg0 != NULL) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0x10));
        sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 0xC));
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0xF4));
        sceKernelDeleteMbx(M2C_FIELD(arg0, u32 *, 0xF8));
        func_000067B8(M2C_FIELD(arg0, void **, 0xFC), M2C_FIELD(arg0, void **, 0x100));
        func_000067B8(M2C_FIELD(arg0, void **, 0xFC), M2C_FIELD(arg0, void **, 0x104));
        func_000067B8(temp_s1, arg0);
    }
}
#endif

#if FW_VERSION == 100
void func_0000806C(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0xC0);
    if (arg0 != NULL) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0x10));
        sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 0xC));
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0xB8));
        sceKernelDeleteMbx(M2C_FIELD(arg0, u32 *, 0xBC));
        func_000067B8(M2C_FIELD(arg0, void **, 0xC0), M2C_FIELD(arg0, void **, 0xC4));
        func_000067B8(M2C_FIELD(arg0, void **, 0xC0), M2C_FIELD(arg0, void **, 0xC8));
        func_000067B8(temp_s1, arg0);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000080E0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/wlan", func_000082D4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_000082D4(s32 arg0, s32 arg1) {
    return (func_000091D4(arg0 + 0xC, arg1) >= 0) ? 0 : -1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000848C);

INCLUDE_ASM("nonmatchings/wlan", func_000086B0);

INCLUDE_ASM("nonmatchings/wlan", func_00008834);

INCLUDE_ASM("nonmatchings/wlan", func_0000894C);

INCLUDE_ASM("nonmatchings/wlan", func_00008A5C);

INCLUDE_ASM("nonmatchings/wlan", func_00008CE4);

INCLUDE_ASM("nonmatchings/wlan", func_00008D74);

INCLUDE_ASM("nonmatchings/wlan", func_00008F08);

s32 func_000090E8(struct Unk_func_000090E8_0 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_s1;

    *arg2 = 0;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BD90((s32) (&arg0->unkC), arg1, 1, (s32) arg2), -1);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s1;
}

s32 func_00009160(struct Unk_func_00009160_0 *arg0, s32 arg1, u8 *arg2) {
    s32 temp_s1;
    u8 temp_s2;

    temp_s2 = *arg2;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BE8C((s32) (&arg0->unkC), arg1, (s32) temp_s2, 1), -1);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/wlan", func_000091D4);

INCLUDE_ASM("nonmatchings/wlan", func_00009468);

INCLUDE_ASM("nonmatchings/wlan", func_000097DC);

INCLUDE_ASM("nonmatchings/wlan", func_00009B20);

INCLUDE_ASM("nonmatchings/wlan", func_00009DF4);

INCLUDE_ASM("nonmatchings/wlan", func_0000A07C);

INCLUDE_ASM("nonmatchings/wlan", func_0000A3C4);

INCLUDE_ASM("nonmatchings/wlan", func_0000A5D4);

INCLUDE_ASM("nonmatchings/wlan", func_0000A908);

void func_0000AB18(struct Unk_func_00008470_1 *arg0) {
    void *temp_s1;

    temp_s1 = arg0->unk100;
    if (arg0 != NULL) {
        sceKernelDeleteEventFlag(arg0->unk10);
        sceKernelDeleteSema(arg0->unkC);
        sceKernelDeleteEventFlag(arg0->unkF8);
        sceKernelDeleteMbx(arg0->unkFC);
        func_00008470(arg0->unk100, arg0->unk104);
        func_00008470(arg0->unk100, arg0->unk108);
        DmacManForKernel_745E19EF(arg0->unkE8);
        func_00008470(arg0->unk100, arg0->unkEC);
        func_00008470(temp_s1, arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000ABA0);

#if FW_VERSION < 282
void func_00008394(void) {
    sceSysreg_driver_00C2628E(1);
    sceSysreg_driver_1969E840(1, 0);
    sceSysreg_driver_4716E71E(1);
    sceSysreg_driver_31154490(1);
    sceSysreg_driver_D74F1D48(1);
    sceSysreg_driver_EC4BF81F(1);
}

void func_000083DC(void) {
    sceSysreg_driver_00C2628E(1);
    sceSysreg_driver_18172C6A(1);
    sceSysreg_driver_8E2D835D(1);
    sceSysreg_driver_826430C0(1);
    sceSysreg_driver_1969E840(1, 0);
    sceSysreg_driver_EC4BF81F(1);
}

void func_00008424(void *arg0) {
    s32 *temp_a3;
    s32 *temp_t6;
    void *temp_t9;

    temp_t9 = arg0 + 0xC;
    temp_t6 = M2C_FIELD(temp_t9, s32 **, 0x18);
    temp_a3 = M2C_FIELD(temp_t9, s32 **, 0x1C);
    *temp_t6 |= 0x2020;
    *temp_a3 |= 0x10000;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 4);
    *temp_a3 |= 0x20;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 8);
    *temp_a3 |= 0x400;
}

INCLUDE_ASM("nonmatchings/wlan", func_00008480);

INCLUDE_ASM("nonmatchings/wlan", func_00008524);
#else
void func_0000AC3C(void) {
    sceSysreg_driver_00C2628E(1);
    sceSysreg_driver_1969E840(1, 0);
    sceSysreg_driver_1D382514(1, 4);
    sceSysreg_driver_4716E71E(1);
    sceSysreg_driver_31154490(1);
    sceSysreg_driver_D74F1D48(1);
    sceSysreg_driver_EC4BF81F(1);
}

void func_0000AC90(struct Unk_func_0000AC90_0 *arg0) {
    s32 *temp_a3;
    s32 *temp_t6;
    struct Unk_func_0000AC90_temp_t9 *temp_t9;

    temp_t9 = (u8 *)arg0 + 0xC;
    temp_t6 = temp_t9->unk18;
    temp_a3 = temp_t9->unk1C;
    *temp_t6 |= 0x2020;
    *temp_a3 |= 0x10000;
    arg0->unk8 = (s32) (arg0->unk8 | 4);
    *temp_a3 |= 0x20;
    arg0->unk8 = (s32) (arg0->unk8 | 8);
    *temp_a3 |= 0x400;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000ACEC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00009A6C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00008690);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000AD1C);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000ADB0);

INCLUDE_ASM("nonmatchings/wlan", func_0000AE60);

#if FW_VERSION < 282
void func_00008854(s32 arg0, s32 arg1) {
    func_00009500(arg0 + 0xC, arg1);
}

INCLUDE_ASM("nonmatchings/wlan", func_00008870);

s32 func_00008914(void *arg0, s32 arg1, u16 *arg2) {
    s32 temp_s2;

    *arg2 = 0;
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0xC), 1, NULL);
    temp_s2 = func_0000BD90((s32) (arg0 + 0xC), arg1, 2, (s32) arg2);
    *arg2 = __builtin_allegrex_wsbh(*arg2);
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0xC), 1);
    return temp_s2;
}
#else
s32 func_0000AF1C(struct Unk_func_0000AF1C_0 *arg0, s32 arg1, u16 *arg2) {
    s32 temp_s2;

    *arg2 = 0;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s2 = func_0000BD90((s32) (&arg0->unkC), arg1, 2, (s32) arg2);
    *arg2 = __builtin_allegrex_wsbh(*arg2);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s2;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000AF9C);

#if FW_VERSION < 282
s32 func_00008A10(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s2;

    *arg2 = 0;
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0xC), 1, NULL);
    temp_s2 = func_0000BD90((s32) (arg0 + 0xC), arg1, 4, (s32) arg2);
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0xC), 1);
    return temp_s2;
}

s32 func_00008A84(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s1;

    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0xC), 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BE8C((s32) (arg0 + 0xC), arg1, *arg2, 2), -1);
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0xC), 1);
    return temp_s1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00008AF8);

INCLUDE_ASM("nonmatchings/wlan", func_00008CC8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00008EEC);
#endif

#if FW_VERSION == 100
s32 func_00008FB4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/wlan", func_00008FBC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_000091C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00009678);

INCLUDE_ASM("nonmatchings/wlan", func_0000970C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00009284);

INCLUDE_ASM("nonmatchings/wlan", func_00009348);
#endif

#if FW_VERSION >= 282
s32 func_0000B018(struct Unk_func_0000B018_0 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s2;

    *arg2 = 0;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s2 = func_0000BD90((s32) (&arg0->unkC), arg1, 4, (s32) arg2);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s2;
}

INCLUDE_ASM("nonmatchings/wlan", func_0000B08C);

INCLUDE_ASM("nonmatchings/wlan", func_0000B120);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000B194);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00009500);
#else
void func_0000B24C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000161A4(arg0, arg1, arg2, arg3, arg4);
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000B268);

INCLUDE_ASM("nonmatchings/wlan", func_0000B30C);

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000A4C8(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_s3;

    temp_s3 = sceKernelCpuSuspendIntr();
    if (!(*M2C_FIELD(arg1, u16 **, 0x30) & 4)) {
        InterruptManagerForKernel_CDC86B64(arg0, 0, arg0, arg2);
    }
    sceKernelCpuResumeIntr(temp_s3);
    return -1;
}
#endif

#if FW_VERSION >= 282
s32 func_0000B3CC(s32 arg0, struct Unk_func_0000B3CC_1 *arg1, M2C_UNK arg2) {
    s32 temp_s3;

    temp_s3 = sceKernelCpuSuspendIntr();
    if (!(*arg1->unk30 & 4)) {
        InterruptManagerForKernel_CDC86B64(arg0, 0, arg0, arg2);
    }
    sceKernelCpuResumeIntr(temp_s3);
    return -1;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000B450);

#if FW_VERSION < 201
s32 func_00009810(void) {
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00009818);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000A710);

INCLUDE_ASM("nonmatchings/wlan", func_0000A810);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00009900);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000B524);

INCLUDE_ASM("nonmatchings/wlan", func_0000B670);

INCLUDE_ASM("nonmatchings/wlan", func_0000B8CC);

INCLUDE_ASM("nonmatchings/wlan", func_0000B9D8);

INCLUDE_ASM("nonmatchings/wlan", func_0000BAD0);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000BD90);

INCLUDE_ASM("nonmatchings/wlan", func_0000BE8C);

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000ACB8(void) {
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00009CB0);
#else
s32 func_0000BF70(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000BF78);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00009FA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000A620);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000A294);
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000C210);

INCLUDE_ASM("nonmatchings/wlan", func_0000C508);

INCLUDE_ASM("nonmatchings/wlan", func_0000C800);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000CBA4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000A6E0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000A898);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000B050);

INCLUDE_ASM("nonmatchings/wlan", func_0000B1CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_0000A98C);

INCLUDE_ASM("nonmatchings/wlan", func_0000AAB0);
#endif

#if FW_VERSION < 282
s32 func_0000ABB4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000B328);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000CCC8);

INCLUDE_ASM("nonmatchings/wlan", func_0000CE48);

INCLUDE_ASM("nonmatchings/wlan", func_0000CFEC);

s32 func_0000D18C(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000D194);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000AD1C);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000D2F4);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000B85C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/wlan", func_0000B174);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000D658);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000D924);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000CBC4);

INCLUDE_ASM("nonmatchings/wlan", func_0000CF20);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000DBA4);

INCLUDE_ASM("nonmatchings/wlan", func_0000DF00);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000E088);

INCLUDE_ASM("nonmatchings/wlan", func_0000E180);

INCLUDE_ASM("nonmatchings/wlan", func_0000E2CC);

INCLUDE_ASM("nonmatchings/wlan", func_0000E378);

INCLUDE_ASM("nonmatchings/wlan", func_0000E4EC);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_00016A0C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018E98);

INCLUDE_RODATA("nonmatchings/wlan", D_00018FD8);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_00018FEC);

INCLUDE_RODATA("nonmatchings/wlan", D_00018FFC);

INCLUDE_RODATA("nonmatchings/wlan", D_00019000);

INCLUDE_RODATA("nonmatchings/wlan", D_00019004);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00019008);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_0001900C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_000167A4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_00013750);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/wlan", D_0001359C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00019010);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_0001901C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000BC54);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000C6E4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000ED98);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/wlan", func_0000C054);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_0000C1B4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000E5F0);

INCLUDE_ASM("nonmatchings/wlan", func_0000E99C);

INCLUDE_ASM("nonmatchings/wlan", func_0000EAD4);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000ECD0);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000EDC8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000DBFC);

INCLUDE_ASM("nonmatchings/wlan", func_0000DD0C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000E6DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000E91C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000DD9C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000DF24);

INCLUDE_ASM("nonmatchings/wlan", func_0000DFCC);

INCLUDE_ASM("nonmatchings/wlan", func_0000E074);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000C488);
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000F008);

INCLUDE_ASM("nonmatchings/wlan", func_0000F190);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000F2A4);

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0000C5E4(void *arg0) {
    sceKernelSignalSema(*M2C_FIELD(M2C_FIELD(arg0, void **, 0xB8), u32 **, 0x40), 1);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0000C5E4(void *arg0) {
    sceKernelSignalSema(*M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), u32 **, 0x40), 1);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_0000F370(struct Unk_func_0000F370_0 *arg0) {
    sceKernelSignalSema(*arg0->unkB8->unk40, 1);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000F39C);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000F6B8);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000F4B8);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000F5A8);

INCLUDE_ASM("nonmatchings/wlan", func_0000F6C8);

INCLUDE_ASM("nonmatchings/wlan", func_0000F81C);

INCLUDE_ASM("nonmatchings/wlan", func_0000F984);

INCLUDE_ASM("nonmatchings/wlan", func_0000FA98);

INCLUDE_ASM("nonmatchings/wlan", func_0000FBC4);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000FEE4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000CFD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000FCDC);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000FF9C);

INCLUDE_ASM("nonmatchings/wlan", func_00010068);

INCLUDE_ASM("nonmatchings/wlan", func_000101BC);

INCLUDE_ASM("nonmatchings/wlan", func_00010310);

INCLUDE_ASM("nonmatchings/wlan", func_00010464);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000DA38);
#else
INCLUDE_ASM("nonmatchings/wlan", func_000105B0);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00010778);

INCLUDE_ASM("nonmatchings/wlan", func_00010850);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00010DE0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00010954);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00010A20);

INCLUDE_ASM("nonmatchings/wlan", func_00010B08);

INCLUDE_ASM("nonmatchings/wlan", func_00010BC4);

INCLUDE_ASM("nonmatchings/wlan", func_00010CD0);

INCLUDE_ASM("nonmatchings/wlan", func_00010DCC);

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000FAEC(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_000110D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 func_0000FAF4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000FAFC(void) {
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_0000FB04(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000FB0C);

INCLUDE_ASM("nonmatchings/wlan", func_0000FC90);

s32 func_0000FE1C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000E278);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/wlan", func_0000DF68);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00010EBC);

INCLUDE_ASM("nonmatchings/wlan", func_00010FCC);

INCLUDE_ASM("nonmatchings/wlan", func_0001115C);

INCLUDE_ASM("nonmatchings/wlan", func_00011304);

INCLUDE_ASM("nonmatchings/wlan", func_00011440);

INCLUDE_ASM("nonmatchings/wlan", func_00011574);

INCLUDE_ASM("nonmatchings/wlan", func_00011688);

INCLUDE_ASM("nonmatchings/wlan", func_00011798);

INCLUDE_ASM("nonmatchings/wlan", func_000118AC);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00011948);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000117CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_000119C8);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00011A4C);

INCLUDE_ASM("nonmatchings/wlan", func_00011AE4);

INCLUDE_ASM("nonmatchings/wlan", func_00011BB0);

INCLUDE_ASM("nonmatchings/wlan", func_00011C30);

INCLUDE_ASM("nonmatchings/wlan", func_00011CB0);

INCLUDE_ASM("nonmatchings/wlan", func_00011D44);

INCLUDE_ASM("nonmatchings/wlan", func_00011DF8);

INCLUDE_ASM("nonmatchings/wlan", func_00011E78);

INCLUDE_ASM("nonmatchings/wlan", func_00011EF8);

INCLUDE_ASM("nonmatchings/wlan", func_00011FE0);

INCLUDE_ASM("nonmatchings/wlan", func_00012070);

INCLUDE_ASM("nonmatchings/wlan", func_00012138);

INCLUDE_ASM("nonmatchings/wlan", func_00012200);

INCLUDE_ASM("nonmatchings/wlan", func_000122AC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000AD1C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00012344);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00012430);

INCLUDE_ASM("nonmatchings/wlan", func_000124EC);

INCLUDE_ASM("nonmatchings/wlan", func_00012584);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0001232C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00012614);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_000126AC);

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00010ADC(void) {
    return 0;
}

s32 func_00010AE4(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000DD0C);

INCLUDE_ASM("nonmatchings/wlan", func_0000E91C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00010AEC(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000DF24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00010AF4(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000DFCC);

INCLUDE_ASM("nonmatchings/wlan", func_0000E074);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00010AFC(void) {
    return 0;
}

s32 func_00010B04(void) {
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_00010B0C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00010B14);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_0000ED5C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000F2DC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0001276C);

INCLUDE_ASM("nonmatchings/wlan", func_00012814);

INCLUDE_ASM("nonmatchings/wlan", func_000128A4);

INCLUDE_ASM("nonmatchings/wlan", func_00012934);

INCLUDE_ASM("nonmatchings/wlan", func_000129EC);

INCLUDE_ASM("nonmatchings/wlan", func_00012ABC);

INCLUDE_ASM("nonmatchings/wlan", func_00012B4C);

INCLUDE_ASM("nonmatchings/wlan", func_00012BDC);

INCLUDE_ASM("nonmatchings/wlan", func_00012C6C);

INCLUDE_ASM("nonmatchings/wlan", func_00012CFC);

INCLUDE_ASM("nonmatchings/wlan", func_00012D8C);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00013620);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000F550);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/wlan", D_0001795C);

INCLUDE_RODATA("nonmatchings/wlan", D_00016810);

INCLUDE_RODATA("nonmatchings/wlan", D_0001907C);

INCLUDE_RODATA("nonmatchings/wlan", D_000137C0);

INCLUDE_RODATA("nonmatchings/wlan", D_00019090);

INCLUDE_RODATA("nonmatchings/wlan", D_000179A8);

INCLUDE_RODATA("nonmatchings/wlan", D_000180E4);

INCLUDE_ASM("nonmatchings/wlan", func_00012398);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00011730);

INCLUDE_ASM("nonmatchings/wlan", func_000117F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_0000FAA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000FC6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_0000F5E4);

INCLUDE_ASM("nonmatchings/wlan", func_0000F7A0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00010364);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000105A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00012B20);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/wlan", func_000108EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_000104E4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00010720);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00012E18);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_000136A0);

INCLUDE_ASM("nonmatchings/wlan", func_0001374C);

INCLUDE_ASM("nonmatchings/wlan", func_0001381C);

INCLUDE_ASM("nonmatchings/wlan", func_00013A00);

INCLUDE_ASM("nonmatchings/wlan", func_00014A98);

INCLUDE_ASM("nonmatchings/wlan", func_00014CA0);

INCLUDE_ASM("nonmatchings/wlan", func_00014ED4);

INCLUDE_ASM("nonmatchings/wlan", func_00014FC4);

INCLUDE_ASM("nonmatchings/wlan", func_000151C8);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_000152B4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00013004);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0001411C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00015218(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xB8);
    if (M2C_FIELD(temp_s0, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s0, s32 *, 0x30) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x6C) = -1;
        if ((u32) (sceKernelGetSystemTimeLow() - D_0002E3DC) >= (u32) (M2C_FIELD(arg0, s32 *, 0x128) * 0x3E8)) {

        } else if (sceKernelPollEventFlag(M2C_FIELD(temp_s0, s32 *, 0x34), 0x400U, 1, NULL) != 0) {
            func_0000BC54((s32) arg0, 2, 0);
        }
        sceKernelSetEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s0, s32 *, 0x74) = 1;
    }
}
#endif

#if FW_VERSION == 250
void func_000144F0(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xB8);
    if (M2C_FIELD(temp_s0, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s0, s32 *, 0x6C) = -1;
        M2C_FIELD(temp_s0, s32 *, 0x30) = 1;
        if (((u32) (sceKernelGetSystemTimeLow() - D_0002EE00) >= (u32) (M2C_FIELD(arg0, s32 *, 0x128) * 0x3E8)) || (M2C_FIELD(temp_s0, u8 *, 0x144) != 1)) {

        } else {
            func_0000BC54((s32) arg0, 2, 0);
        }
        sceKernelSetEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s0, s32 *, 0x74) = 1;
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_000131E8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00010A58);

INCLUDE_ASM("nonmatchings/wlan", func_00010C1C);
#endif

#if FW_VERSION == 201
void func_00010F6C(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0xB8);
    if (M2C_FIELD(temp_s1, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s1, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s1, s32 *, 0x6C) = -1;
        M2C_FIELD(temp_s1, s32 *, 0x30) = 1;
        if ((u32) (sceKernelGetSystemTimeLow() - D_0002D7A8) >= (u32) (M2C_FIELD(arg0, s32 *, 0x128) * 0x3E8)) {

        } else {
            func_0000BC54((s32) arg0, 2, 0);
        }
        sceKernelSetEventFlag(M2C_FIELD(temp_s1, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s1, s32 *, 0x74) = 1;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00010F6C(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xB8);
    if (M2C_FIELD(temp_s0, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s0, s32 *, 0x6C) = -1;
        M2C_FIELD(temp_s0, s32 *, 0x30) = 1;
        func_0000BC54((s32) arg0, 2, 0);
        sceKernelSetEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s0, s32 *, 0x74) = 1;
    }
}
#endif

#if FW_VERSION == 100
void func_00010F6C(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x7C);
    if (M2C_FIELD(temp_s0, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s0, s32 *, 0x6C) = -1;
        M2C_FIELD(temp_s0, s32 *, 0x30) = 1;
        func_0000BC54((s32) arg0, 2, 0);
        sceKernelSetEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s0, s32 *, 0x74) = 1;
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00010FE8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_0001795C);
#endif

#if FW_VERSION == 201 || (FW_VERSION >= 260 && FW_VERSION < 282)
INCLUDE_RODATA("nonmatchings/wlan", D_00016810);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_0001907C);

INCLUDE_RODATA("nonmatchings/wlan", D_000137C0);

INCLUDE_RODATA("nonmatchings/wlan", D_00019090);

INCLUDE_RODATA("nonmatchings/wlan", D_000188C4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/wlan", D_00019090_v271);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/wlan", D_00019000_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_000190C4);

INCLUDE_RODATA("nonmatchings/wlan", D_0002E23C);

INCLUDE_RODATA("nonmatchings/wlan", D_000190F8);

INCLUDE_ASM("nonmatchings/wlan", func_00012398);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/wlan", D_00013604);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_000153A8);

INCLUDE_ASM("nonmatchings/wlan", func_0001558C);

void func_00015958(struct Unk_func_00015958_0 *arg0) {
    struct Unk_func_00015958_temp_s0 *temp_s0;

    temp_s0 = arg0->unkB8;
    if (temp_s0->unk74 == 0) {
        sceKernelClearEventFlag(temp_s0->unk38, -0x201U);
        temp_s0->unk30 = 1;
        temp_s0->unk6C = -1;
        if ((u32) (sceKernelGetSystemTimeLow() - D_00019290) >= (u32) (arg0->unk128 * 0x3E8)) {

        } else if (sceKernelPollEventFlag(temp_s0->unk34, 0x400U, 1, NULL) != 0) {
            func_0000E5F0((s32) arg0, 2, 0);
        }
        sceKernelSetEventFlag(temp_s0->unk38, 0x400U);
        temp_s0->unk74 = 1;
    }
}

INCLUDE_ASM("nonmatchings/wlan", func_00015A1C);

INCLUDE_RODATA("nonmatchings/wlan", D_00019078);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/wlan", D_000192B0_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/wlan", D_000192B0_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/wlan", D_000192B0_v300);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_0001907C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/wlan", D_000137C0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00019080);

INCLUDE_RODATA("nonmatchings/wlan", D_00019088);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00019090);

INCLUDE_RODATA("nonmatchings/wlan", D_000190C4);

INCLUDE_RODATA("nonmatchings/wlan", D_000190EC);

INCLUDE_RODATA("nonmatchings/wlan", D_000190F8);

INCLUDE_ASM("nonmatchings/wlan", func_00015B48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_000116BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_0001129C);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00015C9C);

INCLUDE_ASM("nonmatchings/wlan", func_00015E14);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00011718);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00016010);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_000117D8);

INCLUDE_ASM("nonmatchings/wlan", func_000118BC);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00016060);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00013D64);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00011E64);

INCLUDE_ASM("nonmatchings/wlan", func_000122C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000143E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_00011A08);

INCLUDE_ASM("nonmatchings/wlan", func_00011E2C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00011F5C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000122B8);
#else
INCLUDE_ASM("nonmatchings/wlan", func_000160E0);

INCLUDE_ASM("nonmatchings/wlan", func_000161A4);

INCLUDE_ASM("nonmatchings/wlan", func_000161D0);

INCLUDE_ASM("nonmatchings/wlan", func_00016780);

INCLUDE_ASM("nonmatchings/wlan", func_000168E8);

INCLUDE_ASM("nonmatchings/wlan", func_00016D98);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00016F70);

INCLUDE_ASM("nonmatchings/wlan", func_00017048);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00014C0C);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_FBD385FB);

s32 sceWlanDrv_driver_44A99F9D(s32 *arg0, s32 *arg1) {
    s32 var_a2;

    var_a2 = 0x80410003;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_a2 = 0;
        *arg0 = D_0002D7AC;
        *arg1 = D_0002D7B0;
    }
    return var_a2;
}

s32 sceWlanDrv_driver_EB3235B5(u32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0x80410003;
    if (arg0 < 0x65U) {
        if (D_0002D7B4 == 0) {
            D_0002D7B4 = 1;
            func_000152F4(sceKernelGetSystemTimeLow());
        }
        temp_a0 = sceKernelCpuSuspendIntr();
        D_0002D7AC = (s32) arg0;
        D_0002D7B0 = arg1;
        D_0002D7B8 = 0;
        D_0002D7BC = 0;
        D_0002D7C0 = 0;
        D_0002D7C4 = 0;
        sceKernelCpuResumeIntr(temp_a0);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/wlan", func_000152F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00006278);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_00006338);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00006338(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    M2C_UNK (*temp_v0)(void *, s32, s32, u32, s32);
    s32 var_s0;
    void *temp_s2;

    var_s0 = 0;
    temp_s2 = M2C_FIELD(arg0, void **, 0x184);
    func_000022C0(arg0);
    if ((M2C_FIELD(arg0, s32 *, 0) & 0x3800) != 0x800) {
        var_s0 = 0x80410D14;
    } else if ((M2C_FIELD(temp_s2, s16 *, 0x10E) < arg1) || ((u32) M2C_FIELD(temp_s2, s16 *, 0x110) < arg3)) {
        var_s0 = 0x80410D13;
    } else if (sceWlanDrv_driver_FBD385FB() <= 0) {
        temp_v0 = M2C_FIELD(temp_s2, M2C_UNK (**)(void *, s32, s32, u32, s32), 0xD8);
        if (temp_v0 != NULL) {
            temp_v0(temp_s2, arg1, arg2, arg3, arg4);
        }
    }
    func_000022E4(arg0);
    return var_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000060FC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_000156F8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_000156F8(void *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_v0)(void *, s32, s32);
    s32 temp_v0_2;
    s32 var_s0;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg0, void **, 0x184);
    func_000022C0(arg0);
    var_s0 = 0x80410D14;
    if ((M2C_FIELD(arg0, s32 *, 0) & 0x3800) == 0x800) {
        temp_v0 = M2C_FIELD(temp_s2, s32 (**)(void *, s32, s32), 0xE4);
        var_s0 = 0x80410D13;
        if (temp_v0 != NULL) {
            temp_v0_2 = temp_v0(temp_s2, arg1, arg2);
            var_s0 = (temp_v0_2 < 0) ? 0x80410D13 : temp_v0_2;
        }
    }
    func_000022E4(arg0);
    return var_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00006194);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0001760C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00017E04);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_00006458);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00006458(void *arg0, void *arg1) {
    s32 temp_v1;
    s32 var_s2;
    u16 temp_a0;
    void *temp_s1;

    var_s2 = 0;
    temp_s1 = M2C_FIELD(arg0, void **, 0x184);
    func_000022C0(arg0);
    if ((M2C_FIELD(arg0, s32 *, 0) & 0x3800) != 0x800) {
        var_s2 = 0x80410D14;
    } else {
        temp_a0 = M2C_FIELD(temp_s1, u16 *, 0x18E);
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_s1, s32 *, 0x190);
        temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1A0);
        M2C_FIELD(arg1, u16 *, 4) = temp_a0;
        if (temp_v1 == 1) {
            M2C_FIELD(arg1, u16 *, 4) = (u16) (temp_a0 | (temp_v1 << M2C_FIELD(temp_s1, s16 *, 0x112)));
        }
    }
    func_000022E4(arg0);
    return var_s2;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000064F0);

s32 func_00006574(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x184);
    func_000022C0(arg0);
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(temp_s0, u16 *, 0x12C);
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(temp_s0, u16 *, 0x12E);
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(temp_s0, u16 *, 0x130);
    func_000022E4(arg0);
    return 0;
}
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/wlan", D_000190C4);

INCLUDE_RODATA("nonmatchings/wlan", D_0002ECD8);

INCLUDE_RODATA("nonmatchings/wlan", D_000190F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00012630);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0001712C);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_FBD385FB);

s32 sceWlanDrv_driver_44A99F9D(s32 *arg0, s32 *arg1) {
    s32 var_a2;

    var_a2 = 0x80410003;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_a2 = 0;
        *arg0 = D_0001929C;
        *arg1 = D_000192A0;
    }
    return var_a2;
}
#endif

#if FW_VERSION >= 300
s32 sceWlanDrv_driver_EB3235B5(u32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0x80410003;
    if (arg0 < 0x65U) {
        if (D_000194E4 == 0) {
            D_000194E4 = 1;
            func_00017880(sceKernelGetSystemTimeLow());
        }
        temp_a0 = sceKernelCpuSuspendIntr();
        D_0001929C = (s32) arg0;
        D_000192A0 = arg1;
        D_000192A8 = 0;
        D_000192AC = 0;
        D_000192B0 = 0;
        sceKernelCpuResumeIntr(temp_a0);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 sceWlanDrv_driver_EB3235B5(u32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0x80410003;
    if (arg0 < 0x65U) {
        if (D_000192A4 == 0) {
            D_000192A4 = 1;
            func_00017880(sceKernelGetSystemTimeLow());
        }
        temp_a0 = sceKernelCpuSuspendIntr();
        D_0001929C = (s32) arg0;
        D_000192A0 = arg1;
        D_000192A8 = 0;
        D_000192AC = 0;
        D_000192B0 = 0;
        D_000192B4 = 0;
        sceKernelCpuResumeIntr(temp_a0);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00017880);
#endif

#if FW_VERSION >= 300
s32 func_00017A3C(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    M2C_UNK (*temp_v0)(void *, s32, s32, u32, s32);
    s32 var_s0;
    void *temp_s2;

    var_s0 = 0;
    temp_s2 = M2C_FIELD(arg0, void **, 0x180);
    func_00003114(arg0);
    if ((arg0->unk0 & 0x3800) != 0x800) {
        var_s0 = 0x80410D14;
    } else if ((M2C_FIELD(temp_s2, s16 *, 0x10E) < arg1) || ((u32) M2C_FIELD(temp_s2, s16 *, 0x110) < arg3)) {
        var_s0 = 0x80410D13;
    } else if (sceWlanDrv_driver_FBD385FB() <= 0) {
        temp_v0 = M2C_FIELD(temp_s2, M2C_UNK (**)(void *, s32, s32, u32, s32), 0xD8);
        if (temp_v0 != NULL) {
            temp_v0(temp_s2, arg1, arg2, arg3, arg4);
        }
    }
    func_00003138(arg0);
    return var_s0;
}
#endif

#if FW_VERSION == 282
s32 func_00017A3C(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    M2C_UNK (*temp_v0)(void *, s32, s32, u32, s32);
    s32 var_s0;
    struct Unk_func_00017A3C_temp_s2 *temp_s2;

    var_s0 = 0;
    temp_s2 = arg0->unk184;
    func_00003114(arg0);
    if ((arg0->unk0 & 0x3800) != 0x800) {
        var_s0 = 0x80410D14;
    } else if ((temp_s2->unk10E < arg1) || ((u32) temp_s2->unk110 < arg3)) {
        var_s0 = 0x80410D13;
    } else if (sceWlanDrv_driver_FBD385FB() <= 0) {
        temp_v0 = temp_s2->unkD8;
        if (temp_v0 != NULL) {
            temp_v0(temp_s2, arg1, arg2, arg3, arg4);
        }
    }
    func_00003138(arg0);
    return var_s0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00017B2C);
#endif

#if FW_VERSION >= 300
s32 func_00017BCC(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_v0)(void *, s32, s32);
    s32 temp_v0_2;
    s32 var_s0;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg0, void **, 0x180);
    func_00003114(arg0);
    var_s0 = 0x80410D14;
    if ((arg0->unk0 & 0x3800) == 0x800) {
        temp_v0 = M2C_FIELD(temp_s2, s32 (**)(void *, s32, s32), 0xE4);
        var_s0 = 0x80410D13;
        if (temp_v0 != NULL) {
            temp_v0_2 = temp_v0(temp_s2, arg1, arg2);
            var_s0 = (temp_v0_2 < 0) ? 0x80410D13 : temp_v0_2;
        }
    }
    func_00003138(arg0);
    return var_s0;
}
#endif

#if FW_VERSION == 282
s32 func_00017BCC(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_v0)(void *, s32, s32);
    s32 temp_v0_2;
    s32 var_s0;
    struct Unk_func_00017BCC_temp_s2 *temp_s2;

    temp_s2 = arg0->unk184;
    func_00003114(arg0);
    var_s0 = 0x80410D14;
    if ((arg0->unk0 & 0x3800) == 0x800) {
        temp_v0 = temp_s2->unkE4;
        var_s0 = 0x80410D13;
        if (temp_v0 != NULL) {
            temp_v0_2 = temp_v0(temp_s2, arg1, arg2);
            var_s0 = (temp_v0_2 < 0) ? 0x80410D13 : temp_v0_2;
        }
    }
    func_00003138(arg0);
    return var_s0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00017C7C);

INCLUDE_ASM("nonmatchings/wlan", func_00017D40);

INCLUDE_ASM("nonmatchings/wlan", func_00017E04);
#endif

#if FW_VERSION >= 300
s32 func_00017EA4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017EA4_1 *arg1) {
    s32 temp_v1;
    s32 var_s2;
    u16 temp_a0;
    void *temp_s1;

    var_s2 = 0;
    temp_s1 = M2C_FIELD(arg0, void **, 0x180);
    func_00003114(arg0);
    if ((arg0->unk0 & 0x3800) != 0x800) {
        var_s2 = 0x80410D14;
    } else {
        temp_a0 = M2C_FIELD(temp_s1, u16 *, 0x18E);
        arg1->unk0 = M2C_FIELD(temp_s1, s32 *, 0x190);
        temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1A0);
        arg1->unk4 = temp_a0;
        if (temp_v1 == 1) {
            arg1->unk4 = temp_a0 | (temp_v1 << M2C_FIELD(temp_s1, s16 *, 0x112));
        }
    }
    func_00003138(arg0);
    return var_s2;
}
#endif

#if FW_VERSION == 282
s32 func_00017EA4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017EA4_1 *arg1) {
    s32 temp_v1;
    s32 var_s2;
    u16 temp_a0;
    struct Unk_func_00017EA4_temp_s1 *temp_s1;

    var_s2 = 0;
    temp_s1 = arg0->unk184;
    func_00003114(arg0);
    if ((arg0->unk0 & 0x3800) != 0x800) {
        var_s2 = 0x80410D14;
    } else {
        temp_a0 = temp_s1->unk18E;
        arg1->unk0 = (s32) temp_s1->unk190;
        temp_v1 = temp_s1->unk1A0;
        arg1->unk4 = temp_a0;
        if (temp_v1 == 1) {
            arg1->unk4 = (u16) (temp_a0 | (temp_v1 << temp_s1->unk112));
        }
    }
    func_00003138(arg0);
    return var_s2;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00017F40);
#endif

#if FW_VERSION >= 300
s32 func_00017FC4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017FC4_1 *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x180);
    func_00003114(arg0);
    arg1->unk0 = M2C_FIELD(temp_s0, u16 *, 0x12C);
    arg1->unk2 = M2C_FIELD(temp_s0, u16 *, 0x12E);
    arg1->unk4 = M2C_FIELD(temp_s0, u16 *, 0x130);
    func_00003138(arg0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00017FC4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017FC4_1 *arg1) {
    struct Unk_func_00017FC4_temp_s0 *temp_s0;

    temp_s0 = arg0->unk184;
    func_00003114(arg0);
    arg1->unk0 = (u16) temp_s0->unk12C;
    arg1->unk2 = (u16) temp_s0->unk12E;
    arg1->unk4 = (u16) temp_s0->unk130;
    func_00003138(arg0);
    return 0;
}
#endif
