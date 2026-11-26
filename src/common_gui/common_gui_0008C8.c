/* cflags: -O1 */
#include "common.h"
#include "common_gui_decls.h"

#if FW_VERSION >= 282
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

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000CD4);
#endif

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000BE4);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000D4C);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000E24);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000E54);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000EB4);

void func_00000EFC(struct Unk_func_00000EFC_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00000F04);

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00000F4C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_1A6F3382);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_D27E08EE);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_A06734FF);
#endif

#if FW_VERSION >= 282
void func_00000F6C(struct Unk_func_00000F6C_0 *arg0, s32 arg1) {
    arg0->unk24 = arg1;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_D728DEEA);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_DCDB7963);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_B29AF676);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_10906D79);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_0D5D87F2);

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_4B8E817A);
#endif

INCLUDE_ASM("nonmatchings/common_gui_0008C8", func_00001100);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_605DF0DB);

void sceVshCommonGui_8F414E35(s32 *arg0) {
    scePaf_CA8AFB1B(*arg0);
}

void sceVshCommonGui_82535BC4(s32 *arg0) {
    scePaf_D88ADD11(*arg0);
}

void sceVshCommonGui_DDDE22B1(s32 *arg0) {
    scePaf_4208F869(*arg0);
}

void sceVshCommonGui_87B1CFE5(s32 *arg0) {
    scePaf_7C960C90(*arg0);
}

s32 sceVshCommonGui_37296C55(void **arg0) {
    s32 var_v0;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = M2C_FIELD(temp_a0, s32 *, 0x84);
    }
    return var_v0;
}

void sceVshCommonGui_9F41313E(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_2025D016);
#else
INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_FE305D6D);

void sceVshCommonGui_72E652AA(s32 *arg0) {
    scePaf_41BCFB59(*arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void sceVshCommonGui_77812115(s32 *arg0) {
    scePaf_6615D1B8(*arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void sceVshCommonGui_0131C97D(s32 *arg0) {
    scePaf_FE575092(*arg0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 350
void sceVshCommonGui_450F3CF0(s32 *arg0) {
    scePaf_6C3BBB68(*arg0);
}
#endif

#if FW_VERSION < 201
void sceVshCommonGui_9F196654(s32 *arg0) {
    scePaf_FA05BF7B(*arg0);
}
#endif

#if FW_VERSION < 350
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
#endif

#if FW_VERSION >= 152 && FW_VERSION < 350
void sceVshCommonGui_88F5E3A8(struct Unk_sceVshCommonGui_88F5E3A8_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk14 = arg2;
    arg0->unkC = arg1;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_gui_0008C8", sceVshCommonGui_70490BCC);
#endif
