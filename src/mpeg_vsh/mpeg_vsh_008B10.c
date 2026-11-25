/* cflags: -Os -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008B10);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008C5C);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008DA8);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008E98);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008F78);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008FD4);

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

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009020);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009074);

s32 func_000090DC(struct Unk_func_000090DC_0 *arg0) {
    return arg0->unk0 - arg0->unkC;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000090EC);

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
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009168);

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00007358);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006728);

void func_00006768(s32 arg0, s32 arg1) {
    func_00006614(arg1, arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_0000678C);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000067B4);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006854);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006884);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006A48);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006A90);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006AC4);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006B2C);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006D04);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006D5C);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006DA4);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006E74);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006F48);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000072D8);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000072F8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_0000732C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_0000732C(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00007340);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_0000736C);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00007398);

M2C_UNK *func_000073AC(void) {
    return &D_00007C61;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009194);

s32 func_00009214(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009224);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000091BC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_0000744C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000092B8);
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009504);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009530);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009548);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009568);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008C60);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009594);
#endif

INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009BC8);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009ACC);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00007B08);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009BD8);
#endif

INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009C58);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009380);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009BA4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009CAC);

INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009CB0);
#endif

INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009CB8);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00008880);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00007BC4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009CBC);
#endif

INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009CC4);
