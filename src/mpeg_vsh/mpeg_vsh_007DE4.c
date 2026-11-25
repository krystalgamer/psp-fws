/* cflags: -O2 -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

#if FW_VERSION == 282
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
#endif

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00008958);

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00007FC0(void) {
    if (M2C_FIELD(D_00009B80, s32 *, 0xC) == 0) {

    } else {
        sceAudiocodec_29681260(D_00009B80);
    }
}

s32 func_00007FF8(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_000079D8(D_00009C48);
    temp_s1 = func_00007E14(arg0, arg1, 0);
    func_00007A68(D_00009C48);
    return temp_s1;
}

s32 func_00008058(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_00009C2C;
    }
    return M2C_FIELD(D_00009B80, s32 *, 0xC);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00007348);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00007494);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_000075E0);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_000076D0);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_000077B0);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_0000780C);

void func_00007828(void) {

}

s32 func_00007830(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) == 0;
}

s32 func_0000783C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) == M2C_FIELD(arg0, s32 *, 0);
}

s32 func_00007850(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00007858);

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_000078AC);

s32 func_00007914(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00007924);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_000063E8);

void func_00006420(void) {

}

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00006428);

s32 func_00006508(void) {
    return M2C_FIELD(D_00007E40, s32 *, 0xC);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00006518);
#endif

#if FW_VERSION < 250
s32 func_00006518(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    func_000079D8(D_00007F08);
    temp_v0 = sceAudiocodec_70A703F8(arg0, 0x1000);
    if (temp_v0 != 0) {
        func_00007A68(D_00007F08);
        var_v0 = temp_v0;
    } else {
        func_00007A68(D_00007F08);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", module_start);

s32 module_stop(void) {
    func_00006048();
    func_00006420();
    return 0;
}

INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_000065DC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00006614);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_000072B0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mpeg_vsh_007DE4", func_00006688);
#endif

#if FW_VERSION < 282
u8 *func_000066C8(u8 *arg0, u8 *arg1, s32 arg2) {
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
#else
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
#endif
