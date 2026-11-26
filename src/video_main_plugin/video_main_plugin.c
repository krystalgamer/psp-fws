#include "common.h"
#include "video_main_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/video_main_plugin", module_start);

s32 module_stop(void) {
    func_0004FF58();
    return 0;
}

#if FW_VERSION >= 282
void sceVideo_9DD8CE8E(void) {
    func_0000BF58();
}
#endif

#if FW_VERSION >= 350
s32 func_00044DC4(void) {
    return M2C_FIELD(scePaf_F77E3DC0(), s32 *, 0x9C);
}

s32 func_00000198(void) {
    return D_00056BE0;
}

void func_000001A4(s32 arg0) {
    void *temp_v0;

    temp_v0 = scePaf_F77E3DC0();
    if (M2C_FIELD(temp_v0, s32 *, 0x9C) == 0) {

    } else {
        scePaf_0A4868F1(temp_v0, arg0);
    }
}
#endif

#if FW_VERSION == 340
s32 func_00000178_v340(void) {
    return D_000563A0;
}
#endif

#if FW_VERSION == 330
s32 func_00000178_v330(void) {
    return D_000563A0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00000184(s32 arg0) {
    void *temp_v0;

    temp_v0 = scePaf_5DFB5858();
    if (M2C_FIELD(temp_v0, s32 *, 0x9C) != 0) {
        if (D_00056BD5 != 0) {

        } else {
            D_00056BD8 = arg0;
            scePaf_0CC722C1(temp_v0, arg0);
        }
    }
}

void func_000001DC(void) {
    void *temp_v0;

    temp_v0 = scePaf_5DFB5858();
    if (M2C_FIELD(temp_v0, s32 *, 0x9C) != 0) {
        scePaf_0CC722C1(temp_v0, D_000563A0);
        D_00056BD5 = 1;
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000220);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000178);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000001B8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000001F8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000022C);

void func_00000260(void) {
    if (D_00057208 == 0) {

    } else {
        func_000375CC(D_00057208);
        func_000006E0(D_00057208);
    }
}

void func_000002A4(void) {
    if (D_00057208 == 0) {

    } else {
        func_000007B8((void *) D_00057208);
    }
}

void func_000002D8(void) {
    if (D_00057208 == 0) {

    } else {
        func_000007D8((void *) D_00057208);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000030C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000344);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000404);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000460);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000004A4);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000004E8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000534);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000005BC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000660);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000006E0);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000006F0);

void func_00000794(void) {
    sceVshCommonGui_4704D5BD(0);
    func_00036908();
}

void func_000007B8(struct Unk_func_000007B8_0 *arg0) {
    arg0->unk24 = (s32) arg0->unk20;
    func_000375CC((s32) arg0);
}

void func_000007D8(struct Unk_func_000007D8_0 *arg0) {
    if (arg0->unk24 != 1) {
        func_00037568((s32) arg0);
    }
}

s32 func_00000804(s32 arg0) {
    sceVshCommonGui_4704D5BD(0);
    func_00036898();
    func_000006E0(arg0);
    return 1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000840);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000898);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000008F0);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000009F8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000BA4);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000F4C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000F9C);

void func_00000FFC(void) {
    if ((D_000571FC == NULL) || (D_000571FC->unk94 == 0)) {
        func_00002180();
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001034);
#else
s32 func_00001098(struct Unk_func_00001098_0 *arg0) {
    return D_00057418;
}
#endif

#if FW_VERSION < 350
s32 func_00001098(struct Unk_func_00001098_0 *arg0) {
    return arg0->unk24;
}
#else
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000220);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000002B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519B8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519BC);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519C4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519D8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519FC);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A0C);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A1C_v351);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A2C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A1C_v350);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A2C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A38);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A48);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A60);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A78);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A90);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AA4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AA4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AB4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AD4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AE0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AE8);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B0C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B0C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B7C);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B80_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B80_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B8C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051C04);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051C14);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000520C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000520CC);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000520D0_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000520D0_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000520D4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000520F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052120);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052124);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052154);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000521A4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000521A4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052250);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052318);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052348);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052384);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000523B4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000523D4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052414);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_0005246C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052490);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_0005185C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000525D8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051878);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_0005187C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052680);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin", func_000010A0);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001100);

void func_00001160(M2C_UNK **arg0) {
    *arg0 = &D_00051DD8;
    D_0005721C = 0;
    func_00036CC0((s32) arg0);
}

void func_0000118C(M2C_UNK **arg0) {
    *arg0 = &D_00051DD8;
    D_0005721C = 0;
    func_00036CC0((s32) arg0);
}

void func_000011B8(M2C_UNK **arg0) {
    *arg0 = &D_00051DD8;
    D_0005721C = 0;
    func_00036CC0((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000518E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051904);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051914);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051920);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051930);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000526E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000526FC);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052708);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin", func_000011F8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001584);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001644);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001674);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000168C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000169C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000016BC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000016D8);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001830);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001A04);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001A4C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001A74);

void func_00001ADC(struct Unk_func_00001ADC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0 == 0) {

    } else {
        func_000291E8(temp_v0);
    }
}

void func_00001B0C(struct Unk_func_00001B0C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk24;
    if (temp_v0 == 0) {

    } else {
        func_00028DB8(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001B3C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001BD8);

void func_00001C88(void) {
    s32 temp_v0;

    if (D_0005721C != 0) {
        temp_v0 = D_0005721C->unk20;
        if (temp_v0 == 0) {

        } else {
            func_0002F3FC(temp_v0);
        }
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001CC8);

void func_00001CEC(void) {
    s32 temp_v0;

    if (D_0005721C != 0) {
        temp_v0 = D_0005721C->unk20;
        if (temp_v0 == 0) {

        } else {
            func_0002F438(temp_v0);
        }
    }
}

void func_00001D2C(struct Unk_func_00001D2C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk2C;
    if (temp_v0 == 0) {

    } else {
        func_000008F0(temp_v0);
    }
}

void func_00001D5C(struct Unk_func_00001D5C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk2C;
    if (temp_v0 == 0) {

    } else {
        func_000009F8(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001D8C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001DE0);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519D4);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519DC);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519EC);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A00);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A1C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A2C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A44);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A54);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A6C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A88);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A98);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AA4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AB0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AC0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AC8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AD0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AE4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051AF8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B0C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B20);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B2C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B38);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B44);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B4C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B54);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B80);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00050438);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_0004FD10);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051B88);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051BAC);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051BC0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051BD4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051BE4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051BF0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051BFC);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051C18);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051C38);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051C58);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051C78);

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A00_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051A00_v330);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051C98);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051CA4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051CB0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051CC8);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00052A80);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051CE8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051CEC);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051D04);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051D1C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051D30);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051D44);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051D5C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000338);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000041C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000450);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/video_main_plugin", func_000004A4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/video_main_plugin", func_000004A4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000050C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000005AC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000001B8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000001F8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000660);

void func_00000260(void) {
    if (D_00057208 == 0) {

    } else {
        func_000375CC(D_00057208);
        func_00000B14(D_00057208);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000006D8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000002D8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000030C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000344);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000838);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000894);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000004A4);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000004E8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000534);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000005BC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000A94);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000B14);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000006F0);

void func_00000794(void) {
    sceVshCommonGui_1F02F9D5(0);
    func_00036908();
}

void func_00000BEC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    func_000375CC((s32) arg0);
}

void func_00000C0C(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) != 1) {
        func_00037568((s32) arg0);
    }
}

s32 func_00000804(s32 arg0) {
    sceVshCommonGui_1F02F9D5(0);
    func_00036898();
    func_00000B14(arg0);
    return 1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000C74);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000CCC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000D24);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000E2C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000FD8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001380);

void func_00000F9C(s32 arg0) {
    if (D_00057204 == 0) {

    } else {
        func_00037354(D_00057204, arg0);
    }
    scePaf_08350B98(arg0, 0x80005, &func_0000566C, 0);
}

void func_00000FFC(void) {
    if ((D_000571FC == NULL) || (D_000571FC->unk94 == 0)) {
        func_00002180();
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001034);

s32 func_000014CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000014D4);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001534);

void func_00001594(M2C_UNK **arg0) {
    *arg0 = &D_00051DD8;
    D_00057424 = 0;
    func_00036CC0((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000118C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000011B8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000011F8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000187C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001B28);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001CFC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001D44);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001D6C);

void func_00001DD4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v0 == 0) {

    } else {
        func_000291E8(temp_v0);
    }
}

void func_00001E04(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v0 == 0) {

    } else {
        func_00028DB8(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001E34);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001ED0);

void func_00001FD8(void) {
    s32 temp_v0;

    if (D_00057424 != 0) {
        temp_v0 = M2C_FIELD(D_00057424, s32 *, 0x20);
        if (temp_v0 == 0) {

        } else {
            func_0002F3FC(temp_v0);
        }
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002018);

void func_00002070(void) {
    s32 temp_v0;

    if (D_00057424 != 0) {
        temp_v0 = M2C_FIELD(D_00057424, s32 *, 0x20);
        if (temp_v0 == 0) {

        } else {
            func_0002F438(temp_v0);
        }
    }
}

void func_000020B0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {

    } else {
        func_00000D24(temp_v0);
    }
}

void func_000020E0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {

    } else {
        func_00000E2C(temp_v0, arg1, arg2);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001D8C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001DE0);
#else
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051DA4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051DA8);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001E50);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001EB4);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001F18);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002098);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002180);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000021E0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin", func_000025C4);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002334);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002374);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000244C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000025B8);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002650);
#else
void func_00002650(void) {
    void **temp_a0;
    void **temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    if (D_00057204 == 0) {

    } else {
        func_00001DE0(D_00057204, 1);
    }
    temp_v0 = scePaf_88784487(&D_00051A44);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_DCE3D225(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 4)(1);
        }
    }
    temp_a1 = M2C_FIELD(D_00057200, void ***, 8);
    D_000571E0 = 1;
    M2C_FIELD(*temp_a1, M2C_UNK (**)(void **, void **), 0x94)(temp_a1, temp_a1);
    func_0000291C();
    func_000027FC(3, 1, 1);
    if (D_000573E7 != 0) {
        D_000573E7 = 0;
        temp_v0_3 = scePaf_88784487(&D_00052680);
        if (temp_v0_3 != NULL) {
            M2C_FIELD(temp_v0_3, u8 *, 0x1C0) = (u8) D_000573E8;
        }
    }
    temp_a0 = M2C_FIELD(D_00057200, void ***, 8);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x90)(temp_a0);
    func_00029404();
    D_000573F1 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002760);

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000267C);
#endif

#if FW_VERSION < 300
void func_000027A0(void) {
    void *temp_v0;
    struct Unk_func_000027A0_temp_v0_2 *temp_v0_2;

    D_00057220 = 0;
    temp_v0 = scePaf_D4FAE7D0(&D_00051904);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            D_00057220 = temp_v0_2->unk2C();
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000027FC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000028B0);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000291C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002A24);

#if FW_VERSION >= 350
void func_00002ADC(void) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_88784487(&D_00051A1C);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_DCE3D225(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00002ADC(void) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00051A1C);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 8)(1);
        }
    }
}
#endif

#if FW_VERSION < 300
void func_00002ADC(void) {
    void *temp_v0;
    struct Unk_func_00002ADC_temp_v0_2 *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00051A1C);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk4(1);
        }
    }
}
#endif

#if FW_VERSION >= 350
void func_00002B24(void) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_88784487(&D_00051A1C);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_DCE3D225(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 8)(0);
        }
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00002B24(void) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00051A1C);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 8)(0);
        }
    }
}
#endif

#if FW_VERSION < 300
void func_00002B24(void) {
    void *temp_v0;
    struct Unk_func_00002B24_temp_v0_2 *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00051A1C);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk4(0);
        }
    }
}
#endif

void func_00002B6C(void) {
    func_00002180();
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002B88);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002C78);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002E04);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002E50);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002EEC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002F78);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000303C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00003444);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00003614);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000037A4);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000038FC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00003B78);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00003EBC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00003F70);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00004028);

void func_000040C4(void) {
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000040CC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000442C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00004488);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000452C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00004710);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00004B14);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00004AC0);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00004B54);

s32 func_00004BD8(void) {
    s32 temp_v0;

    temp_v0 = D_00057224 != 0;
    return (D_000571F0 != 0) ? (temp_v0 | 2) : temp_v0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00004BF8);
#endif

#if FW_VERSION == 282
void func_00004C14(void) {
    void *temp_v0;
    struct Unk_func_00004C14_temp_v0_2 *temp_v0_2;

    func_00002B24();
    func_00029404();
    temp_v0 = scePaf_D4FAE7D0(&D_00051904);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk8(0);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00004C6C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00004E64);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000050B4);

#if FW_VERSION >= 300
s32 func_00005030(void) {
    func_00005050();
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005050);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000050E4);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin", func_000055A4);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000566C);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005220);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005334);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005314);
#endif

void func_000053B0(void) {
    if (D_000571F4 == 0) {
        if ((D_000571FC == NULL) || (D_000571FC->unk94 == 0)) {
            func_000293E0();
            D_000571E2 = 0;
            func_00002180();
        }
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005404);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005488);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005824);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005848);

#if FW_VERSION >= 310
void func_00005B1C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005E68();
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005944);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005878);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000058A8);

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005944);
#endif

void func_00005964(struct Unk_func_00005964_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005974);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005A00);

#if FW_VERSION < 310
void func_00005B1C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005E68();
}
#endif
