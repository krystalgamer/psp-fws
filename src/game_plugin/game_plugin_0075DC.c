/* cflags: -O2 */
#include "common.h"
#include "game_plugin_decls.h"

#if FW_VERSION == 282
void func_000075DC(struct Unk_func_000075DC_0 *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    struct Unk_func_000075DC_var_v0 *var_v0;

    var_v1 = arg0->unk0;
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_7EC15225(var_v0);
            var_v1 = arg0->unk0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    arg0->unk4 = 0;
    temp_v0 = arg0->unk0;
    *temp_v0 = temp_v0;
}

void ***func_00007638(void ***arg0, struct Unk_func_00007638_1 *arg1, void **arg2) {
    void **temp_s0;
    struct Unk_func_00007638_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    *temp_s0 = temp_v1->unk0;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_000076A0);

#if FW_VERSION == 282
void func_000076CC(void) {
    func_000076A0();
}
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_00011F38);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00006790);

INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_00010FE4);

INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_00010FF4);

INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_0001100C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_00011034);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_00011058);
#else
INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_000076E8);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_00012038);

INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_00012050);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_000110B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_000124D8);

INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_000124F0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_000124E8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_00012508);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_0075DC", D_000110D8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00006994);

INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00006B24);

void func_00006B84(void) {
    func_00006B24(0);
}

INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00006BA0);

INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00006BE4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00006C00);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_000078F8);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00007AF4);

INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00007ED0);

#if FW_VERSION < 282
void func_0000731C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00008020();
}
#else
void func_00007F88(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00008020();
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00007FA8);

INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00008020);

#if FW_VERSION < 282
void func_000073D4(void *arg0) {
    vsh_5452A47B();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00012158;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
}

void func_0000740C(void *arg0) {
    vsh_5452A47B();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00012158;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
}
#else
void func_00008040(struct Unk_func_00008040_0 *arg0) {
    vsh_5452A47B();
    arg0->unk0 = &D_00012158;
    arg0->unk30 = -1;
}

void func_00008078(struct Unk_func_00008078_0 *arg0) {
    vsh_5452A47B();
    arg0->unk0 = &D_00012158;
    arg0->unk30 = -1;
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_000080B0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00007490);
#else
void func_000080FC(struct Unk_func_000080FC_0 *arg0) {
    arg0->unk30 = -1;
    vsh_61FE226A();
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_0075DC", func_00008120);

#if FW_VERSION < 282
void func_000074E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    func_00008120();
}

void func_00007500(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    vsh_7ADF6A69();
}
#else
void func_00008160(struct Unk_func_00008160_0 *arg0, s32 arg1) {
    arg0->unk30 = arg1;
    func_00008120();
}

void func_00008180(struct Unk_func_00008180_0 *arg0) {
    arg0->unk30 = -1;
    vsh_7ADF6A69();
}
#endif
