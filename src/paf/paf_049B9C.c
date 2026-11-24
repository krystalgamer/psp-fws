/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

s32 func_00049B9C(void *arg0) {
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

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_049B9C", func_00049BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_049B9C", func_00049CB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_049B9C", func_00049D58);

void func_00049E00(void *arg0) {
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

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_049B9C", D_00171564);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_049B9C", D_00171580);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_049B9C", D_0017158C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_049B9C", D_001715A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_049B9C", D_001715C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_049B9C", D_001715E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_049B9C", func_00049E60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_049B9C", func_00049EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_049B9C", func_00049F68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_049B9C", func_0004A074);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_049B9C", func_0004A108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_049B9C", func_0004A158);

void func_0004A1F8(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171640;
}

void func_0004A228(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171640;
}

