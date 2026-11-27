/* cflags[100]: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030680);
#else
void func_00030680(s32 arg0) {
    func_000244E8(arg0, (s32) &D_00048F28, (s32) &D_00048F34);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065060;
    if (func_00030A3C(arg0 + 0x38) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000306D0);
#else
void func_000306D0(s32 arg0) {
    func_000244E8(arg0, (s32) &D_00048F28, (s32) &D_00048F34);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065060;
    if (func_00030A3C(arg0 + 0x38) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030720);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00030720(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065060;
    if (temp_v1 != 0) {
        func_000267C8(temp_v1);
    }
    func_000245A8((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00030720(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065060;
    func_000267C8(M2C_FIELD(arg0, s32 *, 0x38));
    func_000245A8((s32) arg0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030770);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00030770(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065060;
    if (temp_v1 != 0) {
        func_000267C8(temp_v1);
    }
    func_000245A8((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00030770(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065060;
    func_000267C8(M2C_FIELD(arg0, s32 *, 0x38));
    func_000245A8((s32) arg0);
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000307C0);
#endif

#if FW_VERSION == 150
void func_000307C0(s32 **arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
    M2C_FIELD(arg0, s32 **, 0) = &D_00065060;
    if (temp_v1 != 0) {
        func_000267C8(temp_v1);
    }
    func_000245A8((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 100
void func_000307C0(s32 **arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00065060;
    func_000267C8(M2C_FIELD(arg0, s32 *, 0x38));
    func_000245A8((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00048EB0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00048EF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00048F28);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00048F34);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030818);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000308F0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030974);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000309A8);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000266AC(void *arg0) {
    func_00030CCC(M2C_FIELD(arg0, s32 *, 0x3C));
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000266AC(void *arg0) {
    func_00030CCC(M2C_FIELD(arg0, s32 *, 0x38));
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000266CC(void *arg0) {
    func_00030CE8(M2C_FIELD(arg0, s32 *, 0x3C));
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000266CC(void *arg0) {
    func_00030CE8(M2C_FIELD(arg0, s32 *, 0x38));
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000266EC(void *arg0) {
    func_00030B34(M2C_FIELD(arg0, s32 *, 0x3C));
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000266EC(void *arg0) {
    func_00030B34(M2C_FIELD(arg0, s32 *, 0x38));
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_000309DC(struct Unk_func_000309DC_0 *arg0) {
    func_00030CCC(arg0->unk3C);
    return 0;
}

s32 func_000309FC(struct Unk_func_000309FC_0 *arg0) {
    func_00030CE8(arg0->unk3C);
    return 0;
}

s32 func_00030A1C(struct Unk_func_00030A1C_0 *arg0) {
    func_00030B34(arg0->unk3C);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030A3C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000267C8);
#else
s32 func_00030AF8(struct Unk_func_00030AF8_0 *arg0) {
    func_00030D84(arg0->unk0);
    func_000310FC(arg0->unk4);
    sce_paf_private_free(arg0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030B34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030B50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030BAC);

#if FW_VERSION < 201
s32 func_00026950(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 8);
    return 0;
}

s32 func_00026960(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 8) = 3;
    temp_v0 = func_00030E34(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 8) = 1;
    return temp_v0 != 0;
}
#else
s32 func_00030C80(struct Unk_func_00030C80_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk8;
    return 0;
}

s32 func_00030C90(struct Unk_func_00030C90_0 *arg0) {
    s32 temp_v0;

    arg0->unk8 = 3;
    temp_v0 = func_00030E34(arg0->unk0);
    arg0->unk8 = 1;
    return temp_v0 != 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030CCC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030CE8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030D04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030D84);

s32 func_00030DB8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030DC4);

s32 func_00030E24(struct Unk_func_00030E24_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk8;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030E34);

s32 func_00030F2C(struct Unk_func_00030F2C_0 *arg0) {
    arg0->unkC = 1;
    return 0;
}

s32 func_00030F3C(struct Unk_func_00030F3C_0 *arg0) {
    arg0->unkC = 0;
    return 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00026C18(u32 arg0) {
    u32 temp_v1;
    u32 var_a0;

    var_a0 = arg0;
    temp_v1 = var_a0 + 0x50;
    if (var_a0 < temp_v1) {
        do {
            M2C_FIELD(var_a0, s32 *, 0xC) = 0;
            var_a0 += 0x10;
        } while (var_a0 < temp_v1);
    }
}
#endif

#if FW_VERSION == 100
void func_00026C18(u32 arg0) {
    u32 temp_v1;
    u32 var_a0;

    var_a0 = arg0;
    temp_v1 = var_a0 + 0x80;
    if (var_a0 < temp_v1) {
        do {
            M2C_FIELD(var_a0, s32 *, 0xC) = 0;
            var_a0 += 0x10;
        } while (var_a0 < temp_v1);
    }
}
#endif

#if FW_VERSION == 201
void func_00030F48(u32 arg0) {
    u32 temp_v1;
    u32 var_a0;

    var_a0 = arg0;
    temp_v1 = var_a0 + 0xC0;
    if (var_a0 < temp_v1) {
        do {
            M2C_FIELD(var_a0, s32 *, 0xC) = 0;
            var_a0 += 0x10;
        } while (var_a0 < temp_v1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030F74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030F9C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030FE8);

s32 func_000310BC(s32 **arg0) {
    s32 *temp_v0;
    s32 var_v1;

    temp_v0 = sce_paf_private_malloc(4);
    var_v1 = 2;
    if (temp_v0 != NULL) {
        *arg0 = temp_v0;
        var_v1 = 0;
        *temp_v0 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000310FC);

s32 func_0003111C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return 0;
}

s32 func_00031128(s32 *arg0) {
    return func_00033114(*arg0) != 0;
}

#if FW_VERSION < 201
s32 func_00026E18(s32 *arg0) {
    return func_000330CC(*arg0) != 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00026E38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00027118);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000273F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000275CC);
#else
s32 func_00031148(s32 *arg0) {
    return func_000330CC(*arg0) != 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031168);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031440);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031718);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031978);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031BD8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_0002797C);
#else
void func_00031E40(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031E48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031EE8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031F9C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065000);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065040);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_0006504C);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065060);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065078);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065084);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065090);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00027A40);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000283D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00028498(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x94) == 0) {
        M2C_FIELD(arg0, s32 *, 0x94) = arg1;
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_00028498(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x90) == 0) {
        M2C_FIELD(arg0, s32 *, 0x90) = arg1;
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000284B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002852C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2C9) = 0;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0002852C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x391) = 0;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00028538);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00032094);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00032B58);

s32 func_00032C70(struct Unk_func_00032C70_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 2;
    if (arg0->unkA8 == 0) {
        arg0->unkA8 = arg1;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00032C8C);

s32 func_00032DE0(struct Unk_func_00032DE0_0 *arg0) {
    arg0->unk5F1 = 0;
    return 0;
}

void func_00032DEC(s32 arg0, s32 arg1, s32 arg2) {
    func_00032E08(arg0, arg1, arg2, 0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00032E08);
#endif
