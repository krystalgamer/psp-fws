#include "common.h"
#include "pops_decls.h"

INCLUDE_ASM("nonmatchings/pops_0348E8", func_000348E8);

s32 func_000348F8(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00034900);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00034A00);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00034B00);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00034B28);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00034D50);

void func_00035298(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if (D_00855570 == 0) {
        D_00855574 = temp_a0;
    }
    D_00855570 += 1;
}

INCLUDE_ASM("nonmatchings/pops_0348E8", func_000352D4);

INCLUDE_RODATA("nonmatchings/pops_0348E8", D_0010DB8C);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00035340);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00035450);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_0003555C);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_000355E0);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_000357C0);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00035814);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_000358A8);

s32 func_00035ACC(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    D_00858D30 = 0;
    temp_v0 = func_00034518(arg1);
    if (temp_v0 != -1) {

    } else if (D_00858D30 != 0) {
        *arg0 = D_00858D30;
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00035B28);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00035B9C);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00035E18);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00035F54);

void func_0003600C(struct Unk_func_0003600C_0 *arg0, struct Unk_func_0003600C_1 *arg1) {
    void **temp_v0;

    if (arg1 != NULL) {
        temp_v0 = (arg1->unk4 * 4) + arg0->unk4C;
        arg1->unk0 = (void *) *temp_v0;
        *temp_v0 = arg1;
    }
}

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00036038);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00036268);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_000362F0);

void func_000363A8(s32 arg0, s32 arg1) {
    struct Unk_func_000363A8_temp_v0 *temp_v0;

    temp_v0 = func_00035F54(arg0, 1);
    temp_v0->unk14 = arg1;
    temp_v0->unk10 = 1;
}

INCLUDE_ASM("nonmatchings/pops_0348E8", func_000363DC);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_000365F4);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00036844);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00036A98);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00036E60);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00036F1C);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00037294);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_000374B8);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00037720);

INCLUDE_ASM("nonmatchings/pops_0348E8", func_00037834);

INCLUDE_RODATA("nonmatchings/pops_0348E8", D_0010DBE8);

INCLUDE_RODATA("nonmatchings/pops_0348E8", D_0010DBF8);

INCLUDE_RODATA("nonmatchings/pops_0348E8", D_0010DD10);

INCLUDE_RODATA("nonmatchings/pops_0348E8", D_0010DD14);

INCLUDE_RODATA("nonmatchings/pops_0348E8", D_0010DD18);

INCLUDE_RODATA("nonmatchings/pops_0348E8", D_0010DD1C);

INCLUDE_RODATA("nonmatchings/pops_0348E8", D_0010DD20);
