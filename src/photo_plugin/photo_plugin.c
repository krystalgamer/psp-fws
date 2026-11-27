#include "common.h"
#include "photo_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/photo_plugin", module_start);

s32 module_stop(void) {
    func_0002D248();
    return 0;
}

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000015C);
#else
void func_0000015C(s32 arg0) {
    _ZN3paf6Module12SetInterfaceEiPv(arg0, 1, (s32) &D_00031750);
}
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000180);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EE7C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EE80);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EE90);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EE98);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEAC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEC4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EED0_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EED0_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EED0_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEDC);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEEC_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEEC_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEEC_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF00);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF18);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF30);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF44);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF5C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF74);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF8C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EFA0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EFC0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EFFC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F008);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F020);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F028);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F030);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F038);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F08C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F0A8);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F320_v352);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F32C_v352);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F330_v352);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F334_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F320_v351);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F32C_v351);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F330_v351);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F334_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F320_v350);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F32C_v350);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F330_v350);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F334_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F394);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F3A0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F3C4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F3D4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F538);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E4E4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F810);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E514);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E518);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/photo_plugin", func_000001BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin", func_00000300);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E540);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000458);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/photo_plugin", func_000004EC);
#endif

#if FW_VERSION < 152
void func_000004EC(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x80004, (s32) &func_00000180, 0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E540);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000518);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000678);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000006D4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000724);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000076C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E540);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E570);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E57C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E594);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E5A8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00021D40);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E5C0);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E5DC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E5FC);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00022D20);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E604);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00021DA4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_00021DBC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_00021DD0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_00021DE8);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E624);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E638);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E650);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E674);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E690);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E6AC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E6CC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E6E8);

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E708);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E728);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00022DE0);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E73C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E750);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E760);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E778);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E78C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E7A0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E7B8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E7C8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E7E0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E7F4);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00022EC4);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E80C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E824);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E840);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E85C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E878);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E888);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E8A0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E8B8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E8D0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E8E8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E904);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E924);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E944);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E95C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E978);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E994);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E9B4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E9D8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002E9FC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EA20);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EA34);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EA48);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EA60);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EA74);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EA94);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EAB8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EAD0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00022268);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EAE8);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EB00);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EB14);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EB28);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EB40);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EB58);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EB70);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EB84);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EB98);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EBA8);

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EBBC);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EBD0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EBF8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EC20);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EC34);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EC48);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EC5C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EC70);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EC8C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002ECA0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002ECB8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002ECD4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00022454);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_00022470);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002ECE8);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002ED0C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002ED20);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_000233B8);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002ED38);

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002ED54);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002ED6C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002ED88);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EDA8);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EDC0);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EDE4);

#if FW_VERSION >= 150
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EDEC);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EDFC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EE00);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EE0C);
#endif

#if FW_VERSION >= 150
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EE14);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FD84);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EE18);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000007B0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000890);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000008EC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000093C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000984);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000009C8);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/photo_plugin", func_000009D0);
#endif

#if FW_VERSION < 152
void func_000009D0(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x80004, (s32) &func_00000180, 0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_000009FC);
#else
INCLUDE_ASM("nonmatchings/photo_plugin", func_00000A64);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000B28);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000B78);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/photo_plugin", func_00000D2C);
#else
void func_00000D2C(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x2000C, (s32) &func_00000B78, 0);
}
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000D58);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000D80);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/photo_plugin", func_00000EBC);
#else
void func_00000EBC(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x2000C, (s32) &func_00000D80, 0);
}
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000EE8);

void func_00000FC0(void) {
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00000FC8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00001038);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/photo_plugin", func_000010D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000104C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00001088);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000010B8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000010E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin", func_00001038_v100);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/photo_plugin", func_000010F8);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_000011A4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000011F4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00001244);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/photo_plugin", func_000013C8);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000140C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00001470);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000014D4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00001518);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00001560);

#if FW_VERSION >= 260
void func_000015B0(s32 arg0, s32 arg1) {
    func_00001640(arg0, 0, 1, arg1);
}

void func_000015D4(s32 arg0, s32 arg1) {
    func_00001640(arg0, 0, -1, arg1);
}

void func_000015F8(s32 arg0, s32 arg1) {
    func_00001640(arg0, -1, 0, arg1);
}

void func_0000161C(s32 arg0, s32 arg1) {
    func_00001640(arg0, 1, 0, arg1);
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00001640);
#else
INCLUDE_ASM("nonmatchings/photo_plugin", func_000015A4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00001840);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00001ADC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00001CF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin", func_00001BB0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00001CC4);
#else
INCLUDE_ASM("nonmatchings/photo_plugin", func_00001F0C);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_000020B8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin", func_00001F80);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00002118);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000215C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000021A0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000021E4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002230);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000227C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000022C8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002314);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002360);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000023AC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000023F8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002444);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00002490);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_000024D4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002704);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002764);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin", func_000025C4);
#else
INCLUDE_ASM("nonmatchings/photo_plugin", func_000027A0);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_000027FC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002838);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002874);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000028B0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002914);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002940);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000296C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin", func_000027E8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002884);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000293C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000029C4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_000029B8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002A40);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002B54);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002B98);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/photo_plugin", func_00002E40);
#else
void func_00002E40(s32 arg0) {
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(arg0, 0x2000C, (s32) &func_00002B98, 0);
}
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002E6C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002E94);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00002EBC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002EE8);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00002F10);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00002B70);
#else
INCLUDE_ASM("nonmatchings/photo_plugin", func_00002FE8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003384);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_000033B4);

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_00002DF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003224);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003264);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003764);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000033A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00002F24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_000034B0);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003570);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0003015C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FFAC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FEBC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FE04);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F758);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F748);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F240);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F238);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003720);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003764);
#endif

void func_0000385C(void) {
    func_00003764(1, 0xFFFF);
}

void func_0000387C(void) {
    func_00003764(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000389C);

#if FW_VERSION == 100
void func_00020E98(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00003814((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_000038CC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000038FC);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000394C);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_000039A8);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/photo_plugin", func_000039F8);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003AE0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003B74);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000394C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000372C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003814);
#endif

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003C34);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003CE8);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003884);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003A6C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003B08);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003BCC);

s32 func_00003C90(void *arg0) {
    s32 var_a0;
    u8 *temp_v0;
    u8 *var_v1;

    temp_v0 = M2C_FIELD(arg0, u8 **, 4);
    var_a0 = 0;
    if (temp_v0 != NULL) {
        var_v1 = temp_v0;
        if (*temp_v0 != 0) {
            do {
                var_v1 += 1;
                var_a0 += 1;
            } while (*var_v1 != 0);
        }
        var_a0 += 1;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003CC8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003DB4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003E24);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003F04);
#endif

#if FW_VERSION >= 201
void func_00003D94(struct Unk_func_00003D94_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_0002F158;
    arg0->unk8 = arg1;
    arg0->unk4 = 0;
    arg0->unkC = 0;
}

void func_00003DB0(struct Unk_func_00003DB0_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_0002F158;
    arg0->unk8 = arg1;
    arg0->unk4 = 0;
    arg0->unkC = 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003DCC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00003DCC(struct Unk_func_00003DCC_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk0 = &D_0002F158;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
        arg0->unk4 = 0;
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003E14);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00003E14(struct Unk_func_00003E14_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk0 = &D_0002F158;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
        arg0->unk4 = 0;
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003E5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00003E5C(struct Unk_func_00003E5C_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    arg0->unk0 = &D_0002F158;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
        arg0->unk4 = 0;
    }
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003EAC);

void func_00003F20(struct Unk_func_00003F20_0 *arg0, s32 arg1) {
    arg0->unkC = arg1;
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003F28);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003FB8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_00003FB8(M2C_UNK **arg0) {
    *arg0 = &D_0002F120;
    func_00004460(arg0);
    func_00003DCC(arg0);
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003FF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_00003FF0(M2C_UNK **arg0) {
    *arg0 = &D_0002F120;
    func_00004460(arg0);
    func_00003DCC(arg0);
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00004028);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_00004028(M2C_UNK **arg0) {
    *arg0 = &D_0002F120;
    func_00004460(arg0);
    func_00003DCC(arg0);
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00004068);

s32 func_0000413C(struct Unk_func_0000413C_0 *arg0) {
    return arg0->unk18 == 2;
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000414C);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin", func_00004168);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000424C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00004328);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_00004354);
#endif

#if FW_VERSION >= 350
void func_00004354(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = scePaf_61A8E8EC(0xC);
    M2C_FIELD(temp_v0, s32 *, 4) = arg1;
    M2C_FIELD(temp_v0, s32 *, 8) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0) = arg0;
    M2C_FIELD(arg0, s32 *, 0x30) = scePaf_3EDD45EF(0, func_00004ADC, temp_v0, -1, -1, &func_00004B04);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_00004354(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_00004354_temp_v0 *temp_v0;

    temp_v0 = _Znwj(0xC);
    temp_v0->unk0 = arg0;
    temp_v0->unk4 = arg1;
    temp_v0->unk8 = arg2;
    Job_Start(0, func_00004ADC, temp_v0, -1, -1, &func_00004B04);
}
#endif

#if FW_VERSION >= 350
s32 func_0000464C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_v0 != 0) {
        scePaf_8429BA7C(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
s32 func_0000464C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_v0 != 0) {
        Job_Cancel2(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000440C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000044A0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_000043C4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00004434);
#endif

#if FW_VERSION >= 350
void func_00004460(struct Unk_func_00004460_0 *arg0) {
    s32 temp_v0;

    func_000049D4();
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    } else {
        scePaf_8429BA7C(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 350
void func_00004460(struct Unk_func_00004460_0 *arg0) {
    s32 temp_v0;

    func_000049D4();
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    } else {
        Job_Cancel2(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
}
#endif

#if FW_VERSION == 201
void func_00004460(struct Unk_func_00004460_0 *arg0) {
    s32 temp_v0;

    func_000049D4();
    temp_v0 = arg0->unk34;
    if (temp_v0 == 0) {
        arg0->unk34 = 0;
    } else {
        Job_Cancel2(0, temp_v0);
        arg0->unk34 = 0;
    }
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_000044A8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEB4);
#endif

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F244);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEBC);
#endif

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F258);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEC8);
#endif

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F264);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EED0);
#endif

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F270);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EED8);
#endif

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F27C);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEE0);
#endif

#if FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F298);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F290_v260);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEEC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEF4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EEF8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000457C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000492C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000049D4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00004A3C);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_00004ADC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
void func_00004ADC(void ***arg0) {
    void **temp_a0;

    sceKernelPowerLock(0);
    sceKernelPowerUnlock(0);
    temp_a0 = *arg0;
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x28)(temp_a0);
}
#endif

#if FW_VERSION == 250
void func_00004ADC(void ***arg0) {
    void **temp_a0;

    sceKernelPowerLock(0);
    sceKernelPowerUnlock(0);
    temp_a0 = *arg0;
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x24)(temp_a0);
}
#endif

#if FW_VERSION == 201
void func_00004ADC(void ***arg0) {
    struct Unk_vt_func_00004ADC_temp_a0 **temp_a0;

    temp_a0 = *arg0;
    (*temp_a0)->unk24(temp_a0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00004B04);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00004B94);

void func_00004CA4(void) {
    func_0000457C();
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00004CC0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00004CF4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_00004E1C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00004E1C(struct Unk_func_00003DCC_0 *arg0) {
    s32 temp_v0;

    arg0->unk0 = &D_0002F0E0;
    func_00005100(arg0);
    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        arg0->unk10 = 0;
    }
    func_00003DCC(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_00004E70);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00004E70(struct Unk_func_00003DCC_0 *arg0) {
    s32 temp_v0;

    arg0->unk0 = &D_0002F0E0;
    func_00005100(arg0);
    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        arg0->unk10 = 0;
    }
    func_00003DCC(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_00004EC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00004EC4(struct Unk_func_00003DCC_0 *arg0) {
    s32 temp_v0;

    arg0->unk0 = &D_0002F0E0;
    func_00005100(arg0);
    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        arg0->unk10 = 0;
    }
    func_00003DCC(arg0);
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00004F20);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00004FD0);
#endif

#if FW_VERSION >= 350
void func_00005100(struct Unk_func_00003DCC_0 *arg0) {
    s32 temp_v0;

    func_00005214();
    func_00005468(arg0);
    temp_v0 = arg0->unk24;
    if (temp_v0 != 0) {
        scePaf_8429BA7C(0, temp_v0);
        arg0->unk24 = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00005100(struct Unk_func_00003DCC_0 *arg0) {
    s32 temp_v0;

    func_00005214();
    func_00005468(arg0);
    temp_v0 = arg0->unk24;
    if (temp_v0 != 0) {
        Job_Cancel2(0, temp_v0);
        arg0->unk24 = 0;
    }
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000514C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005214);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000559C);
#endif

#if FW_VERSION >= 201
void func_0000527C(s32 arg0) {
    func_0000529C(arg0, 0, 0);
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000529C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000053C8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005468);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005540);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF38);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/photo_plugin", func_000059D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF40);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000055A8);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000567C);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_00005AF4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_00005734);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_000057AC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000057E8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005834);
#endif

#if FW_VERSION >= 350
void func_00005870(void) {
    struct Unk_D_00031B84 *temp_s0;

    if ((D_00031B84 == NULL) || (M2C_FIELD(D_00031B84, s32 *, 0x50) == 0)) {
        func_0000608C((s32) D_00031B84);
        temp_s0 = D_00031B84;
        M2C_FIELD(temp_s0, s32 *, 0x50) = scePaf_3EDD45EF(0, func_00006BF4, NULL, -1, -1, &func_00006C34);
    }
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 350
void func_00005870(void) {
    struct Unk_D_00031B84 *temp_s0;

    if ((D_00031B84 == NULL) || (M2C_FIELD(D_00031B84, s32 *, 0x50) == 0)) {
        func_0000608C((s32) D_00031B84);
        temp_s0 = D_00031B84;
        M2C_FIELD(temp_s0, s32 *, 0x50) = Job_Start(0, func_00006BF4, NULL, -1, -1, &func_00006C34);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
void func_00005870(void) {
    struct Unk_func_00005870_temp_s0 *temp_s0;

    if ((D_00031B84 == NULL) || (D_00031B84->unk4C == 0)) {
        func_0000608C((s32) D_00031B84);
        temp_s0 = D_00031B84;
        temp_s0->unk4C = Job_Start(0, func_00006BF4, NULL, -1, -1, &func_00006C34);
    }
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_00005C70);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005DA8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_00005C60);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005D84);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00005EA8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005F20);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005F98);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_000058DC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005AA8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005D60);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00005E4C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00005F40);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000608C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000061D0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00006760);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000067D8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000685C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000069B4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00006BF4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00006C34);
#endif

#if FW_VERSION >= 350
void func_00006C40(struct Unk_vt_func_00006C40_arg0 **arg0, struct Unk_vt_func_00006C40_arg1 **arg1) {
    scePaf_617BE327((*arg0)->unk4, (*arg1)->unk4);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00006C40(struct Unk_vt_func_00006C40_arg0 **arg0, struct Unk_vt_func_00006C40_arg1 **arg1) {
    sce_paf_private_wcscmp((*arg0)->unk4, (*arg1)->unk4);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/photo_plugin", func_00006CE8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/photo_plugin", func_00006E38);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00006C68);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00006CFC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00006D5C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00006DEC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00006E78);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00006EBC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00006F00);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00006F4C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00006FD0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00007000);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00007054);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00007124);
#endif

#if FW_VERSION >= 350
void func_000071D8(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = scePaf_61A8E8EC(0x10);
    M2C_FIELD(temp_v0, s32 *, 4) = arg1;
    M2C_FIELD(temp_v0, s32 *, 8) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0) = arg0;
    M2C_FIELD(temp_v0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = scePaf_3EDD45EF(0, func_0000729C, temp_v0, -1, -1, &func_000076C0);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
void func_000071D8(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = _Znwj(0x10);
    M2C_FIELD(temp_v0, s32 *, 4) = arg1;
    M2C_FIELD(temp_v0, s32 *, 8) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0) = arg0;
    M2C_FIELD(temp_v0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = Job_Start(0, func_0000729C, temp_v0, -1, -1, &func_000076C0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_000071D8(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_000071D8_temp_v0 *temp_v0;

    temp_v0 = _Znwj(0x10);
    temp_v0->unk0 = arg0;
    temp_v0->unk4 = arg1;
    temp_v0->unk8 = arg2;
    temp_v0->unkC = 0;
    Job_Start(0, func_0000729C, temp_v0, -1, -1, &func_0000738C);
}
#endif

#if FW_VERSION >= 350
s32 func_000074B8(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_v0 != 0) {
        scePaf_8429BA7C(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
s32 func_000074B8(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_v0 != 0) {
        Job_Cancel2(0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000724C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000729C);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_000076C0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00007870);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_00007988);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00007A18);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00007AA8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000738C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000075E0);

void func_00007820(struct Unk_func_00007820_0 *arg0) {
    s32 *var_v1;
    s32 temp_v0;
    s32 temp_v0_2;

    var_v1 = arg0->unk38;
    arg0->unk0 = &D_0002F000;
    if (var_v1 != NULL) {
        temp_v0 = *var_v1;
        if (temp_v0 != 0) {
            _ZdaPv(temp_v0);
            var_v1 = arg0->unk38;
        }
        temp_v0_2 = M2C_FIELD(var_v1, s32 *, 4);
        if (temp_v0_2 != 0) {
            _ZdaPv(temp_v0_2);
        }
        _ZdlPv((s32) arg0->unk38);
    }
    func_00006E78((s32) arg0);
}

void func_0000789C(struct Unk_func_0000789C_0 *arg0) {
    s32 *var_v1;
    s32 temp_v0;
    s32 temp_v0_2;

    var_v1 = arg0->unk38;
    arg0->unk0 = &D_0002F000;
    if (var_v1 != NULL) {
        temp_v0 = *var_v1;
        if (temp_v0 != 0) {
            _ZdaPv(temp_v0);
            var_v1 = arg0->unk38;
        }
        temp_v0_2 = M2C_FIELD(var_v1, s32 *, 4);
        if (temp_v0_2 != 0) {
            _ZdaPv(temp_v0_2);
        }
        _ZdlPv((s32) arg0->unk38);
    }
    func_00006E78((s32) arg0);
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00007920);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00007D94);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00007F24);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000080A4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000082C8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000847C);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00008C7C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_00008DA0);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00008E4C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00008EF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00008A5C);
#endif

#if FW_VERSION == 250
void func_00008CD0(s32 **arg0) {
    s32 *temp_v1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 **, 0) = &D_0002EFC8;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 **, 0x34);
    if (temp_v1_2 != NULL) {
        temp_v0 = *temp_v1_2;
        if (temp_v0 != 0) {
            _ZdaPv(temp_v0);
        }
        temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 4);
        if (temp_v0_2 != 0) {
            _ZdaPv(temp_v0_2);
        }
        _ZdlPv((s32) M2C_FIELD(arg0, s32 **, 0x34));
    }
    func_00003FB8(arg0);
}
#endif

#if FW_VERSION == 201
void func_00008CD0(s32 **arg0) {
    s32 *temp_v1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(arg0, s32 **, 0) = &D_0002EFC8;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 **, 0x3C);
    if (temp_v1_2 != NULL) {
        temp_v0 = *temp_v1_2;
        if (temp_v0 != 0) {
            _ZdaPv(temp_v0);
        }
        temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x3C), s32 *, 4);
        if (temp_v0_2 != 0) {
            _ZdaPv(temp_v0_2);
        }
        _ZdlPv((s32) M2C_FIELD(arg0, s32 **, 0x3C));
    }
    func_00003FB8(arg0);
}
#endif

#if FW_VERSION == 250
void func_00008D6C(s32 **arg0) {
    s32 *temp_v1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 **, 0) = &D_0002EFC8;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 **, 0x34);
    if (temp_v1_2 != NULL) {
        temp_v0 = *temp_v1_2;
        if (temp_v0 != 0) {
            _ZdaPv(temp_v0);
        }
        temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x34), s32 *, 4);
        if (temp_v0_2 != 0) {
            _ZdaPv(temp_v0_2);
        }
        _ZdlPv((s32) M2C_FIELD(arg0, s32 **, 0x34));
    }
    func_00003FB8(arg0);
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION == 201
void func_00008D6C(s32 **arg0) {
    s32 *temp_v1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(arg0, s32 **, 0) = &D_0002EFC8;
    if (temp_v1 != 0) {
        _ZdaPv(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 **, 0x3C);
    if (temp_v1_2 != NULL) {
        temp_v0 = *temp_v1_2;
        if (temp_v0 != 0) {
            _ZdaPv(temp_v0);
        }
        temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x3C), s32 *, 4);
        if (temp_v0_2 != 0) {
            _ZdaPv(temp_v0_2);
        }
        _ZdlPv((s32) M2C_FIELD(arg0, s32 **, 0x3C));
    }
    func_00003FB8(arg0);
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00008E10);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00008ED0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009020);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF50);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF64);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF6C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF70);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF7C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF80);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF88);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF8C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF90);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF94);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EF9C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_000092C8);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin", func_000096B4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000938C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000093DC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000942C);

void func_000094F8(void) {
    func_0000942C(1, 0xFFFF);
}

void func_00009518(void) {
    func_0000942C(0, 0xFFFF);
}

void func_00009538(struct Unk_func_00009538_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009548);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_000097B8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009848);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009888);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009918);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00009588);

void func_00009648(struct Unk_func_00009648_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009658);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_00009A68);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00009698);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_00009B30);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000970C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009760);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000984C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000098A0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009914);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009A24);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009B10);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009B6C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009C34);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00009CF4);
#endif

#if FW_VERSION >= 350
void func_00009DB4(struct Unk_func_00009DB4_0 *arg0) {
    s32 temp_s0;

    temp_s0 = arg0->unk8;
    if (temp_s0 == 0) {

    } else {
        func_00009DB4((struct Unk_func_00009DB4_0 *) temp_s0);
        scePaf_6261C0A5(temp_s0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00009DB4(struct Unk_func_00009DB4_0 *arg0) {
    s32 temp_s0;

    temp_s0 = arg0->unk8;
    if (temp_s0 == 0) {

    } else {
        func_00009DB4(temp_s0);
        _ZdlPv(temp_s0);
    }
}
#endif

#if FW_VERSION >= 350
void func_00009DF4(struct Unk_func_00009DF4_0 *arg0) {
    s32 temp_s0;

    temp_s0 = arg0->unk8;
    if (temp_s0 == 0) {

    } else {
        func_00009DF4((struct Unk_func_00009DF4_0 *) temp_s0);
        scePaf_6261C0A5(temp_s0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00009DF4(struct Unk_func_00009DF4_0 *arg0) {
    s32 temp_s0;

    temp_s0 = arg0->unk8;
    if (temp_s0 == 0) {

    } else {
        func_00009DF4(temp_s0);
        _ZdlPv(temp_s0);
    }
}
#endif

#if FW_VERSION >= 201
s32 func_00009E34(void) {
    return 0;
}
#endif

#if FW_VERSION >= 280
s32 func_00009E3C(struct Unk_func_00009E3C_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 func_00009E3C(struct Unk_func_00009E3C_0 *arg0) {
    return arg0->unk28;
}
#endif

#if FW_VERSION >= 201
s32 func_00009E44(void) {
    return 2;
}
#endif

#if FW_VERSION >= 280
s32 func_00009E4C(struct Unk_func_00009E4C_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34) + M2C_FIELD(arg0, s32 *, 0x44);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 func_00009E4C(struct Unk_func_00009E4C_0 *arg0) {
    return arg0->unk30 + arg0->unk40;
}
#endif

#if FW_VERSION >= 280
s32 func_00009E5C(struct Unk_func_00009E5C_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x44);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 func_00009E5C(struct Unk_func_00009E5C_0 *arg0) {
    return arg0->unk40;
}
#endif

#if FW_VERSION >= 201
void func_00009E64(void) {
}
#endif

#if FW_VERSION >= 271
s32 func_00009C30(void) {
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_00009E90_v260(void) {
    return 0;
}
#endif

#if FW_VERSION >= 260
void func_00009E6C(struct Unk_vt_func_00009E6C_arg0 **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x1C)();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_00009E6C(struct Unk_vt_func_00009E6C_arg0 **arg0) {
    (*arg0)->unk18();
}
#endif

#if FW_VERSION >= 201
void func_00009E90(void) {
    func_00007000();
}

s32 func_00009EAC(void) {
    return 1;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000A240);
#endif

#if FW_VERSION == 201
s32 func_00009EB4(struct Unk_func_00009EB4_0 *arg0, struct Unk_func_00009EB4_1 *arg1) {
    s32 var_v1;
    u16 temp_a2;
    u16 temp_a2_2;
    u16 temp_a2_3;
    u16 temp_a2_4;
    u16 temp_a2_5;
    u16 temp_a2_6;
    u16 temp_a3;
    u16 temp_a3_2;
    u16 temp_a3_3;
    u16 temp_a3_4;
    u16 temp_a3_5;
    u16 temp_a3_6;

    temp_a3 = arg0->unk0;
    temp_a2 = arg1->unk0;
    var_v1 = 1;
    if (temp_a3 >= temp_a2) {
        var_v1 = 0;
        if (temp_a2 >= temp_a3) {
            temp_a3_2 = arg0->unk2;
            temp_a2_2 = arg1->unk2;
            var_v1 = 1;
            if (temp_a3_2 >= temp_a2_2) {
                var_v1 = 0;
                if (temp_a2_2 >= temp_a3_2) {
                    temp_a3_3 = arg0->unk4;
                    temp_a2_3 = arg1->unk4;
                    var_v1 = 1;
                    if (temp_a3_3 >= temp_a2_3) {
                        var_v1 = 0;
                        if (temp_a2_3 >= temp_a3_3) {
                            temp_a3_4 = arg0->unk6;
                            temp_a2_4 = arg1->unk6;
                            var_v1 = 1;
                            if (temp_a3_4 >= temp_a2_4) {
                                var_v1 = 0;
                                if (temp_a2_4 >= temp_a3_4) {
                                    temp_a3_5 = arg0->unk8;
                                    temp_a2_5 = arg1->unk8;
                                    var_v1 = 1;
                                    if (temp_a3_5 >= temp_a2_5) {
                                        var_v1 = 0;
                                        if (temp_a2_5 >= temp_a3_5) {
                                            temp_a3_6 = arg0->unkA;
                                            temp_a2_6 = arg1->unkA;
                                            var_v1 = 1;
                                            if (temp_a3_6 >= temp_a2_6) {
                                                var_v1 = 0;
                                                if (temp_a2_6 >= temp_a3_6) {
                                                    var_v1 = (u32) arg0->unkC < (u32) arg1->unkC;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 350
void func_00009F88(struct Unk_func_00009F88_0 *arg0) {
    s32 temp_s0;

    temp_s0 = arg0->unk8;
    if (temp_s0 == 0) {

    } else {
        func_00009F88((struct Unk_func_00009F88_0 *) temp_s0);
        scePaf_6261C0A5(temp_s0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_00009F88(struct Unk_func_00009F88_0 *arg0) {
    s32 temp_s0;

    temp_s0 = arg0->unk8;
    if (temp_s0 == 0) {

    } else {
        func_00009F88(temp_s0);
        _ZdlPv(temp_s0);
    }
}
#endif

#if FW_VERSION >= 201
s32 func_00009FC8(void) {
    return 0;
}

s32 func_00009FD0(void) {
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/photo_plugin", func_00009FD8);
#endif

#if FW_VERSION >= 201
void func_00009FD8(s32 **arg0) {
    *arg0 = &D_0002F178;
    func_00003FB8(arg0);
}
#else
INCLUDE_ASM("nonmatchings/photo_plugin", func_00003898);
#endif

#if FW_VERSION == 100
void func_00003BA4(s32 arg0, s32 arg1) {
    _ZN3paf4View8PageOpenEPKcii(D_00031B30, &D_000301C4, 0, 0);
    _ZN3paf4View12PageActivateEPKc(D_00031B30, &D_000301C4);
    _ZN3paf9PhSRender8SetStyleEii(_ZN3paf8PhAppear12ShadowRenderEv(), 6, 3);
    func_0001DABC(arg0, 1);
    func_00003F04(arg0, arg1, 1);
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003C40);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00003F04);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00004028);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00017AD4);
#endif

#if FW_VERSION >= 350
void func_0000A000(s32 **arg0) {
    *arg0 = &D_0002F178;
    func_00003FB8(arg0);
    scePaf_6261C0A5((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0000A000(s32 **arg0) {
    *arg0 = &D_0002F178;
    func_00003FB8(arg0);
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 201
s32 func_0000A038(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000A040);

s32 func_0000A080(void) {
    return 0;
}
#endif

#if FW_VERSION >= 250
s32 func_0000A088(void) {
    return -1;
}
#endif

#if FW_VERSION == 201
s32 func_0000A088(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201
s32 func_0000A090(void) {
    return -1;
}

s32 func_0000A098(void) {
    return 0;
}

s32 func_0000A0A0(void) {
    return 1;
}
#endif

#if FW_VERSION >= 260
s32 func_0000A0BC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3C);
}

s32 func_0000A0C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}
#endif

#if FW_VERSION >= 201
s32 func_0000A0A8(struct Unk_func_0000A0A8_0 *arg0) {
    return arg0->unk38;
}
#endif

#if FW_VERSION == 250
s32 func_0000A0B0(struct Unk_func_0000A0B0_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}
#endif

#if FW_VERSION == 201
s32 func_0000A0B0(struct Unk_func_0000A0B0_0 *arg0) {
    return arg0->unk38;
}
#endif

#if FW_VERSION == 250
s32 func_0000A0B8(struct Unk_func_0000A0B8_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}
#endif

#if FW_VERSION == 201
s32 func_0000A0B8(struct Unk_func_0000A0B8_0 *arg0) {
    return arg0->unk3C;
}
#endif

#if FW_VERSION >= 201
s32 func_0000A0C0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000A0C8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000A60C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000A79C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000AA7C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000AB80);
#endif

#if FW_VERSION >= 260
void func_0000AC80(struct Unk_func_0000AC80_0 *arg0) {
    func_0000AC9C(M2C_FIELD(arg0, s32 *, 0x34));
}
#endif

#if FW_VERSION == 250
void func_0000AC80(struct Unk_func_0000AC80_0 *arg0) {
    func_0000AC9C(M2C_FIELD(arg0, s32 *, 0x30));
}
#endif

#if FW_VERSION == 201
void func_0000AC80(struct Unk_func_0000AC80_0 *arg0) {
    func_0000AC9C(arg0->unk38);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000AC9C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000AD54);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000AE7C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000AEB8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EFB0);
#endif

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F338);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F33C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F344);
#endif

#if FW_VERSION >= 280
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F86C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F88C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F89C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F358_v271);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F350_v260);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EFB4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EFB8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002EFC8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F000);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F050);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F0A0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F0E0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F120);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F158);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F178);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F1B0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F1E8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000AF84);

void func_0000B050(void) {
    func_0000AF84(1, 0xFFFF);
}

void func_0000B070(void) {
    func_0000AF84(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B090);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B120);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B160);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B1F0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B230);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B2C0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B300);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B340);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B394);
#endif

#if FW_VERSION >= 201
void func_0000B3E8(M2C_UNK **arg0) {
    *arg0 = &D_0002F1E8;
    func_00006E78((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B410);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0000B410(M2C_UNK **arg0) {
    *arg0 = &D_0002F1E8;
    func_00006E78((s32) arg0);
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION >= 201
s32 func_0000B448(void) {
    return 0;
}

s32 func_0000B450(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B458);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B4B4);
#endif

#if FW_VERSION >= 260
void func_0000B518(struct Unk_func_0000B518_0 *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x34);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 8)(temp_a0);
}
#endif

#if FW_VERSION == 250
void func_0000B518(struct Unk_func_0000B518_0 *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x30);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 8)(temp_a0);
}
#endif

#if FW_VERSION == 201
void func_0000B518(struct Unk_func_0000B518_0 *arg0) {
    struct Unk_vt_func_0000B518_temp_a0 **temp_a0;

    temp_a0 = arg0->unk38;
    (*temp_a0)->unk8(temp_a0);
}
#endif

#if FW_VERSION >= 201
s32 func_0000B540(void) {
    return 2;
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B548);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B7B0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B8A4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B93C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000B9D4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000BA94);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000BB50);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000BB74);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000BB98);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000BED4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C00C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C060);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C0E4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C13C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C194);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C29C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C3AC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C3E0);
#endif

#if FW_VERSION >= 350
void func_0000C3E0(struct Unk_func_0000C3E0_0 *arg0) {
    s32 temp_v0;
    void **temp_a0;

    temp_a0 = arg0->unk8;
    if (M2C_FIELD(*temp_a0, s32 (**)(void **), 0x18)(temp_a0) != 0) {
        temp_v0 = scePaf_88784487(&D_0002F364);
        if (temp_v0 != 0) {
            scePaf_6428A1DE(temp_v0, &D_0002F374);
        }
    }
    func_0000D3F4(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_0000C3E0(struct Unk_func_0000C3E0_0 *arg0) {
    s32 temp_v0;
    struct Unk_vt_func_0000C3E0_temp_a0 **temp_a0;

    temp_a0 = arg0->unk8;
    if ((*temp_a0)->unk14(temp_a0) != 0) {
        temp_v0 = _ZN3paf4View4FindEPKc(&D_0002F364);
        if (temp_v0 != 0) {
            _ZN3paf4View9PlaySoundEPKc(temp_v0, &D_0002F374);
        }
    }
    func_0000D3F4(arg0);
}
#endif

#if FW_VERSION >= 350
void func_0000C450(struct Unk_func_0000C450_0 *arg0) {
    sceVshCommonGui_E4ED451E();
    scePaf_648CA0C5();
    arg0->unk14 = 0;
    func_0000C488(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0000C450(struct Unk_func_0000C450_0 *arg0) {
    _ZN3vsh12BusyIcon_DecEv();
    InputDevice_PspPad_Unlock();
    arg0->unk14 = 0;
    func_0000C488(arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C488);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C734);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C874);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000C994);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000CA84);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000CF88);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000D004);
#endif

#if FW_VERSION >= 350
void func_0000D128(struct Unk_func_0000D128_0 *arg0) {
    sceVshCommonGui_E4ED451E();
    scePaf_648CA0C5();
    arg0->unk14 = 0;
    func_0000D160(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0000D128(struct Unk_func_0000D128_0 *arg0) {
    _ZN3vsh12BusyIcon_DecEv();
    InputDevice_PspPad_Unlock();
    arg0->unk14 = 0;
    func_0000D160(arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2D0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2D4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2D8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2DC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2E0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2E4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2E8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2EC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2F0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2F4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2F8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F2FC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F300);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F304);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F308);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F30C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F310);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F314);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F318);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F31C);
#endif

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F6DC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F6E0);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F320);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F324);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F328);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F32C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F330);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F334);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F338);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F33C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F340);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F344);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F348);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F34C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F350);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F354);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F358);
#endif

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F70C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F710);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F35C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F360);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F364);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F374);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F380);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F398);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F3B4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F3CC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F3F0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F40C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F42C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F448);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F470);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F48C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F4AC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F4C8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F4E0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F4FC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F514);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F528);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F540);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F558);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F568);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F580);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F598);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F5A8);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F5C0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F5CC);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030654);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0003059C_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0003059C_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0003059C_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0003059C_v300);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FEEC_v282);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FEDC_v280);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000D160);
#endif

#if FW_VERSION >= 350
void func_0000D3BC(struct Unk_func_0000D3BC_0 *arg0) {
    sceVshCommonGui_E4ED451E();
    scePaf_648CA0C5();
    arg0->unk14 = 0;
    func_0000D3F4(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0000D3BC(struct Unk_func_0000D3BC_0 *arg0) {
    _ZN3vsh12BusyIcon_DecEv();
    InputDevice_PspPad_Unlock();
    arg0->unk14 = 0;
    func_0000D3F4(arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000D3F4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000D5F0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000D6C8);
#endif

#if FW_VERSION >= 350
void func_0000D75C(void) {
    if (D_00032FC5 != 0) {
        scePaf_648CA0C5();
        D_00032FC5 = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0000D75C(void) {
    if (D_00031BB9 != 0) {
        InputDevice_PspPad_Unlock();
        D_00031BB9 = 0;
    }
}
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F6C4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000D794);
#endif

#if FW_VERSION >= 271
void func_0000DB60(s32 arg0, s32 arg1) {
    func_000130B0(arg0, arg1);
}
#endif

#if FW_VERSION == 260
void func_0000DE08_v260(s32 arg0, s32 arg1) {
    func_000130B0(arg0, arg1);
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000DE24);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030B9C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030BB0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FD44);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030BE0);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030BFC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030C14);
#endif

#if FW_VERSION == 250
void func_0000E1B8(s32 arg0, s32 arg1) {
    func_000130B0(arg0, arg1);
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E1D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F770);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030C44);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000DE08);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E22C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E0E4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E978);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E644);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000EC38);

void func_0000ECD8(void) {
    scePaf_23A48167();
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000ECF4);
#endif

#if FW_VERSION >= 280
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F870);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E95C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E524);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E644);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E6D0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
void func_0000E8D4(void) {
    _ZN3paf8PhXmList11UpdateItemsEv();
}
#endif

#if FW_VERSION == 250
void func_0000EC50_v250(void) {
    _ZN3paf8PhXmList11UpdateItemsEv();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E758);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E788);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000ED90);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E830);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000E904);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000EAE4);
#endif

#if FW_VERSION >= 201
void func_0000EBCC(s32 arg0, s32 arg1, s32 arg2) {
    func_0000BB98(arg0, arg1, (s32) &D_0002F87C, (s32) &D_0002F870, 2, arg2 & 0xFF);
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000EBFC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000EC50);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000ED50);
#endif

#if FW_VERSION >= 350
void func_0000EE0C(struct Unk_func_0000EE0C_0 *arg0) {
    sceVshCommonGui_E4ED451E();
    scePaf_648CA0C5();
    arg0->unk14 = 0;
    arg0->unk0->unk8(arg0, 0, 0, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0000EE0C(struct Unk_func_0000EE0C_0 *arg0) {
    _ZN3vsh12BusyIcon_DecEv();
    InputDevice_PspPad_Unlock();
    arg0->unk14 = 0;
    arg0->unk0->unk8(arg0, 0, 0, 0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000EE58);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000EF70);
#endif

#if FW_VERSION >= 260
void func_0000F104(s32 arg0) {
    func_0000F190(arg0);
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000F120);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000F190);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000F1CC);

void func_0000EFA0(struct Unk_func_0000EFA0_0 *arg0, struct Unk_vt_func_0000EFA0_arg1 **arg1) {
    if (M2C_FIELD(*arg1, s32 (**)(struct Unk_vt_func_0000EFA0_arg1 **), 0x14)(arg1) != 0) {

    } else {
        M2C_FIELD(arg0, struct Unk_vt_func_0000EFA0_arg1 ***, 8) = arg1;
        func_0000F190((s32) arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(struct Unk_func_0000EFA0_0 *), 8)(arg0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_0000EFA0(struct Unk_func_0000EFA0_0 *arg0, struct Unk_vt_func_0000EFA0_arg1 **arg1) {
    s32 temp_v0;

    if ((*arg1)->unk10(arg1) == 0) {
        temp_v0 = arg0->unkC;
        arg0->unk4 = arg1;
        if (temp_v0 != 0) {
            func_00027044(temp_v0);
            arg0->unkC = 0;
        }
        func_0000F06C(arg0);
    }
}
#endif

#if FW_VERSION >= 260
void func_0000F00C(struct Unk_func_0000F00C_0 *arg0) {
    struct Unk_func_00004460_0 *temp_v0;

    temp_v0 = M2C_FIELD(arg0, struct Unk_func_00004460_0 **, 8);
    if (temp_v0 != NULL) {
        func_00004460(temp_v0);
    }
    func_0000F104((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_0000F00C(struct Unk_func_0000F00C_0 *arg0) {
    s32 temp_v0;

    func_00004460(arg0->unk4);
    temp_v0 = arg0->unkC;
    if (temp_v0 != 0) {
        func_00027044(temp_v0);
        arg0->unkC = 0;
    }
}
#endif

#if FW_VERSION >= 260
void func_0000F2DC(void *arg0) {
    func_000044A8(M2C_FIELD(arg0, s32 *, 8), (s32) &func_0000F304, (s32) arg0);
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000F304);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000F330);

void func_0000F050(struct Unk_func_0000F050_0 *arg0) {
    func_00012E58(M2C_FIELD(arg0, s32 *, 8));
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_0000F050(struct Unk_func_0000F050_0 *arg0) {
    func_00012E58(arg0->unk4);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000F06C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_0000F280(s32 arg0, M2C_UNK arg1) {
    func_0000F2A4(arg1, arg0);
}
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F860);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F870);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002F87C);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000F760);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010064);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000101DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_0000F2A4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0000FD30);
#endif

#if FW_VERSION >= 260
void func_000102F4(struct Unk_func_000102F4_0 *arg0, struct Unk_vt_func_000102F4_arg1 **arg1) {
    if (M2C_FIELD(*arg1, s32 (**)(struct Unk_vt_func_000102F4_arg1 **), 0x14)(arg1) != 1) {

    } else {
        M2C_FIELD(arg0, struct Unk_vt_func_000102F4_arg1 ***, 0x10) = arg1;
        func_0000F190((s32) arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(struct Unk_func_000102F4_0 *), 8)(arg0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_000102F4(struct Unk_func_000102F4_0 *arg0, struct Unk_vt_func_000102F4_arg1 **arg1) {
    s32 temp_v0;

    if ((*arg1)->unk10(arg1) == 1) {
        temp_v0 = arg0->unk18;
        arg0->unk4 = arg1;
        if (temp_v0 != 0) {
            func_00027044(temp_v0);
            arg0->unk18 = 0;
        }
        func_0001040C(arg0, arg1);
    }
}
#endif

#if FW_VERSION >= 350
void func_0001036C(struct Unk_func_0001036C_0 *arg0) {
    s32 temp_v0;

    func_00005100((struct Unk_func_00003DCC_0 *) arg0->unk10);
    temp_v0 = arg0->unk14;
    if (temp_v0 != 0) {
        scePaf_8429BA7C(0, temp_v0);
        arg0->unk14 = 0;
    }
    func_0000F104((s32) arg0);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
void func_0001036C(struct Unk_func_0001036C_0 *arg0) {
    s32 temp_v0;

    func_00005100((struct Unk_func_00003DCC_0 *) arg0->unk10);
    temp_v0 = arg0->unk14;
    if (temp_v0 != 0) {
        Job_Cancel2(0, temp_v0);
        arg0->unk14 = 0;
    }
    func_0000F104((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_0001036C(struct Unk_func_0001036C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    func_00005100(arg0->unk4);
    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        Job_Cancel2(0, temp_v0);
        arg0->unk10 = 0;
    }
    temp_v0_2 = arg0->unk14;
    if (temp_v0_2 != 0) {
        Job_Cancel2(0, temp_v0_2);
        arg0->unk14 = 0;
    }
    temp_v0_3 = arg0->unk18;
    if (temp_v0_3 != 0) {
        func_00027044(temp_v0_3);
        arg0->unk18 = 0;
    }
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_0002591C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_000103F0(struct Unk_func_000103F0_0 *arg0) {
    func_00012E58(arg0->unk4);
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_0001040C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010830);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0001084C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010938);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010960);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010998);
#endif

#if FW_VERSION >= 201
void func_00010ADC(void) {
    func_00010AF8();
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010AF8);

void func_00010B60(void) {
    func_00010BC0();
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010B7C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010BC0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010C64);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_0001054C);
#endif

#if FW_VERSION >= 350
void func_00010820(struct Unk_func_0001036C_0 *arg0) {
    s32 temp_v0;

    func_0001036C(arg0);
    temp_v0 = arg0->unk18;
    if (temp_v0 != 0) {
        scePaf_8429BA7C(0, temp_v0);
        arg0->unk18 = 0;
    }
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 350
void func_00010820(struct Unk_func_0001036C_0 *arg0) {
    s32 temp_v0;

    func_0001036C(arg0);
    temp_v0 = arg0->unk18;
    if (temp_v0 != 0) {
        Job_Cancel2(0, temp_v0);
        arg0->unk18 = 0;
    }
}
#endif

#if FW_VERSION >= 260
void func_00010864(void *arg0) {
    func_00012E58(M2C_FIELD(arg0, s32 *, 0x10));
}

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010880);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010CCC);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010CE8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010DE4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010E4C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010E84);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00010FA4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/photo_plugin", func_00010D04);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00011288);

INCLUDE_ASM("nonmatchings/photo_plugin", func_0001132C);
#endif

#if FW_VERSION >= 260
void func_00011388(struct Unk_func_00011388_0 *arg0, struct Unk_vt_func_00011388_arg1 **arg1) {
    func_00011288((s32) arg0, (s32) &D_0002FB8C);
    if (M2C_FIELD(*arg1, s32 (**)(struct Unk_vt_func_00011388_arg1 **), 0x14)(arg1) != 0) {

    } else {
        arg0->unk8 = (void **) arg1;
        func_000044A8((s32) arg1, (s32) &func_00011470, (s32) arg0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_00011388(struct Unk_func_00011388_0 *arg0, struct Unk_vt_func_00011388_arg1 **arg1) {
    func_00011288(arg0, (s32) &D_0002FB8C);
    if ((*arg1)->unk10(arg1) != 0) {

    } else {
        arg0->unk8 = arg1;
        func_000044A8((s32) arg1, (s32) &func_00011470, arg0);
    }
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_000113F4);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00011470);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FB8C);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000114CC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FC4C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FC60);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FC74);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FC88);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FC9C);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FCB0);
#endif

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FCC8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/photo_plugin", D_000225F0);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FCCC);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FCE4);

INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FD00);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030F64);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030DB4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030C0C);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0003054C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0003000C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00030004);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/photo_plugin", D_00031154);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FD04);
#endif

#if FW_VERSION >= 260
void func_0001206C(struct Unk_func_0001206C_0 *arg0, struct Unk_vt_func_0001206C_arg1 **arg1) {
    func_00011288((s32) arg0, (s32) "info_album_page");
    if (M2C_FIELD(*arg1, s32 (**)(struct Unk_vt_func_0001206C_arg1 **), 0x14)(arg1) != 1) {

    } else {
        arg0->unk8 = (void **) arg1;
        func_00012174((s32) arg0);
    }
}
#endif

#if FW_VERSION == 250
void func_0001206C(struct Unk_func_0001206C_0 *arg0, struct Unk_vt_func_0001206C_arg1 **arg1) {
    func_00011288((s32) arg0, (s32) "info_album_page");
    if ((*arg1)->unk10((void **) arg1) != 1) {

    } else {
        arg0->unk8 = (void **) arg1;
        func_00012174((s32) arg0);
    }
}
#endif

#if FW_VERSION == 201
void func_0001206C(struct Unk_func_0001206C_0 *arg0, struct Unk_vt_func_0001206C_arg1 **arg1) {
    func_00011288(arg0, (s32) "info_album_page");
    if ((*arg1)->unk10(arg1) != 1) {

    } else {
        arg0->unk8 = arg1;
        func_00012174(arg0);
    }
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_000120D0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00012174);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000122F0);

INCLUDE_ASM("nonmatchings/photo_plugin", func_00012518);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/photo_plugin", func_0001262C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
void func_0001262C(s32 arg0, M2C_UNK arg1) {
    _ZN3vsh12BusyIcon_DecEv();
    if (arg0 != 0) {

    } else {
        func_00012674(arg1);
    }
}
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FD34);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/photo_plugin", D_0002FD44);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/photo_plugin", func_00012674);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000128F8);

INCLUDE_ASM("nonmatchings/photo_plugin", func_000129D4);
#endif
