/* cflags: -O1 */
#include "common.h"
#include "common_gui_decls.h"

void func_000008C8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg5;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = arg4;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

void func_000008F0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg5;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x20) = arg4;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", func_00000918);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", func_000009F0);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", D_00003314);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", D_00003324);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", func_00000AC8);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", func_00000BE4);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", func_00000D4C);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", func_00000E24);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", func_00000E54);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", func_00000EB4);

void func_00000EFC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", func_00000F04);

void func_00000F6C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
}

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", sceVshCommonGui_10906D79);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", sceVshCommonGui_0D5D87F2);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", sceVshCommonGui_4B8E817A);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", func_00001100);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_0008C8", sceVshCommonGui_FE305D6D);

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

void sceVshCommonGui_88F5E3A8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

