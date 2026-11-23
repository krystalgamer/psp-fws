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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000007E0);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000AB4);

void func_00000AD0(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000AD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000AE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000B08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000B14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000B24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000B68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000BBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000C10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000C64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00000CAC);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000021E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000021FC);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002744);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000278C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000027D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002808);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000283C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002918);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002B14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002B68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002BB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002BD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002C04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002C30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002C7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002CB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002D1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002DFC);

void func_00002E80(void) {
    func_00002D1C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002E9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002EFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002F7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002FB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00002FE4);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00004EA8);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009420);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009A54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00009A60);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000ACF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000AD9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000AE64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000AF64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B074);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B0D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B120);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B16C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B188);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B1D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B248);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000B26C);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000DEE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000DF34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000DF84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000DFD4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000E028);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FB2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FB70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FC38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FC48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FC70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FCA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FCD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FDA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FE68);

s32 func_0000FF38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0000FF40);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010558);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010580);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000105A8);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00010F94);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00012D2C);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00014FD8);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00015AC0);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016474);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001649C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000164C4);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016E4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016E78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016EA4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF7A0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF7B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016EE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016F50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00016F5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001701C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017140);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000171D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017220);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017250);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017280);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000172AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000172D8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF810);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000AF830);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017318);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017390);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001740C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017454);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017498);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000174DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00017520);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00019F40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00019F6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00019F98);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B21C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B248);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001B274);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001BDB0);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001E4A4);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F7E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001F810);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FC0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FC18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FC24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FCE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FD00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FEA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FF7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0001FFD0);

void func_00020028(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x24) = 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020034);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000200B0);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020B3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020B88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020BDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020C08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020C14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020C54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020D58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020DE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020E14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00020E40);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002174C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002178C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000217C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B06A4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B06A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B06AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002180C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00021A30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00021A58);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023F9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023FC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00023FF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00024034);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00025B10);

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

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000274D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027500);

void func_00027648(void) {
    func_00027500(1, 0xFFFF);
}

void func_00027668(void) {
    func_00027500(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027688);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027698);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000276C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000276D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000276F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027778);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000277EC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0F38);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0F78);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0F88);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B0F90);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027860);

void func_00027C54(void *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_v0 != 0) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x30);
        func_0002F6AC(temp_v0, (temp_a1 < 0) ? 3 : temp_a1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027C8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027CB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00027FBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000281C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002824C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000282F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002840C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028440);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002846C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000284AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000284C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000284E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000284FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028514);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028540);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000285B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000285C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1088);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B108C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1098);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028648);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028754);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028860);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000288C0);

void func_00028900(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else if (func_0001F018(temp_v0) == 1) {
        func_00001D5C();
        func_000014E8();
        func_0001E4F4(M2C_FIELD(arg0, s32 *, 0xC));
    }
}

void func_00028960(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else if (func_0001F018(temp_v0) == 1) {
        func_00001D5C();
        func_000014E8();
        func_0001E5C8(M2C_FIELD(arg0, s32 *, 0xC));
    }
}

void func_000289C0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {

    } else {
        func_0001E1E4(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000289F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028A60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028AA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028AFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028C24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028CD0);

void func_00028D18(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = func_0001BE14();
    func_00028AFC(arg0);
    func_00029038(arg0);
    if (func_00029030(arg0) != 0) {

    } else {
        func_000290D4(arg0);
    }
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B10E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B110C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028D70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00028F10);

void func_00029028(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029030);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029038);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000290D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029130);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002915C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002919C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002920C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002925C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1150);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B115C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B117C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1188);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B11A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B11B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B11D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B11E4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1200);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1210);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B122C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B123C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1260);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1270);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1294);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B12CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B12E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B12FC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1310);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B132C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1358);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1378);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B13B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000292AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029358);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029414);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029514);

s32 func_000296F0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 != 0) {
        sceVshCommonGui_8F414E35(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029734);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002974C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029778);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000297B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002981C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029828);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002988C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B13E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1418);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000298F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002996C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000299B4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1450);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1460);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1478);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1494);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B14B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B14D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B14E4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B14F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029BD0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029D40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00029DC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A0B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A0DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A19C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A1BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A1F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A22C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A25C);

s32 func_0002A35C(void) {
    sceVshCommonGui_F5A16B4D(0);
    sceVshCommonGui_891DD627(0);
    return 1;
}

void func_0002A384(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {

    } else {
        sceVshCommonGui_DDDE22B1(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A3B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A3E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A420);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A490);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A4E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A530);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A55C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A588);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1520);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1558);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A5C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A760);

void func_0002A784(void) {
    sceVshCommonGui_1F02F9D5(0);
    func_000027D4();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A7A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A940);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002A950);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AA08);

s32 func_0002AAA0(s32 arg0) {
    sceVshCommonGui_1F02F9D5(0);
    func_0000283C();
    func_0002A940(arg0);
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AADC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AB48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002ABCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002ABE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AC10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AC7C);

void func_0002ACA8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(s32), 0x18)(M2C_FIELD(arg0, s32 *, 0xC));
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002ACDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AD58);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1594);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B15A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B15E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AD8C);

void func_0002ADD4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 (**)(), 0x2C)();
}

void func_0002AE04(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x10) = arg1;
}

void func_0002AE0C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(), 0x34)();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AE30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AEBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AF78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AFA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002AFEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B058);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B098);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B0F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B144);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B198);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B1D8);

s32 func_0002B220(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) != 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B22C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B284);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B334);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B394);

void func_0002B3C0(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(M2C_UNK), 0x30)(arg1);
}

void func_0002B3E4(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), M2C_UNK (**)(M2C_UNK), 0x34)(arg1);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1600);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1608);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1614);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B408);

void func_0002B460(void) {
    void *temp_v0;

    temp_v0 = func_0002AFEC();
    if (temp_v0 != NULL) {
        scePaf_C9686A21(M2C_FIELD(temp_v0, s32 *, 4));
    }
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B163C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B48C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B524);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B634);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B68C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B6F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B724);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B754);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B788);

s32 func_0002B7B8(void) {
    return M2C_FIELD(scePaf_F77E3DC0(), s32 *, 0x9C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B7D8);

void func_0002B840(s32 arg0) {
    void *temp_v0;

    temp_v0 = scePaf_F77E3DC0();
    if (M2C_FIELD(temp_v0, s32 *, 0x9C) == 0) {

    } else {
        scePaf_0A4868F1(temp_v0, arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B884);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B890);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B8D4);

void func_0002B94C(void) {
    if (func_0002B7B8() != 0) {
        if (func_0002B7D8() == 0) {
            func_0002B840(0);
        }
    }
    vsh_3B9060A8(1);
    scePower_EBD177D6(0xDE, 0xDE, 0x6F);
    func_0002B334(0);
    func_0002B058(0);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1658);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002B9B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BA9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BAD0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BB24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BB8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BC2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BCA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BD24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BD64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BDA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BDEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BEB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BF34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002BFA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C01C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C080);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C118);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C188);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C1F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C268);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C280);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C290);

s32 func_0002C2B8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C2C0);

s32 func_0002C2D0(void) {
    return 0;
}

s32 func_0002C2D8(void) {
    return 0;
}

s32 func_0002C2E0(void) {
    return 0;
}

s32 func_0002C2E8(void) {
    return 0;
}

s32 func_0002C2F0(void) {
    return 0;
}

s32 func_0002C2F8(void) {
    return 0x1E;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C300);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C368);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C3D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C4E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C6DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C7FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C844);

void func_0002C88C(void) {
    void *temp_v0;

    temp_v0 = func_0000CE9C();
    if (temp_v0 != NULL) {
        func_0000E540(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C8B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B167C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1690);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B16C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B16E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002C90C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CA34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CADC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CB7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CB90);

void func_0002CBA4(void) {
}

void func_0002CBAC(void) {
}

void func_0002CBB4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CBBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CC08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CC5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CCAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CCE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CD44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CDA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CE44);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B16F4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B16F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1714);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1728);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1738);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CEE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002CF80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D024);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1748);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D050);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D188);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D278);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D2A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D2E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D340);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D430);

void func_0002D480(void) {
}

void func_0002D488(void) {
}

void func_0002D490(void) {
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1754);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D498);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D4CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D4FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D550);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D5BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D5F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D648);

void func_0002D69C(void) {
    if (func_0002D6D0() == 0) {

    } else {
        sceNetApctlDisconnect();
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D6D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D754);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D804);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1774);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002D838);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002DAC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002DB08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002DB30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002DBB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002DBEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002DC4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002DC58);

void func_0002DCE4(void) {
    func_0002DC58(1, 0xFFFF);
}

void func_0002DD04(void) {
    func_0002DC58(0, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1814);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1824);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1840);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1864);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1874);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1888);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B18C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B190C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1910);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1928);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1940);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1948);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1960);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B196C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1988);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B199C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B19B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B19C4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B19E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B19E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1A00);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1A08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1A24);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1A2C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1A44);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1A50);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1A70);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1A7C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1A9C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1AA4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1ABC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1AC4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1AE0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1AE8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1B00);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1B08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1B20);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1B28);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1B40);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1B4C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1B68);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1B70);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1B88);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1B94);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1BAC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1C78);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1C90);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1D5C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1DDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002DD24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002E1A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002E644);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002E6C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002E74C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002E7B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002E7E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002E854);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002E8E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002E984);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002EAEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002EE1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002EEAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002F208);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002F2C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002F454);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002F524);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002F5D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002F6AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002F7BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002F8F8);

void func_0002F94C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x440) = arg1;
    func_0002F8F8();
}

s32 func_0002F96C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x440);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002F974);

void func_0002F9F8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x490) = arg1;
}

s32 func_0002FA00(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x490);
}

void func_0002FA08(void *arg0) {
    func_0002FF54(M2C_FIELD(arg0, s32 *, 0x494));
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FA24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FA30);

void func_0002FA3C(void) {
}

void func_0002FA44(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FA4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FAAC);

s32 func_0002FB28(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_0002FB30(void *arg0) {
    return 0x11 - M2C_FIELD(arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FB40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FBE4);

s32 func_0002FC80(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    return 0;
}

s32 func_0002FC8C(s32 *arg0) {
    return *arg0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FC94);

s32 func_0002FCF0(void) {
    return 3;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FCF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FEF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FF54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0002FFB0);

void func_0003004C(void) {
    func_0002FFB0(1, 0xFFFF);
}

void func_0003006C(void) {
    func_0002FFB0(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003008C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000300B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000300C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030100);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030144);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030170);

s32 func_0003017C(s32 arg0) {
    return arg0 + 0x338;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030184);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000301EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030254);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003027C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000302A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000302DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030308);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1EB8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1EC8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B1FA0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2078);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B214C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030314);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000303D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030494);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000304E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030534);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003058C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030648);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003075C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000307F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000308DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030908);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030A64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030B9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030BB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030BF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030C3C);

void func_00030C8C(void) {
    func_00030C3C(1, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030CAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030D24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030D9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030DC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030DEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030E24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030F2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030FA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00030FE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000311A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031204);

void func_00031280(void) {
    func_00031204(1, 0xFFFF);
}

void func_000312A0(void) {
    func_00031204(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000312C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003131C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2174);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2188);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2260);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031648);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031804);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003186C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000318D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031944);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000319B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031A2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031AAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031B5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031E68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031EC8);

void func_00031EF4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x90)();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031F18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031F4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00031F98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032018);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003210C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032178);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032244);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032314);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000324C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003260C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032A08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032A98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032B38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032C1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032D00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032EA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032F1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00032F7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00033224);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00033B70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00033F54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00034114);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00034164);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000344A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00034760);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00034A30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00034E80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00034E9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000351F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035350);

s32 func_00035394(void) {
    return 0;
}

s32 func_0003539C(void) {
    return 2;
}

s32 func_000353A4(void) {
    return 0;
}

s32 func_000353AC(void) {
    return 0;
}

s32 func_000353B4(void) {
    return 0;
}

s32 func_000353BC(void) {
    return 0;
}

s32 func_000353C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x55C);
}

s32 func_000353CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x560);
}

s32 func_000353D4(void) {
    return 0;
}

s32 func_000353DC(void) {
    return 0;
}

s32 func_000353E4(void) {
    return 0;
}

s32 func_000353EC(void) {
    return 8;
}

s32 func_000353F4(void) {
    return 0;
}

void func_000353FC(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035404);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035494);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035524);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003559C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035614);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035694);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B233C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2348);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2358);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2360);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2364);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2368);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B236C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2370);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2374);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2378);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B237C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2380);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2384);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2390);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2428);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2430);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2438);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2440);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2454);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2458);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B245C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2460);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2464);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000356B4);

s32 func_000357F4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000357FC);

void func_00035878(void) {
    func_000357FC(1, 0xFFFF);
}

void func_00035898(void) {
    func_000357FC(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000358B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000358C8);

s32 func_000358F0(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000358F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035928);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035958);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035980);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000359A8);

void func_000359E0(void) {
    func_00031A2C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000359FC);

s32 func_00035A58(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035A60);

void func_00035A8C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035A94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035B24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035BB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035C2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035CA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035D24);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B24A0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B24C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B24E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035D44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035E44);

s32 func_00035EC8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035ED0);

void func_00035F4C(void) {
    func_00035ED0(1, 0xFFFF);
}

void func_00035F6C(void) {
    func_00035ED0(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035F8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035FC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00035FFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000360B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000360F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00036134);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00036170);

void func_000361B4(void) {
    func_00031A2C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000361D0);

s32 func_00036254(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x6E0);
    if (temp_v0 >= 0) {
        sceIoClose(temp_v0);
    }
    return 0;
}

s32 func_00036280(void *arg0) {
    s32 temp_v0;

    if (func_000A6894(M2C_FIELD(arg0, s32 *, 0x6DC)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        temp_v0 = func_000365F4(arg0, arg0 + 0x50);
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_v0;
        if (M2C_FIELD(arg0, u8 *, 0x79) == 0) {
            M2C_FIELD(arg0, s32 *, 0x40) = temp_v0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x40) = func_00036848(arg0, M2C_FIELD(arg0, s32 *, 0x54), arg0 + 0x7C);
        }
        M2C_FIELD(arg0, s32 *, 0x44) = func_000369F4(arg0, arg0 + 0x564);
        M2C_FIELD(arg0, s32 *, 0x48) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x7C)(arg0);
    }
    return 0;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2580);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2588);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2598);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00036318);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003655C);

s32 func_000365A0(void) {
    return 4;
}

void func_000365A8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x6E0);
    if (temp_v0 >= 0) {
        sceIoClose(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x6E0) = -2;
    }
    func_00032D00(arg0);
}

void func_000365EC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000365F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00036848);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000369F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00036C50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00036E7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037078);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037108);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037180);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000371F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037278);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B25B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B25BC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B25C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B25C4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B25C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B25CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B25D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B25D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B25E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2678);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2680);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2688);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2694);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2698);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B269C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000372E0);

s32 func_000373F4(void) {
    sceVshBridge_5317A582();
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037414);

void func_00037490(void) {
    func_00037414(1, 0xFFFF);
}

void func_000374B0(void) {
    func_00037414(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000374D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037540);

s32 func_000375BC(s32 arg0, void *arg1) {
    func_0000C1D0(arg1, arg0);
    M2C_FIELD((M2C_FIELD(arg1, s32 *, 4) + M2C_FIELD(arg1, s32 *, 0)), s8 *, -1) = 0x4C;
    return 1;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B26BC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B26C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B26E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B26F0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B26F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037600);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000376DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037834);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037920);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037960);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037A2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037A6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037B38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037B78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037DC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037F28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037F48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037F68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037F78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037F88);

s32 func_00037FB0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00037FB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00038008);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00038118);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003840C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00038648);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003866C);

s32 func_000386B0(void *arg0) {
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 != -1) {
        if (sceVshBridge_C86E65DC(temp_v0) < 0) {
            var_s2 = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 4) = -1;
        }
    }
    return var_s2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003870C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003873C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003876C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000387C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003881C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003887C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00038948);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00038984);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000389A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000389E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00038A90);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2720);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00038AC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00038DA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00038EA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00038F90);

s32 func_000391AC(void) {
    return 1;
}

s32 func_000391B4(void) {
    return 2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000391BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000392E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039360);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000393FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000395E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039828);

void func_0003996C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039974);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039A04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039A94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039B0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039B84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039C04);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2758);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B27F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2808);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2810);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2818);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2820);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2824);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039C24);

s32 func_00039D34(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039D3C);

void func_00039DB8(void) {
    func_00039D3C(1, 0xFFFF);
}

void func_00039DD8(void) {
    func_00039D3C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039DF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039E28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039E58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039E80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039EA8);

s32 func_00039EE0(void) {
    return 0x10;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039EE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00039F78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A008);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A080);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A0F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A178);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A198);

s32 func_0003A1D4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A1DC);

void func_0003A258(void) {
    func_0003A1DC(1, 0xFFFF);
}

void func_0003A278(void) {
    func_0003A1DC(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A298);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A2C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A2F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A320);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A348);

void func_0003A380(void) {
    func_00031A2C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A39C);

s32 func_0003A3C0(void) {
    return 0;
}

s32 func_0003A3C8(void) {
    return 5;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A3D0);

void func_0003A624(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A62C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A744);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003A838);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003AA44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003ADD4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2850);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2870);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2908);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2910);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2918);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2930);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2948);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003AFE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B1D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B380);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B5FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B68C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B704);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B77C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B7FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B894);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B8A0);

s32 func_0003B8D4(void) {
    sceVshBridge_5317A582();
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B8F4);

void func_0003B970(void) {
    func_0003B8F4(1, 0xFFFF);
}

void func_0003B990(void) {
    func_0003B8F4(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B9B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003B9FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003BA48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003BAB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003BB28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003BBA0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2960);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B29F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2A00);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2A10);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2A28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003BE4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C2C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C3A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C570);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C5AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C60C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C66C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C6D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C7CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C808);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C874);

s32 func_0003C8BC(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x6DC), s32 *, 0x14);
}

s32 func_0003C8C8(void) {
    return 6;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003C8D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CB18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CB94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CBCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CC5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CCEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CD64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CDDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CE5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CEF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CF00);

s32 func_0003CF34(void) {
    sceVshBridge_5317A582();
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003CF54);

void func_0003CFD0(void) {
    func_0003CF54(1, 0xFFFF);
}

void func_0003CFF0(void) {
    func_0003CF54(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D010);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D058);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D0A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D0F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D148);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2A7C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2A90);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2B30);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2B40);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2B48);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2B58);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2B70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D1A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D4E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D5BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D674);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D6B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D710);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D770);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003D7D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003DB00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003DC20);

s32 func_0003DC5C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003DC64);

s32 func_0003DCD0(void) {
    return 7;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003DCD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003DE8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003DF08);

s32 func_0003DF40(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003DF48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003DFD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E068);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E0E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E158);

s32 func_0003E1D8(void) {
    return 0;
}

s32 func_0003E1E0(void) {
    return 1;
}

s32 func_0003E1E8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E1F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E220);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E250);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E278);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E2A0);

void func_0003E2D8(void) {
    func_00031A2C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E2F4);

s32 func_0003E340(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E348);

s32 func_0003E36C(void) {
    return 0xA;
}

s32 func_0003E374(void) {
    return 0xA;
}

void func_0003E37C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E3C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E3FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E460);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E4C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E528);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E58C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E5C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E604);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E644);

void func_0003E674(void) {
}

void func_0003E67C(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E684);

void func_0003E6DC(void *arg0, void *arg1) {
    u16 temp_a0;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 temp_v1_4;
    u16 temp_v1_5;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0);
    if ((u32) (temp_v1 - 1) < 0x270FU) {
        M2C_FIELD(arg1, u16 *, 0) = temp_v1;
    }
    temp_v1_2 = M2C_FIELD(arg0, u16 *, 2);
    if ((u32) (temp_v1_2 - 1) < 0xCU) {
        M2C_FIELD(arg1, u16 *, 2) = temp_v1_2;
    }
    temp_v1_3 = M2C_FIELD(arg0, u16 *, 4);
    if ((u32) (temp_v1_3 - 1) < 0x1FU) {
        M2C_FIELD(arg1, u16 *, 4) = temp_v1_3;
    }
    temp_v1_4 = M2C_FIELD(arg0, u16 *, 6);
    if (temp_v1_4 < 0x18U) {
        M2C_FIELD(arg1, u16 *, 6) = temp_v1_4;
    }
    temp_v1_5 = M2C_FIELD(arg0, u16 *, 8);
    if (temp_v1_5 < 0x3CU) {
        M2C_FIELD(arg1, u16 *, 8) = temp_v1_5;
    }
    temp_a0 = M2C_FIELD(arg0, u16 *, 0xA);
    if (temp_a0 < 0x3CU) {
        M2C_FIELD(arg1, u16 *, 0xA) = temp_a0;
    }
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
}

void func_0003E750(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(arg0, u16 *, 0);
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(arg0, u16 *, 4);
    M2C_FIELD(arg1, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 6);
    M2C_FIELD(arg1, u16 *, 8) = (u16) M2C_FIELD(arg0, u16 *, 8);
    M2C_FIELD(arg1, u16 *, 0xA) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E788);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E7D8);

s32 func_0003E828(void *arg0) {
    u16 temp_a1;
    u16 temp_a2;
    u16 temp_a3;

    temp_a1 = M2C_FIELD(arg0, u16 *, 4);
    temp_a2 = M2C_FIELD(arg0, u16 *, 6);
    temp_a3 = M2C_FIELD(arg0, u16 *, 8);
    return (((temp_a1 & 0xFF) << 8) | (temp_a1 >> 8)) + (((temp_a2 & 0xFF) << 8) | (temp_a2 >> 8)) + (((temp_a3 & 0xFF) << 8) | (temp_a3 >> 8));
}

s32 func_0003E870(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0xA);
    return ((temp_v1 & 0xFF) << 8) | (temp_v1 >> 8);
}

s32 func_0003E888(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0xC);
    return ((temp_v1 & 0xFF) << 8) | (temp_v1 >> 8);
}

s32 func_0003E8A0(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0xE);
    return ((temp_v1 & 0xFF) << 8) | (temp_v1 >> 8);
}

s32 func_0003E8B8(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x10);
    return ((temp_v1 & 0xFF) << 8) | (temp_v1 >> 8);
}

s32 func_0003E8D0(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x12);
    return ((temp_v1 & 0xFF) << 8) | (temp_v1 >> 8);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E8E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E958);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003E97C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EA30);

void func_0003EA64(void *arg0) {
    s32 temp_v0;

    func_0003EEDC();
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_v0 > 0) {
        func_0003EBF0(arg0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2BEC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2C34);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2C48);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2CE8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2D00);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2D20);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2DB8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2DD0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2DE4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2DF8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2E08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2E18);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2E24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EAA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EB88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EBCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EBF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EC44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EC60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EC84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003ECC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003ECE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003ED40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003ED64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EDC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EE48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EEDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003EF2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F12C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F330);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F528);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F680);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F6D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F72C);

s32 func_0003F768(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x120) != 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F774);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F7B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F8C0);

s32 func_0003F948(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F950);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2E4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003F98C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003FA08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003FA48);

s32 func_0003FA64(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003FA6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0003FC90);

void func_00040238(void) {
    func_0003EC84();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040254);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004028C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000402D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004033C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000403B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004041C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040478);

s32 func_00040528(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = func_000403B4(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_v0 == 1);
    return ((temp_v0 ^ 1) == 0) ? 0 : -1;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2E58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040568);

s32 func_00040604(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_000403B4(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v0;
    return (~temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040640);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000406D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040714);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000407C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040808);

s32 func_000408B8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000408C0);

s32 func_00040964(void) {
    return 0;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2E84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004096C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040A08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040B34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040C10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040C88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040F54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00040FD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000410B8);

void func_000414EC(void) {
    func_00042028();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041508);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000415CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004166C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004175C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041790);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000417D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041810);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041838);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041860);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041898);

void func_000418C8(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000418D0);

void func_00041904(s32 arg0) {
    func_00042390();
    func_00041998(arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041930);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041998);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000419CC);

void func_00041A10(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp_v0 > 0) {
        sceKernelDeleteThread(temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 0x120) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041A54);

void func_00041CFC(void) {
    func_00075590();
}

void func_00041D18(void) {
    func_00075648();
}

void func_00041D34(void) {
    func_00075428();
}

void func_00041D50(void) {
    func_000754D8();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041D6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041D98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041E68);

s32 func_00041F24(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 > 0) {
        var_v1 = sceIoClose(arg1);
        if (arg1 == M2C_FIELD(arg0, s32 *, 0x11C)) {
            M2C_FIELD(arg0, s32 *, 0x11C) = 0;
        }
    }
    return var_v1;
}

void func_00041F78(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00041F80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042028);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2EB8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2EC0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2EC4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2ECC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042098);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042244);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042390);

s32 func_000423F0(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x120);
    if (temp_v0 > 0) {
        var_s1 = sceKernelWaitThreadEndCB(temp_v0);
        if (var_s1 != 0x800201A8) {
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x11C);
            if (temp_v0_2 > 0) {
                func_00041F24(arg0, temp_v0_2);
                func_000419CC(arg0, 0);
            }
            if (var_s1 == 0x800200D2) {
                var_s1 = M2C_FIELD(arg0, s32 *, 0x144);
            }
        }
    }
    return var_s1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042478);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000424C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000424F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042528);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042550);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042578);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000425B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000425E4);

void func_00042608(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042610);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2F00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042694);

s32 func_0004276C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0_2 > 0) {
        sceKernelDeleteEventFlag(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    return 0;
}

s32 func_000427C0(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0 > 0) {
        var_v1 = sceKernelSetEventFlag(temp_v0);
    }
    return var_v1;
}

s32 func_000427F4(void *arg0) {
    s32 var_a2;
    u32 temp_a1;
    u32 temp_v0;

    var_a2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        temp_a1 = M2C_FIELD(arg0, u32 *, 0x24);
        temp_v0 = M2C_FIELD(arg0, u32 *, 0x20);
        var_a2 = temp_v0 - temp_a1;
        if (temp_a1 >= temp_v0) {
            var_a2 = M2C_FIELD(arg0, s32 *, 0x1C) - temp_a1;
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042824);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042AE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042B14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042B50);

s32 func_00042BEC(void *arg0) {
    s32 temp_s1;

    sceKernelWaitSemaCB(M2C_FIELD(arg0, s32 *, 0xC), 1, 0);
    temp_s1 = func_00042B14(arg0);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0xC), 1);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042C40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042D8C);

u32 func_00042E18(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_a3;
    u32 var_a1;

    temp_a3 = M2C_FIELD(arg0, u32 *, 0x1C);
    var_a1 = arg1 + arg2;
    if (var_a1 >= temp_a3) {
        var_a1 = M2C_FIELD(arg0, u32 *, 0x18) + (arg2 - (temp_a3 - arg1));
    }
    if (var_a1 == temp_a3) {
        var_a1 = M2C_FIELD(arg0, u32 *, 0x18);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042E48);

s32 func_00042E90(void *arg0) {
    s32 temp_s1;

    sceKernelWaitSemaCB(M2C_FIELD(arg0, s32 *, 0xC), 1, 0);
    temp_s1 = func_00042E48(arg0);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0xC), 1);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042EE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042F68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042F9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00042FD0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00043034);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000430C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00043120);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000431B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00043294);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000432D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004330C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00043390);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00043414);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004344C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00043590);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000435D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000436F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00043710);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004375C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000437D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00043808);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2F30);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2F38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00043C28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044218);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044224);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2F64);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2F70);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2F7C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2F88);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2F94);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2FA0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B2FAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004425C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000444D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044510);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044564);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044590);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000445B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004475C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000447D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044814);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044A18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044A4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044B60);

void func_00044BD4(void) {
    func_00044B60();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044BF0);

void func_00044C4C(void) {
    func_00044BF0();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044C68);

s32 func_00044E20(void) {
    return 0;
}

s32 func_00044E28(void) {
    return 0;
}

s32 func_00044E30(void) {
    return 0;
}

s32 func_00044E38(void) {
    return 0;
}

s32 func_00044E40(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044E48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044E84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044EC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044EEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044F18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044F58);

s32 func_00044FC8(void) {
    return 0;
}

void func_00044FD0(void) {
}

s32 func_00044FD8(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00044FE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045054);

void func_00045154(void) {
    func_0002B68C(0);
    func_0002B634(0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045178);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000451E0);

void func_00045248(void) {
    func_00045444();
}

void func_00045264(void) {
    func_000454A0();
}

void func_00045280(void) {
    func_00045444();
}

void func_0004529C(void) {
    func_000454A0();
}

void func_000452B8(void) {
    func_00045444();
}

void func_000452D4(void) {
    func_000454A0();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000452F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045360);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045444);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000454A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045574);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000455EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045654);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000456BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045730);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000457A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045820);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3008);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3088);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000458A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000458E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045974);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000459C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000459FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045A48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045A88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045B48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045DF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045E24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045E54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045E7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045EA4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B30B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3140);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3150);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3158);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3164);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3170);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00045EDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004602C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004624C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004627C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000462E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046454);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046494);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046654);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046694);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000466D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000466FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046724);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004675C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046814);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046850);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046890);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046970);

void func_000469E8(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000469F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046A8C);

void func_00046B08(void *arg0) {
    sceVshCommonGui_3BE24617(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), 0);
}

void func_00046B2C(void) {
    sceVshCommonGui_6C337347();
}

void func_00046B48(void) {
    sceVshCommonGui_6DB34C38();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046B64);

void func_00046BF0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046BF8);

void func_00046C18(s32 arg0) {
    scePaf_BB8E4390(arg0 + 8);
}

void func_00046C34(s32 arg0) {
    scePaf_79542EEA(arg0 + 8);
}

void func_00046C50(s32 arg0) {
    scePaf_291EBB2C(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046C6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046CB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046CF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046D2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046D6C);

void func_00046D90(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}

void func_00046DB4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}

void func_00046DD8(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046DFC);

void func_00046E20(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}

void func_00046E44(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}

void func_00046E68(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}

void func_00046E8C(s32 arg0) {
    scePaf_1A314D65(arg0 + 8);
}

void func_00046EA8(s32 arg0) {
    scePaf_6FAE0AC1(arg0 + 8);
}

void func_00046EC4(s32 arg0) {
    scePaf_2A5E7BE9(arg0 + 8);
}

void func_00046EE0(s32 arg0) {
    scePaf_7EA9C56C(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046EFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046F3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046F7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00046FBC);

s32 func_00046FFC(void) {
    return -1;
}

s32 func_00047004(void) {
    return -1;
}

s32 func_0004700C(void) {
    return -1;
}

s32 func_00047014(void) {
    return 0;
}

s32 func_0004701C(void) {
    return 0;
}

s32 func_00047024(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004702C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00047190);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000471A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000471C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000471E4);

void func_00047218(void) {
}

s32 func_00047220(void) {
    return -1;
}

void func_00047228(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00047230);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00047290);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000472F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00047340);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00047390);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000473E8);

s32 func_000474C8(void) {
    return func_0002B7B8() != 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000474E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00047540);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000475C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00047640);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00047C20);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00047D64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00047EA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00048144);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000483E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00048684);

void func_0004871C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00048740);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B31B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B31D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3220);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B32B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3350);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3368);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00048858);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00048F78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00049194);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000491D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004921C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00049284);

void func_000492F4(void) {
    scePaf_128E46E3();
    scePaf_B866A612();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00049318);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000493F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00049468);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00049560);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00049660);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000496F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00049738);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3420);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00049780);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004992C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00049E3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004A188);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004A558);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004A928);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004AD00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004AE20);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004B02C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004B09C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004B1C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004B380);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004B57C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004B6D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004B85C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3518);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B351C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3520);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3524);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3528);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B352C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3530);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3534);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3538);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B353C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3540);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004B988);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004BB24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004BC80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004BF34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004BFF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004C1C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004C2EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004C750);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004C818);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004C950);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004CA14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004CC60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004CDE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004CED4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004D194);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004D1B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004D358);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004D40C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004D4AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004D5A8);

s32 func_0004D70C(s32 arg0, s32 *arg1, s32 arg2) {
    if (arg2 != 0) {

    } else {
        func_0000E634(arg0 + 0xEBC, *arg1);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004D73C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004D7CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004D83C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004D8B0);

void func_0004DA40(void) {
    scePaf_128E46E3();
    scePaf_B866A612();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004DA64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004DAA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004DB10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004DB84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004DBCC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3560);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3580);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3590);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B35D8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B35DC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B35E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B35E4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B35F0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3690);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004DC14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004DD40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004DDD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004DFC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004E1B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004E8AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004EDB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004EE9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004F074);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004F26C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004F32C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004F784);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004FAB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004FC54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004FDB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004FE88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0004FFEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00050158);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B36D4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B36E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B36EC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B36FC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B370C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B371C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3730);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B373C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3744);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3754);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3764);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3774);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3784);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3794);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B37A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005021C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000505FC);

s32 func_000507F4(s32 arg0) {
    func_00069758(arg0 + 0x38C);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00050814);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005092C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00050B08);

s32 func_00050B9C(s32 arg0) {
    func_00061094(arg0 + 0x940);
    return 0;
}

s32 func_00050BBC(s32 arg0) {
    func_000610B0(arg0 + 0x940);
    return 0;
}

s32 func_00050BDC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x9E4) = 1;
    func_0006102C(arg0 + 0x948, 1);
    return 0;
}

s32 func_00050C08(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB44) = arg1;
    func_0006408C(arg0 + 0x48);
    return 0;
}

void func_00050C2C(void *arg0, M2C_UNK arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = arg0 + 0xB88;
    func_00061094(temp_s0);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xB84);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0xB84) = (s32) (temp_v0 - 1);
    }
    func_000610B0(temp_s0);
    func_0006388C(arg0 + 0x48, arg1);
}

void func_00050C94(s32 arg0) {
    func_00063F50(arg0 + 0x48);
}

void func_00050CB0(s32 arg0) {
    func_00067884(arg0 + 0x2B0);
}

void func_00050CCC(s32 arg0) {
    func_000678D0(arg0 + 0x2B0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00050CE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00050D18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00050E14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00050E8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00050ED4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00050F48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051010);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051124);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000513C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B37CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005155C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005176C);

s32 func_000517F4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x938);
    if (temp_v0 == 0) {

    } else {
        func_000700A0(temp_v0);
    }
    return 0;
}

s32 func_00051828(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != 0) {
        var_v1 = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x938), s32 *, 0x390) = arg1;
    }
    return var_v1;
}

void func_00051844(s32 arg0) {
    func_0004DFC8(arg0 - 0x40);
}

void func_00051860(s32 arg0) {
    func_0004DFC8(arg0 - 0x3C);
}

void func_0005187C(s32 arg0) {
    func_0004E1B8(arg0 - 0x40);
}

void func_00051898(s32 arg0) {
    func_0004E1B8(arg0 - 0x3C);
}

void func_000518B4(s32 arg0) {
    func_0004EDB4(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000518D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051944);

void func_000519B8(s32 arg0) {
    func_0004F26C(arg0 - 0x3C);
}

void func_000519D4(s32 arg0) {
    func_0004FAB8(arg0 - 0x3C);
}

void func_000519F0(s32 arg0) {
    func_0004FC54(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051A0C);

void func_00051A2C(s32 arg0) {
    func_0004FE88(arg0 - 0x3C);
}

void func_00051A48(s32 arg0) {
    func_0004FFEC(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051A64);

void func_00051A84(s32 arg0) {
    func_0005021C(arg0 - 0x3C);
}

void func_00051AA0(s32 arg0) {
    func_000505FC(arg0 - 0x3C);
}

void func_00051ABC(s32 arg0) {
    func_000507F4(arg0 - 0x3C);
}

void func_00051AD8(s32 arg0) {
    func_00050814(arg0 - 0x3C);
}

void func_00051AF4(s32 arg0) {
    func_0005092C(arg0 - 0x3C);
}

void func_00051B10(s32 arg0) {
    func_00050B08(arg0 - 0x3C);
}

void func_00051B2C(s32 arg0) {
    func_00050B9C(arg0 - 0x3C);
}

void func_00051B48(s32 arg0) {
    func_00050BBC(arg0 - 0x3C);
}

void func_00051B64(s32 arg0) {
    func_00050BDC(arg0 - 0x3C);
}

void func_00051B80(s32 arg0, s32 arg1) {
    func_00050C08(arg0 - 0x3C, arg1);
}

void func_00051B9C(s32 arg0, s32 arg1) {
    func_00050C2C(arg0 - 0x3C, arg1);
}

void func_00051BB8(s32 arg0) {
    func_00050C94(arg0 - 0x3C);
}

void func_00051BD4(s32 arg0) {
    func_00050CB0(arg0 - 0x3C);
}

void func_00051BF0(s32 arg0) {
    func_00050CCC(arg0 - 0x3C);
}

void func_00051C0C(s32 arg0) {
    func_00050CE8(arg0 - 0x3C);
}

void func_00051C28(s32 arg0) {
    func_00050D18(arg0 - 0x3C);
}

void func_00051C44(s32 arg0) {
    func_00050E14(arg0 - 0x3C);
}

void func_00051C60(s32 arg0) {
    func_00050E8C(arg0 - 0x3C);
}

void func_00051C7C(s32 arg0) {
    func_00050ED4(arg0 - 0x3C);
}

void func_00051C98(s32 arg0) {
    func_00050F48(arg0 - 0x3C);
}

void func_00051CB4(s32 arg0) {
    func_00051010(arg0 - 0x3C);
}

void func_00051CD0(s32 arg0) {
    func_000513C8(arg0 - 0x40);
}

void func_00051CEC(s32 arg0) {
    func_000517F4(arg0 - 0x3C);
}

void func_00051D08(s32 arg0, s32 arg1) {
    func_00051828(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051D24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051D34);

void func_00051D5C(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051D64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051DA4);

void func_00051DEC(s32 arg0) {
    func_00061094(arg0 + 4);
}

s32 func_00051E08(void *arg0) {
    s32 *temp_v1;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 **, 0x14);
    var_v0 = 1;
    if (temp_v1 != NULL) {
        var_v0 = *temp_v1;
    }
    return var_v0;
}

s32 func_00051E20(void *arg0, u32 arg1, s32 *arg2) {
    void *temp_a0;

    if (arg2 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x14);
        if (temp_a0 == NULL) {
            *arg2 = 0;
        } else if ((u32) M2C_FIELD(temp_a0, u32 *, 0) >= arg1) {
            *arg2 = M2C_FIELD(((arg1 * 4) + M2C_FIELD(temp_a0, s32 *, 4)), s32 *, -4);
        } else {
            *arg2 = 0;
        }
    }
    return 0;
}

s32 func_00051E64(void *arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 var_t0;

    var_t0 = 6;
    if (((arg2 == NULL) | (arg3 == NULL)) == 0) {
        *arg2 = 0;
        var_t0 = 0;
        *arg3 = arg1 + M2C_FIELD(arg0, s32 *, 0xC);
    }
    return var_t0;
}

s32 func_00051E94(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 6;
    if (arg1 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x10);
    }
    return var_v1;
}

s32 func_00051EB0(void **arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {

    } else {
        var_v0 = M2C_FIELD(*arg0, s32 (**)(), 0x20)();
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051EE4);

void func_00051F34(s32 arg0) {
    func_000610B0(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00051F50);

s32 func_000520B0(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000520B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000520EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005215C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000521E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000521F0);

s32 func_00052230(void) {
    return 1;
}

s32 func_00052238(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB28);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052240);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005225C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005226C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052294);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000523E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000524D4);

s32 func_00052580(s32 arg0) {
    return (func_00052C54(arg0 + 4) == 0) ? 0 : 4;
}

s32 func_000525A8(s32 arg0) {
    return (sceMpegAvcDecodeDetailIndex(arg0 + 4) == 0) ? 0 : 4;
}

s32 func_000525D0(s32 arg0) {
    return (sceMpeg_CF3547A2(arg0 + 4) == 0) ? 0 : 4;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000525F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052808);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3800);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3958);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B39A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3A40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052890);

void func_00052914(void) {
    func_00052890(1, 0xFFFF);
}

void func_00052934(void) {
    func_00052890(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052954);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000529F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052AF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052B30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052B7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052C54);

void func_00052CC4(void) {
    sceMpegDelete();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052CE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052D9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00052F88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000530C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005316C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000532D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00053444);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000539E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00053E1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00053EFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000540C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000542B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005435C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000546CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00054744);

s32 func_000547FC(void) {
    return 0x102;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00054804);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000548A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000549D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00054A88);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3AA0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3AAC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3AB8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3AC8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3AD8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3AE8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3AFC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3B0C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3B1C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3B2C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3B3C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3B50);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3B60);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3B6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00054B30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00054E88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00054FC8);

s32 func_00055020(void) {
    return 2;
}

s32 func_00055028(void) {
    return 2;
}

s32 func_00055030(void) {
    return 2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055038);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055080);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055134);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005529C);

void func_00055394(s32 arg0) {
    func_00067394(arg0 + 0x2B0);
}

s32 func_000553B0(s32 arg0) {
    func_00061094(arg0 + 0x13F4);
    return 0;
}

s32 func_000553D0(s32 arg0) {
    func_000610B0(arg0 + 0x13F4);
    return 0;
}

s32 func_000553F0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1440) = 1;
    func_0006102C(arg0 + 0x1404, 1);
    return 0;
}

s32 func_0005541C(void) {
    return 2;
}

s32 func_00055424(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1460) = arg1;
    func_0006408C(arg0 + 0x48);
    func_000566F8(arg0 + 0x388, arg1);
    func_00059A2C(M2C_FIELD(arg0, s32 *, 0x13EC), arg1);
    return 0;
}

s32 func_00055478(void) {
    return 2;
}

s32 func_00055480(void) {
    return 2;
}

s32 func_00055488(void) {
    return 0;
}

s32 func_00055490(void) {
    return 6;
}

s32 func_00055498(void) {
    return 0;
}

void func_000554A0(s32 arg0, s32 arg1) {
    func_0006388C(arg0 + 0x48, arg1);
}

void func_000554BC(s32 arg0) {
    func_00063F50(arg0 + 0x48);
}

void func_000554D8(s32 arg0) {
    func_00067884(arg0 + 0x2B0);
}

void func_000554F4(s32 arg0) {
    func_00067884(arg0 + 0x2B0);
}

void func_00055510(s32 arg0) {
    func_000678D0(arg0 + 0x2B0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005552C);

s32 func_00055618(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != NULL) {
        var_v1 = func_000636C4(arg0 + 0x48);
        if (var_v1 == 6) {
            var_v1 = 0;
            *arg1 = M2C_FIELD(arg0, s32 *, 0x1414);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055678);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000557AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000557CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000557F4);

s32 func_0005581C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055824);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000558D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000558FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000559C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000559DC);

s32 func_000559F4(void) {
    return 0;
}

s32 func_000559FC(void) {
    return 0;
}

s32 func_00055A04(void) {
    return 2;
}

s32 func_00055A0C(void) {
    return 2;
}

s32 func_00055A14(void) {
    return 2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055A1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055CAC);

s32 func_00055DCC(s32 arg0) {
    return (func_00060FA4(arg0 + 0x1404, 1, 0x11, 0) != 0) ? 0 : 8;
}

void func_00055E00(s32 arg0) {
    func_0006102C(arg0 + 0x1404, 1);
}

void func_00055E20(s32 arg0) {
    func_000532D8(arg0 - 0x40);
}

void func_00055E3C(s32 arg0) {
    func_000532D8(arg0 - 0x3C);
}

void func_00055E58(s32 arg0) {
    func_00053444(arg0 - 0x40);
}

void func_00055E74(s32 arg0) {
    func_00053444(arg0 - 0x3C);
}

void func_00055E90(s32 arg0) {
    func_00053E1C(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055EAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055F20);

void func_00055F94(s32 arg0) {
    func_000542B0(arg0 - 0x3C);
}

void func_00055FB0(s32 arg0) {
    func_00054744(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055FCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00055FE8);

void func_00056008(s32 arg0) {
    func_000548A4(arg0 - 0x3C);
}

void func_00056024(s32 arg0) {
    func_000549D0(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056040);

void func_00056060(s32 arg0) {
    func_00054B30(arg0 - 0x3C);
}

void func_0005607C(s32 arg0) {
    func_00054E88(arg0 - 0x3C);
}

void func_00056098(s32 arg0) {
    func_00055038(arg0 - 0x3C);
}

void func_000560B4(s32 arg0) {
    func_00055080(arg0 - 0x3C);
}

void func_000560D0(s32 arg0) {
    func_00055134(arg0 - 0x3C);
}

void func_000560EC(s32 arg0) {
    func_0005529C(arg0 - 0x3C);
}

void func_00056108(s32 arg0) {
    func_000553B0(arg0 - 0x3C);
}

void func_00056124(s32 arg0) {
    func_000553D0(arg0 - 0x3C);
}

void func_00056140(s32 arg0) {
    func_000553F0(arg0 - 0x3C);
}

void func_0005615C(s32 arg0, s32 arg1) {
    func_00055424(arg0 - 0x3C, arg1);
}

void func_00056178(s32 arg0, s32 arg1) {
    func_000554A0(arg0 - 0x3C, arg1);
}

void func_00056194(s32 arg0) {
    func_000554BC(arg0 - 0x3C);
}

void func_000561B0(s32 arg0) {
    func_000554F4(arg0 - 0x3C);
}

void func_000561CC(s32 arg0) {
    func_00055510(arg0 - 0x3C);
}

void func_000561E8(s32 arg0, s32 *arg1) {
    func_00055618(arg0 - 0x3C, arg1);
}

void func_00056204(s32 arg0) {
    func_00055678(arg0 - 0x3C);
}

void func_00056220(s32 arg0) {
    func_000557AC(arg0 - 0x3C);
}

void func_0005623C(s32 arg0) {
    func_000557CC(arg0 - 0x3C);
}

void func_00056258(s32 arg0) {
    func_000558D4(arg0 - 0x3C);
}

void func_00056274(s32 arg0) {
    func_000558FC(arg0 - 0x3C);
}

void func_00056290(s32 arg0) {
    func_000559C4(arg0 - 0x3C);
}

void func_000562AC(s32 arg0) {
    func_00055CAC(arg0 - 0x40);
}

s32 func_000562C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1444);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000562D0);

s32 func_000562EC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000562F4);

s32 func_00056310(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056318);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056334);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005640C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000564E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056560);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000565DC);

void func_00056660(void) {
    func_00069D30();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005667C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000566F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056704);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3B98);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3BC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000567E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056A8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056B08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056B18);

void func_00056BD4(s32 arg0) {
    func_00056560(arg0 - 0x3C);
}

void func_00056BF0(s32 arg0) {
    func_000565DC(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056C0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056C68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056CC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056CF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056D24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056D64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056DC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056E7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056F6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00056F88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00057530);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005757C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00057630);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000576B4);

void func_000577C0(s32 arg0) {
    func_00056CF4(arg0 - 0x3C);
}

void func_000577DC(s32 arg0) {
    func_00056D24(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000577F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00057858);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000578B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00057910);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00057968);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000579C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00057A24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00057B04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00057BF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00057C10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000581A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000581EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000582A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00058324);

void func_00058430(s32 arg0) {
    func_00057910(arg0 - 0x3C);
}

void func_0005844C(s32 arg0) {
    func_00057968(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00058468);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00058844);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00058C20);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00058DC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00058F60);

void func_00059114(s32 arg0) {
    func_0005C480(arg0 + 0x630);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059130);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059270);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059328);

s32 func_000593C0(void) {
    return 2;
}

s32 func_000593C8(void) {
    return 0;
}

s32 func_000593D0(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x8C;
    func_00061094(temp_s1);
    if (M2C_FIELD(arg0, s32 *, 0x26C) != 0) {
        func_0006102C(arg0 + 0xB4, 0x20100000);
        func_000610B0(temp_s1);
        func_00060FA4((s32) (arg0 + 0xBC), 1, 0x11, -1);
    } else {
        func_000610B0(temp_s1);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005944C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059594);

s32 func_000595C8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s3;

    temp_s3 = arg0 + 0x8C;
    func_00061094(temp_s3);
    M2C_FIELD(arg0, s32 *, 0x258) = arg1;
    M2C_FIELD(arg0, s32 *, 0x25C) = arg2;
    func_0006102C(arg0 + 0xB4, 0x20040000);
    func_000610B0(temp_s3);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059634);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000596B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059720);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005978C);

s32 func_00059890(void) {
    return 0;
}

s32 func_00059898(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000598A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059960);

s32 func_00059A20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x84) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059A2C);

s32 func_00059A34(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
    return 0;
}

s32 func_00059A40(void) {
    return 0;
}

s32 func_00059A48(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059A50);

s32 func_00059DBC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059DC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00059F98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005A05C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005A0F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005A270);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005A458);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005A504);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005A5A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005A628);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005A6AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005AA14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005ADB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005AE6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005B140);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005B364);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005B5D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005B8C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005B9DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005BAA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005BB74);

void func_0005BC20(s32 arg0) {
    func_00058DC0(arg0 - 0x7C);
}

void func_0005BC3C(s32 arg0) {
    func_00058DC0(arg0 - 0x68);
}

void func_0005BC58(s32 arg0) {
    func_00058F60(arg0 - 0x7C);
}

void func_0005BC74(s32 arg0) {
    func_00058F60(arg0 - 0x68);
}

void func_0005BC90(s32 arg0) {
    func_00059130(arg0 - 0x68);
}

void func_0005BCAC(s32 arg0) {
    func_00059270(arg0 - 0x7C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005BCC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005BD0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005BD48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005BE0C);

void func_0005BED8(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005BEE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005BFD4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005C0C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005C1F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005C328);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005C480);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005C518);

s32 func_0005C7A8(void *arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = arg0 + 0x18;
    func_00061094(temp_s2);
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    func_000610B0(temp_s2);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005C7F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005C8F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005C968);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005CBE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005CCE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005CE6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005CF6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005D190);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005D1B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005D1D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005D2E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005D3D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005D6B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005D8B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005DA5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005DB74);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005DD08);

void func_0005DD98(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005DDA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005DDB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005DE6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005DED4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005DF48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005DFC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005E008);

void func_0005E070(void *arg0) {
    func_0005E0E8(arg0, M2C_FIELD(arg0, u32 *, 0x1C), M2C_FIELD(arg0, u32 *, 0x20));
}

void func_0005E090(void) {
    func_0005E204();
}

void func_0005E0AC(void *arg0, u32 arg1) {
    func_0005E0E8(arg0, M2C_FIELD(arg0, u32 *, 0x18), arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005E0CC);

void func_0005E0D8(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005E0E0);

s32 func_0005E0E8(void *arg0, u32 arg1, u32 arg2) {
    s32 var_a1;
    u32 temp_a2;
    u32 temp_v0;

    var_a1 = arg2 - arg1;
    if (func_0005E0E0() != 0) {
        temp_v0 = M2C_FIELD(arg0, u32 *, 0x28);
        temp_a2 = M2C_FIELD(arg0, u32 *, 0x24);
        var_a1 = (arg1 < temp_v0) ? (temp_v0 - arg1) : 0;
        if (temp_a2 < arg2) {
            var_a1 += arg2 - temp_a2;
        }
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005E158);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005E1C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005E204);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005E298);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005E2D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005E308);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005E724);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EADC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EAEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EB14);

s32 func_0005EB20(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 8);
    } else {
        var_v1 = 6;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EB40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EB68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EB90);

s32 func_0005EBC4(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    } else {
        var_a2 = 1;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EBEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EC64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005ED5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EE0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EE64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005EEF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005F004);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005F484);

s32 func_0005F7A4(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005F7AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005F7C8);

s32 func_0005F830(void) {
    return 1;
}

s32 func_0005F838(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 6;
    if (((arg2 == NULL) | (arg1 != 1)) == 0) {
        *arg2 = arg0 + 0xA8C44;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_0005F86C(void **arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {

    } else {
        var_v0 = M2C_FIELD(*arg0, s32 (**)(), 0x20)();
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005F8A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005F8A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005F8F8);

s32 func_0005F938(void) {
    return 1;
}

void func_0005F940(void) {
}

void func_0005F948(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005F950);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005FAC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005FB58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005FBEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005FC50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005FD20);

s32 func_0005FE0C(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s3;
    void *temp_v0;

    temp_s2 = arg0 + 0x1C;
    var_s3 = 0;
    func_00061094(temp_s2);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    temp_a0 = temp_v1 - 1;
    if ((temp_a0 != M2C_FIELD(arg0, s32 *, 0x14)) && ((temp_v1 != 0) || (M2C_FIELD(arg0, s32 *, 0x18) != 1))) {
        M2C_FIELD(arg0, s32 *, 4) = temp_a0;
        var_s3 = 1;
        if (temp_a0 < 0) {
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 1);
        }
        temp_v0 = (M2C_FIELD(arg0, s32 *, 4) * 0x10) + M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(temp_v0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
        M2C_FIELD(temp_v0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(temp_v0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
        M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
        func_000612DC(M2C_FIELD(arg0, s32 *, 0xC), 1);
    }
    func_000610B0(temp_s2);
    func_00061BC0(1);
    return var_s3;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005FEEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005FFB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0005FFF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060060);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000600CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006010C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006014C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060194);

void func_000601FC(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060204);

void func_0006028C(void) {
}

void func_00060294(s32 arg0, M2C_UNK arg1, s32 arg2) {
    func_0006094C(arg1, arg0, arg2 & 0xFFFF);
}

void func_000602BC(s32 arg0, M2C_UNK arg1) {
    func_000609A8(arg1, arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000602E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000602F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060300);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060328);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060340);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060358);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000603B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060408);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060474);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060504);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006054C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060640);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060800);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000608AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006094C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000609A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060A64);

void func_00060A90(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060A98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060B44);

s32 func_00060BFC(void *arg0) {
    func_00061C24(M2C_FIELD(arg0, s32 *, 8));
    return 1;
}

s32 func_00060C1C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060C24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060C44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060C7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060CB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060CEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060D24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060D70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060DBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060E18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060E58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060E98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060ED8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060F18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060F40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060F68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060FA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00060FE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006102C);

s32 func_0006104C(void *arg0, M2C_UNK arg1) {
    return func_00061304(M2C_FIELD(arg0, s32 *, 4), ~arg1) == 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061070);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061094);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000610B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000610CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000610FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006112C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006115C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006118C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000611B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000611DC);

void func_00061218(void) {
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3D28);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3D80);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3DE0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3E38);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3E44);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3E50);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3E5C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3E68);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3E74);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3E80);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3E8C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3E98);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3EB0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3EB4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3EB8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3EBC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3EC0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3EC4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3ED0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3F30);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3F58);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3F60);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3F6C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3F78);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3F84);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3F94);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FA0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FB8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FC8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FCC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FD0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FD4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FD8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FDC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FE0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FE4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FE8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FEC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FF0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FF4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FF8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B3FFC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4000);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4004);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4010);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4060);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4070);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4080);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B40A0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B40B8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B40C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B40E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B40F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061220);

s32 func_0006126C(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    temp_v0 = sceKernelCreateEventFlag(arg1, 0x200, 0, 0);
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -5;
}

s32 func_000612B4(s32 arg0) {
    return (sceKernelDeleteEventFlag(arg0) == 0) ? 0 : -5;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000612DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061304);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006132C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061378);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000613F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061438);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000614DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006152C);

s32 func_00061580(s32 arg0) {
    return (sceKernelDeleteSema(arg0) == 0) ? 0 : -5;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000615A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000615D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006161C);

s32 func_00061658(s32 arg0) {
    return (sceKernelSignalSema(arg0, 1) == 0) ? 0 : -5;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061680);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000616C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061758);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061780);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061888);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000618FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000619A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000619FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061A38);

s32 func_00061B08(void) {
    sceKernelDelayThread(1);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061B28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061BC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061BEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061C24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061CD8);

void func_00061D54(void) {
    func_00061CD8(1, 0xFFFF);
}

void func_00061D74(void) {
    func_00061CD8(0, 0xFFFF);
}

s32 func_00061D94(void) {
    s32 *temp_v0;
    s32 var_v1;

    temp_v0 = func_00061EF4();
    var_v1 = 0;
    if (temp_v0 != NULL) {
        var_v1 = *temp_v0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061DC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061E44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061EF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061F3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061F54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061F64);

void func_00061F8C(void *arg0, M2C_UNK **arg1, M2C_UNK *arg2) {
    M2C_UNK *temp_v1;

    if ((arg1 != NULL) & (arg2 != NULL)) {
        if (arg1 == M2C_FIELD(arg0, M2C_UNK **, 8)) {
            M2C_FIELD(arg0, M2C_UNK **, 8) = arg2;
        }
        temp_v1 = *arg1;
        *arg1 = arg2;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
        *arg2 = temp_v1;
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00061FCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00062010);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00062024);

void func_00062098(void *arg0, s32 *arg1) {
    s32 temp_s2;

    temp_s2 = arg0 + 0xC;
    func_00061094(temp_s2);
    func_00061F8C(arg0, M2C_FIELD(arg0, s32 ***, 8), arg1);
    func_000610B0(temp_s2);
}

void func_000620F0(void *arg0, s32 *arg1) {
    s32 temp_s2;

    temp_s2 = arg0 + 0xC;
    func_00061094(temp_s2);
    func_00061F8C(arg0, arg0 + 4, arg1);
    func_000610B0(temp_s2);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00062148);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000621E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000623B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006257C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00062644);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006270C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000627DC);

void func_000627E8(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000627F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00062938);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00062A0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00062AE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00062B9C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4104);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4118);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4120);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4130);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4140);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B414C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B415C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4178);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4194);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B41B0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B41CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B41E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4204);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00062BE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00062E90);

s32 func_00062FAC(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;
    s32 temp_s4;
    void **temp_a0;
    void **temp_v0;

    temp_s4 = arg0 + 0x60;
    func_00061094(temp_s4);
    temp_s0 = func_0006506C(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = M2C_FIELD(arg0, void ***, 0x50);
            M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, s32), 0xC)(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0x130));
            temp_a0 = M2C_FIELD(arg0, void ***, 0x50);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0xC)(temp_a0, 1, M2C_FIELD(arg0, s32 *, 0x140));
        }
    }
    func_000610B0(temp_s4);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00063074);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000631B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00063314);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00063448);

s32 func_0006368C(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xB0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0xC0);
}

s32 func_000636A8(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xB0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 0xC);
    }
    return M2C_FIELD(arg0, s32 *, 0xC4);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000636C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00063750);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00063814);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006388C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00063F50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00063FCC);

s32 func_00063FF8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    return 0;
}

s32 func_00064004(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_00060294((s32) temp_s0, arg1 + 0x94, 0);
    func_00060294((s32) temp_s0, arg1 + 0xA8, 3);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00064060);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006408C);

s32 func_00064098(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000640A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00064180);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00064638);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000646FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006476C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006479C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00064AE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00064D7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006506C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00065250);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00065390);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00065444);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00065908);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00065A84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00065C24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00065D50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00065F7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00065FC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006603C);

void func_00066260(s32 arg0) {
    func_00062644(arg0 - 0x3C);
}

void func_0006627C(s32 arg0) {
    func_0006270C(arg0 - 0x3C);
}

void func_00066298(s32 arg0) {
    func_00062938(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000662B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000664F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006656C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000665E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00066744);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000668A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00066938);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000669CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00066A68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00066A74);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00066ABC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00066E74);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00066EA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00066F70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067040);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000671CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067394);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000673AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000674B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006757C);

s32 func_0006758C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067594);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067678);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000676E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067838);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067884);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000678D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006791C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067990);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067A30);

void func_00067B90(s32 arg0) {
    func_00066938(arg0 - 0x3C);
}

void func_00067BAC(s32 arg0) {
    func_000669CC(arg0 - 0x3C);
}

void func_00067BC8(s32 arg0) {
    func_00066E74(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067BE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067D10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067E3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067EE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00067F84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00068030);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006803C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000680C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000682F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00068360);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000683F0);

s32 func_0006854C(void *arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = arg0 + 0x4C;
    func_00061094(temp_s2);
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
    func_000610B0(temp_s2);
    return 0;
}

s32 func_0006859C(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x4C;
    func_00061094(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x5C) = 0;
    func_000610B0(temp_s1);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000685E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00068630);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00068914);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00068994);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000689F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00068AC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00068B40);

void func_00068B68(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_00060294((s32) temp_s0, arg1 + 0xEC, 2);
    func_00060294((s32) temp_s0, arg1 + 0x100, 3);
}

void func_00068BC0(s32 arg0) {
    func_00067EE0(arg0 - 0x3C);
}

void func_00068BDC(s32 arg0) {
    func_00067F84(arg0 - 0x3C);
}

void func_00068BF8(s32 arg0) {
    func_000682F0(arg0 - 0x3C);
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4240);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4244);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4250);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4280);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4290);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B42A0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B42B0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B42C0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B42CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B42E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4310);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4320);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4330);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B433C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B434C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4368);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00068C14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00068F6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069060);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069154);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006925C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000692A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069390);

s32 func_000693F0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000693F8);

s32 func_00069448(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_00061094(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000610B0(temp_s1);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006948C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000694C4);

s32 func_00069548(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x590) = arg1;
    return 0;
}

s32 func_00069554(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_00060294((s32) (arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069580);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000695A8);

s32 func_00069608(void) {
    return 0;
}

s32 func_00069610(void) {
    return 0;
}

s32 func_00069618(void) {
    return 0;
}

s32 func_00069620(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x44);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x1C)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006964C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069700);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069758);

void func_00069764(s32 arg0) {
    func_00069060(arg0 - 0x3C);
}

void func_00069780(s32 arg0) {
    func_00069154(arg0 - 0x3C);
}

void func_0006979C(s32 arg0) {
    func_00069390(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000697B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069998);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069B78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069C04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069C90);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069D24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069D30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00069D78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A088);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A0AC);

s32 func_0006A0F4(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = arg0 + 0x48;
    func_00061094(temp_s2);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    func_0006A300(arg0);
    temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x30)(arg0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 0x2C)(arg0, 0);
    func_000610B0(temp_s2);
    return temp_s1;
}

s32 func_0006A174(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_00061094(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x50) = 0;
    func_000610B0(temp_s1);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A1B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A20C);

s32 func_0006A2D4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_00060294((s32) (arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A300);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A358);

void func_0006A73C(s32 arg0) {
    func_00069C04(arg0 - 0x3C);
}

void func_0006A758(s32 arg0) {
    func_00069C90(arg0 - 0x3C);
}

void func_0006A774(s32 arg0) {
    func_0006A088(arg0 - 0x3C);
}

void func_0006A790(void) {
}

s32 func_0006A798(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A7A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A800);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A860);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A8EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006A978);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006AA0C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B43E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4440);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4450);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4460);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4470);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B447C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4488);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B448C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4490);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4494);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4498);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B449C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B44A0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B44A4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B44A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B44AC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B44B0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B44B4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B44C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4518);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B452C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006ABB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006AF7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006AFCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006AFDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B058);

void func_0006B0D0(s32 arg0) {
    func_0006A8EC(arg0 - 0x3C);
}

void func_0006B0EC(s32 arg0) {
    func_0006A978(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B108);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B180);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B1F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B250);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B2A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B308);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4550);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B388);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B5CC);

void func_0006B898(s32 arg0) {
    func_0006B250(arg0 - 0x3C);
}

void func_0006B8B4(s32 arg0) {
    func_0006B2A8(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B8D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B910);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B950);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B980);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B9B0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B45B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006B9F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006BB0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006BD68);

void func_0006BDB8(s32 arg0) {
    func_0006B980(arg0 - 0x3C);
}

void func_0006BDD4(s32 arg0) {
    func_0006B9B0(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006BDF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006BF68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C14C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C1B8);

s32 func_0006C22C(void *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x220);
    if (var_v0 == 0) {
        func_0006FBE8(M2C_FIELD(arg0, s32 *, 0x44));
        var_v0 = M2C_FIELD(arg0, s32 *, 0x220);
    }
    return var_v0;
}

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4618);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C264);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C3EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C6F0);

void func_0006C74C(s32 arg0) {
    func_0006C14C(arg0 - 0x3C);
}

void func_0006C768(s32 arg0) {
    func_0006C1B8(arg0 - 0x3C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C784);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C7CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C814);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C83C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C864);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C89C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C8EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C920);

s32 func_0006C954(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
    return 0;
}

s32 func_0006C964(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x40) = 0;
    return 0;
}

s32 func_0006C970(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
    return 0;
}

void func_0006C97C(void *arg0, M2C_UNK arg1) {
    func_0006EF1C(M2C_FIELD(arg0, s32 *, 0x3C), func_00070F60(arg1));
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006C9B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006CA68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006CD10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006CF0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006D1D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006D4A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006D778);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006D7A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006DA8C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4670);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4698);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B46E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B46F4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4708);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4720);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B472C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4738);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006DB48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006E62C);

s32 func_0006E800(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 2;
    if (M2C_FIELD(arg0, s32 *, 0xA8) == 0) {
        M2C_FIELD(arg0, s32 *, 0xA8) = arg1;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006E81C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006E954);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006EA08);

s32 func_0006ED10(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x209) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006ED1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006ED38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006ED70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006EDA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006EDF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006EE38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006EE90);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006EECC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006EF1C);

s32 func_0006EF60(void *arg0) {
    func_00070E98(M2C_FIELD(arg0, s32 *, 0xAC));
    return 0;
}

s32 func_0006EF80(void *arg0) {
    func_00071808(M2C_FIELD(arg0, s32 *, 0xAC));
    return 0;
}

void func_0006EFA0(void *arg0) {
    func_0006EF80(arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006EFBC);

s32 func_0006F7EC(void *arg0) {
    s32 var_s1;
    s32 var_s1_2;
    u32 var_s2;
    u32 var_s2_2;

    var_s2 = 0;
    var_s1 = M2C_FIELD(arg0, s32 *, 0xF4);
    if (M2C_FIELD(arg0, u32 *, 0x39C) == 0) {

    } else {
        do {
            func_0007002C(arg0, var_s1);
            var_s2 += 1;
            var_s1 += 0x70;
        } while (var_s2 < (u32) M2C_FIELD(arg0, u32 *, 0x39C));
    }
    var_s1_2 = M2C_FIELD(arg0, s32 *, 0x1B0);
    var_s2_2 = 0;
    if (M2C_FIELD(arg0, u32 *, 0x3A0) != 0) {
        do {
            func_0007004C(arg0, var_s1_2);
            var_s2_2 += 1;
            var_s1_2 += 0x24;
        } while (var_s2_2 < (u32) M2C_FIELD(arg0, u32 *, 0x3A0));
    }
    func_0007013C(arg0 + 0xB4);
    func_0007013C(arg0 + 0x170);
    return 0;
}

s32 func_0006F8A0(void *arg0) {
    func_0006C8EC(M2C_FIELD(arg0, s32 *, 0xA8), M2C_FIELD(arg0, s32 *, 0xAC));
    return 0;
}

s32 func_0006F8C4(void *arg0) {
    func_0006C920(M2C_FIELD(arg0, s32 *, 0xA8));
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006F8E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006F9EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FAA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FAD4);

void func_0006FB00(void *arg0) {
    func_000722AC(M2C_FIELD(arg0, s32 *, 0xAC));
}

s32 func_0006FB1C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1BC);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FB24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FBA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FBE8);

void func_0006FC14(void *arg0) {
    func_000722BC(M2C_FIELD(arg0, s32 *, 0xAC));
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FC30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FCBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FD48);

s32 func_0006FE08(void *arg0) {
    s32 var_a0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x244);
    var_a0 = 0;
    if (M2C_FIELD(temp_v1, u8 *, 8) != 0) {
        var_a0 = M2C_FIELD(temp_v1, u8 *, 9) != 0;
    }
    return var_a0;
}

s32 func_0006FE28(void) {
    return ~func_0006FE5C() != 0;
}

s32 func_0006FE4C(void *arg0) {
    return ~M2C_FIELD(arg0, s32 *, 0x23C) != 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FE5C);

s32 func_0006FE64(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x23C);
}

void func_0006FE6C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x238) = arg1;
}

void func_0006FE74(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x23C) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FE7C);

s32 func_0006FEF8(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00073690(M2C_FIELD(arg0, s32 *, 0xAC), 1, arg1) == 0) {
        var_v1 = 1;
        *arg1 += 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FF44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0006FF8C);

void func_0006FFF4(void *arg0) {
    func_000722F4(M2C_FIELD(arg0, s32 *, 0xAC));
}

void func_00070010(void *arg0) {
    func_0007230C(M2C_FIELD(arg0, s32 *, 0xAC));
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007002C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007004C);

s32 func_0007006C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x248);
}

s32 func_00070074(void *arg0) {
    return func_00071538(M2C_FIELD(arg0, s32 *, 0xAC)) == 0;
}

s32 func_00070094(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x254) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000700A0);

void func_000700B0(s32 arg0) {
    func_0006D1D8(arg0 - 0xA4);
}

void func_000700CC(s32 arg0) {
    func_0006D1D8(arg0 - 0x68);
}

void func_000700E8(s32 arg0) {
    func_0006D4A4(arg0 - 0xA4);
}

void func_00070104(s32 arg0) {
    func_0006D4A4(arg0 - 0x68);
}

void func_00070120(s32 arg0) {
    func_0006DB48(arg0 - 0x68);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007013C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007020C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000702D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000703F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00070564);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000705EC);

s32 func_0007067C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00070684);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000706A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000707E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000708BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00070944);

s32 func_00070998(s32 *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (arg0 != NULL) {
        func_00073A80();
        scePaf_4729E549(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

void func_000709D4(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000709DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00070E98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00070F60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00071538);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00071808);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00071B28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00071D68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00071DAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000720A0);

void *func_0007229C(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x1D4) == 0) ? NULL : (arg0 + 0xD4);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000722AC);

s32 func_000722B4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000722BC);

s32 func_000722C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x84) + M2C_FIELD(arg0, s32 *, 0x2C);
}

s16 func_000722D4(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x64);
}

s16 func_000722DC(void *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x62);
}

s32 func_000722E4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 func_000722EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000722F4);

u16 func_000722FC(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0xC0);
}

s32 func_00072304(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007230C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00072314);

s32 func_00072368(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00072370);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00072384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007250C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000725A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00072678);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00072764);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000727C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007285C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00072A84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00072DBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00072F6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073050);

void func_00073188(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_v1 + 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000731A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000733A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073450);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000734FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073554);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073690);

s32 func_000736AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x88);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000736B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000738AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000738DC);

s32 func_0007390C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C) == 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007391C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007397C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007398C);

s32 func_000739B4(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x38);
    }
    return var_v1;
}

s32 func_000739DC(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x84);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000739EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073A80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073ADC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073AFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073CD0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073D4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073DC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073E34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073EC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00073FF4);

s32 func_000740D8(void **arg0) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v1 = (func_0007446C(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 8)) == 0) ? 0 : 0x80618006;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074118);

s32 func_00074160(void **arg0) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = 0x80610103;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        var_v1 = (func_00074498(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 8)) == 0) ? 0 : 0x80618006;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000741A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000742AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074334);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000743C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007446C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074498);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000744DC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B47F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4850);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4854);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007452C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007484C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007486C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000748A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000748E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074920);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007495C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074998);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000749D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074A18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074A58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074A98);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074AD8);

void func_00074DEC(void) {
    func_00075144();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074E08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00074F60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075144);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075218);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075244);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000752B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000752D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075428);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000754D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075590);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075648);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075830);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007587C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000758B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075910);

void func_000759B0(void) {
    scePaf_CB4C96CE();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000759CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075A80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075AFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00075FE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076088);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000760B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007614C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076178);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000761A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000761B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000761C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000761EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076238);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076288);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000762BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000765EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076720);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076754);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000767C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076824);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007688C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076DA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076DD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076E10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076E3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076E68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076E94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076EC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00076EEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000770D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000771F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077278);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077308);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077340);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077378);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000773B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000773E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077420);

s32 func_0007747C(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        var_v1 = func_00079688(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000774A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000774E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007751C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077548);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007758C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000775B8);

s32 func_000775E4(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        var_v1 = func_000799C0(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077610);

s32 func_0007763C(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        var_v1 = func_00079AC0(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077668);

s32 func_00077694(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        var_v1 = func_00079B74(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000776C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000776EC);

s32 func_00077718(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        var_v1 = func_00079C58(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077744);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077770);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007779C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000777C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000777F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077820);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007784C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007787C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000778AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000778DC);

s32 func_0007790C(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        var_v1 = func_0007A2B0(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077938);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077964);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077990);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000779BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077A30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077A5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077AB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077B04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077B58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077BAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077BE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077C1C);

s32 func_00077C54(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        var_v1 = func_0007AAC0(arg0, arg1);
    }
    return var_v1;
}

s32 func_00077C80(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        var_v1 = func_0007AB0C(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077CAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077CD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077D10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077D4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077D78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077DA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077DD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077E10);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077E3C);

s32 func_00077E68(void **arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = 4;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        if (temp_v0 != NULL) {
            var_v1 = func_0007AFDC(temp_v0, arg1);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077EA0);

s32 func_00077ED8(void **arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_v0;

    var_v1 = 4;
    if (arg0 != NULL) {
        temp_v0 = *arg0;
        if (temp_v0 != NULL) {
            var_v1 = func_0007B038(temp_v0, arg1);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077F10);

s32 func_00077F48(s32 **arg0) {
    s32 *temp_v0;
    s32 var_v1;

    temp_v0 = func_00080C20(8);
    var_v1 = 1;
    *arg0 = temp_v0;
    if (temp_v0 != NULL) {
        *temp_v0 = 0;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_00077F88(void) {
    func_00080F50();
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00077FA8);

s32 func_00077FF0(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a1 != -1) {
        M2C_FIELD(arg0, s32 *, 0) = temp_a1;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007800C);

s32 func_00078030(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) == 2;
}

s32 func_00078040(s32 *arg0) {
    return *arg0 == 2;
}

s32 func_00078050(s32 *arg0) {
    return *arg0 == 9;
}

s32 func_00078060(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00078068);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000780B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000783E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000785CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00078688);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007879C);

s32 func_000787E4(void **arg0) {
    s32 var_v1;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0) != 0) {
        var_v1 = (M2C_FIELD(temp_a0, s32 *, 0xC) != 0) ? 0 : 0x2003;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00078804);

void func_00078864(void) {
    func_00082394();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00078880);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00078944);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000789DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00078A78);

s32 func_00078AE4(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v0;

    temp_v0 = func_00095170(arg0 + 0x180);
    if (temp_v0 == 0) {
        if (*arg2 != 0) {
            *arg1 += 1;
        }
    }
    return ((temp_v0 ^ 7) != 0) ? temp_v0 : 0x2003;
}

s32 func_00078B44(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = func_00092258(arg0 + 0x180);
    var_a1 = 0x2003;
    if (temp_v0 != 7) {
        var_a1 = ((((u32) (temp_v0 - 0x1018) < 2U) | (temp_v0 == 0x101B)) == 0) ? temp_v0 : 8;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00078B90);

s32 func_00078C20(s32 arg0, void *arg1) {
    s32 temp_a1;
    s32 var_a0;
    void *temp_a1_2;
    void *temp_v1;

    temp_a1 = M2C_FIELD(arg1, s32 *, 4);
    var_a0 = 0;
    if (temp_a1 != arg0) {
        if (((temp_a1 == 0x656E6376) | (temp_a1 == 0x656E6361)) != 0) {
            temp_a1_2 = M2C_FIELD(arg1, void **, 0x30);
            if (temp_a1_2 != NULL) {
                temp_v1 = M2C_FIELD(temp_a1_2, void **, 0xC);
                var_a0 = ((M2C_FIELD(temp_v1, u8 *, 8) << 0x18) | (M2C_FIELD(temp_v1, u8 *, 9) << 0x10) | (M2C_FIELD(temp_v1, u8 *, 0xA) << 8) | M2C_FIELD(temp_v1, u8 *, 0xB)) == arg0;
            }
        }
    } else {
        var_a0 = 1;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00078CB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007928C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000793A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000794C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000794F8);

s32 func_00079554(void **arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0xC) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(temp_a0, s32 *, 0x20);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079578);

s32 func_000795C8(void **arg0, u16 *arg1) {
    s32 var_v1;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v1 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(temp_a0, u16 *, 8);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000795EC);

s32 func_00079688(void *arg0, M2C_UNK arg1) {
    scePaf_3308156F(arg1, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 8));
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000796B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079720);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007977C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000797F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007989C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000798F4);

s32 func_000799C0(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if ((M2C_FIELD(arg0, s32 *, 0x7C) != 0) && (M2C_FIELD(arg0, s32 *, 0x84) != 0)) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x90);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000799EC);

s32 func_00079AC0(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0xA0) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0xB4);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079AE0);

s32 func_00079B74(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0xD8);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079B94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079BE4);

s32 func_00079C58(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2003;
    if (M2C_FIELD(arg0, s32 *, 0x194) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x1A0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079C78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079CC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079D68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079DC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079E38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079E88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079EB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079F0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00079FC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A070);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A120);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A1E8);

s32 func_0007A2B0(void *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 == 0) {
        *arg1 = 0;
    } else {
        *arg1 = scePaf_C1B0AA0D(temp_v0) + 1;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A2F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A330);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A458);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A498);

s32 func_0007A574(void *arg0, s32 *arg1) {
    s32 var_a2;
    u16 temp_v1;

    var_a2 = 0x2003;
    temp_v1 = M2C_FIELD(arg0, u16 *, 0);
    if (temp_v1 >= 0xAU) {
        if (temp_v1 != 0xA) {
            func_00078688(arg1, M2C_FIELD(arg0, s32 **, 0xC), temp_v1 - 0xA);
        }
        var_a2 = 0;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A5BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A620);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A6F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A81C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A95C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007A9EC);

s32 func_0007AA8C(void **arg0, s32 *arg1) {
    s32 var_a2;
    void *temp_a0;

    temp_a0 = *arg0;
    var_a2 = 0x2003;
    if (M2C_FIELD(temp_a0, s32 *, 0xA8) != 0) {
        var_a2 = 0x2002;
        if (M2C_FIELD(temp_a0, s32 *, 0xC4) != 0) {
            var_a2 = 0;
            *arg1 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 0xD0), s32 *, 0xC);
        }
    }
    return var_a2;
}

s32 func_0007AAC0(void *arg0, s32 *arg1) {
    s32 var_t0;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = M2C_FIELD(arg0, void **, 0x30);
    var_t0 = 0x2003;
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, void **, 0xC);
        var_t0 = 0;
        *arg1 = (M2C_FIELD(temp_v1, u8 *, 8) << 0x18) | (M2C_FIELD(temp_v1, u8 *, 9) << 0x10) | (M2C_FIELD(temp_v1, u8 *, 0xA) << 8) | M2C_FIELD(temp_v1, u8 *, 0xB);
    }
    return var_t0;
}

s32 func_0007AB0C(void *arg0, s32 *arg1) {
    s32 var_a0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x30);
    var_a0 = 0x2003;
    if ((temp_v1 != NULL) && (M2C_FIELD(temp_v1, s32 *, 8) != 0)) {
        var_a0 = 0;
        *arg1 = M2C_FIELD(temp_v1, s32 *, 0);
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007AB38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007ABE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007AC34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007ACA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007AD24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007ADC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007AE50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007AECC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007AF64);

s32 func_0007AFDC(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 9;
    if (M2C_FIELD(arg0, s32 *, 0x108) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x110);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007AFFC);

s32 func_0007B038(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 9;
    if (M2C_FIELD(arg0, s32 *, 0x108) != 0) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x118);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B058);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B094);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B0E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B134);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B184);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B1D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B230);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B2DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B328);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B374);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B3C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B414);

s32 func_0007B574(void *arg0) {
    s32 var_v1;

    var_v1 = 2;
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B594);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B7D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007B9A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007BB0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007BC64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007BDC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007C0F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007C41C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007C730);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007CC18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007CDD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007CF24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007D074);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007D3E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007D5F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007DA20);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007DD50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007DF4C);

void func_0007E4AC(void *arg0, M2C_UNK arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
}

void func_0007E4F4(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007E53C);

void func_0007E5FC(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_0007B2DC(temp_v0, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_0007B414(arg0 + 8, 1, arg1);
        func_0007B414(arg0 + 9, 3, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    }
}

void func_0007E67C(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_0007B2DC(temp_v0, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_0007B414(arg0 + 8, 1, arg1);
        func_0007B414(arg0 + 9, 3, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007E72C);

void func_0007E7E0(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_0007B2DC(temp_v0, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_0007B414(arg0 + 8, 1, arg1);
        func_0007B414(arg0 + 9, 3, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007E860);

void func_0007E918(void *arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 == 0) {

    } else {
        func_0007B2DC(temp_a0, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
        func_0007B414(arg0 + 8, 1, arg1);
        func_0007B414(arg0 + 9, 3, arg1);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
        if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 0) != 0) {
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
        }
        if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 1) != 0) {
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
        }
        if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 3) != 0) {
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
        }
        if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 4) != 0) {
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x20), arg1);
        }
        if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 5) != 0) {
            func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x24), arg1);
        }
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007EA50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007EBEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007EC64);

void func_0007ECEC(void *arg0) {
    if (arg0 != NULL) {
        func_0007ED20(M2C_FIELD(arg0, s32 *, 0x38));
        func_00080F50(arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007ED20);

s32 func_0007ED7C(void *arg0) {
    u32 var_s2;
    void *temp_s0;

    var_s2 = 0;
    if (M2C_FIELD(arg0, u32 *, 8) == 0) {

    } else {
        do {
            if (func_000815B8(arg0, var_s2) != NULL) {
                temp_s0 = func_000815B8(arg0, var_s2);
                if (M2C_FIELD(temp_s0, s32 *, 0x29C) != (func_000815B8(arg0, var_s2) + 0x180)) {
                    func_000A4400(M2C_FIELD(func_000815B8(arg0, var_s2), s32 *, 0x29C));
                }
                M2C_FIELD(func_000815B8(arg0, var_s2), s32 *, 0x29C) = 0;
            }
            var_s2 += 1;
        } while (var_s2 < (u32) M2C_FIELD(arg0, u32 *, 8));
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007EE40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007EEB4);

void func_0007EF3C(void *arg0) {
    u32 var_s1;

    M2C_FIELD(arg0, s32 *, 0) = 8;
    var_s1 = 0;
    func_0007EFF4(arg0 + 8);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8));
    if (M2C_FIELD(arg0, u32 *, 0x34) == 0) {

    } else {
        do {
            if (func_0007F32C(arg0, var_s1) != NULL) {
                func_0007F0B8(func_0007F32C(arg0, var_s1));
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + *func_0007F32C(arg0, var_s1));
            }
            var_s1 += 1;
        } while (var_s1 < (u32) M2C_FIELD(arg0, u32 *, 0x34));
    }
}

void func_0007EFF4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0x10;
    if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 0) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 8);
    }
    if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 1) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
    if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 3) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
    if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
    if (func_000829BC(M2C_FIELD(arg0, u8 *, 0xB), 5) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 4);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F0B8);

s32 func_0007F190(void *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0x500F;
    if (((arg0 == NULL) | (arg1 == 0)) == 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x34);
        if (var_v0 == 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = arg1;
        } else {
            M2C_FIELD(func_0007F32C(arg0, var_v0 - 1), s32 *, 0x20) = arg1;
            var_v0 = M2C_FIELD(arg0, s32 *, 0x34);
        }
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (var_v0 + 1);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F204);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F28C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F32C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F374);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F408);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F450);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F578);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F6AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F724);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F7BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007F878);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007FAE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007FB70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007FBA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007FE48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007FE94);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0007FEFC);

s32 func_0007FFE8(void *arg0, u32 arg1, s32 *arg2) {
    s32 var_a3;

    var_a3 = 0x500F;
    if (arg0 != NULL) {
        var_a3 = 0x5012;
        if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x18)) {
            var_a3 = 0;
            *arg2 = M2C_FIELD(M2C_FIELD(((arg1 * 4) + arg0), void **, 0x1C), s32 *, 0x3C);
        }
    }
    return var_a3;
}

s32 func_00080020(void *arg0, u32 arg1, s32 *arg2) {
    s32 var_a3;

    var_a3 = 0x500F;
    if (arg0 != NULL) {
        var_a3 = 0x5012;
        if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x18)) {
            var_a3 = 0;
            *arg2 = M2C_FIELD(M2C_FIELD(((arg1 * 4) + arg0), void **, 0x1C), s32 *, 0x40);
        }
    }
    return var_a3;
}

s32 func_00080058(void *arg0, u32 arg1, s32 *arg2) {
    s32 var_a3;

    var_a3 = 0x500F;
    if (arg0 != NULL) {
        var_a3 = 0x5012;
        if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x18)) {
            var_a3 = 0;
            *arg2 = M2C_FIELD(M2C_FIELD(((arg1 * 4) + arg0), void **, 0x1C), s32 *, 0x14);
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00080090);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000800E0);

s32 func_00080140(s32 arg0, s32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != 0) {
        var_v1 = 0;
        *arg2 = M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x1C);
    }
    return var_v1;
}

s32 func_00080164(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x18);
    }
    return var_v1;
}

s32 func_00080180(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x220);
    }
    return var_v1;
}

s32 func_0008019C(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x14);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000801B8);

s32 func_00080204(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x500F;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x21C);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00080220);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00080914);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00080960);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00080A78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00080C20);

void func_00080C40(void) {
    scePaf_3AC3E06A();
}

s32 func_00080C5C(s32 **arg0, u32 arg1, s32 arg2) {
    s32 *temp_v0;
    s32 var_v0;

    temp_v0 = func_00080C20(arg2);
    var_v0 = 1;
    if (temp_v0 != NULL) {
        func_00078688(temp_v0, *arg0, (arg1 >= (u32) arg2) ? arg2 : (s32) arg1);
        scePaf_4729E549(*arg0);
        *arg0 = temp_v0;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00080CD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00080F50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00080F7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00080FC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008102C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00081074);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000810A0);

void func_000810FC(void) {
    func_00098D00();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00081118);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000812CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00081388);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000815B8);

s32 func_000815F8(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x2002;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 0x20);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00081614);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00081670);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008174C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008179C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008198C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00081B14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00081CD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00081D20);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00081E44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00081F68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00082060);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000820E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000821A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008231C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008233C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00082394);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000828C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000829BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000829D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00082A00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00082BF8);

void func_00082CF4(s32 *arg0) {
    func_00082D34(arg0);
    if (*arg0 == 0) {

    } else {
        func_000A4DDC(arg0);
    }
}

void func_00082D34(void *arg0) {
    if ((u32) (M2C_FIELD(arg0, s32 *, 0xDC) - 1) < 0xFU) {
        M2C_FIELD(arg0, s32 *, 0xDC) = 0x10;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA8) == 0) {

    } else {
        func_000A57D4(arg0 + 0xA8);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00082D84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00082DDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008313C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000831D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00083424);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00083484);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000834C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00083568);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000835F8);

s32 func_0008363C(u32 *arg0, u32 arg1) {
    s32 var_a2;
    u32 temp_v0;
    u32 temp_v1;

    temp_v0 = *arg0;
    temp_v1 = temp_v0 + arg1;
    var_a2 = 0x500E;
    if ((temp_v1 >= temp_v0) & (temp_v1 >= arg1)) {
        *arg0 = temp_v1;
        var_a2 = 0;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00083670);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00083720);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000838AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00083A34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00083ABC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00084240);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00084458);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00084A14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00084D7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000851B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000854B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00085704);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00085A4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00085EC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00086048);

void func_00086418(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0007B094(arg1);
}

void func_0008646C(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x28) = func_0007B094(arg1);
}

void func_00086508(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x28) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x2C) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x30) = func_0007B094(arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000865BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00086638);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000869E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00086BF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00086F24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00087474);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000875A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00087950);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00087EE0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008801C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000882CC);

void func_00088838(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0) = func_0007B134(arg1);
    M2C_FIELD(arg0, s16 *, 2) = func_0007B134(arg1);
    M2C_FIELD(arg0, s32 *, 4) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 8) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
    M2C_FIELD(arg0, s16 *, 0x10) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0x12) = func_0007B184(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_0007B0E4(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_0007B0E4(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_0007B094(arg1);
    M2C_FIELD(arg0, s16 *, 0x20) = func_0007B134(arg1);
    func_0007B1D4((s32) (arg0 + 0x22), 0x20, arg1);
    M2C_FIELD(arg0, s16 *, 0x42) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0x44) = func_0007B134(arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00088910);

void func_000889DC(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s16 *, 0xC) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0xE) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0x10) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0x12) = func_0007B184(arg1);
}

void func_00088A48(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s16 *, 0xC) = func_0007B184(arg1);
    M2C_FIELD(arg0, s16 *, 0xE) = func_0007B134(arg1);
}

void func_00088A9C(s32 arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
}

void func_00088AC0(void *arg0, s32 arg1) {
    func_0007B1D4(arg0 + 9, 3, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_0007B094(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_0007B094(arg1);
    M2C_FIELD(arg0, s16 *, 0x1C) = func_0007B134(arg1);
    M2C_FIELD(arg0, s16 *, 0x1E) = func_0007B134(arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00088B44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00088C7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00088DD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00088DEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00088E98);

s32 func_00088F64(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x2003;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x188) = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00088F7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000893E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008950C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00089578);

s32 func_000895C8(void **arg0, void **arg1) {
    s32 var_a2;
    void *temp_v0;

    temp_v0 = *arg1;
    var_a2 = 0xA;
    if (temp_v0 != NULL) {
        var_a2 = 0;
        M2C_FIELD(temp_v0, void **, 0x1C) = (void *) *arg0;
        *arg0 = *arg1;
        *arg1 = NULL;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000895F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000897C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000898BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00089CAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00089E68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008A064);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008A468);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008A658);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008A888);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008AC3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008AD54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008AE50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008B0F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008B214);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008B314);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008B680);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008B83C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008BA2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008BD88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008BF14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008C0CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008C140);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008C2C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008C538);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008C60C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008C6E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008C88C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008C9CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008CBD4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008CCF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008CD94);

void **func_0008CDE4(void **arg0) {
    void **var_a0;
    void *temp_v0;
    void *var_v1;

    var_a0 = arg0;
    var_v1 = *var_a0;
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x1C);
            var_a0 = var_v1 + 0x1C;
            var_v1 = temp_v0;
        } while (temp_v0 != NULL);
    }
    return var_a0;
}

void *func_0008CE08(void *arg0) {
    void *temp_v0;
    void *var_a0;
    void *var_v1;

    var_a0 = arg0;
    var_v1 = M2C_FIELD(var_a0, void **, 0x1C);
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x1C);
            var_a0 = var_v1;
            var_v1 = temp_v0;
        } while (temp_v0 != NULL);
    }
    return var_a0;
}

s32 func_0008CE2C(s32 *arg0) {
    return *arg0 + 0x1C;
}

s32 func_0008CE38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008CE44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008D068);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008D164);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008D240);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008D2AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008D5D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008D6B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008D72C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008D9E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008DDF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008DE7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008E2A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008E550);

s32 func_0008E584(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E590(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E59C(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E5A8(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E5B4(s32 *arg0) {
    return *arg0 != 0;
}

s32 func_0008E5C0(s32 *arg0) {
    return *arg0 != 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008E5CC);

s32 func_0008E63C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008E644);

s32 func_0008E6B4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_0008E6BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008E6C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008E70C);

void func_0008E754(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x20);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x24);
    }
}

void func_0008E77C(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x20);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x24);
    }
}

void func_0008E7A4(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x2C);
    }
}

void func_0008E7CC(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x2C);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008E7F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008E94C);

void func_0008E9E0(void *arg0) {
    if (arg0 != NULL) {
        func_0008EC84(arg0 + 8);
        func_0008ECF4(arg0 + 0x54);
        func_0008ED64(arg0 + 0xA8);
        func_0008EDC4(arg0 + 0xD8);
        func_0008EE24(arg0 + 0x108);
        func_0008EE8C(arg0 + 0x148);
        func_00080F50(M2C_FIELD(arg0, void **, 0x190));
        func_00080F50(arg0);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EA48);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EAA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EAF8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EB40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EB88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EBD8);

void func_0008EC28(void **arg0, void **arg1) {
    void *temp_s0;
    void *var_v0;

    var_v0 = *arg1;
    if (var_v0 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 0x1C);
            func_000895C8(arg0, arg1);
            *arg1 = temp_s0;
            var_v0 = temp_s0;
        } while (temp_s0 != NULL);
        *arg1 = NULL;
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EC84);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008ECF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008ED64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EDC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EE24);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EE8C);

s32 func_0008EEFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EF04);

s32 func_0008EFA0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008EFAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F054);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F0DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F248);

s32 func_0008F288(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 0x18) != 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x40);
    }
    return var_v1;
}

s32 func_0008F2A8(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 0x18) != 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x38);
    }
    return var_v1;
}

s32 func_0008F2C8(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x24) == 0;
    }
    return var_v1;
}

s32 func_0008F2E4(void *arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_a0;

    var_v1 = 0x2003;
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x190);
        var_v1 = 7;
        if (temp_a0 != NULL) {
            var_v1 = 0;
            *arg1 = M2C_FIELD(temp_a0, s32 *, 0x24);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F30C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F3DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F424);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F454);

s32 func_0008F5B0(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 8) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_0008F5D4(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 0xC) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F604);

s32 func_0008F648(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 4) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_0008F66C(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 4) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

s32 func_0008F690(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_v1 != 0) {
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x10) * 8) + 0x10;
        M2C_FIELD(arg0, s32 *, 0) = var_v1;
    }
    *arg1 = var_v1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F6B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F7DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F87C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F958);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008F98C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008FB6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008FC28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0008FCA4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009006C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000901B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000902F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00090450);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00090598);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00090868);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00090930);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000909EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00090AC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00090CB4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000910F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00091278);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00091328);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00091434);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000914A0);

s32 func_000916AC(s32 *arg0, s32 *arg1) {
    *arg1 = *arg0;
    return 0;
}

s32 func_000916BC(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 8);
    return 0;
}

s32 func_000916CC(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000916DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009175C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00091838);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00091908);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009199C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00092008);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00092258);

void func_0009238C(void) {
    func_000923A8();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000923A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00092898);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00092CC8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00092D58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000930A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093134);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000931BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009352C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093604);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093650);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009368C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000936C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000936FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093740);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009377C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000937C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000937FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093840);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000938F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093948);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000939B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093A1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093A70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093ADC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093B60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093B80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093C78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093CFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093DD8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093ED4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00093FA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000940A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00094148);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00094228);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009456C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000948F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00094A0C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00094C6C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00094CF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00094F5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00095170);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000951F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000952C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00095384);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000953F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009541C);

s32 func_00095448(void *arg0, s32 *arg1, s32 *arg2) {
    if (M2C_FIELD(arg0, s32 *, 0xE4) != 0) {
        *arg1 = 1;
        *arg2 = M2C_FIELD(arg0, s32 *, 0xF4);
    } else {
        *arg1 = 1;
        *arg2 = 0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00095474);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000954E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009555C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000955BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009561C);

s32 func_00095824(s32 arg0) {
    return (arg0 != 0) ? 0 : 0x500F;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00095830);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000959D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00095A7C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00095B00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00095C9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00095CD4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00095D14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00095E5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00096004);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009614C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00096320);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000964A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00096784);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00096914);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000969C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00096A64);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00096BC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00096DE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00096F30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00097104);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00097264);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000973E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000974E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00097564);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000976A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00097760);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00097898);

void func_000979F4(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {

    } else {
        func_00097A54(arg0 + 8, arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00097A54);

void func_00097B60(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x1C), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x1E), arg1);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00097C08);

void func_00097D18(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xC), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xE), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x10), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x12), arg1);
}

void func_00097DA8(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B3C4(M2C_FIELD(arg0, s16 *, 0xC), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xE), arg1);
}

void func_00097E20(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
}

void func_00097E84(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {

    } else {
        func_00097EE4(arg0 + 8, arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00097EE4);

void func_00097FBC(void *arg0, s32 arg1) {
    s32 temp_v1;

    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    if (((M2C_FIELD(arg0, u8 *, 9) << 0x10) | (M2C_FIELD(arg0, u8 *, 0xA) << 8) | M2C_FIELD(arg0, u8 *, 0xB)) == 0) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0x75726C20) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0);
            if (temp_v1 != 0xC) {
                func_0007B414(M2C_FIELD(arg0, void **, 0xC), temp_v1 - 0xC, arg1);
            }
        }
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00098070);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000981AC);

void func_00098424(void *arg0, s32 arg1) {
    s32 temp_v1;

    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v1 != 8) {
        func_0007B414(M2C_FIELD(arg0, void **, 8), temp_v1 - 8, arg1);
    }
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00098480);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00098664);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000986E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000987CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00098880);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00098970);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00098A4C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00098B14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00098C08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00098D00);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00098E10);

s32 func_00098F90(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    return 0;
}

s32 func_0009900C(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x20), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x24), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x28), arg1);
    return 0;
}

s32 func_000990D0(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 1, arg1);
    func_0007B414(arg0 + 9, 3, arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x20), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x24), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x28), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x2C), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x30), arg1);
    return 0;
}

void func_000991AC(void *arg0, s32 arg1) {
    func_0007B374(M2C_FIELD(arg0, u16 *, 0), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 2), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 8), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0xC), arg1);
    func_0007B3C4(M2C_FIELD(arg0, s16 *, 0x10), arg1);
    func_0007B3C4(M2C_FIELD(arg0, s16 *, 0x12), arg1);
    func_0007B328(M2C_FIELD(arg0, s32 *, 0x14), arg1);
    func_0007B328(M2C_FIELD(arg0, s32 *, 0x18), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x20), arg1);
    func_0007B414(arg0 + 0x22, 0x20, arg1);
    func_0007B3C4(M2C_FIELD(arg0, s16 *, 0x42), arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0x44), arg1);
}

void func_00099280(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_0007B374(M2C_FIELD(arg0, u16 *, 0), arg2);
    func_0007B374(M2C_FIELD(arg0, u16 *, 2), arg2);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg2);
    func_0007B374(M2C_FIELD(arg0, u16 *, 8), arg2);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xA), arg2);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xC), arg2);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xE), arg2);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x10), arg2);
    if ((arg1 & 0xFFFF) != 1) {

    } else {
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x14), arg2);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x18), arg2);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x1C), arg2);
        func_0007B2DC(M2C_FIELD(arg0, s32 *, 0x20), arg2);
    }
}

void func_0009935C(void *arg0, s32 arg1) {
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 0), arg1);
    func_0007B2DC(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_0007B414(arg0 + 8, 6, arg1);
    func_0007B374(M2C_FIELD(arg0, u16 *, 0xE), arg1);
}

void func_000993B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000993C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000995EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000996D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00099750);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000999F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_00099FCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009A19C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009A26C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009A3C4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B48C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B48CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B48D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B48E0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B48E8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B48EC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B48F0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B48F8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4900);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4A08);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4A10);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4FB0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4FD8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4FF0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B4FFC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009A5C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009A664);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009A718);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009A7C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009A9AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009AB90);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009AC04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009ADBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009AE90);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009B028);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009B088);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009B17C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009B304);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009B41C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009B534);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009B6A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009B8AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009B8D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009B9BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009BAEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009BB68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009BB80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009BCDC);

s32 func_0009BD58(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x17) = arg1;
    return 0;
}

s32 func_0009BD64(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x34) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009BD70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009BDF0);

void func_0009C17C(s32 arg0) {
    func_00092008(arg0 + 0x180, 0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009C19C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009C25C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009C404);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009C524);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009C594);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009C5CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009C670);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009CAE4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009CCF8);

s32 func_0009CDD4(void) {
    func_000801B8();
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009CDF4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009CF5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009D1B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009D250);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009D314);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009D5F0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009D6BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009D8BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009DADC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009DB58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009DD70);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009DF04);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009E014);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009E224);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009E440);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009E604);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009E7D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009E9F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EA2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EA68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009ED80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EDAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EDDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EE08);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EE34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EE60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EE8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EEBC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EEEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EF18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EF50);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EF88);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EFC0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009EFEC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F01C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F048);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F0A0);

s32 func_0009F0D0(void *arg0, s16 arg1) {
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        var_v1 = func_0009BD64(arg0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F100);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F12C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F158);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F184);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F338);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F364);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F390);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F3C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F400);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F438);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F464);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F49C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F4C8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F63C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F674);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F6B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F6F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F744);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F794);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F7CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F804);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F83C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F8C4);

s32 func_0009F928(void *arg0, s32 *arg1) {
    *arg1 = M2C_FIELD(arg0, s32 *, 4);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F938);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009F9D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009FA70);

s32 func_0009FD64(void *arg0, u32 arg1) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (arg1 < (u32) ((u32) (temp_v1 + 1) >> 1)) {
        var_a0 = M2C_FIELD(arg0, s32 *, 0x14);
        var_s0 = arg1 - 1;
        if (arg1 != 0) {
            do {
                var_s0 -= 1;
                var_a0 = func_000A0020(var_a0);
            } while (var_s0 != -1);
        }
    } else {
        var_s0_2 = (temp_v1 - arg1) - 2;
        var_a0 = M2C_FIELD(arg0, s32 *, 0x18);
        if (var_s0_2 != -1) {
            do {
                var_s0_2 -= 1;
                var_a0 = func_000A0010(var_a0);
            } while (var_s0_2 != -1);
        }
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009FDF0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009FE8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009FF38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_0009FFC4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0010);

void func_000A0018(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0020);

void func_000A0028(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
}

s32 func_000A0030(void *arg0, u32 arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0xC;
    if (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0)) {
        var_v1 = 0;
        *arg2 = M2C_FIELD(arg0, s32 *, 4) + arg1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0058);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A00AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0100);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0174);

void func_000A01CC(void) {
    func_000A05BC();
}

s32 func_000A01E8(void *arg0) {
    func_000A0220(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, u8 *, 0));
    func_00080F50(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0220);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A02FC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0360);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A049C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A04EC);

s32 func_000A0588(s32 **arg0) {
    s32 *temp_v0;

    temp_v0 = func_00080C20(0x14);
    *arg0 = temp_v0;
    return temp_v0 == NULL;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A05BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0638);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A06C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0958);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0C2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0D5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0E3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A0F1C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A10E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A11BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A127C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A1360);

s32 func_000A14E0(void *arg0, s32 arg1, s32 *arg2) {
    s32 *temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 **, 0x34) == NULL) {
        temp_v0 = func_00080C20(arg1);
        M2C_FIELD(arg0, s32 **, 0x34) = temp_v0;
        var_v1 = 1;
        if (temp_v0 != NULL) {
            func_00078688(temp_v0, arg2, arg1);
            M2C_FIELD(arg0, s32 *, 0x38) = arg1;
            var_v1 = 0;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A1560);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A1874);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A1964);

s32 func_000A19F4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A1A04);

s32 func_000A1A88(s32 **arg0) {
    *arg0 = func_00080C20(8);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A1AB8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A1BCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A1D08);

void func_000A1D80(s32 **arg0) {
    func_000A0588(arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A1D9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A1FDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A216C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A2370);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A2504);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A2650);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A26C0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A2BE8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A2D58);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A2DCC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A2E40);

s32 func_000A2EF4(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = scePaf_3AC3E06A(0xC);
    *arg0 = temp_v0;
    var_v1 = 1;
    if (temp_v0 != 0) {
        scePaf_9479C11B(temp_v0, 0, 0xC);
        var_v1 = func_000A31C4(*arg0 + 8);
    }
    return var_v1;
}

s32 func_000A2F54(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 6) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A2F60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A2F80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A2FF4);

s32 func_000A3088(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        func_000A3268(temp_v0);
    }
    scePaf_4729E549(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A30D0);

void func_000A3140(void *arg0) {
    func_000A33F8(M2C_FIELD(arg0, s32 *, 8));
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A315C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A31C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A3268);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A329C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A3390);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A33B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A33F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A348C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A34E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A35BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A3654);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A36F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A38E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A398C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A3A14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A3A9C);

s32 func_000A3AF8(void *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0x5001;
    if (arg0 != NULL) {
        var_v1 = 0;
        *arg1 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A3B14);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A3D8C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A3E40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A3EB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A3FAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4068);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A40AC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4138);

void func_000A417C(s32 arg0) {
    func_000A4198(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4198);

void func_000A41C8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        func_000A4228(temp_v0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_000A4228(M2C_FIELD(arg0, s32 *, 0xC));
    }
    func_00080F50(arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4228);

void func_000A426C(s32 arg0) {
    func_000A4288(arg0 + 0x94);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4288);

void func_000A4308(s32 arg0) {
    func_000A4324(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4324);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A435C);

void func_000A43A0(s32 arg0) {
    func_00091434();
    func_000A45EC(arg0 + 0x14);
    func_000A4488(arg0 + 0x30);
    func_000A44B8(arg0 + 0x54);
    func_000A44E8(arg0 + 0x78);
    func_000A4518(arg0 + 0x9C);
    func_000A4548(arg0 + 0xC0);
    func_000A4458(arg0 + 0xE4);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4400);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4458);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4488);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A44B8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A44E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4518);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4548);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4578);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A45EC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4624);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4704);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4748);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A478C);

void func_000A48B4(void *arg0) {
    if (arg0 != NULL) {
        func_00080F50(M2C_FIELD(arg0, void **, 0xC));
    }
    func_00080F50(arg0);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A48E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4984);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4A34);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4AAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4B60);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4BF4);

s32 func_000A4C48(void *arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000A36F8(arg0 + 0x14, 3, arg1, 0x3E8) == 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
    }
    return var_v1;
}

s32 func_000A4C98(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000A36F8(arg0 + 0x14, 2, arg1, 0x3E8) == 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
    }
    return var_v1;
}

s32 func_000A4CE8(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000A36F8(arg0 + 0x14, 2, arg1, 0x3E8) == 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4D38);

s32 func_000A4D8C(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (func_000A36F8(arg0 + 0x10, 3, arg1, 0x3E8) == 0) {
        var_v1 = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4DDC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A4F18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A5000);

void func_000A5070(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 8;
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_000A50C0(arg0 + 8);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8));
    }
}

void func_000A50C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC) * 0xC) + 0x10);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A50DC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A5178);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A5274);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A52D8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A5470);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A5580);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A55F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A563C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A5680);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A56D0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A5764);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A57D4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A5884);

s32 func_000A58E8(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x110), void **, 0x2AC), void **, 0x90), void **, 0x104), void **, 4), s32 *, 0x48);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A5904);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A5F1C);

void func_000A665C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
}

s32 func_000A6664(s32 arg0) {
    return arg0;
}

void func_000A666C(void) {
    func_000A8C50();
}

s32 func_000A6688(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x60);
}

s32 func_000A6690(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A6698);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A66A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A66B0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A66BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A66CC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A66DC);

s32 func_000A66EC(s32 arg0) {
    return arg0 + 0x84;
}

s32 func_000A66F4(s32 arg0) {
    return arg0 + 0xBC;
}

s32 func_000A66FC(s32 arg0) {
    return arg0 + 0x11C;
}

s32 func_000A6704(s32 arg0) {
    return arg0 + 0xF4;
}

s32 func_000A670C(s32 arg0) {
    return arg0 + 0x154;
}

s32 func_000A6714(s32 arg0) {
    return arg0 + 0x198;
}

s32 func_000A671C(s32 arg0) {
    return arg0 + 0x1B0;
}

s32 func_000A6724(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18C);
}

s32 func_000A672C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x190);
}

void func_000A6734(void) {
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A673C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B50A0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5244);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5258);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A6894);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A7238);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A74E0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A757C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A7750);

void func_000A7788(void) {
    func_000A833C();
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A77A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A7824);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A7884);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A7948);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A7A40);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A80E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A833C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A84BC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8508);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8514);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A85E4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A86B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8784);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8B3C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8C2C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8C50);

s32 func_000A8C58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

void func_000A8C60(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

s32 func_000A8C68(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

void func_000A8C70(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8C78);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8D74);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8DB0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8E28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A8F80);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A9230);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A9288);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A92C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A9398);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A94F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A9578);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A95F4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A9644);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000A9C18);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AA234);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AA7A8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AAD54);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AADA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AB0E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AB150);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AB1C4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AB53C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AB760);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AB7E8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AB870);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AB8F8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AB980);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000ABA5C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000ABB30);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000ABB74);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000ABBA8);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000ABC20);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000ABDAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000ABF44);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AC008);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AC038);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AC2A0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AC3B4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AC518);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", func_000AC648);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B544C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5464);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5664);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5678);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B567C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5680);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5684);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5688);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B568C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5690);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5694);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B5698);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B569C);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B56A0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B56A4);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B56A8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B56AC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B56B0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B56C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B57C8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B57CC);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B57D0);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin", D_000B57D4);
