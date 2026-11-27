/* lang: c++ */
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
        var_v0 = sce_paf_private_wcslen(arg1);
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

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh12BusyIcon_IncEv);
#endif

#if FW_VERSION < 201
void _ZN3vsh12BusyIcon_IncEv(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00003264);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 0x50)();
        }
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void _ZN3vsh12BusyIcon_IncEv(void) {
    s32 temp_v0;
    struct Unk_sceVshCommonGui_80271F41_temp_v0_2 *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00003264);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk6C();
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh12BusyIcon_DecEv);
#endif

#if FW_VERSION < 201
void _ZN3vsh12BusyIcon_DecEv(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00003264);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 0x54)();
        }
    }
}
#endif

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003250);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003260);

INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00003264);

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/common_gui_000438", func_000005CC_v150);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/common_gui_000438", func_000005CC_v152);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfoC1EPN3paf8PhWidgetEPviPNS1_8PhXmListE);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfoC1EiPN3paf8PhWidgetES3_);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo7SetTypeEiPv);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/common_gui_000438", func_000005CC_v100);

INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_35D57A35);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfoD1Ev);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo7InitPosEv);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_000018B0);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo4ShowEff);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/common_gui_000438", func_00003048);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/common_gui_000438", func_00003044);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/common_gui_000438", func_00001C78);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo4HideEff);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo4FullEff);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo4HalfEff);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo4HomeEff);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo4MenuEff);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo4InfoEff);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo6DeleteEff);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00002BF0);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00002DC0);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo12DeleteMotionEff);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00002F78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
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
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo8SetMovieERKN3paf10MiconRCPtrINS1_13MovieResourceEEEb);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo8SetMusicERKN3paf10MiconRCPtrINS1_13MusicResourceEEE);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo10SetTextureERKN3paf12SurfaceRCPtrINS1_7SurfaceEEEi);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/common_gui_000438", D_00007BC0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_B97EAE7A);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo11SetAnimIconERKN3paf12SurfaceRCPtrINS1_7SurfaceEEES6_);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh11ContentInfo12PlayAnimIconEb);
#endif

#if FW_VERSION < 201
void _ZN3vsh11ContentInfo13SetOnplayFuncEPFvPvES1_(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/common_gui_000438", func_00004E20);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00004F28);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_00004FF0);
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
void _ZN3vsh15GetString_EnterEv(void) {
    func_000005CC((s32) "msgsystem_enter");
}

void _ZN3vsh14GetString_BackEv(void) {
    func_000005CC((s32) "msgsystem_back");
}

void _ZN3vsh16GetString_OptionEv(void) {
    func_000005CC((s32) "msgsystem_option");
}

void _ZN3vsh16GetString_CancelEv(void) {
    func_000005CC((s32) "msgsystem_cancel");
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void _ZN3vsh12GetString_OKEv(void) {
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

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh15GetString_EnterE6Locale);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh14GetString_BackE6Locale);

INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh16GetString_OptionE6Locale);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void sceVshCommonGui_E9B8D6AB(void) {
    func_000005CC((s32) "msgshare_opt_edit");
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui_000438", sceVshCommonGui_D4353F96);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh13Infobar_CloseEb);
#endif

#if FW_VERSION == 100
void _ZN3vsh13Infobar_CloseEv(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00003314);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 0x3C)();
        }
    }
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui_000438", _ZN3vsh16Infobar_IsOpenedEv);
#endif

void func_00000888(void **arg0, void **arg1) {
    *arg0 = *arg1;
    func_000008A8(arg0);
}

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/common_gui_000438", func_00005438);

INCLUDE_ASM("nonmatchings/common_gui_000438", func_0000545C);
#endif

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
