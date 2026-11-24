/* cflags: -Os */
#include "common.h"
#include "game_plugin_decls.h"

INCLUDE_ASM("nonmatchings/game_plugin_0081A4", func_000081A4);

INCLUDE_ASM("nonmatchings/game_plugin_0081A4", func_000081FC);

#if FW_VERSION == 100
s32 func_000075F4(void *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_000081FC();
    var_v0 = -1;
    if (temp_v0 != 0) {
        scePaf_F609FA81(M2C_FIELD(arg0, s32 *, 4), temp_v0, 0, 0);
        scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4), temp_v0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
s32 func_00008274(struct Unk_func_00008274_0 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_000081FC();
    var_v0 = -1;
    if (temp_v0 != 0) {
        scePaf_F609FA81(arg0->unk4, temp_v0, 0, 0);
        scePaf_CAF05F1D(arg0->unk4, temp_v0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_0081A4", func_000082D0);

INCLUDE_ASM("nonmatchings/game_plugin_0081A4", func_00008394);

#if FW_VERSION == 100
s32 func_000077D8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION == 100
s32 func_000077E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION == 100
s32 func_000077E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_000077F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 100
s32 func_000077F8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}
#endif

#if FW_VERSION == 100
s32 func_00007800(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}
#endif

#if FW_VERSION == 100
s32 func_00007808(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION == 100
void func_00007810(void *arg0, s32 arg1) {
    scePaf_F609FA81(M2C_FIELD(arg0, s32 *, 4), arg1, 0, 0);
}
#endif

#if FW_VERSION == 100
void func_00007834(void *arg0, s32 arg1) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4), arg1);
}
#endif

#if FW_VERSION == 100
void func_00007850(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_0000786C(void *arg0) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION != 100
s32 func_00008458(struct Unk_func_00008458_0 *arg0) {
    return arg0->unk4;
}
#endif

#if FW_VERSION != 100
s32 func_00008460(struct Unk_func_00008460_0 *arg0) {
    return arg0->unk8;
}
#endif

#if FW_VERSION != 100
s32 func_00008468(struct Unk_func_00008468_0 *arg0) {
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_00008470(struct Unk_func_00008470_0 *arg0) {
    return arg0->unk10;
}
#endif

#if FW_VERSION != 100
s32 func_00008478(struct Unk_func_00008478_0 *arg0) {
    return arg0->unk14;
}
#endif

#if FW_VERSION != 100
s32 func_00008480(struct Unk_func_00008480_0 *arg0) {
    return arg0->unk18;
}
#endif

#if FW_VERSION != 100
s32 func_00008488(struct Unk_func_00008488_0 *arg0) {
    return arg0->unk1C;
}
#endif

#if FW_VERSION != 100
void func_00008490(struct Unk_func_00008490_0 *arg0, s32 arg1) {
    scePaf_F609FA81(arg0->unk4, arg1, 0, 0);
}
#endif

#if FW_VERSION != 100
void func_000084B4(struct Unk_func_000084B4_0 *arg0, s32 arg1) {
    scePaf_CAF05F1D(arg0->unk4, arg1);
}
#endif

#if FW_VERSION != 100
void func_000084D0(struct Unk_func_000084D0_0 *arg0) {
    scePaf_3481F595(arg0->unk4);
}
#endif

#if FW_VERSION != 100
void func_000084EC(struct Unk_func_000084EC_0 *arg0) {
    scePaf_DAB59652(arg0->unk4);
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_0081A4", func_00008508);

INCLUDE_ASM("nonmatchings/game_plugin_0081A4", func_00008530);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0081A4", func_000078EC);
#endif

#if FW_VERSION == 100
s32 func_0000797C(void) {
    scePaf_545FE2DA();
    return 0;
}
#endif

