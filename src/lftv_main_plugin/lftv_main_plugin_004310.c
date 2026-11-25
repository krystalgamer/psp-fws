#include "common.h"
#include "lftv_main_plugin_decls.h"

#if FW_VERSION == 282
void func_00004310(s32 arg0) {
    scePaf_66907719();
    if (arg0 != 0) {

    } else {
        func_00001D58();
    }
}
#endif

#if FW_VERSION == 250
void func_0000434C(struct Unk_func_0000434C_0 *arg0) {
    if (arg0 != NULL) {

    } else {
        func_00001D5C();
    }
}
#endif

#if FW_VERSION == 282
void func_0000434C(struct Unk_func_0000434C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk64;
    if (temp_v0 == 0) {

    } else {
        func_0002CFF8(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_0000437C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004310", D_00057364);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004310", D_00057378);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004414);

s32 func_000045FC(struct Unk_func_0000434C_0 *arg0) {
    func_0000434C(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_0000461C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_0000467C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_000046BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004794);

s32 func_00004858(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004860);

s32 func_00004914(struct Unk_func_00004914_0 *arg0) {
    s32 var_v0;
    struct Unk_func_00004914_temp_v1 *temp_v1;

    temp_v1 = arg0->unk14;
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = temp_v1->unk8 >= 2;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004934);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004A38);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004A78);

s32 func_00004AB8(struct Unk_func_00004AB8_0 *arg0) {
    s32 var_v0;
    struct Unk_func_00004AB8_temp_v1 *temp_v1;

    temp_v1 = arg0->unk18;
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = temp_v1->unk4;
    }
    return var_v0;
}

s32 func_00004AD0(struct Unk_func_00004AD0_0 *arg0) {
    s32 var_v0;
    struct Unk_func_00004AD0_temp_v1 *temp_v1;

    temp_v1 = arg0->unk18;
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = temp_v1->unk10;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004AE8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004C04);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004E08);

void func_00004E84(void) {
    func_00004E08(1, 0xFFFF);
}

void func_00004EA4(void) {
    func_00004E08(0, 0xFFFF);
}

#if FW_VERSION < 282
void func_00004688(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004698);
#endif

void func_00004EC4(void) {
    func_00005090();
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004310", func_00004EE0);
