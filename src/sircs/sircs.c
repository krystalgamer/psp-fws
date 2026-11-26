/* cflags: -O2 -frename-registers */
#include "common.h"
#include "sircs_decls.h"

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sircs", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/sircs", sceSircsSend);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sircs", sceSircsReceive);
#else
INCLUDE_ASM("nonmatchings/sircs", func_00000294);

INCLUDE_ASM("nonmatchings/sircs", func_000002E8);
#endif

#if FW_VERSION >= 282
void func_00000894(void) {
    if (D_00002770.unk0 == 0) {
        sceKernelPowerLock(0);
        D_00002770.unk0 = 1;
    }
}

void func_000008D4(void) {
    if (D_00002770.unk0 != 0) {
        sceKernelPowerUnlock(0);
        D_00002770.unk0 = 0;
    }
}

s32 func_00000910(void) {
    return D_00002794;
}

INCLUDE_ASM("nonmatchings/sircs", module_start);

s32 func_000009F4(void) {
    sceKernelReleaseIntrHandler(0xE);
    sceKernelDeleteSema(D_00002770.unk1C);
    sceKernelDeleteEventFlag(D_00002770.unk20);
    func_00001AB0();
    func_000008D4();
    return 0;
}

s32 module_reboot_before(void) {
    sceGpioPortSet(4);
    sceSysregSircsClkDisable();
    sceSysregSircsIoDisable();
    return 0;
}

INCLUDE_ASM("nonmatchings/sircs", sceSircsInit);

s32 sceSircsEnd(void) {
    sceKernelReleaseIntrHandler(0xE);
    sceKernelDeleteSema(D_00002770.unk1C);
    sceKernelDeleteEventFlag(D_00002770.unk20);
    func_00001AB0();
    func_000008D4();
    return 0;
}
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/sircs", func_00000BA4);
#endif

#if FW_VERSION < 282
void func_000004D8(void) {
    if (D_00002148 == 0) {
        sceKernelPowerLock(0);
        D_00002148 = 1;
    }
}

void func_00000518(void) {
    if (D_00002148 != 0) {
        sceKernelPowerUnlock(0);
        D_00002148 = 0;
    }
}

s32 func_00000554(void) {
    return D_00002160;
}

INCLUDE_ASM("nonmatchings/sircs", module_start);
#endif

#if FW_VERSION == 271
s32 func_00000634(void) {
    sceKernelReleaseIntrHandler(0xE);
    sceKernelDeleteSema(M2C_VFIELD(&D_00002148, s32, 0x1C));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00002148, s32, 0x20));
    func_00001AB0();
    func_00000518();
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_00000634(void) {
    sceKernelReleaseIntrHandler(0xE);
    sceKernelDeleteSema(M2C_VFIELD(&D_00002148, s32, 0x10));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00002148, s32, 0x14));
    func_00001AB0();
    func_00000518();
    return 0;
}
#endif

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    sceGpioPortSet(4);
    sceSysregSircsClkDisable();
    sceSysregSircsIoDisable();
    return 0;
}

INCLUDE_ASM("nonmatchings/sircs", sceSircsInit);
#endif

#if FW_VERSION == 271
s32 sceSircsEnd(void) {
    sceKernelReleaseIntrHandler(0xE);
    sceKernelDeleteSema(M2C_VFIELD(&D_00002148, s32, 0x1C));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00002148, s32, 0x20));
    func_00001AB0();
    func_00000518();
    return 0;
}
#endif

#if FW_VERSION < 271
s32 sceSircsEnd(void) {
    sceKernelReleaseIntrHandler(0xE);
    sceKernelDeleteSema(M2C_VFIELD(&D_00002148, s32, 0x10));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00002148, s32, 0x14));
    func_00001AB0();
    func_00000518();
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sircs", func_00000BA4);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sircs", func_00000C98);
#endif

INCLUDE_ASM("nonmatchings/sircs", func_00000EC8);

INCLUDE_ASM("nonmatchings/sircs", func_00001050);

INCLUDE_ASM("nonmatchings/sircs", func_000011E4);

INCLUDE_ASM("nonmatchings/sircs", func_00001390);

#if FW_VERSION < 282
s32 func_000013F0(void) {
    void *sp0;
    return __builtin_allegrex_min(sceKernelWaitEventFlag(D_00002140, 0x10U, 1, &sp0, NULL), 0);
}
#else
s32 func_000013F0(void) {
    void *sp0;
    return __builtin_allegrex_min(sceKernelWaitEventFlag(D_00002768, 0x10U, 1, &sp0, NULL), 0);
}
#endif

INCLUDE_ASM("nonmatchings/sircs", func_00001428);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/sircs", func_000014DC);
#else
s32 func_000014DC(void) {
    void *sp0;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = sceKernelWaitEventFlag(D_00002140, 0x20U, 0x20, &sp0, NULL);
    if (temp_v0 < 0) {
        var_s0 = temp_v0;
    }
    func_00001980();
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/sircs", func_00001528);

INCLUDE_ASM("nonmatchings/sircs", func_00001590);

INCLUDE_ASM("nonmatchings/sircs", func_00001624);

s32 func_00001718(void) {
    sceSysregUartIoDisable(5);
    sceSysregUartClkEnable(5);
    sceGpioPortSet(4);
    return 0;
}

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/sircs", D_00002484);

INCLUDE_RODATA("nonmatchings/sircs", D_00002488);

INCLUDE_RODATA("nonmatchings/sircs", D_000024A4);

INCLUDE_RODATA("nonmatchings/sircs", D_000024BC);

INCLUDE_RODATA("nonmatchings/sircs", D_000024DC);

INCLUDE_RODATA("nonmatchings/sircs", D_000024F4);

INCLUDE_RODATA("nonmatchings/sircs", D_0000250C);

INCLUDE_RODATA("nonmatchings/sircs", D_00002524);

INCLUDE_RODATA("nonmatchings/sircs", D_00002534);

INCLUDE_RODATA("nonmatchings/sircs", D_00002554);

INCLUDE_RODATA("nonmatchings/sircs", D_00002560);

INCLUDE_RODATA("nonmatchings/sircs", D_00002570);

INCLUDE_RODATA("nonmatchings/sircs", D_00002580);

INCLUDE_RODATA("nonmatchings/sircs", D_000025A0);

INCLUDE_RODATA("nonmatchings/sircs", D_000025BC);

INCLUDE_RODATA("nonmatchings/sircs", D_000025C4);

INCLUDE_RODATA("nonmatchings/sircs", D_0000260C);

INCLUDE_RODATA("nonmatchings/sircs", D_00002618);

INCLUDE_RODATA("nonmatchings/sircs", D_00002620);

INCLUDE_RODATA("nonmatchings/sircs", D_00002628);
#endif

INCLUDE_RODATA("nonmatchings/sircs", D_0000263C);

#if FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/sircs", D_00002648);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/sircs", D_00001F38);
#endif

INCLUDE_RODATA("nonmatchings/sircs", D_000026A0);

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/sircs", D_000026A8);
#endif

INCLUDE_RODATA("nonmatchings/sircs", D_000026BC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sircs", func_00001068);
#else
INCLUDE_ASM("nonmatchings/sircs", func_00001748);
#endif

INCLUDE_ASM("nonmatchings/sircs", func_00001830);

#if FW_VERSION == 271
s32 func_000011F8(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x4C) == 0) {
        func_000019C0();
        temp_v0 = sceKernelSetAlarm(0x64U, (s32) &func_00002044, arg0);
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_v0;
        if (temp_v0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        }
    }
    return 0;
}
#endif

#if FW_VERSION < 271
s32 func_000011F8(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        func_000019C0();
        temp_v0 = sceKernelSetAlarm(0x64U, (s32) &func_00002044, arg0);
        M2C_FIELD(arg0, s32 *, 0x48) = temp_v0;
        if (temp_v0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x48) = 0;
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_000018E4(struct Unk_func_000018E4_0 *arg0) {
    s32 temp_v0;

    if (arg0->unk4C == 0) {
        func_000019C0();
        temp_v0 = sceKernelSetAlarm(0x64U, (s32) &func_00002044, arg0);
        arg0->unk4C = temp_v0;
        if (temp_v0 < 0) {
            arg0->unk4C = 0;
        }
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sircs", func_0000193C);

INCLUDE_ASM("nonmatchings/sircs", func_00001980);

INCLUDE_ASM("nonmatchings/sircs", func_000019C0);

INCLUDE_ASM("nonmatchings/sircs", func_00001A14);

#if FW_VERSION < 282
s32 func_00001394(void) {
    return D_00002100;
}
#endif

#if FW_VERSION == 271
void func_00001A80(s32 arg0) {
    D_00002728 = arg0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sircs", func_0000139C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/sircs", func_000013A0);
#endif

#if FW_VERSION >= 282
s32 func_00001A74(void) {
    return D_00002724;
}

void func_00001A80(s32 arg0) {
    D_00002728 = arg0;
}

s32 func_00001A8C(void) {
    sceIoAddDrv(&D_000026A8);
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sircs", func_00001AB0);
#else
s32 func_00001AB0(void) {
    sceIoDelDrv(D_000026A8);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sircs", func_00001AD8);

#if FW_VERSION < 282
s32 func_000014F8(void) {
    func_00001D5C();
    sceKernelUnregisterSysEventHandler(&D_00002050);
    return 0;
}

void func_00001524(void) {
    func_00001C34();
}

void func_00001540(void) {
    func_00001D5C();
}
#else
s32 func_00001B24(void) {
    func_00001D5C();
    sceKernelUnregisterSysEventHandler(&D_000026E0);
    return 0;
}

void func_00001B50(void) {
    func_00001C34();
}

void func_00001B6C(void) {
    func_00001D5C();
}
#endif

INCLUDE_ASM("nonmatchings/sircs", func_00001B88);

INCLUDE_ASM("nonmatchings/sircs", func_00001BA8);

INCLUDE_ASM("nonmatchings/sircs", func_00001BC8);

INCLUDE_ASM("nonmatchings/sircs", func_00001C34);

INCLUDE_ASM("nonmatchings/sircs", func_00001D5C);

INCLUDE_ASM("nonmatchings/sircs", func_00001DDC);

INCLUDE_ASM("nonmatchings/sircs", func_00001EEC);

INCLUDE_ASM("nonmatchings/sircs", func_00002018);

INCLUDE_ASM("nonmatchings/sircs", func_00002044);

INCLUDE_ASM("nonmatchings/sircs", func_00002140);
