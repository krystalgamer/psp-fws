/* cflags: -Os */
#include "common.h"
#include "lftv_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00004FAC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00004FFC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000048A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00004918);
#endif

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005090);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000050BC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000052CC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00004C38);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000047CC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000048A8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000049E0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00004CF8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00004DA4);

void *func_00004F18(void **arg0) {
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00004F50);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00004FA0);

void func_00004FF0(M2C_UNK **arg0) {
    *arg0 = &D_000576E8;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000075E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000075F0);
#else
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005378);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005454);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_0000558C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000055E0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005634);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000056AC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_0005740C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057414);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_0005741C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057424);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_0005742C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057430);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057440);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057450);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057460);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057470);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057484);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057488);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005038);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005588);
#endif

#if FW_VERSION == 250
void func_00005588(s32 arg0) {
    scePaf_F95EA3F1(arg0 + 0x434, arg0 + 0x160, 0x18);
    scePaf_F95EA3F1(arg0 + 0x44C, arg0 + 0x178, 0x44);
    scePaf_F95EA3F1(arg0 + 0x490, arg0 + 0x1BC, 0x7D);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000055DC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005624);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005650);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_0000567C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000056A4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000056C4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000056E4);
#endif

#if FW_VERSION == 250
s32 func_000056E4(void *arg0, s32 arg1) {
    if ((u32) (arg1 - 1) < 5U) {
        M2C_FIELD(arg0, s32 *, 0x510) = arg1;
    }
    return 0;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000056FC);
#endif

#if FW_VERSION == 250
void func_000056FC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x51C) = arg1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005704);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_0000573C);
#endif

#if FW_VERSION == 250
void func_0000573C(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        scePaf_6BA9C299(arg1, arg0 + 0x528, 0x60);
    }
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_0000576C);
#endif

#if FW_VERSION == 250
void func_0000576C(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        scePaf_6BA9C299(arg0 + 0x528, arg1, 0x60);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005794);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005764);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005BDC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005C24);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005C54);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005C84);
#endif

#if FW_VERSION == 250
void func_00005CB4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3EC) = arg1;
}
#endif

#if FW_VERSION < 282
void func_00005CBC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3F0) = arg1;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005AF8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005CC4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005CF4);
#endif

#if FW_VERSION == 250
void func_00005D24(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x41C) = arg1;
}
#endif

#if FW_VERSION < 282
void func_00005D2C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x420) = arg1;
}

void func_00005D34(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x424) = arg1;
}

void func_00005D3C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x428) = arg1;
}

void func_00005D44(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x42C) = arg1;
}

void func_00005D4C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x430) = arg1;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005D54);
#endif

#if FW_VERSION == 250
void func_00005D54(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x514) = arg1;
}
#endif

#if FW_VERSION < 282
void func_00005D5C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x518) = arg1;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005B98);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005D64);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005D94);

void func_00005DE8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}

void func_00005DFC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005E10);
#endif

#if FW_VERSION == 250
void func_00005E10(void) {

}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005BD8);
#endif

#if FW_VERSION == 250
void func_00005E18(void) {

}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005E20);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000056F0);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000574A8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000574BC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000574D0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000574DC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000574F4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000574FC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057510);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_0005751C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057528);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057534);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057544);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057554);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057568);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_0005757C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057594);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000575AC);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000575C4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000575D0);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000575E8);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057604);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_0005760C);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00040434);
#endif

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_0005761C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057624);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057630);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_0005764C);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057668);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057670);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057684);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_00057694);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000576A4);

INCLUDE_RODATA("nonmatchings/lftv_main_plugin_004FAC", D_000576B4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00005E64);

void func_00006344(s32 arg0) {
    scePaf_F95EA3F1(arg0 + 0x454, arg0 + 0x160, 0x18);
    scePaf_F95EA3F1(arg0 + 0x46C, arg0 + 0x178, 0x44);
    scePaf_F95EA3F1(arg0 + 0x4B0, arg0 + 0x1BC, 0x7D);
}

u16 func_00006398(struct Unk_func_00006398_0 *arg0) {
    return arg0->unk442;
}

u16 func_000063A0(struct Unk_func_000063A0_0 *arg0) {
    return arg0->unk440;
}

u16 func_000063A8(struct Unk_func_000063A8_0 *arg0) {
    return arg0->unk446;
}

u16 func_000063B0(struct Unk_func_000063B0_0 *arg0) {
    return arg0->unk444;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000063B8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_0000640C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00006450);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00006494);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000064C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000064F4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00006538);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_0000657C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000065C8);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00006614);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_0000665C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_0000668C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000066C4);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000066FC);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_0000671C);

s32 func_0000673C(struct Unk_func_0000673C_0 *arg0, s8 arg1) {
    arg0->unk52D = arg1;
    return 0;
}

s32 func_00006748(struct Unk_func_00006748_0 *arg0, s8 arg1) {
    arg0->unk52E = arg1;
    return 0;
}

s32 func_00006754(struct Unk_func_00006754_0 *arg0, s8 arg1) {
    arg0->unk52F = arg1;
    return 0;
}

s32 func_00006760(struct Unk_func_00006760_0 *arg0, s8 arg1) {
    arg0->unk530 = arg1;
    return 0;
}

void func_0000676C(struct Unk_func_0000676C_0 *arg0, s32 arg1) {
    arg0->unk53C = arg1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00006774);

void func_000067AC(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        scePaf_6BA9C299(arg1, arg0 + 0x548, 0x60);
    }
}

void func_000067DC(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        scePaf_6BA9C299(arg0 + 0x548, arg1, 0x60);
    }
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00006804);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00006E4C);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00007250);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00007280);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000072B0);

void func_000072E0(struct Unk_func_000072E0_0 *arg0, s32 arg1) {
    arg0->unk40C = arg1;
}

void func_000072E8(struct Unk_func_000072E8_0 *arg0, s32 arg1) {
    arg0->unk410 = arg1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000072F0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00007320);

void func_00007350(struct Unk_func_00007350_0 *arg0, s32 arg1) {
    arg0->unk43C = arg1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00007358);

void func_0000736C(struct Unk_func_0000736C_0 *arg0, s32 arg1) {
    arg0->unk440 = (s32) (__builtin_allegrex_ins(arg0->unk440, 0, 0, 0x10) | (arg1 & 0xFFFF));
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00007384);

void func_00007398(struct Unk_func_00007398_0 *arg0, s32 arg1) {
    arg0->unk444 = (s32) (__builtin_allegrex_ins(arg0->unk444, 0, 0, 0x10) | (arg1 & 0xFFFF));
}

void func_000073B0(struct Unk_func_000073B0_0 *arg0, s32 arg1) {
    arg0->unk448 = arg1;
}

void func_000073B8(struct Unk_func_000073B8_0 *arg0, s32 arg1) {
    arg0->unk44C = arg1;
}

void func_000073C0(struct Unk_func_000073C0_0 *arg0, s32 arg1) {
    arg0->unk450 = arg1;
}

void func_000073C8(struct Unk_func_000073C8_0 *arg0, s32 arg1) {
    arg0->unk534 = arg1;
}

void func_000073D0(struct Unk_func_000073D0_0 *arg0, s32 arg1) {
    arg0->unk538 = arg1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000073D8);

void func_00007408(struct Unk_func_00007408_0 *arg0, s32 arg1) {
    arg0->unk5CC = arg1;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00007410);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00007454);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000074A0);

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_000074F0);

void func_00007540(struct Unk_func_00007540_0 *arg0) {
    s8 *var_v1;
    u32 var_a1;

    var_a1 = 0;
    var_v1 = (u8 *)arg0 + 0x5E8;
    do {
        var_a1 += 1;
        *var_v1 = 0;
        var_v1 += 1;
    } while (var_a1 < 3U);
    arg0->unk5EB = 0;
}

INCLUDE_ASM("nonmatchings/lftv_main_plugin_004FAC", func_00007564);

void func_000075E0(M2C_UNK **arg0) {
    *arg0 = &D_000576E8;
}

void func_000075F0(M2C_UNK **arg0) {
    *arg0 = &D_000576E8;
    scePaf_4E67BB08(arg0);
}
#endif
