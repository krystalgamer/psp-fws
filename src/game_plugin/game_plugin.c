/* cflags: -Os */
#include "common.h"
#include "game_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000024);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000000AC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", module_start);

s32 module_stop(void) {
    func_00010A38();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000015C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000003DC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000045C);

s32 func_000004E8(s32 arg0) {
    func_00008160(&D_0001247C, arg0);
    return 0;
}

void func_00000510(void) {
    func_00006EF4(0);
}

void func_0000052C(void) {
    func_00006EF4(1);
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000548);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000005CC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000610);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000115C8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000664);

void func_0000076C(void) {
    func_00008120(&D_0001247C);
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000078C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000868);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000088C);

void func_00000938(void) {
    func_0000088C(1, 0xFFFF);
}

void func_00000958(void) {
    func_0000088C(0, 0xFFFF);
}

void func_00000978(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A58();
}

void func_00000998(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A78();
}

void func_000009B8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000AA8();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000009D8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000A58);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000A78);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000AA8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000AD8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000BB8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000DA8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000DEC);

void func_00000E68(M2C_UNK **arg0) {
    *arg0 = &D_00011890;
}

void func_00000E78(M2C_UNK **arg0) {
    *arg0 = &D_00011890;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000EA0);

s32 func_00000ED0(s32 arg0, u32 arg1) {
    return (((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1) * arg1;
}

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000115F0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000115FC);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011608);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011614);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011628);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_0001163C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011650);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011664);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011674);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011688);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_0001169C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000116AC);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000116C0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000116D8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000116E8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000116F8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011708);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_0001171C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011730);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011744);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011758);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011860);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011870);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011880);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011890);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00000EF8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00001118);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000012C4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00001B24);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011980);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011990);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000119A0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000119B8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000119C4);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000119D0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000119E4);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000119F8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011A08);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011A18);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011A28);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011A30);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011A3C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011A4C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00002034);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00002640);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000026F0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000028C8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000029F0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00002A60);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00002AF8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00002B8C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00002BB0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00002C88);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00002D08);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00002D88);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00002E24);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003304);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003390);

void func_000035AC(void) {
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000035B4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003698);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000037D0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000385C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000038E8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003A5C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003BD0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003D58);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003DC8);

void func_00003DF8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_00003F78(arg0, arg1, var_v0);
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003E48);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003EC0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003F1C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00003F78);

void func_0000403C(M2C_UNK **arg0) {
    *arg0 = &D_00011AD8;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004064);

void func_0000412C(M2C_UNK **arg0) {
    *arg0 = &D_00011AE8;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004154);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000041B4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004248);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011AC8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011AD8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011AE8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011AF0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011AFC);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011B0C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011B1C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011B24);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011B3C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011B50);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011B64);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011B84);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011B98);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011BA0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011BBC);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011BD8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011BF4);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011C0C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000042D8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000043A4);

void func_00004638(void) {
    func_000076A0();
    func_000042D8();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000465C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004744);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004970);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004A54);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004B84);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004BB8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004C10);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004C54);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004D08);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004DF8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004EB0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004F70);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00004FF8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00005008);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011C58);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00005244);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011C74);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011C7C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000055D8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000057B4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00005900);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011CCC);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011CD0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011CD4);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011CD8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011CDC);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011CE0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011CE4);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011CE8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000599C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00005BF0);

void func_00005C88(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00011CFC);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK), 0xC)(0, &func_00005CE8, 0, 0);
        }
    }
    scePaf_66907719();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00005CE8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00005E14);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011CFC);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011D08);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011D18);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011D20);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00005F4C);

void func_000062D4(void) {
    func_00006340();
}

void func_000062F0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_0000636C(arg0, arg1, var_v0);
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00006340);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000636C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00006418);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000064F4);

void func_00006584(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00011D88);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK), 0xC)(0, &func_000064F4, 0, 0);
        }
    }
    scePaf_66907719();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000065E4);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011D88);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00006638);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000068E4);

void func_00006974(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_D4FAE7D0(&D_00011DEC);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK), 0xC)(0, &func_000068E4, 0, 0);
        }
    }
    scePaf_66907719();
}

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011DEC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000069D4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00006AAC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00006B00);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00006CCC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00006D38);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00006EF4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00006F48);

void func_00007024(s32 arg0) {
    void *temp_v0;

    temp_v0 = scePaf_338C3774(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *), 4)(&func_00007058);
    }
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00007058);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00007148);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000071EC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000723C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00007278);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000072B4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000072F4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00007400);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000744C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000074D0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00007548);

void func_00007584(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000075DC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00007638);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000076A0);

void func_000076CC(void) {
    func_000076A0();
}

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00011F38);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000076E8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00012038);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00012050);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000078F8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00007AF4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00007ED0);

void func_00007F88(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00008020();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00007FA8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008020);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008040);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008078);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000080B0);

void func_000080FC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    vsh_61FE226A();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008120);

void func_00008160(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    func_00008120();
}

void func_00008180(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    vsh_7ADF6A69();
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000081A4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000081FC);

s32 func_00008274(void *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_000081FC();
    var_v0 = -1;
    if (temp_v0 != 0) {
        scePaf_F609FA81(M2C_FIELD(arg0, s32 *, 4), temp_v0, 0, 0);
        scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4), temp_v0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000082D0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008394);

s32 func_00008458(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00008460(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_00008468(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00008470(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_00008478(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_00008480(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_00008488(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

void func_00008490(void *arg0, s32 arg1) {
    scePaf_F609FA81(M2C_FIELD(arg0, s32 *, 4), arg1, 0, 0);
}

void func_000084B4(void *arg0, s32 arg1) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4), arg1);
}

void func_000084D0(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}

void func_000084EC(void *arg0) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008508);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008530);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000856C);

s32 func_000085FC(void) {
    scePaf_545FE2DA();
    return 0;
}

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00012158);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000861C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000896C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000089A0);

s32 func_000089D4(void) {
    return 0;
}

s32 func_000089DC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000089E4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008A50);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_0001222C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_0001223C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00012240);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008AA0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008DB0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00008EB0);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_0001224C);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00012250);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00012258);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00012264);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000090C0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000091D4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000932C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000093B4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009418);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000094D4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009574);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000095DC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009644);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000968C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000097A4);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000122A0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000098A8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009908);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009A78);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009B2C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009B74);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009BE0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009E88);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009F08);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00009F60);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000A018);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000A11C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000A14C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000A190);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000A618);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000A7F8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000A8A4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000AA58);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000ABE0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000AD50);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000AFCC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000B7C0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000BE40);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000C120);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000C28C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000C5D0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000C868);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000CD0C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000CE14);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000D184);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000D270);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000D3F0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000D488);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000D650);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000D6A8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000D720);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000D790);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000D81C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000D9A4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000DB38);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000DCB8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000DEB0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000DFC8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000E0DC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000E5A0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000E964);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000EA38);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000EDDC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000EEA4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000EFFC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000F100);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000122C8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000122D0);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000F2C8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000F580);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000F650);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000F72C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000F934);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000F9A8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000F9FC);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000FA38);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000FAF4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000FB88);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000FC1C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000FC94);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000FD64);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000FDD8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000FE38);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000FED4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0000FFC4);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_000100C8);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00010238);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_0001040C);

INCLUDE_ASM("tmp/asm/282/game_plugin/nonmatchings/game_plugin", func_00010464);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_000122F8);

INCLUDE_RODATA("tmp/asm/282/game_plugin/nonmatchings/game_plugin", D_00012300);
