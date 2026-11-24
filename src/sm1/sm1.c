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

INCLUDE_ASM("nonmatchings/sm1", func_0000016C);

INCLUDE_ASM("nonmatchings/sm1", func_00000178);

INCLUDE_ASM("nonmatchings/sm1", func_00000184);

INCLUDE_ASM("nonmatchings/sm1", func_00000190);

INCLUDE_ASM("nonmatchings/sm1", func_00000214);

INCLUDE_ASM("nonmatchings/sm1", func_000002D0);

INCLUDE_ASM("nonmatchings/sm1", func_00000360);

s32 func_0000036C(void) {
    return 0;
}
