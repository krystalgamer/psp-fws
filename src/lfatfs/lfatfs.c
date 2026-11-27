/* cflags[100]: -O2 -frename-registers -fno-builtin */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "lfatfs_decls.h"

#if FW_VERSION >= 350
s32 func_00000000(s32 arg0) {
    if (arg0 != 0x200) {

    } else if (sceKernelLockMutex(D_0000E3D4, 1, NULL) == 0) {
        func_000004C4();
        sceKernelUnlockMutex(D_0000E3D4, 1);
    }
    return 0;
}
#endif

#if FW_VERSION == 340
s32 func_00000000_v340(s32 arg0) {
    if (arg0 != 0x200) {

    } else if (sceKernelLockMutex(D_0000E3D4, 1, NULL) == 0) {
        func_000004C4();
        sceKernelUnlockMutex(D_0000E3D4, 1);
    }
    return 0;
}
#endif

#if FW_VERSION == 330
s32 func_00000000_v330(s32 arg0) {
    if (arg0 != 0x200) {

    } else if (sceKernelLockMutex(D_0000E3D4, 1, NULL) == 0) {
        func_000004C4();
        sceKernelUnlockMutex(D_0000E3D4, 1);
    }
    return 0;
}
#endif

#if FW_VERSION == 311
s32 func_00000000_v311(s32 arg0) {
    if (arg0 != 0x200) {

    } else if (sceKernelLockMutex(D_0000E3D4, 1, NULL) == 0) {
        func_000004C4();
        sceKernelUnlockMutex(D_0000E3D4, 1);
    }
    return 0;
}
#endif

#if FW_VERSION == 310
s32 func_00000000_v310(s32 arg0) {
    if (arg0 != 0x200) {

    } else if (sceKernelLockMutex(D_0000E3D4, 1, NULL) == 0) {
        func_000004C4();
        sceKernelUnlockMutex(D_0000E3D4, 1);
    }
    return 0;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00000060);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_000000F0);

INCLUDE_ASM("nonmatchings/lfatfs", func_000004C4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B264);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B268);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B27C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B29C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B2B4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B2CC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B2E4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B2F8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B30C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B320);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B338);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B350);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B368);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B3A0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B3B4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B3D4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B3DC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B3E4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B410);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B418);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B43C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B498);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B4D4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B4D8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B4E0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B4E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C4EC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C94C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00000658);
#else
INCLUDE_ASM("nonmatchings/lfatfs", func_00000000);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CAC4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C9C4);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CA1C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CA28);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CB3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_000005EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C5B4);
#endif

#if FW_VERSION == 271
s32 func_000006AC(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0x200) {

    } else {
        temp_v0 = sceKernelWaitSema(D_0000EC14, 1, NULL);
        if (temp_v0 != 0) {
            Kprintf("lfatfs.c:%s:sceKernelWaitSema -> 0x%08x\n", "_sceLfatfsSysEventHandler", temp_v0);
        } else {
            func_000005EC();
            sceKernelSignalSema(D_0000EC14, 1);
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_000006AC(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0x200) {

    } else {
        temp_v0 = sceKernelWaitSema(D_0000EC14, 1, NULL);
        if (temp_v0 != 0) {
            Kprintf(D_0000C5B4, "_sceLfatfsSysEventHandler", temp_v0);
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
            Kprintf(D_0000C5B4, "_sceLfatfsSysEventHandler", temp_v0);
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
            Kprintf(D_0000C5B4, "_sceLfatfsSysEventHandler", temp_v0);
        } else {
            func_000005EC();
            sceKernelSignalSema(D_0000E094, 1);
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CA38);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_000004C4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_00000584(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0x200) {

    } else {
        temp_v0 = sceKernelWaitSema(D_0000E8F4, 1, NULL);
        if (temp_v0 != 0) {
            Kprintf("lfatfs.c:%s:sceKernelWaitSema -> 0x%08x\n", "_sceLfatfsSysEventHandler", temp_v0);
        } else {
            func_000004C4();
            sceKernelSignalSema(D_0000E8F4, 1);
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00000584(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0x200) {

    } else {
        temp_v0 = sceKernelWaitSema(D_0000EB24, 1, NULL);
        if (temp_v0 != 0) {
            Kprintf("lfatfs.c:%s:sceKernelWaitSema -> 0x%08x\n", "_sceLfatfsSysEventHandler", temp_v0);
        } else {
            func_000004C4();
            sceKernelSignalSema(D_0000EB24, 1);
        }
    }
    return 0;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00000604);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD10);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD18);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD24);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD2C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD34);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", module_start);

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CF8C);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD94);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CEA0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CEAC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", assign_thread);
#endif

#if FW_VERSION == 100
s32 sceLfatfsWaitReady(void) {
    s32 ret = 0;

    if (D_0000D360 >= 0) {
        ret = sceKernelWaitThreadEnd(D_0000D360, NULL);
    }
    return ret;
}

s32 sceLfatfsStop(void) {
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD9C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDA8);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDB4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDBC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDC8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00000C48);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/lfatfs", func_00000C1C);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CE20);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CE50);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", module_reboot_phase);

INCLUDE_ASM("nonmatchings/lfatfs", sceLfatfsWaitReady);

s32 sceLfatfsStop(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_reboot_before(void) {
    s32 ret;

    ret = sceIoUnassign(D_0000CD94);
    if (ret < 0) {
        Kprintf("lfatfs.c:%s:sceIoUnassign(%s) failed 0x%08x\n", "_sceLfatfsRebootBefore", D_0000CD94, ret);
    }
    ret = sceIoUnassign(D_0000CDB4);
    if (ret < 0) {
        Kprintf("lfatfs.c:%s:sceIoUnassign(%s) failed 0x%08x\n", "_sceLfatfsRebootBefore", D_0000CDB4, ret);
    }
    func_00008914();
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 module_reboot_before(void) {
    s32 ret;

    func_000005EC();
    ret = sceIoUnassign(D_0000CD94);
    if (ret < 0) {
        Kprintf("lfatfs.c:%s:sceIoUnassign(%s) failed 0x%08x\n", "_sceLfatfsRebootBefore", D_0000CD94, ret);
    }
    ret = sceIoUnassign(D_0000CDB4);
    if (ret < 0) {
        Kprintf("lfatfs.c:%s:sceIoUnassign(%s) failed 0x%08x\n", "_sceLfatfsRebootBefore", D_0000CDB4, ret);
    }
    func_00009150();
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", module_reboot_before);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C990);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C9C0);

INCLUDE_ASM("nonmatchings/lfatfs", module_reboot_phase);

s32 sceLfatfsWaitReady(void) {
    s32 ret = 0;

    if (D_0000E0A0 >= 0) {
        ret = sceKernelWaitThreadEnd(D_0000E0A0, NULL);
    }
    return ret;
}

s32 sceLfatfsStop(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
s32 module_reboot_before(void) {
    func_000005EC();
    sceIoUnassign(&D_0000CD94);
    sceIoUnassign(&D_0000CDB4);
    func_00009150();
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00005DC0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00000EF8);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00000FF8);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001258);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/lfatfs", func_00000F4C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001134);
#endif

s32 func_00001620(const u8 *a, const char *b) {
    s32 i;

    for (i = 0; i < 8; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    for (i = 0; i < 3; i++) {
        if (a[i + 8] != b[i + 8]) {
            return 0;
        }
    }
    return 1;
}

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

#if FW_VERSION >= 282
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
    sceKernelRegisterSysEventHandler(&D_0000E050);
    return 0;
}

s32 func_00001C48(void) {
    sceKernelUnregisterSysEventHandler(&D_0000E050);
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

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001AD0);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001BFC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lfatfs", func_00001C8C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001CE0);

INCLUDE_ASM("nonmatchings/lfatfs", UFatOpen);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00001C94);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001D10);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CF1C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CFE0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CFEC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D028);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00001C8C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00001CE0);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 282 && FW_VERSION < 310)
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CF5C);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CF6C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CF84);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CF9C);
#endif

#if FW_VERSION == 100
s32 UFatOpen(SceIoIob *iob, char *file, s32 flags, SceMode mode) {
    s32 args[4];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatOpen", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)file;
    args[2] = flags;
    args[3] = mode;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00002D98, args);
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 UFatOpen(SceIoIob *iob, char *file, s32 flags, SceMode mode) {
    s32 args[4];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatOpen", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)file;
    args[2] = flags;
    args[3] = mode;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002D98, args);
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/lfatfs", UFatOpen);
#endif

#if FW_VERSION == 100
s32 UFatClose(SceIoIob *iob) {
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatClose", ret);
        return 0x80010005;
    }
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00002DC4, iob);
    func_00008914();
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 UFatClose(SceIoIob *iob) {
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatClose", ret);
        return 0x80010005;
    }
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002DC4, iob);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", UFatClose);
#endif

#if FW_VERSION == 100
s32 UFatRead(SceIoIob *iob, void *data, SceSize size) {
    s32 args[3];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatRead", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)data;
    args[2] = (s32)size;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00002DE0, args);
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 UFatRead(SceIoIob *iob, void *data, SceSize size) {
    s32 args[3];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatRead", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)data;
    args[2] = (s32)size;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002DE0, args);
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", UFatRead);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D13C);
#endif

#if FW_VERSION == 100
s32 UFatWrite(SceIoIob *iob, const void *data, SceSize size) {
    s32 args[3];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatWrite", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)data;
    args[2] = (s32)size;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00002E0C, args);
    func_00008914();
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 UFatWrite(SceIoIob *iob, const void *data, SceSize size) {
    s32 args[3];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatWrite", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)data;
    args[2] = (s32)size;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002E0C, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION == 152
s32 UFatWrite(SceIoIob *iob, const void *data, SceSize size) {
    s32 args[3];
    s32 ret;

    if (iob->i_unit == 0 && func_00009514(iob) != 0) {
        ret = 0x8001000D;
        Kprintf(D_0000D13C, "UFatWrite", ret);
        return ret;
    }
    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatWrite", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)data;
    args[2] = (s32)size;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002E0C, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", UFatWrite);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CFEC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00002034);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00001EC8);
#endif

#if FW_VERSION == 100
SceOff UFatLseek(SceIoIob *iob, SceOff offset, s32 whence) {
    s32 ret;

    if ((offset >> 31) > 0) {
        return 0x80010016;
    }
    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatLseek", ret);
        return 0x80010005;
    }
    ret = ufat_lseek(iob, (s32)offset, whence);
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
SceOff UFatLseek(SceIoIob *iob, SceOff offset, s32 whence) {
    s32 ret;

    if ((offset >> 31) > 0) {
        return 0x80010016;
    }
    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatLseek", ret);
        return 0x80010005;
    }
    ret = ufat_lseek(iob, (s32)offset, whence);
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", UFatLseek);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_000022B8);
#endif

#if FW_VERSION == 100
s32 UFatIoctl2(SceIoIob *iob, s32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen) {
    s32 args[6];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatIoctl2", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)cmd;
    args[2] = (s32)indata;
    args[3] = (s32)inlen;
    args[4] = (s32)outdata;
    args[5] = (s32)outlen;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00003B3C, args);
    func_00008914();
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 UFatIoctl2(SceIoIob *iob, s32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen) {
    s32 args[6];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatIoctl2", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)cmd;
    args[2] = (s32)indata;
    args[3] = (s32)inlen;
    args[4] = (s32)outdata;
    args[5] = (s32)outlen;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00003B3C, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION == 152
s32 UFatIoctl2(SceIoIob *iob, s32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen) {
    s32 args[6];
    s32 ret;

    if (func_00009514(iob) != 0) {
        Kprintf(D_0000D09C_v152, "UFatIoctl2");
        return 0x8001000D;
    }
    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatIoctl2", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)cmd;
    args[2] = (s32)indata;
    args[3] = (s32)inlen;
    args[4] = (s32)outdata;
    args[5] = (s32)outlen;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00003B3C, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", UFatIoctl2);
#endif

#if FW_VERSION == 100
s32 UFatRemove(SceIoIob *iob, char *name) {
    s32 args[2];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatRemove", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)name;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00003B70, args);
    func_00008914();
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 UFatRemove(SceIoIob *iob, char *name) {
    s32 args[2];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatRemove", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)name;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00003B70, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION == 152
s32 UFatRemove(SceIoIob *iob, char *name) {
    s32 args[2];
    s32 ret;

    if (iob->i_unit == 0 && func_00009514(iob) != 0) {
        return 0x8001000D;
    }
    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatRemove", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)name;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00003B70, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/lfatfs", UFatRemove);
#endif

#if FW_VERSION == 100
s32 UFatMkdir(SceIoIob *iob, char *name, SceMode mode) {
    s32 args[3];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatMkdir", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)name;
    args[2] = (s32)mode;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00002E88, args);
    func_00008914();
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 UFatMkdir(SceIoIob *iob, char *name, SceMode mode) {
    s32 args[3];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatMkdir", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)name;
    args[2] = (s32)mode;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002E88, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION == 152
s32 UFatMkdir(SceIoIob *iob, char *name, SceMode mode) {
    s32 args[3];
    s32 ret;

    if (iob->i_unit == 0 && func_00009514(iob) != 0) {
        return 0x8001000D;
    }
    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatMkdir", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)name;
    args[2] = (s32)mode;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002E88, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", UFatMkdir);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00002534);
#endif

#if FW_VERSION == 100
s32 UFatRmdir(SceIoIob *iob, char *name) {
    s32 args[2];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatRmdir", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)name;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00002EB0, args);
    func_00008914();
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 UFatRmdir(SceIoIob *iob, char *name) {
    s32 args[2];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatRmdir", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)name;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002EB0, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION == 152
s32 UFatRmdir(SceIoIob *iob, char *name) {
    s32 args[2];
    s32 ret;

    if (iob->i_unit == 0 && func_00009514(iob) != 0) {
        return 0x8001000D;
    }
    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatRmdir", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)name;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002EB0, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/lfatfs", UFatRmdir);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00002428);

INCLUDE_ASM("nonmatchings/lfatfs", func_000024B4);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000251C);

INCLUDE_ASM("nonmatchings/lfatfs", func_000025A4);
#endif

#if FW_VERSION == 100
s32 UFatDopen(SceIoIob *iob, char *dirname) {
    s32 args[2];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatDopen", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)dirname;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00002ED0, args);
    func_00008914();
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 UFatDopen(SceIoIob *iob, char *dirname) {
    s32 args[2];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatDopen", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)dirname;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002ED0, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", UFatDopen);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/lfatfs", UFatDclose);
#endif

#if FW_VERSION == 271
s32 UFatDclose(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = D_0000EC14;
    sceKernelPowerLock(0);
    temp_v0 = sceKernelWaitSema(temp_s0, 1, NULL);
    if (temp_v0 != 0) {
        Kprintf(D_0000CF84, D_0000CF6C, temp_v0);
        sceKernelPowerUnlock(0);
        Kprintf(D_0000CF9C, "UFatDclose", temp_v0);
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

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 UFatDclose(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = D_0000EC14;
    sceKernelPowerLock(0);
    temp_v0 = sceKernelWaitSema(temp_s0, 1, NULL);
    if (temp_v0 != 0) {
        Kprintf(D_0000C5B4, D_0000CF6C, temp_v0);
        sceKernelPowerUnlock(0);
        Kprintf(D_0000CF9C, "UFatDclose", temp_v0);
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
s32 UFatDclose(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = D_0000E554;
    sceKernelPowerLock(0);
    temp_v0 = sceKernelWaitSema(temp_s0, 1, NULL);
    if (temp_v0 != 0) {
        Kprintf(D_0000C5B4, D_0000CF6C, temp_v0);
        sceKernelPowerUnlock(0);
        Kprintf(D_0000CF9C, "UFatDclose", temp_v0);
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
s32 UFatDclose(void *arg0) {
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
        Kprintf(D_0000C5B4, D_0000CF6C, temp_v0);
        sceKernelPowerUnlock(0);
        Kprintf(D_0000CF9C, "UFatDclose", temp_v0);
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

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_0000286C(struct Unk_func_0000286C_0 *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_s0 = D_0000E8F4;
    sceKernelPowerLock(0);
    temp_v0 = sceKernelWaitSema(temp_s0, 1, NULL);
    if (temp_v0 != 0) {
        Kprintf(D_0000CF6C, D_0000CF5C, temp_v0);
        sceKernelPowerUnlock(0);
        Kprintf(D_0000CF9C, "UFatDclose", temp_v0);
        var_v0 = 0x80010005;
    } else {
        func_00009F04();
        func_00001980((struct Unk_func_00001980_0 *) arg0->unk10);
        func_00009F04();
        sceKernelSignalSema(D_0000E8F4, 1);
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
        Kprintf(D_0000CF6C, D_0000CF5C, temp_v0);
        sceKernelPowerUnlock(0);
        Kprintf(D_0000CF9C, "UFatDclose", temp_v0);
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

#if FW_VERSION == 100
s32 UFatDread(SceIoIob *iob, SceIoDirent *dir) {
    s32 args[2];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatDread", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)dir;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00002EF0, args);
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 UFatDread(SceIoIob *iob, SceIoDirent *dir) {
    s32 args[2];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatDread", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)dir;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002EF0, args);
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", UFatDread);
#endif

#if FW_VERSION == 100
s32 UFatGetstat(SceIoIob *iob, char *file, SceIoStat *stat) {
    s32 args[3];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatGetstat", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)file;
    args[2] = (s32)stat;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00002F10, args);
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 UFatGetstat(SceIoIob *iob, char *file, SceIoStat *stat) {
    s32 args[3];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatGetstat", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)file;
    args[2] = (s32)stat;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002F10, args);
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", UFatGetstat);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00002B34);
#endif

#if FW_VERSION >= 300
s32 UFatRename(SceIoIob *iob, const char *oldname, const char *newname) {
    return 0x80010086;
}

s32 UFatChdir(SceIoIob *iob, char *name) {
    return 0x80010086;
}
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CC50);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CCA8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CCB4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CCC4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CCD8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CCE0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CCEC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CCF4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CCFC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD94);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDB4);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD1C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD28);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD34);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD40);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD4C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B638);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000B644);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lfatfs", func_00002CE4);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_000029C8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", UFatUmount);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lfatfs", func_00003074);

s32 func_000031DC(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD64);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD70);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD7C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD88);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDE4);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD94_v311);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD94_v310);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CDA0);

INCLUDE_ASM("nonmatchings/lfatfs", func_00002BA4);

s32 func_00002C24(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = D_0000E3D4;
    sceKernelPowerLock(0);
    temp_v0 = sceKernelLockMutex(temp_s0, 1, NULL);
    if (temp_v0 == 0) {

    } else {
        sceKernelPowerUnlock(0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lfatfs", func_00003218);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00002CC8);
#endif

#if FW_VERSION == 100
s32 UFatChstat(SceIoIob *iob, char *file, SceIoStat *stat, s32 bits) {
    s32 args[4];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatChstat", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)file;
    args[2] = (s32)stat;
    args[3] = (s32)bits;
    func_00008914();
    ret = sceKernelExtendKernelStack(0x1000, func_00002F38, args);
    func_00008914();
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 UFatChstat(SceIoIob *iob, char *file, SceIoStat *stat, s32 bits) {
    s32 args[4];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatChstat", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)file;
    args[2] = (s32)stat;
    args[3] = (s32)bits;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002F38, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION == 152
s32 UFatChstat(SceIoIob *iob, char *file, SceIoStat *stat, s32 bits) {
    s32 args[4];
    s32 ret;

    if (iob->i_unit == 0 && func_00009514(iob) != 0) {
        return 0x8001000D;
    }
    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatChstat", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)file;
    args[2] = (s32)stat;
    args[3] = (s32)bits;
    func_00009150();
    ret = sceKernelExtendKernelStack(0x1000, func_00002F38, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", UFatChstat);
#endif

#if FW_VERSION < 201
s32 UFatRename(SceIoIob *iob, const char *oldname, const char *newname) {
    Kprintf("%s: iob=%p oldname=%s newname=%s\n", "UFatRename", iob, oldname, newname);
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/lfatfs", UFatRename);
#endif

#if FW_VERSION < 201
s32 UFatChdir(SceIoIob *iob, char *name) {
    Kprintf("%s: iob=%p name=%s\n", "UFatChdir", iob, name);
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/lfatfs", UFatChdir);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00002D18);
#endif

#if FW_VERSION == 100
s32 UFatMount(SceIoIob *iob, const char *fs, const char *blockDev, s32 mode, void *data, s32 len) {
    s32 args[6];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatMount", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)fs;
    args[2] = (s32)blockDev;
    args[3] = (s32)mode;
    args[4] = (s32)data;
    args[5] = (s32)len;
    ret = sceKernelExtendKernelStack(0x1000, func_00003C6C, args);
    func_00008914();
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 UFatMount(SceIoIob *iob, const char *fs, const char *blockDev, s32 mode, void *data, s32 len) {
    s32 args[6];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatMount", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)fs;
    args[2] = (s32)blockDev;
    args[3] = (s32)mode;
    args[4] = (s32)data;
    args[5] = (s32)len;
    ret = sceKernelExtendKernelStack(0x1000, func_00003C6C, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION == 152
s32 UFatMount(SceIoIob *iob, const char *fs, const char *blockDev, s32 mode, void *data, s32 len) {
    s32 args[6];
    s32 ret;

    if (func_00009514(iob) != 0) {
        Kprintf(D_0000D09C_v152, "UFatMount");
        return 0x8001000D;
    }
    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatMount", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)fs;
    args[2] = (s32)blockDev;
    args[3] = (s32)mode;
    args[4] = (s32)data;
    args[5] = (s32)len;
    ret = sceKernelExtendKernelStack(0x1000, func_00003C6C, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", UFatMount);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00002CE4);
#endif

#if FW_VERSION == 100
s32 UFatUmount(SceIoIob *iob, char *blockDev) {
    s32 args[6];
    s32 ret;

    ret = wait_sema(D_0000D354);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatUmount", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)blockDev;
    ret = sceKernelExtendKernelStack(0x1000, func_00003CA0, args);
    func_00008914();
    signal_sema(D_0000D354);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 UFatUmount(SceIoIob *iob, char *blockDev) {
    s32 args[6];
    s32 ret;

    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatUmount", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)blockDev;
    ret = sceKernelExtendKernelStack(0x1000, func_00003CA0, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION == 152
s32 UFatUmount(SceIoIob *iob, char *blockDev) {
    s32 args[6];
    s32 ret;

    if (func_00009514(iob) != 0) {
        return 0x8001000D;
    }
    ret = wait_sema(D_0000E094);
    if (ret != 0) {
        Kprintf(D_0000CF9C, "UFatUmount", ret);
        return 0x80010005;
    }
    args[0] = (s32)iob;
    args[1] = (s32)blockDev;
    ret = sceKernelExtendKernelStack(0x1000, func_00003CA0, args);
    func_00009150();
    signal_sema(D_0000E094);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/lfatfs", UFatUmount);
#endif

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

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lfatfs", func_0000382C);

INCLUDE_ASM("nonmatchings/lfatfs", func_000038E4);
#else
INCLUDE_ASM("nonmatchings/lfatfs", ufat_lseek);
#endif

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
#endif

#if FW_VERSION >= 282
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

void func_00003B3C(s32 *args) {
    func_00004918(args[0], args[1], args[2], args[3], args[4], args[5]);
}

void func_00003B70(s32 *args) {
    func_00004BA8(args[0], args[1]);
}

#if FW_VERSION < 282
void func_00002E88(void *arg0) {
    func_00003AD8(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
}

void func_00002EB0(void *arg0) {
    func_00003F94(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}

void func_00002ED0(void *arg0) {
    ufat_dopen(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}

void func_00002EF0(void *arg0) {
    func_00004398(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}

void func_00002F10(void *arg0) {
    func_00004510(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8));
}

void func_00002F38(void *arg0) {
    func_0000464C(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}
#else
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

void func_00003C6C(s32 *args) {
    ufat_mount(args[0], args[1], args[2], args[3], args[4], args[5]);
}

void func_00003CA0(s32 *args) {
    ufat_umount(args[0], args[1]);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00003694);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00003744);
#endif

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
s32 disk_read(UFatUnit *unit, void *buf, s32 sector, s32 count) {
    s32 ret;

    if (sector < 0 || count < 1 || unit->devSectors < sector + count) {
        return 0x80010005;
    }
    ret = sceIoLseek(unit->fd, (SceOff)sector << unit->devShift, 0);
    if (ret < 0) {
        return ret;
    }
    ret = sceIoRead(unit->fd, buf, count << unit->devShift);
    if (ret < 0) {
        Kprintf("lfatfs.c:%s:r:0x%x\n", "disk_read", ret);
        return ret;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00003DB8(UFatUnit *unit, const void *buf, s32 sector, s32 count) {
    s32 ret;

    if (sector < 0 || count < 1 || unit->devSectors < sector + count) {
        return 0x80010005;
    }
    if (unit->flags & 2) {
        return 0x8001001E;
    }
    ret = sceIoLseek(unit->fd, (SceOff)sector << unit->devShift, 0);
    if (ret < 0) {
        return ret;
    }
    ret = sceIoWrite(unit->fd, buf, count << unit->devShift);
    if (ret >= 0) {
        return 0;
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/lfatfs", func_00003A84);
#endif

#if FW_VERSION == 100
s32 buf_read(UFatUnit *unit, s32 offset, u8 *buf, s32 size) {
    UFatBuf *b;
    s32 sector = offset >> 9;
    s32 off = offset & 0x1FF;
    s32 n, ret;

    while (size > 0) {
        n = size;
        if (0x200 - off < size) {
            n = 0x200 - off;
        }
        size -= n;
        ret = buf_lookup(&b, unit, sector, 1);
        if (ret < 0) {
            Kprintf("lfatfs.c:%s:buf_lookup(%d) -> %d\n", "buf_read", sector, ret);
            return ret;
        }
        bcopy(b->data + off, buf, n);
        buf += n;
        sector++;
        off = 0;
    }
    return 0;
}
#endif

#if FW_VERSION == 150
s32 buf_read(UFatUnit *unit, s32 offset, u8 *buf, s32 size) {
    UFatBuf *b;
    s32 sector = offset >> 9;
    s32 off = offset & 0x1FF;
    s32 n, ret;

    while (size > 0) {
        n = size;
        if (0x200 - off < size) {
            n = 0x200 - off;
        }
        size -= n;
        ret = func_00003A84(&b, unit, sector, 1);
        if (ret < 0) {
            Kprintf("lfatfs.c:%s:buf_lookup(%d) -> %d\n", "buf_read", sector, ret);
            return ret;
        }
        bcopy(b->data + off, buf, n);
        buf += n;
        sector++;
        off = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", buf_read);
#endif

#if FW_VERSION < 282
s32 func_00004268(UFatUnit *unit, s32 sector) {
    s32 ret;

    if (sector != unit->cachedSector) {
        ret = func_00005DC0(unit);
        if (ret < 0) {
            return ret;
        }
        unit->cachedSector = -1;
        ret = buf_read(unit, sector << unit->sectorShift, unit->sectorBuf, 0x200);
        if (ret < 0) {
            return ret;
        }
        unit->cachedSector = sector;
    }
    return 0;
}
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

INCLUDE_ASM("nonmatchings/lfatfs", ufat_dopen);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004398);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004510);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000464C);

INCLUDE_ASM("nonmatchings/lfatfs", ufat_mount);

INCLUDE_ASM("nonmatchings/lfatfs", ufat_umount);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00006768);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", func_00006600_v201);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/lfatfs", buf_lookup);

INCLUDE_ASM("nonmatchings/lfatfs", func_000031E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00005BE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/lfatfs", func_00005DC0);
#endif

#if FW_VERSION < 282
s32 func_00005EC4(UFatUnit *unit) {
    s32 c, ret;

    for (c = unit->nextFree; c < unit->nClusters; c++) {
        ret = func_00000FF8(unit, c);
        if (ret < 0) {
            return ret;
        }
        if (ret == 0) {
            ret = func_000075C8(unit, c, -8);
            if (ret < 0) {
                return ret;
            }
            unit->nextFree = c + 1;
            if (unit->freeCount != -1) {
                unit->freeCount--;
            }
            return c;
        }
    }
    unit->nextFree = 2;
    return 0x8001001C;
}

s32 func_00005F7C(UFatUnit *unit, s32 cluster) {
    s32 ret;

    if (cluster < 2 || cluster >= unit->nClusters) {
        return 0x80010005;
    }
    ret = func_000075C8(unit, cluster, 0);
    if (ret < 0) {
        return ret;
    }
    if (cluster < unit->nextFree) {
        unit->nextFree = cluster;
    }
    if (unit->freeCount != -1) {
        unit->freeCount++;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00006008(UFatUnit *unit, u32 cluster) {
    u32 next;
    s32 ret;

    if (cluster != 0) {
        while ((cluster | ~unit->fatMask) < 0xFFFFFFF6) {
            next = func_00000FF8(unit, cluster);
            ret = func_00005F7C(unit, cluster);
            if (ret < 0) {
                return ret;
            }
            cluster = next;
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00006008(UFatUnit *unit, u32 cluster) {
    u32 next;
    s32 ret;

    if (cluster != 0) {
        while ((s32)(cluster | ~unit->fatMask) < -10) {
            next = func_00000FF8(unit, cluster);
            ret = func_00005F7C(unit, cluster);
            if (ret < 0) {
                return ret;
            }
            cluster = next;
        }
    }
    return 0;
}
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
INCLUDE_ASM("nonmatchings/lfatfs", node_attach);

INCLUDE_ASM("nonmatchings/lfatfs", add_direntry);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00006DFC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00007AF8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/lfatfs", create_file);
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
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", disk_read);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
s32 func_00003DB8(UFatUnit *unit, const void *buf, s32 sector, s32 count) {
    s32 ret;

    if (sector < 0 || count < 1 || unit->devSectors < sector + count) {
        return 0x80010005;
    }
    if (unit->flags & 2) {
        return 0x8001001E;
    }
    ret = sceIoLseek(unit->fd, (SceOff)sector << unit->devShift, 0);
    if (ret < 0) {
        return ret;
    }
    ret = sceIoWrite(unit->fd, buf, count << unit->devShift);
    if (ret >= 0) {
        return 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00003EA4);
#else
INCLUDE_ASM("nonmatchings/lfatfs", func_000075C8);

INCLUDE_ASM("nonmatchings/lfatfs", func_000077A4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007884);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", buf_read);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004268);

INCLUDE_ASM("nonmatchings/lfatfs", func_000042D8);

INCLUDE_ASM("nonmatchings/lfatfs", func_000045C8);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000466C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
s32 func_000047E4(UFatUnit *unit) {
    s32 i, n;

    if (unit->freeCount != -1) {
        return unit->freeCount;
    }
    n = 0;
    for (i = 2; i < unit->nClusters; i++) {
        if (func_00000FF8(unit, i) == 0) {
            n++;
        }
    }
    unit->freeCount = n;
    return n;
}

s32 func_00004874(UFatUnit *unit) {
    u8 ent[32];
    s32 i, n = 0, off = 0;

    for (i = 0; i < unit->rootEntries; i++, off += 32) {
        if (buf_read(unit, (unit->rootDirStart << unit->sectorShift) + off, ent, 32) >= 0) {
            if (ent[0] == 0 || ent[0] == 0xE5) {
                n++;
            }
        }
    }
    return n;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00004918);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004BA8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00004CFC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005110);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005388);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005470);

INCLUDE_ASM("nonmatchings/lfatfs", func_000055FC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00005708);

INCLUDE_ASM("nonmatchings/lfatfs", ufat_mount);

INCLUDE_ASM("nonmatchings/lfatfs", ufat_umount);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00007054);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006158);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00006708);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000675C);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006940);

INCLUDE_ASM("nonmatchings/lfatfs", func_000069F8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006A84);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006B14);

INCLUDE_ASM("nonmatchings/lfatfs", func_00006C18);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00007054);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00007188);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007304);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007600);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007774);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007934);

INCLUDE_ASM("nonmatchings/lfatfs", func_00007BC8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00007580);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00007D00);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00007EB4);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000808C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000816C);
#endif

INCLUDE_ASM("nonmatchings/lfatfs", func_00008504);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000860C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00007FE4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA48);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA50);

INCLUDE_ASM("nonmatchings/lfatfs", func_000080AC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008128);
#endif

#if FW_VERSION >= 310
void func_000081AC(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (M2C_FIELD(arg0, u8 *, 0xA) | ~0x7F);
}

INCLUDE_ASM("nonmatchings/lfatfs", func_000081C0);

INCLUDE_ASM("nonmatchings/lfatfs", func_000081D4);

void func_000081E8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xB) = -1;
}
#endif

#if FW_VERSION < 282
s32 func_00007F58(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000862C);

INCLUDE_ASM("nonmatchings/lfatfs", func_000086C4);
#endif

#if FW_VERSION == 100
u16 LbnToPbn(LFlashDev *dev, u32 lbn) {
    u32 segno = lbn / 480;
    LFlashSegment *seg;

    if (segno >= dev->nSegments) {
        Kprintf("lflash.c:%s:lbn=%d[0x%x], [segno=%d >= max=%d]\n", "LbnToPbn", lbn, lbn, segno, dev->nSegments);
        Kprintf(D_0000D874, D_0000C56C, "LbnToPbn", 0x654);
        sceKernelAssert(0, 0);
        return 0xFFFF;
    }
    seg = &dev->segments[segno];
    return seg->lpTable[lbn - seg->firstLbn];
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
u16 LbnToPbn(LFlashDev *dev, u32 lbn) {
    u32 segno = lbn / 480;
    LFlashSegment *seg;

    if (segno >= dev->nSegments) {
        Kprintf("lflash.c:%s:lbn=%d[0x%x], [segno=%d >= max=%d]\n", "LbnToPbn", lbn, lbn, segno, dev->nSegments);
        Kprintf(D_0000D874, D_0000C56C, "LbnToPbn", 0x783);
        sceKernelAssert(0, 0);
        return 0xFFFF;
    }
    seg = &dev->segments[segno];
    return seg->lpTable[lbn - seg->firstLbn];
}
#endif

#if FW_VERSION == 152
u16 LbnToPbn(LFlashDev *dev, u32 lbn) {
    u32 segno = lbn / 480;
    LFlashSegment *seg;

    if (segno >= dev->nSegments) {
        Kprintf("lflash.c:%s:lbn=%d[0x%x], [segno=%d >= max=%d]\n", "LbnToPbn", lbn, lbn, segno, dev->nSegments);
        Kprintf(D_0000D874, D_0000C56C, "LbnToPbn", 0x786);
        sceKernelAssert(0, 0);
        return 0xFFFF;
    }
    seg = &dev->segments[segno];
    return seg->lpTable[lbn - seg->firstLbn];
}
#endif

#if FW_VERSION >= 282
s32 func_00008718(struct Unk_func_00008718_0 *arg0) {
    return (arg0->unk2 << 8) | arg0->unk3;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00008208);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_000080C0);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008124);

INCLUDE_ASM("nonmatchings/lfatfs", func_000081DC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000872C);

INCLUDE_ASM("nonmatchings/lfatfs", func_000087C4);
#endif

#if FW_VERSION < 201 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D874);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00008388);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000C56C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00008794);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", EraseAndFreeBlock);

INCLUDE_ASM("nonmatchings/lfatfs", CreateLPTable);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00008894);
#endif

#if FW_VERSION < 300
s32 func_00008A68(LFlashDev *dev) {
    u32 i = 0;
    LFlashSegment *seg = dev->segments;
    s32 ret;

    if (dev->nSegments != 0) {
        do {
            ret = SegmentLbnConfirm(dev, seg);
            i++;
            seg++;
            if (ret < 0) {
                return ret;
            }
        } while (i < dev->nSegments);
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/lfatfs", func_00008A68);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_000085D8);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA48);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA50);
#endif

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

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D8C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D4F4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008A74);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DB44);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D72C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D8EC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D8F4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_000083F8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008554);

INCLUDE_ASM("nonmatchings/lfatfs", func_000085F0);

INCLUDE_ASM("nonmatchings/lfatfs", func_000086F8);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000882C);

INCLUDE_ASM("nonmatchings/lfatfs", func_000089F8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008BA8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D910);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D940);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D94C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00008610);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lfatfs", func_0000860C_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/lfatfs", func_0000860C_v310);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
void LFlashBlockBufferWritePage(LFlashDev *dev, s32 page, u8 *data) {
    memcpy(dev->blockBuf + page * dev->pageSize, data, dev->pageSize);
    if (page == 0 && dev->blockBuf[0] != data[0]) {
        Kprintf("lflash.c:%s:buffer[0] = 0x%02x, data=0x%02x\n", "LFlashBlockBufferWritePage", dev->blockBuf[0], data[0]);
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", LFlashBlockBufferWritePage);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", test_open);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00008E38);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D22C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D23C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D264);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DBE8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008E24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", df_open);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
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

#if FW_VERSION >= 250 && FW_VERSION < 282
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
    Malloc(0xC);
}

s32 func_0000881C(s32 arg0) {
    sceKernelFreeHeapMemory(D_0000D984, arg0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 test_close(void) {
    s32 res;

    res = df_close(NULL);
    if (res < 0) {
        Kprintf(D_0000DCE0, "test_close", res);
        Kprintf(D_0000D874, D_0000C56C, "test_close", 0x928);
        sceKernelAssert(0, 0);
    }
    return res;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
s32 test_close(void) {
    s32 res;

    res = df_close(NULL);
    if (res < 0) {
        Kprintf(D_0000DCE0, "test_close", res);
        Kprintf(D_0000D874, D_0000C56C, "test_close", 0xA4A);
        sceKernelAssert(0, 0);
    }
    return res;
}
#endif

#if FW_VERSION == 152
s32 test_close(void) {
    s32 res;

    res = df_close(NULL);
    if (res < 0) {
        Kprintf(D_0000DCE0, "test_close", res);
        Kprintf(D_0000D874, D_0000C56C, "test_close", 0xA4D);
        sceKernelAssert(0, 0);
    }
    return res;
}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DCE0);
#endif

#if FW_VERSION == 100
s32 lflash_read_only_mode(s32 mode) {
    Kprintf("lflash.c:%s:(mode %d)\n", "lflash_read_only_mode", mode);
    D_0000D980 = mode;
    return 0;
}
#endif

#if FW_VERSION == 150
s32 lflash_read_only_mode(s32 mode) {
    Kprintf("lflash.c:%s:(mode %d)\n", "lflash_read_only_mode", mode);
    D_0000E6C0 = mode;
    return 0;
}
#endif

#if FW_VERSION == 151
s32 lflash_read_only_mode(s32 mode) {
    Kprintf("lflash.c:%s:(mode %d)\n", "lflash_read_only_mode", mode);
    D_0000E650 = mode;
    return 0;
}
#endif

#if FW_VERSION == 152
s32 lflash_read_only_mode(s32 mode) {
    Kprintf("lflash.c:%s:(mode %d)\n", "lflash_read_only_mode", mode);
    D_0000EDF0 = mode;
    return 0;
}

s32 func_00009514(SceIoIob *iob) {
    if (k1IsUserMode()) {
        if (sceIoGetIobUserLevel(iob) < 4) {
            return 0x8001000D;
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00009514);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
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
    sceIoAddDrv(&D_0000D72C);
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00008B74);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D9CC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D9FC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA0C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA1C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA3C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_000087DC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA48);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA50);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008D28);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00008C30);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DA98);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DAA8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DAD0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DAEC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_000088E8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D36C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D39C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D3B0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D3E0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D3F0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D414);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008A4C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00008DC0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00008DD0);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008F28);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00008EDC);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009050);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DCB4);

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

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_000091C0(void) {
    sceIoAddDrv(&D_0000D72C);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_000091C0(void) {
    func_000097A8();
    sceIoAddDrv(&D_0000D72C);
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DD3C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DD5C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DD84);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000920C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000959C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_000093E0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00009788);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_000098E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00009B30);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00008E08);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00009760);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_00009C2C);
#endif

#if FW_VERSION >= 282
void func_00009D0C(void) {
}

void func_00009D14(void) {
}
#endif

#if FW_VERSION >= 310
void func_00009838(void) {

}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00008ED4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00008F98);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00009B88);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DEE8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DEFC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DF10);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DF44);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DF50);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009D1C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00009E74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00009EBC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000901C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00009934(void) {
    s32 temp_v0;

    temp_v0 = func_00008A4C(0);
    if (temp_v0 >= 0) {

    } else {
        Kprintf(D_0000DCE0, "test_close", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00009F04);
#endif

#if FW_VERSION >= 350
s32 func_00009F04(void) {
    s32 var_v1;

    var_v1 = 0;
    if ((&D_0000ECA8 != NULL) && (M2C_FIELD(&D_0000ECA8, s32 *, 0x22C) != 0)) {
        var_v1 = func_00009638((s32) &D_0000ECA8);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lfatfs", func_00009E44);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009F74);
#endif

#if FW_VERSION == 282
s32 func_00009F74(void) {
    sceIoAddDrv(&D_0000DA50);
    return 0;
}
#endif

#if FW_VERSION >= 300
s32 sceLFatFs_driver_F1FBA85F(void) {
    return 0;
}
#endif

#if FW_VERSION == 352
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03050210;
}
#endif

#if FW_VERSION == 351
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03050110;
}
#endif

#if FW_VERSION == 350
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03050010;
}
#endif

#if FW_VERSION == 340
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03040010;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_000090F4);

s32 func_00009254(void) {
    return (func_00009EBC() == 0) ? 0 : 0x8001000D;
}
#endif

#if FW_VERSION == 330
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03030010;
}
#endif

#if FW_VERSION == 311
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03010110;
}
#endif

#if FW_VERSION == 310
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03010010;
}
#endif

#if FW_VERSION == 303
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03000310;
}
#endif

#if FW_VERSION == 302
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03000210;
}
#endif

#if FW_VERSION == 301
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03000110;
}
#endif

#if FW_VERSION == 300
s32 sceLFatFs_driver_51C7F7AE(void) {
    return 0x03000010;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", del_lflash_driver);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 del_lflash_driver(void) {
    s32 *temp_v1;

    temp_v1 = "del_lflash_driver";
    Kprintf(D_0000D22C, temp_v1, (s32) temp_v1);
    sceIoDelDrv(D_0000D72C);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 del_lflash_driver(void) {
    s32 *temp_v1;

    temp_v1 = "del_lflash_driver";
    Kprintf("lflash.c:%s:()\n", temp_v1, (s32) temp_v1);
    sceIoDelDrv(D_0000D72C);
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
INCLUDE_ASM("nonmatchings/lfatfs", df_close);
#endif

#if FW_VERSION == 100
void *Malloc(SceSize size) {
    void *p;

    p = sceKernelAllocHeapMemory(D_0000D984, size);
    if (p == NULL) {
        Kprintf(D_0000D874, D_0000C56C, D_0000D8C0, 0x1CA);
        sceKernelAssert(0, 0);
    }
    return p;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
void *Malloc(SceSize size) {
    void *p;

    p = sceKernelAllocHeapMemory(D_0000D984, size);
    if (p == NULL) {
        Kprintf(D_0000D874, D_0000C56C, D_0000D8C0, 0x2D1);
        sceKernelAssert(0, 0);
    }
    return p;
}
#endif

#if FW_VERSION == 152
void *Malloc(SceSize size) {
    void *p;

    p = sceKernelAllocHeapMemory(D_0000D984, size);
    if (p == NULL) {
        Kprintf(D_0000D874, D_0000C56C, D_0000D8C0, 0x2D4);
        sceKernelAssert(0, 0);
    }
    return p;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DB20);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A01C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", func_000092B4);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009354);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", SegmentAddFreeBlock);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_00008C9C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DF88);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00009A70);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/lfatfs", func_00009EBC_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/lfatfs", func_00009EBC_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/lfatfs", func_00009EBC_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/lfatfs", func_00009EBC_v300);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DD58);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DD80);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DDC0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_00009FD4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E03C);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E068);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E0AC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E0B8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E0C4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DE88);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
    Kprintf(D_0000E160, "df_dclose", **arg0->unk8);
    return 0x80010086;
}

s32 func_0000A3DC(struct Unk_func_0000A3DC_0 *arg0) {
    Kprintf(D_0000E160, "df_dread", **arg0->unk8);
    return 0x80010086;
}

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A418);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A460);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A494);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A4C8);
#endif

#if FW_VERSION >= 282
s32 func_0000A4FC(void) {
    return 0x80010086;
}

s32 func_0000A508(void) {
    return 0x80010086;
}

s32 func_0000A514(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION >= 350
s32 func_000092A4(void) {
    return 0x80010086;
}

s32 func_000092B0(void) {
    return 0x80010086;
}

s32 func_000092BC(void) {
    return 0x80010086;
}

INCLUDE_ASM("nonmatchings/lfatfs", func_000092C8);

s32 func_000092E0(void) {
    return 0x80010086;
}

s32 func_000092EC(void) {
    return 0x80010086;
}

s32 func_000092F8(void) {
    return 0x80010086;
}

s32 func_00009304(void) {
    return 0x80010086;
}

s32 func_00009310(void) {
    return 0x80010086;
}

s32 func_0000931C(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A520);
#endif

#if FW_VERSION >= 310
void func_0000A098(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x244);
    if (temp_v1 == 0) {

    } else if (sceKernelDeleteFpl(temp_v1) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x244) = 0;
    }
}
#endif

#if FW_VERSION >= 300
void func_0000A4E4(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x24C);
    if (temp_v1 == 0) {

    } else if (sceKernelDeleteFpl(temp_v1) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x24C) = 0;
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_0000A528(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x254);
    if (temp_v1 == 0) {

    } else if (sceKernelDeleteFpl(temp_v1) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x254) = 0;
    }
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A56C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D9D8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A5C0);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A658);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00009590);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009638);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009800);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000995C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A6D8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A394);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A7D0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A7B4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000AA60);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A7C4);
#endif

#if FW_VERSION < 250 || (FW_VERSION >= 282 && FW_VERSION < 310)
INCLUDE_ASM("nonmatchings/lfatfs", SegmentCreateLpt);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E5D8);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E5F8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000DDE0);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_0000AAB0);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000ACB8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_00009DE8);

INCLUDE_ASM("nonmatchings/lfatfs", func_00009ECC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_0000AFE8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E194);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E1A0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E1AC);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E1DC);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", SegmentLbnConfirm);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", func_00009BF4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", LFlashUmount);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A314);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/lfatfs", df_open_locked);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_000097A8);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CB54);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", SegmentSetLPEntry);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A308);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/lfatfs", SegmentGetFreeBlock);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", df_init);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A4DC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/lfatfs", ReadPhysicalPageExtraOnly);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000CD6C);
#endif

#if FW_VERSION < 250
s32 IsBadBlock(LFlashDev *dev, s32 block) {
    s32 ret = sceKernelCheckThreadKernelStack();

    if (ret < 0) {
        Kprintf(D_0000CD6C, "IsBadBlock", ret, ret);
        for (;;) {
        }
    }
    sceNandLock(0);
    ret = sceNandIsBadBlock(block * dev->pagesPerBlock + (dev->pagesPerBlock << 6));
    sceNandUnlock();
    return ret;
}

INCLUDE_ASM("nonmatchings/lfatfs", ReadPhysicalBlock);
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

INCLUDE_ASM("nonmatchings/lfatfs", BootSequence);

INCLUDE_ASM("nonmatchings/lfatfs", SegmentInit);

INCLUDE_ASM("nonmatchings/lfatfs", Initialize);
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

#if FW_VERSION < 151
s32 func_0000A7B4(const char *s, s32 *unit, s32 *part, s32 *single) {
    const char *p;
    s32 ret;

    *single = 0;
    *part = 0;
    *unit = 0;
    p = func_0000B448(s, unit);
    if (*p == '\0') {
        return 0;
    }
    if (*p != ',') {
        return -1;
    }
    p++;
    if (strcmp("single", p) == 0) {
        *single = 1;
        return 0;
    }
    p = func_0000B448(p, part);
    ret = -1;
    if (*p == '\0') {
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
s32 func_0000A7B4(const char *s, s32 *unit, s32 *part, s32 *single) {
    const char *p;
    s32 ret;

    *single = 0;
    *part = 0;
    *unit = 0;
    p = func_0000BD64(s, unit);
    if (*p == '\0') {
        return 0;
    }
    if (*p != ',') {
        return -1;
    }
    p++;
    if (strcmp("single", p) == 0) {
        *single = 1;
        return 0;
    }
    p = func_0000BD64(p, part);
    ret = -1;
    if (*p == '\0') {
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", df_read);

INCLUDE_ASM("nonmatchings/lfatfs", df_write);

INCLUDE_ASM("nonmatchings/lfatfs", df_lseek);
#endif

#if FW_VERSION == 100
s32 func_0000AC4C(SceIoIob *iob, s32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen) {
    LFlashPart *part = iob->i_private;
    LFlashDev *dev = &D_0000EED0;
    LFlashDevInfo *info = outdata;

    switch (cmd) {
    case 0x3D001:
        if (outlen < sizeof(LFlashDevInfo)) {
            return 0x80010016;
        }
        if (info == NULL) {
            return 0x80010016;
        }
        bzero(info, sizeof(LFlashDevInfo));
        info->unk10 = part->unk4;
        info->unk14 = part->unkC;
        info->unk18 = dev->pageSize;
        info->unk1C = dev->pageShift;
        return 0;
    }
    return 0x80010016;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/lfatfs", func_0000AC4C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 df_remove(SceIoIob *iob, char *name) {
    return 0x80010086;
}
#endif

#if FW_VERSION == 152
s32 df_remove(SceIoIob *iob, char *name) {
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 df_mkdir(SceIoIob *iob, char *name) {
    return 0x80010086;
}
#endif

#if FW_VERSION == 152
s32 df_mkdir(SceIoIob *iob, char *name) {
    return 0x8001B000;
}
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D03C);
#endif

#if FW_VERSION < 152
s32 df_remove(SceIoIob *iob, char *name) {
    Kprintf(D_0000D03C, "df_remove", name);
    return 0x8001B000;
}

s32 df_mkdir(SceIoIob *iob, char *name) {
    Kprintf(D_0000D03C, "df_mkdir", name);
    return 0x8001B000;
}
#endif

#if FW_VERSION < 201
s32 df_rmdir(SceIoIob *iob, char *name) {
    Kprintf(D_0000D03C, "df_rmdir", name);
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", df_rmdir);
#endif

#if FW_VERSION < 201
s32 df_dopen(SceIoIob *iob, char *name) {
    Kprintf(D_0000D03C, "df_dopen", name);
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", df_dopen);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D084);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 df_dclose(void *arg0) {
    Kprintf(D_0000D084, "df_dclose", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x80010086;
}
#endif

#if FW_VERSION < 201
s32 df_dclose(void *arg0) {
    Kprintf(D_0000D084, "df_dclose", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 df_dread(void *arg0) {
    Kprintf(D_0000D084, "df_dread", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x80010086;
}
#endif

#if FW_VERSION < 201
s32 df_dread(void *arg0) {
    Kprintf(D_0000D084, "df_dread", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x8001B000;
}

s32 df_getstat(SceIoIob *iob, char *name, SceIoStat *stat) {
    Kprintf("lflash.c:%s:\n", "df_getstat");
    return (stat == NULL) ? 0x80010016 : 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", df_getstat);
#endif

#if FW_VERSION < 201
s32 df_chstat(SceIoIob *iob, char *name) {
    Kprintf("lflash.c:%s:filename:%s\n", "df_chstat", name);
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", df_chstat);
#endif

#if FW_VERSION < 201
s32 df_rename(SceIoIob *iob, const char *oldname) {
    Kprintf("lflash.c:%s:oldfile: %s\n", "df_rename", oldname);
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", df_rename);
#endif

#if FW_VERSION < 201
s32 df_chdir(SceIoIob *iob, char *name) {
    Kprintf("lflash.c:%s:, path name: %s\n", "df_chdir", name);
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", df_chdir);

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

#if FW_VERSION >= 250 && FW_VERSION < 282
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
INCLUDE_ASM("nonmatchings/lfatfs", ReadLogicalPage);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B1AC);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B22C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A720);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A7FC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/lfatfs", D_0000D27C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BBC4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000ACC0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E6C0);

INCLUDE_RODATA("nonmatchings/lfatfs", D_0000E6E0);

INCLUDE_ASM("nonmatchings/lfatfs", SegmentLbnConfirm);

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
INCLUDE_ASM("nonmatchings/lfatfs", WriteLogicalPageWithCache);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B448);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B190);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B328);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B5B0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B4E8);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B720);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A15C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A1B0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B7CC);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000B87C);
#endif

#if FW_VERSION >= 310
void func_0000B9D4(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x248);
    if (temp_v1 == 0) {

    } else if (sceKernelDeleteFpl(temp_v1) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x248) = 0;
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_0000B9D4(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x250);
    if (temp_v1 == 0) {

    } else if (sceKernelDeleteFpl(temp_v1) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x250) = 0;
    }
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B408);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A36C);

INCLUDE_ASM("nonmatchings/lfatfs", func_0000A448);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BA18);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B684);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B938);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BA8C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BC30);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_0000B8F0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A624);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BB1C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BC3C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BB48);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000A7D0);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BC68);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BC58);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BD54);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BF94);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000BE44);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000C254);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/lfatfs", func_0000C210);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/lfatfs", func_0000C1CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lfatfs", func_0000C300);
#endif
