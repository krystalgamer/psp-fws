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

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005730);
#endif

#if FW_VERSION == 150
s32 func_00005730(s32 arg0, s32 arg1) {
    return scePaf_66FE90D7(arg1, (s32) &D_0004CE9C) == 0;
}
#endif

#if FW_VERSION == 100
s32 func_00005730(s32 arg0, s32 arg1) {
    return scePaf_66FE90D7(arg1, arg0 + 0x4F) == 0;
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
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005C28);

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
            scePaf_1811AD32(temp_v1, temp_v0, 0, 0);
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
            scePaf_D05C226F(temp_v1, temp_v0);
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
            scePaf_5EBC648F(temp_v1, temp_v0);
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006E68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006EA0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006ED4);
#else
void func_00006ED4(M2C_UNK **arg0) {
    *arg0 = &D_00061AA8;
    D_00065FB0 = 0;
    func_0000EC84((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006F00);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006F40);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006FE4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00005E9C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00007050);
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000707C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061AA8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00061AD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000070BC);

void func_000075F4(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_5C161337(-1));
    func_00006A14(&sp0);
    sceVshCommonGui_441D55D7(1);
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
    sceVshCommonGui_607D5C82(arg0->unk4, arg0->unk8, 0);
}

void func_000078EC(void) {
    sceVshCommonGui_C5B53362();
}

void func_00007908(void) {
    sceVshCommonGui_A1C3DDD6();
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
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008038);
#else
void func_00008038(M2C_UNK **arg0) {
    *arg0 = &D_00061C48;
    D_00065FB8 = 0;
    func_0000EC84((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008064);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000080A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00008154);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00006D50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000081CC);
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000081F8);

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
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009340);
#else
void func_00009340(M2C_UNK **arg0) {
    *arg0 = &D_00062138;
    D_00065FC0 = 0;
    func_0000EC84((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000936C);

#if FW_VERSION < 201
void func_000093AC(void) {

}

s32 func_000093B4(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000093BC);
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000093E4);

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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009594);

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
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009A58);
#else
void func_00009A58(M2C_UNK **arg0) {
    *arg0 = &D_000621A8;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00009A68);

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
        scePaf_66907719();
        scePaf_F1CF9579();
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
        scePaf_66907719();
        scePaf_F1CF9579();
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000C9D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F5C4);
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F5F0);

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

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D638);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000D688);

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

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DA48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000DA58);

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

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001068C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000106DC);

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

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0000F268);
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011720);

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

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011EA0);
#endif

#if FW_VERSION == 150
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
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00011EE0);
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

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012B48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012B64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012BD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012C4C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012C68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012C84);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012CA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012CC0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012CDC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012CFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012D18);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012D34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012D50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012DBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012DD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012DF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012E10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012E2C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012E48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012E64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012E80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012E9C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012F10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012F84);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012FA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012FBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012FDC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00012FF8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013014);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013034);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013050);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001306C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013088);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000130F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013110);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001312C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013148);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013164);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013180);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001319C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000131B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000131D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000131F0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001320C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013228);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013244);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013260);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001327C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013298);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000132B4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000132D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000132EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013308);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013324);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013340);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001335C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013378);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013394);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000133B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000133CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000133E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013404);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013420);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001343C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013458);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013474);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013490);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000134B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000134CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000134E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013504);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013520);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001353C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013558);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013574);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013590);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000135AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000135C8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017E5C);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014CB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014D28);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014D9C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014DB8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014DD4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014DF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014E10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014E2C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014E4C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014E68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014E84);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014EA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014F0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014F28);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014F44);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014F60);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014F7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014F98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014FB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014FD0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014FEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015060);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000150D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000150F0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001510C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001512C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015148);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015164);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015184);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000151A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000151BC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000151D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015244);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015260);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001527C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015298);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000152B4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000152D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000152EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015308);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015324);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015340);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001535C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015378);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015394);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000153B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000153CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000153E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015404);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015420);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001543C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015458);
#endif

#if FW_VERSION == 150
void func_00015458(s32 arg0, s32 arg1) {
    func_00013F98_v150(arg0 - 0x3C, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015474);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015490);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000154AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000154C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000154E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015500);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001551C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015538);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015554);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015570);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001558C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000155A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000155C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000155E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015600);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001561C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015638);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015654);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015670);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001568C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000156A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000156C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000156E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000156FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015718);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015734);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013600);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00017E78);

void func_00017E94(s32 arg0) {
    func_00015F00(arg0 - 0x3C);
}

void func_00017EB0(s32 arg0) {
    func_00015F20(arg0 - 0x3C);
}

void func_00017ECC(s32 arg0) {
    func_00016038(arg0 - 0x3C);
}

void func_00017EE8(s32 arg0) {
    func_0001626C(arg0 - 0x3C);
}

void func_00017F04(s32 arg0) {
    func_00016300(arg0 - 0x3C);
}

void func_00017F20(s32 arg0) {
    func_00016320(arg0 - 0x3C);
}

void func_00017F3C(s32 arg0) {
    func_00016340(arg0 - 0x3C);
}

void func_00017F58(s32 arg0) {
    func_0001636C(arg0 - 0x3C);
}

void func_00017F74(s32 arg0) {
    func_000163A0(arg0 - 0x3C);
}

void func_00017F90(s32 arg0, s32 arg1) {
    func_000163D0(arg0 - 0x3C, arg1);
}

void func_00017FAC(s32 arg0) {
    func_00016438(arg0 - 0x3C);
}

void func_00017FC8(s32 arg0) {
    func_00016454(arg0 - 0x3C);
}

void func_00017FE4(s32 arg0) {
    func_00016470(arg0 - 0x3C);
}

void func_00018000(s32 arg0) {
    func_0001648C(arg0 - 0x3C);
}

void func_0001801C(s32 arg0) {
    func_000164A8(arg0 - 0x3C);
}

void func_00018038(s32 arg0) {
    func_00016574(arg0 - 0x3C);
}

void func_00018054(s32 arg0) {
    func_000165A4(arg0 - 0x3C);
}

void func_00018070(s32 arg0) {
    func_000166AC(arg0 - 0x3C);
}

void func_0001808C(s32 arg0) {
    func_00016724(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000180A8);

void func_000180C4(s32 arg0, s32 *arg1) {
    func_00016774(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000180E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000180FC);

void func_00018118(s32 arg0) {
    func_000167C4(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018134);

void func_00018150(s32 arg0) {
    func_00016880(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001816C);

void func_00018188(s32 arg0) {
    func_000168FC(arg0 - 0x3C);
}

void func_000181A4(s32 arg0) {
    func_000169B8(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000181C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000181DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000181FC);

void func_00018218(s32 arg0) {
    func_00016AE4(arg0 - 0x3C);
}

void func_00018234(s32 arg0) {
    func_00016B7C(arg0 - 0x3C);
}

void func_00018250(s32 arg0) {
    func_00016C14(arg0 - 0x3C);
}

void func_0001826C(s32 arg0) {
    func_00016D1C(arg0 - 0x3C);
}

void func_00018288(s32 arg0) {
    func_00016D60(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000182A4);

void func_000182C0(s32 arg0) {
    func_00016DBC(arg0 - 0x3C);
}

void func_000182DC(s32 arg0) {
    func_00016E78(arg0 - 0x3C);
}

void func_000182F8(s32 arg0) {
    func_00016F20(arg0 - 0x3C);
}

void func_00018314(s32 arg0) {
    func_00016F9C(arg0 - 0x3C);
}

void func_00018330(s32 arg0) {
    func_00017264(arg0 - 0x44);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001834C);

void func_0001839C(s32 arg0) {
    func_000176B8(arg0 - 0x40);
}

void func_000183B8(s32 arg0) {
    func_000176E0(arg0 - 0x40);
}

void func_000183D4(s32 arg0) {
    func_00017708(arg0 - 0x40);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000183F0);

void func_00018410(s32 arg0) {
    func_00017758(arg0 - 0x40);
}

void func_0001842C(M2C_UNK **arg0) {
    *arg0 = &D_00063588;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001843C);

#if FW_VERSION < 201
void func_00013638(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00015790(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
s32 func_00013640(void) {
    return 0;
}

s32 func_00013648(void) {
    return 0;
}

s32 func_00013650(void) {
    return 0;
}

s32 func_00013658(void) {
    return 0;
}

s32 func_00013660(void) {
    return 0;
}

s32 func_00013668(void) {
    return 0;
}

s32 func_00013670(void) {
    return 0;
}

s32 func_00013678(void) {
    return 0;
}

s32 func_00013680(void) {
    return 0;
}

s32 func_00013688(void) {
    return 0;
}

s32 func_00013690(void) {
    return 0;
}

s32 func_00013698(void) {
    return 0;
}

s32 func_000136A0(void) {
    return 0;
}

s32 func_000136A8(void) {
    return 0;
}

s32 func_000136B0(void) {
    return 0;
}

s32 func_000136B8(void) {
    return 0;
}

s32 func_000136C0(void) {
    return 0;
}

s32 func_000136C8(void) {
    return 0;
}

s32 func_000136D0(void) {
    return 0;
}

s32 func_000136D8(void) {
    return 1;
}

s32 func_000136E0(void) {
    return 0;
}

s32 func_000136E8(void) {
    return 1;
}

s32 func_000136F0(void) {
    return 1;
}

s32 func_000136F8(void) {
    return 0;
}
#else
void func_00018464(void) {
}

s32 func_0001846C(void) {
    return 0;
}

s32 func_00018474(void) {
    return 0;
}

s32 func_0001847C(void) {
    return 0;
}

s32 func_00018484(void) {
    return 0;
}

s32 func_0001848C(void) {
    return 0;
}

s32 func_00018494(void) {
    return 0;
}

s32 func_0001849C(void) {
    return 0;
}

s32 func_000184A4(void) {
    return 0;
}

s32 func_000184AC(void) {
    return 0;
}

s32 func_000184B4(void) {
    return 0;
}

s32 func_000184BC(void) {
    return 0;
}

s32 func_000184C4(void) {
    return 0;
}

s32 func_000184CC(void) {
    return 0;
}

s32 func_000184D4(void) {
    return 0;
}

s32 func_000184DC(void) {
    return 0;
}

s32 func_000184E4(void) {
    return 0;
}

s32 func_000184EC(void) {
    return 0;
}

s32 func_000184F4(void) {
    return 0;
}

s32 func_000184FC(void) {
    return 0;
}

s32 func_00018504(void) {
    return 0;
}

s32 func_0001850C(void) {
    return 0;
}

s32 func_00018514(void) {
    return 0;
}

s32 func_0001851C(void) {
    return 0;
}

s32 func_00018524(void) {
    return 0;
}

s32 func_0001852C(void) {
    return 1;
}

s32 func_00018534(void) {
    return 0;
}

s32 func_0001853C(void) {
    return 1;
}

s32 func_00018544(void) {
    return 1;
}

s32 func_0001854C(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018554);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018578);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018590);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000185A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000185B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000185C0);

#if FW_VERSION < 201
s32 func_0001377C(void) {
    return 1;
}

s32 func_00013784(void) {
    return 1;
}
#else
s32 func_000185D8(void) {
    return 1;
}

s32 func_000185E0(void) {
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000185E8);

#if FW_VERSION < 201
s32 func_000137A8(void) {
    return 1;
}

s32 func_000137B0(void) {
    return 1;
}

s32 func_000137B8(void) {
    return 1;
}
#else
s32 func_00018604(void) {
    return 1;
}

s32 func_0001860C(void) {
    return 1;
}

s32 func_00018614(void) {
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001861C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018640);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018668);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001598C(void) {
    return 1;
}
#endif

#if FW_VERSION < 201
s32 func_00013834(void) {
    return 0;
}

s32 func_0001383C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013844);
#else
s32 func_00018690(void) {
    return 1;
}

s32 func_00018698(void) {
    return 1;
}

s32 func_000186A0(void) {
    return 0;
}

s32 func_000186A8(void) {
    return 0;
}

s32 func_000186B0(void) {
    return 0;
}

void func_000186B8(M2C_UNK **arg0) {
    *arg0 = &D_000636E0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000186C8);

#if FW_VERSION < 201
s32 func_0001387C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00013884(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x994);
}
#endif

#if FW_VERSION == 100
s32 func_00013884(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x95C);
}
#endif

#if FW_VERSION == 201
s32 func_000186F0(void) {
    return 0;
}

s32 func_000186F8(struct Unk_func_000186F8_0 *arg0) {
    return arg0->unk970;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018700);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000138A8);
#else
void func_0001871C(M2C_UNK **arg0) {
    *arg0 = &D_000636E0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001872C);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015A40);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00015A80);
#endif

#if FW_VERSION == 100
s32 func_000138E0(s32 arg0, M2C_UNK **arg1) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0 == 0) && (M2C_VFIELD(&D_00049F40, s32, 0xC) >= 0)) {
        *arg1 = &D_00049F40;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_0001390C(void) {
    scePaf_6829D7AF(&D_00049F40, 0, 0x1C);
    scePaf_6829D7AF(&D_00049F80, 0, 0x4000);
    M2C_FIELD(&D_00049F40, M2C_UNK **, 0) = &D_00049F80;
    M2C_FIELD(&D_00049F40, s32 *, 4) = 0;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013974);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018754);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018794);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000187E8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018954);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000189C8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013AF0);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063200);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063508);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063588);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000636E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018A04);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018B7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018BB0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018CC4);

#if FW_VERSION < 201
void func_00013E70(void) {
    func_00018CC4();
}
#else
void func_00018D38(void) {
    func_00018CC4();
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018D54);

#if FW_VERSION < 201
void func_00013EE8(void) {
    func_00018D54();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00016098);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013F04);
#endif

#if FW_VERSION < 201
s32 func_00018ECC(void) {
    return 0;
}

s32 func_00013F90(void) {
    return 0;
}

s32 func_00013F98(void) {
    return 0;
}

s32 func_00013FA0(void) {
    return 0;
}

s32 func_00013FA8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00013FB0);
#else
void func_00018DB0(void) {
    func_00018D54();
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018DCC);

s32 func_00018ECC(void) {
    return 0;
}

s32 func_00018ED4(void) {
    return 0;
}

s32 func_00018EDC(void) {
    return 0;
}

s32 func_00018EE4(void) {
    return 0;
}

s32 func_00018EEC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018EF4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019014);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000190BC);

#if FW_VERSION < 201
void func_00019100(struct Unk_func_00019100_0 *arg0) {
    arg0->unk20 = func_000028A8(arg0->unk4);
    func_00013FB0((s32) arg0);
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00047504);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00047514);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00047548);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00047808);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063588);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000636E0);
#else
void func_00019100(struct Unk_func_00019100_0 *arg0) {
    arg0->unk20 = func_000028A8(arg0->unk4);
    func_00018EF4(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006377C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063788);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000637A8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000637B8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000637D4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000637E4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063800);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063810);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006382C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006383C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063858);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063868);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006388C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006389C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000638C0);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00047B88);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019134);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019258);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001932C);
#else
void func_0001932C(M2C_UNK **arg0) {
    *arg0 = &D_00063900;
    D_0007E540 = 0;
    func_0000EC84((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019358);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019398);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019444);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00014570);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001951C);
#else
void func_000194F0(M2C_UNK **arg0) {
    *arg0 = &D_00062138;
    D_0007E584 = 0;
    func_0000EC84((s32) arg0);
}

void func_0001951C(M2C_UNK **arg0) {
    *arg0 = &D_00062138;
    D_0007E584 = 0;
    func_0000EC84((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019548);

#if FW_VERSION < 201
s32 func_00014608(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_0007E584;
    if (var_v0 == 0) {
        temp_v0 = scePaf_B7E6052B(0x80);
        func_00019444(temp_v0, arg0, arg1);
        D_0007E584 = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}
#else
s32 func_00019588(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_0007E584;
    if (var_v0 == 0) {
        temp_v0 = scePaf_B7E6052B(0x80);
        func_00019444(temp_v0, arg0, arg1);
        D_0007E584 = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063900);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063930);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000195FC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063988);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000639A4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000639B8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000639CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000639E0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000639F4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063A08);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063A20);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063A3C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063A5C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063A7C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063A9C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063AB8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063AD4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063AE8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063AEC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063AF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063B08);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004B348);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00047DE0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063B28);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019E54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019FCC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A078);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A0DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A3A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A454);

void func_0001A504(struct Unk_func_0001A504_0 *arg0) {
    if (arg0->unk20 != 0) {
        if ((arg0->unk34 != 0) || (arg0->unk38 != 0) || (arg0->unk3C != 0)) {
            func_0001A888(arg0, func_00004D58(arg0->unk20));
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A564);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A60C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A698);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A72C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A888);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A8D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A998);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001AB14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001AC04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001ACD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001AE34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B0D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B1F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B278);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B35C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B3AC);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000163EC);

void func_0001644C(void) {
    func_000163EC(1, 0xFFFF);
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B3D8);

void func_0001B484(void) {
    func_0001B3D8(1, 0xFFFF);
}

void func_0001B4A4(void) {
    func_0001B3D8(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B4C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B578);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063B68);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063B98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B5C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B674);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B730);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B830);

s32 func_0001BA0C(struct Unk_func_0001BA0C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk2C;
    if (temp_v0 != 0) {
        sceVshCommonGui_72E652AA(temp_v0);
        arg0->unk2C = 0;
    }
    arg0->unk20 = 0;
    return 1;
}

void func_0001BA50(void) {
    if (D_0007E590 != NULL) {
        D_0007E590->unk2C = 0;
    }
}

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001BA68);
#else
void func_0001BA68(M2C_UNK **arg0) {
    *arg0 = &D_00063BC8;
    D_0007E590 = NULL;
    func_0000EC84((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001BA94);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001BAD4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001BB90);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063BC8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063BF8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001BBE8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001BC68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001BCA0);

#if FW_VERSION < 201
void func_00016E14(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {

    } else {
        func_0001BF00((s32) arg0);
    }
}
#else
void func_0001BED0(struct Unk_func_0001BED0_0 *arg0) {
    if (arg0->unk10 == 0) {

    } else {
        func_0001BF00((s32) arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001BF00);

s32 func_0001BFF8(void) {
    sceVshCommonGui_A0DE7090(0);
    sceVshCommonGui_441D55D7(0);
    return 1;
}

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C020);
#else
void func_0001C020(M2C_UNK **arg0) {
    *arg0 = &D_00063C38;
    D_0007E594 = 0;
    func_0000EC84((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C04C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C08C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C1FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C2F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C3E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C4D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063C38);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063C68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C5D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C8A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001CBB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001CC60);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063CE8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063CF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063CF8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D00);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D0C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D18);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D24);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D30);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D3C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D48);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D50);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D58);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D60);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D68);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063D9C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063DB4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063DC8);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004B5E8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004B818);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00048080);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063DD4);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063E08);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063E28);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063E44);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063E60);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063E7C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063E80);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063E84);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063E88);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001CCA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001CD74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001CDA0);

void func_0001CE70(s32 arg0) {
    func_0001D38C();
    func_0001D8E4(arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001CE9C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018054);
#else
void func_0001D144(struct Unk_func_0001D144_0 *arg0, s32 arg1) {
    if (func_0001D1BC() != 0) {
        arg0->unkF0 = arg1;
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001D17C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001D1BC);

#if FW_VERSION < 201
void func_00018294(void) {

}
#else
void func_0001D384(void) {
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001D38C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000182E4);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001D3D4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001D61C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001D894);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001D8E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001D9C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001DA40);

#if FW_VERSION < 201
void func_000189E4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        func_0000B178(temp_v0);
    }
}

void func_00018A14(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018A1C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018AAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B058);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018D88);
#endif

#if FW_VERSION == 201
void func_0001DBD4(struct Unk_func_0001DBD4_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk8;
    if (temp_v0 == 0) {

    } else {
        func_0000D504(temp_v0);
    }
}

void func_0001DC04(struct Unk_func_0001DC04_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001DC0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001DCA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E0E8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E1E4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00018EF0);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E28C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E474);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019250);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000192F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019370);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B700);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B764);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019404);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019414);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019454);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000194A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000195C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001965C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019744);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019844);

s32 func_00019914(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_0004E4D8;
    }
    return ~D_0004E4D8 != 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019934);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019970);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000199A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019AAC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019B70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019C30);

void func_00019D40(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000481D0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019D5C);
#endif

#if FW_VERSION == 152
void func_00019D5C(M2C_UNK **arg0) {
    *arg0 = &D_000481D0;
    D_0004E4DC = 0;
}
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019D74);
#endif

#if FW_VERSION == 152
void func_00019D74(M2C_UNK **arg0) {
    *arg0 = &D_000481D0;
    D_0004E4DC = 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019D8C);

void *func_00019DB8(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = D_0004E4DC;
    if (var_v0 == 0) {
        temp_v0 = scePaf_B7E6052B(0x10);
        func_00019D40(temp_v0, arg0, arg1);
        D_0004E4DC = (s32) temp_v0;
        var_v0 = (s32) temp_v0;
    }
    return (void *) var_v0;
}

s32 func_00019E2C(void) {
    return D_0004E4DC;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00019E38);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E688);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E73C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E7B4);

void func_0001E844(void *arg0, s32 arg1) {
    s32 temp_v0;
    struct Unk_func_0001E844_temp_a1 *temp_a1;

    if ((arg1 >= 0) && (arg1 < M2C_FIELD(arg0, s32 *, 0x10))) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0xC) + (arg1 * 0x10);
        temp_v0 = M2C_FIELD(((temp_a1->unk8 * 4) + arg0), s32 *, 0x1C);
        if (temp_v0 == 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = arg1;
        } else {
            func_0005AAA4(temp_v0, temp_a1->unkC);
            M2C_FIELD(arg0, s32 *, 0x24) = arg1;
        }
    }
}

s32 func_0001E8B8(struct Unk_func_0001E8B8_0 *arg0) {
    return arg0->unk24;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E8C0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063EB0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063EE0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063EF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063EF4);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E984);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001EA04);

void func_0001EA58(struct Unk_func_0001EA58_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001EA68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001EAA8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001EAFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001EC04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001EC98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001ED74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001EE98);

s32 func_0001EF68(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_0007EAA8;
    }
    return ~D_0007EAA8 != 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001EF88);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001EFB8);

s32 func_0001EFE8(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = 1;
        *arg0 = D_0007EABC;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001F008);

s32 func_0001F080(void **arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = -1;
    if (func_00039C34(arg0, &sp0) == 0) {
        var_v1 = sp0 != 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001F0B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001F3E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001F520);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001F5E0);

void func_0001F878(struct Unk_func_0001F878_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkC = arg2;
    arg0->unk0 = &D_00063F60;
    arg0->unk8 = arg1;
    arg0->unk4 = 0;
}

void func_0001F894(M2C_UNK **arg0) {
    *arg0 = &D_00063F60;
    D_0007EAC0 = 0;
}

void func_0001F8AC(M2C_UNK **arg0) {
    *arg0 = &D_00063F60;
    D_0007EAC0 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001F8C4);

void *func_0001F8F0(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = D_0007EAC0;
    if (var_v0 == 0) {
        temp_v0 = scePaf_B7E6052B(0x10);
        func_0001F878(temp_v0, arg0, arg1);
        D_0007EAC0 = (s32) temp_v0;
        var_v0 = (s32) temp_v0;
    }
    return (void *) var_v0;
}

s32 func_0001F964(void) {
    return D_0007EAC0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001F970);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063F30);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063F38);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063F3C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063F40);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063F44);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063F48);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063F4C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001F9F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FB04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FC14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FC74);

#if FW_VERSION < 201
void func_0001A17C(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A184);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0001A184(void) {

}
#endif

#if FW_VERSION < 201
void func_0001A1C4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else {
        func_00003684(temp_v0);
    }
}
#else
void func_0001FCB4(void) {
}

void func_0001FCBC(void) {
}

void func_0001FCC4(struct Unk_func_0001FCC4_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 == 0) {

    } else {
        func_00004370(temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FCF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FD64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FDA8);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C6B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A300);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000481D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001A384);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FE00);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FEFC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000200C0);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001CAB4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020200);
#endif

void func_00020220(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_000202B8();
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020240);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000202B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000202D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002031C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020360);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000203F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000204D0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001AA28);
#else
void func_000205C0(struct Unk_func_000205C0_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000205D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002064C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020740);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020808);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020844);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020888);

#if FW_VERSION < 201
s32 func_0001AD1C(void) {
    return D_00065D48;
}
#else
s32 func_000208B4(void) {
    return D_00065D48;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000208C0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001AD68);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001AEA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001D544);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001AFE0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B274);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B508);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00048218);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063FA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B7A4);

void func_0001B834(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001B858);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E094);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E618);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C260);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C340);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001C340(s32 arg0, s32 *arg1, s32 arg2) {
    if (arg2 != 0) {

    } else {
        func_0000E7B0(arg0 + 0x59C, *arg1);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001E970);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C384);

void func_0001C3F4(void) {
    scePaf_D0AD10FF();
    scePaf_7C2C2742();
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C418);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C428);

void func_0001C450(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00064118;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_00062A70;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C46C);

void func_0001C4A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020900);

void func_0002098C(struct Unk_func_0002098C_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020994);

#if FW_VERSION < 201
void func_0001C4C8(s32 arg0) {
    scePaf_D24E4016(arg0 + 8);
}

void func_0001C4E4(s32 arg0) {
    scePaf_1F0E9712(arg0 + 8);
}

void func_0001C500(s32 arg0) {
    scePaf_0CFDBE2F(arg0 + 8);
}
#else
void func_000209B4(s32 arg0) {
    scePaf_D24E4016(arg0 + 8);
}

void func_000209D0(s32 arg0) {
    scePaf_1F0E9712(arg0 + 8);
}

void func_000209EC(s32 arg0) {
    scePaf_0CFDBE2F(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020A08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020A4C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020A8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020AC8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020B08);

#if FW_VERSION < 201
void func_0001C640(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}

void func_0001C664(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}

void func_0001C688(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}
#else
void func_00020B2C(struct Unk_vt_func_00020B2C_arg0 **arg0) {
    (*arg0)->unk10();
}

void func_00020B50(struct Unk_vt_func_00020B50_arg0 **arg0) {
    (*arg0)->unk14();
}

void func_00020B74(struct Unk_vt_func_00020B74_arg0 **arg0) {
    (*arg0)->unk18();
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020B98);

#if FW_VERSION < 201
void func_0001C6D0(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}

void func_0001C6F4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}

void func_0001C718(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}

void func_0001C73C(s32 arg0) {
    scePaf_95948FB6(arg0 + 8);
}

void func_0001C758(s32 arg0) {
    scePaf_ED89C94B(arg0 + 8);
}

void func_0001C774(s32 arg0) {
    scePaf_BA433BEF(arg0 + 8);
}

void func_0001C790(s32 arg0) {
    scePaf_B7865607(arg0 + 8);
}
#else
void func_00020BBC(struct Unk_vt_func_00020BBC_arg0 **arg0) {
    (*arg0)->unk20();
}

void func_00020BE0(struct Unk_vt_func_00020BE0_arg0 **arg0) {
    (*arg0)->unk24();
}

void func_00020C04(struct Unk_vt_func_00020C04_arg0 **arg0) {
    (*arg0)->unk28();
}

void func_00020C28(s32 arg0) {
    scePaf_95948FB6(arg0 + 8);
}

void func_00020C44(s32 arg0) {
    scePaf_ED89C94B(arg0 + 8);
}

void func_00020C60(s32 arg0) {
    scePaf_BA433BEF(arg0 + 8);
}

void func_00020C7C(s32 arg0) {
    scePaf_B7865607(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020C98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020CD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020D18);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020D58);

#if FW_VERSION < 201
void func_0001C8AC(void) {

}

s32 func_0001C8B4(void) {
    return -1;
}

s32 func_0001C8BC(void) {
    return -1;
}

s32 func_0001C8C4(void) {
    return -1;
}

s32 func_0001C8CC(void) {
    return -1;
}

s32 func_0001C8D4(void) {
    return 0;
}

s32 func_0001C8DC(void) {
    return 0;
}

s32 func_0001C8E4(void) {
    return 1;
}

void func_0001C8EC(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001C8F4);
#else
s32 func_00020D98(void) {
    return -1;
}

s32 func_00020DA0(void) {
    return -1;
}

s32 func_00020DA8(void) {
    return -1;
}

s32 func_00020DB0(void) {
    return 0;
}

s32 func_00020DB8(void) {
    return 0;
}

s32 func_00020DC0(void) {
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020DC8);

#if FW_VERSION == 201
void func_00020F2C(M2C_UNK **arg0) {
    *arg0 = &D_000641B0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020F3C);

void func_00020F64(struct Unk_func_00020F64_0 *arg0) {
    arg0->unk0 = &D_00064118;
    arg0->unk8 = &D_00062A70;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020F80);

void func_00020FB4(void) {
}

s32 func_00020FBC(void) {
    return -1;
}

void func_00020FC4(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020FCC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002114C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000212CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021578);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021824);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021AD8);

void func_00021B48(struct Unk_func_00021B48_0 *arg0, struct Unk_func_00021B48_1 *arg1) {
    arg0->unk30 = (s32) arg1->unk0;
    arg0->unk34 = (s32) arg1->unk4;
    arg0->unk38 = (s32) arg1->unk8;
    arg0->unk3C = (s32) arg1->unkC;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021B6C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063F60);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063F88);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00048360);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064118);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000641B0);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00063FA0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064080);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064118);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000641B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021C8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002236C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000641D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000641DC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000641E0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000641F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022420);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002249C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022624);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022668);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000226D0);

void func_00022740(void) {
    scePaf_D0AD10FF();
    scePaf_7C2C2742();
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022764);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000228B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000229FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022CA8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022F54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023208);

void func_00023268(struct Unk_func_00023268_0 *arg0, struct Unk_func_00023268_1 *arg1) {
    arg0->unk30 = (s32) arg1->unk0;
    arg0->unk34 = (s32) arg1->unk4;
    arg0->unk38 = (s32) arg1->unk8;
    arg0->unk3C = (s32) arg1->unkC;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002328C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064218);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002336C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023B38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023D90);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642BC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642C0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642C4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642C8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642D0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642D4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642DC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642E0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642E4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642E8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642EC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642F0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642F4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642F8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000642FC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064300);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023DD4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023E3C);

void func_00023EAC(void) {
    scePaf_D0AD10FF();
    scePaf_7C2C2742();
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064310);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023ED0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023FAC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024054);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000240E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002417C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000241E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000242B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002439C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000244A4);

#if FW_VERSION < 201
void func_0001D0D4(void) {

}
#else
void func_000244E0(void) {
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000244E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024548);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000245A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000245E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024628);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024670);

#if FW_VERSION < 201
void func_000246F0(void) {

}
#else
void func_000246F0(void) {
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000246F8);

#if FW_VERSION < 201
void func_00024758(void) {

}

void func_0001D340(s32 arg0, s32 arg1, s32 arg2) {
    func_00024940(arg1, arg0, arg2 & 0xFFFF);
}

void func_0001D368(s32 arg0, s32 arg1) {
    func_0002499C(arg1, arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FA14);
#endif

#if FW_VERSION == 100
void func_0001D38C_v100(M2C_UNK **arg0) {
    *arg0 = &D_00064420;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000247BC);
#else
void func_00024758(void) {
}

void func_00024760(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_00024940(arg1, arg0, arg2 & 0xFFFF);
}

void func_00024788(s32 arg0, M2C_UNK arg1) {
    func_0002499C(arg1, arg0);
}

void func_000247AC(M2C_UNK **arg0) {
    *arg0 = &D_00064420;
}

void func_000247BC(M2C_UNK **arg0) {
    *arg0 = &D_00064420;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000247CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000247F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000248A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024940);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002499C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024A58);

#if FW_VERSION < 201
void func_00024A84(void) {

}
#else
void func_00024A84(void) {
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000643C8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000643D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000643E0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064400);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064420);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024A8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024B68);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001D800(void *arg0) {
    func_000263E8(M2C_FIELD(arg0, s32 *, 8));
    return 1;
}
#endif

#if FW_VERSION == 100
s32 func_0001D800(void *arg0) {
    func_000263E8(M2C_FIELD(arg0, s32 *, 4));
    return 1;
}
#endif

#if FW_VERSION < 201
s32 func_0001D820(void) {
    return 0;
}
#else
s32 func_00024C20(struct Unk_func_00024C20_0 *arg0) {
    func_000263E8(arg0->unk8);
    return 1;
}

s32 func_00024C40(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024C48);

#if FW_VERSION == 201
void func_00024C68(struct Unk_func_00024C68_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    func_00025134((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024CA0(struct Unk_func_00024CA0_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    func_00025134((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024CD8(struct Unk_func_00024CD8_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    func_00025184((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024D10(struct Unk_func_00024D10_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    func_00025184((s32) ((u8 *)arg0 + 0xC));
    arg0->unk8 = 0;
}

void func_00024D48(struct Unk_func_00024D48_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    if (arg0->unk8 != 0) {
        func_00024B68((s32) arg0);
    }
    func_000251D4((s32) ((u8 *)arg0 + 0xC));
}

void func_00024D94(struct Unk_func_00024D94_0 *arg0) {
    arg0->unk0 = &D_000644C0;
    if (arg0->unk8 != 0) {
        func_00024B68((s32) arg0);
    }
    func_000251D4((s32) ((u8 *)arg0 + 0xC));
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024DE0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024E58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024E58(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025134((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_00024E58(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025134((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024E98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024E98(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025134((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_00024E98(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025134((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024ED8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024ED8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025184((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_00024ED8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025184((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024F18);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00024F18(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025184((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 100
void func_00024F18(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000644C0;
    func_00025184((s32) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024D48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024D94);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024DE0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020088);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000200C0_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020100);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020140);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020180);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000201C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000201E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020210);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002024C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000202E0);

s32 func_00020300(void *arg0, s32 arg1) {
    return func_00025324(M2C_FIELD(arg0, s32 *, 4), ~arg1) == 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020324);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024F58);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024F80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024FA8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024FE4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002506C);

s32 func_0002508C(struct Unk_func_0002508C_0 *arg0, M2C_UNK arg1) {
    return func_00025324(arg0->unk4, ~arg1) == 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000250B0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000250D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000250F0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002510C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025134);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002515C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025184);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000251AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000251D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000251FC);

#if FW_VERSION < 201
void func_0001DB9C(void) {

}
#else
void func_00025238(void) {
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000644C0);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004BE10);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000644D8);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000644E8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001DBA4);
#endif

#if FW_VERSION < 152
s32 func_0001DBF4(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200, 0, 0);
    var_v1 = 0;
    *arg0 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
s32 func_0001DBF4(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200, 0, 0);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_000252D4(void) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelDeleteEventFlag() != 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
s32 func_000252D4(void) {
    return (sceKernelDeleteEventFlag() == 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 152
s32 func_000252FC(void) {
    s32 var_v1;

    var_v1 = 0;
    if (sceKernelSetEventFlag() != 0) {
        var_v1 = -5;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
s32 func_000252FC(void) {
    return (sceKernelSetEventFlag() == 0) ? 0 : -5;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025324);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002534C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000205C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020640);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001DD20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001DDA4);
#endif

#if FW_VERSION == 201
s32 func_00025240(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag((s32) "OsWrapFlg", 0x200, 0, 0);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}

s32 func_0002528C(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200, 0, 0);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}

s32 func_000252D4(void) {
    return (sceKernelDeleteEventFlag() == 0) ? 0 : -5;
}

s32 func_000252FC(void) {
    return (sceKernelSetEventFlag() == 0) ? 0 : -5;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025324);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002534C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025398);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025410);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025458);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000254FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002558C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002564C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025708);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000257A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025940);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025A64);

#if FW_VERSION < 201
void func_0001E48C(void) {
    func_00025A64(1, 0xFFFF);
}

void func_0001E4AC(void) {
    func_00025A64(0, 0xFFFF);
}
#else
void func_00025AE0(void) {
    func_00025A64(1, 0xFFFF);
}

void func_00025B00(void) {
    func_00025A64(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025B20);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025B70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000645F8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064630);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025BF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025CC4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025D0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025D24);
#else
void func_00025D0C(struct Unk_func_00025D0C_0 *arg0) {
    arg0->unk0 = &D_00064670;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00025D24(M2C_UNK **arg0) {
    *arg0 = &D_00064670;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025D34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025D5C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064670);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025DEC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025E50);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000646AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025F58);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0006471C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025FF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000260B8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00026140);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000261A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000262EC);

s32 func_00026384(s32 arg0) {
    sceKernelDelayThread(arg0 * 0xA);
    return 0;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000263B0);
#else
M2C_UNK *func_000263B0(s32 arg0) {
    void *sp0;
    M2C_UNK *var_s0;
    s32 temp_v0;

    var_s0 = &D_0004965C;
    temp_v0 = func_00025D5C(arg0, &sp0);
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 4;
    }
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000263E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000264EC);

#if FW_VERSION < 201
void func_0001EF04(void) {
    func_000264EC(1, 0xFFFF);
}

void func_0001EF24(void) {
    func_000264EC(0, 0xFFFF);
}
#else
void func_00026568(void) {
    func_000264EC(1, 0xFFFF);
}

void func_00026588(void) {
    func_000264EC(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000265A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000265F8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000648AC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000648E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002667C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002674C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001F130);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000267AC);
#else
void func_00026794(struct Unk_func_00026794_0 *arg0) {
    arg0->unk0 = &D_00064930;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_000267AC(M2C_UNK **arg0) {
    *arg0 = &D_00064930;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000267BC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064930);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000267E4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001F328);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000269E4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00026B7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00026C4C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00026D1C);

#if FW_VERSION < 201
void func_0001F644(s32 arg0) {
    D_0004E4F8 = arg0;
}

void func_0001F650(void) {

}
#else
void func_00026DF4(s32 arg0) {
    D_000CD718 = arg0;
}

void func_00026E00(void) {
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00026E08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002701C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027090);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002715C);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FA70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FB50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001FC0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;
    void **temp_a0;
    void **temp_v0;

    temp_s4 = arg0 + 0x5C;
    func_000250D4(temp_s4);
    temp_s0 = func_00020B70(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = M2C_FIELD(arg0, void ***, 0x4C);
            M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x14)(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0xF0));
            temp_a0 = M2C_FIELD(arg0, void ***, 0x4C);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x14)(temp_a0, 1, M2C_FIELD(arg0, s32 *, 0x100));
        }
    }
    func_000250F0(temp_s4);
    return temp_s0;
}
#endif

#if FW_VERSION == 100
s32 func_0001FC0C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;
    void **temp_a0;
    void **temp_v0;

    temp_s4 = arg0 + 0x58;
    func_000250D4(temp_s4);
    temp_s0 = func_00020B70(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = M2C_FIELD(arg0, void ***, 0x48);
            M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x14)(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0xEC));
            temp_a0 = M2C_FIELD(arg0, void ***, 0x48);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x14)(temp_a0, 1, M2C_FIELD(arg0, s32 *, 0xFC));
        }
    }
    func_000250F0(temp_s4);
    return temp_s0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022614);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FCD4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FD6C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FE14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FEC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001FFBC(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0x98);
}
#endif

#if FW_VERSION == 100
s32 func_0001FFBC(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0x94);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0001FFD8(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x8C);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0x9C);
}
#endif

#if FW_VERSION == 100
s32 func_0001FFD8(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x88);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0x98);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0001FFF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020064);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002011C(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0xE0);
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0002011C(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0xDC);
    }
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020134);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022B20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020180);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020A6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020AC8_v100);

s32 func_00020AF4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020B00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020B2C);
#endif

#if FW_VERSION < 201
s32 func_00020B58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023538);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023564);
#endif

#if FW_VERSION < 201
s32 func_00020B64(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0002359C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020B70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020D44);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000238C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023B7C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023CC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00020E74);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021024);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021184);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000212D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000213E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021514);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021530);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002154C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00029D34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00029D78);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000215E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000216C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000243D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002446C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024460);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024508_v150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021798);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021820);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000218A8);
#endif

#if FW_VERSION < 201
void func_00021938(s32 arg0) {
    D_0004E510 = arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000245B8(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x84);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x24);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION == 100
void func_00021944(void) {

}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000271F8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000273D4);

s32 func_000274B4(struct Unk_func_000274B4_0 *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;
    s32 temp_s4;
    struct Unk_vt_func_000274B4_temp_a0 **temp_a0;
    struct Unk_vt_func_000274B4_temp_v0 **temp_v0;

    temp_s4 = (u8 *)arg0 + 0x5C;
    func_000250D4(temp_s4);
    temp_s0 = func_00028EC0(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = arg0->unk4C;
            (*temp_v0)->unk24(temp_v0, 0, arg0->unk10C);
            temp_a0 = arg0->unk4C;
            (*temp_a0)->unk24(temp_a0, 1, arg0->unk11C);
        }
    }
    func_000250F0(temp_s4);
    return temp_s0;
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064968);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064978);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064988);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064994);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000649A4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000649AC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000649B4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000649BC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000649C4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000649CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000649D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_000649E4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002757C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002769C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000277F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027918);

s32 func_00027B2C(struct Unk_func_00027B2C_0 *arg0) {
    struct Unk_func_00027B2C_temp_v0 *temp_v0;

    temp_v0 = arg0->unkA4;
    if (temp_v0 != NULL) {
        return temp_v0->unk4;
    }
    return arg0->unkB0;
}

s32 func_00027B48(struct Unk_func_00027B48_0 *arg0) {
    struct Unk_func_00027B48_temp_v0 *temp_v0;

    temp_v0 = arg0->unkA4;
    if (temp_v0 != NULL) {
        return temp_v0->unk8;
    }
    return arg0->unkB4;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027B64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027C00);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027CC8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027D40);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002834C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000283A8);

s32 func_000283D4(struct Unk_func_000283D4_0 *arg0, s32 arg1) {
    arg0->unk50 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000283E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002840C);

s32 func_00028438(struct Unk_func_00028438_0 *arg0, s32 arg1) {
    arg0->unk54 = arg1;
    return 0;
}

s32 func_00028444(struct Unk_func_00028444_0 *arg0, s32 arg1) {
    arg0->unk58 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028450);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028614);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000286E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002875C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028798);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028A00);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028C54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028EC0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00029094);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000291C8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000296A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00029830);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000299E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00029AF4);

void func_00029CE0(s32 arg0) {
    func_00026C4C(arg0 - 0x3C);
}

void func_00029CFC(s32 arg0) {
    func_00026D1C(arg0 - 0x3C);
}

void func_00029D18(s32 arg0) {
    func_0002701C(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00029D34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00029D78);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00029DB4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00029EBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00029FC4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002A060);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002A0FC);

void func_0002A1A0(s32 arg0) {
    D_000CD734 = arg0;
}

void func_0002A1AC(struct Unk_func_0002A1AC_0 *arg0) {
    struct Unk_func_0002A1AC_var_v0 *var_v0;

    var_v0 = arg0->unk94;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk30;
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002A1CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002A520);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002A54C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002A61C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002A6D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002A864);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002A87C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002A964);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AA08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AA18);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AA50);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AAB8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AAF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AC0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AC58);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002ACA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002ACF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AD54);

void func_0002ADF4(s32 arg0) {
    func_0002A060(arg0 - 0x3C);
}

void func_0002AE10(s32 arg0) {
    func_0002A0FC(arg0 - 0x3C);
}

void func_0002AE2C(s32 arg0) {
    func_0002A520(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AE48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AF08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002AFC8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B044);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B0C0);

void func_0002B144(s32 arg0) {
    D_000CD738 = arg0;
}

void func_0002B150(struct Unk_func_0002B150_0 *arg0) {
    struct Unk_func_0002B150_var_a0 *var_a0;
    struct Unk_func_0002B150_var_v0 *var_v0;

    var_v0 = arg0->unk68;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk38;
        } while (var_v0 != NULL);
    }
    var_a0 = arg0->unk70;
    if (var_a0 != NULL) {
        do {
            var_a0 = var_a0->unk24;
        } while (var_a0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B188);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B37C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B3EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B478);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B58C);

s32 func_0002B5D4(struct Unk_func_0002B5D4_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x4C;
    func_000250D4(temp_s1);
    arg0->unk5C = 0;
    func_000250F0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B618);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B668);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B8FC);

s32 func_0002B980(struct Unk_func_0002B980_0 *arg0, struct Unk_func_0002B980_1 *arg1) {
    s32 temp_s2;
    void **temp_v1;

    temp_s2 = (u8 *)arg0 + 0x54;
    func_000250D4(temp_s2);
    temp_v1 = arg0->unk74;
    arg0->unk74 = (void **) (&arg1->unk24);
    *temp_v1 = arg1;
    arg1->unk24 = 0;
    func_000250F0(temp_s2);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002B9E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002BA70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002BAF0);

void func_0002BB18(struct Unk_func_0002BB18_0 *arg0, s32 arg1) {
    void *temp_s0;

    arg0->unk48 = arg1;
    temp_s0 = (u8 *)arg0 + 0x3C;
    func_00024760((s32) temp_s0, arg1 + 0xD8, 2);
    func_00024760((s32) temp_s0, arg1 + 0xEC, 3);
}

void func_0002BB70(s32 arg0) {
    func_0002B044(arg0 - 0x3C);
}

void func_0002BB8C(s32 arg0) {
    func_0002B0C0(arg0 - 0x3C);
}

void func_0002BBA8(s32 arg0) {
    func_0002B37C(arg0 - 0x3C);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064AA0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064AD8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064AE0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064AF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064B00);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064B10);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002194C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021ADC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021B08);
#endif

#if FW_VERSION == 150
s32 func_00021B64(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00021B64(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x44;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x5D) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_00021B64(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021BA8);
#endif

#if FW_VERSION == 150
s32 func_00021BF0(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00021BF0(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x44;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_00021BF0(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021C34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00021D98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00021D98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021DA8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021DC0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021E2C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021E98);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021ED0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021F38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00021F70);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002214C);

void func_00022174(s32 arg0) {
    func_00022190(arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022190);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022218);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002228C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000222A8);
#endif

#if FW_VERSION == 150
void func_000222A8(s32 arg0) {
    func_00024508_v150(arg0 - 0x3C);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000222C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000222E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022388);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022430);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000224A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022518);

void func_00022594(s32 arg0) {
    D_0004E518 = arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00025280(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x68);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0xC0);
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION == 100
void func_000225A0(void) {

}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064B1C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064B30);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064B60);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064B70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064B80);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064B90);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000252A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000225A8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022760);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000227AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002281C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022854);
#endif

#if FW_VERSION == 150
s32 func_0002289C(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x4C;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0002289C(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_0002289C(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x4C;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000228E0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025608);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022930);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022AE8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022B24);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022B60);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022BBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022BE4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022C0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022C28);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022C44);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022C60);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022D80);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022EA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00022F60);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023020);

void func_000230F4(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000230FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023318);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023340);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023408);
#endif

#if FW_VERSION == 150
s32 func_0002346C(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0002346C(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x44;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_0002346C(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000234B0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000234EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00023528(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x150) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00023528(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x13C) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00023534(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0001D340((s32) (arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00023534(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0001D340((s32) (arg0 + 0x38), arg1 + 0x2C, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023560);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002386C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023888);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000238A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000238C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000239FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023B38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023BBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023C40);

void func_00023CCC(s32 arg0) {
    D_0004E520 = arg0;
}

void func_00023CD8(void) {

}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00023CE0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002415C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024184);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000241CC);
#endif

#if FW_VERSION == 150
s32 func_00024268(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00024268(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x44;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_00024268(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000242AC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000242E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00024324(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0001D340((s32) (arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00024324(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0001D340((s32) (arg0 + 0x38), arg1 + 0x18, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024350);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024508);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024810);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027628);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002487C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000249F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024A10);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024A2C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024A48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024B90);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024CD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024D88);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024E38);

void func_00024EF0(s32 arg0) {
    D_0004E524 = arg0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00027CC0(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x54);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x14);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027CE0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027EA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027EBC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027F04);
#endif

#if FW_VERSION == 150
s32 func_00027F60(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4((s32) temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_00027F60(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000250F0(temp_s1);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027FA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00027FE0);

s32 func_0002801C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_0001D340((s32) (arg0 + 0x3C), arg1 + 0x40, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028048);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028318);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028334);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028350);
#endif

#if FW_VERSION == 100
void func_00024EFC(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00048C70);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00048CA0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00048CB0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00048CC0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064BA0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064BB8);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002BBC4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002BEE4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002BFD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002C0CC);

void func_0002C1D4(struct Unk_func_0002C1D4_0 *arg0) {
    struct Unk_func_0002C1D4_var_v0 *var_v0;

    var_v0 = arg0->unk6C;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk20;
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002C1F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002C3F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002C454);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002C51C);

s32 func_0002C5E0(struct Unk_func_0002C5E0_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_000250D4(temp_s1);
    arg0->unk58 = 0;
    func_000250F0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002C624);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002C6A8);

s32 func_0002C720(struct Unk_func_0002C720_0 *arg0, s32 arg1) {
    arg0->unk318 = arg1;
    return 0;
}

s32 func_0002C72C(struct Unk_func_0002C72C_0 *arg0, s32 arg1) {
    arg0->unk44 = arg1;
    func_00024760((s32) ((u8 *)arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}

s32 func_0002C758(void) {
    return 0;
}

s32 func_0002C760(void) {
    return 0;
}

s32 func_0002C768(void) {
    return 0;
}

s32 func_0002C770(struct Unk_func_0002C770_0 *arg0) {
    struct Unk_vt_func_0002C770_temp_a0 **temp_a0;

    temp_a0 = arg0->unk44;
    (*temp_a0)->unk70(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002C79C);

void func_0002C850(s32 arg0) {
    func_0002BFD8(arg0 - 0x3C);
}

void func_0002C86C(s32 arg0) {
    func_0002C0CC(arg0 - 0x3C);
}

void func_0002C888(s32 arg0) {
    func_0002C3F4(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002C8A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002CA04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002CB64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002CBF0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002CC7C);

void func_0002CD10(s32 arg0) {
    D_000CD750 = arg0;
}

void func_0002CD1C(struct Unk_func_0002CD1C_0 *arg0) {
    struct Unk_func_0002CD1C_var_v0 *var_v0;

    var_v0 = arg0->unk110;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk40;
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002CD3C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002D1D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002D1F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002D23C);

s32 func_0002D354(struct Unk_func_0002D354_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_000250D4(temp_s1);
    arg0->unk58 = 0;
    func_000250F0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002D398);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002D42C);

s32 func_0002D468(struct Unk_func_0002D468_0 *arg0, s32 arg1) {
    arg0->unk44 = arg1;
    func_00024760((s32) ((u8 *)arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}

s32 func_0002D494(void) {
    return 0;
}

s32 func_0002D49C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002D4A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002D4B4);

void func_0002D6C8(s32 arg0) {
    func_0002CBF0(arg0 - 0x3C);
}

void func_0002D6E4(s32 arg0) {
    func_0002CC7C(arg0 - 0x3C);
}

void func_0002D700(s32 arg0) {
    func_0002D1D0(arg0 - 0x3C);
}

s32 func_0002D71C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002D724);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002D864);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002D9A4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002DA58);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002DB0C);

void func_0002DBC8(s32 arg0) {
    D_000CD754 = arg0;
}

void func_0002DBD4(struct Unk_func_0002DBD4_0 *arg0) {
    struct Unk_func_0002DBD4_var_v0 *var_v0;

    var_v0 = arg0->unk60;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk18;
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002DBF4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002DDFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002DE48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002DE90);

s32 func_0002DF4C(struct Unk_func_0002DF4C_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_000250D4(temp_s1);
    arg0->unk58 = 0;
    func_000250F0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002DF90);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002E014);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002E050);

s32 func_0002E0E0(struct Unk_func_0002E0E0_0 *arg0, s32 arg1) {
    void *temp_s0;

    arg0->unk44 = arg1;
    temp_s0 = (u8 *)arg0 + 0x3C;
    func_00024760((s32) temp_s0, arg1 + 0x40, 0);
    func_00024760((s32) temp_s0, arg1 + 0x54, 1);
    return 0;
}

s32 func_0002E13C(void) {
    return 0;
}

void func_0002E144(s32 arg0) {
    func_0002DA58(arg0 - 0x3C);
}

void func_0002E160(s32 arg0) {
    func_0002DB0C(arg0 - 0x3C);
}

void func_0002E17C(s32 arg0) {
    func_0002DDFC(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002E198);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002E1E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002E25C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002E2D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002E3EC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002E508);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002E62C);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064C40);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064C88);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064C98);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064CA8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064CB8);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00048D5C);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064CC8);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064CE0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064D20);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064D34);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064D48);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064D5C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00024F04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000250C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000250DC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025124);

s32 func_0002515C_v100(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x44;
    func_000250D4(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    func_000250F0(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000251A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000251DC);

s32 func_00025218(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    func_0001D340((s32) (arg0 + 0x38), arg1 + 0x40, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025244);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025478);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025494);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000254B0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064D70);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064D88);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000254CC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00048E5C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002554C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004C644);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004C660);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004C6A0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004C6D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004C6E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00028678(void) {
    D_00081240 = 0;
    D_00081242 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002868C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004C644);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004C660);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004C6A0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004C6D8);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_0004C6E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000257D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025828);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025874);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028810);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000258C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002591C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025978);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_000259DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00028ACC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025AE4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025DA4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_00025DC0);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_00522C", D_00064DD0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002E7D8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002ECD8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002EE38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002EE48);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002EE78);

INCLUDE_ASM("nonmatchings/msvideo_plugin_00522C", func_0002EEC8);
#endif
