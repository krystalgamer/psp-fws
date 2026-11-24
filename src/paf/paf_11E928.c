#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011E928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011E950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", scePaf_93538664);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011ED98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011EE50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011EEFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011EF90);

void func_0011F03C(void) {
    func_0011EF90(1, 0xFFFF);
}

void func_0011F05C(void) {
    func_0011EF90(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F07C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F0FC);

void ***func_0011F188(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F1F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F22C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", scePaf_2F3C4ED2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F29C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F3DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F470);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F4EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F54C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", scePaf_952CE8AF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F614);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F634);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F6A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011F970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011FC4C);

s32 func_0011FCF0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38) * (3 - M2C_FIELD(arg0, s32 *, 0x1C));
}

void func_0011FD0C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011FD14);

void func_0011FD94(void) {
    func_0011FD14(1, 0xFFFF);
}

void func_0011FDB4(void) {
    func_0011FD14(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011FDD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011FE34);

void func_0011FE94(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
}

void func_0011FEB0(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011FECC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0011FF68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_001200E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_001202CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", sceCccStrlenUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", sceCccStrlenUTF8);

u32 sceCccIsValidUCS4(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_11E928", func_0012037C);

