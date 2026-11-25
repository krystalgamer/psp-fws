/* cflags: -O2 -frename-registers */
#include "common.h"
#include "umdman_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_DABDB450);
#endif

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_D27D050E);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_000002AC);

INCLUDE_RODATA("nonmatchings/umdman", D_0000F554);

INCLUDE_RODATA("nonmatchings/umdman", D_0000F560);

INCLUDE_RODATA("nonmatchings/umdman", D_0000F570);

INCLUDE_ASM("nonmatchings/umdman", func_000003B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_000001C8);

INCLUDE_ASM("nonmatchings/umdman", func_00000270);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_7ED141FE);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_14AAB3FC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_000002E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_000109C4);

INCLUDE_RODATA("nonmatchings/umdman", D_000109D0);

INCLUDE_RODATA("nonmatchings/umdman", D_000109E0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_000003B8);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_CC80CFC6);
#endif

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_8CFED611);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_CAD31025);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_F6BE91FC);
#endif

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_47E2B6D8);

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000008D0(s32 arg0, s32 arg1) {
    func_00007954(arg0, arg1);
}
#endif

#if FW_VERSION == 100
void sceUmdMan_driver_AF6D5838(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0000A084(arg0, arg1, arg2, arg3, arg4);
}
#endif

#if FW_VERSION >= 201
void func_00000968(s32 arg0, s32 arg1) {
    func_00007A30(arg0, arg1);
}
#endif

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_B2368381);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_E779ECEF);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_8634FFC7);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_CEA5C857);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_39704B6E);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_84410A8E);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_63ACFD28);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_8609D1E4);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_AAA4ED91);
#endif

INCLUDE_ASM("nonmatchings/umdman", module_start);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_000012D4);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_000016C8);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00001748);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_00001564);

INCLUDE_ASM("nonmatchings/umdman", func_000016C0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00001834);
#endif

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_FCFEF5FE);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00001A9C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_EFD566A8);

INCLUDE_ASM("nonmatchings/umdman", func_00001BE4);

INCLUDE_ASM("nonmatchings/umdman", func_00001BF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00001B54(void) {
    return D_000187C0;
}

s32 sceUmdMan_driver_2C756C37(void) {
    return D_000187C8;
}

void func_00001B6C(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if ((u32) (arg0 + 0x7FDEEF60) < 2U) {
        D_000187C8 = 0x80210003;
    } else {
        D_000187C8 = arg0;
    }
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_5A302102);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_B4692D7F);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_40BEB9D1);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00001B8C);

void func_00001C40(s32 arg0) {
    D_00012BDC = arg0;
}

INCLUDE_ASM("nonmatchings/umdman", func_00001C4C);

s32 func_00001D7C(void) {
    return D_00011B40;
}

s32 sceUmdMan_driver_2C756C37(void) {
    return D_00011B48;
}

void func_00001D94(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if ((u32) (arg0 + 0x7FDEEF60) < 2U) {
        D_00011B48 = 0x80210003;
    } else {
        D_00011B48 = arg0;
    }
    sceKernelCpuResumeIntr(temp_a0);
}

s32 func_00001DF4(void) {
    return D_00011B44;
}

void func_00001E00(s32 arg0) {
    if (arg0 < 0) {
        D_00011B44 = 0;
    }
    D_00011B44 = arg0;
}

s32 func_00001E18(void) {
    return D_00012BE0;
}

void func_00001E24(s32 arg0) {
    D_00012BE0 = arg0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_0D3EA203);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", module_reboot_before);

s32 func_00001968(void) {
    return D_0000E940;
}

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_F6BE91FC);

void func_000019DC(s32 arg0) {
    if (arg0 < 0) {
        D_0000E940 = 0;
    }
    D_0000E940 = arg0;
}

s32 sceUmdMan_driver_C1D7C860(void) {
    s32 temp_s0;

    temp_s0 = func_00007B48();
    return func_00007B34() - temp_s0;
}

s32 sceUmdMan_driver_DF407479(void) {
    return 0;
}

void sceUmdMan_driver_E2B0FB78(void) {
    func_0000A30C();
}

INCLUDE_ASM("nonmatchings/umdman", func_00001A44);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_ECA9476E);

void sceUmdMan_driver_7E2A680C(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0000EB00 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

void func_00001CF8(s32 arg0) {
    D_0000EB80 = arg0;
}

INCLUDE_ASM("nonmatchings/umdman", func_00001D04);

INCLUDE_ASM("nonmatchings/umdman", func_00001E70);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_B2DDE9F8);

s32 func_0000222C(void) {
    s32 temp_s1;
    s32 var_s0;
    u32 temp_s0;

    var_s0 = 1;
    if (!(KDebugForKernel_D636B827() & 0x10000)) {
        temp_s1 = sceKernelCpuSuspendIntr();
        temp_s0 = sceGpio_driver_4250D44A();
        sceKernelCpuResumeIntr(temp_s1);
        var_s0 = (temp_s0 >> 0x1A) & 1;
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/umdman", func_00002294);

INCLUDE_ASM("nonmatchings/umdman", func_000023D0);

s32 func_00002550(void) {
    return D_0000EB90;
}

void func_0000255C(s32 arg0) {
    D_0000EBA0 = arg0;
}

void func_00002568(s32 arg0) {
    D_0000EBA0 = arg0;
}

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_E192C10A);

s32 sceUmdMan_driver_B5CFC459(void) {
    void *sp0;
    sceUmdMan_driver_7E2A680C(0x8000);
    sceKernelWaitEventFlag(D_0000EB60, 2U, 1, &sp0, NULL);
    return 0;
}

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_C4A99D78);

void sceUmdMan_driver_BEA40117(void) {
    sceKernelDeleteSema(D_0000EB50);
    sceKernelDeleteSema(D_0000EB30);
    sceKernelDeleteEventFlag(D_0000EB60);
    sceKernelDeleteThread(D_0000EB20);
}

s32 func_00002670(void) {
    return sceKernelGetThreadId() == D_0000EB20;
}

s32 sceUmdMan_driver_1CB85F05(void) {
    return D_0000EB10;
}

s32 sceUmdMan_driver_C634697D(void) {
    return D_0000EB00;
}

void sceUmdMan_driver_43255AD6(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if ((u32) (arg0 + 0x7FDEEF60) < 2U) {
        D_0000EB10 = 0x80210003;
    } else {
        D_0000EB10 = arg0;
    }
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION < 201
s32 func_00002714(void) {
    return D_0000EB20;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00001BD8(s32 arg0) {
    if (arg0 < 0) {
        D_0000EB20 = 0;
    }
    D_0000EB20 = arg0;
}
#endif

#if FW_VERSION < 201
s32 func_00002720(void) {
    return D_0000EB80;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_0000272C);
#endif

#if FW_VERSION == 100
s32 func_0000272C(void) {
    return D_0000EB30;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_0D3EA203);

s32 func_00001C64(void) {
    s32 temp_s0;

    temp_s0 = func_00007B48();
    return func_00007B34() - temp_s0;
}
#endif

#if FW_VERSION == 100
s32 func_00002738(void) {
    return D_0000EB60;
}

s32 func_00002744(void) {
    return D_0000EB70;
}

void func_00002750(void) {
    sceKernelPollSema(D_0000EB50, 1);
}

void func_00002774(void) {
    sceKernelWaitSema(D_0000EB50, 1, NULL);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000279C(void) {
    func_0000A30C();
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_0D14D540);
#endif

#if FW_VERSION == 100
void func_0000279C(void) {
    sceKernelSignalSema(D_0000EB50, 1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00001CAC);
#endif

#if FW_VERSION == 100
s32 sceUmdMan_driver_B989E127(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    sceGpio_driver_4250D44A();
    sceKernelCpuResumeIntr(temp_s0);
    return 0;
}

s32 func_000027F4(void) {
    s32 temp_s0;

    sceKernelWaitSema(D_0000EB50, 1, NULL);
    temp_s0 = func_00002BC4();
    sceKernelSignalSema(D_0000EB50, 1);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/umdman", func_00002848);

INCLUDE_ASM("nonmatchings/umdman", func_00002884);

INCLUDE_ASM("nonmatchings/umdman", func_00002BC4);

INCLUDE_ASM("nonmatchings/umdman", func_00002D1C);

INCLUDE_ASM("nonmatchings/umdman", func_00002DF4);

INCLUDE_ASM("nonmatchings/umdman", func_00003188);

INCLUDE_ASM("nonmatchings/umdman", func_00003800);

INCLUDE_ASM("nonmatchings/umdman", func_00003994);

INCLUDE_ASM("nonmatchings/umdman", func_00003E58);

INCLUDE_ASM("nonmatchings/umdman", func_00004084);

INCLUDE_ASM("nonmatchings/umdman", func_000041E0);

INCLUDE_ASM("nonmatchings/umdman", func_0000452C);

INCLUDE_ASM("nonmatchings/umdman", func_00004720);

INCLUDE_ASM("nonmatchings/umdman", func_00004890);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_96527E8A);
#endif

#if FW_VERSION >= 201
s32 func_00001E94(void) {
    s32 temp_s0;

    temp_s0 = func_00007B48();
    return func_00007B34() - temp_s0;
}

void func_00001EC0(void) {
    func_00007C78();
}

s32 sceUmdMan_driver_0D14D540(void) {
    return D_00012BDC;
}
#endif

#if FW_VERSION >= 271
void sceUmdMan_driver_528503B3(void) {
    sceAta_driver_BE07B3A7();
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00001EE8);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00001FD0);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/umdman", func_00002050);

INCLUDE_ASM("nonmatchings/umdman", func_00002100);

INCLUDE_ASM("nonmatchings/umdman", func_00002178);

INCLUDE_ASM("nonmatchings/umdman", func_00002348);

INCLUDE_ASM("nonmatchings/umdman", func_0000239C);

INCLUDE_ASM("nonmatchings/umdman", func_000023D0);

INCLUDE_ASM("nonmatchings/umdman", func_00002404);

INCLUDE_ASM("nonmatchings/umdman", func_00002430);

INCLUDE_ASM("nonmatchings/umdman", func_00002480);

INCLUDE_ASM("nonmatchings/umdman", func_000024E8);

INCLUDE_ASM("nonmatchings/umdman", func_00002548);

INCLUDE_ASM("nonmatchings/umdman", func_0000259C);

INCLUDE_ASM("nonmatchings/umdman", func_000025F8);

INCLUDE_ASM("nonmatchings/umdman", func_0000275C);

INCLUDE_ASM("nonmatchings/umdman", func_00002790);

INCLUDE_ASM("nonmatchings/umdman", func_000027F8);

INCLUDE_ASM("nonmatchings/umdman", func_00002884);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_00004B24);

INCLUDE_ASM("nonmatchings/umdman", func_00004BB4);

INCLUDE_ASM("nonmatchings/umdman", func_00004C0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_00010C90);

INCLUDE_RODATA("nonmatchings/umdman", D_00010D68);

INCLUDE_RODATA("nonmatchings/umdman", D_00010E10);

INCLUDE_RODATA("nonmatchings/umdman", D_00010E28);

INCLUDE_ASM("nonmatchings/umdman", func_00002050);

INCLUDE_ASM("nonmatchings/umdman", func_00002100);

INCLUDE_ASM("nonmatchings/umdman", func_00002178);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/umdman", func_00002358);

INCLUDE_ASM("nonmatchings/umdman", func_0000242C);

INCLUDE_ASM("nonmatchings/umdman", func_000024E4);

INCLUDE_ASM("nonmatchings/umdman", func_000025A0);

INCLUDE_ASM("nonmatchings/umdman", func_00002654);

INCLUDE_ASM("nonmatchings/umdman", func_00002724);

INCLUDE_ASM("nonmatchings/umdman", func_00002800);

INCLUDE_ASM("nonmatchings/umdman", func_000028D8);

INCLUDE_ASM("nonmatchings/umdman", func_000029AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_000054FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_00002A84);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_00002D30);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/umdman", func_00002F0C);

INCLUDE_ASM("nonmatchings/umdman", func_00002FEC);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 271)
INCLUDE_ASM("nonmatchings/umdman", func_00002D00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_000057A0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00002D54);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_2CBE959B);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_E3F448E0);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_1B19A313);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_1B1BF9FD);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_F819E17C);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_14D3381C);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_68577709);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_5AA96415);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_2A39569B);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_CEE55E3E);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_65E1B97E);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_E5B7EDC5);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_2A08FE9A);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_18DE1880);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_3D44BABF);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_98345381);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_108B2322);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_D31DAD7E);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_7094E3A7);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_61C32A52);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_73E49F8F);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_250E6975);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_61EB07A5);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_00007C30_v100);

INCLUDE_ASM("nonmatchings/umdman", func_00007CA8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 300
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_BF88476F);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/umdman", func_00004CEC);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_485D4925);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_92F1CC33);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_66F94A52);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_815AA6D3);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00005024);

INCLUDE_ASM("nonmatchings/umdman", func_00005050);

INCLUDE_ASM("nonmatchings/umdman", func_0000510C);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_D7A2F4A2);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_C25D7212);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_08BD78C1);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_00005444);

INCLUDE_ASM("nonmatchings/umdman", func_00005574);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00005358);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/umdman", D_0000D380);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D388);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D394);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D39C);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D3AC);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D3C0);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D3D0);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D3E0);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D3F0);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D400);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D410);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D424);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D42C);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D440);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D450);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D468);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D47C);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D490);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/umdman", D_00010C90);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/umdman", D_0000D598);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D5A8);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D5B8);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D5C8);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D5DC);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D5EC);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D5FC);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D60C);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D61C);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D62C);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D640);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D648);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D650);

INCLUDE_RODATA("nonmatchings/umdman", D_0000D658);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/umdman", D_00010D68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/umdman", D_0000FB10);

INCLUDE_RODATA("nonmatchings/umdman", D_0000FB28);

INCLUDE_ASM("nonmatchings/umdman", func_00001E14);

INCLUDE_ASM("nonmatchings/umdman", func_00001EC4);

INCLUDE_ASM("nonmatchings/umdman", func_00001F3C);

INCLUDE_ASM("nonmatchings/umdman", func_0000211C);

INCLUDE_ASM("nonmatchings/umdman", func_000021F0);

INCLUDE_ASM("nonmatchings/umdman", func_000022A8);

INCLUDE_ASM("nonmatchings/umdman", func_00002364);

INCLUDE_ASM("nonmatchings/umdman", func_00002418);

INCLUDE_ASM("nonmatchings/umdman", func_000024E8);

INCLUDE_ASM("nonmatchings/umdman", func_000025C4);

INCLUDE_ASM("nonmatchings/umdman", func_0000269C);

INCLUDE_ASM("nonmatchings/umdman", func_00002770);

INCLUDE_ASM("nonmatchings/umdman", func_00002848);

INCLUDE_ASM("nonmatchings/umdman", func_00002AC4);

INCLUDE_ASM("nonmatchings/umdman", func_00002B18);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_2CBE959B);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_E3F448E0);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_1B19A313);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_1B1BF9FD);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_F819E17C);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_14D3381C);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_68577709);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_5AA96415);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_2A39569B);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_CEE55E3E);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_65E1B97E);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_E5B7EDC5);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_2A08FE9A);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_18DE1880);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_3D44BABF);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_98345381);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_108B2322);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_D31DAD7E);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_7094E3A7);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_61C32A52);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_73E49F8F);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_250E6975);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_61EB07A5);

INCLUDE_ASM("nonmatchings/umdman", func_00004EC8);

INCLUDE_ASM("nonmatchings/umdman", func_00004EFC);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_BF88476F);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_485D4925);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_92F1CC33);

INCLUDE_ASM("nonmatchings/umdman", func_0000530C);

INCLUDE_ASM("nonmatchings/umdman", func_00005338);

INCLUDE_ASM("nonmatchings/umdman", func_000053F4);

INCLUDE_ASM("nonmatchings/umdman", func_0000567C);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_000053F0);

INCLUDE_ASM("nonmatchings/umdman", func_000055F4);

INCLUDE_ASM("nonmatchings/umdman", func_000057C0);

INCLUDE_ASM("nonmatchings/umdman", func_00005828);

INCLUDE_ASM("nonmatchings/umdman", func_000058D8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_000087C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00005CE4);

INCLUDE_ASM("nonmatchings/umdman", func_00005E08);

INCLUDE_ASM("nonmatchings/umdman", func_00005EAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_73966DE9);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_FD1A113A);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_23C3C3D6);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000590C);

INCLUDE_ASM("nonmatchings/umdman", func_0000599C);

INCLUDE_ASM("nonmatchings/umdman", func_00005AC0);

INCLUDE_ASM("nonmatchings/umdman", func_00005B6C);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00005BD0);

INCLUDE_ASM("nonmatchings/umdman", func_00005BE8);

INCLUDE_ASM("nonmatchings/umdman", func_00005CBC);

INCLUDE_ASM("nonmatchings/umdman", func_00005DCC);

INCLUDE_ASM("nonmatchings/umdman", func_00005F0C);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_0000625C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", func_00006598);

INCLUDE_ASM("nonmatchings/umdman", func_000066A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_A8359E04);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umdman", func_00008F0C);

INCLUDE_ASM("nonmatchings/umdman", func_00009018);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00005F2C);

INCLUDE_ASM("nonmatchings/umdman", func_0000606C);

INCLUDE_ASM("nonmatchings/umdman", func_0000617C);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00006250);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", func_000067DC);

INCLUDE_ASM("nonmatchings/umdman", func_000068B0);

INCLUDE_ASM("nonmatchings/umdman", func_00006968);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umdman", func_00009138);

INCLUDE_ASM("nonmatchings/umdman", func_000091F8);

INCLUDE_ASM("nonmatchings/umdman", func_000092A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_000067F8);

INCLUDE_ASM("nonmatchings/umdman", func_00006A84);

INCLUDE_ASM("nonmatchings/umdman", func_00006B08);

INCLUDE_ASM("nonmatchings/umdman", func_00006BB8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", func_00006F84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umdman", func_00006C68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00006E30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_00009370);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_A0B257A7);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_4C6BF421);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_6E7FC8F0);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_66CB0CC4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_000062B0);

INCLUDE_ASM("nonmatchings/umdman", func_00006384);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/umdman", func_00006CF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/umdman", func_0000643C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_000065E8);

INCLUDE_ASM("nonmatchings/umdman", func_00006874);

INCLUDE_ASM("nonmatchings/umdman", func_000068F8);

INCLUDE_ASM("nonmatchings/umdman", func_000069A8);

INCLUDE_ASM("nonmatchings/umdman", func_00006A68);

INCLUDE_ASM("nonmatchings/umdman", func_00006C50);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00006CE0);

#if FW_VERSION >= 201
M2C_UNK *func_00006D30(void) {
    return &D_00011A80;
}

M2C_UNK *func_00006D3C(void) {
    return &D_00012C40;
}

s32 func_00006D48(void) {
    return 0;
}

s32 func_00006D50(void) {
    return 0;
}

s32 func_00006D58(void) {
    return 0;
}

M2C_UNK *func_00006D60(void) {
    return &D_00012C80;
}
#else
M2C_UNK *func_00006D6C(void) {
    return &D_00012CC0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00006D6C);
#else
M2C_UNK *func_0000995C(void) {
    return &D_0000EBF0;
}

s32 func_00009968(void) {
    return 0;
}

s32 func_00009970(void) {
    return 0;
}

s32 func_00009978(void) {
    return 0;
}

M2C_UNK *func_00009980(void) {
    return &D_0000EC20;
}

M2C_UNK *func_0000998C(void) {
    return &D_0000EC30;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00006F58);

void func_00007328(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0000EC40 |= arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_00009998);

INCLUDE_ASM("nonmatchings/umdman", func_00009B70);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00006D78);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/umdman", func_00007148);
#endif

#if FW_VERSION >= 250
void func_00007148(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00012CD0 |= arg0;
    sceKernelCpuResumeIntr(temp_a0);
}
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00007184);

#if FW_VERSION < 201
s32 func_00009D24(void) {
    s32 var_v0;

    sceKernelDisableSubIntr(6, 1);
    sceKernelDisableSubIntr(6, 2);
    sceKernelDisableSubIntr(6, 3);
    sceKernelDisableSubIntr(6, 4);
    sceKernelDisableSubIntr(6, 5);
    sceKernelDisableSubIntr(6, 6);
    sceKernelDisableSubIntr(6, 7);
    var_v0 = sceKernelReleaseSubIntrHandler(6, 1);
    if (var_v0 >= 0) {
        var_v0 = sceKernelReleaseSubIntrHandler(6, 2);
        if (var_v0 >= 0) {
            var_v0 = sceKernelReleaseSubIntrHandler(6, 3);
            if (var_v0 >= 0) {
                var_v0 = sceKernelReleaseSubIntrHandler(6, 4);
                if (var_v0 >= 0) {
                    var_v0 = sceKernelReleaseSubIntrHandler(6, 5);
                    if (var_v0 >= 0) {
                        var_v0 = sceKernelReleaseSubIntrHandler(6, 6);
                        if (var_v0 >= 0) {
                            var_v0 = __builtin_allegrex_min(sceKernelReleaseSubIntrHandler(6, 7), 0);
                        }
                    }
                }
            }
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_00008284);
#endif

#if FW_VERSION >= 201
s32 func_000072E0(void) {
    s32 var_v0;

    sceKernelDisableSubIntr(6, 1);
    sceKernelDisableSubIntr(6, 2);
    sceKernelDisableSubIntr(6, 3);
    sceKernelDisableSubIntr(6, 4);
    sceKernelDisableSubIntr(6, 5);
    sceKernelDisableSubIntr(6, 6);
    sceKernelDisableSubIntr(6, 7);
    var_v0 = sceKernelReleaseSubIntrHandler(6, 1);
    if (var_v0 >= 0) {
        var_v0 = sceKernelReleaseSubIntrHandler(6, 2);
        if (var_v0 >= 0) {
            var_v0 = sceKernelReleaseSubIntrHandler(6, 3);
            if (var_v0 >= 0) {
                var_v0 = sceKernelReleaseSubIntrHandler(6, 4);
                if (var_v0 >= 0) {
                    var_v0 = sceKernelReleaseSubIntrHandler(6, 5);
                    if (var_v0 >= 0) {
                        var_v0 = sceKernelReleaseSubIntrHandler(6, 6);
                        if (var_v0 >= 0) {
                            var_v0 = __builtin_allegrex_min(sceKernelReleaseSubIntrHandler(6, 7), 0);
                        }
                    }
                }
            }
        }
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/umdman", func_000073D4);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_0000763C);

INCLUDE_ASM("nonmatchings/umdman", func_00007660);

INCLUDE_ASM("nonmatchings/umdman", func_000076D4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_552F671A);

INCLUDE_ASM("nonmatchings/umdman", func_00007BC8_v152);

INCLUDE_ASM("nonmatchings/umdman", func_00007BD4);

INCLUDE_ASM("nonmatchings/umdman", func_00007BE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umdman", func_000076F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_58E3718D);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_F7C603A2);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_4EA8EA5D);

s32 func_00009FC4(void) {
    return __builtin_allegrex_min(sceKernelAllocateFpl(D_0000EC10, &D_0000EC80, NULL), 0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000745C);

INCLUDE_ASM("nonmatchings/umdman", func_00007480);

INCLUDE_ASM("nonmatchings/umdman", func_000074F4);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_552F671A);
#else
s32 func_000076B4(void) {
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/umdman", func_000076B4);
#endif

#if FW_VERSION >= 250
s32 func_000076B4(void) {
    return D_00012D00;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/umdman", func_000076C0);
#endif

#if FW_VERSION >= 250
void func_000076C0(s32 arg0) {
    D_00012CD4 = arg0 + 0x30000;
}
#endif

#if FW_VERSION >= 260
s32 sceUmdMan_driver_2E49311E(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_000076B4();
    var_v0 = 1;
    if (!(temp_v0 & 0x10000)) {
        var_v0 = !(temp_v0 & 0x10100) ? 0 : 2;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_000076D4);

s32 func_000079A4(void) {
    return 0;
}
#endif

#if FW_VERSION != 201
s32 *sceUmdMan_driver_7C3D307C(void) {
    return &D_00012D00;
}
#else
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_7C3D307C);
#endif

#if FW_VERSION < 201
M2C_UNK *func_000079B8(void) {
    return &D_0001AD8C;
}
#else
INCLUDE_ASM("nonmatchings/umdman", func_000079B8);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_000079C4);

INCLUDE_ASM("nonmatchings/umdman", func_000079E0);

INCLUDE_ASM("nonmatchings/umdman", func_00007A0C);

INCLUDE_ASM("nonmatchings/umdman", func_00007A1C);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00007954);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", func_00007CD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_0000A084);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umdman", func_0000A0B4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00007A30);

INCLUDE_ASM("nonmatchings/umdman", func_00007A58);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00007AF0);

INCLUDE_ASM("nonmatchings/umdman", func_00007B10);

INCLUDE_ASM("nonmatchings/umdman", func_00007B34);

INCLUDE_ASM("nonmatchings/umdman", func_00007B48);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00007A74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_7EBAEA9F);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_C984E1CF);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00007B5C);
#endif

#if FW_VERSION != 201
s32 func_00007B94(void) {
    s32 temp_s0;

    temp_s0 = func_00006CE0();
    sceKernelDeleteSema(D_00012C10);
    return temp_s0;
}
#else
INCLUDE_ASM("nonmatchings/umdman", func_00007B94);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00007BC8);

#if FW_VERSION < 201
void func_0000A2B8(s32 arg0, s32 arg1) {
    func_00007F24(arg0, arg1);
}
#else
void func_00007C08(s32 arg0, s32 arg1) {
    func_00007F24(arg0, arg1);
}
#endif

#if FW_VERSION < 201
M2C_UNK *func_00007C24(void) {
    return &D_00012C20;
}
#else
INCLUDE_ASM("nonmatchings/umdman", func_00007C24);
#endif

#if FW_VERSION < 201
M2C_UNK *func_00007C30(void) {
    return &D_00012C00;
}
#else
INCLUDE_ASM("nonmatchings/umdman", func_00007C30);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00007C3C);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", func_00007ED4);
#endif

#if FW_VERSION < 201
s32 func_0000A30C(void) {
    return D_0000EC40;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00007B80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_08EB09C8);
#endif

#if FW_VERSION < 201
void func_0000A33C(void) {
    sceKernelWaitSema(D_00012C10, 1, NULL);
}

void func_0000A364(void) {
    sceKernelSignalSema(D_00012C10, 1);
}
#else
void func_00007C5C(void) {
    func_00006D6C();
}

s32 func_00007C78(void) {
    return D_00012CD0;
}

INCLUDE_ASM("nonmatchings/umdman", func_00007C84);

void func_00007CA8(void) {
    sceKernelWaitSema(D_00012C10, 1, NULL);
}

void func_00007CD0(void) {
    sceKernelSignalSema(D_00012C10, 1);
}
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00007CF4);

INCLUDE_ASM("nonmatchings/umdman", func_00007DC0);

INCLUDE_ASM("nonmatchings/umdman", func_00007E38);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_405B48A5);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_65D0DEC6);
#endif

#if FW_VERSION >= 201
s32 sceUmdMan_driver_405B48A5(void) {
    s32 cmp_tmp = func_000076B4() > 0x10001;
    return cmp_tmp == 0;
}

s32 sceUmdMan_driver_65D0DEC6(void) {
    return D_00012CD4 + 0xFFFD0000;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_2E49311E);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00007EDC);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00007F24);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00007E18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_0000A630);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00007FC8);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_000081EC);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000080B8(s32 arg0) {
    return (arg0 != 0) ? 0 : 0x80010016;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_0000A918);
#endif

#if FW_VERSION >= 201
s32 func_00008274(s32 arg0) {
    return (arg0 != 0) ? 0 : 0x80010016;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/umdman", func_00008284);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_000082AC);

INCLUDE_ASM("nonmatchings/umdman", func_000082D4);

INCLUDE_ASM("nonmatchings/umdman", func_000082FC);

INCLUDE_ASM("nonmatchings/umdman", func_00008324);

INCLUDE_ASM("nonmatchings/umdman", func_0000834C);

INCLUDE_ASM("nonmatchings/umdman", func_00008374);

INCLUDE_ASM("nonmatchings/umdman", func_00008410);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_000084A0);
#else
s32 func_000084A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 >= 0) {
        return 0;
    }
    return (arg2 | arg3) == arg0;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/umdman", func_000083FC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umdman", func_00008410_v271);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/umdman", func_0000852C);

INCLUDE_ASM("nonmatchings/umdman", func_000085C4);

INCLUDE_ASM("nonmatchings/umdman", func_0000860C);

INCLUDE_ASM("nonmatchings/umdman", func_0000868C);

INCLUDE_ASM("nonmatchings/umdman", func_000086CC);

INCLUDE_ASM("nonmatchings/umdman", func_00008734);

INCLUDE_ASM("nonmatchings/umdman", func_000087AC);

INCLUDE_ASM("nonmatchings/umdman", func_00008840);

INCLUDE_ASM("nonmatchings/umdman", func_000088B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/umdman", D_0000FC98);

INCLUDE_RODATA("nonmatchings/umdman", D_0000FCB0);

INCLUDE_ASM("nonmatchings/umdman", func_00008304);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_6A77A311);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_00010F9C);

INCLUDE_RODATA("nonmatchings/umdman", D_00010FB4);

INCLUDE_ASM("nonmatchings/umdman", func_000084C0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_000085D8);

INCLUDE_ASM("nonmatchings/umdman", func_000086D0);

INCLUDE_ASM("nonmatchings/umdman", func_0000879C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000AF24(void *arg0, u8 *arg1) {
    s32 var_a4;
    s8 *temp_v1;
    void *temp_v0;

    var_a4 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x18);
        if (temp_v0 != NULL) {
            temp_v1 = M2C_FIELD(temp_v0, s8 **, 0xC);
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xC;
                var_a4 = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 1) = (u8) *arg1;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 2) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 3) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 4) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 5) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a4;
}
#endif

#if FW_VERSION == 100
s32 func_0000AF24(void *arg0, u8 *arg1) {
    s32 var_a4;
    s8 *temp_v1;
    void *temp_v0;

    var_a4 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_v0 != NULL) {
            temp_v1 = M2C_FIELD(temp_v0, s8 **, 0x10);
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xC;
                var_a4 = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 1) = (u8) *arg1;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 2) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 3) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 4) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 5) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a4;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000AFF0(void *arg0, void *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    void *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x18);
        if (temp_v0 != NULL) {
            temp_v1 = M2C_FIELD(temp_v0, s8 **, 0xC);
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xD;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 6);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 2) = (s8) ((u16) M2C_FIELD(arg1, u16 *, 0) >> 8);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 3) = (u8) M2C_FIELD(arg1, u16 *, 0);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 4) = (s8) ((u16) M2C_FIELD(arg1, u16 *, 2) >> 8);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 5) = (u8) M2C_FIELD(arg1, u16 *, 2);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION == 100
s32 func_0000AFF0(void *arg0, void *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    void *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_v0 != NULL) {
            temp_v1 = M2C_FIELD(temp_v0, s8 **, 0x10);
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xD;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 6);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 2) = (s8) ((u16) M2C_FIELD(arg1, u16 *, 0) >> 8);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 3) = (u8) M2C_FIELD(arg1, u16 *, 0);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 4) = (s8) ((u16) M2C_FIELD(arg1, u16 *, 2) >> 8);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 5) = (u8) M2C_FIELD(arg1, u16 *, 2);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 func_0000888C(struct Unk_func_0000888C_0 *arg0, u8 *arg1) {
    s32 var_a4;
    s8 *temp_v1;
    struct Unk_func_0000888C_temp_v0 *temp_v0;

    var_a4 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk18;
        if (temp_v0 != NULL) {
            temp_v1 = temp_v0->unkC;
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xC;
                var_a4 = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 1) = (u8) *arg1;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 2) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 3) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 4) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 5) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a4;
}

s32 func_00008958(struct Unk_func_00008958_0 *arg0, struct Unk_func_00008958_1 *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    struct Unk_func_00008958_temp_v0 *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk18;
        if (temp_v0 != NULL) {
            temp_v1 = temp_v0->unkC;
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xD;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 1) = (u8) arg1->unk6;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 2) = (s8) ((u16) arg1->unk0 >> 8);
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 3) = (u8) arg1->unk0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 4) = (s8) ((u16) arg1->unk2 >> 8);
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 5) = (u8) arg1->unk2;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_00008A3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_0000896C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_0000B1C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000B308(void *arg0, void *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    void *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x18);
        if (temp_v0 != NULL) {
            temp_v1 = M2C_FIELD(temp_v0, s8 **, 0xC);
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xF;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 4);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 5);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 3) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 4) = (s8) ((u16) M2C_FIELD(arg1, u16 *, 0) >> 8);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 5) = (u8) M2C_FIELD(arg1, u16 *, 0);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 6) = (s8) ((u16) M2C_FIELD(arg1, u16 *, 2) >> 8);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 7) = (u8) M2C_FIELD(arg1, u16 *, 2);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 6);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION == 100
s32 func_0000B308(void *arg0, void *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    void *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_v0 != NULL) {
            temp_v1 = M2C_FIELD(temp_v0, s8 **, 0x10);
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xF;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 4);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 5);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 3) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 4) = (s8) ((u16) M2C_FIELD(arg1, u16 *, 0) >> 8);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 5) = (u8) M2C_FIELD(arg1, u16 *, 0);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 6) = (s8) ((u16) M2C_FIELD(arg1, u16 *, 2) >> 8);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 7) = (u8) M2C_FIELD(arg1, u16 *, 2);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 8) = (u8) M2C_FIELD(arg1, u8 *, 6);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000B3F4(void *arg0, void *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    void *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x18);
        if (temp_v0 != NULL) {
            temp_v1 = M2C_FIELD(temp_v0, s8 **, 0xC);
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -7;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 0);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 2) = (s8) ((u16) M2C_FIELD(arg1, u16 *, 2) >> 8);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), u8 *, 3) = (u8) M2C_FIELD(arg1, u16 *, 2);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 4) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 5) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION == 100
s32 func_0000B3F4(void *arg0, void *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    void *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x1C);
        if (temp_v0 != NULL) {
            temp_v1 = M2C_FIELD(temp_v0, s8 **, 0x10);
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -7;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 0);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 2) = (s8) ((u16) M2C_FIELD(arg1, u16 *, 2) >> 8);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), u8 *, 3) = (u8) M2C_FIELD(arg1, u16 *, 2);
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 4) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 5) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x10), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_00008B28);

s32 func_00008CA0(struct Unk_func_00008CA0_0 *arg0, struct Unk_func_00008CA0_1 *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    struct Unk_func_00008CA0_temp_v0 *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk18;
        if (temp_v0 != NULL) {
            temp_v1 = temp_v0->unkC;
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xF;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 1) = (u8) arg1->unk4;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 2) = (u8) arg1->unk5;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 3) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 4) = (s8) ((u16) arg1->unk0 >> 8);
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 5) = (u8) arg1->unk0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 6) = (s8) ((u16) arg1->unk2 >> 8);
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 7) = (u8) arg1->unk2;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 8) = (u8) arg1->unk6;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}

s32 func_00008D8C(struct Unk_func_00008D8C_0 *arg0, struct Unk_func_00008D8C_1 *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    struct Unk_func_00008D8C_temp_v0 *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk18;
        if (temp_v0 != NULL) {
            temp_v1 = temp_v0->unkC;
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -7;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 1) = (u8) arg1->unk0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 2) = (s8) ((u16) arg1->unk2 >> 8);
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 3) = (u8) arg1->unk2;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 4) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 5) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_B511F821);
#else
void sceUmdMan_driver_B511F821(void) {
    sceUmd_08709F2D();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00008D08(void) {
    return (sceGpio_driver_4250D44A() >> 0x18) & 1;
}
#endif

#if FW_VERSION == 100
s32 sceUmdMan_driver_5C026599(void) {
    return (sceGpio_driver_4250D44A() >> 0x18) & 1;
}
#endif

#if FW_VERSION >= 271
s32 func_00008EC4(void) {
    return __builtin_allegrex_ext(sceGpio_driver_4250D44A(), 0x18, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 func_00008EC4(void) {
    return (sceGpio_driver_4250D44A() >> 0x18) & 1;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_736AE133);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00008D94);
#endif

#if FW_VERSION == 100
void sceUmdMan_driver_736AE133(void) {
    sceUmd_AD18C797();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
M2C_UNK *func_00008E58(void) {
    return &D_00019940;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00008E28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_CD48F9C2);

M2C_UNK *sceUmdMan_driver_B3311B6E(void) {
    return &D_0000FC80;
}
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/umdman", func_0000B5A4);
#endif

#if FW_VERSION < 201
M2C_UNK *func_0000B634(void) {
    return &D_0000FCC0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00008F04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_208089C2);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00008F50);

M2C_UNK *func_00008FE8(void) {
    return &D_0001BD00;
}

INCLUDE_ASM("nonmatchings/umdman", func_00008FF4);

M2C_UNK *func_000090AC(void) {
    return &D_0001BD38;
}

INCLUDE_ASM("nonmatchings/umdman", func_000090B8);
#endif

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_4581E306);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_CA68F200);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00009628);

INCLUDE_ASM("nonmatchings/umdman", func_00009840);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_0000BAE8);

INCLUDE_ASM("nonmatchings/umdman", func_0000BC1C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_00009814);

INCLUDE_ASM("nonmatchings/umdman", func_00009A68);
#endif

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_F4AFF62D);

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00009C78(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00019A78 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 func_00009CAC(void) {
    return D_00019A78;
}
#endif

#if FW_VERSION == 100
void sceUmdMan_driver_C8D45A7B(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0000FDC0 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 sceUmdMan_driver_93539196(void) {
    return D_0000FDC0;
}

s32 sceUmdMan_driver_1FBF6078(void) {
    return D_0000FDC0 == 1;
}
#endif

#if FW_VERSION >= 201
void func_00009F10(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BE38 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 sceUmdMan_driver_7F482409(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;

    sceSyscon_driver_8CBC7987(2, 1);
    sceClockgen_driver_DBE5F283();
    sceKernelDelayThread(0x2710U);
    sceSyscon_driver_8A4519F5(0);
    sceKernelDelayThread(0x2710U);
    temp_v0 = sceSyscon_driver_8A4519F5(1);
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        sceKernelDelayThread(0x2710U);
        temp_v0_2 = sceClockgen_driver_7FF82F6F();
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            sceKernelDelayThread(0x2710U);
            temp_v0_3 = sceSyscon_driver_8CBC7987(2, 0);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                sceUmdMan_driver_552F671A(0xB0);
            }
        }
    }
    return var_s0;
}

s32 func_00009FE8(void) {
    return D_0001BE38;
}
#endif

INCLUDE_ASM("nonmatchings/umdman", func_00009FF4);

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/umdman", D_000119A8);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/umdman", func_00009C00);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/umdman", func_00009B2C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umdman", func_00009B40);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_0000A3F0);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/umdman", func_0000A4E4);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/umdman", func_00009C3C);
#endif

#if FW_VERSION == 271
s32 func_00009C3C(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = sceKernelRegisterSubIntrHandler(4, 0x18, func_0000B344, 0);
    if (var_s0 >= 0) {
        temp_v0 = sceKernelRegisterSubIntrHandler(4, 0x1A, func_0000A358, 0);
        var_s0 = temp_v0;
        if (temp_v0 >= 0) {
            func_0000A6CC();
        }
    }
    return var_s0;
}
#endif

#if FW_VERSION >= 271
void func_00009CA8(void) {
    func_0000A7EC();
    func_0000A96C();
    func_0000A8DC();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/umdman", D_0000FD50);

INCLUDE_RODATA("nonmatchings/umdman", D_0000FD5C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/umdman", D_000104D4);

INCLUDE_RODATA("nonmatchings/umdman", D_000104F4);

INCLUDE_RODATA("nonmatchings/umdman", D_00010514);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_00009D60);

INCLUDE_ASM("nonmatchings/umdman", func_00009E54);

INCLUDE_RODATA("nonmatchings/umdman", D_0000FDB0);

INCLUDE_RODATA("nonmatchings/umdman", D_0000FDBC);

INCLUDE_RODATA("nonmatchings/umdman", D_0000FDD0);

INCLUDE_RODATA("nonmatchings/umdman", D_0000FE00);

INCLUDE_RODATA("nonmatchings/umdman", D_0000FE28);

INCLUDE_ASM("nonmatchings/umdman", func_00009EA4);

INCLUDE_ASM("nonmatchings/umdman", func_00009F58);

INCLUDE_ASM("nonmatchings/umdman", func_0000A024);

INCLUDE_ASM("nonmatchings/umdman", func_0000A0EC);

INCLUDE_RODATA("nonmatchings/umdman", D_0000FF50);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", func_0000A2EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 func_0000A2EC(void) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v0 = sceKernelEnableSubIntr(4, 0x1A);
    if (temp_v0 < 0) {
        KDebugForKernel_84F370BC(&D_0000FF50, &D_0000FDB0, "_sceUmdManEnableUMDDetectIntr", temp_v0);
    }
    sceKernelCpuResumeIntr(temp_s1);
    return temp_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/umdman", D_0000FF9C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", func_0000A344);
#endif

#if FW_VERSION == 151
s32 func_0000A344(void) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v0 = sceKernelDisableSubIntr(4, 0x1A);
    if (temp_v0 < 0) {
        KDebugForKernel_84F370BC(&D_0000FF9C, &D_0000FDB0, "_sceUmdManDisableUMDDetectIntr", temp_v0);
    }
    sceKernelCpuResumeIntr(temp_s1);
    return temp_v0;
}
#endif

#if FW_VERSION == 150
s32 func_0000A364_v150(void) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v0 = sceKernelDisableSubIntr(4, 0x1A);
    if (temp_v0 < 0) {
        KDebugForKernel_84F370BC(&D_0000FF9C, &D_0000FDB0, "_sceUmdManDisableUMDDetectIntr", temp_v0);
    }
    sceKernelCpuResumeIntr(temp_s1);
    return temp_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/umdman", D_0000FFE8);

INCLUDE_ASM("nonmatchings/umdman", func_0000A3DC);

s32 func_0000A484(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x1A, 2);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

INCLUDE_RODATA("nonmatchings/umdman", D_0001002C);

INCLUDE_ASM("nonmatchings/umdman", func_0000A4CC);

s32 func_0000A574(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x18, 2);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_0000A5BC(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x19, 0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_0000A604(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x19, 2);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

void func_0000A64C(void) {
    M2C_FIELD(&D_00019AB0, s32 *, 0) = 0;
    M2C_FIELD(&D_00019AB0, s32 *, 4) = 0;
    M2C_FIELD(&D_00019AB0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/umdman", func_0000A664);

void func_0000A6E4(s32 arg0) {
    D_00019ABC = arg0;
}

INCLUDE_ASM("nonmatchings/umdman", func_0000A6F0);

void sceUmdMan_driver_4FB913A3(void) {
    sceAta_driver_1C29566B();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_0000BF5C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000BFF0(void) {
    sceAta_driver_7F551D66();
}
#endif

#if FW_VERSION == 100
void func_0000BFF0(void) {
    sceKernelRegisterSubIntrHandler(4, 0x18, sceUmdMan_driver_B989E127, 0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000A760(void) {
    sceAta_driver_68DEA2FF();
}

INCLUDE_ASM("nonmatchings/umdman", func_0000A77C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_0000C01C);

void func_0000C06C(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0000FE10 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 sceUmdMan_driver_A49E52E8(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelEnableSubIntr(4, 0x18);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceUmdMan_driver_B0A6DC55(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0000FE10 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelCancelAlarm(arg0);
}
#endif

#if FW_VERSION == 100
void sceUmdMan_driver_B0A6DC55(s32 arg0) {
    func_0000C06C(0);
    sceKernelCancelAlarm(arg0);
}
#endif

#if FW_VERSION < 201
void func_0000C118(s32 arg0) {
    D_0001BE68 = 0;
    sceKernelCancelAlarm(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceUmdMan_driver_7DF2A18D(u32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0000FE10 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelSetAlarm(arg0, (s32) &func_0000B2FC, NULL);
}
#endif

#if FW_VERSION == 100
void sceUmdMan_driver_7DF2A18D(u32 arg0) {
    func_0000C06C(0);
    sceKernelSetAlarm(arg0, (s32) &func_0000B2FC, NULL);
}
#endif

#if FW_VERSION < 201
void func_0000C174(u32 arg0) {
    D_0001BE68 = 0;
    sceKernelSetAlarm(arg0, (s32) &func_0000B330, NULL);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000A920(void) {
    return D_0001BE68;
}
#endif

#if FW_VERSION == 100
s32 sceUmdMan_driver_0BDD5754(void) {
    return D_0000FE00;
}
#endif

#if FW_VERSION < 201
s32 sceUmdMan_driver_D1D4F296(void) {
    return D_0000FE10;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/umdman", D_000100BC);

INCLUDE_RODATA("nonmatchings/umdman", D_000100DC);

INCLUDE_ASM("nonmatchings/umdman", func_0000A938);

void func_0000AAC8(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;

    func_0000A64C();
    temp_s0 = sceKernelCpuSuspendIntr();
    temp_v0 = sceKernelReleaseSubIntrHandler(4, 0x18);
    if (temp_v0 >= 0) {

    } else {
        KDebugForKernel_84F370BC(&D_00010140, &D_0000FDB0, &D_00010128, temp_v0);
    }
    temp_v0_2 = sceKernelReleaseSubIntrHandler(4, 0x1A);
    if (temp_v0_2 < 0) {
        KDebugForKernel_84F370BC(&D_00010140, &D_0000FDB0, &D_00010128, temp_v0_2);
    }
    sceKernelCpuResumeIntr(temp_s0);
    func_00009F58();
    func_00009D24();
    sceSysEventForKernel_D7D3FDCD(&D_0001874C);
    InterruptManagerForKernel_D774BA45(6);
}

INCLUDE_RODATA("nonmatchings/umdman", D_00010128);

INCLUDE_RODATA("nonmatchings/umdman", D_00010140);

INCLUDE_ASM("nonmatchings/umdman", func_0000AB98);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_BF8AED79);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_4217E7F5);

s32 func_0000C1B8(void) {
    return D_00019ABC;
}
#endif

#if FW_VERSION == 100
s32 func_0000C1B8(void) {
    return D_0001BE68;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", func_0000AD24);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 func_0000AD24(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_0000ADF0(arg0, arg1, arg2);
    if (temp_v0 == 0) {

    } else {
        KDebugForKernel_84F370BC("%sERROR: %s: sceUmdManIntrCallSubIntr(%x)\n", &D_0000FDB0, "SPKCallIntrHandler", temp_v0);
    }
    return -1;
}
#endif

#if FW_VERSION == 100
void sceUmdMan_driver_A58946CA(s32 arg0) {
    SysTimerForKernel_975D8E84(D_0000FE00, arg0, &func_0000FB38, 0);
}

void sceUmdMan_driver_5304CA4A(void) {
    func_0000C06C(0);
    SysTimerForKernel_A95143E2(D_0000FE00);
}

void sceUmdMan_driver_6CB4A8D6(void) {
    SysTimerForKernel_4A01F9D3(D_0000FE00);
    SysTimerForKernel_54BB5DB4(D_0000FE00);
}

void sceUmdMan_driver_C83EB3E2(void) {
    sceKernelDisableSubIntr(4, 0x18);
}

void func_0000C270(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    sceKernelReleaseSubIntrHandler(4, 0x18);
    sceKernelCpuResumeIntr(temp_s0);
}

void func_0000C2A8(s32 arg0) {
    func_00007AF0(~arg0 & 0xFFFF);
}

s32 func_0000C2C8(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    sceKernelReleaseSubIntrHandler(4, 0x18);
    sceKernelCpuResumeIntr(temp_s0);
    func_00009D24();
    SysTimerForKernel_C105CF38(D_0000FE00);
    return InterruptManagerForKernel_D774BA45(6);
}

void func_0000C31C(void) {
    if (sceGpio_driver_317D9D2C(0x18, 1) >= 0) {
        sceGpio_driver_37C8DADC(0x18, 4);
    }
}

void func_0000C350(void) {
    sceGpio_driver_317D9D2C(0x18, 2);
}

void func_0000C370(void) {
    sceGpio_driver_317D9D2C(0x19, 0);
}

void func_0000C390(void) {
    sceGpio_driver_317D9D2C(0x19, 2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_00011054);

INCLUDE_RODATA("nonmatchings/umdman", D_00011060);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_00011A0C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/umdman", func_0000A09C);
#endif

#if FW_VERSION == 100
s32 func_0000A190(s32 arg0, s32 arg1, s32 arg2) {
    func_0000C424(arg0, arg1, arg2);
    return -1;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/umdman", func_0000A190);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_000110B4);

INCLUDE_RODATA("nonmatchings/umdman", D_000110C0);

INCLUDE_RODATA("nonmatchings/umdman", D_000110D4);

INCLUDE_RODATA("nonmatchings/umdman", D_00011104);

INCLUDE_RODATA("nonmatchings/umdman", D_0001112C);

INCLUDE_ASM("nonmatchings/umdman", func_0000A1D8);

INCLUDE_ASM("nonmatchings/umdman", func_0000A28C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000A358);

INCLUDE_ASM("nonmatchings/umdman", func_0000A420);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_00011254);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_0000A654);
#endif

#if FW_VERSION >= 271
s32 func_0000A654(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelEnableSubIntr(4, 0x1A);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION == 201
s32 func_0000A654(void) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v0 = sceKernelEnableSubIntr(4, 0x1A);
    if (temp_v0 < 0) {
        KDebugForKernel_84F370BC(&D_00011254, &D_000110B4, "_sceUmdManEnableUMDDetectIntr", temp_v0);
    }
    sceKernelCpuResumeIntr(temp_s1);
    return temp_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_000112A0);

INCLUDE_ASM("nonmatchings/umdman", func_0000A6CC);
#endif

#if FW_VERSION >= 271
s32 func_0000A6CC(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelDisableSubIntr(4, 0x1A);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_000112EC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000A744);

s32 func_0000A7EC(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x1A, 2);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_00011330);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000A834);

s32 func_0000A8DC(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x18, 2);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_0000A924(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x19, 0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_0000A96C(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x19, 2);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_BF8AED79);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_4217E7F5);

INCLUDE_ASM("nonmatchings/umdman", func_0000AB38);

INCLUDE_ASM("nonmatchings/umdman", func_0000AB68);

void func_0000AC20(s32 arg0) {
    D_0001BE90 = arg0;
}

INCLUDE_ASM("nonmatchings/umdman", func_0000AC2C);

void sceUmdMan_driver_4FB913A3(void) {
    sceAta_driver_1C29566B();
}

void func_0000AD5C(void) {
    sceAta_driver_7F551D66();
}

void func_0000AD78(void) {
    sceAta_driver_68DEA2FF();
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/umdman", func_0000A618);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_0000AD94);
#endif

#if FW_VERSION >= 201
void sceUmdMan_driver_B0A6DC55(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BE6C = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelCancelAlarm(arg0);
}

void func_0000AEA4(s32 arg0) {
    D_0001BE68 = 0;
    sceKernelCancelAlarm(arg0);
}

void sceUmdMan_driver_7DF2A18D(u32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BE6C = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelSetAlarm(arg0, (s32) &func_0000B2FC, NULL);
}

void func_0000AF0C(u32 arg0) {
    D_0001BE68 = 0;
    sceKernelSetAlarm(arg0, (s32) &func_0000B330, NULL);
}

s32 func_0000AF38(void) {
    return D_0001BE68;
}

s32 sceUmdMan_driver_D1D4F296(void) {
    return D_0001BE6C;
}
#endif

#if FW_VERSION >= 271
s32 func_0000AF50(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    sceKernelDisableSubIntr(4, 0x18);
    temp_s0 = sceKernelDisableSubIntr(4, 0x1A);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_0000A7AC(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    sceKernelReleaseSubIntrHandler(4, 0x18);
    temp_s0 = sceKernelReleaseSubIntrHandler(4, 0x1A);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

void func_0000A800(s32 arg0) {
    func_00007AF0(~arg0 & 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_0001140C);

INCLUDE_RODATA("nonmatchings/umdman", D_0001142C);

INCLUDE_ASM("nonmatchings/umdman", func_0000AF50);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 271) || FW_VERSION == 300
INCLUDE_ASM("nonmatchings/umdman", func_0000B0E0);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
void func_0000B0E0(void) {
    s32 temp_s0;

    func_0000AB38();
    temp_s0 = sceKernelCpuSuspendIntr();
    sceKernelReleaseSubIntrHandler(4, 0x18);
    sceKernelReleaseSubIntrHandler(4, 0x1A);
    sceKernelCpuResumeIntr(temp_s0);
    func_00009CA8();
    func_000072E0();
    InterruptManagerForKernel_F987B1F0(6);
    sceSysEventForKernel_D7D3FDCD(&D_00010AC0);
    InterruptManagerForKernel_D774BA45(6);
}
#endif

#if FW_VERSION == 271
void func_0000B0E0(void) {
    s32 temp_s0;

    func_0000AB38();
    temp_s0 = sceKernelCpuSuspendIntr();
    sceKernelReleaseSubIntrHandler(4, 0x18);
    sceKernelReleaseSubIntrHandler(4, 0x1A);
    sceKernelCpuResumeIntr(temp_s0);
    func_00009CA8();
    func_000072E0();
    sceSysEventForKernel_D7D3FDCD(&D_000109C0);
    InterruptManagerForKernel_D774BA45(6);
}
#endif

#if FW_VERSION >= 271
s32 func_0000A890(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelEnableSubIntr(4, 0x18);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_0000A8D8(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceKernelDisableSubIntr(4, 0x18);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_00011478);

INCLUDE_RODATA("nonmatchings/umdman", D_00011490);

INCLUDE_ASM("nonmatchings/umdman", func_0000B1B0);
#endif

#if FW_VERSION >= 201
s32 func_0000B2A0(void) {
    return D_0001BE90;
}
#endif

#if FW_VERSION >= 271
s32 func_0000A92C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000B378(arg0, arg1, arg2);
    return -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_0000B2AC);
#endif

INCLUDE_ASM("nonmatchings/umdman", func_0000B2FC);

INCLUDE_ASM("nonmatchings/umdman", func_0000B330);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000ADBC(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    sceGpio_driver_4250D44A();
    sceKernelCpuResumeIntr(temp_s0);
    return 0;
}

INCLUDE_ASM("nonmatchings/umdman", func_0000ADF0);

INCLUDE_ASM("nonmatchings/umdman", module_reboot_before);

INCLUDE_ASM("nonmatchings/umdman", func_0000B39C);

INCLUDE_ASM("nonmatchings/umdman", func_0000B500);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_1F9AFFF4);

void func_0000B620(void) {
    if (sceAta_driver_6FC42083() != 0) {
        func_0000C478();
    } else {
        func_0000D2E8();
    }
}

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_8609D1E4);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_AAA4ED91);

INCLUDE_ASM("nonmatchings/umdman", func_0000B714);

INCLUDE_ASM("nonmatchings/umdman", func_0000B904);

INCLUDE_ASM("nonmatchings/umdman", func_0000B954);

INCLUDE_ASM("nonmatchings/umdman", func_0000B9A4);

void func_0000BA08(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00019B38 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 func_0000BA3C(void) {
    return D_00019B38;
}

void func_0000BA48(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00019B3C = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 sceUmdMan_driver_42D28DD1(void) {
    return D_00019B3C;
}

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_E192C10A);

INCLUDE_ASM("nonmatchings/umdman", func_0000BA94);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", func_0000C040);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umdman", func_0000BB74);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_0000BBC8);

void func_0000BCE8(s32 arg0) {
    D_00019B40 = arg0;
}

s32 func_0000BCF4(void) {
    return D_00019B40;
}

INCLUDE_ASM("nonmatchings/umdman", func_0000BD00);

INCLUDE_ASM("nonmatchings/umdman", func_0000BE7C);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_77E6C03A);

INCLUDE_RODATA("nonmatchings/umdman", D_00010288);

INCLUDE_RODATA("nonmatchings/umdman", D_00010294);

INCLUDE_RODATA("nonmatchings/umdman", D_000102C8);

INCLUDE_ASM("nonmatchings/umdman", func_0000C000);

INCLUDE_ASM("nonmatchings/umdman", func_0000C0F8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umdman", func_0000C66C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umdman", func_0000C184);

INCLUDE_ASM("nonmatchings/umdman", func_0000C410);

s32 func_0000C478(void) {
    return D_0001878C;
}

void sceUmdMan_driver_A869CAB3(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00019B5C = 0;
    D_00019B60 = 0;
    D_00019B44 = 0;
    sceKernelCpuResumeIntr(temp_a0);
}

INCLUDE_ASM("nonmatchings/umdman", func_0000C4C0);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_F65D819F);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_2787078E);

INCLUDE_ASM("nonmatchings/umdman", func_0000C5D4);

INCLUDE_ASM("nonmatchings/umdman", func_0000C79C);

INCLUDE_ASM("nonmatchings/umdman", func_0000C808);

INCLUDE_ASM("nonmatchings/umdman", func_0000C878);

INCLUDE_ASM("nonmatchings/umdman", func_0000CAAC);

INCLUDE_ASM("nonmatchings/umdman", func_0000CD98);

INCLUDE_ASM("nonmatchings/umdman", func_0000D00C);

s32 func_0000D2D0(void) {
    return D_00019B64;
}

void func_0000D2DC(s32 arg0) {
    D_00019B64 = arg0;
}

s32 func_0000D2E8(void) {
    s32 temp_s1;
    u32 temp_s0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_4250D44A();
    sceKernelCpuResumeIntr(temp_s1);
    return (temp_s0 >> 0x1A) & 1;
}

INCLUDE_ASM("nonmatchings/umdman", func_0000D330);

INCLUDE_ASM("nonmatchings/umdman", func_0000D850);

INCLUDE_ASM("nonmatchings/umdman", func_0000D944);

INCLUDE_RODATA("nonmatchings/umdman", D_00010414);

INCLUDE_RODATA("nonmatchings/umdman", D_00010420);

INCLUDE_RODATA("nonmatchings/umdman", D_00010434);

INCLUDE_RODATA("nonmatchings/umdman", D_00010460);

INCLUDE_RODATA("nonmatchings/umdman", D_00010490);

INCLUDE_RODATA("nonmatchings/umdman", D_000104C0);

INCLUDE_ASM("nonmatchings/umdman", func_0000DBC0);

INCLUDE_ASM("nonmatchings/umdman", func_0000DECC);

void sceUmdMan_driver_0DC8D26D(void) {
    sceKernelWaitSema(D_00019C64, 1, NULL);
}

void sceUmdMan_driver_9F106F73(void) {
    sceKernelPollSema(D_00019C64, 1);
}

void sceUmdMan_driver_B0A43DA7(void) {
    sceKernelSignalSema(D_00019C64, 1);
}

s32 sceUmdMan_driver_BD13A488(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_00019B70 != NULL) {
        var_v0 = *D_00019B70;
    }
    return var_v0;
}

s32 sceUmdMan_driver_3DCFAA71(s32 arg0) {
    return (D_00019C50 & arg0) != 0;
}

s32 sceUmdMan_driver_9814DCF3(void) {
    return D_00019C50;
}

INCLUDE_ASM("nonmatchings/umdman", func_0000E3CC);

void func_0000E428(void) {

}

INCLUDE_ASM("nonmatchings/umdman", func_0000E430);

INCLUDE_RODATA("nonmatchings/umdman", D_000105AC);

INCLUDE_ASM("nonmatchings/umdman", func_0000E464);

INCLUDE_ASM("nonmatchings/umdman", func_0000E53C);

INCLUDE_ASM("nonmatchings/umdman", func_0000E630);

INCLUDE_ASM("nonmatchings/umdman", func_0000E748);

INCLUDE_ASM("nonmatchings/umdman", func_0000E784);

INCLUDE_RODATA("nonmatchings/umdman", D_00010660);

INCLUDE_RODATA("nonmatchings/umdman", D_0001066C);

INCLUDE_ASM("nonmatchings/umdman", func_0000E894);

void func_0000EA44(void) {
    sceKernelTerminateDeleteThread(D_00019C6C);
    sceKernelDeleteEventFlag(D_00019C74);
}
#endif

#if FW_VERSION >= 201
s32 func_0000B344(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    sceGpio_driver_4250D44A();
    sceKernelCpuResumeIntr(temp_s0);
    return 0;
}

INCLUDE_ASM("nonmatchings/umdman", func_0000B378);

INCLUDE_ASM("nonmatchings/umdman", module_reboot_before);

INCLUDE_ASM("nonmatchings/umdman", func_0000B924);

INCLUDE_ASM("nonmatchings/umdman", func_0000BAA8);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_1F9AFFF4);

void func_0000BBC8(void) {
    if (sceAta_driver_6FC42083() != 0) {
        func_0000CD24();
    } else {
        func_0000E0C4();
    }
}

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_8609D1E4);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_AAA4ED91);

INCLUDE_ASM("nonmatchings/umdman", func_0000BCBC);

INCLUDE_ASM("nonmatchings/umdman", func_0000BECC);

INCLUDE_ASM("nonmatchings/umdman", func_0000BF1C);

INCLUDE_ASM("nonmatchings/umdman", func_0000BF6C);

void func_0000BFD0(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BF14 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 func_0000C004(void) {
    return D_0001BF14;
}

void func_0000C010(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BF18 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 sceUmdMan_driver_42D28DD1(void) {
    return D_0001BF18;
}

M2C_UNK *sceUmdMan_driver_E192C10A(void) {
    return &D_0001BE94;
}
#endif

#if FW_VERSION >= 271
s32 sceUmdMan_driver_85AEA6C5(void) {
    return D_0001ADF0;
}

void sceUmdMan_driver_5FB669CE(s32 arg0) {
    D_0001ADF0 = arg0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000C05C);

INCLUDE_ASM("nonmatchings/umdman", func_0000C124);

INCLUDE_ASM("nonmatchings/umdman", func_0000C1D8);

void func_0000C2BC(s32 arg0) {
    D_0001BF1C = arg0;
}

s32 func_0000C2C8(void) {
    return D_0001BF1C;
}

INCLUDE_ASM("nonmatchings/umdman", func_0000C2D4);

INCLUDE_ASM("nonmatchings/umdman", func_0000C450);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_77E6C03A);

INCLUDE_ASM("nonmatchings/umdman", func_0000C5F0);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/umdman", func_0000BBCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_000115D8);

INCLUDE_RODATA("nonmatchings/umdman", D_000115E4);

INCLUDE_RODATA("nonmatchings/umdman", D_00011618);

INCLUDE_ASM("nonmatchings/umdman", func_0000C6E4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000C7E0);

INCLUDE_ASM("nonmatchings/umdman", func_0000C874);

INCLUDE_ASM("nonmatchings/umdman", func_0000C934);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/umdman", func_0000D010);

INCLUDE_ASM("nonmatchings/umdman", func_0000D3F8);
#endif

#if FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/umdman", D_000108C8);

INCLUDE_RODATA("nonmatchings/umdman", D_00011060);

INCLUDE_ASM("nonmatchings/umdman", func_0000C8D4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000CCBC);

s32 func_0000CD24(void) {
    return D_00011B0C;
}

void sceUmdMan_driver_A869CAB3(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BF3C = 0;
    D_0001BF40 = 0;
    D_0001BF24 = 0;
    sceKernelCpuResumeIntr(temp_a0);
}

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_F65D819F);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_2787078E);
#endif

#if FW_VERSION >= 271
s32 sceUmdMan_driver_2787078E(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BF28 = 0;
    D_0001BF2C = 0;
    D_0001BF30 = 0;
    sceKernelCpuResumeIntr(temp_a0);
    return 0;
}

s32 func_0000CADC(void) {
    return D_0001AE1C;
}

void func_0000CAE8(s32 arg0) {
    D_0001AE1C = arg0;
}

void sceUmdMan_driver_60933ECD(void) {
    sceAta_driver_6FC42083();
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000CE20);

INCLUDE_ASM("nonmatchings/umdman", func_0000D028);

INCLUDE_ASM("nonmatchings/umdman", func_0000D094);

INCLUDE_ASM("nonmatchings/umdman", func_0000D104);

INCLUDE_ASM("nonmatchings/umdman", func_0000D4E4);

INCLUDE_ASM("nonmatchings/umdman", func_0000D7EC);

INCLUDE_ASM("nonmatchings/umdman", func_0000DA78);

INCLUDE_ASM("nonmatchings/umdman", func_0000DE54);

s32 func_0000E0AC(void) {
    return D_0001BF48;
}

void func_0000E0B8(s32 arg0) {
    D_0001BF48 = arg0;
}
#endif

#if FW_VERSION >= 271
s32 func_0000E0C4(void) {
    s32 temp_s1;
    u32 temp_s0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_4250D44A();
    sceKernelCpuResumeIntr(temp_s1);
    return __builtin_allegrex_ext(temp_s0, 0x1A, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 func_0000E0C4(void) {
    s32 temp_s1;
    u32 temp_s0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_4250D44A();
    sceKernelCpuResumeIntr(temp_s1);
    return (temp_s0 >> 0x1A) & 1;
}
#endif

#if FW_VERSION >= 271
void sceUmdMan_driver_1DA9276A(void) {
    sceAta_driver_A77C230B();
    sceAta_driver_ACCEE63F();
}

void sceUmdMan_driver_B69DFDB1(void) {
    sceAta_driver_ACCEE63F();
}

void sceUmdMan_driver_EC3426D1(void) {
    sceAta_driver_DCC8A89E();
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/umdman", func_0000DF84);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000E10C);

INCLUDE_ASM("nonmatchings/umdman", func_0000E66C);

INCLUDE_RODATA("nonmatchings/umdman", D_00011704);

INCLUDE_RODATA("nonmatchings/umdman", D_0001170C);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/umdman", func_0000E45C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umdman", func_0000E754);

INCLUDE_RODATA("nonmatchings/umdman", D_00011774);

INCLUDE_RODATA("nonmatchings/umdman", D_00011780);

INCLUDE_RODATA("nonmatchings/umdman", D_00011794);

INCLUDE_RODATA("nonmatchings/umdman", D_000117C0);

INCLUDE_RODATA("nonmatchings/umdman", D_000117F0);

INCLUDE_RODATA("nonmatchings/umdman", D_00011820);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000E9D0);

INCLUDE_ASM("nonmatchings/umdman", func_0000EDD4);
#endif

#if FW_VERSION >= 271
void sceUmdMan_driver_0DC8D26D(void) {
    sceKernelLockMutex(D_0001AF24, 1, NULL);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
void sceUmdMan_driver_0DC8D26D(void) {
    sceKernelWaitSema(D_0001C048, 1, NULL);
}
#endif

#if FW_VERSION >= 271
void sceUmdMan_driver_9F106F73(void) {
    sceKernelTryLockMutex(D_0001AF24, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
void sceUmdMan_driver_9F106F73(void) {
    sceKernelPollSema(D_0001C048, 1);
}
#endif

#if FW_VERSION >= 271
void sceUmdMan_driver_B0A43DA7(void) {
    sceKernelUnlockMutex(D_0001AF24, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
void sceUmdMan_driver_B0A43DA7(void) {
    sceKernelSignalSema(D_0001C048, 1);
}
#endif

#if FW_VERSION >= 271
void func_0000F020(s32 arg0) {
    sceKernelCancelMutex(D_0001AF24, arg0, NULL);
}
#endif

#if FW_VERSION >= 201
s32 sceUmdMan_driver_BD13A488(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_0001BF54 != NULL) {
        var_v0 = *D_0001BF54;
    }
    return var_v0;
}

s32 sceUmdMan_driver_3DCFAA71(s32 arg0) {
    return (D_0001C034 & arg0) != 0;
}

s32 sceUmdMan_driver_9814DCF3(void) {
    return D_0001C034;
}

INCLUDE_ASM("nonmatchings/umdman", func_0000F49C);

void func_0000F4F8(void) {
}

INCLUDE_ASM("nonmatchings/umdman", func_0000F500);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/umdman", func_0000F11C);

INCLUDE_ASM("nonmatchings/umdman", func_0000F1CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_0001190C);

INCLUDE_ASM("nonmatchings/umdman", func_0000F534);

INCLUDE_ASM("nonmatchings/umdman", func_0000F60C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000F700);

INCLUDE_ASM("nonmatchings/umdman", func_0000F818);

INCLUDE_ASM("nonmatchings/umdman", func_0000F854);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umdman", D_000119C0);

INCLUDE_RODATA("nonmatchings/umdman", D_000119CC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umdman", func_0000F964);

void func_0000FB08(void) {
    sceKernelTerminateDeleteThread(D_0001C050);
    sceKernelDeleteEventFlag(D_0001C058);
}
#endif

INCLUDE_ASM("nonmatchings/umdman", func_0000FB38);

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000EAA0(void) {
    sceKernelTerminateThread(D_00019C6C);
}

INCLUDE_ASM("nonmatchings/umdman", func_0000EAC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/umdman", func_0000C424);
#endif

#if FW_VERSION >= 201
void func_0000FB64(void) {
    sceKernelTerminateThread(D_0001C050);
}

INCLUDE_ASM("nonmatchings/umdman", func_0000FB88);

INCLUDE_ASM("nonmatchings/umdman", func_0000FBE4);

INCLUDE_ASM("nonmatchings/umdman", sceUmdMan_driver_EFD566A8);

s32 func_0000FD1C(void) {
    sceUmd_4832ABF3(func_0000FD4C);
    LoadExecForKernel_11412288(func_0000FBE4);
    return 0;
}

void func_0000FD4C(s32 arg0) {
    if (arg0 != 2) {
        func_0000FD80();
    } else {
        func_0000FBE4();
    }
}

INCLUDE_ASM("nonmatchings/umdman", func_0000FD80);
#endif
