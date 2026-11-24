/* cflags: -O2 */
#include "common.h"
#include "game_plugin_decls.h"

void func_000075DC(void *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    void *var_v0;

    var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}

void ***func_00007638(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", func_000076A0);

void func_000076CC(void) {
    func_000076A0();
}

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", D_00011F38);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", func_000076E8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", D_00012038);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", D_00012050);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", func_000078F8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", func_00007AF4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", func_00007ED0);

void func_00007F88(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00008020();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", func_00007FA8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", func_00008020);

void func_00008040(void *arg0) {
    vsh_5452A47B();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00012158;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
}

void func_00008078(void *arg0) {
    vsh_5452A47B();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00012158;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", func_000080B0);

void func_000080FC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    vsh_61FE226A();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin_0075DC", func_00008120);

void func_00008160(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    func_00008120();
}

void func_00008180(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    vsh_7ADF6A69();
}

