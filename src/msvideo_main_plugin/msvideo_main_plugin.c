/* lang: c++ */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00000030);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000000B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", module_start);

s32 module_stop(void) {
    func_000AC648();
    return 0;
}

void sceMsVideo_D8E92754(void) {
    func_00044224();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00000184);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000001B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000029C);

void func_000007E0(void) {
    s32 temp_a3;

    temp_a3 = func_0001BE14();
    if (D_000B5FA0 != 0) {
        if (((D_000B60B4 == 2) | (D_000B60B4 == 4)) != 0) {
            if (func_0001DA9C(temp_a3, (s32) &func_00000870) != 1) {

            } else {
                func_0002B68C(1);
            }
        } else {
            func_0001DCF4(temp_a3);
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00000870);

void func_000008C0(void) {
    func_0002B68C(0);
    func_0002C8B8();
    func_0000029C(1);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000008EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00000940);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000009A0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00000A00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00000A60);

void func_00000AB4(void) {
    if (D_000B5FA0 != 0) {
        D_000B60AC = 0;
    }
}

void func_00000AD0(void) {
}

M2C_UNK *func_00000AD8(void) {
    return &D_000B5FEC;
}

void func_00000AE4(s32 arg0) {
    func_00074A58((s32) &D_000B5FEC, arg0);
}

s32 func_00000B08(void) {
    return D_000B6014;
}

void func_00000B14(s32 *arg0) {
    D_000B6014 = *arg0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00000B24);

void func_00000B68(s32 arg0, struct Unk_func_00000B68_1 *arg1, s32 arg2) {
    if ((((u32) arg1->unk8 >> 8) & 0x80) || (D_000B5FA0 == 0)) {

    } else {
        func_0000880C((void *) D_000B5FA0, arg0, arg1, arg2);
    }
}

void func_00000BBC(s32 arg0, struct Unk_func_00000BBC_1 *arg1, s32 arg2) {
    if ((((u32) arg1->unk8 >> 8) & 0x80) || (D_000B5FA0 == 0)) {

    } else {
        func_000087E8((void *) D_000B5FA0, arg0, arg1, arg2);
    }
}

void func_00000C10(s32 arg0, struct Unk_func_00000C10_1 *arg1, s32 arg2) {
    if ((((u32) arg1->unk8 >> 8) & 0x80) || (D_000B5FA0 == 0)) {

    } else {
        func_00008850((void *) D_000B5FA0, arg0, arg1, arg2);
    }
}

void func_00000C64(s32 arg0, s32 arg1, s32 arg2) {
    if (D_000B5FA0 == 0) {

    } else {
        func_00008968((void *) D_000B5FA0, arg0, arg1, arg2);
    }
}

void func_00000CAC(s32 arg0, s32 arg1, s32 arg2) {
    if (D_000B5FA0 == 0) {

    } else {
        func_00008B74((void *) D_000B5FA0, arg0, arg1, arg2);
    }
}

void func_00000CF4(s32 arg0) {
    struct Unk_func_00000CF4_temp_v0 *temp_v0;

    temp_v0 = func_00004E9C();
    if (temp_v0 != NULL) {
        temp_v0->unk14 = arg0;
        temp_v0->unk0->unk1C(temp_v0);
    }
}

void func_00000D34(s32 arg0, struct Unk_func_00000D34_1 *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) arg1->unk8 >> 8) & 0x80) {

    } else {
        temp_v0 = func_00004E9C();
        if (temp_v0 != NULL) {
            func_0000880C(temp_v0, arg0, arg1, arg2);
        }
    }
}

void func_00000DA4(s32 arg0, struct Unk_func_00000DA4_1 *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) arg1->unk8 >> 8) & 0x80) {

    } else {
        temp_v0 = func_00004E9C();
        if (temp_v0 != NULL) {
            func_000087E8(temp_v0, arg0, arg1, arg2);
        }
    }
}

void func_00000E14(s32 arg0, struct Unk_func_00000E14_1 *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) arg1->unk8 >> 8) & 0x80) {

    } else {
        temp_v0 = func_00004E9C();
        if (temp_v0 != NULL) {
            func_00008850(temp_v0, arg0, arg1, arg2);
        }
    }
}

void func_00000E84(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_v0;

    temp_v0 = func_00004E9C();
    if (temp_v0 != NULL) {
        func_00008968(temp_v0, arg0, arg1, arg2);
    }
}

void func_00000EDC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_v0;

    temp_v0 = func_00004E9C();
    if (temp_v0 != NULL) {
        func_00008B74(temp_v0, arg0, arg1, arg2);
    }
}

void func_00000F34(s32 arg0) {
    struct Unk_func_00000F34_temp_v0 *temp_v0;

    temp_v0 = func_00016F50();
    if (temp_v0 != NULL) {
        temp_v0->unk14 = arg0;
        temp_v0->unk0->unk1C(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00000F74);

void func_00000FEC(s32 arg0, struct Unk_func_00000FEC_1 *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) arg1->unk8 >> 8) & 0x80) {

    } else {
        temp_v0 = func_00016F50();
        if (temp_v0 != NULL) {
            func_0001701C(temp_v0, arg0, arg1, arg2);
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000105C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000010BC);

void func_0000111C(s32 arg0) {
    struct Unk_func_0000111C_temp_v0 *temp_v0;

    temp_v0 = func_00017384();
    if (temp_v0 != NULL) {
        temp_v0->unk14 = arg0;
        temp_v0->unk0->unk1C(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000115C);

void func_000011D4(s32 arg0, struct Unk_func_000011D4_1 *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) arg1->unk8 >> 8) & 0x80) {

    } else {
        temp_v0 = func_00017384();
        if (temp_v0 != NULL) {
            func_00017390(temp_v0, arg0, arg1, arg2);
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001244);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000012A4);

void func_00001304(s32 arg0) {
    struct Unk_func_00001304_temp_v0 *temp_v0;

    temp_v0 = func_0001761C();
    if (temp_v0 != NULL) {
        temp_v0->unk14 = arg0;
        temp_v0->unk0->unk1C(temp_v0);
    }
}

void func_00001344(s32 arg0, struct Unk_func_00001344_1 *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) arg1->unk8 >> 8) & 0x80) {

    } else {
        temp_v0 = func_0001761C();
        if (temp_v0 != NULL) {
            func_0001989C(temp_v0, arg0, arg1, arg2);
        }
    }
}

void func_000013B4(s32 arg0) {
    struct Unk_func_000013B4_temp_v0 *temp_v0;

    temp_v0 = func_0001A044();
    if (temp_v0 != NULL) {
        temp_v0->unk14 = arg0;
        temp_v0->unk0->unk1C(temp_v0);
    }
}

void func_000013F4(s32 arg0) {
    struct Unk_func_000013F4_temp_v0 *temp_v0;

    temp_v0 = func_0001B320();
    if (temp_v0 != NULL) {
        temp_v0->unk14 = arg0;
        temp_v0->unk0->unk1C(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001434);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001470);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000014A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000014E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000151C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000161C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001650);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001760);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000017A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001858);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001934);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001978);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001A78);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001AE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001BE8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001C2C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001C54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001D5C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001E38);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001E7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001EC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00001FDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002104);

s32 func_000021E0(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_000B5FD4 != NULL) {
        var_v0 = D_000B5FD4->unk34;
    }
    return var_v0;
}

s32 func_000021FC(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_000B5FD4 != NULL) {
        var_v0 = D_000B5FD4->unk38;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002218);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD54C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD550);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD558_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD558_v350);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD56C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD584);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD590);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5A0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5B0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5BC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5D0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5E4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5F4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD600);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD618);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD630);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD648);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD65C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD668);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD678);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD688);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD698);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6B8);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6C4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6C4_v350);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD558);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD56C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD584);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD590);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5A0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5B0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5BC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5D0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5E4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD5F4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD600);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD618);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD630);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD648);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD65C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD668);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD678);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD688);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD698);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6B8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6C4);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD70C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD790);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD794);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD7A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD7B4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD7C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD7FC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD814);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD824);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC18);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC1C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC2C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC30);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC34);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC50);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC90);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADCDC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADD08);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADD44);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADD74);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADE64);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADE70);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADE7C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADEF8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADF80);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE2DC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE2E4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE330);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE334);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE400);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE410);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE424);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE430);
#else
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ACE50);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE44C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE458);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE478);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE490);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE4A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE4BC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE4D4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE4EC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE504);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE518);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE530);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE540);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE558);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE56C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE584);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE59C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE5B4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE5C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE5E0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE5F8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE618);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE638);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE654);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE674);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE694);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE6AC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE6C4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE6DC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE6FC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE714);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE72C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE740);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE758);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE76C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE77C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE790);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE7A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE7BC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE7D0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE7E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE7F8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE80C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE81C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE830);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE848);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE860);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE878);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE890);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE8A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE8BC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE8D4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE8E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE900);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE918);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE928);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE930);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000225C);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE948);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD3A0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD3BC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002320);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002364);

void func_000023AC(void) {
    func_0000225C();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000023C8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002444);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000248C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000024E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002528);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000257C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000025C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000260C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002660);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000026A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000026FC);

void func_00002744(void) {
    if (D_000B5FC0 != NULL) {
        if (D_000B5FC0->unk10 != 0) {
            func_00025738((s32) D_000B5FC0);
        } else {
            func_00025680((s32) D_000B5FC0);
        }
    }
}

void func_0000278C(void) {
    if (D_000B5FC0 != NULL) {
        if (D_000B5FC0->unk10 != 0) {
            func_000255DC((s32) D_000B5FC0);
        } else {
            func_00025520((s32) D_000B5FC0);
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000027D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002808);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000283C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002918);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002B14);
#else
void func_00002B14(void) {
    s32 temp_v0;

    D_000B5FE4 = 0;
    temp_v0 = _Znwj(0x110);
    sceVshCommonUtil_B9B916C5(temp_v0);
    D_000B5FE4 = temp_v0;
    sceVshCommonUtil_622815DD(temp_v0, &func_00002C30);
}
#endif

#if FW_VERSION == 300 || (FW_VERSION >= 350 && FW_VERSION < 352)
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002B68);
#endif

#if FW_VERSION == 352
void func_00002B68(void) {
    s32 temp_s0;

    temp_s0 = D_000B5FE4;
    if (temp_s0 != 0) {
        sceVshCommonUtil_1EBD43EA(temp_s0);
        _ZdlPv(temp_s0);
        D_000B5FE4 = 0;
    }
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_00002B68(void) {
    s32 temp_s0;

    temp_s0 = D_000B6824;
    if (temp_s0 != 0) {
        sceVshCommonUtil_1EBD43EA(temp_s0);
        _ZdlPv(temp_s0);
        D_000B6824 = 0;
    }
}
#endif

#if FW_VERSION == 300 || (FW_VERSION >= 350 && FW_VERSION < 352)
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002BB4);
#endif

#if FW_VERSION == 352
void func_00002BB4(s32 arg0) {
    sceVshCommonUtil_8584376D(D_000B5FE4, arg0);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_00002BB4(s32 arg0) {
    sceVshCommonUtil_8584376D(D_000B6824, arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002BD8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002C04);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002C30);

void func_00002C7C(void) {
    if (D_000B5FA0 == 0) {

    } else {
        D_000B60A8 = 5;
        func_0000E238(D_000B5FA0);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002CB8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002D1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002DFC);

void func_00002E80(void) {
    func_00002D1C();
}

#if FW_VERSION == 300 || (FW_VERSION >= 350 && FW_VERSION < 352)
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002E9C);
#else
void func_00002E9C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = _Znwj(8);
    func_0002CB90(temp_v0);
    D_000B5FE8 = temp_v0;
    if (temp_v0 == 0) {

    } else {
        func_0002CBB4((s32 *) temp_v0, arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002EFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002F7C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00002FB0);

void func_00002FE4(void) {
    if (D_000B5FE8 == 0) {

    } else {
        func_0002CCAC((void *) D_000B5FE8);
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003018);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000308C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000030C0);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003094);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003144);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000314C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003390);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003C3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003CDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003D00);

void func_00003DC8(void) {
    func_00003D00(1, 0xFFFF);
}

void func_00003DE8(void) {
    func_00003D00(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003E08);

void func_00003E38(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00003E58();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003E58);

void func_00003E78(void) {
    func_0007484C();
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003E94);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003F80);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00003FF8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000041F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", _ZN14Class_000AE948D2Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", _ZN14Class_000AE948D1Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", _ZN14Class_000AE948D0Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004600);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000046D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004794);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000048AC);

void func_000048EC(struct Unk_func_000048EC_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000048FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004970);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004A5C);

#if FW_VERSION == 300 || (FW_VERSION >= 350 && FW_VERSION < 352)
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004B1C);
#else
s32 func_00004B1C(Class_000AE948 *arg0) {
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
    return 0;
}
#endif

void func_00004B68(void) {
}

s32 func_00004B70(void) {
    return 1;
}

#if FW_VERSION == 300 || (FW_VERSION >= 350 && FW_VERSION < 352)
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004B78);
#else
void func_00004B78(Class_000AE948 *arg0) {
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
#endif

void func_00004BB8(void) {
}

#if FW_VERSION == 300 || (FW_VERSION >= 350 && FW_VERSION < 352)
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004BC0);
#else
void func_00004BC0(Class_000AE948 *arg0) {
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
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004C00);

void func_00004C38(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004C40);

void func_00004C74(void) {
}

void func_00004C7C(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004C84);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004D20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", _ZN14Class_000AF080D2Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", _ZN14Class_000AF080D1Ev);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", _ZN14Class_000AF080D0Ev);

s32 func_00004E78(struct Unk_func_00004E78_0 *arg0) {
    return arg0->unk2C;
}

void func_00004E80(struct Unk_func_00004E80_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk30 = (s32) ((arg0->unk30 & ~arg2) | (arg1 & arg2));
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004E9C);

s32 func_00004EA8(void) {
    return D_000B6024;
}

#if FW_VERSION >= 310 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004F9C);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00004EB4);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD410);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD42C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD444);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000050E8);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005158);

s32 func_000051C4(struct Unk_func_000051C4_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk3C;
    if (temp_v0 != 0) {
        var_v1 = func_0000EA58(temp_v0);
    }
    return var_v1;
}
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000052AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005354);
#endif

s32 func_000051FC(struct Unk_func_000051FC_0 *arg0) {
    arg0->unk50 = 0;
    arg0->unk64 = 0;
    arg0->unk65 = 0;
    return 0;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005210);
#else
s32 func_00005210(struct Unk_func_00005210_0 *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 6;
    if (arg0 != NULL) {
        arg0->unk0->unk70();
        temp_v0 = func_00005274(arg0, arg1);
        var_v1 = temp_v0;
        if (temp_v0 == 0) {
            arg0->unk64 = 1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000544C);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005274);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE948);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000052B4);

#if FW_VERSION >= 301 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005340);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000053E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005520);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000553C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000055BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000560C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005884);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000058F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005A28);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005CFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005E28);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005F2C);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD478);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD490);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD4A4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD4B4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD4D4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD4F0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD530);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD558);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD570);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000B02AC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE934);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD58C);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD690);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6A8);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9EC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9F0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9F4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9F8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9FC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA00);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA04);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA08);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA0C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA10);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA14);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA18);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA1C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA20);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA24);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA28);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA2C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA30);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA34);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA38);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA3C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA40);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA44);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA48);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA4C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA50);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA54);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA58);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA5C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA60);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005F8C);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6C4);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00006028);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00006248);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6E0);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD6F4);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000067F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000068EC);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD708);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD728);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD768);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD7A4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD7C4);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD7E0);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD7F8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD818);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD834);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD854);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD864);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD87C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD894);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD8B4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD8E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD924);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD930);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD940);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD968);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD98C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD998);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD9B0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AD9CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADA00);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADA30);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADA70);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADA9C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADABC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADAE4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADB10);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADB48);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADB74);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADB9C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADBBC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADBE0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC0C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC38);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC5C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC74);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADC8C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000B09C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000B09F0);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADCA8);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADCC4);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADCEC);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000B0A50);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADD14);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000B0A8C);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000B0AA4_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000B0AA4_v330);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000B0AC0);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADD34);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADD5C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADD78);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADD90);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADDAC);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADDC8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADDE0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADE08);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADE24);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADE3C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADE50);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADE6C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADE8C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADEA8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADEC8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADEE8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADF00);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADF24);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADF3C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADF5C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADF74);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADF98);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADFC4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADFE0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000ADFF8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE02C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE060);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE070);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE094);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE0CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE0F0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE118);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE12C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE150);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE16C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE188);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE1B8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE1C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE1DC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE208);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE224);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE244);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE274);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE28C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE2AC);
#endif

#if FW_VERSION == 300 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005340);
#endif

#if FW_VERSION < 350 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000053E0);

s32 func_00005520(struct Unk_func_00005520_0 *arg0) {
    arg0->unk40 = 0;
    arg0->unk44 = -1;
    arg0->unk64 = 0;
    arg0->unk48 = -1;
    return 1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000553C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000055BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000560C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005884);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000058F8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005A28);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005CFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005E28);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005F2C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9BC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9C0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9C4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9D0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9D4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9D8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9DC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9E0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9E4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9EC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9F0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9F4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9F8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AE9FC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA00);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA04);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA08);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA0C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA10);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA14);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA18);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA1C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA20);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA24);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA28);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA2C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA30);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA34);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA38);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA3C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA40);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA44);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA48);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA4C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA50);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA54);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA58);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA5C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEA60);
#endif

#if FW_VERSION < 350 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00005F8C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEB80);
#endif

#if FW_VERSION < 350 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00006028);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00006248);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEBB0);
#endif

#if FW_VERSION < 350 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000067F0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000068EC);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEBE0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000069E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00006B18);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00006D40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00006E78);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEC40);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEC4C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEC5C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEC84);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AECA8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007044);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007110);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000071FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000072DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007300);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007324);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000073C0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007460);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007588);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000076B0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007784);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007864);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007A1C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007B54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007BC4);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00007E68);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008904);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000080D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008294);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008440);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000084DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000085FC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008680);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008730);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000087E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000880C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008850);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008968);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008B74);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008C0C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008CE4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00008D54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009320);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009B4C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009B0C_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009B0C_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009B0C_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009B0C_v300);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009B9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A244);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000093A4);

#if FW_VERSION >= 350
s32 func_00009420(struct Unk_func_00009420_0 *arg0) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0->unk50;
    if (temp_v0 == 0) {

    } else {
        Job_Cancel(0, temp_v0);
    }
    if (D_000B6028 != NULL) {
        func_00016AA8(D_000B6028);
    }
    temp_v0_2 = func_0002AFEC();
    if (temp_v0_2 != NULL) {
        func_0002B1D8((s32) temp_v0_2);
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A3BC);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A484);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009490);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009528);
#else
void func_00009528(struct Unk_func_00009528_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk14;
    if (temp_v0 == 0) {

    } else {
        _ZN3paf9PhHandler11KillTimerCBEi(temp_v0, 0x03000014);
    }
    if (arg0->unk54 != NULL) {
        arg0->unk54(arg0->unk58);
        arg0->unk54 = NULL;
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009588);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A6BC);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009608);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000966C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
void func_0000966C(struct Unk_func_0000966C_0 *arg0) {
    s32 (*temp_v0_2)(s32);
    s32 temp_v0;

    temp_v0 = arg0->unk14;
    if (temp_v0 == 0) {

    } else {
        _ZN3paf9PhHandler11KillTimerCBEi(temp_v0, 0x03000015);
        temp_v0_2 = arg0->unk5C;
        if (temp_v0_2 != NULL) {
            temp_v0_2(arg0->unk60);
            arg0->unk5C = NULL;
        }
    }
}
#endif

#if FW_VERSION == 352
void func_0000966C(struct Unk_func_0000966C_0 *arg0) {
    M2C_UNK (*temp_v0_2)(s32);
    s32 temp_v0;

    temp_v0 = arg0->unk14;
    if (temp_v0 == 0) {

    } else {
        _ZN3paf9PhHandler11KillTimerCBEi(temp_v0, 0x03000015);
        temp_v0_2 = arg0->unk5C;
        if (temp_v0_2 != NULL) {
            temp_v0_2(arg0->unk60);
            arg0->unk5C = NULL;
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_000096C4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009870);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000990C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009A48);

void func_00009A54(void) {
    D_000B60C8 = 0;
}

s32 func_00009A60(void) {
    return D_000B60C8;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009A6C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009A78);

void func_00009AE0(s32 arg0) {
    func_00009A6C();
    func_00009A78(arg0);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009B0C);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000AF94);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000B1EC);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEC40);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEC4C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEC5C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEC84);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AECA8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009B0C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_00009DDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A000);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A064);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A214);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A238);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A2AC);

void func_0000A4C0(void) {
    func_00002C04(4, 0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A4E0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A5B0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A804);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A858);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000BBAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000BC60);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A8AC);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEFB8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A97C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000A9C8);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000BE5C);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000BF70);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000AA68);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000AB00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000AB80);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin", D_000AEFB8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000AC14);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000ACF8);
#else
void func_0000ACF8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_0001BE14();
    if ((((arg0 == 0) | (temp_v0 == 0)) == 0) && (D_000B602C == 0)) {
        if (D_000B6024 != 0) {
            func_00002F7C();
        }
        if (func_000021E0() == 0) {
            func_0001DCF4(temp_v0);
        } else {
            func_00020034(temp_v0);
            func_0001DC94(temp_v0);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000AD9C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000AE64);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000C4C0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000AF64);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000B074);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000B0D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000B120);

void func_0000B16C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000B2C8(arg0, arg1, arg2, arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000B188);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000B1D8);

void func_0000B248(s32 arg0, s32 arg1) {
    func_00007BC4(arg0, arg1, 1, 0, 2);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000B26C);
#else
void func_0000B26C(struct Unk_func_0000B26C_0 *arg0, s32 arg1, s32 arg2) {
    func_0000B2C8((s32) arg0, arg1, _ZNK3paf4View9GetStringEPKc(arg0->unk4, (M2C_UNK*) ("msg_error_data_updated")), arg2);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000B2C8);

#if FW_VERSION >= 350
void func_0000B36C(struct Unk_func_0000B36C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk14;
    if (temp_v0 == 0) {

    } else {
        _ZN3paf8PhWidget10SetTimeoutEifPFvPS0_PNS_7PhTimerEiPvES4_(temp_v0);
    }
}

void func_0000B39C(struct Unk_func_0000B39C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk14;
    if (temp_v0 == 0) {

    } else {
        _ZN3paf8PhWidget11SetIntervalEifPFvPS0_PNS_7PhTimerEiPvES4_(temp_v0);
    }
}

void func_0000B3CC(struct Unk_func_0000B3CC_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk14;
    if (temp_v0 == 0) {

    } else {
        _ZN3paf9PhHandler11KillTimerCBEi(temp_v0, arg1);
    }
}
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000CB04);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000CB58);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000CBAC);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000B3FC);

void func_0000BEC0(void) {
    func_0000B3FC(1, 0xFFFF);
}

void func_0000BEE0(void) {
    func_0000B3FC(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000BF00);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000BF30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin", func_0000BFFC);
