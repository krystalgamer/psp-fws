/* cflags: -O2 -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_00007DE4);

s32 func_00007DF4(s32 arg0) {
    s32 temp_s1;

    func_000079D8(D_00009F80);
    temp_s1 = sceVideocodec_DBA273FA(arg0, 0);
    func_00007A68(D_00009F80);
    return temp_s1;
}

s32 func_00007E48(s32 arg0) {
    s32 temp_s1;

    func_000079D8(D_00009F80);
    temp_s1 = sceVideocodec_A2F0564E(arg0, 0);
    func_00007A68(D_00009F80);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_00007E9C);

s32 func_00007F04(void *arg0, s32 arg1) {
    s32 temp_s1;

    func_000079D8(D_00009F80);
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    temp_s1 = sceVideocodec_627B7D42(arg0, 0);
    func_00007A68(D_00009F80);
    return temp_s1;
}

s32 func_00007F64(void *arg0, s32 arg1) {
    s32 temp_s1;

    func_000079D8(D_00009F80);
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    temp_s1 = sceVideocodec_17CF7D2C(arg0, 0);
    func_00007A68(D_00009F80);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_00007FC4);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_000081C4);

s32 func_00008734(void) {
    return 0x588;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_0000873C);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_000087A4);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_00008820);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_000088AC);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_00008958);

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_00008A58);

s32 func_00008A90(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_000079D8(D_00009F84);
    temp_s1 = func_000088AC(arg0, arg1, 0);
    func_00007A68(D_00009F84);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/mpeg_vsh/nonmatchings/mpeg_vsh_007DE4", func_00008AF0);

