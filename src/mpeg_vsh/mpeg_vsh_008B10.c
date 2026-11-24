/* cflags: -Os -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008B10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008C5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008DA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008E98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008F78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00008FD4);
#endif

#if FW_VERSION != 100
void func_00008FF0(void) {
}
#endif

#if FW_VERSION != 100
s32 func_00008FF8(struct Unk_func_00008FF8_0 *arg0) {
    return arg0->unkC == 0;
}
#endif

#if FW_VERSION != 100
s32 func_00009004(struct Unk_func_00009004_0 *arg0) {
    return arg0->unkC == arg0->unk0;
}
#endif

#if FW_VERSION != 100
s32 func_00009018(struct Unk_func_00009018_0 *arg0) {
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009020);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009074);
#endif

#if FW_VERSION != 100
s32 func_000090DC(struct Unk_func_000090DC_0 *arg0) {
    return arg0->unk0 - arg0->unkC;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000090EC);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006728);
#endif

#if FW_VERSION == 100
void func_00006768(s32 arg0, s32 arg1) {
    func_00006614(arg1, arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_0000678C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000067B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006854);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006884);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006A48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006A90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006AC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006B2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006D04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006D5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006DA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006E74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00006F48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000072D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000072F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_0000732C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00007340);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_0000736C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00007398);
#endif

#if FW_VERSION == 100
M2C_UNK *func_000073AC(void) {
    return &D_00007C61;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009194);
#endif

#if FW_VERSION != 100
s32 func_00009214(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009224);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_0000744C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_000092B8);
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009504);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009530);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009548);

INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009568);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/mpeg_vsh_008B10", func_00009594);
#endif

INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009BC8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00007B08);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009BD8);
#endif

INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009C58);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009CAC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009CB0);
#endif

INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009CB8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00007BC4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009CBC);
#endif

INCLUDE_RODATA("nonmatchings/mpeg_vsh_008B10", D_00009CC4);
