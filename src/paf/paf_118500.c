#include "common.h"
#include "paf_decls.h"

void func_00118500(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_0019D210, 0x200U, 4U, NULL);
}

void func_00118548(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118564(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118580(void *arg0) {
    if (sceKernelPollEventFlag(M2C_FIELD(arg0, s32 *, 0), 1, 0x20, 0) >= 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = M2C_FIELD(arg0, s32 (**)(s32), 4)(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 (**)(s32), 4) = NULL;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0), 2);
    }
}

s32 scePaf_EB346F51(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 4U, 0x20, NULL, NULL);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0xC);
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 4);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_118500", func_00118674);

void func_001186F0(void) {
    func_00118674(1, 0xFFFF);
}

void func_00118710(void) {
    func_00118674(0, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_118500", D_0019CE48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_118500", D_0019CEE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_118500", D_0019CEF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_118500", D_0019CFCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_118500", D_0019CFE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_118500", D_0019D0C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_118500", D_0019D160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_118500", D_0019D1F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_118500", D_0019D204);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_118500", D_0019D210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_118500", scePaf_96857E81);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_118500", scePaf_E977B833);

