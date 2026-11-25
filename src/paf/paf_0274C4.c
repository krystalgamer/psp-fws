#include "common.h"
#include "paf_decls.h"

void func_000274C4(struct Unk_func_000274C4_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_00027B10((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000274F8);

void func_00027584(struct Unk_func_00027584_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_00027C28((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000275B8);

void func_00027644(struct Unk_func_00027644_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_00027D40((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027678);

void func_0002770C(struct Unk_func_0002770C_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_00027E50((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027740);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000277C8);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027854);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000278D0);

void func_00027A24(struct Unk_func_00027A24_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00027F68((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027A68);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027AE4);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027AF4);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027B10);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027C28);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027D40);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027E50);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027F68);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002802C);

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027770);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002231C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022404);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022418);
#endif

#if FW_VERSION == 200
s32 func_00022418(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0012600C) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002244C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022458);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000224E8);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002257C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000225E0);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022654);
#endif

#if FW_VERSION == 200
s32 func_00022654(void *arg0, s32 arg1, s32 *arg2) {
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {
        func_000278D0(temp_s1, arg1 + 1);
    }
    if (arg1 >= 0) {
        if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {

        } else {
            scePaf_5148EFE2(M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 4), M2C_FIELD(arg0, s32 *, 0x18), *arg2);
        }
    }
    return 1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_000226F0);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022748);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000227F4);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000228A4);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022924);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0003B844);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022A64);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022A78);
#endif

#if FW_VERSION == 200
s32 func_00022A78(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_00170F78) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022AAC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022AB8);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022B20);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022B90);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022BCC);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022C40);
#endif

#if FW_VERSION == 200
s32 func_00022C40(void *arg0, s32 arg1, s32 *arg2) {
    void *temp_s1;

    temp_s1 = arg0 + 0x1C;
    if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {
        func_000278D0(temp_s1, arg1 + 1);
    }
    if (arg1 >= 0) {
        if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {

        } else {
            scePaf_5148EFE2(M2C_FIELD(arg0, s32 *, 0x1C) + (arg1 * 4), M2C_FIELD(arg0, s32 *, 0x18), *arg2);
        }
    }
    return 1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022CDC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00022D34);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0003BDD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00023024);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002314C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00023248);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001260B0);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001260C4);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001260E4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001260F4);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001651C8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126100);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126108);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126114);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126124);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126130);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0012600C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126028);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170F78);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126064);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000238DC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00023A04);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00023B00);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0012613C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126148);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126158);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126170);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001261A0);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001261B0);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001261BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00023344);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000235FC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00023AEC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00023D2C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00023FD0);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000242B8);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00024608);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000249B0);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025078);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000257FC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025B28);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025B8C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025C54);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025CB0);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025D6C);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025D80);
#endif

#if FW_VERSION == 200
s32 func_00025D80(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_001261A0) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025DB4);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025DC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025E6C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00025F68);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126204);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113A0C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113A2C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113A3C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113A48);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113A50);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113A5C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113A6C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113A78);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113A84);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113A90);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113AA0);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00165338);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126170);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001261A0);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001261B0);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001261BC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00026724);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00026820);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001654A4);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001654B8);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001654C8);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00165500);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FC7C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016553C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016556C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001144CC);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00111CCC);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00113B4C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00026064);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000260B4);
#else
INCLUDE_ASM("nonmatchings/paf_0274C4", func_000280C4);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0274C4", scePaf_836A675D);
#endif

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028160);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028190);

#if FW_VERSION >= 200
s32 scePaf_F0885EDC(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016FC7C) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}
#else
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00026180);
#endif

M2C_UNK *func_000281D8(void) {
    return &D_0016FC7C;
}

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002B774);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FC64);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FC68);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FC6C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FC70);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FC74);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FC78);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FC7C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FC88);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FCB8);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000281E4);
#endif

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028538);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000285D4);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028670);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002870C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000287A8);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028844);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000288E0);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002897C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000289CC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028A90);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028AFC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028C24);

s32 func_00028C38(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016FD08) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00028C6C(void) {
    return &D_0016FD08;
}

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028C78);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028EC0);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FCC8);

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00126230);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FC7C);
#endif

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FCD0);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FD08);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FD14);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FD28);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FD3C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FD44);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FD68);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000291A4);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000292A0);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002939C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000293EC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000294A0);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000294FC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000295A4);

s32 func_000295B8(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016FE80) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_000295EC(void) {
    return &D_0016FE80;
}

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000295F8);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00029864);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FDC4);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FDD8);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FDF8);

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001656B8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FE08);
#endif

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FE50);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FE80);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FE88);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FE9C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FEB0);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FEB8);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FEDC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00029B34);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00029CF8);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00029DF4);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00029E44);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0274C4", scePaf_DD79627E);
#else
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027BB0);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0274C4", scePaf_7BBD70F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0274C4", scePaf_DFFE9ED6);
#endif

#if FW_VERSION == 200
void scePaf_DFFE9ED6(void) {
    s32 temp_v0;

    temp_v0 = D_001268D4 - 1;
    D_001268D4 = temp_v0;
    if (temp_v0 == 0) {
        if (D_001A4E48 == 0) {
            scePaf_9948CDB3(D_001A4E44, 0, D_001268EC);
        }
        scePaf_8A861692(D_001A4E44);
        if (D_001268E0 != 0) {
            scePaf_545FE2DA(D_001A4E3C);
            D_001268E0 = 0;
        }
        D_001A4E3C = 0;
        D_001A4E38 = 0;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027CB8);
#endif

#if FW_VERSION == 282
void scePaf_DFFE9ED6(void) {
    s32 temp_v0;

    temp_v0 = D_001A4E34 - 1;
    D_001A4E34 = temp_v0;
    if (temp_v0 == 0) {
        if (D_001A4E48 == 0) {
            scePaf_9948CDB3(D_001A4E44, 0, D_001A4E4C);
        }
        scePaf_8A861692(D_001A4E44);
        D_001A4E44 = 0;
        if (D_001A4E40 != 0) {
            scePaf_545FE2DA(D_001A4E3C);
            D_001A4E40 = 0;
        }
        D_001A4E3C = 0;
        D_001A4E38 = 0;
    }
}
#endif

u8 func_0002A23C(void) {
    return D_001A4E48;
}

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002A248);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_0274C4", scePaf_9DED6118);
#else
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00027D60);
#endif

INCLUDE_ASM("nonmatchings/paf_0274C4", scePaf_997D2809);

void func_0002A318(s32 arg0, s32 arg1) {
    func_0014BB0C(D_001A4E44, arg0, arg1);
}

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FF34);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FF48);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FF68);

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00165828);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FF78);
#endif

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FFC0);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002A344);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_000282B4);
#else
INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002A7BC);
#endif

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0016FFF4);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170000);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170008);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170014);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170024);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0017002C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0017003C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170048);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170050);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0017005C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170068);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170074);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170080);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0017008C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170094);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0017009C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001700A8);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001700B0);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001700B8);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001700C0);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001700C8);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001700D8);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001700E4);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001700EC);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001700F8);

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_001659B0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170100);
#endif

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170230);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170234);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170238);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0017023C);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170240);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170244);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_00170248);

INCLUDE_RODATA("nonmatchings/paf_0274C4", D_0017024C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028408);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028568);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000286C0);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028810);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028CCC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028E70);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00028FAC);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00029104);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_000292A8);
#else
INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002A90C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002AA74);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002ABD4);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002AD28);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002B238);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002B3C0);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002B504);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002B664);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002B7EC);
#endif

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002B968);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002BB10);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002973C);
#else
INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002BCBC);
#endif

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002C304);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_00029D6C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_00029F28);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002A054);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002A1A0);
#else
INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002C350);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002C508);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002C63C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002C790);
#endif

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002C8C4);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002C93C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002CA24);

INCLUDE_ASM("nonmatchings/paf_0274C4", scePaf_BE5B0791);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002CB34);
#else
void func_0002CB34(s32 arg0, s32 *arg1, M2C_UNK arg2) {
    s32 temp_s0;

    temp_s0 = *arg1;
    func_0002CD9C(arg0, temp_s0 + 0x6C, arg2, func_00031DB0(arg2));
}
#endif

void func_0002CB8C(s32 arg0, s32 arg1, s32 arg2) {
    func_0002CD9C(arg0, arg1, arg2, func_00031DB0(arg2));
}

void func_0002CBE0(s32 arg0, s32 arg1, s32 arg2) {
    func_0002CD9C(arg0, arg1, arg2, func_00031DB0(arg2));
}

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002CC34);
#else
void func_0002CC34(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, *arg1 + 0x6C, arg2, arg3);
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0274C4", scePaf_2D08CA09);
#else
void scePaf_2D08CA09(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, *arg1 + 0x6C, arg2, arg3);
}
#endif

void func_0002CC74(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, arg1, arg2, arg3);
}

void func_0002CC90(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, arg1, arg2, arg3);
}

void func_0002CCAC(void) {
    scePaf_E1242646();
}

void func_0002CCC8(void) {
    scePaf_0F3527DD();
}

void func_0002CCE4(void) {
    scePaf_E1242646();
}

void func_0002CD00(void) {
    scePaf_0F3527DD();
}

void func_0002CD1C(void) {
    scePaf_E1242646();
}

void func_0002CD38(void) {
    scePaf_0F3527DD();
}

void func_0002CD54(void) {
    scePaf_E1242646();
}

void func_0002CD70(void) {
    scePaf_0F3527DD();
}

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002CD8C);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002CD94);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002CD9C);

s32 *func_0002CE98(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0002CF30(arg1, arg2);
    return arg0;
}

void func_0002CED0(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 == 0) {

    } else {
        func_0002CFF4(arg0, temp_v0 + 8);
    }
}

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002CF00);

INCLUDE_ASM("nonmatchings/paf_0274C4", func_0002CF30);
