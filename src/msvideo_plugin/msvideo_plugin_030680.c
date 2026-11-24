#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030680);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000306D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030720);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030770);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000307C0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00048EB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00048EF0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00048F28);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00048F34);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030818);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000308F0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030974);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000309A8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000266AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000266CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000266EC);
#endif

#if FW_VERSION != 100
s32 func_000309DC(struct Unk_func_000309DC_0 *arg0) {
    func_00030CCC(arg0->unk3C);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_000309FC(struct Unk_func_000309FC_0 *arg0) {
    func_00030CE8(arg0->unk3C);
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00030A1C(struct Unk_func_00030A1C_0 *arg0) {
    func_00030B34(arg0->unk3C);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030A3C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000267C8);
#endif

#if FW_VERSION != 100
s32 func_00030AF8(struct Unk_func_00030AF8_0 *arg0) {
    func_00030D84(arg0->unk0);
    func_000310FC(arg0->unk4);
    scePaf_545FE2DA(arg0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030B34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030B50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030BAC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00026950);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00026960);
#endif

#if FW_VERSION != 100
s32 func_00030C80(struct Unk_func_00030C80_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk8;
    return 0;
}
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030DB8);
#endif

#if FW_VERSION != 100
s32 func_00030DB8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030DC4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030E24);
#endif

#if FW_VERSION != 100
s32 func_00030E24(struct Unk_func_00030E24_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk8;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030E34);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030F2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00030F3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00026C18);
#endif

#if FW_VERSION != 100
s32 func_00030F2C(struct Unk_func_00030F2C_0 *arg0) {
    arg0->unkC = 1;
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00030F3C(struct Unk_func_00030F3C_0 *arg0) {
    arg0->unkC = 0;
    return 0;
}
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000310BC);
#endif

#if FW_VERSION != 100
s32 func_000310BC(s32 **arg0) {
    s32 *temp_v0;
    s32 var_v1;

    temp_v0 = scePaf_5FAC9869(4);
    var_v1 = 2;
    if (temp_v0 != NULL) {
        *arg0 = temp_v0;
        var_v1 = 0;
        *temp_v0 = 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000310FC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_0003111C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031128);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00026E18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00026E38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00027118);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000273F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000275CC);
#endif

#if FW_VERSION != 100
s32 func_0003111C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00031128(s32 *arg0) {
    return func_00033114(*arg0) != 0;
}
#endif

#if FW_VERSION != 100
s32 func_00031148(s32 *arg0) {
    return func_000330CC(*arg0) != 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031168);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031440);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031718);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031978);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031BD8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_0002797C);
#endif

#if FW_VERSION != 100
void func_00031E40(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031E48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031EE8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00031F9C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065000);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065040);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_0006504C);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065060);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065078);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065084);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_030680", D_00065090);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00027A40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000283D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00028498);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_000284B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_0002852C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00028538);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00032094);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00032B58);
#endif

#if FW_VERSION != 100
s32 func_00032C70(struct Unk_func_00032C70_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 2;
    if (arg0->unkA8 == 0) {
        arg0->unkA8 = arg1;
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00032C8C);
#endif

#if FW_VERSION != 100
s32 func_00032DE0(struct Unk_func_00032DE0_0 *arg0) {
    arg0->unk5F1 = 0;
    return 0;
}
#endif

#if FW_VERSION != 100
void func_00032DEC(s32 arg0, s32 arg1, s32 arg2) {
    func_00032E08(arg0, arg1, arg2, 0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_030680", func_00032E08);
#endif

