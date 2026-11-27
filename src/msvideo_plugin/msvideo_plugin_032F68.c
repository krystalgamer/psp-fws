/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
s32 func_00032F68(struct Unk_func_00032F68_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 2;
    if (arg0->unk548 != 0) {
        var_v1 = (func_00035A24(arg0->unkAC, arg1) == 0) ? 0 : 5;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00032F9C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_000285A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_000285D4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00032FEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00033030);

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00033090);

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_000330CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00033114);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002B7E4(void *arg0) {
    func_000296D0(M2C_FIELD(arg0, s32 *, 0x98));
    return 0;
}

s32 func_0002B804(void *arg0, s32 arg1, s32 arg2) {
    func_0002CFE4(M2C_FIELD(arg0, s32 *, 0x98), arg1, arg2);
    return 0;
}

void func_0002B824(void *arg0, s32 arg1, s32 arg2) {
    func_0002B804(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_0002B840);

s32 func_0002BBCC(s32 arg0) {
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0;
    void *var_a0_2;

    temp_s0 = arg0 + 0xA0;
    func_000250D4(arg0 + 0xB0);
    var_a0 = M2C_FIELD(temp_s0, void **, 4);
    if (var_a0 != NULL) {
        do {
            temp_v1 = M2C_FIELD(var_a0, void **, 0);
            M2C_FIELD(var_a0, s32 *, 8) = 0;
            M2C_FIELD(var_a0, void **, 0) = (void *) M2C_FIELD(temp_s0, void **, 8);
            M2C_FIELD(temp_s0, void **, 8) = var_a0;
            var_a0 = temp_v1;
        } while (temp_v1 != NULL);
    }
    M2C_FIELD(temp_s0, void **, 4) = NULL;
    temp_s0_2 = arg0 + 0x240;
    func_000250F0((s32) (temp_s0 + 0x10));
    func_000250D4(arg0 + 0x250);
    var_a0_2 = M2C_FIELD(temp_s0_2, void **, 4);
    if (var_a0_2 != NULL) {
        do {
            temp_v1_2 = M2C_FIELD(var_a0_2, void **, 0);
            M2C_FIELD(var_a0_2, s32 *, 8) = 0;
            M2C_FIELD(var_a0_2, void **, 0) = (void *) M2C_FIELD(temp_s0_2, void **, 8);
            M2C_FIELD(temp_s0_2, void **, 8) = var_a0_2;
            var_a0_2 = temp_v1_2;
        } while (temp_v1_2 != NULL);
    }
    M2C_FIELD(temp_s0_2, void **, 4) = NULL;
    func_000250F0((s32) (temp_s0_2 + 0x10));
    return 0;
}

s32 func_0002BC78(void *arg0) {
    func_00030974(M2C_FIELD(arg0, s32 *, 0x94), M2C_FIELD(arg0, s32 *, 0x98));
    return 0;
}

s32 func_00028784(void *arg0) {
    func_000309A8(M2C_FIELD(arg0, s32 *, 0x94));
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00028784(void *arg0) {
    func_000296D0(M2C_FIELD(arg0, s32 *, 0x94));
    return 0;
}

s32 func_000287A4(void *arg0, s32 arg1, s32 arg2) {
    func_00029D80(M2C_FIELD(arg0, s32 *, 0x94), arg1, arg2);
    return 0;
}

void func_000287C4(void *arg0, s32 arg1, s32 arg2) {
    func_000287A4(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_000287E0);

s32 func_00028B6C(s32 arg0) {
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0;
    void *var_a0_2;

    temp_s0 = arg0 + 0x9C;
    func_000250D4(arg0 + 0xAC);
    var_a0 = M2C_FIELD(temp_s0, void **, 4);
    if (var_a0 != NULL) {
        do {
            temp_v1 = M2C_FIELD(var_a0, void **, 0);
            M2C_FIELD(var_a0, s32 *, 8) = 0;
            M2C_FIELD(var_a0, void **, 0) = (void *) M2C_FIELD(temp_s0, void **, 8);
            M2C_FIELD(temp_s0, void **, 8) = var_a0;
            var_a0 = temp_v1;
        } while (temp_v1 != NULL);
    }
    M2C_FIELD(temp_s0, void **, 4) = NULL;
    temp_s0_2 = arg0 + 0x23C;
    func_000250F0((s32) (temp_s0 + 0x10));
    func_000250D4(arg0 + 0x24C);
    var_a0_2 = M2C_FIELD(temp_s0_2, void **, 4);
    if (var_a0_2 != NULL) {
        do {
            temp_v1_2 = M2C_FIELD(var_a0_2, void **, 0);
            M2C_FIELD(var_a0_2, s32 *, 8) = 0;
            M2C_FIELD(var_a0_2, void **, 0) = (void *) M2C_FIELD(temp_s0_2, void **, 8);
            M2C_FIELD(temp_s0_2, void **, 8) = var_a0_2;
            var_a0_2 = temp_v1_2;
        } while (temp_v1_2 != NULL);
    }
    M2C_FIELD(temp_s0_2, void **, 4) = NULL;
    func_000250F0((s32) (temp_s0_2 + 0x10));
    return 0;
}

s32 func_00028C18(void *arg0) {
    func_00030974(M2C_FIELD(arg0, s32 *, 0x90), M2C_FIELD(arg0, s32 *, 0x94));
    return 0;
}

s32 func_00028C3C(void *arg0) {
    func_000309A8(M2C_FIELD(arg0, s32 *, 0x90));
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_032F68", func_00028C5C);
#else
s32 func_00033158(struct Unk_func_00033158_0 *arg0) {
    func_00034C48(arg0->unkAC);
    return 0;
}

s32 func_00033178(struct Unk_func_00033178_0 *arg0) {
    func_000354AC(arg0->unkAC);
    return 0;
}

void func_00033198(struct Unk_func_00033178_0 *arg0) {
    func_00033178(arg0);
}
#endif
