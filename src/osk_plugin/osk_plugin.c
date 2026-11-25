#include "common.h"
#include "osk_plugin_decls.h"

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/osk_plugin", module_start);

#if FW_VERSION < 282
s32 module_stop(void) {
    func_0000B888();
    return 0;
}
#else
s32 module_stop(void) {
    func_00010E74();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000015C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011578);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011584);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011590);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001159C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000115A8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000115B4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000115C4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000115D8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000115EC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011604);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001161C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011628);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF20);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF2C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF38);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF44);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF50);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF5C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF68);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF74);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001163C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011648);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011658);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011664);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011674);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011688);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011698);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000116B0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000116C8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000116D8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000116EC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011704);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011720);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011730);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000025C);

#if FW_VERSION < 282
void func_00000330(void) {
    D_0000F140 = 0;
}

void func_00000368(void) {
    func_000048D8();
}
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000368);

void func_0000038C(void) {
    func_00006134();
}
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_000003A8);

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000003E4(void) {
    void *temp_v0;

    if (D_00015F9C != 0) {

    } else {
        temp_v0 = scePaf_D4FAE7D0(M2C_FIELD(D_0000F140, s32 *, 0x10));
        if (temp_v0 != NULL) {
            scePaf_5EBC648F(temp_v0, M2C_FIELD(temp_v0, s32 *, 0x1CC));
        }
        scePaf_1A45C860((void *) D_0000F140, 0);
    }
}
#endif

#if FW_VERSION == 100
void func_000003E4(void) {
    void *temp_v0;

    if (D_0000F164 != 0) {

    } else {
        temp_v0 = scePaf_D4FAE7D0(M2C_FIELD(D_0000F140, s32 *, 0x10));
        if (temp_v0 != NULL) {
            scePaf_5EBC648F(temp_v0, M2C_FIELD(temp_v0, s32 *, 0x1C8));
        }
        scePaf_1A45C860((void *) D_0000F140, 0);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000440);
#else
void func_0000044C(void) {
    scePaf_66FE90D7();
}

void func_00000468(s32 arg0) {
    if (D_0001D6D0 != 0) {

    } else {
        func_00004C20();
        if (arg0 != 0) {
            scePaf_F47CA1C2(arg0, 0x10001, &func_0000085C, 0);
        }
    }
}
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001175C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001176C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011778);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011788);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C008);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C010);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C020);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C02C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C03C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C050);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C064);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C070);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C07C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C08C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DC54);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DC64);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DC74);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DC84);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DC90);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DC9C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C09C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DCC0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DCC8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DCD4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DCE4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DCF4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DD08);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0AC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0B8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0CC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0D8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0E4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0F4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C100);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C110);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C118);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DD88);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DDC8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C128);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C138);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C148);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C15C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C170);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C188);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000DE44);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C1A0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C1B0);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C2F0);
#else
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011794);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011814);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001181C);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011824);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001182C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011838);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011844);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011854);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001185C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011868);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011870);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001187C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011888);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011894);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118A0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118AC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118B4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E094);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E0AC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E0C4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E0E4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E104);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E120);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E140);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E158);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E16C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E17C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E18C);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118C0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E1AC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E1B8);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118CC);

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118D8);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118E8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118F4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011908);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011914);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011920);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011930);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001193C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011948);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011950);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001195C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011968);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011978);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011988);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011994);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119A0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119B0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119C0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119D0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119E0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119F0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A00);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A10);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A20);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A30);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A40);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A50);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A60);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A70);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A84);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A94);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AA4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AB0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011ABC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AC8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AD8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AE4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AF0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AFC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B0C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B18);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B24);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B30);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B40);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B4C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B58);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B64);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B74);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B80);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B8C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B98);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BA8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BB4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BC0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BCC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BDC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BE8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BF4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C00);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C10);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C1C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C28);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C34);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C44);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C50);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C5C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C68);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C78);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C88);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C98);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CA8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CB8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CC8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CD8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CE8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CF8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011D28);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011D6C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011D9C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011DE0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E10);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E40);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E4C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E5C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E6C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E78);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E84);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E98);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011EAC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011EC4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011ED4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011EE8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011EF8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F10);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F54);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F64);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C3F8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C538);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F70);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F7C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F84);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F90);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F9C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011FAC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011FC0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011FD8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011FF0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012010);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012030);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001204C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001206C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012084);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012098);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120A8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120B8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120C8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120D8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120E4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120EC);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120F4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E234);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E208);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E3C8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E5C8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E608);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E644);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E248);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E408);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E5C8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E648);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E684);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C688);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120FC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012110);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E6D0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012114);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000004C8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000005F8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000068C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000085C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000A3C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000AE4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000B68);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000BEC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000C70);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000CF4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000D70);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001240);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000128C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000012BC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000012EC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000131C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000134C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000013B8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000143C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000014D8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000192C);

void func_00001B74(s32 arg0) {
    func_0000192C(arg0, D_0001D6BC + func_00004CE8(arg0, (s32) &D_0001D6BC, D_0001D6B8));
}

void func_00001BC0(void) {
    D_0001D6B3 = 0;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001BCC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001C24);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001D7C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001E04);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00003CB4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000401C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00004210);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00004528);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000047A0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00004A8C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00004B74);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00004C20);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00004CE8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000051C0);

void func_000058A0(void) {
    if (D_0001D6D0 == 0) {
        D_0001D6B4 = 0;
    }
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_000058BC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000058EC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00005984);

void func_000059A4(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        func_000051C0(0);
        func_00005B8C(arg0, 0);
    } else {
        func_000051C0(4);
    }
}
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121C0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121C4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121C8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121CC);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121D0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121D4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000059F0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00005B8C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00005D34);

s32 func_0000601C(struct Unk_func_0000601C_0 *arg0, s32 arg1) {
    if (arg0->unk0 != 0x40) {
        return arg0->unk34 + (arg1 * 0x44);
    }
    return arg0->unk34 + (arg1 * 0x34);
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000605C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000607C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006134);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000620C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000062F4);

void func_00006344(void) {
    struct Unk_func_00006344_temp_v0 *temp_v0;

    if (D_0001D590 != 0) {

    } else {
        temp_v0 = scePaf_D4FAE7D0(D_0001D580->unk10);
        if (temp_v0 != NULL) {
            scePaf_5EBC648F(temp_v0, temp_v0->unk1B8);
        }
        scePaf_1A45C860(D_0001D580, 0);
    }
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_000063A0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000064B0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006630);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000066C8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006788);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000067F4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000068B8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006944);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000069A8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006ACC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006B90);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006BB4);

void func_00006D18(void) {
    func_00006BB4(1, 0xFFFF);
}

void func_00006D38(void) {
    func_00006BB4(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006D58);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006D88);

void func_00006DB8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00006F5C();
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006DD8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006DF8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006E48);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006EC0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006F5C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006F7C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00007030);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000070FC);

void func_000071C8(M2C_UNK **arg0) {
    *arg0 = &D_00012220;
    scePaf_4E67BB08();
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_000071F0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00007310);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00007320);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121F8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121FC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012200);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012204);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000500);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000664);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000750);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000006D8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000790);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000914);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000A98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00001188(void) {
    if (D_000160F0 == 0) {
        D_000160E0 = 0;
    }
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_000011A4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000125C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001244);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000012F4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000014CC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001A0C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001D68);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001EA8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001F14);

void func_00001B34(void) {
    scePaf_66FE90D7();
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002120);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000022FC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000029E8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002A6C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002AF0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002B8C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002C00);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002C7C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002CF8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002D74);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002DF0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002E6C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002EE8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002F64);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002FD0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00003044);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00003340);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00003788);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00003974);
#endif

#if FW_VERSION < 282
void func_000010D8(void) {
    D_0000F2A0 = 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00003A34);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00003BDC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00003FDC);

void func_00004044(void) {
    if (D_000160F0 == 0) {
        M2C_FIELD(D_00015F80, s32 *, 8) = 0;
        M2C_FIELD(D_00015F80, s32 *, 4) = 0;
        M2C_FIELD(D_00015F80, s32 *, 0xC) = 0;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000010E4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001194);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001244);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000012F4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000013F4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000015B0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000017EC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000192C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001988);

void func_00001B34(void) {
    scePaf_66FE90D7();
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001B50);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00001CF8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000021E4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000225C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000022D4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002364);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000023CC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000243C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000024AC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000251C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000258C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000025FC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000266C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000026DC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000273C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000027A4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002830);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002D00);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002EE8);

void func_00002F9C(void) {
    D_0000F156 = 0;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_00002FA8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00003058);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000326C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000032F0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000338C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000034C0);

void func_000035CC(void) {
    func_0000664C(D_0000F144);
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_000035EC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00003AFC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004B30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00003BAC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00003E90);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00003F24);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000040E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005114);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004118);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000048D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004998);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00004998(void) {
    D_00015FA8 = 0;
    scePaf_3481F595(D_0000F140, &D_000120FC);
    scePaf_D24E4016(scePaf_962FA087(), 6, D_000160EC);
    if (D_00015F9C != 0) {

    } else {
        func_000003E4();
    }
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_00005B20);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004A18);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00004AE8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00004C04);

void func_00004C24(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        func_00000A98(0);
        func_00004DE0(arg0, 0);
    } else {
        func_00000A98(4);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005E70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004C70);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004DE0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00004F50);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00004FB4);

s32 func_00004FE8(s32 arg0, s32 arg1) {
    return arg0 != M2C_FIELD(scePaf_3DD2A27B(arg1, &D_0000D384, 0x15, 0x14, func_00001B34), s8 *, 0x10);
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000503C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000515C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006B90);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00005244);

void func_00005364(void) {

}

void func_0000536C(void) {
    func_00005244(1, 0xFFFF);
}

void func_0000538C(void) {
    func_00005244(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_000053AC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000053DC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000540C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000547C(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    func_00005664((s32) arg0);
}
#endif

#if FW_VERSION < 282
void func_0000545C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005664((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_0000547C(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    func_00005664((s32) arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000549C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00005514);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000055B0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00005664);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000068F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005684);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000057A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006A74);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006B78);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006B90_v150);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005864);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00005874);
#else
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012208);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001220C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012210);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012214);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012220);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012228);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012230);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E7F8);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012238);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E7C0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E814);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E868);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E8E8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E968);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E9E8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E800);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E854);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E8A8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E928);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000E9A8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000EA28);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000EAA8);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001223C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C800);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C854);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C8A8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C928);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C9A8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CA28);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CAA8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CAAC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CAB0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CAC4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012240);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012294);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000122E8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001233C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012390);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012394);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012414);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012494);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012514);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012594);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000732C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000078E4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000077F0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00007868);

void func_000078E0(void) {
    sceUtility_private_3CEAE1DF(0);
    sceVshCommonUtil_249059B5();
}

void func_00007904(void) {
    sceKernelPowerLock(0);
}

void func_00007920(void) {
    sceVshCommonUtil_7683BE4D();
    sceUtility_private_56BEDCA4(0);
}

void func_00007944(void) {
    sceKernelPowerUnlock(0);
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_00007960);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00007A14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006318);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00006384);

void func_0000643C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        scePaf_4E67BB08(temp_v0);
    }
    func_0000967C();
    scePaf_F93D4E1F(M2C_FIELD(arg0, s32 *, 0x420));
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007E9C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00007F38);

void func_00007FB0(void) {
    sceUtility_private_3CEAE1DF(0);
    sceVshCommonUtil_249059B5();
}

void func_00007FD4(void) {
    sceKernelPowerLock(0);
}

void func_00007FF0(void) {
    sceVshCommonUtil_7683BE4D();
    sceUtility_private_56BEDCA4(0);
}

void func_00008014(void) {
    sceKernelPowerUnlock(0);
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_00008030);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00008164);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_00008210);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007B10);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007B28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000064E0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000065EC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000664C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000086C8(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_000086D0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000091B8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000091F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006EF0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008268);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000840C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00008558);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000085BC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00008E9C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00009020);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00009FB4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00009FF0);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A064);

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000079F0(void *arg0, s32 arg1) {
    scePaf_D1EE972C(M2C_FIELD(arg0, s32 *, 0x41C), arg1, 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x41C)));
}
#endif

#if FW_VERSION == 100
void func_000079F0(void *arg0, s32 arg1) {
    scePaf_D1EE972C(M2C_FIELD(arg0, s32 *, 0x418), arg1, 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x418)));
}
#endif

#if FW_VERSION == 282
void func_0000A164(struct Unk_func_0000A164_0 *arg0, M2C_UNK arg1) {
    scePaf_D1EE972C(arg0->unk41C, arg1, 0, scePaf_DC8B0309(arg0->unk41C));
}
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A1AC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A1C8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A1E4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A218);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009454);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007ADC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A250);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A270);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009490);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007B90);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00007C0C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A28C);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A2B8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000094E0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007C94);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00007E9C);
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A2DC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A2F8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A594);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A7A4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AA0C);

s32 func_0000AAC4(struct Unk_func_0000AAC4_0 *arg0) {
    func_0000B80C(arg0->unk8);
    return 1;
}

void func_0000AAE4(struct Unk_func_0000AAE4_0 *arg0) {
    s32 temp_a0;
    s32 temp_v1;

    temp_a0 = arg0->unk418;
    if (temp_a0 == 0) {

    } else {
        if (arg0->unk41C == 0) {
            arg0->unk41C = scePaf_4708AED4(temp_a0, &D_00012230);
        }
        if (arg0->unk410 == 0) {
            arg0->unk410 = scePaf_4708AED4(arg0->unk418, &D_00012228);
        }
        if ((arg0->unk41C != 0) && (arg0->unk410 != 0)) {
            if (arg0->unk470 == 1) {
                temp_v1 = arg0->unk484;
                arg0->unk474 = 0;
                if (temp_v1 > 0) {
                    arg0->unk484 = 0;
                    arg0->unk47C = (s32) (arg0->unk47C + temp_v1);
                }
                func_0000BDF4((s32) arg0);
            }
        }
    }
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AB98);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008164);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000099AC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000826C);
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AC4C);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AD20);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AD44);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008408);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00008588(void *arg0) {
    scePaf_AEEF2A7C(M2C_FIELD(arg0, s32 *, 0x41C), 0, 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x41C)));
    scePaf_AEEF2A7C(M2C_FIELD(arg0, s32 *, 0x41C), 1, 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x41C)));
}
#endif

#if FW_VERSION == 100
void func_00008588(void *arg0) {
    scePaf_AEEF2A7C(M2C_FIELD(arg0, s32 *, 0x418), 0, 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x418)));
    scePaf_AEEF2A7C(M2C_FIELD(arg0, s32 *, 0x418), 1, 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x418)));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000085E0(void *arg0) {
    scePaf_37DD37B8(M2C_FIELD(arg0, s32 *, 0x41C), 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x41C)));
}
#endif

#if FW_VERSION == 100
void func_000085E0(void *arg0) {
    scePaf_37DD37B8(M2C_FIELD(arg0, s32 *, 0x418), 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x418)));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00008618(void *arg0) {
    s32 temp_s1;

    temp_s1 = scePaf_79F4AE65(M2C_FIELD(arg0, s32 *, 0x41C));
    scePaf_B2ED6CAA(M2C_FIELD(arg0, s32 *, 0x41C));
    return temp_s1;
}
#endif

#if FW_VERSION == 100
s32 func_00008618(void *arg0) {
    s32 temp_s1;

    temp_s1 = scePaf_79F4AE65(M2C_FIELD(arg0, s32 *, 0x418));
    scePaf_B2ED6CAA(M2C_FIELD(arg0, s32 *, 0x418));
    return temp_s1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008658);
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AD68);

void func_0000AEF8(struct Unk_func_0000AEF8_0 *arg0) {
    scePaf_AEEF2A7C(arg0->unk41C, 0, 0, scePaf_DC8B0309(arg0->unk41C));
    scePaf_AEEF2A7C(arg0->unk41C, 1, 0, scePaf_DC8B0309(arg0->unk41C));
}

void func_0000AF50(struct Unk_func_0000AF50_0 *arg0) {
    scePaf_37DD37B8(arg0->unk41C, 0, scePaf_DC8B0309(arg0->unk41C));
}

s32 func_0000AF88(struct Unk_func_0000AF88_0 *arg0) {
    s32 temp_s1;

    temp_s1 = scePaf_79F4AE65(arg0->unk41C);
    scePaf_B2ED6CAA(arg0->unk41C);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AFC8);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B0EC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B1C0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000088B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A1EC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000089A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A54C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008AE0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008D44);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00008E68);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00008F78);
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B254);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B300);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B4EC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B5E4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B80C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B8E4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BB54);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BB88);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BD84);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BDF4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BECC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BFB8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C108);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C238);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C2D4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000090A0);
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C370);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C404);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009284);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C560);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_000094D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AE78);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AF80);

void func_0000B01C(s32 arg0) {
    D_0001617C = arg0;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B028);

s32 func_0000B074(void) {
    return D_00016168;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009548);

s32 func_0000967C(void) {
    s32 var_v0;

    var_v0 = D_0000F360 - 1;
    D_0000F360 = var_v0;
    if (var_v0 > 0) {

    } else {
        func_0000E7F0((s32) &D_0000E48C, 0x15);
        func_0000E7F0((s32) &D_0000E684, 0x15);
        func_0000E7F0((s32) &D_0000E87C, 0x15);
        func_0000E7F0((s32) &D_0000EA74, 0x15);
        func_0000E7F0((s32) &D_0000EC6C, 0x15);
        func_0000E7F0((s32) &D_0000EE64, 0x15);
        var_v0 = func_0000EDB8((s32) &D_0000F364, 0, 0x24);
    }
    return var_v0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C67C);

s32 func_0000C710(struct Unk_func_0000C710_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk0;
    if (temp_v0 != 0) {
        scePaf_545FE2DA(temp_v0);
        arg0->unk0 = 0;
    }
    arg0->unk4 = 0;
    arg0->unk6 = 0;
    return 1;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C758);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C79C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C7D8);

s32 func_0000C800(struct Unk_func_0000C800_0 *arg0) {
    s32 var_a1;
    u16 temp_v0;

    var_a1 = 0;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk4;
        if (temp_v0 != 0) {
            var_a1 = M2C_FIELD(((temp_v0 * 4) + arg0->unk0), s32 *, -4);
        }
    }
    return var_a1;
}

u16 func_0000C828(struct Unk_func_0000C828_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C830);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C858);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C8B8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C8F0);

s32 func_0000C960(s32 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if ((u32) (arg0 - 0x1100) >= 0x60U) {
        var_a1 = 2;
        if ((u32) (arg0 - 0x1160) >= 0x48U) {
            var_a1 = ((u32) (arg0 - 0x11A8) >= 0x58U) ? 0 : 3;
        }
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C998);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CA64);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CAEC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CAF4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CAFC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB04);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB0C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB14);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB7C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB84);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB8C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB94);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB9C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CBA4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CBAC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CBB4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CBBC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CBC4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CDFC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D160);

s32 func_0000D2AC(struct Unk_func_0000D2AC_0 *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (arg0->unk4 != 1) {
        func_0000C79C((u8 *)arg0 + 0x18);
        func_0000D160((s32) arg0);
        func_0000D380((s32) arg0);
        var_a1 = 1;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D300);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D380);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D520);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D568);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D6F8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D7A0);

s32 func_0000D814(struct Unk_func_0000D814_0 *arg0) {
    return arg0->unkC;
}

s32 func_0000D81C(struct Unk_func_0000D81C_0 *arg0) {
    return arg0->unk10;
}

void func_0000D824(struct Unk_func_0000D824_0 *arg0, struct Unk_func_0000D824_1 *arg1) {
    arg0->unk8 = (s32) arg1->unk0;
    arg0->unkC = (s32) arg1->unk4;
    arg0->unk10 = (s32) arg1->unk8;
    arg0->unk14 = (s32) arg1->unkC;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D848);

u16 func_0000D85C(struct Unk_func_0000D85C_0 *arg0) {
    return arg0->unk14;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D864);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D998);

void func_0000DA5C(s32 arg0) {
    D_0001D76C = arg0;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DA68);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DAF8);

s32 func_0000DB68(void) {
    return D_0001D74C;
}

void func_0000DB74(s32 arg0) {
    if (D_0001D77C != 0) {
        func_0000DF5C(arg0);
    } else {
        func_0000DEBC(arg0);
    }
}

s32 func_0000DBB0(void) {
    return D_00016F8C;
}

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001273C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000127B4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012800);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001286C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001288C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000128B4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000128D4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000128F8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012918);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001293C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012960);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012988);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012998);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001299C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000129CC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012A04);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012A14);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012A28);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012A40);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012A50);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012A6C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012A88);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012AAC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012AD4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012AF4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012B18);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012B38);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012B5C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012B80);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012BA8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012BB8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012BE8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012C20);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012C30);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012C44);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012C5C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012C6C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012C94);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000EEB4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CEFC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012CC0);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012D00);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012D18);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012D30);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012D48);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012D60);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012D78);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012D90);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012DA8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012DC0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012DD8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012DF0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E08);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000F024);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000D06C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E24);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E44);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E5C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E74);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E90);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000F070);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000F0B0_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000F0E4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000D0FC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000D130);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012EB0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012EE4);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012F0C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012F1C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012F2C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012F3C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012F4C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012F5C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012F6C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012F7C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012F8C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012F9C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012FAC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012FC0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012FD8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012FE8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012FF8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001300C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000F224);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000D268);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013024);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013048);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000D290);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001304C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013050);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013054);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013058);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001305C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013060);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013064);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013068);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001306C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013070);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013074);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013078);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001307C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013080);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013084);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013088);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001308C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013090);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013094);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009724);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000097E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009A70);

void func_00009C00(s32 arg0, s32 arg1) {
    D_0000F390 = arg0;
    D_0000F394 = arg1;
}

void func_00009C14(void) {
    func_00009F7C();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B264);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B2D0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B2FC);

void func_0000B328(void) {

}
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013098);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000130B4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013104);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001312C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000131AC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000131D4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013220);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001326C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013290);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000132A0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000132D4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000132F0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DBBC);

void func_0000DE34(s32 arg0, s32 arg1) {
    D_0001D764 = arg0;
    D_0001D768 = arg1;
}

void func_0000DE48(void) {
    func_0000E870();
}

s32 func_0000DE64(void) {
    return D_0001D77C;
}

s32 func_0000DE70(void) {
    s32 var_v1;

    D_00016F8C = -1;
    var_v1 = 0;
    D_0001D78C = 0;
    if (D_0001D77C != 0) {
        var_v1 = func_0000F894();
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DEBC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DF5C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DFD8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E048);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E07C);

void func_0000E0B0(void) {
}
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E0B8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B37C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009C7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B59C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B700);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B788);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E104);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E128);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E34C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E504);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E60C);
#endif

#if FW_VERSION == 100
s32 func_0000E6A0(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;

    if (arg1 > 0) {
        var_s1 = arg0;
        var_s0 = arg1;
        do {
            var_s0 -= 1;
            func_00009C7C(var_s1);
            var_s1 += 0x18;
        } while (var_s0 != 0);
    }
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E6A0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E700);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E7F0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009F7C);
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E870);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E8C4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009FD8);
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E900);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E9CC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EA98);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EAD8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EBB8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A1B8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A240);
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EC5C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000ED24);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000ED64);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EDB8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BC30);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BE88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A310);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A478);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EDE0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F054);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F134);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F16C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F4E8);

void func_0000F664(void) {
    if (D_0001D77C != 0) {
        func_0000F4E8();
    } else {
        func_0000F16C();
    }
}

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F6A0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F734);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F788);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F7CC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F894);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F970);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000FB4C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000FBA4);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000FBD8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000FC30);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000FC7C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000FFC4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0001002C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000100A0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010418);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0001063C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000106C4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000106F8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010770);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010834);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010864);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010ACC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010BE0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010D44);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013378);
