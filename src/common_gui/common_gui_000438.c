/* cflags: -Os */
#include "common.h"
#include "common_gui_decls.h"

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", func_00000438);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", func_00000488);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", sceVshCommonGui_80271F41);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", sceVshCommonGui_1CF884A1);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", D_00003250);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", D_00003260);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", D_00003264);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", func_000005CC);

INCLUDE_RODATA("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", D_00003284);

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

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", sceVshCommonGui_D4353F96);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", sceVshCommonGui_4704D5BD);

INCLUDE_ASM("tmp/asm/282/common_gui/nonmatchings/common_gui_000438", sceVshCommonGui_071749CE);

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

