#include "common.h"
#include "common_gui_decls.h"

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000024);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_000000AC);

s32 module_start(void) {
    func_00000000();
    return 0;
}

s32 module_stop(void) {
    func_00002DB8();
    return 0;
}

void sceVshCommonGui_68778E5A(void) {
    func_00002DB8();
}

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_A0DE7090);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_441D55D7);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_EEB86F0E);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_6C81492F);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_54BC644C);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_BAA1F762);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000438);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000488);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_80271F41);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_1CF884A1);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003250);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003260);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003264);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_000005CC);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003284);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_0000061C);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_0000063C);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_764A5495);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_DBEE94DC);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_93107A60);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_B45ED019);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_000006DC);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_E9B8D6AB);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_D4353F96);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_4704D5BD);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_071749CE);

void func_00000888(void **arg0, void **arg1) {
    *arg0 = *arg1;
    func_000008A8(arg0);
}

void func_000008A8(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(temp_a0, s32 *, 4) + 1);
    }
}

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_000008C8);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_000008F0);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000918);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_000009F0);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003314);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003324);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000AC8);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000BE4);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000D4C);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000E24);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000E54);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000EB4);

void func_00000EFC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00000F04);

void func_00000F6C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
}

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_10906D79);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_0D5D87F2);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_4B8E817A);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00001100);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_FE305D6D);

void sceVshCommonGui_72E652AA(s32 *arg0) {
    scePaf_41BCFB59(*arg0);
}

void sceVshCommonGui_0131C97D(s32 *arg0) {
    scePaf_FE575092(*arg0);
}

void sceVshCommonGui_450F3CF0(s32 *arg0) {
    scePaf_6C3BBB68(*arg0);
}

s32 sceVshCommonGui_ACFE7BE7(void **arg0) {
    s32 var_v0;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = M2C_FIELD(temp_a0, s32 *, 0x84);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_88F5E3A8);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_70490BCC);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_0000173C);

void func_000017BC(void) {
}

void func_000017C4(void) {
}

void func_000017CC(void) {
}

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003438);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_F4D1E387);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003454);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003468);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003528);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_000035E8);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_000036A8);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003768);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_00003798);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_0000379C);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_000037A0);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_000037A4);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_000037A8);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_000037AC);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_607D5C82);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_891E0954);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_C5B53362);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_A1C3DDD6);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_ADB52779);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_7C7B935B);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_8EB783F5);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_F7A03543);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_25D6E91D);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_0000295C);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00002988);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", sceVshCommonGui_CD76A885);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00002C7C);

void func_00002CE8(void) {
    func_00002C7C(1, 0xFFFF);
}

void func_00002D08(void) {
    func_00002C7C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00002D28);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00002D38);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui", func_00002D60);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui", D_000037F0);
