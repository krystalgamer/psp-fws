/* compiler[151]: 1.6.1 */
/* compiler[150]: 1.6.1 */
/* cflags[100,150,151]: -O2 -frename-registers */
#include "common.h"
#include "reboot_decls.h"

INCLUDE_ASM("nonmatchings/reboot_012C04", sceNandWriteBlock);

INCLUDE_ASM("nonmatchings/reboot_012C04", sceNandCalcEcc);

s32 sceNandVerifyEcc(s32 a0, s32 a1) {
    return func_00012EC8(a0, a1, 0);
}

s32 sceNandCollectEcc(s32 a0, s32 a1) {
    return func_00012EC8(a0, a1, 1);
}

INCLUDE_ASM("nonmatchings/reboot_012C04", func_00012EC8);

void func_0001318C(void) {
    func_000135C4(1, 0);
}

void func_000131AC(void) {
    func_000135C4(2, 1);
}

void func_000131CC(void) {
    func_000135C4(2, 0);
}

void func_000131EC(void) {
    func_000135C4(4, 1);
}

void func_0001320C(void) {
    func_000135C4(4, 0);
}

void func_0001322C(void) {
    func_000135C4(8, 1);
}

void func_0001324C(void) {
    func_000135C4(8, 0);
}

void func_0001326C(void) {
    func_000135C4(0x10, 1);
}

void func_0001328C(void) {
    func_000135C4(0x10, 0);
}

s32 sceSysregDmacBusClockEnable(u32 n) {
    if (n < 2) {
        return func_000135C4(0x20 << n, 1);
    }
    return 0x80000102;
}

s32 sceSysregDmacBusClockDisable(u32 n) {
    if (n < 2) {
        return func_000135C4(0x20 << n, 0);
    }
    return 0x80000102;
}

void func_00013334(void) {
    func_000135C4(0x80, 1);
}

void func_00013354(void) {
    func_000135C4(0x80, 0);
}

void func_00013374(void) {
    func_000135C4(0x100, 1);
}

void func_00013394(void) {
    func_000135C4(0x100, 0);
}

void func_000133B4(void) {
    func_000135C4(0x200, 1);
}

void func_000133D4(void) {
    func_000135C4(0x200, 0);
}

s32 sceSysregMsifBusClockEnable(u32 n) {
    if (n < 2) {
        return func_000135C4(0x400 << n, 1);
    }
    return 0x80000102;
}

s32 sceSysregMsifBusClockDisable(u32 n) {
    if (n < 2) {
        return func_000135C4(0x400 << n, 0);
    }
    return 0x80000102;
}

void sceSysregEmcddrBusClockEnable(void) {
    func_000135C4(0x1000, 1);
}

void sceSysregEmcddrBusClockDisable(void) {
    func_000135C4(0x1000, 0);
}

void func_000134BC(void) {
    func_000135C4(0x2000, 1);
}

void func_000134DC(void) {
    func_000135C4(0x2000, 0);
}

void sceSysregApbBusClockEnable(void) {
    func_000135C4(0x4000, 1);
}

void sceSysregApbBusClockDisable(void) {
    func_000135C4(0x4000, 0);
}

s32 sceSysregAudioBusClockEnable(u32 n) {
    if (n < 2) {
        return func_000135C4(0x8000 << n, 1);
    }
    return 0x80000102;
}

s32 sceSysregAudioBusClockDisable(u32 n) {
    if (n < 2) {
        return func_000135C4(0x8000 << n, 0);
    }
    return 0x80000102;
}

#if FW_VERSION == 100
s32 func_000135C4(u32 mask, s32 on) {
    u32 v = *(volatile u32 *)0xBC100050;
    u32 n = v & ~mask;
    s32 old = (v & mask) != 0;
    if (on) {
        n = v | mask;
    }
    *(volatile u32 *)0xBC100050 = n;
    return old;
}
#else
INCLUDE_ASM("nonmatchings/reboot_012C04", func_000135C4);
#endif

void func_000135F0(void) {
    func_00013AAC(2, 1);
}

void func_00013610(void) {
    func_00013AAC(2, 0);
}

void func_00013630(void) {
    func_00013AAC(4, 1);
}

void func_00013650(void) {
    func_00013AAC(4, 0);
}

void func_00013670(void) {
    func_00013AAC(8, 1);
}

void func_00013690(void) {
    func_00013AAC(8, 0);
}

s32 sceSysregMsifIoEnable(u32 n) {
    if (n < 2) {
        return func_00013AAC(0x10 << n, 1);
    }
    return 0x80000102;
}

s32 sceSysregMsifIoDisable(u32 n) {
    if (n < 2) {
        return func_00013AAC(0x10 << n, 0);
    }
    return 0x80000102;
}

void func_00013738(void) {
    func_00013AAC(0x40, 1);
}

void func_00013758(void) {
    func_00013AAC(0x40, 0);
}

s32 sceSysregAudioIoEnable(u32 n) {
    if (n < 2) {
        return func_00013AAC(0x80 << n, 1);
    }
    return 0x80000102;
}

s32 sceSysregAudioIoDisable(u32 n) {
    if (n < 2) {
        return func_00013AAC(0x80 << n, 0);
    }
    return 0x80000102;
}

void func_00013800(void) {
    func_00013AAC(0x200, 1);
}

void func_00013820(void) {
    func_00013AAC(0x200, 0);
}

void func_00013840(void) {
    func_00013AAC(0x400, 1);
}

void func_00013860(void) {
    func_00013AAC(0x400, 0);
}

void sceSysregAudioClkoutIoEnable(void) {
    func_00013AAC(0x800, 1);
}

void sceSysregAudioClkoutIoDisable(void) {
    func_00013AAC(0x800, 0);
}

s32 func_000138C0(void) {
    return 0x80000004;
}

s32 func_000138CC(void) {
    return 0x80000004;
}

void func_000138D8(void) {
    func_00013AAC(0x2000, 1);
}

void func_000138F8(void) {
    func_00013AAC(0x2000, 0);
}

s32 sceSysregUartIoEnable(u32 n) {
    if (n < 6) {
        return func_00013AAC(0x10000 << n, 1);
    }
    return 0x80000102;
}

s32 sceSysregUartIoDisable(u32 n) {
    if (n < 6) {
        return func_00013AAC(0x10000 << n, 0);
    }
    return 0x80000102;
}

s32 sceSysregSpiIoEnable(u32 n) {
    if (n < 6) {
        return func_00013AAC(0x1000000 << n, 1);
    }
    return 0x80000102;
}

s32 sceSysregSpiIoDisable(u32 n) {
    if (n < 6) {
        return func_00013AAC(0x1000000 << n, 0);
    }
    return 0x80000102;
}

s32 sceSysregGpioIoEnable(s32 a0) {
    return func_00013A60(a0, 1);
}

s32 sceSysregGpioIoDisable(s32 a0) {
    return func_00013A60(a0, 0);
}

INCLUDE_ASM("nonmatchings/reboot_012C04", func_00013A60);

#if FW_VERSION == 100
s32 func_00013AAC(u32 mask, s32 on) {
    u32 v = *(volatile u32 *)0xBC100078;
    u32 n = v & ~mask;
    s32 old = (v & mask) != 0;
    if (on) {
        n = v | mask;
    }
    *(volatile u32 *)0xBC100078 = n;
    return old;
}
#else
INCLUDE_ASM("nonmatchings/reboot_012C04", func_00013AAC);

INCLUDE_ASM("nonmatchings/reboot_012C04", func_00013AD8);

INCLUDE_ASM("nonmatchings/reboot_012C04", func_0001404C);
#endif

INCLUDE_RODATA("nonmatchings/reboot_012C04", D_00016C14);

#if FW_VERSION >= 150
INCLUDE_RODATA("nonmatchings/reboot_012C04", D_00016CE0);
#endif
