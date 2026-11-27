#include "common.h"
#include "msvideo_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000522C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005264);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005304);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000538C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005420);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000055AC);
#else
void func_000055AC(void *arg0, u32 arg1, s32 arg2) {
    if (func_00004380(arg0) == 2) {
        if ((arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x24)) || ((u32) M2C_FIELD(arg0, u32 *, 0x28) < arg1)) {
            func_00005420((s32) arg0);
        }
    }
    func_0000480C((s32) arg0, (s32) arg1, arg2);
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005648);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005684);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000056C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000056F8);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005248);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005730);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00005730(s32 arg0, s32 arg1) {
    return sce_paf_private_strcmp(arg1, (s32) &D_0004CE9C) == 0;
}
#endif

#if FW_VERSION == 100
s32 func_00005730(s32 arg0, s32 arg1) {
    return sce_paf_private_strcmp(arg1, arg0 + 0x4F) == 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000052A8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x88) == 0) {
        M2C_FIELD(arg0, u8 *, 0x88) = 1U;
        M2C_FIELD(arg0, s32 *, 0x8C) = 1;
    }
}

void func_000052C8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x88) != 0) {
        M2C_FIELD(arg0, u8 *, 0x88) = 0U;
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00004858);
#endif

#if FW_VERSION == 201
void func_00005758(struct Unk_func_00005758_0 *arg0) {
    if (arg0->unk90 == 0) {
        arg0->unk90 = 1U;
        arg0->unk94 = 1;
    }
}

void func_00005778(struct Unk_func_00005778_0 *arg0) {
    if (arg0->unk90 != 0) {
        arg0->unk90 = 0U;
        arg0->unk94 = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005794);

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00005320(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) & (arg0 == 1)) {
        M2C_VFIELD(&D_0004CE9C, s32, 0x80) = -1;
        M2C_VFIELD(&D_0004CE9C, s32, 0x84) = 0;
        M2C_VFIELD(&D_0004CE9C, s8, 0) = 0;
    }
}

void func_00005358(void) {
    func_00005320(1, 0xFFFF);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000057D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005858);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005918);

void func_00005954(void) {
    func_00005918(1, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005974);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005A24);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061910);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061918);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005A70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061944);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006194C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061960);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006197C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005D00);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005DA8);
#else
s32 func_00005DA8(struct Unk_func_00005DA8_0 *arg0) {
    func_00001E3C(0, 0, 0);
    arg0->unk20 = 0;
    arg0->unk24 = 0;
    arg0->unk28 = 0;
    func_00000AD0();
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005DEC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000619AC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000619CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000619EC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061A0C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061A1C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061A24);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061A2C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061A40);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061A60);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061A6C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061A80);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061A8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005E30);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005F88);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000604C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006080);

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00005C28(void) {
    Job_Start(0, &func_00005C64, &D_0004CF24, -1, -1, &func_000064B0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005C64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000051E0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000621C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006258);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000064B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000064E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006628);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006848);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000687C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006904);

#if FW_VERSION < 201
s32 func_00005800(void) {
    void *sp0;
    s32 var_v1;

    var_v1 = 0;
    if (sceIoDevctl(&D_00061A80, 0x02125802, NULL, 0U, &sp0, 4U) == 0) {
        var_v1 = (sp0 == 0x11) | (sp0 == 0x41);
    }
    return var_v1;
}
#else
s32 func_00006988(void) {
    void *sp0;
    s32 var_v1;

    var_v1 = 0;
    if (sceIoDevctl(&D_00061A80, 0x02125802, NULL, 0U, &sp0, 4U) == 0) {
        var_v1 = (sp0 == 0x11) | (sp0 == 0x41);
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000069E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006A14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006A44);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006A94);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006AE4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006BA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006C38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006CEC);

void func_00006D98(struct Unk_func_00006D98_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    if (temp_v1 != 0) {
        temp_v0 = arg0->unkC;
        if (temp_v0 == 0) {

        } else {
            _ZN3paf4View8PageOpenEPvii(temp_v1, temp_v0, 0, 0);
        }
    }
}

void func_00006DE0(struct Unk_func_00006DE0_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    if (temp_v1 != 0) {
        temp_v0 = arg0->unkC;
        if (temp_v0 == 0) {

        } else {
            _ZN3paf4View9PageCloseEPv(temp_v1, temp_v0);
        }
    }
}

#if FW_VERSION < 201
void func_00006E20(void) {

}
#else
void func_00006E20(void) {
}
#endif

void func_00006E28(struct Unk_func_00006E28_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    if (temp_v1 != 0) {
        temp_v0 = arg0->unkC;
        if (temp_v0 == 0) {

        } else {
            _ZN3paf4View12PageActivateEPv(temp_v1, temp_v0);
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006E68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006EA0);

#if FW_VERSION < 201
void func_00006ED4(s32 **arg0) {
    *arg0 = &D_00061AA8;
    D_00065FB0 = 0;
    func_0000EC84((s32) arg0);
}
#else
void func_00006ED4(M2C_UNK **arg0) {
    *arg0 = &D_00061AA8;
    D_00065FB0 = 0;
    func_0000EC84((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006F00);
#endif

#if FW_VERSION < 201
void func_00006F00(s32 **arg0) {
    *arg0 = &D_00061AA8;
    D_00065FB0 = 0;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006F40);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006FE4);

#if FW_VERSION < 152
void func_00005E9C(s32 **arg0) {
    *arg0 = &D_00061BA0;
    D_00065FB4 = 0;
    func_0000EC84((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00005E9C(M2C_UNK **arg0) {
    *arg0 = &D_00061BA0;
    D_00065FB4 = 0;
    func_0000EC84((s32) arg0);
}
#endif

#if FW_VERSION < 201
void func_00007050(s32 **arg0) {
    *arg0 = &D_00061BA0;
    D_00065FB4 = 0;
    func_0000EC84((s32) arg0);
}
#else
void func_00007024(M2C_UNK **arg0) {
    *arg0 = &D_00061BA0;
    D_00065FB4 = 0;
    func_0000EC84((s32) arg0);
}

void func_00007050(M2C_UNK **arg0) {
    *arg0 = &D_00061BA0;
    D_00065FB4 = 0;
    func_0000EC84((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000707C);
#endif

#if FW_VERSION < 201
void func_0000707C(s32 **arg0) {
    *arg0 = &D_00061BA0;
    D_00065FB4 = 0;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061AA8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061AD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000070BC);

void func_000075F4(void) {
    void *sp0;
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackE6Locale(-1));
    func_00006A14(&sp0);
    _ZN3vsh25ShowButtonNavigation_BackEb(1);
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061B08);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061B10);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061B18);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061B2C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061B4C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061B6C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000762C);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000076FC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00007798);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00007840);

#if FW_VERSION < 201
void func_00007884(void) {

}
#else
void func_00007884(void) {
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061BA0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061BD0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000788C);
#else
void func_0000788C(struct Unk_func_0000788C_0 *arg0) {
    sceVshCommonGui_F4D1E387(arg0->unk4, arg0->unk8, "msvideo_option_back_plane", 0, "msvideo_option_list", 0, 0);
}
#endif

void func_000078C8(struct Unk_func_000078C8_0 *arg0) {
    _ZN3vsh10OptionMenu5CloseEPN3paf4ViewEPKcS5_(arg0->unk4, arg0->unk8, 0);
}

void func_000078EC(void) {
    _ZN3vsh10OptionMenu4ShowEv();
}

void func_00007908(void) {
    _ZN3vsh10OptionMenu4HideEv();
}

void func_00007924(struct Unk_func_00007924_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk20;
    if (temp_v0 == 0) {

    } else {
        func_0000D59C(temp_v0);
    }
}

s32 func_00007954(struct Unk_func_00007954_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk20;
    if (temp_v0 == 0) {

    } else {
        func_0000D698(temp_v0);
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00007988);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00007A00);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00007ABC);

#if FW_VERSION < 201
void func_000066E8(void) {

}
#else
void func_00007B38(void) {
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061C14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00007B40);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061C30);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00007B78);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00007F20);

#if FW_VERSION < 201
void func_00008038(s32 **arg0) {
    *arg0 = &D_00061C48;
    D_00065FB8 = 0;
    func_0000EC84((s32) arg0);
}
#else
void func_00008038(M2C_UNK **arg0) {
    *arg0 = &D_00061C48;
    D_00065FB8 = 0;
    func_0000EC84((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008064);
#endif

#if FW_VERSION < 201
void func_00008064(s32 **arg0) {
    *arg0 = &D_00061C48;
    D_00065FB8 = 0;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000080A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008154);

#if FW_VERSION < 152
void func_00006D50(s32 **arg0) {
    *arg0 = &D_00061CC8;
    D_00065FBC = 0;
    func_0000EC84((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00006D50(M2C_UNK **arg0) {
    *arg0 = &D_00061CC8;
    D_00065FBC = 0;
    func_0000EC84((s32) arg0);
}
#endif

#if FW_VERSION < 201
void func_000081CC(s32 **arg0) {
    *arg0 = &D_00061CC8;
    D_00065FBC = 0;
    func_0000EC84((s32) arg0);
}
#else
void func_000081A0(M2C_UNK **arg0) {
    *arg0 = &D_00061CC8;
    D_00065FBC = 0;
    func_0000EC84((s32) arg0);
}

void func_000081CC(M2C_UNK **arg0) {
    *arg0 = &D_00061CC8;
    D_00065FBC = 0;
    func_0000EC84((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000081F8);
#endif

#if FW_VERSION < 201
void func_000081F8(s32 **arg0) {
    *arg0 = &D_00061CC8;
    D_00065FBC = 0;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061C48);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061C78);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061C94);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008238);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000084A0);

void func_00008638(struct Unk_func_00008638_0 *arg0) {
    arg0->unk20 = 1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008644);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000086E4);

#if FW_VERSION < 201
void func_0000873C(void) {

}
#else
void func_0000873C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008744);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008828);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061CC8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061CF8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061D10);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061D18);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061D30);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061D3C);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061D58);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061D6C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061D88);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061D94);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061DB0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061DB8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061DD0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061DD8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061DF4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061E00);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061E20);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061E2C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061E4C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061E54);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061E6C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061E74);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061E90);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061E98);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061EB0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061EB8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061ED0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061ED8);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061EF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061EFC);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061F18);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061F20);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061F38);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061F44);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061F5C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008898);

#if FW_VERSION < 152
void func_00008C7C(struct Unk_func_00008C7C_0 *arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = arg0->unk24;
    if (temp_v0 != 0) {
        var_a1 = arg0->unk2C;
        if (var_a1 < 0) {
            var_a1 = 2;
        }
        func_000114B8(temp_v0, var_a1);
    }
}
#endif

#if FW_VERSION == 152
void func_00008C7C(struct Unk_func_00008C7C_0 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0 != 0) {
        temp_a1 = arg0->unk2C;
        func_000114B8(temp_v0, (temp_a1 < 0) ? 2 : temp_a1);
    }
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008CB4);
#else
void func_00008C7C(struct Unk_func_00008C7C_0 *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0 != 0) {
        temp_a1 = arg0->unk2C;
        func_000114B8(temp_v0, (temp_a1 < 0) ? 3 : temp_a1);
    }
}

s32 func_00008CB4(struct Unk_func_00008CB4_0 *arg0) {
    struct Unk_func_00008CB4_temp_v1 *temp_v1;

    temp_v1 = arg0->unk24;
    if (temp_v1 != NULL) {
        arg0->unk2C = (s32) temp_v1->unk474;
    }
    arg0->unk24 = NULL;
    arg0->unk28 = 0;
    arg0->unk34 = 0;
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008CD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008F8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009100);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009184);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009228);

#if FW_VERSION < 201
void func_00009340(s32 **arg0) {
    *arg0 = &D_00062138;
    D_00065FC0 = 0;
    func_0000EC84((s32) arg0);
}
#else
void func_00009340(M2C_UNK **arg0) {
    *arg0 = &D_00062138;
    D_00065FC0 = 0;
    func_0000EC84((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000936C);
#endif

#if FW_VERSION < 201
void func_0000936C(s32 **arg0) {
    *arg0 = &D_00062138;
    D_00065FC0 = 0;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}

void func_000093AC(void) {

}

s32 func_000093B4(void) {
    return 1;
}

void func_000093BC(s32 **arg0) {
    *arg0 = &D_00062138;
    func_0000EC84((s32) arg0);
}
#else
void func_000093AC(void) {
}

s32 func_000093B4(void) {
    return 1;
}

void func_000093BC(M2C_UNK **arg0) {
    *arg0 = &D_00062138;
    func_0000EC84((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000093E4);
#endif

#if FW_VERSION < 201
void func_000093E4(s32 **arg0) {
    *arg0 = &D_00062138;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000941C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009498);

#if FW_VERSION < 201
void func_000080AC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00062180;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x3C));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000621A8;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009554);
#else
void func_00009514(struct Unk_func_00009514_0 *arg0) {
    arg0->unk0 = &D_00062180;
    sceKernelDeleteSema(arg0->unk3C);
    arg0->unk0 = &D_000621A8;
}

void func_00009554(struct Unk_func_00009554_0 *arg0) {
    arg0->unk0 = &D_00062180;
    sceKernelDeleteSema(arg0->unk3C);
    arg0->unk0 = &D_000621A8;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009594);
#endif

#if FW_VERSION < 201
void func_00009594(s32 **arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00062180;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x3C));
    M2C_FIELD(arg0, s32 **, 0) = &D_000621A8;
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000095DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000096A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009724);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009798);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000980C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009870);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009908);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009978);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000099E8);

#if FW_VERSION < 201
void func_00009A58(s32 **arg0) {
    *arg0 = &D_000621A8;
}
#else
void func_00009A58(M2C_UNK **arg0) {
    *arg0 = &D_000621A8;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009A68);
#endif

#if FW_VERSION < 201
void func_00009A68(s32 **arg0) {
    *arg0 = &D_000621A8;
    _ZdlPv(arg0);
}
#endif

s32 func_00009A90(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009A98);

s32 func_00009AA8(void) {
    return 0;
}

s32 func_00009AB0(void) {
    return 0;
}

s32 func_00009AB8(void) {
    return 0;
}

s32 func_00009AC0(void) {
    return 0;
}

s32 func_00009AC8(void) {
    return 0x1E;
}

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009180);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000091A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000924C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000092BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008668);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009AD0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009B78);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009BE8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009C54);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009E70);
#else
void func_00009E70(s32 arg0, s32 arg1, s32 arg2) {
    func_0000EB04(arg0, arg1, (s32) &D_000621C8, 1, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00062608;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
    M2C_FIELD(arg0, s8 *, 0x35) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s8 *, 0x58) = 0;
    M2C_FIELD(arg0, s8 *, 0x59) = 0;
    M2C_FIELD(arg0, s8 *, 0x5A) = 0;
    M2C_FIELD(arg0, s8 *, 0x5B) = 0;
    func_00002868(arg0 + 0x15C, 0);
    func_00002868(arg0 + 0x160, 0);
    func_00002868(arg0 + 0x164, 0);
    func_00002868(arg0 + 0x168, 0);
    func_00002868(arg0 + 0x16C, 0);
    func_00002868(arg0 + 0x170, 0);
    func_00002868(arg0 + 0x174, 0);
    func_00002868(arg0 + 0x178, 0);
    func_00002868(arg0 + 0x17C, 0);
    func_00002868(arg0 + 0x180, 0);
    func_00002868(arg0 + 0x184, 0);
    func_00002868(arg0 + 0x188, 0);
    func_00002868(arg0 + 0x18C, 0);
    func_00002868(arg0 + 0x190, 0);
    func_00002868(arg0 + 0x194, 0);
    M2C_FIELD(arg0, s32 *, 0x198) = -1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000A018);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000A490);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000A908);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000620EC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000620F0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000620F4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062100);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062138);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062168);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062180);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000621A8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000621C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000AD88);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000A8AC);

void func_0000B6AC(struct Unk_func_0000B6AC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1AC);
    if (temp_v0 == 0) {

    } else {
        func_00020360(temp_v0);
    }
}

void func_0000B6DC(struct Unk_func_0000B6DC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1AC);
    if (temp_v0 == 0) {

    } else {
        func_000203F4(temp_v0);
    }
}

void func_0000A9AC(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x1AC);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x340) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x344) = arg2;
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000B608);

void func_0000B6AC(struct Unk_func_0000B6AC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1A0;
    if (temp_v0 == 0) {

    } else {
        func_00020360(temp_v0);
    }
}

void func_0000B6DC(struct Unk_func_0000B6DC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1A0;
    if (temp_v0 == 0) {

    } else {
        func_000203F4(temp_v0);
    }
}

void func_0000B70C(struct Unk_func_0000B70C_0 *arg0, s32 arg1, s32 arg2) {
    struct Unk_func_0000B70C_temp_v0 *temp_v0;

    temp_v0 = arg0->unk1A0;
    if (temp_v0 != NULL) {
        temp_v0->unk340 = arg1;
        temp_v0->unk344 = arg2;
    }
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000B728);
#else
s32 func_0000B728(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
    if ((temp_a0 != 0) && (M2C_FIELD(arg0, s32 *, 0x30) >= 0)) {
        func_00003EFC(temp_a0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x34) == 0) {

    } else {
        func_00001AD0(0, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    func_0000E7B0((s32) (arg0 + 0x15C), 0);
    func_0000E7B0((s32) (arg0 + 0x160), 0);
    func_0000E7B0((s32) (arg0 + 0x164), 0);
    func_0000E7B0((s32) (arg0 + 0x168), 0);
    func_0000E7B0((s32) (arg0 + 0x16C), 0);
    func_0000E7B0((s32) (arg0 + 0x170), 0);
    func_0000E7B0((s32) (arg0 + 0x174), 0);
    func_0000E7B0((s32) (arg0 + 0x178), 0);
    func_0000E7B0((s32) (arg0 + 0x17C), 0);
    func_0000E7B0((s32) (arg0 + 0x180), 0);
    func_0000E7B0((s32) (arg0 + 0x184), 0);
    func_0000E7B0((s32) (arg0 + 0x188), 0);
    func_0000E7B0((s32) (arg0 + 0x18C), 0);
    func_0000E7B0((s32) (arg0 + 0x190), 0);
    func_0000E7B0((s32) (arg0 + 0x194), 0);
    return 1;
}
#endif

#if FW_VERSION < 201
void func_0000B890(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000AB30);
#endif

#if FW_VERSION == 201
void func_0000B890(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000B898);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062330);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062340);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062484);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062494);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000624A0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000624B8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000624CC);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004A474);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000624E8);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062504);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006250C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00046D64);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062510);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062528);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062550);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062578);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006258C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062590);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062594);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062598);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000ACDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009C08);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BA60);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BB50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BC20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BD10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BE28);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BFB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C06C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C14C);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000B43C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000A2E4);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C1C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C21C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C6E4);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BA08);
#endif

#if FW_VERSION == 100
void func_0000A7B4(void) {

}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C7FC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C83C);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BAAC);

void func_0000BB58(void) {
    s32 temp_a0;

    if (D_000663E8 != NULL) {
        temp_a0 = D_000663E8->unk20;
        if ((temp_a0 != 0) && (D_000663E8->pad44[0x17] != 0)) {
            func_00002DE0(temp_a0);
        }
    }
}

void func_0000BBA0(void) {
    s32 temp_v0;

    M2C_FIELD(D_000663E8, s32 *, 0x1A8) = 2;
    if (D_000663E8 != NULL) {
        temp_v0 = D_000663E8->unk20;
        if (temp_v0 != 0) {
            func_00002DE0(temp_v0);
        }
    }
    func_00015A80();
    func_00001980(0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C9E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BD88);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BDC0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000BF34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C10C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C180);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C534);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000A820);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C9E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000AC7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000AE30);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000B0AC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000B178);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C8A0);

void func_0000C94C(void) {
    s32 temp_a0;

    if (D_000663E8 != NULL) {
        temp_a0 = D_000663E8->unk20;
        if ((temp_a0 != 0) && (D_000663E8->unk43 != 0)) {
            func_00002DE0(temp_a0);
        }
    }
}

void func_0000C994(void) {
    s32 temp_v0;

    D_000663E8->unk19C = 2;
    if (D_000663E8 != NULL) {
        temp_v0 = D_000663E8->unk20;
        if (temp_v0 != 0) {
            func_00002DE0(temp_v0);
        }
    }
    func_00018794();
    func_0000198C(0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C9E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000CCB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000CCEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000CE5C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D034);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D0A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D3F0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D504);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D59C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D698);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C864);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000B3E0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D720);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D7B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D820);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D888);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D938);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DA00);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000CB8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000CBB0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DA48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DA6C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DAF4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000B7C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000CE8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000CF30);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000CFD4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D008);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D0D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D130);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D1E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D28C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D2D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D5A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D604);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D658);

void func_0000D69C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1B0) != 0) {
        InputDevice_PspPad_Unlock();
        InputDevice_PspHprm_Unlock();
        M2C_FIELD(arg0, u8 *, 0x1B0) = 0U;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D6DC);

void func_0000D72C(void) {
    func_0000D6DC(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000B950);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000B9D4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DB8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DD58);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DDFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DEAC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DEE0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DFC4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E024);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E070);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E124);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E1CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E210);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E4D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E538);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E58C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E610);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E6BC);

void func_0000E700(struct Unk_func_0000E700_0 *arg0) {
    if (arg0->unk1A4 != 0) {
        InputDevice_PspPad_Unlock();
        InputDevice_PspHprm_Unlock();
        arg0->unk1A4 = 0U;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E740);

void func_0000E790(void) {
    func_0000E740(1, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E7B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E828);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E914);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000E98C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000EB04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000EC84);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000ED58);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000EE2C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000EF10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000EFE4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F0A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F1BC);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F1FC);
#else
void func_0000F1FC(struct Unk_func_0000F1FC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F20C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F280);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F36C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F42C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F51C);

#if FW_VERSION < 152
void func_0000C9D8(s32 **arg0) {
    *arg0 = &D_00062138;
    D_000663F8 = NULL;
    func_0000EC84((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0000C9D8(M2C_UNK **arg0) {
    *arg0 = &D_00062138;
    D_000663F8 = NULL;
    func_0000EC84((s32) arg0);
}
#endif

#if FW_VERSION < 201
void func_0000F5C4(s32 **arg0) {
    *arg0 = &D_00062138;
    D_000663F8 = NULL;
    func_0000EC84((s32) arg0);
}
#else
void func_0000F598(M2C_UNK **arg0) {
    *arg0 = &D_00062138;
    D_000663F8 = 0;
    func_0000EC84((s32) arg0);
}

void func_0000F5C4(M2C_UNK **arg0) {
    *arg0 = &D_00062138;
    D_000663F8 = 0;
    func_0000EC84((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F5F0);
#endif

#if FW_VERSION < 201
void func_0000F5F0(s32 **arg0) {
    *arg0 = &D_00062138;
    D_000663F8 = NULL;
    func_0000EC84((s32) arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062608);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062640);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062670);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F630);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F82C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F9D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000FB04);

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000EB18(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v0 == 0) {

    } else {
        func_0000F290(temp_v0);
    }
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D194);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D200);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000D2A4(void) {
    s32 temp_v0;

    if (D_000663F8 != NULL) {
        temp_v0 = D_000663F8->unk20;
        if (temp_v0 == 0) {

        } else {
            func_000056C0(temp_v0);
        }
    }
}
#endif

#if FW_VERSION == 100
void func_0000D2A4(void) {
    s32 temp_v0;

    if (D_000663F8 != NULL) {
        temp_v0 = D_000663F8->unk20;
        if (temp_v0 == 0) {

        } else {
            func_00005684(temp_v0);
        }
    }
}

void func_0000B6AC(struct Unk_func_0000B6AC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {

    } else {
        func_00020360(temp_v0);
    }
}

void func_0000B6DC(struct Unk_func_0000B6DC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {

    } else {
        func_000203F4(temp_v0);
    }
}

void func_0000D344(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x340) = arg1;
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000FBB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000FBD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000FC64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000FD18);

void func_0000FDD4(void) {
    s32 temp_v0;

    if (D_000663F8 != 0) {
        temp_v0 = D_000663F8->unk20;
        if (temp_v0 == 0) {

        } else {
            func_00005684(temp_v0);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000FE14);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00046F7C);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062728);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006272C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062730);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D3AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D428);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000FE60);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062748);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00046FD8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00046FE4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004A74C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D448);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D518);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000D638(s32 **arg0) {
    *arg0 = &D_00047050;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
}
#endif

#if FW_VERSION == 100
void func_0000D638(M2C_UNK **arg0) {
    *arg0 = &D_00047050;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
}
#endif

#if FW_VERSION < 201
void func_0000D688(s32 **arg0) {
    *arg0 = &D_00047050;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D6E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D79C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D8B0);
#endif

#if FW_VERSION == 152
void func_0000F258(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x340) = 1;
    M2C_FIELD(arg0, s8 *, 0x33C) = 0;
}
#endif

#if FW_VERSION == 150
void func_0000F280_v150(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x340) = 1;
    M2C_FIELD(arg0, s8 *, 0x33C) = 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F290);
#endif

#if FW_VERSION == 100
void func_0000D944(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a2;

    var_a2 = 0;
    if ((arg1 == 0x140) & (arg2 == 0xF0)) {
        var_a2 = 0x168;
    } else if ((arg1 == 0xA0) & (arg2 == 0x70)) {
        var_a2 = 0x17C;
    }
    M2C_FIELD(arg0, s32 *, 0x340) = 1;
    if (var_a2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x338) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x33C) = 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D9A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D9D8);

void func_0000DA28(void) {
    func_0000D9D8(1, 0xFFFF);
}
#endif

#if FW_VERSION < 152
void func_0000DA48(s32 **arg0) {
    *arg0 = &D_00047120;
}
#endif

#if FW_VERSION == 152
void func_0000DA48(M2C_UNK **arg0) {
    *arg0 = &D_00047120;
}
#endif

#if FW_VERSION < 201
void func_0000DA58(s32 **arg0) {
    *arg0 = &D_00047120;
    _ZdlPv(arg0);
}

s32 func_0000DA80(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DA88);

s32 func_0000DADC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DAE8);

s32 func_0000DB14(void) {
    return D_000495C8;
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00047050);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00047120);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062778);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062788);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000627A4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000627B4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000627C8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000627D4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DB20);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062854);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062858);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006285C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062860);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062864);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001028C);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001068C);
#else
void func_0001068C(s32 **arg0) {
    *arg0 = &D_000628C0;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000106DC);
#else
void func_000106DC(s32 **arg0) {
    *arg0 = &D_000628C0;
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x01000009);
    _ZN3paf9PhHandler11KillTimerCBEi((s32) arg0, 0x0100000A);
    _ZN3paf8PhWidgetD2Ev(arg0);
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00010734);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000107A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00010814);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000108D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00010964);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00010A30);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00010C94);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00010CF8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001100C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000110C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011254);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011324);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000113E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000114B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011594);

#if FW_VERSION == 201
void func_00011630(void) {
    func_00011594(1, 0xFFFF);
}

void func_00011650(void) {
    func_00011594(0, 0xFFFF);
}

void func_00011670(M2C_UNK **arg0) {
    *arg0 = &D_00062A80;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011680);
#else
void func_00011680(void) {
    func_00011594(1, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F1CC);
#endif

#if FW_VERSION < 152
void func_0000F268(s32 **arg0) {
    *arg0 = &D_00062A70;
}
#endif

#if FW_VERSION == 152
void func_0000F268(M2C_UNK **arg0) {
    *arg0 = &D_00062A70;
}
#endif

#if FW_VERSION == 201
s32 func_000116A8(struct Unk_func_000116A8_0 *arg0) {
    return arg0->unk1D4;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000116B0);

s32 func_00011704(struct Unk_func_00011704_0 *arg0, s32 arg1) {
    arg0->unk1EC = arg1;
    return 0;
}

void func_00011710(M2C_UNK **arg0) {
    *arg0 = &D_00062A70;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011720);
#else
void func_00011720(s32 **arg0) {
    *arg0 = &D_00062A70;
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011748);

#if FW_VERSION < 201
s32 func_0000F2CC(void) {
    return D_00065C9C;
}
#else
s32 func_00011774(void) {
    return D_00065C9C;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011780);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000117BC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011800);

#if FW_VERSION < 201
s32 func_0000F384(void) {
    return D_00065CA0;
}

s32 func_0000F390(s32 arg0) {
    return arg0 + 0x334;
}
#else
s32 func_0001182C(void) {
    return D_00065CA0;
}

s32 func_00011838(s32 arg0) {
    return arg0 + 0x334;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011840);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000118C4);

void func_00011970(M2C_UNK **arg0) {
    *arg0 = &D_00062A90;
    func_00011CB8((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011998);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000119D0);

s32 func_000119FC(void) {
    return D_00065CA8;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011A08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011A7C);

void func_00011B18(M2C_UNK **arg0) {
    *arg0 = &D_00062B70;
    func_00011CB8((s32) arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011B40);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000628C0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062998);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062A70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062A80);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062A90);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062B70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062C44);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062C50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011B78);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011C18);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011CB8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011D08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011D58);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011DB0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011E6C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011F80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012014);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012098);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000120B4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012128);

void func_00012178(void) {
    func_00012128(1, 0xFFFF);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062CF4);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000628C0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062998);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062A70);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062D08);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062DD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012198);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001220C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000122A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000123D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000124E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012524);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012564);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000125EC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062E18);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062E44);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012674);

#if FW_VERSION == 201
s32 func_000126E8(void) {
    return (D_0006645C == 0) ? 0 : (D_0006645C + 0x3C);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000126FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000127A0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F52C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015E20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015EE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011584);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015EF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000FBDC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000FFF0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012844);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012A4C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012C54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001337C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000138A0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013994);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013A74);

#if FW_VERSION < 201
s32 func_00010264(void **arg0) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **), 0x70)(arg0);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}

s32 func_000102C0(void **arg0) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **), 0x74)(arg0);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}
#else
s32 func_00013B54(struct Unk_vt_func_00013B54_arg0 **arg0) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unk6C(arg0);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_00013BB0(struct Unk_vt_func_00013BB0_arg0 **arg0) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unk70(arg0);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013C0C);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00010380(void **arg0, s32 arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32), 0x7C)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}
#endif

#if FW_VERSION == 100
s32 func_00010380(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32), 0x7C)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return 0;
}
#endif

#if FW_VERSION < 201
s32 func_000103E0(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32), 0x80)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return 0;
}
#else
s32 func_00013C70(struct Unk_vt_func_00013C70_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unk78(arg0, arg1);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_00013CD4(struct Unk_vt_func_00013CD4_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unk7C(arg0, arg1);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013D38);

#if FW_VERSION < 201
s32 func_000104A4(void **arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32, s32), 0x88)(arg0, arg1, arg2);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}

s32 func_00010518(void **arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32, s32), 0x8C)(arg0, arg1, arg2);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}

s32 func_0001058C(void **arg0) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **), 0x90)(arg0);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}
#else
s32 func_00013D9C(struct Unk_vt_func_00013D9C_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unk84(arg0, arg1, arg2);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_00013E10(struct Unk_vt_func_00013E10_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unk88(arg0, arg1, arg2);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_00013E84(struct Unk_vt_func_00013E84_arg0 **arg0) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unk8C(arg0);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013EE0);

#if FW_VERSION < 201
s32 func_00010694(void **arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32, s32), 0x98)(arg0, arg1, arg2);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}

s32 func_00010708(void **arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32, s32), 0x9C)(arg0, arg1, arg2);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}

s32 func_0001077C(void **arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32, s32), 0xA0)(arg0, arg1, arg2);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}

s32 func_000107F0(void **arg0, s32 arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32), 0xA4)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012274);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012380);
#endif

#if FW_VERSION == 100
s32 func_00010854(void **arg0, s32 arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32), 0xA8)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}

s32 func_000108B8(void **arg0, s32 arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32), 0xAC)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}
#endif

#if FW_VERSION < 201
s32 func_0001091C(void **arg0, s32 arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32), 0xB0)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}

s32 func_00010980(void **arg0, s32 arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xB8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, s32), 0xB4)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xBC)(arg0);
    return temp_s1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000109E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00010E3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001121C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001139C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000114E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001155C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011658);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011748_v100);
#endif

#if FW_VERSION == 201
s32 func_00013F8C(struct Unk_vt_func_00013F8C_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unk94(arg0, arg1, arg2);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_00014000(struct Unk_vt_func_00014000_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unk98(arg0, arg1, arg2);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_00014074(struct Unk_vt_func_00014074_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unk9C(arg0, arg1, arg2);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_000140E8(struct Unk_vt_func_000140E8_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unkA0(arg0, arg1);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_0001414C(struct Unk_vt_func_0001414C_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unkA4(arg0, arg1);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_000141B0(struct Unk_vt_func_000141B0_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unkA8(arg0, arg1);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_00014214(struct Unk_vt_func_00014214_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = func_00016218(arg0, arg1);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

s32 func_00014270(struct Unk_vt_func_00014270_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkB0();
    temp_s1 = (*arg0)->unkAC(arg0, arg1);
    (*arg0)->unkB4(arg0);
    return temp_s1;
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062E74);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062E84);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062E90);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062EA0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062EA8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062EB8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062EC0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062ED0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062EDC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062EE8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062EF8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062F08);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004AB8C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062F18);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062F2C);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062F34);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062F44);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062F54);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062F64);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062F74);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062F84);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062F94);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000142D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000144B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000146B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014BFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001503C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000151D4);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00062FA8);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000125F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012AD4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012F14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000130A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000131F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000132A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000133C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000134E8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015330);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015450);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000155D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015754);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000630EC);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013598);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000117C4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000119F8);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015830);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015CE8);

#if FW_VERSION < 201
s32 func_00011B54(void) {
    return 0;
}
#else
s32 func_00015E20(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015E28);

#if FW_VERSION < 201
s32 func_00011C00(void) {
    return 0;
}

s32 func_00011C08(void) {
    return 0;
}

s32 func_00011C10(void) {
    return 0;
}

s32 func_00011C18(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011C20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011C68);
#else
s32 func_00015EE8(void) {
    return 0;
}

s32 func_00015EF0(void) {
    return 0;
}

s32 func_00015EF8(void) {
    return 0;
}

s32 func_00015F00(s32 arg0) {
    func_0002EE78(arg0 + 0x340);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015F20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016038);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016218);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011D88);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00011E2C(s32 arg0) {
    func_000250D4(arg0 + 0x7E8);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00011E2C(s32 arg0) {
    func_000250D4(arg0 + 0x7B0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00011E4C(s32 arg0) {
    func_000250F0(arg0 + 0x7E8);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00011E4C(s32 arg0) {
    func_000250F0(arg0 + 0x7B0);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001626C);

s32 func_00016300(s32 arg0) {
    func_000250D4(arg0 + 0x788);
    return 0;
}

s32 func_00016320(s32 arg0) {
    func_000250F0(arg0 + 0x788);
    return 0;
}

s32 func_00016340(struct Unk_func_00016340_0 *arg0) {
    arg0->unk82C = 1;
    func_0002506C((u8 *)arg0 + 0x790, 1);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001636C);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00011EA0(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x9B0) = arg1;
    func_00020B64(arg0 + 0x44, arg1);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00011EA0(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x978) = arg1;
    func_00020B58(arg0 + 0x40, arg1);
    return 0;
}
#endif

#if FW_VERSION == 150
void func_00013E04(void *arg0, s32 arg1) {
    func_00022B20((s32) (arg0 + 0x44), arg1);
    M2C_FIELD(arg0, s32 *, 0xA2C) = (s32) (M2C_FIELD(arg0, s32 *, 0xA2C) + 1);
}
#endif

#if FW_VERSION == 152
void func_00013E04(void *arg0, s32 arg1) {
    func_00022B20(arg0 + 0x44, arg1);
    M2C_FIELD(arg0, s32 *, 0xA2C) = (s32) (M2C_FIELD(arg0, s32 *, 0xA2C) + 1);
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000163A0);
#endif

#if FW_VERSION == 100
void func_00011EE0(s32 arg0) {
    func_00020A6C(arg0 + 0x40);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00011EE0(s32 arg0) {
    func_00020A6C(arg0 + 0x44);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011EFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011F1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00011F3C(s32 arg0) {
    func_00022218(arg0 + 0x20C);
}
#endif

#if FW_VERSION == 100
void func_00011F3C(s32 arg0) {
    func_00022218(arg0 + 0x200);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013EB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011F58);
#endif

#if FW_VERSION == 201
void func_000163D0(struct Unk_func_000163D0_0 *arg0, M2C_UNK arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = (u8 *)arg0 + 0x9FC;
    func_000250D4(temp_s0);
    temp_v0 = arg0->unk9F8;
    if (temp_v0 != 0) {
        arg0->unk9F8 = (s32) (temp_v0 - 1);
    }
    func_000250F0(temp_s0);
    func_00027D40((u8 *)arg0 + 0x88, arg1);
}

void func_00016438(s32 arg0) {
    func_0002834C(arg0 + 0x88);
}

void func_00016454(s32 arg0) {
    func_0002AC58(arg0 + 0x28C);
}

void func_00016470(s32 arg0) {
    func_0002AC58(arg0 + 0x28C);
}

void func_0001648C(s32 arg0) {
    func_0002ACA4(arg0 + 0x28C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000164A8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016574);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013F6C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013F98_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014094);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012000);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006314C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000165A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000166AC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016724);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012134);

s32 func_0001217C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00012184(void *arg0, s32 *arg1) {
    void **temp_a0;

    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void ***, 0x7E4);
        *arg1 = M2C_FIELD(*temp_a0, s32 (**)(void **), 8)(temp_a0);
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00012184(void *arg0, s32 *arg1) {
    void **temp_a0;

    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void ***, 0x7AC);
        *arg1 = M2C_FIELD(*temp_a0, s32 (**)(void **), 8)(temp_a0);
    }
    return 0;
}
#endif

#if FW_VERSION < 201
s32 func_000121C4(void) {
    return 0;
}

s32 func_000121CC(void) {
    return 0;
}
#else
s32 func_0001676C(void) {
    return 0;
}

s32 func_00016774(struct Unk_func_00016774_0 *arg0, s32 *arg1) {
    struct Unk_vt_func_00016774_temp_a0 **temp_a0;

    if (arg1 != NULL) {
        temp_a0 = arg0->unk784;
        *arg1 = (*temp_a0)->unkC(temp_a0);
    }
    return 0;
}

s32 func_000167B4(void) {
    return 0;
}

s32 func_000167BC(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000167C4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012288);
#else
s32 func_00016878(void) {
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016880);

#if FW_VERSION < 201
s32 func_0001234C(void) {
    return 0;
}
#else
s32 func_000168F4(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000168FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000169B8);

#if FW_VERSION < 201
s32 func_00012524(void) {
    return 0;
}

s32 func_0001252C(void) {
    return 0;
}

s32 func_00012534(void) {
    return 0;
}

s32 func_0001253C(void) {
    return 0;
}

s32 func_00012544(void) {
    return 0;
}

s32 func_0001254C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001452C);
#endif

#if FW_VERSION == 201
s32 func_00016ACC(void) {
    return 0;
}

s32 func_00016AD4(void) {
    return 0;
}

s32 func_00016ADC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016AE4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016B7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016C14);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016D1C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016D60);

#if FW_VERSION >= 150 && FW_VERSION < 201
u8 func_000125EC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x84C);
}
#endif

#if FW_VERSION == 100
u8 func_000125EC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x814);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000125F4);
#else
u8 func_00016DB4(struct Unk_func_00016DB4_0 *arg0) {
    return arg0->unk7F4;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016DBC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016E78);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016F20);

#if FW_VERSION == 201
void func_00016F9C(s32 arg0) {
    func_0002A87C(arg0 + 0x28C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016FB8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006319C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017264);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000173F0);

s32 func_000175C8(void) {
    return 0;
}

s32 func_000175D0(void) {
    return 0;
}

s32 func_000175D8(void) {
    return 0;
}

s32 func_000175E0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000175E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017658);

void func_000176B8(struct Unk_func_000176B8_0 *arg0) {
    struct Unk_vt_func_000176B8_temp_a0 **temp_a0;

    temp_a0 = arg0->unk98C;
    (*temp_a0)->unk10(temp_a0);
}

void func_000176E0(struct Unk_func_000176E0_0 *arg0) {
    struct Unk_vt_func_000176E0_temp_a0 **temp_a0;

    temp_a0 = arg0->unk98C;
    (*temp_a0)->unk14(temp_a0);
}

void func_00017708(struct Unk_func_00017708_0 *arg0) {
    struct Unk_vt_func_00017708_temp_a0 **temp_a0;

    temp_a0 = arg0->unk98C;
    (*temp_a0)->unk18(temp_a0);
}

void func_00017730(struct Unk_func_00017730_0 *arg0, s32 arg1) {
    struct Unk_vt_func_00017730_temp_a0 **temp_a0;

    temp_a0 = arg0->unk98C;
    (*temp_a0)->unk1C(temp_a0, arg1 & 0xFF);
}

void func_00017758(struct Unk_func_00017758_0 *arg0) {
    struct Unk_vt_func_00017758_temp_a0 **temp_a0;

    temp_a0 = arg0->unk98C;
    (*temp_a0)->unk8(temp_a0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017780);

void func_00017808(s32 arg0) {
    func_00012A4C(arg0 - 0x44);
}

void func_00017824(s32 arg0) {
    func_00012A4C(arg0 - 0x40);
}

void func_00017840(s32 arg0) {
    func_00012A4C(arg0 - 0x3C);
}

void func_0001785C(s32 arg0) {
    func_00012C54(arg0 - 0x44);
}

void func_00017878(s32 arg0) {
    func_00012C54(arg0 - 0x40);
}

void func_00017894(s32 arg0) {
    func_00012C54(arg0 - 0x3C);
}

void func_000178B0(s32 arg0) {
    func_000138A0(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000178CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017940);

void func_000179B4(s32 arg0) {
    func_00013B54(arg0 - 0x3C);
}

void func_000179D0(s32 arg0) {
    func_00013BB0(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000179EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000179EC(s32 arg0, s32 arg1) {
    func_00021DC0(arg0 + 0x20C, arg1);
}
#endif

#if FW_VERSION == 100
void func_000179EC(s32 arg0, s32 arg1) {
    func_00021DC0(arg0 + 0x200, arg1);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012794);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014914);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015EF0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012994);

s32 func_00012AB8(void) {
    return 0;
}

s32 func_00012AC0(void) {
    return 0;
}

s32 func_00012AC8(void) {
    return 0;
}

s32 func_00012AD0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014C28);
#endif

#if FW_VERSION == 201
void func_00017A0C(s32 arg0, s32 arg1) {
    func_00013C70(arg0 - 0x3C, arg1);
}

void func_00017A28(s32 arg0, s32 arg1) {
    func_00013CD4(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017A44);

void func_00017A64(s32 arg0, s32 arg1, s32 arg2) {
    func_00013D9C(arg0 - 0x3C, arg1, arg2);
}

void func_00017A80(s32 arg0, s32 arg1, s32 arg2) {
    func_00013E10(arg0 - 0x3C, arg1, arg2);
}

void func_00017A9C(s32 arg0) {
    func_00013E84(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017AB8);

void func_00017B24(s32 arg0, s32 arg1, s32 arg2) {
    func_00013F8C(arg0 - 0x3C, arg1, arg2);
}

void func_00017B40(s32 arg0, s32 arg1, s32 arg2) {
    func_00014000(arg0 - 0x3C, arg1, arg2);
}

void func_00017B5C(s32 arg0, s32 arg1, s32 arg2) {
    func_00014074(arg0 - 0x3C, arg1, arg2);
}

void func_00017B78(s32 arg0, s32 arg1) {
    func_000140E8(arg0 - 0x3C, arg1);
}

void func_00017B94(s32 arg0, s32 arg1) {
    func_0001414C(arg0 - 0x3C, arg1);
}

void func_00017BB0(s32 arg0, s32 arg1) {
    func_000141B0(arg0 - 0x3C, arg1);
}

void func_00017BCC(s32 arg0, s32 arg1) {
    func_00014270(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017BE8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017C5C);

void func_00017CD0(s32 arg0) {
    func_0001503C(arg0 - 0x3C);
}

void func_00017CEC(s32 arg0) {
    func_000151D4(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017D08);

void func_00017D28(s32 arg0) {
    func_00015450(arg0 - 0x3C);
}

void func_00017D44(s32 arg0) {
    func_000155D4(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017D60);

void func_00017D80(s32 arg0) {
    func_00015830(arg0 - 0x3C);
}

void func_00017D9C(s32 arg0) {
    func_00015CE8(arg0 - 0x3C);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017DB8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012AF4);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017DD4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017E40);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012B2C);

void func_00012B48(s32 arg0, s32 arg1) {
    func_0000FFF0(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012B64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012BD8);

void func_00012C4C(s32 arg0) {
    func_00010264(arg0 - 0x38);
}

void func_00012C68(s32 arg0) {
    func_000102C0(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012C84);

void func_00012CA4(s32 arg0, s32 arg1) {
    func_00010380(arg0 - 0x38, arg1);
}

void func_00012CC0(s32 arg0, s32 arg1) {
    func_000103E0(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012CDC);

void func_00012CFC(s32 arg0, s32 arg1, s32 arg2) {
    func_000104A4(arg0 - 0x38, arg1, arg2);
}

void func_00012D18(s32 arg0, s32 arg1, s32 arg2) {
    func_00010518(arg0 - 0x38, arg1, arg2);
}

void func_00012D34(s32 arg0) {
    func_0001058C(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012D50);

void func_00012DBC(s32 arg0, s32 arg1, s32 arg2) {
    func_00010694(arg0 - 0x38, arg1, arg2);
}

void func_00012DD8(s32 arg0, s32 arg1, s32 arg2) {
    func_00010708(arg0 - 0x38, arg1, arg2);
}

void func_00012DF4(s32 arg0, s32 arg1, s32 arg2) {
    func_0001077C(arg0 - 0x38, arg1, arg2);
}

void func_00012E10(s32 arg0, s32 arg1) {
    func_000107F0(arg0 - 0x38, arg1);
}

void func_00012E2C(s32 arg0, s32 arg1) {
    func_00010854(arg0 - 0x38, arg1);
}

void func_00012E48(s32 arg0, s32 arg1) {
    func_000108B8(arg0 - 0x38, arg1);
}

void func_00012E64(s32 arg0, s32 arg1) {
    func_0001091C(arg0 - 0x38, arg1);
}

void func_00012E80(s32 arg0, s32 arg1) {
    func_00010980(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012E9C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012F10);

void func_00012F84(s32 arg0) {
    func_0001121C(arg0 - 0x38);
}

void func_00012FA0(s32 arg0) {
    func_0001139C(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012FBC);

void func_00012FDC(s32 arg0, s32 arg1) {
    func_0001155C(arg0 - 0x38, arg1);
}

void func_00012FF8(s32 arg0, s32 arg1) {
    func_00011658(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013014);

void func_00013034(s32 arg0, s32 arg1, s32 arg2) {
    func_000117C4(arg0 - 0x38, arg1, arg2);
}

void func_00013050(s32 arg0) {
    func_00015CE8(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001306C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013088);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000130F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013110);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001312C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013148);

void func_00013164(s32 arg0, s32 arg1) {
    func_00011C20(arg0 - 0x38, arg1);
}

void func_00013180(s32 arg0, s32 arg1) {
    func_00011C68(arg0 - 0x38, arg1);
}

void func_0001319C(s32 arg0, s32 arg1) {
    func_00016218(arg0 - 0x38, arg1);
}

void func_000131B8(s32 arg0, s32 arg1) {
    func_00011D88(arg0 - 0x38, arg1);
}

void func_000131D4(s32 arg0) {
    func_00011E2C(arg0 - 0x38);
}

void func_000131F0(s32 arg0) {
    func_00011E4C(arg0 - 0x38);
}

void func_0001320C(s32 arg0) {
    func_0001636C(arg0 - 0x38);
}

void func_00013228(s32 arg0, s32 arg1) {
    func_00011EA0(arg0 - 0x38, arg1);
}

void func_00013244(s32 arg0) {
    func_000163A0(arg0 - 0x38);
}

void func_00013260(s32 arg0) {
    func_00011EE0(arg0 - 0x38);
}

void func_0001327C(s32 arg0) {
    func_00011EFC(arg0 - 0x38);
}

void func_00013298(s32 arg0) {
    func_00011F1C(arg0 - 0x38);
}

void func_000132B4(s32 arg0) {
    func_00011F3C(arg0 - 0x38);
}

void func_000132D0(s32 arg0, s32 arg1) {
    func_00011F58(arg0 - 0x38, arg1);
}

void func_000132EC(s32 arg0) {
    func_00016574(arg0 - 0x38);
}

void func_00013308(s32 arg0, s32 arg1) {
    func_00012000(arg0 - 0x38, arg1);
}

void func_00013324(s32 arg0) {
    func_00016724(arg0 - 0x38);
}

void func_00013340(s32 arg0, s32 arg1) {
    func_00012134(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001335C);

void func_00013378(s32 arg0, s32 *arg1) {
    func_00012184(arg0 - 0x38, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013394);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000133B0);

void func_000133CC(s32 arg0) {
    func_000167C4(arg0 - 0x38);
}

void func_000133E8(s32 arg0, s32 arg1, s32 arg2) {
    func_00012288(arg0 - 0x38, arg1, arg2);
}

void func_00013404(s32 arg0) {
    func_00016880(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013420);

void func_0001343C(s32 arg0) {
    func_000168FC(arg0 - 0x38);
}

void func_00013458(s32 arg0) {
    func_000169B8(arg0 - 0x38);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013474);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013490);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000134B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000134CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000134E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013504);

void func_00013520(s32 arg0) {
    func_00016D1C(arg0 - 0x38);
}

void func_0001353C(s32 arg0) {
    func_00016D60(arg0 - 0x38);
}
#endif
