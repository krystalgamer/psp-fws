#include "common.h"
#include "sm1_decls.h"

INCLUDE_ASM("nonmatchings/sm1", module_start);

INCLUDE_ASM("nonmatchings/sm1", func_0000003C);

s32 func_000000E8(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_000004B0 += 1;
    sceKernelCpuResumeIntr(temp_a0);
    return D_000004B0;
}

s32 func_00000124(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_000004B0 -= 1;
    sceKernelCpuResumeIntr(temp_a0);
    return D_000004B0;
}

s32 func_00000160(void) {
    return D_000004B0;
}

s32 func_0000016C(void) {
    return D_000004B4;
}

s32 func_00000178(void) {
    return D_000004B8;
}

s32 func_00000184(void) {
    return D_000004BC;
}

INCLUDE_ASM("nonmatchings/sm1", func_00000190);

INCLUDE_ASM("nonmatchings/sm1", func_00000214);

s32 func_000002D0(s32 arg) {
    u32 bus = *(volatile u32 *)0xBC100040;
    s32 intr;

    if (bus & 8) {
        D_000004C0 = arg;
        *(volatile u16 *)0xB1800020 = arg;
        return 0;
    }
    intr = sceKernelCpuSuspendIntr();
    *(volatile u32 *)0xBC100040 = (bus & ~0xC) | 8;
    D_000004C0 = arg;
    *(volatile u32 *)0xBC100040 = bus;
    *(volatile u16 *)0xB1800020 = arg;
    sceKernelCpuResumeIntrWithSync(intr);
    return 0;
}

s32 func_00000360(void) {
    return D_000004C0;
}

s32 func_0000036C(void) {
    return 0;
}
