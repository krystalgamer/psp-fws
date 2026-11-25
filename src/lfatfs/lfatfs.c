/* cflags: -O2 -frename-registers */
#include "common.h"
#include "lfatfs_decls.h"

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C4EC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C94C);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00000000);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CAC4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C9C4);
#endif

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CA1C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CA28);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CB3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_000005EC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C5B4);
#endif

#if FW_VERSION == 250
s32 func_000006AC(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0x200) {

    } else {
        temp_v0 = sceKernelWaitSema(D_0000EC14, 1, NULL);
        if (temp_v0 != 0) {
            KDebugForKernel_84F370BC(&D_0000C5B4, "_sceLfatfsSysEventHandler", temp_v0);
        } else {
            func_000005EC();
            sceKernelSignalSema(D_0000EC14, 1);
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_000006AC(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0x200) {

    } else {
        temp_v0 = sceKernelWaitSema(D_0000E554, 1, NULL);
        if (temp_v0 != 0) {
            KDebugForKernel_84F370BC(&D_0000C5B4, "_sceLfatfsSysEventHandler", temp_v0);
        } else {
            func_000005EC();
            sceKernelSignalSema(D_0000E554, 1);
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000006AC(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0x200) {

    } else {
        temp_v0 = sceKernelWaitSema(D_0000E094, 1, NULL);
        if (temp_v0 != 0) {
            KDebugForKernel_84F370BC(&D_0000C5B4, "_sceLfatfsSysEventHandler", temp_v0);
        } else {
            func_000005EC();
            sceKernelSignalSema(D_0000E094, 1);
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CA38);

INCLUDE_ASM("nonmatchings/lfatfs", func_000004C4);

s32 func_00000584(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0x200) {

    } else {
        temp_v0 = sceKernelWaitSema(D_0000EB24, 1, NULL);
        if (temp_v0 != 0) {
            KDebugForKernel_84F370BC("lfatfs.c:%s:sceKernelWaitSema -> 0x%08x\n", "_sceLfatfsSysEventHandler", temp_v0);
        } else {
            func_000004C4();
            sceKernelSignalSema(D_0000EB24, 1);
        }
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00000604);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD10);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD18);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD24);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD2C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD34);

INCLUDE_ASM("nonmatchings/lfatfs", module_start);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD94);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CEA0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CEAC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_00000C00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/lfatfs", sceLFatFs_driver_933F6E29);

s32 sceLFatFs_driver_8F0560E0(void) {
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD9C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDA8);
#endif

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDB4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDBC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDC8);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/lfatfs", func_00000C1C);
#endif

#if FW_VERSION != 250
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CE20);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CE50);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", syslib_ADF12745);

INCLUDE_ASM("nonmatchings/lfatfs", sceLFatFs_driver_933F6E29);

s32 sceLFatFs_driver_8F0560E0(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lfatfs", module_reboot_before);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C990);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C9C0);

INCLUDE_ASM("nonmatchings/lfatfs", syslib_ADF12745);

INCLUDE_ASM("nonmatchings/lfatfs", sceLFatFs_driver_933F6E29);

s32 sceLFatFs_driver_8F0560E0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lfatfs", func_00005DC0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00000EF8);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00000FF8);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001258);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/lfatfs", func_00000F4C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001134);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00001620);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000168C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001918);

s32 func_000019B4(void *arg0) {
    void **temp_v0;
    void *temp_a1;
    void *temp_a2;

    if (arg0 != NULL) {
        temp_a2 = M2C_FIELD(arg0, void **, 8);
        temp_a1 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_a2, s32 *, 8) = (s32) (M2C_FIELD(temp_a2, s32 *, 8) - 1);
        if (temp_a1 != NULL) {
            M2C_FIELD(temp_a1, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
        } else {
            D_0000E810 = M2C_FIELD(arg0, void ***, 4);
        }
        temp_v0 = M2C_FIELD(arg0, void ***, 4);
        if (temp_v0 == NULL) {
            D_0000E80C = temp_a1;
        } else {
            *temp_v0 = temp_a1;
        }
        M2C_FIELD(arg0, void **, 0) = (void *) D_0000E814;
        D_0000E814 = arg0;
    }
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_000018E4);

s32 func_00001980(struct Unk_func_00001980_0 *arg0) {
    void **temp_v0;
    void *temp_a1;
    struct Unk_func_00001980_temp_a2 *temp_a2;

    if (arg0 != NULL) {
        temp_a2 = arg0->unk8;
        temp_a1 = arg0->unk0;
        temp_a2->unk8 = (s32) (temp_a2->unk8 - 1);
        if (temp_a1 != NULL) {
            M2C_FIELD(temp_a1, void ***, 4) = (void **) arg0->unk4;
        } else {
            D_0000EDB0 = arg0->unk4;
        }
        temp_v0 = arg0->unk4;
        if (temp_v0 == NULL) {
            D_0000EDAC = temp_a1;
        } else {
            *temp_v0 = temp_a1;
        }
        arg0->unk0 = (void *) D_0000EDB4;
        D_0000EDB4 = arg0;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_000019E8);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001AF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001C30);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CB64);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D09C_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001C6C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001CC0);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/lfatfs", func_000017FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 func_00001C24(void) {
    sceSysEventForKernel_CD9E4BB5(&D_0000E050);
    return 0;
}

s32 func_00001C48(void) {
    sceSysEventForKernel_D7D3FDCD(&D_0000E050);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00001920(void) {
    return 0;
}

s32 func_00001928(void) {
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001AD0);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001BFC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CF1C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001C8C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001CE0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CF5C);
#endif

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CF6C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CF9C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001D34);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001E48);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001F30);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D13C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001BE8);
#else
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CFEC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00002034);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_0000217C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001DF4);
#else
INCLUDE_ASM("nonmatchings/lfatfs", func_000022B8);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_0000241C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001FF4);
#else
INCLUDE_ASM("nonmatchings/lfatfs", func_00002534);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_0000265C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00002774);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/lfatfs", func_000022A4);
#endif

#if FW_VERSION == 250
s32 func_000022A4(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = D_0000EC14;
    sceKernelPowerLock(0);
    temp_v0 = sceKernelWaitSema(temp_s0, 1, NULL);
    if (temp_v0 != 0) {
        KDebugForKernel_84F370BC(&D_0000C5B4, &D_0000CF6C, temp_v0);
        sceKernelPowerUnlock(0);
        KDebugForKernel_84F370BC(&D_0000CF9C, "UFatDclose", temp_v0);
        var_v0 = 0x80010005;
    } else {
        func_00009150();
        func_000019B4(M2C_FIELD(arg0, void **, 0x10));
        func_00009150();
        sceKernelSignalSema(D_0000EC14, 1);
        sceKernelPowerUnlock(0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 201
s32 func_000022A4(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = D_0000E554;
    sceKernelPowerLock(0);
    temp_v0 = sceKernelWaitSema(temp_s0, 1, NULL);
    if (temp_v0 != 0) {
        KDebugForKernel_84F370BC(&D_0000C5B4, &D_0000CF6C, temp_v0);
        sceKernelPowerUnlock(0);
        KDebugForKernel_84F370BC(&D_0000CF9C, "UFatDclose", temp_v0);
        var_v0 = 0x80010005;
    } else {
        func_00009150();
        func_000019B4(M2C_FIELD(arg0, void **, 0x10));
        func_00009150();
        sceKernelSignalSema(D_0000E554, 1);
        sceKernelPowerUnlock(0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000022A4(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    void **temp_a2;
    void **temp_v0_2;
    void *temp_a0;
    void *temp_a1;
    void *temp_a3;

    temp_s0 = D_0000E094;
    sceKernelPowerLock(0);
    temp_v0 = sceKernelWaitSema(temp_s0, 1, NULL);
    if (temp_v0 != 0) {
        KDebugForKernel_84F370BC(&D_0000C5B4, &D_0000CF6C, temp_v0);
        sceKernelPowerUnlock(0);
        KDebugForKernel_84F370BC(&D_0000CF9C, "UFatDclose", temp_v0);
        var_v0 = 0x80010005;
    } else {
        func_00009150();
        temp_a0 = M2C_FIELD(arg0, void **, 0x10);
        if (temp_a0 != NULL) {
            temp_a3 = M2C_FIELD(temp_a0, void **, 8);
            temp_a1 = M2C_FIELD(temp_a0, void **, 0);
            temp_a2 = M2C_FIELD(temp_a0, void ***, 4);
            M2C_FIELD(temp_a3, s32 *, 8) = (s32) (M2C_FIELD(temp_a3, s32 *, 8) - 1);
            if (temp_a1 != NULL) {
                M2C_FIELD(temp_a1, void ***, 4) = temp_a2;
            } else {
                D_0000D610 = temp_a2;
            }
            temp_v0_2 = M2C_FIELD(temp_a0, void ***, 4);
            if (temp_v0_2 != NULL) {
                *temp_v0_2 = temp_a1;
            } else {
                D_0000D60C = temp_a1;
            }
            M2C_FIELD(temp_a0, void **, 0) = (void *) D_0000D614;
            D_0000D614 = temp_a0;
        }
        func_00009150();
        sceKernelSignalSema(D_0000E094, 1);
        sceKernelPowerUnlock(0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
s32 func_0000286C(struct Unk_func_0000286C_0 *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = D_0000EB24;
    sceKernelPowerLock(0);
    temp_v0 = sceKernelWaitSema(temp_s0, 1, NULL);
    if (temp_v0 != 0) {
        KDebugForKernel_84F370BC(&D_0000CF6C, &D_0000CF5C, temp_v0);
        sceKernelPowerUnlock(0);
        KDebugForKernel_84F370BC(&D_0000CF9C, "UFatDclose", temp_v0);
        var_v0 = 0x80010005;
    } else {
        func_00009F04();
        func_00001980(arg0->unk10);
        func_00009F04();
        sceKernelSignalSema(D_0000EB24, 1);
        sceKernelPowerUnlock(0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_0000293C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00002A30);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00002578);
#else
INCLUDE_ASM("nonmatchings/lfatfs", func_00002B34);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00002C6C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00002CAC);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lfatfs", func_00002D18);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_000026F0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00002CE4);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00002F6C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00002DAC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_000028E8(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION < 201
s32 func_000028E8(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00003074);

s32 func_000031DC(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/lfatfs", func_000031E8);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_000033EC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00003580);

INCLUDE_ASM("nonmatchings/lfatfs", func_00003674);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000372C);

INCLUDE_ASM("nonmatchings/lfatfs", func_000037B4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000379C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", func_000035AC);
#endif

#if FW_VERSION < 282
void func_00002D98(void *arg0) {
    func_00003214(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}

void func_00002DC4(s32 arg0) {
    func_0000362C(arg0);
}

void func_00002DE0(void *arg0) {
    func_0000168C(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x10), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00002E0C(void *arg0) {
    func_00004458(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
}
#endif

#if FW_VERSION == 100
void func_00002E0C(void *arg0) {
    func_0000372C_v100(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00003890);

void func_00003AA0(struct Unk_func_00003AA0_0 *arg0) {
    func_000042D8(arg0->unk0, arg0->unk4, arg0->unk8, arg0->unkC);
}

void func_00003ACC(s32 arg0) {
    func_000045C8(arg0);
}

void func_00003AE8(struct Unk_func_00003AE8_0 *arg0) {
    func_0000168C(arg0->unk0->unk10, arg0->unk4, arg0->unk8, 0);
}

void func_00003B14(struct Unk_func_00003B14_0 *arg0) {
    func_0000466C(arg0->unk0, arg0->unk4, arg0->unk8);
}
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00003B3C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00003B70);

#if FW_VERSION < 282
void func_00002E88(void *arg0) {
    func_00003AD8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
}

void func_00002EB0(void *arg0) {
    func_00003F94(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}

void func_00002ED0(void *arg0) {
    func_00004258(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}

void func_00002EF0(void *arg0) {
    func_00004398(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}

void func_00002F10(void *arg0) {
    func_00004510(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/lfatfs", func_00002F38);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
void func_00002F38(void *arg0) {
    func_0000464C(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}
#endif

#if FW_VERSION == 282
void func_00003B90(struct Unk_func_00003B90_0 *arg0) {
    func_00004CFC(arg0->unk0, arg0->unk4, arg0->unk8);
}

void func_00003BB8(struct Unk_func_00003BB8_0 *arg0) {
    func_00005110(arg0->unk0, arg0->unk4);
}

void func_00003BD8(struct Unk_func_00003BD8_0 *arg0) {
    func_00005388(arg0->unk0, arg0->unk4);
}

void func_00003BF8(struct Unk_func_00003BF8_0 *arg0) {
    func_00005470(arg0->unk0, arg0->unk4);
}

void func_00003C18(struct Unk_func_00003C18_0 *arg0) {
    func_000055FC(arg0->unk0, arg0->unk4, arg0->unk8);
}

void func_00003C40(struct Unk_func_00003C40_0 *arg0) {
    func_00005708(arg0->unk0, arg0->unk4, arg0->unk8, arg0->unkC);
}
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00003C6C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00003CA0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDA8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDD4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDE0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CE04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CBC8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CBD4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CBE4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00003CC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00003DB8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00003A84);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00004180);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004268);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D32C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D358);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00003214);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000362C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00004458);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_000046C4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004754);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/lfatfs", func_0000372C_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00004918);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004BA8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00003AD8);
#endif

#if FW_VERSION < 152 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D218);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D244);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00003F94);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004258);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004398);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004510);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000464C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005D18);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006600);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lfatfs", func_00006768);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", func_00006600_v201);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/lfatfs", func_00005678);

INCLUDE_ASM("nonmatchings/lfatfs", func_000031E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00005BE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/lfatfs", func_00005DC0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00005EC4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005F7C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006008);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00006894);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00006CD4);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/lfatfs", func_00006098);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/lfatfs", func_000061A8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_000065DC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006718);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_000071FC);

INCLUDE_ASM("nonmatchings/lfatfs", func_000074F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", func_0000688C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006BD4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00006DFC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00007AF8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/lfatfs", func_00006FB8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00007274);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00007C04);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/lfatfs", func_00007F24);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/lfatfs", func_000073B0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D250);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D274);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D284);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D290);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D2A0);

INCLUDE_ASM("nonmatchings/lfatfs", func_00003CC0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00003DB8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_000075C8);

INCLUDE_ASM("nonmatchings/lfatfs", func_000077A4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007884);
#else
INCLUDE_ASM("nonmatchings/lfatfs", func_00003EA4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004180);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004268);

INCLUDE_ASM("nonmatchings/lfatfs", func_000042D8);

INCLUDE_ASM("nonmatchings/lfatfs", func_000045C8);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000466C);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_000047E4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004874);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00004918);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004BA8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004CFC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005110);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005388);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005470);

INCLUDE_ASM("nonmatchings/lfatfs", func_000055FC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005708);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005D18);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006600);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006708);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000675C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006940);

INCLUDE_ASM("nonmatchings/lfatfs", func_000069F8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006A84);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006B14);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006C18);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007054);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007188);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007304);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007600);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007774);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007934);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007BC8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007D00);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007EB4);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000808C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000816C);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00008504);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000860C);

#if FW_VERSION < 282
s32 func_00007F58(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000862C);

INCLUDE_ASM("nonmatchings/lfatfs", func_000086C4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", func_00007F6C);
#endif

#if FW_VERSION == 282
s32 func_00008718(struct Unk_func_00008718_0 *arg0) {
    return (arg0->unk2 << 8) | arg0->unk3;
}

INCLUDE_ASM("nonmatchings/lfatfs", func_0000872C);

INCLUDE_ASM("nonmatchings/lfatfs", func_000087C4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D874);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C56C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00008794);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", func_00008038);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008130);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00008894);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00008A68);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D18C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D414);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D41C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D438);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D468);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D474);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00008AC8);
#endif

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D8C0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D4F4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008A74);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DB44);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D72C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D8EC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D8F4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D910);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D940);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D94C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00008AE4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", func_0000840C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00008E38);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D22C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D23C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D264);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DBE8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008E24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00008694);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lfatfs", func_000090B4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DDB0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DDDC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DDF4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DE08);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DE38);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DE58);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DE80);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009270);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009600);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000994C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009B78);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009C74);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
void func_000093E8(void) {

}

void func_000093F0(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D6D0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D6E4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D718);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D724);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lfatfs", func_00009D64);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D730);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008E38_v201);
#endif

#if FW_VERSION == 152
void func_000093F8(void) {

}
#endif

#if FW_VERSION < 201
void func_00008800(void) {
    func_00008B14(0xC);
}

s32 func_0000881C(s32 arg0) {
    SysMemForKernel_7B749390(D_0000D984, arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lfatfs", func_00008848);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00009514);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000955C);
#endif

#if FW_VERSION == 100
s32 func_00008914(void) {
    s32 var_v1;

    var_v1 = 0;
    if ((&D_0000EED0 != NULL) && (M2C_FIELD(&D_0000EED0, s32 *, 0x1B4) != 0)) {
        var_v1 = func_00008C9C((s32) &D_0000EED0);
    }
    return var_v1;
}

s32 func_00008958(void) {
    func_000097A8();
    IoFileMgrForKernel_8E982A74(&D_0000D72C);
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00008B74);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D9CC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D9FC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA0C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA1C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA3C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA48);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA50);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008D28);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA98);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DAA8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DAD0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DAEC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008DC0);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008EDC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009050);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DCB4);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DCE0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DCF8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DD0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D360);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00009150);
#endif

#if FW_VERSION == 250
s32 func_000091C0(void) {
    IoFileMgrForKernel_8E982A74(&D_0000D72C);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_000091C0(void) {
    func_000097A8();
    IoFileMgrForKernel_8E982A74(&D_0000D72C);
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DD3C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DD5C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DD84);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000920C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000959C);

INCLUDE_ASM("nonmatchings/lfatfs", func_000098E8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009B30);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009C2C);

void func_00009D0C(void) {
}

void func_00009D14(void) {
}

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DEE8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DEFC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DF10);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DF44);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DF50);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009D1C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009E74);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009EBC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009F04);

s32 func_00009F74(void) {
    IoFileMgrForKernel_8E982A74(&D_0000DA50);
    return 0;
}

INCLUDE_ASM("nonmatchings/lfatfs", func_00009F98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00009F98(void) {
    s32 *temp_v1;

    temp_v1 = "del_lflash_driver";
    KDebugForKernel_84F370BC(&D_0000D22C, temp_v1, (s32) temp_v1);
    IoFileMgrForKernel_C7F35804(D_0000D72C);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00009F98(void) {
    s32 *temp_v1;

    temp_v1 = "del_lflash_driver";
    KDebugForKernel_84F370BC("lflash.c:%s:()\n", temp_v1, (s32) temp_v1);
    IoFileMgrForKernel_C7F35804(D_0000D72C);
    return 0;
}
#endif

#if FW_VERSION < 152
void func_000089C0(void) {

}

void func_000089C8(void) {

}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_000089D0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", func_00008B14);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DB20);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A01C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", func_000092B4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009354);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", func_00008B88);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_00008C9C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DF88);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009FD4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E03C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E068);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E0AC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E0B8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E0C4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E0F4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E100);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A2D4);

s32 func_0000A320(void) {
    return 0x80010086;
}

s32 func_0000A32C(void) {
    return 0x80010086;
}

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E130);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A338);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A36C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E160);

s32 func_0000A3A0(struct Unk_func_0000A3A0_0 *arg0) {
    KDebugForKernel_84F370BC(&D_0000E160, "df_dclose", **arg0->unk8);
    return 0x80010086;
}

s32 func_0000A3DC(struct Unk_func_0000A3DC_0 *arg0) {
    KDebugForKernel_84F370BC(&D_0000E160, "df_dread", **arg0->unk8);
    return 0x80010086;
}

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A418);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A460);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A494);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A4C8);

s32 func_0000A4FC(void) {
    return 0x80010086;
}

s32 func_0000A508(void) {
    return 0x80010086;
}

s32 func_0000A514(void) {
    return 0x80010086;
}

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A520);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A5C0);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A658);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A6D8);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A7B4);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000AA60);
#endif

#if FW_VERSION != 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000AC78);
#endif

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E5D8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E5F8);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E194);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E1A0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E1AC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E1DC);
#else
INCLUDE_ASM("nonmatchings/lfatfs", func_0000AF14);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", func_00009BF4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", func_0000945C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A314);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/lfatfs", func_000095A4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_000097A8);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CB54);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_00009970);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A308);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", func_00009A20);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_00009B40);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A4DC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/lfatfs", func_00009C38);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD6C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_00009DB0);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009E40);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A7E4);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A8FC);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A9EC);
#endif

#if FW_VERSION < 201
void func_00009F94(s32 arg0) {
    s32 var_a1;
    s8 *temp_v0;

    var_a1 = 0;
    do {
        temp_v0 = arg0 + var_a1;
        var_a1 += 1;
        *temp_v0 = -1;
    } while (var_a1 < 0xC);
}

INCLUDE_ASM("nonmatchings/lfatfs", func_00009FB8);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A09C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A1D8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A39C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A7AC);
#endif

#if FW_VERSION < 152
s32 func_0000A7AC(void) {
    return 0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A7B4);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A85C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A9C4);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000AAF8);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000AC4C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000ACF0(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION == 152
s32 func_0000ACF0(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000AD24(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION == 152
s32 func_0000AD24(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D03C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/lfatfs", func_0000ACF0);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000AD24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000AD58);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000AD8C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D084);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000ADC0(void *arg0) {
    KDebugForKernel_84F370BC(&D_0000D084, "df_dclose", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x80010086;
}
#endif

#if FW_VERSION < 201
s32 func_0000ADC0(void *arg0) {
    KDebugForKernel_84F370BC(&D_0000D084, "df_dclose", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000ADFC(void *arg0) {
    KDebugForKernel_84F370BC(&D_0000D084, "df_dread", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x80010086;
}
#endif

#if FW_VERSION < 201
s32 func_0000ADFC(void *arg0) {
    KDebugForKernel_84F370BC(&D_0000D084, "df_dread", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x8001B000;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000AE38);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000AE88);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000AEBC);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000AEF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000AF24(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION < 201
s32 func_0000AF24(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000AF30(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION < 201
s32 func_0000AF30(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000AF3C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000AF98(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A568);
#endif

#if FW_VERSION < 201
s32 func_0000AF98(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D14C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B8D4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E35C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E388);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E3CC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E3D8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E3E4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E414);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", func_0000AFA4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B1AC);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B22C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A720);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A7FC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D27C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BBC4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000ACC0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E6C0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E6E0);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000AF14);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B1D8);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B370);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B5E4);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B81C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B8C8);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B978);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BA34);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BB88);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BC18);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BD38);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BE50);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BF40);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000C350);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BD64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B2AC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B448);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B190);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B328);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B4E8);
#endif

#if FW_VERSION != 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B720);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B7CC);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B87C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B938);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BA8C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BB1C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BC3C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BD54);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000BE44);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000C254);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000C300);
#endif
