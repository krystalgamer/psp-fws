/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "wlan_decls.h"

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00000000);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018A00);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018A3C);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018A48);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018A9C);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018AB0);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018AD8);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018AEC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_6D89822C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000003E8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00000620);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018B14);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018B20);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_482CAE9A);

void sceWlanDrv_driver_C9A8CAB7(void) {
    u32 temp_s2;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = D_000191B0;
    temp_s2 = shiftK1();
    temp_s1 = temp_s0 + 0x188;
    if (temp_s0 != NULL) {
        sceNetIfhandle_driver_54D1AEA1(temp_s1);
        sceNetIfhandle_driver_C9344A59(temp_s1);
        M2C_FIELD(temp_s0, s32 *, 0x188) = 0;
    }
    setK1(temp_s2);
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_19E51F54);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanGetEtherAddr);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00000A08);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00000AE4);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018B3C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00000BC0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000011AC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000122C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00001468);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000026F8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00002818);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000028D0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_FE8A0B46);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_749B813A);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_7FF54BD2);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_05FE320C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00002E78);

void func_00003114(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x174), 1, NULL);
}

void func_00003138(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x174), 1);
}

void func_00003158(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x1DC) == 0) {
        D_0001925C.unk0 = 0;
        D_0001925C.unk4 = 0;
        D_0001925C.unk8 = 0;
        D_0001925C.unkC = 0;
        D_0001925C.unk10 = 0;
        D_0001925C.unk14 = 0;
        D_0001925C.unk18 = 0;
        temp_v0 = sceKernelSetAlarm(0x30D40U, (s32) func_00003CE0, arg0);
        if (temp_v0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1DC) = temp_v0;
            M2C_FIELD(arg0, M2C_UNK **, 0x1E0) = &D_0001925C;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
}

void func_000031DC(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1DC);
    if (temp_v1 != 0) {
        sceKernelCancelAlarm(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
        M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000321C);

void func_00003268(void *arg0, s32 arg1) {
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

s32 func_00003304(void *arg0) {
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

void func_00003374(void *arg0) {
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

void func_000033E4(void *arg0) {
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

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_EC9232F0);

s32 module_reboot_before(void) {
    sceWlanDrv_driver_EC9232F0();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_93440B11);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_5E7C8D94);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_5ED4049A);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_6D5C839E);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_B4D7CB74);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_A447103A);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_9658C9F7);

s32 sceWlanDrv_driver_4C7F62E0(void) {
    s32 temp_v1;
    u32 temp_s0;
    void *temp_s1;

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

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_81579D36);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_5BAA1FE5);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_4C14BACA);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_2D0FAE4E);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_56F467CA);

s32 sceWlanGetSwitchState(void) {
    return M2C_FIELD(D_000191B0, s32 *, 0x1D0) == 1;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00003A20);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00003A88);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00003AC0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00003AE4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00003B60);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00003B78);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_40B0AA4A);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_8D5F551B);

void sceWlanDrv_driver_E50312AB(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000B24C(M2C_FIELD(D_000191B0, s32 *, 0x184), arg0, arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00003C68);

s32 func_00003CE0(void *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x1E0);
    temp_s1 = sceKernelCpuSuspendIntr();
    if ((temp_s0 != NULL) && !(M2C_FIELD(temp_s0, s32 *, 0x18) & 1)) {
        M2C_FIELD(temp_s0, s32 *, 8) = 0x80000012;
        M2C_FIELD(temp_s0, s32 *, 0x18) = 3;
        sceKernelSendMbx(M2C_FIELD(arg0, u32 *, 0x178), temp_s0);
    }
    sceKernelCpuResumeIntr(temp_s1);
    return 0x30D40;
}

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018CC8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00003D64);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00003E7C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00004050);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000041F8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00004270);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00004668);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00004974);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00004A04);

s32 func_00004B20(s32 *arg0) {
    func_00004A04(*arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00004B40);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00004BD4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00004C00);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00004D6C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00006BBC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00006CA4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00006DF8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00007210);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000765C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000079E4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00007D78);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00008090);

s32 func_0000829C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return 0;
}

void func_000082AC(void) {
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000082B4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00008308);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000835C);

s32 func_000083B4(s32 *arg0) {
    return *arg0 != 0;
}

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018CE4);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018CF0);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018D00);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018D10);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018D20);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018D48);

void func_000083C0(u32 arg0) {
    sceKernelCreateVpl("SceWlanDrvHeap", 1, 1U, arg0, NULL);
}

void func_000083F0(u32 arg0) {
    sceKernelDeleteVpl(arg0);
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000840C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00008440);

void func_00008470(void *arg0, void *arg1) {
    sceKernelFreeVpl(M2C_FIELD(arg0, u32 *, 0x17C), arg1);
}

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018D64);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018D90);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018D9C);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018DB0);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018DE4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000848C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000086B0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00008834);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000894C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00008A5C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00008CE4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00008D74);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00008F08);

s32 func_000090E8(void *arg0, s32 arg1, s8 *arg2) {
    s32 temp_s1;

    *arg2 = 0;
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0xC), 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BD90((s32) (arg0 + 0xC), arg1, 1, (s32) arg2), -1);
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0xC), 1);
    return temp_s1;
}

s32 func_00009160(void *arg0, s32 arg1, u8 *arg2) {
    s32 temp_s1;
    u8 temp_s2;

    temp_s2 = *arg2;
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0xC), 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BE8C((s32) (arg0 + 0xC), arg1, (s32) temp_s2, 1), -1);
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0xC), 1);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000091D4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00009468);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000097DC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00009B20);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00009DF4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000A07C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000A3C4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000A5D4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000A908);

void func_0000AB18(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x100);
    if (arg0 != NULL) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0x10));
        sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 0xC));
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0xF8));
        sceKernelDeleteMbx(M2C_FIELD(arg0, u32 *, 0xFC));
        func_00008470(M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, void **, 0x104));
        func_00008470(M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, void **, 0x108));
        DmacManForKernel_745E19EF(M2C_FIELD(arg0, s32 *, 0xE8));
        func_00008470(M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, void **, 0xEC));
        func_00008470(temp_s1, arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000ABA0);

void func_0000AC3C(void) {
    sceSysreg_driver_00C2628E(1);
    sceSysreg_driver_1969E840(1, 0);
    sceSysreg_driver_1D382514(1, 4);
    sceSysreg_driver_4716E71E(1);
    sceSysreg_driver_31154490(1);
    sceSysreg_driver_D74F1D48(1);
    sceSysreg_driver_EC4BF81F(1);
}

void func_0000AC90(void *arg0) {
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

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000ACEC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000AD1C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000ADB0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000AE60);

s32 func_0000AF1C(void *arg0, s32 arg1, u16 *arg2) {
    s32 temp_s2;

    *arg2 = 0;
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0xC), 1, NULL);
    temp_s2 = func_0000BD90((s32) (arg0 + 0xC), arg1, 2, (s32) arg2);
    *arg2 = __builtin_allegrex_wsbh(*arg2);
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0xC), 1);
    return temp_s2;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000AF9C);

s32 func_0000B018(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s2;

    *arg2 = 0;
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0xC), 1, NULL);
    temp_s2 = func_0000BD90((s32) (arg0 + 0xC), arg1, 4, (s32) arg2);
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0xC), 1);
    return temp_s2;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000B08C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000B120);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000B194);

void func_0000B24C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000161A4(arg0, arg1, arg2, arg3, arg4);
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000B268);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000B30C);

s32 func_0000B3CC(s32 arg0, void *arg1, M2C_UNK arg2) {
    s32 temp_s3;

    temp_s3 = sceKernelCpuSuspendIntr();
    if (!(*M2C_FIELD(arg1, u16 **, 0x30) & 4)) {
        InterruptManagerForKernel_CDC86B64(arg0, 0, arg0, arg2);
    }
    sceKernelCpuResumeIntr(temp_s3);
    return -1;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000B450);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000B524);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000B670);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000B8CC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000B9D8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000BAD0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000BD90);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000BE8C);

s32 func_0000BF70(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000BF78);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000C210);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000C508);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000C800);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000CBA4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000CCC8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000CE48);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000CFEC);

s32 func_0000D18C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000D194);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000D2F4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000D658);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000D924);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000DBA4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000DF00);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000E088);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000E180);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000E2CC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000E378);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000E4EC);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018E98);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018FD8);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018FEC);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00018FFC);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00019000);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00019004);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00019008);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_0001900C);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00019010);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_0001901C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000E5F0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000E99C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000EAD4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000ECD0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000EDC8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000F008);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000F190);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000F2A4);

s32 func_0000F370(void *arg0) {
    sceKernelSignalSema(*M2C_FIELD(M2C_FIELD(arg0, void **, 0xB8), u32 **, 0x40), 1);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000F39C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000F4B8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000F5A8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000F6C8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000F81C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000F984);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000FA98);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000FBC4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000FCDC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0000FF9C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010068);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000101BC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010310);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010464);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000105B0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010778);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010850);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010954);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010A20);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010B08);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010BC4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010CD0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010DCC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010EBC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00010FCC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0001115C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011304);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011440);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011574);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011688);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011798);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000118AC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011948);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000119C8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011A4C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011AE4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011BB0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011C30);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011CB0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011D44);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011DF8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011E78);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011EF8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00011FE0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012070);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012138);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012200);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000122AC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012344);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012430);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000124EC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012584);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012614);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000126AC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0001276C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012814);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000128A4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012934);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000129EC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012ABC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012B4C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012BDC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012C6C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012CFC);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00012D8C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00013620);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000136A0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0001374C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0001381C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00013A00);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00014A98);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00014CA0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00014ED4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00014FC4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000151C8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000152B4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000153A8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0001558C);

void func_00015958(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xB8);
    if (M2C_FIELD(temp_s0, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s0, s32 *, 0x30) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x6C) = -1;
        if ((u32) (sceKernelGetSystemTimeLow() - D_00019290) >= (u32) (M2C_FIELD(arg0, s32 *, 0x128) * 0x3E8)) {

        } else if (sceKernelPollEventFlag(M2C_FIELD(temp_s0, s32 *, 0x34), 0x400U, 1, NULL) != 0) {
            func_0000E5F0((s32) arg0, 2, 0);
        }
        sceKernelSetEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s0, s32 *, 0x74) = 1;
    }
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00015A1C);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00019078);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_0001907C);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00019080);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00019088);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_00019090);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_000190C4);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_000190EC);

INCLUDE_RODATA("tmp/asm/282/wlan/nonmatchings/wlan", D_000190F8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00015B48);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00015C9C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00015E14);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00016010);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00016060);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000160E0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000161A4);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000161D0);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00016780);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_000168E8);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00016D98);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00016F70);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00017048);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_0001712C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", sceWlanDrv_driver_FBD385FB);

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

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00017880);

s32 func_00017A3C(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    M2C_UNK (*temp_v0)(void *, s32, s32, u32, s32);
    s32 var_s0;
    void *temp_s2;

    var_s0 = 0;
    temp_s2 = M2C_FIELD(arg0, void **, 0x184);
    func_00003114(arg0);
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
    func_00003138(arg0);
    return var_s0;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00017B2C);

s32 func_00017BCC(void *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_v0)(void *, s32, s32);
    s32 temp_v0_2;
    s32 var_s0;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg0, void **, 0x184);
    func_00003114(arg0);
    var_s0 = 0x80410D14;
    if ((M2C_FIELD(arg0, s32 *, 0) & 0x3800) == 0x800) {
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

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00017C7C);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00017D40);

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00017E04);

s32 func_00017EA4(void *arg0, void *arg1) {
    s32 temp_v1;
    s32 var_s2;
    u16 temp_a0;
    void *temp_s1;

    var_s2 = 0;
    temp_s1 = M2C_FIELD(arg0, void **, 0x184);
    func_00003114(arg0);
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
    func_00003138(arg0);
    return var_s2;
}

INCLUDE_ASM("tmp/asm/282/wlan/nonmatchings/wlan", func_00017F40);

s32 func_00017FC4(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x184);
    func_00003114(arg0);
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(temp_s0, u16 *, 0x12C);
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(temp_s0, u16 *, 0x12E);
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(temp_s0, u16 *, 0x130);
    func_00003138(arg0);
    return 0;
}
