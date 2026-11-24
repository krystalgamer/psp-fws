/* cflags: -O2 -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

s32 func_00007DE4(void) {
    return D_00009DC0->unk14;
}

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

s32 func_00007E9C(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    func_000079D8(D_00009F80);
    temp_v0 = sceVideocodec_307E6E1C(arg0, 0);
    if (temp_v0 != 0) {
        func_00007A68(D_00009F80);
        var_v0 = temp_v0;
    } else {
        func_00007A68(D_00009F80);
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_00007F04(struct Unk_func_00007F04_0 *arg0, s32 arg1) {
    s32 temp_s1;

    func_000079D8(D_00009F80);
    arg0->unk50 = arg1;
    temp_s1 = sceVideocodec_627B7D42(arg0, 0);
    func_00007A68(D_00009F80);
    return temp_s1;
}

s32 func_00007F64(struct Unk_func_00007F64_0 *arg0, s32 arg1) {
    s32 temp_s1;

    func_000079D8(D_00009F80);
    arg0->unk54 = arg1;
    temp_s1 = sceVideocodec_17CF7D2C(arg0, 0);
    func_00007A68(D_00009F80);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00007FC4);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_000081C4);

s32 func_00008734(void) {
    return 0x588;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_0000873C);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_000087A4);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00008820);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_000088AC);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00008958);

void func_00008A58(void) {
    if (D_00009EC0->unkC == 0) {

    } else {
        sceAudiocodec_29681260(D_00009EC0);
    }
}

s32 func_00008A90(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_000079D8(D_00009F84);
    temp_s1 = func_000088AC(arg0, arg1, 0);
    func_00007A68(D_00009F84);
    return temp_s1;
}

s32 func_00008AF0(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_00009F6C;
    }
    return D_00009EC0->unkC;
}

