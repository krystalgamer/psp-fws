/* cflags: -O2 -frename-registers */
#include "common.h"
#include "sircs_decls.h"

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/sircs", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/sircs", sceSircs_driver_71EEF62D);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sircs", func_00000294);

INCLUDE_ASM("nonmatchings/sircs", func_000002E8);
#else
INCLUDE_ASM("nonmatchings/sircs", sceSircs_driver_83381633);

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
    InterruptManagerForKernel_F987B1F0(0xE);
    sceKernelDeleteSema(D_00002770.unk1C);
    sceKernelDeleteEventFlag(D_00002770.unk20);
    func_00001AB0();
    func_000008D4();
    return 0;
}

s32 module_reboot_before(void) {
    sceGpio_driver_310F0CCF(4);
    sceSysreg_driver_20388C9E();
    sceSysreg_driver_26FA0928();
    return 0;
}

INCLUDE_ASM("nonmatchings/sircs", sceSircs_driver_62411801);

s32 sceSircs_driver_19155A2F(void) {
    InterruptManagerForKernel_F987B1F0(0xE);
    sceKernelDeleteSema(D_00002770.unk1C);
    sceKernelDeleteEventFlag(D_00002770.unk20);
    func_00001AB0();
    func_000008D4();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sircs", func_00000BA4);

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

s32 module_reboot_before(void) {
    sceGpio_driver_310F0CCF(4);
    sceSysreg_driver_20388C9E();
    sceSysreg_driver_26FA0928();
    return 0;
}

INCLUDE_ASM("nonmatchings/sircs", sceSircs_driver_62411801);

s32 sceSircs_driver_19155A2F(void) {
    InterruptManagerForKernel_F987B1F0(0xE);
    sceKernelDeleteSema(M2C_VFIELD(&D_00002148, s32, 0x10));
    sceKernelDeleteEventFlag(M2C_VFIELD(&D_00002148, s32, 0x14));
    func_00001AB0();
    func_00000518();
    return 0;
}
#else
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

INCLUDE_ASM("nonmatchings/sircs", func_000014DC);

INCLUDE_ASM("nonmatchings/sircs", func_00001528);

INCLUDE_ASM("nonmatchings/sircs", func_00001590);

INCLUDE_ASM("nonmatchings/sircs", func_00001624);

s32 func_00001718(void) {
    sceSysreg_driver_BB823481(5);
    sceSysreg_driver_7725CA08(5);
    sceGpio_driver_310F0CCF(4);
    return 0;
}

INCLUDE_RODATA("nonmatchings/sircs", D_0000263C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/sircs", D_00002648);
#endif

INCLUDE_RODATA("nonmatchings/sircs", D_000026A0);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/sircs", D_000026A8);
#endif

INCLUDE_RODATA("nonmatchings/sircs", D_000026BC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sircs", func_00001068);
#else
INCLUDE_ASM("nonmatchings/sircs", func_00001748);
#endif

INCLUDE_ASM("nonmatchings/sircs", func_00001830);

#if FW_VERSION < 282
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
#else
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

INCLUDE_ASM("nonmatchings/sircs", func_000013A0);
#else
s32 func_00001A74(void) {
    return D_00002724;
}

void func_00001A80(s32 arg0) {
    D_00002728 = arg0;
}

s32 func_00001A8C(void) {
    IoFileMgrForKernel_8E982A74(&D_000026A8);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sircs", func_00001AB0);

INCLUDE_ASM("nonmatchings/sircs", func_00001AD8);

#if FW_VERSION < 282
s32 func_000014F8(void) {
    func_00001D5C();
    sceSysEventForKernel_D7D3FDCD(&D_00002050);
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
    sceSysEventForKernel_D7D3FDCD(&D_000026E0);
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
