/* cflags: -Os -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00008B10);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00008C5C);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00008DA8);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00008E98);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00008F78);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00008FD4);

void func_00008FF0(void) {
}

s32 func_00008FF8(struct Unk_func_00008FF8_0 *arg0) {
    return arg0->unkC == 0;
}

s32 func_00009004(struct Unk_func_00009004_0 *arg0) {
    return arg0->unkC == arg0->unk0;
}

s32 func_00009018(struct Unk_func_00009018_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00009020);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00009074);

s32 func_000090DC(struct Unk_func_000090DC_0 *arg0) {
    return arg0->unk0 - arg0->unkC;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_000090EC);

u8 *func_00009134(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00009168);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00009194);

s32 func_00009214(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00009224);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_000092B8);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00009504);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00009530);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00009548);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00009568);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", func_00009594);

INCLUDE_RODATA("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", D_00009BC8);

INCLUDE_RODATA("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", D_00009BD8);

INCLUDE_RODATA("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", D_00009C58);

INCLUDE_RODATA("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", D_00009CAC);

INCLUDE_RODATA("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", D_00009CB0);

INCLUDE_RODATA("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", D_00009CB8);

INCLUDE_RODATA("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", D_00009CBC);

INCLUDE_RODATA("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_008B10", D_00009CC4);
