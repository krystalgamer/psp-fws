#include "common.h"
#include "lftv_main_plugin_decls.h"

void func_00004310(s32 arg0) {
    scePaf_66907719();
    if (arg0 != 0) {

    } else {
        func_00001D58();
    }
}

void func_0000434C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_v0 == 0) {

    } else {
        func_0002CFF8(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_0000437C);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", D_00057364);

INCLUDE_RODATA("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", D_00057378);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_00004414);

s32 func_000045FC(void *arg0) {
    func_0000434C(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_0000461C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_0000467C);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_000046BC);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_00004794);

s32 func_00004858(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_00004860);

s32 func_00004914(void *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x14);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 8) >= 2;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_00004934);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_00004A38);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_00004A78);

s32 func_00004AB8(void *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x18);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 4);
    }
    return var_v0;
}

s32 func_00004AD0(void *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x18);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 0x10);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_00004AE8);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_00004C04);

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_00004E08);

void func_00004E84(void) {
    func_00004E08(1, 0xFFFF);
}

void func_00004EA4(void) {
    func_00004E08(0, 0xFFFF);
}

void func_00004EC4(void) {
    func_00005090();
}

INCLUDE_ASM("tmp/asm/282/lftv_main_plugin/nonmatchings/lftv_main_plugin_004310", func_00004EE0);

