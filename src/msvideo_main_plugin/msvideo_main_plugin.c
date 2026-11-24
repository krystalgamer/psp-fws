#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000000);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000030);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000000B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", module_start);

s32 module_stop(void) {
    func_000AC648();
    return 0;
}

void sceMsVideo_D8E92754(void) {
    func_00044224();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000184);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000001B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000029C);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000870);

void func_000008C0(void) {
    func_0002B68C(0);
    func_0002C8B8();
    func_0000029C(1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000008EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000940);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000009A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000A00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000A60);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000B24);

void func_00000B68(s32 arg0, void *arg1, s32 arg2) {
    if ((((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) || (D_000B5FA0 == 0)) {

    } else {
        func_0000880C((void *) D_000B5FA0, arg0, arg1, arg2);
    }
}

void func_00000BBC(s32 arg0, void *arg1, s32 arg2) {
    if ((((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) || (D_000B5FA0 == 0)) {

    } else {
        func_000087E8((void *) D_000B5FA0, arg0, arg1, arg2);
    }
}

void func_00000C10(s32 arg0, void *arg1, s32 arg2) {
    if ((((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) || (D_000B5FA0 == 0)) {

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
    void *temp_v0;

    temp_v0 = func_00004E9C();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x14) = arg0;
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), M2C_UNK (**)(void *), 0x1C)(temp_v0);
    }
}

void func_00000D34(s32 arg0, void *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

    } else {
        temp_v0 = func_00004E9C();
        if (temp_v0 != NULL) {
            func_0000880C(temp_v0, arg0, arg1, arg2);
        }
    }
}

void func_00000DA4(s32 arg0, void *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

    } else {
        temp_v0 = func_00004E9C();
        if (temp_v0 != NULL) {
            func_000087E8(temp_v0, arg0, arg1, arg2);
        }
    }
}

void func_00000E14(s32 arg0, void *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

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
    void *temp_v0;

    temp_v0 = func_00016F50();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x14) = arg0;
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), M2C_UNK (**)(void *), 0x1C)(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000F74);

void func_00000FEC(s32 arg0, void *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

    } else {
        temp_v0 = func_00016F50();
        if (temp_v0 != NULL) {
            func_0001701C(temp_v0, arg0, arg1, arg2);
        }
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000105C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000010BC);

void func_0000111C(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00017384();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x14) = arg0;
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), M2C_UNK (**)(void *), 0x1C)(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000115C);

void func_000011D4(s32 arg0, void *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

    } else {
        temp_v0 = func_00017384();
        if (temp_v0 != NULL) {
            func_00017390(temp_v0, arg0, arg1, arg2);
        }
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001244);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000012A4);

void func_00001304(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_0001761C();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x14) = arg0;
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), M2C_UNK (**)(void *), 0x1C)(temp_v0);
    }
}

void func_00001344(s32 arg0, void *arg1, M2C_UNK arg2) {
    void *temp_v0;

    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

    } else {
        temp_v0 = func_0001761C();
        if (temp_v0 != NULL) {
            func_0001989C(temp_v0, arg0, arg1, arg2);
        }
    }
}

void func_000013B4(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_0001A044();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x14) = arg0;
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), M2C_UNK (**)(void *), 0x1C)(temp_v0);
    }
}

void func_000013F4(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_0001B320();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x14) = arg0;
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), M2C_UNK (**)(void *), 0x1C)(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001434);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001470);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000014A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000014E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000151C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000161C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001650);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001760);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000017A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001858);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001934);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001978);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001A78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001AE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001BE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001C2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001C54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001D5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001E38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001E7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001EC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00001FDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002104);

s32 func_000021E0(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_000B5FD4 != NULL) {
        var_v0 = M2C_FIELD(D_000B5FD4, s32 *, 0x34);
    }
    return var_v0;
}

s32 func_000021FC(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_000B5FD4 != NULL) {
        var_v0 = M2C_FIELD(D_000B5FD4, s32 *, 0x38);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002218);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD54C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD550);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD558);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD56C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD584);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD590);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD5A0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD5B0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD5BC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD5D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD5E4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD5F4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD600);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD618);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD630);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD648);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD65C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD668);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD678);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD688);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD698);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD6B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD6C4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD6CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD70C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD790);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD794);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD7A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD7B4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD7C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD7FC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD814);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AD824);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADC18);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADC1C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADC2C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADC30);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADC34);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADC50);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADC90);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADCDC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADD08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADD44);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADD74);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADE64);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADE70);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADE7C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADEF8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000ADF80);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE2DC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE2E4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE330);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE334);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE400);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE410);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE424);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE430);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE44C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE458);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE478);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE490);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE4A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE4BC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE4D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE4EC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE504);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE518);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE530);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE540);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE558);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE56C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE584);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE59C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE5B4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE5C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE5E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE5F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE618);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE638);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE654);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE674);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE694);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE6AC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE6C4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE6DC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE6FC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE714);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE72C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE740);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE758);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE76C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE77C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE790);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE7A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE7BC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE7D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE7E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE7F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE80C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE81C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE830);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE848);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE860);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE878);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE890);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE8A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE8BC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE8D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE8E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE900);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE918);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE928);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE930);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000225C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002320);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002364);

void func_000023AC(void) {
    func_0000225C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000023C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002444);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000248C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000024E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002528);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000257C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000025C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000260C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002660);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000026A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000026FC);

void func_00002744(void) {
    if (D_000B5FC0 != NULL) {
        if (M2C_FIELD(D_000B5FC0, u8 *, 0x10) != 0) {
            func_00025738((s32) D_000B5FC0);
        } else {
            func_00025680((s32) D_000B5FC0);
        }
    }
}

void func_0000278C(void) {
    if (D_000B5FC0 != NULL) {
        if (M2C_FIELD(D_000B5FC0, u8 *, 0x10) != 0) {
            func_000255DC((s32) D_000B5FC0);
        } else {
            func_00025520((s32) D_000B5FC0);
        }
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000027D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002808);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000283C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002918);

void func_00002B14(void) {
    s32 temp_v0;

    D_000B5FE4 = 0;
    temp_v0 = scePaf_61A8E8EC(0x110);
    sceVshCommonUtil_E85C45FF(temp_v0);
    D_000B5FE4 = temp_v0;
    sceVshCommonUtil_951BC384(temp_v0, &func_00002C30);
}

void func_00002B68(void) {
    s32 temp_s0;

    temp_s0 = D_000B5FE4;
    if (temp_s0 != 0) {
        sceVshCommonUtil_F25CBB92(temp_s0);
        scePaf_6261C0A5(temp_s0);
        D_000B5FE4 = 0;
    }
}

void func_00002BB4(s32 arg0) {
    sceVshCommonUtil_21EF453A(D_000B5FE4, arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002BD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002C04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002C30);

void func_00002C7C(void) {
    if (D_000B5FA0 == 0) {

    } else {
        D_000B60A8 = 5;
        func_0000E238(D_000B5FA0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002CB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002D1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002DFC);

void func_00002E80(void) {
    func_00002D1C();
}

void func_00002E9C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_61A8E8EC(8);
    func_0002CB90(temp_v0);
    D_000B5FE8 = temp_v0;
    if (temp_v0 == 0) {

    } else {
        func_0002CBB4((s32 *) temp_v0, arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002EFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002F7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002FB0);

void func_00002FE4(void) {
    if (D_000B5FE8 == 0) {

    } else {
        func_0002CCAC((void *) D_000B5FE8);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00003018);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000308C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000030C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000314C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00003390);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00003C3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00003CDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00003D00);

void func_00003DC8(void) {
    func_00003D00(1, 0xFFFF);
}

void func_00003DE8(void) {
    func_00003D00(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00003E08);

void func_00003E38(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00003E58();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00003E58);

void func_00003E78(void) {
    func_0007484C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00003E94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00003F80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00003FF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000041F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004374);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004448);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000451C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004600);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000046D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004794);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000048AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000048EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000048FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004970);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004A5C);

s32 func_00004B1C(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v1 != 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_v0 == 0) {

        } else {
            scePaf_F86BD417(temp_v1, temp_v0, 0, 0);
        }
    }
    return 0;
}

void func_00004B68(void) {
}

s32 func_00004B70(void) {
    return 1;
}

void func_00004B78(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v1 != 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_v0 == 0) {

        } else {
            scePaf_581F3612(temp_v1, temp_v0);
        }
    }
}

void func_00004BB8(void) {
}

void func_00004BC0(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v1 != 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_v0 == 0) {

        } else {
            scePaf_C5DBD12F(temp_v1, temp_v0);
        }
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004C00);

void func_00004C38(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004C40);

void func_00004C74(void) {
}

void func_00004C7C(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004C84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004D20);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004DBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004DF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004E34);

s32 func_00004E78(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

void func_00004E80(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) ((M2C_FIELD(arg0, s32 *, 0x30) & ~arg2) | (arg1 & arg2));
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004E9C);

s32 func_00004EA8(void) {
    return D_000B6024;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004EB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000050E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00005158);

s32 func_000051C4(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_v0 != 0) {
        var_v1 = func_0000EA58(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000051FC);

s32 func_00005210(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 6;
    if (arg0 != NULL) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x70)();
        temp_v0 = func_00005274(arg0, arg1);
        var_v1 = temp_v0;
        if (temp_v0 == 0) {
            M2C_FIELD(arg0, s8 *, 0x64) = 1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00005274);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE948);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000052B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00005340);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000053E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00005520);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000553C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000055BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000560C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00005884);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000058F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00005A28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00005CFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00005E28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00005F2C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9BC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9C4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9D8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9DC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9E4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9EC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9F0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9F4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AE9FC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA00);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA04);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA0C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA10);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA14);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA18);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA1C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA20);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA24);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA28);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA2C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA30);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA34);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA38);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA3C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA40);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA44);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA48);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA4C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA50);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA54);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA58);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA5C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEA60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00005F8C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEB80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00006028);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00006248);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEBB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000067F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000068EC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEBE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000069E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00006B18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00006D40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00006E78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007044);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007110);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000071FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000072DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007300);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007324);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000073C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007460);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007588);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000076B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007784);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007864);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007A1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007B54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007BC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00007E68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000080D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00008294);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00008440);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000084DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000085FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00008680);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00008730);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000087E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000880C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00008850);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00008968);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00008B74);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00008C0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00008CE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00008D54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009320);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000093A4);

s32 func_00009420(void *arg0) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v0 == 0) {

    } else {
        scePaf_47B886E3(0, temp_v0);
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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009490);

void func_00009528(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        scePaf_6A82A8C6(temp_v0, 0x03000014);
    }
    if (M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x54) != NULL) {
        M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x54)(M2C_FIELD(arg0, s32 *, 0x58));
        M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x54) = NULL;
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009588);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009608);

void func_0000966C(void *arg0) {
    M2C_UNK (*temp_v0_2)(s32);
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        scePaf_6A82A8C6(temp_v0, 0x03000015);
        temp_v0_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x5C);
        if (temp_v0_2 != NULL) {
            temp_v0_2(M2C_FIELD(arg0, s32 *, 0x60));
            M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x5C) = NULL;
        }
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000096C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009870);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000990C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009A48);

void func_00009A54(void) {
    D_000B60C8 = 0;
}

s32 func_00009A60(void) {
    return D_000B60C8;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009A6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009A78);

void func_00009AE0(s32 arg0) {
    func_00009A6C();
    func_00009A78(arg0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEC40);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEC4C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEC5C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEC84);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AECA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009B0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009DDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A000);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A064);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A214);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A238);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A2AC);

void func_0000A4C0(void) {
    func_00002C04(4, 0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A4E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A5B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A804);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A858);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A8AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A97C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000A9C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000AA68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000AB00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000AB80);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AEFB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000AC14);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000AD9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000AE64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000AF64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B074);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B0D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B120);

void func_0000B16C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000B2C8(arg0, arg1, arg2, arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B188);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B1D8);

void func_0000B248(s32 arg0, s32 arg1) {
    func_00007BC4(arg0, arg1, 1, 0, 2);
}

void func_0000B26C(void *arg0, s32 arg1, s32 arg2) {
    func_0000B2C8((s32) arg0, arg1, scePaf_2CD3AB9E(M2C_FIELD(arg0, s32 *, 4), "msg_error_data_updated"), arg2);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B2C8);

void func_0000B36C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        scePaf_ECB65734(temp_v0);
    }
}

void func_0000B39C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        scePaf_CBDDC9A1(temp_v0);
    }
}

void func_0000B3CC(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        scePaf_6A82A8C6(temp_v0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B3FC);

void func_0000BEC0(void) {
    func_0000B3FC(1, 0xFFFF);
}

void func_0000BEE0(void) {
    func_0000B3FC(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000BF00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000BF30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000BFFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C098);

void func_0000C0E8(void) {
    func_0000C368();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C104);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C1D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C220);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C2B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C368);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C394);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C5A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C650);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C72C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C864);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C8B8);

s32 func_0000C90C(void) {
    return 0;
}

void func_0000C914(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C91C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C960);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000C9A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000CB28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000CCAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000CE38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000CE9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000CEA8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF070);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF074);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF080);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF100);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000CF28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000CF68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000DAA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000DE38);

void func_0000DEE4(void **arg0, s32 arg1) {
    func_0000C220((s32) &D_000B60D4, arg1);
    D_000B60A8 = 1;
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, M2C_UNK *), 0x34)(arg0, &func_0000E054);
}

void func_0000DF34(void **arg0, s32 arg1) {
    func_0000C220((s32) &D_000B60D4, arg1);
    D_000B60A8 = 3;
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, M2C_UNK *), 0x34)(arg0, &func_0000E054);
}

void func_0000DF84(void **arg0, s32 arg1) {
    func_0000C220((s32) &D_000B60D4, arg1);
    D_000B60A8 = 4;
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, M2C_UNK *), 0x34)(arg0, &func_0000E054);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000DFD4);

s32 func_0000E028(void *arg0) {
    s32 var_a1;

    var_a1 = 1;
    if (D_000B6020 != 0) {
        if (D_000B6020 == M2C_FIELD(arg0, s32 *, 0x34)) {
            var_a1 = 0;
        }
    } else {
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E054);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E238);

void func_0000E2B0(void) {
    func_0002B68C(1);
    func_0000E2D4(0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E2D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E354);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E394);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E454);

void func_0000E4E0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_v0 == 0) {

    } else {
        func_00020340(temp_v0);
    }
}

void func_0000E510(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_v0 == 0) {

    } else {
        func_00020464(temp_v0);
    }
}

void func_0000E540(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_v0 == 0) {

    } else {
        func_000205F8(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E570);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E58C);

void func_0000E5F4(void) {
    func_0000E58C(1, 0xFFFF);
}

void func_0000E614(void) {
    func_0000E58C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E634);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E6AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E6F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E734);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E770);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E7AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E7FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E8AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E930);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E9E0);

s32 func_0000EA50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000EA58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000EAF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000EB7C);

s32 func_0000ECC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000ECCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000ECDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000ED1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000ED70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000EDF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000EEEC);

s32 func_0000EFB8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000EFC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000F1C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000F44C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000F4C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000F54C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000F770);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000F82C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FA60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FA70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FAB0);

void func_0000FB2C(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000FB70((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FB70);

void func_0000FC38(M2C_UNK **arg0) {
    *arg0 = &D_000AF3E8;
}

void func_0000FC48(M2C_UNK **arg0) {
    *arg0 = &D_000AF3E8;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FC70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FCA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FCD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FDA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FE68);

s32 func_0000FF38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_0000FF40(void) {
    return D_000B60E0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FF4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FF7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010040);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010110);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000101F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010204);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010244);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010298);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001030C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000103F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010508);

void func_00010558(M2C_UNK **arg0) {
    *arg0 = &D_000AF5E8;
    func_0000FCD8((s32) arg0);
}

void func_00010580(M2C_UNK **arg0) {
    *arg0 = &D_000AF5E8;
    func_0000FCD8((s32) arg0);
}

void func_000105A8(M2C_UNK **arg0) {
    *arg0 = &D_000AF5E8;
    func_0000FCD8((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF330);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF3B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF3D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF3E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF3F0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF408);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF418);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF424);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF430);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF43C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF440);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF44C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF458);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF464);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF470);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF474);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF480);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF48C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF498);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF49C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF4A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF4B4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF4C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF4C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000105E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010798);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010A14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010A64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010AE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010CC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010D08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010EC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010ED8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010F18);

void func_00010F94(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00010FD8((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010FD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00011134);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000111C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00011980);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001199C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00011A5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00011AE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00011B00);

void *func_00011E34(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x30) == 0) ? NULL : (arg0 + 0x54);
}

void func_00011E44(void) {
    func_00012034();
}

void func_00011E60(void) {
    func_0001208C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00011E7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00011EC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00011F40);

s32 *func_00011FFC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_000122BC(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00012034);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001208C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000120B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000122BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000123C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000124FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00012550);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000126E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00012824);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00012C10);

void func_00012D2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00015D84(arg0, 2, (arg3 << 0x10) + (arg4 & 0xFFFF));
    func_00012C10(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00012D8C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF5E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF5F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF604);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF60C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF61C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF620);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF628);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF630);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF638);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF640);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF648);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF6A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00012F0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00012FF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013688);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013868);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013A90);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF744);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF758);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF768);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013B48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013BB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013C3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013D7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013DF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013E70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013EDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013F5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00013FD4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014040);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014390);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014480);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014678);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014734);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014794);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014928);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000149DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014AA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014B84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014EB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014F14);

void func_00014FD8(void *arg0) {
    if (D_000B602C != 1) {
        M2C_FIELD(arg0, s8 *, 0xB4) = 1;
        func_00013C3C((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015008);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001505C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000152B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015414);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015608);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015658);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015714);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000157A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015860);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001590C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000159C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015A48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015A78);

void func_00015AB0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0xC4) = arg1;
    }
}

s32 func_00015AC0(s32 arg0) {
    if (D_000B602C != 0) {

    } else {
        func_00012FF8(arg0);
        func_000001B8(0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015B00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015B3C);

s32 func_00015CE8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

void func_00015CF0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 func_00015CF8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_00015D00(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_00015D08(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x14) & arg1;
}

void func_00015D14(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & ~arg2) | (arg1 & arg2));
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015D30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015D84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016148);

s32 func_000161A8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

s32 func_000161B0(s32 arg0) {
    return arg0 + 0x74;
}

void *func_000161B8(void *arg0) {
    void *var_v1;

    var_v1 = NULL;
    if ((M2C_FIELD(arg0, s32 *, 0x8C) != 0) || (M2C_FIELD(arg0, s32 *, 0x90) != 0)) {
        var_v1 = arg0 + 0x88;
    }
    return var_v1;
}

s32 func_000161DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xA8);
}

s32 func_000161E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void func_000161EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

s32 func_000161F4(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x18) & 0x10) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x30);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016210);

s32 func_00016234(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001623C);

void func_00016398(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xC8) = 1;
}

u8 func_000163A4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xC8);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000163AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016428);

void func_00016474(M2C_UNK **arg0) {
    *arg0 = &D_000AF7B0;
    func_00016C58((s32) arg0);
}

void func_0001649C(M2C_UNK **arg0) {
    *arg0 = &D_000AF7B0;
    func_00016C58((s32) arg0);
}

void func_000164C4(M2C_UNK **arg0) {
    *arg0 = &D_000AF7B0;
    func_00016C58((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000164FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000165F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016638);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000166B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016890);

s32 func_000169D0(void) {
    s32 temp_v0_2;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_000165F0();
    var_v1 = 4;
    if (temp_v0 != NULL) {
        temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x10);
        if (temp_v0_2 != 0) {
            scePaf_47B886E3(0, temp_v0_2);
            var_v1 = 0;
        }
    }
    return var_v1;
}

s32 func_00016A18(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_s1;
    s32 var_s3;
    void *temp_v0;
    void *var_s0;

    var_s3 = 0;
    var_s1 = 0x1F;
    var_s0 = arg0;
    do {
        temp_a1 = M2C_FIELD(var_s0, s32 *, 0x18);
        var_s1 -= 1;
        if ((temp_a1 != 0) && (M2C_FIELD(var_s0, void **, 8) == arg1)) {
            var_s3 += 1;
            scePaf_47B886E3(0, temp_a1);
            temp_v0 = M2C_FIELD(var_s0, void **, 8);
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, s8 *, 0x65) = 1;
            }
        }
        var_s0 += 0x14;
    } while (var_s1 >= 0);
    return var_s3;
}

s32 func_00016AA8(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    void *temp_v0_2;
    void *var_s0;

    var_s2 = 0;
    var_s1 = 0x1F;
    var_s0 = arg0;
    do {
        temp_v0 = M2C_FIELD(var_s0, s32 *, 0x18);
        var_s1 -= 1;
        if (temp_v0 != 0) {
            var_s2 += 1;
            scePaf_47B886E3(0, temp_v0);
            temp_v0_2 = M2C_FIELD(var_s0, void **, 8);
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_2, s8 *, 0x65) = 1;
            }
        }
        var_s0 += 0x14;
    } while (var_s1 >= 0);
    return var_s2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016B28);

void func_00016BB4(s32 arg0) {
    func_00016B28(arg0, func_000165F0());
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016BE4);

void func_00016C58(s32 arg0) {
    s32 var_s1;
    void *var_s0;

    var_s1 = 0x1F;
    var_s0 = arg0 + 8;
    do {
        var_s1 -= 1;
        func_00016B28(arg0, var_s0);
        var_s0 += 0x14;
    } while (var_s1 >= 0);
}

s32 func_00016CA8(void *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_a3;
    void *var_v1;

    var_a3 = 0;
    var_v1 = arg0;
    var_a2 = 0x1F;
    if (arg1 != 0) {
        do {
            var_a2 -= 1;
            if (M2C_FIELD(var_v1, s32 *, 8) == arg1) {
                var_a3 += M2C_FIELD(var_v1, s32 *, 0x18) != 0;
            }
            var_v1 += 0x14;
        } while (var_a2 >= 0);
    } else {
        var_a3 = M2C_FIELD(arg0, s32 *, 0x28C);
    }
    return var_a3;
}

void func_00016CEC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28C) = (s32) (M2C_FIELD(arg0, s32 *, 0x28C) + 1);
}

void func_00016CFC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28C) = (s32) (M2C_FIELD(arg0, s32 *, 0x28C) - 1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016D0C);

void func_00016D2C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00016DC4();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016D4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016DC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016DE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016E18);

void func_00016E4C(M2C_UNK **arg0) {
    *arg0 = &D_000AF830;
    D_000B60EC = 0;
    func_000466D4((s32) arg0);
}

void func_00016E78(M2C_UNK **arg0) {
    *arg0 = &D_000AF830;
    D_000B60EC = 0;
    func_000466D4((s32) arg0);
}

void func_00016EA4(M2C_UNK **arg0) {
    *arg0 = &D_000AF830;
    D_000B60EC = 0;
    func_000466D4((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF7A0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF7B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016EE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016F50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016F5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001701C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017140);

s32 func_000171D8(void *arg0) {
    return (sceVshCommonGui_CBD3BD66(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), "msvideo_option_menu_plane", 0, "msvideo_option_menu_list", 0, 0) == 0) ? 0 : 0xFF;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017220);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017250);

void func_00017280(M2C_UNK **arg0) {
    *arg0 = &D_000AF8F0;
    D_000B60F0 = 0;
    func_000466D4((s32) arg0);
}

void func_000172AC(M2C_UNK **arg0) {
    *arg0 = &D_000AF8F0;
    D_000B60F0 = 0;
    func_000466D4((s32) arg0);
}

void func_000172D8(M2C_UNK **arg0) {
    *arg0 = &D_000AF8F0;
    D_000B60F0 = 0;
    func_000466D4((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF810);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF830);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017318);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017390);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001740C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017454);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017498);

void func_000174DC(M2C_UNK **arg0) {
    *arg0 = &D_000AFD48;
    sceVshCommonGui_891DD627(0);
    D_000B60F4 = 0;
    func_00004374((s32) arg0);
}

void func_00017520(M2C_UNK **arg0) {
    *arg0 = &D_000AFD48;
    sceVshCommonGui_891DD627(0);
    D_000B60F4 = 0;
    func_00004374((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017564);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF8F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000175B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001761C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017628);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF954);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF970);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000176D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF9A4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF9AC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF9C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF9D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017A54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000195C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000195F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000196B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000197C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001989C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00019968);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00019A3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00019BBC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFA10);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFA18);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFA30);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFA44);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFA54);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFA70);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFA90);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFAAC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFACC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFAD4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFAE8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFB04);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFB24);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFB40);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFB58);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFB70);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFB98);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFBB8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFBE0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFC04);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFC0C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFC34);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFC48);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFC64);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFC78);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFC84);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFC9C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFCB0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFCDC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFCF0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFD04);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFD0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00019C6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00019E98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00019EEC);

void func_00019F40(M2C_UNK **arg0) {
    *arg0 = &D_000AFF00;
    D_000B60F8 = 0;
    func_00004374((s32) arg0);
}

void func_00019F6C(M2C_UNK **arg0) {
    *arg0 = &D_000AFF00;
    D_000B60F8 = 0;
    func_00004374((s32) arg0);
}

void func_00019F98(M2C_UNK **arg0) {
    *arg0 = &D_000AFF00;
    D_000B60F8 = 0;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFD30);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFD34);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFD38);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFD3C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFD48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00019FD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001A044);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001A050);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001A31C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001A3DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001A514);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFDF4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFDFC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFE10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001A6CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFE50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001A864);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001A934);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001AA44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001AB70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001AD54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001AE48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001AF24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001AF98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B020);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B0A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B100);

void func_0001B17C(void) {
    func_0001B100(1, 0xFFFF);
}

void func_0001B19C(void) {
    func_0001B100(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B1BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B1EC);

void func_0001B21C(s32 **arg0) {
    *arg0 = &D_000B00D8;
    D_000B6110 = 0;
    func_00019F40(arg0);
}

void func_0001B248(s32 **arg0) {
    *arg0 = &D_000B00D8;
    D_000B6110 = 0;
    func_00019F40(arg0);
}

void func_0001B274(s32 **arg0) {
    *arg0 = &D_000B00D8;
    D_000B6110 = 0;
    func_00019F40(arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFEE4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFEF0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFEF4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFF00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B2B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B320);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B32C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFFB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B500);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B5D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B6D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AFFEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B914);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001BAE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001BBDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001BD10);

s32 func_0001BDB0(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_000B6118;
    if (var_v0 == 0) {
        temp_v0 = scePaf_61A8E8EC(0xD4);
        func_0001BF6C(temp_v0, arg0);
        D_000B6118 = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001BE14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001BE20);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001BF6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001C0B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001C3F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001C51C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B00C4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B00C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B00D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001C61C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001C758);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001D380);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001D484);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001D5E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001D638);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001D7E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001D81C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001D848);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001D96C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001DA9C);

void func_0001DC80(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x60) = 1;
}

void func_0001DC8C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x60) = 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001DC94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001DCF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001DF64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001DFA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E07C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E1E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E2CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E370);

void func_0001E4A4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 2) {
        func_0001D96C((s32) arg0);
    } else {
        func_0001DA9C((s32) arg0, 0);
    }
}

s32 func_0001E4E0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    return 0;
}

s32 func_0001E4EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E4F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E5C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E6AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E7D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E8F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E9F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001EAB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001EB48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001EBE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001EC24);

u8 func_0001ECC4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x58);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001ECCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001ED5C);

void func_0001EE54(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x58) = 0;
}

s32 func_0001EE5C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001EE64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001EEA8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B02CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B02E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0304);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0320);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B033C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0358);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B036C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0390);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B03B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B03DC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0400);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B041C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B043C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0450);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0474);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0490);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001EEEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001EFD4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F018);

u8 func_0001F03C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x6E);
}

u8 func_0001F044(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x6C);
}

u8 func_0001F04C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x6D);
}

u8 func_0001F054(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x6F);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F05C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F0BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F224);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F2D0);

s32 func_0001F49C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x70);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F4A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F520);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F5C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F68C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F720);

s32 func_0001F7E0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xCC) != 0) {

    } else {
        var_v0 = func_0001E6AC((s32) arg0, arg1, arg2);
    }
    return var_v0;
}

s32 func_0001F810(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(arg0, u8 *, 0xCC) != 0) {

    } else {
        var_v0 = func_0001E7D4((s32) arg0, arg1, arg2);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F840);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F87C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F8B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F8F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F950);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F970);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F98C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F9C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FA50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FB04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FB4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FBEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FBFC);

M2C_UNK *func_0001FC0C(void) {
    return &func_0001FBEC;
}

M2C_UNK *func_0001FC18(void) {
    return &func_0001FBFC;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FC24);

void func_0001FCE4(s32 arg0) {
    func_0001FD00(arg0, 0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FD00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FEA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FF7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FFD0);

void func_00020028(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x24) = 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020034);

s32 func_000200B0(void) {
    return D_000B6114;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000200BC);

void func_00020150(void) {
    func_000200BC(1, 0xFFFF);
}

void func_00020170(void) {
    func_000200BC(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020190);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020210);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020290);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000202E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020340);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020464);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000205F8);

void func_00020604(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x35A) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002060C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020838);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020848);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000208D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000209F0);

s32 func_00020AD4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B04C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B04D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B04E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B04F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020ADC);

s32 func_00020B30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

void func_00020B3C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B04F8;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x360));
    func_00020C14((s32) (arg0 + 0x340));
    func_00020C14((s32) (arg0 + 0x330));
    scePaf_9E0CA28F(arg0);
}

void func_00020B88(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B04F8;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x360));
    func_00020C14((s32) (arg0 + 0x340));
    func_00020C14((s32) (arg0 + 0x330));
    scePaf_9E0CA28F(arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020BDC);

s32 func_00020C08(void) {
    return D_000B5BF4;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020C14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020C54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020D58);

void func_00020DE8(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B6140 = 0;
    func_00004374((s32) arg0);
}

void func_00020E14(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B6140 = 0;
    func_00004374((s32) arg0);
}

void func_00020E40(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B6140 = 0;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B05CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020E80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00021074);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000212AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000213DC);

u8 func_0002148C(void *arg0) {
    u8 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x24);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, u8 *, 0x342);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000214A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00021530);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000215E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00021664);

void func_0002174C(void) {
    s32 temp_v0;

    if (D_000B6140 != 0) {
        temp_v0 = M2C_FIELD(D_000B6140, s32 *, 0x20);
        if (temp_v0 == 0) {

        } else {
            func_0001F87C(temp_v0);
        }
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002178C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000217C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B06A4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B06A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B06AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002180C);

void func_00021A30(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    func_00004374((s32) arg0);
}

void func_00021A58(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00021A90);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00021C20);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00021D3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00021E2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00021F1C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B06C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0700);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0738);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00022014);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000224AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000227BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00022878);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B087C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0884);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B088C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0894);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B089C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B08A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B08B4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B08C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B08CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B08D8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B08E4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B08EC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B08F4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B08FC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0904);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B093C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0954);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0968);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0974);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B09AC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B09CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B09E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0A08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0A2C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0A48);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0A64);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0A6C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0A80);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0A98);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0A9C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0AA0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0AA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000228B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002298C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000229C0);

void func_00022A90(s32 arg0) {
    func_00022FC4();
    func_000237E8(arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00022ABC);

void func_00022D74(void *arg0, s32 arg1) {
    if (func_00022DEC() != 0) {
        M2C_FIELD(arg0, s32 *, 0x100) = arg1;
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00022DAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00022DEC);

void func_00022FBC(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00022FC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002300C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000233D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023798);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000237E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023844);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000239A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000239F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023B3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023B8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023C38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023C78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023D24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023D64);

void func_00023DA4(void) {
    func_00023D64(1, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023DC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023EB0);

void func_00023F9C(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B61E4 = 0;
    func_00004374((s32) arg0);
}

void func_00023FC8(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B61E4 = 0;
    func_00004374((s32) arg0);
}

void func_00023FF4(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B61E4 = 0;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}

s32 func_00024034(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_000B61E4;
    if (var_v0 == 0) {
        temp_v0 = scePaf_61A8E8EC(0x120);
        func_00023EB0(temp_v0, arg0, arg1);
        D_000B61E4 = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0AE0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0B18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000240A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00024C9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00024E48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000250CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002522C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000254CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025520);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000255DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025680);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025738);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000257D8);

void func_000258A0(void *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_a0 != 0) {
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x54);
        if (temp_s1 != 0) {
            if (M2C_FIELD(arg0, u8 *, 0xCC) != 1) {
                temp_v0 = M2C_FIELD(arg0, void **, 0x48);
                M2C_FIELD(temp_v0, s8 *, 0x1FD) = 0;
                M2C_FIELD(temp_v0, s8 *, 0x1FE) = 0;
                scePaf_BE0D7212(temp_v0);
            } else {
                scePaf_0BF42D26(temp_s1, func_0001EBE0(temp_a0));
            }
        }
        if ((M2C_FIELD(arg0, s32 *, 0x6C) != 0) || (M2C_FIELD(arg0, s32 *, 0x70) != 0) || (M2C_FIELD(arg0, s32 *, 0x74) != 0)) {
            func_00025E90(arg0, func_0001EE64(M2C_FIELD(arg0, s32 *, 0x20)));
        }
    }
    M2C_FIELD(arg0, s8 *, 0xBE) = 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025960);

void func_00025AEC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xBE) = 1;
    func_00024E48();
}

void func_00025B10(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xBE) = 0;
    func_00004794((s32) arg0, 0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025B30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025C3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025CD0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0E38);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0E44);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0E54);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0EC0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0EC8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0ED8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025D34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025E90);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025EDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025FA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00026160);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00026414);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000264EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00026630);

void func_00026754(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xCC) != 1) {
        func_000257D8();
        M2C_FIELD(arg0, s8 *, 0xBC) = 0;
        func_000017A4();
    } else {
        func_00026C60();
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000267A0);

void func_0002684C(s32 arg0) {
    func_00024C9C();
    func_00026D48(arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00026878);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002694C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00026AA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00026B44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00026C60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00026D48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00026E40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00026FFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027080);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000270BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027118);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027238);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002734C);

