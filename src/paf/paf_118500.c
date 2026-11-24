#include "common.h"
#include "paf_decls.h"

void func_00118500(struct Unk_func_00118500_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_0019D210, 0x200U, 4U, NULL);
}

void func_00118548(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118564(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118580(struct Unk_func_00118580_0 *arg0) {
    if (sceKernelPollEventFlag(arg0->unk0, 1, 0x20, 0) >= 0) {
        arg0->unkC = arg0->unk4(arg0->unk8);
        arg0->unk4 = NULL;
        arg0->unk8 = 0;
        sceKernelSetEventFlag(arg0->unk0, 2);
    }
}

s32 scePaf_EB346F51(struct Unk_scePaf_EB346F51_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    sceKernelWaitEventFlag(arg0->unk0, 4U, 0x20, NULL, NULL);
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 0;
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
    sceKernelWaitEventFlag(arg0->unk0, 2U, 0x20, NULL, NULL);
    temp_s1 = arg0->unkC;
    sceKernelSetEventFlag((s32) arg0->unk0, 4);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/paf_118500", func_00118674);

void func_001186F0(void) {
    func_00118674(1, 0xFFFF);
}

void func_00118710(void) {
    func_00118674(0, 0xFFFF);
}

INCLUDE_RODATA("nonmatchings/paf_118500", D_0019CE48);

INCLUDE_RODATA("nonmatchings/paf_118500", D_0019CEE0);

INCLUDE_RODATA("nonmatchings/paf_118500", D_0019CEF8);

INCLUDE_RODATA("nonmatchings/paf_118500", D_0019CFCC);

INCLUDE_RODATA("nonmatchings/paf_118500", D_0019CFE8);

INCLUDE_RODATA("nonmatchings/paf_118500", D_0019D0C8);

INCLUDE_RODATA("nonmatchings/paf_118500", D_0019D160);

INCLUDE_RODATA("nonmatchings/paf_118500", D_0019D1F0);

INCLUDE_RODATA("nonmatchings/paf_118500", D_0019D204);

INCLUDE_RODATA("nonmatchings/paf_118500", D_0019D210);

INCLUDE_ASM("nonmatchings/paf_118500", scePaf_96857E81);

INCLUDE_ASM("nonmatchings/paf_118500", scePaf_E977B833);

