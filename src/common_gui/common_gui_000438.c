/* cflags: -Os */
#include "common.h"
#include "common_gui_decls.h"

void func_00000438(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00000488(arg0, arg1, var_v0);
}

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00000488);

void sceVshCommonGui_80271F41(void) {
    s32 temp_v0;
    struct Unk_sceVshCommonGui_80271F41_temp_v0_2 *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00003264);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk6C();
        }
    }
}

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_1CF884A1);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003250);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003260);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003264);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_000005CC);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003284);

void func_0000061C(void) {
    func_000005CC((s32) "msgsystem_yes");
}

void func_0000063C(void) {
    func_000005CC((s32) "msgsystem_no");
}

void sceVshCommonGui_764A5495(void) {
    func_000005CC((s32) "msgsystem_enter");
}

void sceVshCommonGui_DBEE94DC(void) {
    func_000005CC((s32) "msgsystem_back");
}

void sceVshCommonGui_93107A60(void) {
    func_000005CC((s32) "msgsystem_option");
}

void sceVshCommonGui_B45ED019(void) {
    func_000005CC((s32) "msgsystem_cancel");
}

void func_000006DC(void) {
    func_000005CC((s32) "msgsystem_ok");
}

void sceVshCommonGui_E9B8D6AB(void) {
    func_000005CC((s32) "msgshare_opt_edit");
}

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_D4353F96);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_4704D5BD);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_071749CE);

void func_00000888(void **arg0, void **arg1) {
    *arg0 = *arg1;
    func_000008A8(arg0);
}

void func_000008A8(void **arg0) {
    struct Unk_func_000008A8_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = (s32) (temp_a0->unk4 + 1);
    }
}

