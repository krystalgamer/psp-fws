#include "common.h"
#include "video_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/video_main_plugin", module_start);

s32 module_stop(void) {
    func_0004FF58();
    return 0;
}

#if FW_VERSION == 282
void sceVideo_9DD8CE8E(void) {
    func_0000BF58();
}
#endif

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

s32 func_00001098(struct Unk_func_00001098_0 *arg0) {
    return arg0->unk24;
}

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

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000518E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051904);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051914);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051920);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051930);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000011F8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001584);

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

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519D4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_000519DC);

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

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/video_main_plugin", D_0004FD10);
#else
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

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051C98);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051CA4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051CB0);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051CC8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051CE8);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051CEC);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051D04);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051D1C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051D30);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051D44);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051D5C);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051DA4);

INCLUDE_RODATA("nonmatchings/video_main_plugin", D_00051DA8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001E50);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001EB4);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00001F18);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002098);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002180);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000021E0);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002334);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002374);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000244C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000025B8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002650);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002760);

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

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000027FC);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000028B0);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_0000291C);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00002A24);

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

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000050E4);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005220);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005334);

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

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005878);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_000058A8);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005944);

void func_00005964(struct Unk_func_00005964_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005974);

INCLUDE_ASM("nonmatchings/video_main_plugin", func_00005A00);

void func_00005B1C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005E68();
}
