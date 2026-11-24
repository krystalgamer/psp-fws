#include "common.h"
#include "video_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000024);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000000AC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", module_start);

s32 module_stop(void) {
    func_0004FF58();
    return 0;
}

void sceVideo_9DD8CE8E(void) {
    func_0000BF58();
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000178);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000001B8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000001F8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000022C);

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

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000030C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000344);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000404);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000460);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000004A4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000004E8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000534);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000005BC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000660);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000006E0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000006F0);

void func_00000794(void) {
    sceVshCommonGui_4704D5BD(0);
    func_00036908();
}

void func_000007B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    func_000375CC((s32) arg0);
}

void func_000007D8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) != 1) {
        func_00037568((s32) arg0);
    }
}

s32 func_00000804(s32 arg0) {
    sceVshCommonGui_4704D5BD(0);
    func_00036898();
    func_000006E0(arg0);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000840);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000898);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000008F0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000009F8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000BA4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000F4C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00000F9C);

void func_00000FFC(void) {
    if ((D_000571FC == NULL) || (M2C_FIELD(D_000571FC, u8 *, 0x94) == 0)) {
        func_00002180();
    }
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001034);

s32 func_00001098(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000010A0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001100);

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

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000518E8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051904);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051914);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051920);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051930);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000011F8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001584);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001830);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001A04);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001A4C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001A74);

void func_00001ADC(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v0 == 0) {

    } else {
        func_000291E8(temp_v0);
    }
}

void func_00001B0C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v0 == 0) {

    } else {
        func_00028DB8(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001B3C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001BD8);

void func_00001C88(void) {
    s32 temp_v0;

    if (D_0005721C != 0) {
        temp_v0 = M2C_FIELD(D_0005721C, s32 *, 0x20);
        if (temp_v0 == 0) {

        } else {
            func_0002F3FC(temp_v0);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001CC8);

void func_00001CEC(void) {
    s32 temp_v0;

    if (D_0005721C != 0) {
        temp_v0 = M2C_FIELD(D_0005721C, s32 *, 0x20);
        if (temp_v0 == 0) {

        } else {
            func_0002F438(temp_v0);
        }
    }
}

void func_00001D2C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {

    } else {
        func_000008F0(temp_v0);
    }
}

void func_00001D5C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {

    } else {
        func_000009F8(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001D8C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001DE0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000519D4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000519DC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000519EC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051A00);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051A1C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051A2C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051A44);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051A54);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051A6C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051A88);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051A98);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051AA4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051AB0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051AC0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051AC8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051AD0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051AE4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051AF8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051B0C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051B20);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051B2C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051B38);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051B44);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051B4C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051B54);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051B80);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051B88);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051BAC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051BC0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051BD4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051BE4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051BF0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051BFC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051C18);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051C38);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051C58);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051C78);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051C98);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051CA4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051CB0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051CC8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051CE8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051CEC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051D04);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051D1C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051D30);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051D44);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051D5C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051DA4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051DA8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001E50);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001EB4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00001F18);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002098);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002180);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000021E0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002334);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002374);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000244C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000025B8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002650);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002760);

void func_000027A0(void) {
    void *temp_v0;
    void *temp_v0_2;

    D_00057220 = 0;
    temp_v0 = scePaf_D4FAE7D0(&D_00051904);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            D_00057220 = M2C_FIELD(temp_v0_2, s32 (**)(), 0x2C)();
        }
    }
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000027FC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000028B0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000291C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002A24);

void func_00002ADC(void) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00051A1C);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 4)(1);
        }
    }
}

void func_00002B24(void) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00051A1C);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 4)(0);
        }
    }
}

void func_00002B6C(void) {
    func_00002180();
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002B88);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002C78);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002E04);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002E50);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002EEC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00002F78);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000303C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00003444);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00003614);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000037A4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000038FC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00003B78);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00003EBC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00003F70);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00004028);

void func_000040C4(void) {
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000040CC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000442C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00004488);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000452C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00004710);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00004B14);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00004B54);

s32 func_00004BD8(void) {
    s32 temp_v0;

    temp_v0 = D_00057224 != 0;
    return (D_000571F0 != 0) ? (temp_v0 | 2) : temp_v0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00004BF8);

void func_00004C14(void) {
    void *temp_v0;
    void *temp_v0_2;

    func_00002B24();
    func_00029404();
    temp_v0 = scePaf_D4FAE7D0(&D_00051904);
    if (temp_v0 != NULL) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK), 8)(0);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00004C6C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00004E64);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000050B4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000050E4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005220);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005334);

void func_000053B0(void) {
    if (D_000571F4 == 0) {
        if ((D_000571FC == NULL) || (M2C_FIELD(D_000571FC, u8 *, 0x94) == 0)) {
            func_000293E0();
            D_000571E2 = 0;
            func_00002180();
        }
    }
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005404);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005488);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005824);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005848);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005878);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000058A8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005944);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005964);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005974);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005A00);

void func_00005B1C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005E68();
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005B3C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005B8C);

void func_00005BDC(void) {
    func_000060CC();
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005BF8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005CC4);

void func_00005D58(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00006308();
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005D78);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005DF0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005E68);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005E88);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00005F6C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00006018);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000060CC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000060F8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00006308);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00006328);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00006404);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000653C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00006590);

s32 func_000065E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000065EC);

s32 func_00006640(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

void func_0000664C(void) {
}

void func_00006654(void) {
}

void func_0000665C(void) {
}

void func_00006664(void) {
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000666C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000066B0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000066FC);

s32 func_00006728(void) {
    return D_000569B8;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00006734);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00006774);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000079F0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051DD8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051E00);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051ED8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051EF8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051F28);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051F44);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051F60);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051F84);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051FB0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051FD0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00051FEC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052004);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_0005201C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_0005203C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052050);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_0005206C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052084);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052098);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000520AC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000520BC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000520D0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000520E4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052100);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052110);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_0005212C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052140);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052150);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052168);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052188);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000521A4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000521C0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000521E4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000521F4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052218);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_0005222C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_0005223C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052254);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052264);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052270);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_0005227C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052288);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052294);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000522A8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00008C6C);

u8 func_00008DD8(void *arg0) {
    u8 temp_v0;
    void **temp_a0;
    void **temp_a0_2;
    void **temp_v0_2;

    temp_v0 = func_0003824C(M2C_FIELD(arg0, s32 *, 0xAC));
    M2C_FIELD(arg0, u8 *, 0xC0) = temp_v0;
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = M2C_FIELD(arg0, void ***, 0xB4);
        M2C_FIELD(*temp_v0_2, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0xC8)(temp_v0_2, 2, 0, 0);
        temp_a0 = M2C_FIELD(arg0, void ***, 0xB4);
        M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0xC8)(temp_a0, 1, 0, 0);
        temp_a0_2 = M2C_FIELD(arg0, void ***, 0xB4);
        M2C_FIELD(*temp_a0_2, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0xC8)(temp_a0_2, 0, 0, 0);
    }
    return M2C_FIELD(arg0, u8 *, 0xC0);
}

s32 func_00008E70(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = arg1 & 0xFF;
    var_a2 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xC0) != 0) {
        if (temp_v1 != 0) {
            M2C_FIELD(arg0, u8 *, 0xC0) = 0U;
        }
        var_a2 = func_00038458(M2C_FIELD(arg0, s32 *, 0xAC), temp_v1);
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00008EB0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00008FF0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000913C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009200);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009330);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009380);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009404);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009540);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000095E8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009984);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009B1C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009B30);

M2C_UNK *func_00009B64(void) {
    return &D_000522D4;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009B70);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009C2C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00009EE8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000522D4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000A040);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000A108);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000A1F0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000A2EC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000A3E8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000A4D0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000A5C0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000A5F8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000A7F0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000A9C4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000AA94);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000AC50);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000AD68);

void func_0000AE88(void) {
    func_0000AEA4();
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000AEA4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000AED0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000B038);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000B0A8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000B0BC);

M2C_UNK *func_0000B0F0(void) {
    return &D_00052478;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000B0FC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000B1B0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000B1F8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052398);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000523B0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000523C8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000523D0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000523F0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052448);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052478);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000B240);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000B900);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000B950);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000524C8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000524E0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052508);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052538);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000B9A8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000BA1C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000BAB0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000BB08);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000BCF0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000BD2C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000BD68);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000BDEC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000BE70);

s32 func_0000BF44(void) {
    return (D_00057254 == 0) ? 0 : (D_00057254 + 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000BF58);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000BF90);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000C03C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000C0E8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000C2B8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000C488);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000CB9C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000D0E4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000D1E0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000D2C0);

s32 func_0000D3A0(void **arg0) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **), 0x78)(arg0);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000D3FC(void **arg0) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **), 0x7C)(arg0);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000D458(void **arg0) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **), 0x80)(arg0);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000D4B4);

s32 func_0000D518(void **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK), 0x88)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000D57C(void **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK), 0x8C)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000D5E0);

s32 func_0000D644(void **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK, M2C_UNK), 0x94)(arg0, arg1, arg2);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000D6B8(void **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK, M2C_UNK), 0x98)(arg0, arg1, arg2);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000D72C(void **arg0) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **), 0x9C)(arg0);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000D788);

s32 func_0000D834(void **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK, M2C_UNK), 0xA4)(arg0, arg1, arg2);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000D8A8(void **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK, M2C_UNK), 0xA8)(arg0, arg1, arg2);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000D91C(void **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK, M2C_UNK), 0xAC)(arg0, arg1, arg2);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000D990(void **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK), 0xB0)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000D9F4(void **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK), 0xB4)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000DA58(void **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK), 0xB8)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000DABC(void **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **, M2C_UNK), 0xBC)(arg0, arg1);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000DB20(void **arg0) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **), 0xC0)(arg0);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

s32 func_0000DB7C(void **arg0) {
    s32 temp_s1;

    M2C_FIELD(*arg0, M2C_UNK (**)(), 0xC8)();
    temp_s1 = M2C_FIELD(*arg0, s32 (**)(void **), 0xC4)(arg0);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0xCC)(arg0);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000DBD8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000DDA4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000DF94);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000E044);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000E5DC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000EA6C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000ED28);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000EF94);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000F048);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000F238);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000F390);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000525EC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000525F8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052604);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052614);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052624);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052634);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052648);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052658);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052668);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052678);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_0005268C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_0005269C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000526AC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000526BC);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000526C8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000F440);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000F820);

s32 func_0000F948(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000F950);

s32 func_0000FAE0(void) {
    return 0;
}

s32 func_0000FAE8(void) {
    return 0;
}

s32 func_0000FAF0(void) {
    return 0;
}

s32 func_0000FAF8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000FB00);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000FC34);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000FE2C);

void func_0000FF18(s32 arg0) {
    func_00042E1C(arg0 + 0x258);
}

void func_0000FF34(s32 arg0) {
    func_00042E2C(arg0 + 0x258);
}

s32 func_0000FF50(s32 arg0) {
    func_000250D0(arg0 + 0xA50);
    return 0;
}

s32 func_0000FF70(s32 arg0) {
    func_000250EC(arg0 + 0xA50);
    return 0;
}

s32 func_0000FF90(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xB14) = 1;
    func_00025068(arg0 + 0xA68, 1);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0000FFBC);

s32 func_0000FFF4(void *arg0, s32 arg1) {
    void **temp_a0;

    M2C_FIELD(arg0, s32 *, 0xC78) = arg1;
    func_0003F4F4(arg0 + 0x44);
    temp_a0 = M2C_FIELD(arg0, void ***, 0xA40);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, s32), 0x78)(temp_a0, arg1);
    return 0;
}

void func_00010044(s32 arg0) {
    func_0003ED04(arg0 + 0x44);
}

void func_00010060(s32 arg0) {
    func_0003F3D8(arg0 + 0x44);
}

void func_0001007C(s32 arg0) {
    func_0004326C(arg0 + 0x258);
}

void func_00010098(s32 arg0) {
    func_0004326C(arg0 + 0x258);
}

void func_000100B4(s32 arg0) {
    func_000432B8(arg0 + 0x258);
}

s32 func_000100D0(void *arg0) {
    if (func_00016C08(M2C_FIELD(arg0, s32 *, 0xA40), arg0 + 0xC74) != 0) {
        M2C_FIELD(arg0, s32 *, 0xC74) = -1;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001010C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010144);

s32 func_00010230(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != NULL) {
        var_v1 = func_0003EB28(arg0 + 0x44);
        if (var_v1 == 6) {
            var_v1 = 0;
            *arg1 = M2C_FIELD(arg0, s32 *, 0xA7C);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010290);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000103C4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010494);

s32 func_00010504(void) {
    return 0;
}

s32 func_0001050C(void *arg0, s32 *arg1) {
    void **temp_a0;

    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void ***, 0xA4C);
        *arg1 = M2C_FIELD(*temp_a0, s32 (**)(void **), 0xC)(temp_a0);
    }
    return 0;
}

s32 func_0001054C(void) {
    return 0;
}

s32 func_00010554(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001055C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010610);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000106B0);

s32 func_00010724(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001072C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000107E8);

s32 func_000108FC(void) {
    return 0;
}

s32 func_00010904(void) {
    return 0;
}

s32 func_0001090C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010914);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000109D0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010A8C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010BA4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010BE8);

u8 func_00010C3C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xADC);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010C44);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010D00);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010DA8);

void func_00010E24(s32 arg0) {
    func_00042E44(arg0 + 0x258);
}

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_000526F4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00010E40);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000111E4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001131C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000114EC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011588);

s32 func_0001160C(void) {
    return 0;
}

s32 func_00011614(void) {
    return 0;
}

s32 func_0001161C(void) {
    return 0;
}

s32 func_00011624(void) {
    return 0;
}

void func_0001162C(s32 arg0) {
    func_0000C2B8(arg0 - 0x40);
}

void func_00011648(s32 arg0) {
    func_0000C2B8(arg0 - 0x3C);
}

void func_00011664(s32 arg0) {
    func_0000C488(arg0 - 0x40);
}

void func_00011680(s32 arg0) {
    func_0000C488(arg0 - 0x3C);
}

void func_0001169C(s32 arg0) {
    func_0000D0E4(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000116B8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001172C);

void func_000117A0(s32 arg0) {
    func_0000D3A0(arg0 - 0x3C);
}

void func_000117BC(s32 arg0) {
    func_0000D3FC(arg0 - 0x3C);
}

void func_000117D8(s32 arg0) {
    func_0000D458(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000117F4);

void func_00011814(s32 arg0, s32 arg1) {
    func_0000D518(arg0 - 0x3C, arg1);
}

void func_00011830(s32 arg0, s32 arg1) {
    func_0000D57C(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001184C);

void func_0001186C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D644(arg0 - 0x3C, arg1, arg2);
}

void func_00011888(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D6B8(arg0 - 0x3C, arg1, arg2);
}

void func_000118A4(s32 arg0) {
    func_0000D72C(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000118C0);

void func_0001192C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D834(arg0 - 0x3C, arg1, arg2);
}

void func_00011948(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D8A8(arg0 - 0x3C, arg1, arg2);
}

void func_00011964(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D91C(arg0 - 0x3C, arg1, arg2);
}

void func_00011980(s32 arg0, s32 arg1) {
    func_0000D990(arg0 - 0x3C, arg1);
}

void func_0001199C(s32 arg0, s32 arg1) {
    func_0000D9F4(arg0 - 0x3C, arg1);
}

void func_000119B8(s32 arg0, s32 arg1) {
    func_0000DA58(arg0 - 0x3C, arg1);
}

void func_000119D4(s32 arg0, s32 arg1) {
    func_0000DABC(arg0 - 0x3C, arg1);
}

void func_000119F0(s32 arg0) {
    func_0000DB20(arg0 - 0x3C);
}

void func_00011A0C(s32 arg0) {
    func_0000DB7C(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011A28);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011A9C);

void func_00011B10(s32 arg0) {
    func_0000DF94(arg0 - 0x3C);
}

void func_00011B2C(s32 arg0) {
    func_0000EA6C(arg0 - 0x3C);
}

void func_00011B48(s32 arg0) {
    func_0000ED28(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011B64);

void func_00011B84(s32 arg0) {
    func_0000F048(arg0 - 0x3C);
}

void func_00011BA0(s32 arg0) {
    func_0000F238(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011BBC);

void func_00011BDC(s32 arg0) {
    func_0000F440(arg0 - 0x3C);
}

void func_00011BF8(s32 arg0) {
    func_0000F820(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011C14);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011C30);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011C9C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011CB8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011CD4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011CF0);

void func_00011D0C(s32 arg0) {
    func_0000FB00(arg0 - 0x3C);
}

void func_00011D28(s32 arg0) {
    func_0000FC34(arg0 - 0x3C);
}

void func_00011D44(s32 arg0) {
    func_0000FE2C(arg0 - 0x3C);
}

void func_00011D60(s32 arg0) {
    func_0000FF18(arg0 - 0x3C);
}

void func_00011D7C(s32 arg0) {
    func_0000FF34(arg0 - 0x3C);
}

void func_00011D98(s32 arg0) {
    func_0000FF50(arg0 - 0x3C);
}

void func_00011DB4(s32 arg0) {
    func_0000FF70(arg0 - 0x3C);
}

void func_00011DD0(s32 arg0) {
    func_0000FF90(arg0 - 0x3C);
}

void func_00011DEC(s32 arg0) {
    func_0000FFBC(arg0 - 0x3C);
}

void func_00011E08(s32 arg0, s32 arg1) {
    func_0000FFF4(arg0 - 0x3C, arg1);
}

void func_00011E24(s32 arg0) {
    func_00010044(arg0 - 0x3C);
}

void func_00011E40(s32 arg0) {
    func_00010060(arg0 - 0x3C);
}

void func_00011E5C(s32 arg0) {
    func_0001007C(arg0 - 0x3C);
}

void func_00011E78(s32 arg0) {
    func_00010098(arg0 - 0x3C);
}

void func_00011E94(s32 arg0) {
    func_000100B4(arg0 - 0x3C);
}

void func_00011EB0(s32 arg0) {
    func_000100D0(arg0 - 0x3C);
}

void func_00011ECC(s32 arg0) {
    func_0001010C(arg0 - 0x3C);
}

void func_00011EE8(s32 arg0) {
    func_00010144(arg0 - 0x3C);
}

void func_00011F04(s32 arg0, s32 *arg1) {
    func_00010230(arg0 - 0x3C, arg1);
}

void func_00011F20(s32 arg0) {
    func_00010290(arg0 - 0x3C);
}

void func_00011F3C(s32 arg0) {
    func_000103C4(arg0 - 0x3C);
}

void func_00011F58(s32 arg0) {
    func_00010494(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011F74);

void func_00011F90(s32 arg0, s32 *arg1) {
    func_0001050C(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011FAC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00011FC8);

void func_00011FE4(s32 arg0) {
    func_0001055C(arg0 - 0x3C);
}

void func_00012000(s32 arg0) {
    func_00010610(arg0 - 0x3C);
}

void func_0001201C(s32 arg0) {
    func_000106B0(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012038);

void func_00012054(s32 arg0) {
    func_0001072C(arg0 - 0x3C);
}

void func_00012070(s32 arg0) {
    func_000107E8(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001208C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000120A8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000120C8);

void func_000120E4(s32 arg0) {
    func_00010914(arg0 - 0x3C);
}

void func_00012100(s32 arg0) {
    func_000109D0(arg0 - 0x3C);
}

void func_0001211C(s32 arg0) {
    func_00010A8C(arg0 - 0x3C);
}

void func_00012138(s32 arg0) {
    func_00010BA4(arg0 - 0x3C);
}

void func_00012154(s32 arg0) {
    func_00010BE8(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012170);

void func_0001218C(s32 arg0) {
    func_00010C44(arg0 - 0x3C);
}

void func_000121A8(s32 arg0) {
    func_00010D00(arg0 - 0x3C);
}

void func_000121C4(s32 arg0) {
    func_00010DA8(arg0 - 0x3C);
}

void func_000121E0(s32 arg0) {
    func_00010E24(arg0 - 0x3C);
}

void func_000121FC(s32 arg0) {
    func_000111E4(arg0 - 0x40);
}

void func_00012218(M2C_UNK **arg0) {
    *arg0 = &D_00052A30;
}

void func_00012228(M2C_UNK **arg0) {
    *arg0 = &D_00052A30;
    scePaf_4E67BB08((s32) arg0);
}

void func_00012250(void) {
}

s32 func_00012258(void) {
    return 0;
}

s32 func_00012260(void) {
    return 0;
}

s32 func_00012268(void) {
    return 0;
}

s32 func_00012270(void) {
    return 0;
}

s32 func_00012278(void) {
    return 0;
}

s32 func_00012280(void) {
    return 0;
}

s32 func_00012288(void) {
    return 0;
}

s32 func_00012290(void) {
    return 0;
}

s32 func_00012298(void) {
    return 0;
}

s32 func_000122A0(void) {
    return 0;
}

s32 func_000122A8(void) {
    return 0;
}

s32 func_000122B0(void) {
    return 0;
}

s32 func_000122B8(void) {
    return 0;
}

s32 func_000122C0(void) {
    return 0;
}

s32 func_000122C8(void) {
    return 0;
}

s32 func_000122D0(void) {
    return 0;
}

s32 func_000122D8(void) {
    return 0;
}

s32 func_000122E0(void) {
    return 0;
}

s32 func_000122E8(void) {
    return 0;
}

s32 func_000122F0(void) {
    return 0;
}

s32 func_000122F8(void) {
    return 0;
}

s32 func_00012300(void) {
    return 0;
}

s32 func_00012308(void) {
    return 0;
}

s32 func_00012310(void) {
    return 0;
}

s32 func_00012318(void) {
    return 0;
}

s32 func_00012320(void) {
    return 0;
}

s32 func_00012328(void) {
    return 0;
}

s32 func_00012330(void) {
    return 0;
}

s32 func_00012338(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC58);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012340);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001235C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000123A8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000123F4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012424);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012454);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012494);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012650);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012A4C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012AB8);

void func_00012ACC(s32 arg0) {
    func_00012424(arg0 - 0x3C);
}

void func_00012AE8(s32 arg0) {
    func_00012454(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012B04);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012B3C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012B74);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012BBC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012C04);

s32 func_00012C60(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012C68);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012D38);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00012D48);

s32 func_000130D4(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x44);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x70)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013100);

void func_000131B8(s32 arg0) {
    func_00012BBC(arg0 - 0x3C);
}

void func_000131D4(s32 arg0) {
    func_00012C04(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000131F0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013228);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013260);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013290);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000132C0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013300);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000133AC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000133B8);

s32 func_000137A0(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x44);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x70)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000137CC);

void func_00013880(s32 arg0) {
    func_00013290(arg0 - 0x3C);
}

void func_0001389C(s32 arg0) {
    func_000132C0(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000138B8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013990);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013A68);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013A98);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013AC8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013B08);

void func_00013DF0(s32 arg0) {
    func_00013A98(arg0 - 0x3C);
}

void func_00013E0C(s32 arg0) {
    func_00013AC8(arg0 - 0x3C);
}

s32 func_00013E28(void) {
    return D_00057270;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00013E34);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000144C0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00014E8C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000151CC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00015520);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001562C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001576C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00015824);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00015A74);

s32 func_00015C78(s32 arg0) {
    func_00025068(arg0 + 0xCC, 0x10000000);
    return 0;
}

s32 func_00015C9C(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x8C;
    func_000250D0(temp_s1);
    if (M2C_FIELD(arg0, s32 *, 0x78C) != 0) {
        func_00025068(arg0 + 0xCC, 0x20100000);
        func_000250EC(temp_s1);
        func_00024FE0(arg0 + 0xD4, 1, 0x11, -1);
    } else {
        func_000250EC(temp_s1);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00015D18);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00015EA4);

s32 func_00015ED8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s3;

    temp_s3 = arg0 + 0x8C;
    func_000250D0(temp_s3);
    M2C_FIELD(arg0, s32 *, 0x778) = arg1;
    M2C_FIELD(arg0, s32 *, 0x77C) = arg2;
    func_00025068(arg0 + 0xCC, 0x20040000);
    func_000250EC(temp_s3);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00015F44);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00015FC4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00016154);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001623C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000162D0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001645C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00016508);

s32 func_00016590(void) {
    return 0;
}

s32 func_00016598(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000165A0);

s32 func_00016788(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xDC) = arg1;
    return 0;
}

s32 func_00016794(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE0) = arg1;
    return 0;
}

s32 func_000167A0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE4) = arg1;
    return 0;
}

s32 func_000167AC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x794) = arg1;
    func_00025068(arg0 + 0xCC, 0x20010000);
    return 0;
}

s32 func_000167D4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x798) = arg1;
    func_00025068(arg0 + 0xCC, 0x20020000);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000167FC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00016920);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00016AD0);

s32 func_00016BE4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
    return 0;
}

s32 func_00016BF0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD20) = arg1;
    return 0;
}

s32 func_00016BFC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00016C08);

s32 func_00016CB4(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x42C) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x788) < 0) {
            var_v1 = 6;
        } else {
            *arg1 = M2C_FIELD(arg0, s32 *, 0x3E8);
        }
    } else {
        var_v1 = 6;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00016CE4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001717C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00017208);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000172CC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00017368);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00017508);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00017720);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000177CC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00017868);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000178F0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00017988);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00017E84);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00018220);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000186A0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00018800);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00018CBC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001908C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00019458);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00019860);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052730);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052A30);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052B98);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052BC0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052C10);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052C68);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052CC0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D08);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D14);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D20);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D2C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D38);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D44);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D50);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D5C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D64);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00019AC0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00019F8C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001A254);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001A698);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001A878);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001A93C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001AB24);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001AFC0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001B0D4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001B37C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001B4F4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001B634);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001B95C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001BAD0);

void func_0001BBFC(s32 arg0) {
    func_00014E8C(arg0 - 0x7C);
}

void func_0001BC18(s32 arg0) {
    func_00014E8C(arg0 - 0x68);
}

void func_0001BC34(s32 arg0) {
    func_000151CC(arg0 - 0x7C);
}

void func_0001BC50(s32 arg0) {
    func_000151CC(arg0 - 0x68);
}

void func_0001BC6C(s32 arg0) {
    func_0001562C(arg0 - 0x68);
}

void func_0001BC88(s32 arg0) {
    func_0001576C(arg0 - 0x7C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001BCA4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001BCE8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001BD24);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001BDE8);

void func_0001BEB4(void) {
}

s32 func_0001BEBC(void) {
    return 0;
}

s32 func_0001BEC4(void) {
    return 0;
}

s32 func_0001BECC(void) {
    return 0;
}

s32 func_0001BED4(void) {
    return 0;
}

s32 func_0001BEDC(void) {
    return 0;
}

s32 func_0001BEE4(void) {
    return 0;
}

s32 func_0001BEEC(void) {
    return 0;
}

s32 func_0001BEF4(void) {
    return 0;
}

s32 func_0001BEFC(void) {
    return 0;
}

s32 func_0001BF04(void) {
    return 0;
}

s32 func_0001BF0C(void) {
    return 0;
}

s32 func_0001BF14(void) {
    return 0;
}

s32 func_0001BF1C(void) {
    return 0;
}

s32 func_0001BF24(void) {
    return 0;
}

s32 func_0001BF2C(void) {
    return 0;
}

s32 func_0001BF34(void) {
    return 0;
}

s32 func_0001BF3C(void) {
    return 0;
}

s32 func_0001BF44(void) {
    return 0;
}

s32 func_0001BF4C(void) {
    return 0;
}

s32 func_0001BF54(void) {
    return 0;
}

s32 func_0001BF5C(void) {
    return 0;
}

s32 func_0001BF64(void) {
    return 0;
}

s32 func_0001BF6C(void) {
    return 0;
}

s32 func_0001BF74(void) {
    return 0;
}

s32 func_0001BF7C(void) {
    return 0;
}

s32 func_0001BF84(void) {
    return 0;
}

s32 func_0001BF8C(void) {
    return 0;
}

s32 func_0001BF94(void) {
    return 0;
}

s32 func_0001BF9C(void) {
    return 0;
}

s32 func_0001BFA4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001BFAC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C068);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C124);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C1FC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C2D4);

void func_0001C3C0(void) {
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C3C8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C610);

s32 func_0001C690(void *arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = arg0 + 0x18;
    func_000250D0(temp_s2);
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    func_000250EC(temp_s2);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C6E0);

s32 func_0001C7B4(void *arg0, s32 arg1) {
    if (arg1 != M2C_FIELD(arg0, s32 *, 0x78)) {

    } else {
        func_00025068(arg0 + 0x28, 4);
    }
    return 0;
}

s32 func_0001C7F0(void *arg0, s32 arg1) {
    if (arg1 != M2C_FIELD(arg0, s32 *, 0x78)) {

    } else {
        func_00025068(arg0 + 0x28, 2);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C82C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C8D4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C940);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001C978);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001CB7C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001CC04);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001CC88);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001CD0C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001CD40);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001CD74);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001CDF4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D88);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D8C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D90);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D94);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D98);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052D9C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052DA8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052E68);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052EF8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052F00);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052F0C);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052F18);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052F28);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052F34);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052F48);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001CEB4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001CEE8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001CF9C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D0F8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D1A0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D250);

s32 func_0001D2C0(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00021F54(arg1);
    var_v1 = 0;
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D2FC);

void func_0001D358(void *arg0) {
    func_00021DA4(M2C_FIELD(arg0, s32 *, 8));
}

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052F74);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052F84);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052FB4);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052FDC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D374);

void func_0001D3A8(void *arg0) {
    func_0002081C(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D3D8);

s32 func_0001D40C(s32 arg0, s32 arg1) {
    func_00020D60(arg0 + (arg1 * 0x60) + 0x18);
    return 0;
}

s32 func_0001D43C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    return 0;
}

s32 func_0001D448(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 6;
    if (arg1 < 3) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_0001D464(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x11C);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D470);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D4F0);

void func_0001D58C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = func_00020E4C(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D5CC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D61C);

void func_0001D66C(void *arg0) {
    func_00020EE0(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D69C);

void func_0001D738(void *arg0) {
    func_00020EEC(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18);
}

void func_0001D768(void *arg0) {
    func_00020988(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

void func_0001D798(void *arg0) {
    func_00020994(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

void func_0001D7C8(void *arg0) {
    func_00020838(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

void func_0001D7F8(void *arg0) {
    func_00020844(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D828);

void func_0001D8A8(void *arg0) {
    func_000209C0(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

void func_0001D8D8(void *arg0) {
    func_000209D0(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001D908);

void func_0001D9C4(void *arg0) {
    func_000209B0(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

void func_0001D9F4(void *arg0) {
    func_000204A8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

void func_0001DA24(void *arg0) {
    func_0002044C(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001DA54);

void func_0001DB00(void *arg0) {
    func_00020AA4(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001DB30);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001DDE8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001DE38);

void func_0001DE88(void *arg0) {
    func_000218F4(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x30);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001DEB8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001DF5C);

void func_0001E040(void *arg0) {
    func_000219EC(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x38);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001E070);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001E124);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001E248);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001E2EC);

void func_0001E3D0(void *arg0) {
    func_000201A8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x48);
}

void func_0001E400(void **arg0) {
    s32 temp_s1;

    temp_s1 = func_0001F998();
    func_0001E450(arg0, temp_s1, M2C_FIELD(*arg0, s32 (**)(void **), 0x68)(arg0));
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001E450);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001E520);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001E590);

void func_0001E668(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0001E590(arg0, arg1, arg2 + arg3, arg4);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001E688);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001E6B0);

void func_0001E6D8(void *arg0) {
    func_0002025C(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x48);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001E708);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001EA2C);

void func_0001EC1C(void *arg0) {
    func_00020FE8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001EC4C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001ECE8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001EDAC);

void func_0001EE34(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = func_0002007C(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x50, arg1 - 1);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001EE78);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001EEF4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001F028);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001F22C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001F344);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001F490);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001F58C);

void func_0001F698(void *arg0) {
    func_0002001C(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x50);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001F6C8);

void func_0001F770(void *arg0, s32 arg1) {
    func_000200D4(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x50, arg1 - 1);
}

void func_0001F7A4(void *arg0, s32 arg1) {
    func_00020024(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x50, arg1 - 1);
}

void func_0001F7D8(void *arg0) {
    func_000214D0(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x64);
}

void func_0001F808(void *arg0) {
    func_000214D8(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x64);
}

void func_0001F838(void *arg0) {
    func_00021548(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x64);
}

void func_0001F868(void *arg0) {
    func_00021600(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x64);
}

void func_0001F898(void *arg0) {
    func_00021674(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x64);
}

void func_0001F8C8(void *arg0) {
    func_00021748(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x64);
}

s32 func_0001F8F8(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00021420(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x64);
    return temp_v0 + ((u32) ~temp_v0 >> 0x1F);
}

s32 func_0001F934(void *arg0) {
    return func_00020E44(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x18) + 1;
}

void func_0001F968(void *arg0) {
    func_00020BA0(arg0 + (M2C_FIELD(arg0, s32 *, 0xC) * 0x60) + 0x24);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001F998);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FA54);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FA74);

s32 func_0001FAA8(s32 arg0) {
    func_000250D0(arg0 + 0x10);
    return 0;
}

s32 func_0001FAC8(s32 arg0) {
    func_000250EC(arg0 + 0x10);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FAE8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FB38);

void func_0001FB80(M2C_UNK **arg0) {
    *arg0 = &D_00053078;
}

void func_0001FB90(M2C_UNK **arg0) {
    *arg0 = &D_00053078;
    scePaf_4E67BB08((s32) arg0);
}

s32 func_0001FBB8(void) {
    return 0;
}

s32 func_0001FBC0(void) {
    return 1;
}

s32 func_0001FBC8(void) {
    return 0;
}

s32 func_0001FBD0(void) {
    return 1;
}

s32 func_0001FBD8(void) {
    return 1;
}

s32 func_0001FBE0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FBE8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FC0C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FC24);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FC34);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FC44);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FC54);

s32 func_0001FC6C(void) {
    return 1;
}

s32 func_0001FC74(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FC7C);

s32 func_0001FC98(void) {
    return 1;
}

s32 func_0001FCA0(void) {
    return 1;
}

s32 func_0001FCA8(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FCB0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FCD4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FCFC);

s32 func_0001FD24(void) {
    return 1;
}

s32 func_0001FD2C(void) {
    return 1;
}

s32 func_0001FD34(void) {
    return 0;
}

s32 func_0001FD3C(void) {
    return 0;
}

s32 func_0001FD44(void) {
    return 0;
}

s32 func_0001FD4C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FD54);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FDD4);

void func_0001FEAC(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        scePaf_545FE2DA(temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0_2 != 0) {
        scePaf_545FE2DA(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}

s32 func_0001FF04(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0001FF2C();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0001FF2C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0002001C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020024);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0002007C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000200D4);

s32 func_00020148(s32 arg0, s32 arg1) {
    return (arg0 << 8) | arg1;
}

void func_00020154(s32 *arg0) {
    *arg0 = 0;
}

void func_0002015C(s32 *arg0) {
    *arg0 = 0;
}

s32 func_00020164(s32 *arg0) {
    *arg0 = 0;
    return 0;
}

s32 func_00020170(s32 *arg0, s32 arg1) {
    func_00020164(arg0);
    *arg0 = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000201A8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000201C4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0002025C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020324);

s32 func_0002037C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00021874(arg0 + 0xC);
    func_00021964(arg0 + 0x14);
    func_00021A6C(arg0 + 0x1C);
    func_00020164(arg0 + 0x24);
    func_00020164(arg0 + 0x28);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000203D8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020428);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0002044C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000204A8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020644);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000206D0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020750);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_0002081C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020838);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020844);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020850);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020900);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020988);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020994);

s32 func_000209A0(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0x1C), s32 *, 4);
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000209B0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000209C0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000209D0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020AA4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020BA0);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00052FF8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00053078);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020BA8);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00053130);

INCLUDE_RODATA("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", D_00053158);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020BF8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020C48);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020C90);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020CD8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020D1C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020D60);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020DB4);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020E44);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020E4C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020E60);

s32 func_00020EB0(void *arg0, s32 arg1) {
    return (func_00020EE0(arg0) >= arg1) ? 0 : 6;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020EE0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020EEC);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020F44);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020F9C);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020FBC);

s32 func_00020FDC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00020FE8);

s32 func_0002107C(void *arg0, u32 arg1) {
    return (arg1 < (u32) M2C_FIELD(arg0, u32 *, 8)) ? 0 : 6;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00021090);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000210E0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00021128);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000211A8);

void func_00021280(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        scePaf_545FE2DA(temp_v0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0_2 != 0) {
        scePaf_545FE2DA(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}

s32 func_000212D8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = func_00021D9C(arg1);
    func_00021314(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00021314);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00021420);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00021478);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000214D0);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_000214D8);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00021548);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00021600);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00021674);

INCLUDE_ASM("tmp/asm/282/video_main_plugin/nonmatchings/video_main_plugin", func_00021748);

