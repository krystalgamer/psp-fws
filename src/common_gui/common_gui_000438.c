/* cflags: -Os */
#include "common.h"
#include "common_gui_decls.h"

#if FW_VERSION >= 350
void func_00000438(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_5E4447F6(arg1);
    }
    func_00000488(arg0, arg1, var_v0);
}
#else
void func_00000438(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00000488(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00000488);

#if FW_VERSION >= 350
void sceVshCommonGui_6F4C9FDB(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_88784487(&D_00003264);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_DCE3D225(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 0x6C)();
        }
    }
}

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_E4ED451E);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003A80);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003A84);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003A8C);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003AB4);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003AC4);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003C34);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003CEC);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003CF4);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003234);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003D34);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003244);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003248);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_80271F41);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_1CF884A1);
#endif

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003250);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003260);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003264);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/common_gui_000438", func_000005CC_v152);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_DE027583);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_35E7A91E);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_5074C948);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/common_gui_000438", func_000005CC_v100);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_35D57A35);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_57F57F40);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_FA9B7ABD);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_000018B0);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_1BCCB74A);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/common_gui_000438", func_00003044);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/common_gui_000438", func_00001C78);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_4016357A);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_F4FD56D2);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_16DA723A);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_01B60A5C);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_61A1FA3A);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_5D36BCE6);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_9C50A821);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00002BF0);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00002DC0);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_9FAA1BC2);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00002F78);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B68);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B6C);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B70);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B74);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B78);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B7C);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B80);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B84);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B88);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B8C);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B90);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B94);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B98);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007B9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_C4D809CB);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_72C75A14);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_566AA22F);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007BC0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_B97EAE7A);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_8A029A78);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_A939DDF9);
#endif

#if FW_VERSION < 201
void sceVshCommonGui_FA1DE461(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/common_gui_000438", func_00004E1C);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00004F24);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00004FEC);
#endif

#if FW_VERSION < 201
void func_00003508(void **arg0, void *arg1) {
    *arg0 = arg1;
    func_000008A8(arg0);
}

void func_00003528(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00003588((s32) arg0);
}

void func_00003548(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_000035B8((s32) arg0);
}

void func_000008A8(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(temp_a0, s32 *, 4) + 1);
    }
}

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00003588);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_000035B8);
#endif

INCLUDE_ASM("nonmatchings/common_gui_000438", func_000005CC);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003284);

#if FW_VERSION >= 260
void func_0000061C(void) {
    func_000005CC((s32) "msgsystem_yes");
}

void func_0000063C(void) {
    func_000005CC((s32) "msgsystem_no");
}
#endif

#if FW_VERSION >= 350
void sceVshCommonGui_30FA68C3(void) {
    func_000005CC((s32) "msgsystem_enter");
}

void sceVshCommonGui_EC899EBE(void) {
    func_000005CC((s32) "msgsystem_back");
}

void sceVshCommonGui_C9529428(void) {
    func_000005CC((s32) "msgsystem_option");
}

void sceVshCommonGui_6BC16C05(void) {
    func_000005CC((s32) "msgsystem_cancel");
}

void sceVshCommonGui_00FBD201(void) {
    func_000005CC((s32) "msgsystem_ok");
}

void sceVshCommonGui_3E737100(void) {
    func_000005CC((s32) "msgshare_opt_edit");
}

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_94A57343);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_1F02F9D5);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_74D1220B);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
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
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void sceVshCommonGui_C00B308F(void) {
    func_000005CC((s32) "msgsystem_ok");
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 300
void func_000006DC(void) {
    func_000005CC((s32) "msgsystem_ok");
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_473110B6);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_CC7BFDB1);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_E9930C29);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_5C161337);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_7DB9C54A);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void sceVshCommonGui_E9B8D6AB(void) {
    func_000005CC((s32) "msgshare_opt_edit");
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_D4353F96);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_4704D5BD);
#endif

#if FW_VERSION == 100
void sceVshCommonGui_A0334323(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00003314);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 0x3C)();
        }
    }
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_071749CE);
#endif

void func_00000888(void **arg0, void **arg1) {
    *arg0 = *arg1;
    func_000008A8(arg0);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000008A8(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(temp_a0, s32 *, 4) + 1);
    }
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_gui_000438", func_00005434);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00005458);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_gui_000438", func_000008D4);
#endif

#if FW_VERSION == 100
void func_00003878(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg4;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg5;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = arg3;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00003894(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg4;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg5;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = arg3;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", func_000038B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_gui_000438", func_000009F0);
#else
void func_000008A8(void **arg0) {
    struct Unk_func_000008A8_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    if (temp_a0 != NULL) {
        temp_a0->unk4 = (s32) (temp_a0->unk4 + 1);
    }
}
#endif
