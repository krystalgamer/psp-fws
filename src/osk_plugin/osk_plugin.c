#include "common.h"
#include "osk_plugin_decls.h"

INCLUDE_ASM("nonmatchings/osk_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/osk_plugin", module_start);

#if FW_VERSION == 100
s32 module_stop(void) {
    func_0000B888();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000015C);
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_00010E74();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000015C);
#endif

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

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF20);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF2C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF38);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF44);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF50);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF5C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF68);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000BF74);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001163C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011648);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011658);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011664);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011674);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011688);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011698);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000116B0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000116C8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000116D8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000116EC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011704);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011720);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011730);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000025C);

#if FW_VERSION == 100
void func_00000330(void) {
    D_0000F140 = 0;
}
#endif

#if FW_VERSION == 100
void func_00000368(void) {
    func_000048D8();
}
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000368);
#endif

#if FW_VERSION != 100
void func_0000038C(void) {
    func_00006134();
}
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_000003A8);

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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000440);
#endif

#if FW_VERSION != 100
void func_0000044C(void) {
    scePaf_66FE90D7();
}
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C008);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C010);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C020);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C02C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C03C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C050);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C064);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C070);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C07C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C08C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C09C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0B8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0CC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0D8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0E4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C0F4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C100);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C110);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C118);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C128);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C138);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C148);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C15C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C170);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C188);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C1A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C1B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C2F0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011794);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011814);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001181C);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011824);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001182C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011838);
#endif

#if FW_VERSION != 100
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

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118C0);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118CC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118D8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118E8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000118F4);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011908);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011914);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011920);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011930);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001193C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011948);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011950);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001195C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011968);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011978);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011988);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011994);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119A0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119B0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119C0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119D0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000119F0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A00);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A10);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A20);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A30);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A40);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A50);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A60);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A70);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A84);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011A94);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AA4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AB0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011ABC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AC8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AD8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AE4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AF0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011AFC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B0C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B24);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B30);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B40);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B4C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B58);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B64);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B74);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B80);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B8C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011B98);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BA8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BB4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BC0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BCC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BDC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BE8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011BF4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C00);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C10);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C1C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C28);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C34);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C44);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C50);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C5C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C68);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C78);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C88);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011C98);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CA8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CB8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CC8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CD8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CE8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011CF8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011D28);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011D6C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011D9C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011DE0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E10);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E40);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E4C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E5C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E6C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E78);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E84);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011E98);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011EAC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011EC4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011ED4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011EE8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011EF8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F10);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F54);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F64);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C3F8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C538);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F70);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F7C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F84);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F90);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011F9C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011FAC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011FC0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011FD8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00011FF0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012010);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012030);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001204C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001206C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012084);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012098);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120A8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120B8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120C8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120D8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120E4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120EC);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120F4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C688);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000120FC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012110);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012114);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000004C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000005F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000068C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000085C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000A3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000AE4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000B68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000BEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000C70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000CF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000D70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00001240);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000128C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000012BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000012EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000131C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000134C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000013B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000143C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000014D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000192C);
#endif

#if FW_VERSION != 100
void func_00001B74(s32 arg0) {
    func_0000192C(arg0, D_0001D6BC + func_00004CE8(arg0, (s32) &D_0001D6BC, D_0001D6B8));
}
#endif

#if FW_VERSION != 100
void func_00001BC0(void) {
    D_0001D6B3 = 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00001BCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00001C24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00001D7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00001E04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00003CB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000401C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004210);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004528);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000047A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004A8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004B74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004C20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004CE8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000051C0);
#endif

#if FW_VERSION != 100
void func_000058A0(void) {
    if (D_0001D6D0 == 0) {
        D_0001D6B4 = 0;
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000058BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000058EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005984);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121D0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000059F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005B8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005D34);
#endif

#if FW_VERSION != 100
s32 func_0000601C(struct Unk_func_0000601C_0 *arg0, s32 arg1) {
    if (arg0->unk0 != 0x40) {
        return arg0->unk34 + (arg1 * 0x44);
    }
    return arg0->unk34 + (arg1 * 0x34);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000605C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000607C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006134);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000620C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000062F4);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000063A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000064B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006630);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000066C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006788);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000067F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000068B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006944);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000069A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006ACC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006B90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006BB4);
#endif

#if FW_VERSION != 100
void func_00006D18(void) {
    func_00006BB4(1, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_00006D38(void) {
    func_00006BB4(0, 0xFFFF);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006D58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006D88);
#endif

#if FW_VERSION != 100
void func_00006DB8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00006F5C();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006DD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006DF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006E48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006EC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006F5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006F7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007030);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000070FC);
#endif

#if FW_VERSION != 100
void func_000071C8(M2C_UNK **arg0) {
    *arg0 = &D_00012220;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000071F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007310);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007320);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121F8);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_000121FC);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012200);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012204);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000500);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000664);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000006D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000790);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000914);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00000A98);
#endif

#if FW_VERSION == 100
void func_000010D8(void) {
    D_0000F2A0 = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000010E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00001194);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00001244);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000012F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000013F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000015B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000017EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000192C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00001988);
#endif

#if FW_VERSION == 100
void func_00001B34(void) {
    scePaf_66FE90D7();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00001B50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00001CF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000021E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000225C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000022D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00002364);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000023CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000243C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000024AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000251C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000258C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000025FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000266C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000026DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000273C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000027A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00002830);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00002D00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00002EE8);
#endif

#if FW_VERSION == 100
void func_00002F9C(void) {
    D_0000F156 = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00002FA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00003058);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000326C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000032F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000338C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000034C0);
#endif

#if FW_VERSION == 100
void func_000035CC(void) {
    func_0000664C(D_0000F144);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000035EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00003AFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00003BAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00003E90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00003F24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000040E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004118);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000048D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004998);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004A18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004AE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004C04);
#endif

#if FW_VERSION == 100
void func_00004C24(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        func_00000A98(0);
        func_00004DE0(arg0, 0);
    } else {
        func_00000A98(4);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004C70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004DE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004F50);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00004FB4);
#endif

#if FW_VERSION == 100
s32 func_00004FE8(s32 arg0, s32 arg1) {
    return arg0 != M2C_FIELD(scePaf_3DD2A27B(arg1, &D_0000D384, 0x15, 0x14, func_00001B34), s8 *, 0x10);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000503C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000515C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006B90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005244);
#endif

#if FW_VERSION == 100
void func_00005364(void) {

}
#endif

#if FW_VERSION == 100
void func_0000536C(void) {
    func_00005244(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_0000538C(void) {
    func_00005244(0, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000053AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000053DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000540C);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000549C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005514);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000055B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005664);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005684);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000057A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005864);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00005874);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012208);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001220C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012210);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012214);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012220);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012228);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012230);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012238);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001223C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C800);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C854);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C8A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C928);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000C9A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CA28);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CAA8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CAAC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CAB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CAC4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012240);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012294);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000122E8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001233C);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012390);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012394);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012414);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012494);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012514);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012594);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000732C);

INCLUDE_ASM("nonmatchings/osk_plugin", func_000078E4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006318);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006384);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007E9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007F38);
#endif

#if FW_VERSION != 100
void func_00007FB0(void) {
    sceUtility_private_3CEAE1DF(0);
    sceVshCommonUtil_249059B5();
}
#endif

#if FW_VERSION != 100
void func_00007FD4(void) {
    sceKernelPowerLock(0);
}
#endif

#if FW_VERSION != 100
void func_00007FF0(void) {
    sceVshCommonUtil_7683BE4D();
    sceUtility_private_56BEDCA4(0);
}
#endif

#if FW_VERSION != 100
void func_00008014(void) {
    sceKernelPowerUnlock(0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008030);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008164);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_00008210);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000064E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000065EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000664C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00006EF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008268);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000840C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008558);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000085BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008E9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009020);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009FB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009FF0);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A064);

#if FW_VERSION == 100
void func_000079F0(void *arg0, s32 arg1) {
    scePaf_D1EE972C(M2C_FIELD(arg0, s32 *, 0x418), arg1, 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x418)));
}
#endif

#if FW_VERSION != 100
void func_0000A164(struct Unk_func_0000A164_0 *arg0, M2C_UNK arg1) {
    scePaf_D1EE972C(arg0->unk41C, arg1, 0, scePaf_DC8B0309(arg0->unk41C));
}
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A1AC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A1C8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A1E4);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A218);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007ADC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A250);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A270);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007B90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007C0C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A28C);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A2B8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007C94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00007E9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A2DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A2F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A594);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A7A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AA0C);
#endif

#if FW_VERSION != 100
s32 func_0000AAC4(struct Unk_func_0000AAC4_0 *arg0) {
    func_0000B80C(arg0->unk8);
    return 1;
}
#endif

#if FW_VERSION != 100
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

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AB98);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008164);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000826C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AC4C);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AD20);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AD44);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008408);
#endif

#if FW_VERSION == 100
void func_00008588(void *arg0) {
    scePaf_AEEF2A7C(M2C_FIELD(arg0, s32 *, 0x418), 0, 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x418)));
    scePaf_AEEF2A7C(M2C_FIELD(arg0, s32 *, 0x418), 1, 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x418)));
}
#endif

#if FW_VERSION == 100
void func_000085E0(void *arg0) {
    scePaf_37DD37B8(M2C_FIELD(arg0, s32 *, 0x418), 0, scePaf_DC8B0309(M2C_FIELD(arg0, s32 *, 0x418)));
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008658);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AD68);
#endif

#if FW_VERSION != 100
void func_0000AEF8(struct Unk_func_0000AEF8_0 *arg0) {
    scePaf_AEEF2A7C(arg0->unk41C, 0, 0, scePaf_DC8B0309(arg0->unk41C));
    scePaf_AEEF2A7C(arg0->unk41C, 1, 0, scePaf_DC8B0309(arg0->unk41C));
}
#endif

#if FW_VERSION != 100
void func_0000AF50(struct Unk_func_0000AF50_0 *arg0) {
    scePaf_37DD37B8(arg0->unk41C, 0, scePaf_DC8B0309(arg0->unk41C));
}
#endif

#if FW_VERSION != 100
s32 func_0000AF88(struct Unk_func_0000AF88_0 *arg0) {
    s32 temp_s1;

    temp_s1 = scePaf_79F4AE65(arg0->unk41C);
    scePaf_B2ED6CAA(arg0->unk41C);
    return temp_s1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000AFC8);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B0EC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B1C0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000088B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000089A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008AE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008D44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008E68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00008F78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B254);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B300);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B4EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B5E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B80C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000B8E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BB54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BB88);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BD84);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BDF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BECC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000BFB8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C108);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C238);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C2D4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000090A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C370);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C404);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009284);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C560);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000094D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009548);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C67C);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C758);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C79C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C7D8);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
u16 func_0000C828(struct Unk_func_0000C828_0 *arg0) {
    return arg0->unk4;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C830);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C858);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C8B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C8F0);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000C998);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CA64);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CAEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CAF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CAFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB0C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB14);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB84);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CB9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CBA4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CBAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CBB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CBBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CBC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000CDFC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D160);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D300);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D380);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D520);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D568);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D6F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D7A0);
#endif

#if FW_VERSION != 100
s32 func_0000D814(struct Unk_func_0000D814_0 *arg0) {
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_0000D81C(struct Unk_func_0000D81C_0 *arg0) {
    return arg0->unk10;
}
#endif

#if FW_VERSION != 100
void func_0000D824(struct Unk_func_0000D824_0 *arg0, struct Unk_func_0000D824_1 *arg1) {
    arg0->unk8 = (s32) arg1->unk0;
    arg0->unkC = (s32) arg1->unk4;
    arg0->unk10 = (s32) arg1->unk8;
    arg0->unk14 = (s32) arg1->unkC;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D848);
#endif

#if FW_VERSION != 100
u16 func_0000D85C(struct Unk_func_0000D85C_0 *arg0) {
    return arg0->unk14;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D864);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000D998);
#endif

#if FW_VERSION != 100
void func_0000DA5C(s32 arg0) {
    D_0001D76C = arg0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DA68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DAF8);
#endif

#if FW_VERSION != 100
s32 func_0000DB68(void) {
    return D_0001D74C;
}
#endif

#if FW_VERSION != 100
void func_0000DB74(s32 arg0) {
    if (D_0001D77C != 0) {
        func_0000DF5C(arg0);
    } else {
        func_0000DEBC(arg0);
    }
}
#endif

#if FW_VERSION != 100
s32 func_0000DBB0(void) {
    return D_00016F8C;
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001273C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000127B4);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000CEFC);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000D06C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E24);
#endif

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E44);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E5C);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E74);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012E90);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000D0FC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000D130);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00012EB0);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0000D268);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_000097E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009A70);
#endif

#if FW_VERSION == 100
void func_00009C00(s32 arg0, s32 arg1) {
    D_0000F390 = arg0;
    D_0000F394 = arg1;
}
#endif

#if FW_VERSION == 100
void func_00009C14(void) {
    func_00009F7C();
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013098);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000130B4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013104);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001312C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000131AC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000131D4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013220);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_0001326C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013290);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000132A0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000132D4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/osk_plugin", D_000132F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DBBC);
#endif

#if FW_VERSION != 100
void func_0000DE34(s32 arg0, s32 arg1) {
    D_0001D764 = arg0;
    D_0001D768 = arg1;
}
#endif

#if FW_VERSION != 100
void func_0000DE48(void) {
    func_0000E870();
}
#endif

#if FW_VERSION != 100
s32 func_0000DE64(void) {
    return D_0001D77C;
}
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DEBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DF5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000DFD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E048);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E07C);
#endif

#if FW_VERSION != 100
void func_0000E0B0(void) {
}
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E0B8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009C7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E104);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E128);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E34C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E504);
#endif

#if FW_VERSION != 100
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
#else
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E6A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E700);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E7F0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009F7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E870);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E8C4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00009FD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E900);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000E9CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EA98);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EAD8);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EBB8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A1B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A240);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EC5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000ED24);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000ED64);

INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EDB8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A310);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000A478);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000EDE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F054);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F134);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F16C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F4E8);
#endif

#if FW_VERSION != 100
void func_0000F664(void) {
    if (D_0001D77C != 0) {
        func_0000F4E8();
    } else {
        func_0000F16C();
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F6A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F734);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F788);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F7CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F894);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000F970);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_0000FB4C);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00010770);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00010770);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010834);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00010864);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/osk_plugin", func_00010864);
#endif

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010ACC);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010BE0);

INCLUDE_ASM("nonmatchings/osk_plugin", func_00010D44);

INCLUDE_RODATA("nonmatchings/osk_plugin", D_00013378);
