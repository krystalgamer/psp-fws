#include "common.h"
#include "chnnlsv_decls.h"

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", func_00000000);

INCLUDE_RODATA("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", D_000019A0);

INCLUDE_RODATA("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", D_000019B0);

INCLUDE_RODATA("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", D_000019C0);

INCLUDE_RODATA("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", D_000019D0);

INCLUDE_RODATA("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", D_000019E0);

INCLUDE_RODATA("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", D_000019F0);

s32 module_start(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("SceChnnlsv1", 0U, 1, 1, NULL);
    D_00002AD4 = temp_v0;
    var_v1 = 1;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema("SceChnnlsv2", 0U, 1, 1, NULL);
        D_00002AD8 = temp_v0_2;
        var_v1 = 0;
        if (temp_v0_2 <= 0) {
            sceKernelDeleteSema(D_00002AD4);
            var_v1 = 1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", module_stop);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", sceChnnlsv_driver_E7833020);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", sceChnnlsv_driver_F21A1FCA);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", sceChnnlsv_driver_C4C494F8);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", sceChnnlsv_driver_ABFDFC8B);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", sceChnnlsv_driver_850A7FA1);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", sceChnnlsv_driver_21BE78B4);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", func_000013F0);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", func_00001440);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", func_00001490);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", func_000014E4);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", func_00001538);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", func_000015D8);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", func_00001688);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", func_00001724);

INCLUDE_ASM("tmp/asm/352/chnnlsv/nonmatchings/chnnlsv", func_000017D0);
