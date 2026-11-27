/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "game_plugin_decls.h"

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00002BB0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000504C);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000050F0);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005194);
#else
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00002C88);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00002D08);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00002D88);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00002FAC);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00002E24);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003458);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000034EC);
#endif

#if FW_VERSION < 282
void func_000031CC(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003438);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000031D4);
#endif

#if FW_VERSION < 201
void func_00003244(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003304);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003390);
#endif

#if FW_VERSION < 201
void func_000033F4(void) {

}
#endif

#if FW_VERSION >= 282
void func_000035AC(void) {
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000035B4);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005B90);
#else
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003698);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000038FC);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003988);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000035E4);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003654);
#endif

#if FW_VERSION < 201
void func_000036CC(void) {

}

void func_000036D4(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000037D0);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000385C);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000038E8);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003A5C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003D44);
#endif

#if FW_VERSION < 201
void func_000039C4(void) {

}

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000039CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003BD0);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003D58);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00000E88);
#endif

#if FW_VERSION < 282
void func_00003B64(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_00003F78(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003DC8);

void func_00003DF8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_00003F78(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003E48);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003EC0);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003F1C);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00003F78);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000040DC(M2C_UNK **arg0) {
    *arg0 = &D_00011AC8;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004104);
#endif

#if FW_VERSION < 282
void func_00003F18(M2C_UNK **arg0) {
    *arg0 = &D_00011AE8;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000403C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000403C(M2C_UNK **arg0) {
    *arg0 = &D_00011AD8;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004064);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000412C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000412C(M2C_UNK **arg0) {
    *arg0 = &D_00011AE8;
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004154);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000041B4);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004248);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010BE8);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011AC8);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019308);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011AD8);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011AE8);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011AF0);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011AFC);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011B0C);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010C3C);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011B1C);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011B24);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011CA4);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011B3C);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011B50);

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011F94);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011B64);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011B84);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011B98);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010CC8);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011BA0);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011BBC);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011BD8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010D98);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010DB0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011BF4);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011C0C);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000042D8);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000043A4);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000043D4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_000043D4(void) {
    func_00006768();
    func_000042D8();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000043D4(void) {
    func_00006768();
    _ZN3paf4View9PlaySoundEPKc(D_00012984, &D_00010C3C);
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    func_000042D8();
}
#endif

#if FW_VERSION == 100
void func_000043D4(void) {
    func_00006768();
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    func_000042D8();
}
#endif

#if FW_VERSION >= 282
void func_00004638(void) {
    func_000076A0();
    func_000042D8();
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000465C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000044E4);
#else
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004744);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004970);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004A54);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004B84);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004BB8);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004C10);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004C54);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004D08);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005028);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004C18);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004DF8);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004EB0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000051CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005298);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005264);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004D78);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004FAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004FE8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004F70);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00004FF8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005254);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005008);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011C58);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005490);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010D8C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005244);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011C74);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011C7C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000588C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000584C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005580);
#else
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000055D8);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000057B4);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005900);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011CCC);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011CD0);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011CD4);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011CD8);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011628);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010E80_v201);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011CDC);

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011CE0);
#endif

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011CE4);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011CE8);

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00016814);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_0001682C);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00016840);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000073BC);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_0001686C);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00016874);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007580);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007C08);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007C5C);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007E38);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000168DC);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000168E0);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000168E4);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000168E8);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000168EC);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000168F0);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000168F4);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000168F8);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000168FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005C54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005C68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005E54);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010E08);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010E0C);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000577C);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000058F8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005978);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005F18);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000059D4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006028);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006030_v150);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000599C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000195DC);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000195E0);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000195E4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005BF0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000195F4);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019604);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005C88);
#endif

#if FW_VERSION == 282
void func_00005C88(void) {
    s32 temp_v0;
    struct Unk_func_00005C88_temp_v0_2 *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00011CFC);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unkC(0, &func_00005CE8, 0, 0);
        }
    }
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005CE8);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005E14);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011CFC);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011D08);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011D18);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011D20);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005F4C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007DF0);

void func_00007E98(void) {
    func_00007DF0(1, 0xFFFF);
}

void func_00007EB8(void) {
    func_00007DF0(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00009570);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000095D4);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00009774);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019618);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_0001961C);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019620);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019624);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019628);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_0001962C);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019630);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019634);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019638);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_0001963C);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019640);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019658);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000098C4);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019674);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019684);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00009990);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00009CE8);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00009DC0);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00009F3C);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000A0E0);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000A2C0);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000A38C);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000A5E8);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000196C4);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000196D8);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_000196F4);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019710);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019720);

INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00019730);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000AD40);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000AE14);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000B168);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000B190);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000B214);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000B43C);

void func_0000B53C(void) {
    func_0000B43C(1, 0xFFFF);
}

void func_0000B55C(void) {
    func_0000B43C(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_000062D4(void) {
    func_00006340();
}

void func_000062F0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_0000636C(arg0, arg1, var_v0);
}

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006340);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000636C);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006418);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000064F4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006584);
#endif

#if FW_VERSION == 282
void func_00006584(void) {
    s32 temp_v0;
    struct Unk_func_00006584_temp_v0_2 *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00011D88);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unkC(0, &func_000064F4, 0, 0);
        }
    }
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000065E4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000B66C);
#endif

#if FW_VERSION < 250 || (FW_VERSION >= 282 && FW_VERSION < 350)
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011D88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006198);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006128);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00006580(void) {
    func_0000659C();
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006290);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000659C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000630C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000062F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000065B8);

void *func_00006664(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000669C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000670C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000670C(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00011DEC);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK), 0xC)(0, &func_0000669C, 0, 0);
        }
    }
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION == 201
void func_0000670C(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00011DEC);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK, M2C_UNK *, M2C_UNK), 0xC)(0, &func_0000669C, 0);
        }
    }
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000064CC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006638);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000068E4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006974);
#endif

#if FW_VERSION == 282
void func_00006974(void) {
    s32 temp_v0;
    struct Unk_func_00006974_temp_v0_2 *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00011DEC);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unkC(0, &func_000068E4, 0, 0);
        }
    }
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00011DEC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006760);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006748);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006768_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000067E8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006B7C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006B84_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006BF4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00006BF4(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00010E80);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK), 0xC)(0, &func_00006B7C, 0, 0);
        }
    }
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION == 201
void func_00006BF4(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_00010E80);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK, M2C_UNK *, M2C_UNK), 0xC)(0, &func_00006B7C, 0);
        }
    }
    InputDevice_PspPad_Unlock();
}
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010E80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006AD8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006984);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006C50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006D54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006C20);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006B9C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006DC4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006F7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006E7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007004);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000071AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/game_plugin_002BB0", D_00010EA8);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005A78);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005B04);

void func_00005D88(void) {
    sce_paf_private_snprintf(&D_000115D8, 0x80, "disc0:/PSP_GAME/SYSDIR/EBOOT.BIN");
    func_00005E1C(0);
}

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005DBC);

void func_00005E1C(s32 arg0) {
    D_000116C4 = arg0;
    func_00006F48();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000069D4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006AAC);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006B00);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006CCC);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006D38);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006EF4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007344);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000751C);
#else
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006F48);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00005F40);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00006030(s32 arg0) {
    void *temp_v0;

    temp_v0 = _ZNK3paf4View12GetInterfaceEi(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *), 4)(&func_00006F0C);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void func_00006030(s32 arg0) {
    void *temp_v0;

    D_00012AC8 = arg0;
    temp_v0 = _ZNK3paf4View12GetInterfaceEi(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *), 4)(&func_00005F40);
    }
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006F0C);
#endif

#if FW_VERSION == 100
void func_00006030(s32 arg0) {
    void *temp_v0;

    D_000116AC_v100 = arg0;
    temp_v0 = _ZNK3paf4View12GetInterfaceEi(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *), 4)(&func_00005F40);
    }
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000606C);

void func_000060EC(void) {
    func_0000606C(1, 0xFFFF);
}

void func_0000610C(void) {
    func_0000606C(0, 0xFFFF);
}

void func_0000612C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000613C);
#endif

#if FW_VERSION == 282
void func_00007024(s32 arg0) {
    struct Unk_func_00007024_temp_v0 *temp_v0;

    temp_v0 = _ZNK3paf4View12GetInterfaceEi(arg0, 1);
    if (temp_v0 != NULL) {
        temp_v0->unk4(&func_00007058);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007058);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007678);

void func_00007720(void) {
    func_00007678(1, 0xFFFF);
}

void func_00007740(void) {
    func_00007678(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007760);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000782C);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000078C0);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007AD0);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007C08);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007C5C);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007148);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000071EC);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000723C);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007278);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000072B4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000076E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006330);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000072F4);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007400);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_0000744C);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000074D0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006578);
#endif

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00007548);

#if FW_VERSION < 282
void func_0000664C(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_000066A4);

INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006700);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/game_plugin_002BB0", func_00006768);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00006768(void) {
    D_0001176C = 0;
    _ZN3vsh26ShowButtonNavigation_EnterEb(0);
    return _ZN3vsh25ShowButtonNavigation_BackEb(0);
}
#endif

#if FW_VERSION >= 350
void func_00007584(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00007584(void **arg0) {
    void *temp_s0;
    struct Unk_func_00007584_var_a0 *var_a0;
    struct Unk_func_00007584_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#endif
