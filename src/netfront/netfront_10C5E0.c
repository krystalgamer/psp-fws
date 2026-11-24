/* cflags: -O2 */
#include "common.h"
#include "netfront_decls.h"

void func_0010C5E0(void) {
    s32 temp_v0;

    temp_v0 = D_00134458 - 1;
    D_00134458 = temp_v0;
    if (temp_v0 != 0) {

    } else {
        sceKernelCpuResumeIntr(D_0013445C);
    }
}

s32 func_0010C61C(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    D_00135FE0 = 0;
    temp_v0 = func_0011A34C(arg1);
    if (temp_v0 != -1) {

    } else if (D_00135FE0 != 0) {
        *arg0 = D_00135FE0;
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010C678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010C6DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010C748);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010C7B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010C830);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010C8C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010C8E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010C930);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010CAB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010CB14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010CB60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010CC08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130828);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_0013082C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_0013083C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010CC84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010E69C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010E864);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010E93C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010E9F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010EBB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010EFD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010F0F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130AAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0010F338);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_00110784);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_00110880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_001108D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_0011094C);

void func_00110A30(s32 arg0) {
    func_00111290(arg0, (s32) &func_00110784);
}

void func_00110A50(void) {
    func_00110A30(D_00131678);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_00110A74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_00110AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_00110D74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_00110EB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_00111290);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130BFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", D_00130C68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_00111398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_10C5E0", func_00111438);

void func_00111444(s32 arg0, M2C_UNK arg1) {
    func_00111398(func_0010BB64(), arg0, arg1);
}

