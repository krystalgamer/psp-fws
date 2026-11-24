/* cflags: -O1 */
#include "common.h"
#include "common_gui_decls.h"

#if FW_VERSION == 282
void func_000008C8(struct Unk_func_000008C8_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    arg0->unk4 = arg1;
    arg0->unk10 = arg5;
    arg0->unk18 = arg2;
    arg0->unk1C = arg3;
    arg0->unk20 = arg4;
    arg0->unk24 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk14 = 0;
}

void func_000008F0(struct Unk_func_000008F0_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    arg0->unk4 = arg1;
    arg0->unk10 = arg5;
    arg0->unk18 = arg2;
    arg0->unk1C = arg3;
    arg0->unk20 = arg4;
    arg0->unk24 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk14 = 0;
}

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000918);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_000009F0);
#endif

INCLUDE_RODATA("nonmatchings/common_gui_0008C8", D_00003314);

INCLUDE_RODATA("nonmatchings/common_gui_0008C8", D_00003324);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000AC8);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000BE4);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000D4C);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000E24);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000E54);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000EB4);

void func_00000EFC(struct Unk_func_00000EFC_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000F04);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_1A6F3382);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_D27E08EE);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_A06734FF);
#else
void func_00000F6C(struct Unk_func_00000F6C_0 *arg0, s32 arg1) {
    arg0->unk24 = arg1;
}

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_10906D79);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_0D5D87F2);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_4B8E817A);
#endif

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00001100);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_FE305D6D);

void sceVshCommonGui_72E652AA(s32 *arg0) {
    scePaf_41BCFB59(*arg0);
}

#if FW_VERSION == 100
void sceVshCommonGui_9F196654(s32 *arg0) {
    scePaf_FA05BF7B(*arg0);
}
#else
void sceVshCommonGui_0131C97D(s32 *arg0) {
    scePaf_FE575092(*arg0);
}

void sceVshCommonGui_450F3CF0(s32 *arg0) {
    scePaf_6C3BBB68(*arg0);
}
#endif

s32 sceVshCommonGui_ACFE7BE7(void **arg0) {
    s32 var_v0;
    struct Unk_sceVshCommonGui_ACFE7BE7_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = temp_a0->unk84;
    }
    return var_v0;
}

#if FW_VERSION == 282
void sceVshCommonGui_88F5E3A8(struct Unk_sceVshCommonGui_88F5E3A8_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk14 = arg2;
    arg0->unkC = arg1;
}
#endif
