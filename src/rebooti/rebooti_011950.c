/* cflags[100]: -O2 -frename-registers */
#include "common.h"
#include "rebooti_decls.h"

s32 func_00011950(u32 ppn, void *user, void *spare) {
    s32 ret = func_000112BC(ppn);
    if (ret < 0) {
        return ret;
    }
    ret = func_00010838(ppn, user, spare, D_00016CF8);
    if (ret >= 0) {
        return 0;
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/rebooti_011950", func_000119B0);

s32 func_00011BDC(s32 a0, s32 a1) {
    return func_00011C14(a0, a1, 0);
}

s32 func_00011BF8(s32 a0, s32 a1) {
    return func_00011C14(a0, a1, 1);
}

INCLUDE_ASM("nonmatchings/rebooti_011950", func_00011C14);

void func_00011ED8(void) {
    func_00012310(1, 0);
}

void func_00011EF8(void) {
    func_00012310(2, 1);
}

void func_00011F18(void) {
    func_00012310(2, 0);
}

void func_00011F38(void) {
    func_00012310(4, 1);
}

void func_00011F58(void) {
    func_00012310(4, 0);
}

void func_00011F78(void) {
    func_00012310(8, 1);
}

void func_00011F98(void) {
    func_00012310(8, 0);
}

void func_00011FB8(void) {
    func_00012310(0x10, 1);
}

void func_00011FD8(void) {
    func_00012310(0x10, 0);
}

s32 func_00011FF8(u32 n) {
    if (n < 2) {
        return func_00012310(0x20 << n, 1);
    }
    return 0x80000102;
}

s32 func_0001203C(u32 n) {
    if (n < 2) {
        return func_00012310(0x20 << n, 0);
    }
    return 0x80000102;
}

void func_00012080(void) {
    func_00012310(0x80, 1);
}

void func_000120A0(void) {
    func_00012310(0x80, 0);
}

void func_000120C0(void) {
    func_00012310(0x100, 1);
}

void func_000120E0(void) {
    func_00012310(0x100, 0);
}

void func_00012100(void) {
    func_00012310(0x200, 1);
}

void func_00012120(void) {
    func_00012310(0x200, 0);
}

s32 func_00012140(u32 n) {
    if (n < 2) {
        return func_00012310(0x400 << n, 1);
    }
    return 0x80000102;
}

s32 func_00012184(u32 n) {
    if (n < 2) {
        return func_00012310(0x400 << n, 0);
    }
    return 0x80000102;
}

void func_000121C8(void) {
    func_00012310(0x1000, 1);
}

void func_000121E8(void) {
    func_00012310(0x1000, 0);
}

void func_00012208(void) {
    func_00012310(0x2000, 1);
}

void func_00012228(void) {
    func_00012310(0x2000, 0);
}

void func_00012248(void) {
    func_00012310(0x4000, 1);
}

void func_00012268(void) {
    func_00012310(0x4000, 0);
}

s32 func_00012288(u32 n) {
    if (n < 2) {
        return func_00012310(0x8000 << n, 1);
    }
    return 0x80000102;
}

s32 func_000122CC(u32 n) {
    if (n < 2) {
        return func_00012310(0x8000 << n, 0);
    }
    return 0x80000102;
}

s32 func_00012310(u32 mask, s32 on) {
    u32 v = *(volatile u32 *)0xBC100050;
    u32 n = v & ~mask;
    s32 old = (v & mask) != 0;
    if (on) {
        n = v | mask;
    }
    *(volatile u32 *)0xBC100050 = n;
    return old;
}

void func_0001233C(void) {
    func_000127F8(2, 1);
}

void func_0001235C(void) {
    func_000127F8(2, 0);
}

void func_0001237C(void) {
    func_000127F8(4, 1);
}

void func_0001239C(void) {
    func_000127F8(4, 0);
}

void func_000123BC(void) {
    func_000127F8(8, 1);
}

void func_000123DC(void) {
    func_000127F8(8, 0);
}

s32 func_000123FC(u32 n) {
    if (n < 2) {
        return func_000127F8(0x10 << n, 1);
    }
    return 0x80000102;
}

s32 func_00012440(u32 n) {
    if (n < 2) {
        return func_000127F8(0x10 << n, 0);
    }
    return 0x80000102;
}

void func_00012484(void) {
    func_000127F8(0x40, 1);
}

void func_000124A4(void) {
    func_000127F8(0x40, 0);
}

s32 func_000124C4(u32 n) {
    if (n < 2) {
        return func_000127F8(0x80 << n, 1);
    }
    return 0x80000102;
}

s32 func_00012508(u32 n) {
    if (n < 2) {
        return func_000127F8(0x80 << n, 0);
    }
    return 0x80000102;
}

void func_0001254C(void) {
    func_000127F8(0x200, 1);
}

void func_0001256C(void) {
    func_000127F8(0x200, 0);
}

void func_0001258C(void) {
    func_000127F8(0x400, 1);
}

void func_000125AC(void) {
    func_000127F8(0x400, 0);
}

void func_000125CC(void) {
    func_000127F8(0x800, 1);
}

void func_000125EC(void) {
    func_000127F8(0x800, 0);
}

s32 func_0001260C(void) {
    return 0x80000004;
}

s32 func_00012618(void) {
    return 0x80000004;
}

void func_00012624(void) {
    func_000127F8(0x2000, 1);
}

void func_00012644(void) {
    func_000127F8(0x2000, 0);
}

s32 func_00012664(u32 n) {
    if (n < 6) {
        return func_000127F8(0x10000 << n, 1);
    }
    return 0x80000102;
}

s32 func_000126A8(u32 n) {
    if (n < 6) {
        return func_000127F8(0x10000 << n, 0);
    }
    return 0x80000102;
}

s32 func_000126EC(u32 n) {
    if (n < 6) {
        return func_000127F8(0x1000000 << n, 1);
    }
    return 0x80000102;
}

s32 func_00012730(u32 n) {
    if (n < 6) {
        return func_000127F8(0x1000000 << n, 0);
    }
    return 0x80000102;
}

s32 func_00012774(s32 a0) {
    return func_000127AC(a0, 1);
}

s32 func_00012790(s32 a0) {
    return func_000127AC(a0, 0);
}

INCLUDE_ASM("nonmatchings/rebooti_011950", func_000127AC);

s32 func_000127F8(u32 mask, s32 on) {
    u32 v = *(volatile u32 *)0xBC100078;
    u32 n = v & ~mask;
    s32 old = (v & mask) != 0;
    if (on) {
        n = v | mask;
    }
    *(volatile u32 *)0xBC100078 = n;
    return old;
}

INCLUDE_RODATA("nonmatchings/rebooti_011950", D_00014E40);
