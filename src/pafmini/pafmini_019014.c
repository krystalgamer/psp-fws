/* cflags: -O1 */
#include "common.h"
#include "pafmini_decls.h"

s32 func_00019014(void *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x11) != 0) {
        var_a1 = 1;
        if ((M2C_FIELD(arg0, s32 *, 8) * M2C_FIELD(arg0, s32 *, 0xC)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x11) = 0U;
            M2C_FIELD(arg0, s8 *, 0x10) = 0;
        }
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", func_00019048);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", func_00019128);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", func_000191D0);

void func_00019278(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x50) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = 0;
    M2C_FIELD(arg0, s16 *, 0x4A) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", D_000D1D54);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", D_000D1D70);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", D_000D1D7C);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", D_000D1D98);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", D_000D1DB4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", D_000D1DD0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", func_000192D8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", func_00019330);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", func_000193E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", func_000194EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", func_00019580);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_019014", func_000195D0);

void func_00019670(M2C_UNK **arg0) {
    func_00013B68(arg0);
    *arg0 = &D_000D1E30;
}

void func_000196A0(M2C_UNK **arg0) {
    func_00013B68(arg0);
    *arg0 = &D_000D1E30;
}

