#include "common.h"
#include "netplay_client_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", module_start);

#if FW_VERSION < 282
s32 module_stop(void) {
    func_00005568();
    return 0;
}
#else
s32 module_stop(void) {
    func_0000D368();
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DAD0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DAD4);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DAE4);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DAEC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DB00);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DB18);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DB24);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DB30);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DB40);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DB54);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DB6C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DB84);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DB9C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DBB0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DBC8);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DBE0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DBF8);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DC0C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DC2C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DC38);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DC44);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DC58);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DC64);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DC6C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DC74);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DCA0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DCA8);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DCC0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDB0);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDB4_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDB4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDB4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDBC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDC0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDF8);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDFC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DE1C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DE2C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DE8C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DD68);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DF50);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DD7C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DD80);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DD88);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DD9C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDB4);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00005E7C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00005E9C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00005EC0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00005EE4);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00005F04);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDCC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDE8);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DE08);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DE28);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DE48);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DE6C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DE90);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DEA0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DEAC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DECC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DEF0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DF10);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DF30);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DF54);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DF78);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DF9C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DFC4);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000613C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006158);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006178);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006194);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000061B0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000061D4);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000061FC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006220);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006238);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000015C);
#else
void func_0000015C(void) {
    M2C_UNK *temp_s0;

    temp_s0 = "page_netplay_dialog";
    scePaf_39E62C88(D_0000EAF0, temp_s0, 0, 0);
    scePaf_A013540A(D_0000EAF0, temp_s0);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000001AC);

u8 func_000001D4(void) {
    return D_0000E904;
}

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000001E0);
#else
s32 func_000001E0(void) {
    scePaf_39E62C88(D_0000EAF0, &D_0000E000, 0, 0);
    scePaf_A013540A(D_0000EAF0, &D_0000E000);
    return 0;
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v352);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v350);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v330);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v310);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234_v300);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000025C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E000);

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006278);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000025C);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000002C0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000368);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000390);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000003B4);

#if FW_VERSION < 282
void func_0000049C(void) {
    func_000003B4(1, 0xFFFF);
}

void func_000004BC(void) {
    func_000003B4(0, 0xFFFF);
}
#else
void func_00000440(void) {
    func_000003B4(1, 0xFFFF);
}

void func_00000460(void) {
    func_000003B4(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000480);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000004B0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000052C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000005D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000006D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005874);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000588);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000688);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E028);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000076D8);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E140);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000006C4);

void func_0000084C(s32 arg0) {
    if (arg0 == 0) {

    } else {
        func_000005D8();
    }
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000874);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000009DC(void) {
    func_0000052C((s32) &D_00007748, (s32) &D_0000E158);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000009DC(void) {
    func_000005D8();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00007748);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000680);

void func_000009D4(void) {

}

void func_000009DC(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, scePaf_BB3CBD19(scePaf_D4FAE7D0(&D_0000E140), &D_0000E158, -1));
    func_00003E08(&sp0);
    func_00005874();
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E040);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E050);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000006D0);

void func_0000083C(s32 arg0) {
    if (arg0 == 0) {

    } else {
        func_00000588();
    }
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000864);

void func_000008D0(void) {
    func_0000052C((s32) &D_0000E0B0, (s32) &D_0000E0C4);
}

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0B0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0C4);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0D8);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0E8);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0F4);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E11C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E140);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E158);

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E25C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00007780);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00007794);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000077A4);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000077B0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000077D8);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000077FC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00007814);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000066DC);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E170);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E188);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006714);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1A0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1BC);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1E0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000078A0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000063DC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006404);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E200);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000643C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006454);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006784_v152);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006798_v152);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006784_v150);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006798_v150);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E214);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006488);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000064AC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000064C0);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E234);

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E240);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E250);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006508);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E25C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006804);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006560);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000657C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006588);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000065BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00007904);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000065DC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000065F0);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E274);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E28C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1A4);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1AC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1C0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1E0_v250);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1FC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E210);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E2A4);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E2AC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E2C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000068E8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E2DC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E2F0);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E300);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E314);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00007974);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00007994);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E338);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E358);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E378);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006944);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E38C);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E39C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E3B0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E3C8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000940);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000AA0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000AF4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000B3C);

void func_00000C10(void) {
    func_000005D8();
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000C2C);

void func_00000CCC(void) {
    func_0000052C((s32) &D_000077FC, (s32) &D_00007814);
}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006718);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006730);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000008FC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006748);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000A2C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000AB0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000008F8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000A38);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000A90);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000AD8);

void func_00000BAC(void) {
    func_00000588();
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000BC8);

void func_00000C50(void) {
    func_0000052C((s32) &D_0000E140, (s32) &D_0000E158);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000C78);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000E9C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000013AC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001D08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000AFC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000E20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000C18);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000F40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00001190(void) {
    sceKernelPowerTick(0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002114);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000011AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001210);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001290);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000E68);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001368);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001D18);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001E24);

void func_00002210(void) {
    sceKernelPowerTick(0);
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000222C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000022CC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000234C);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000023B0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001260);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000012BC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001318);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001374);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000014F4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001540);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000014B4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001524);
#endif

#if FW_VERSION >= 282
void func_000023F8(void) {
    if ((D_0000E90C != 0) || (func_0000535C() == 0)) {
        func_0000544C();
    }
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002434);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002528);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002460);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001684);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00001700(void) {
    func_00004428();
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00002530(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
void func_00002530(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_5C161337(-1));
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000025D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000256C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00001720(void) {
    func_00005150((s32) &D_0000E8CC);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000015D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001658);
#endif

#if FW_VERSION < 282
void func_00001814(void) {

}

void func_0000181C(void) {

}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002914);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002998_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002858);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000018EC);
#endif

#if FW_VERSION == 100
void func_00001824(s32 arg0) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_5C161337(-1));
    func_00003E08(&sp0);
    sceVshCommonGui_A0DE7090(1);
    scePaf_F47CA1C2(arg0, 0x10001, &func_000023B0, 0);
}
#endif

#if FW_VERSION < 282
void func_00001884(void) {

}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000188C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002998);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000018C0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001950);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00001B7C(s32 arg0) {
    void **temp_v0;

    temp_v0 = scePaf_4708AED4(D_0000E900, &D_000065BC);
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x6C)(temp_v0, 0xF, 0x20);
    func_00002CC4((s32) &D_00006CEC);
    func_00002CC4((s32) &D_00006CFC);
    scePaf_A0ED77C4(0, &func_000014F4, arg0, -1, -1, &func_00001540);
    D_00006F3C = 0;
    D_00006F38 = 0;
    sceVshCommonGui_80271F41();
    scePaf_F47CA1C2(arg0, 0x10001, &func_00001210, 0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001A28);
#endif

#if FW_VERSION < 282
void func_00001B30(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001C3C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002C4C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002E74);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000031C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001B38);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000255C);

s32 func_0000260C(void) {
    func_0000594C();
    return 0;
}
#endif

#if FW_VERSION >= 350
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_11C48509(&sp0, sceVshCommonGui_EC899EBE());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
    D_0000EAFC = 1;
}
#endif

#if FW_VERSION == 340
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
    D_0000EAFC_v340 = 1;
}
#endif

#if FW_VERSION == 330
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
    D_0000EAFC_v330 = 1;
}
#endif

#if FW_VERSION == 311
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
    D_0000EAFC_v311 = 1;
}
#endif

#if FW_VERSION == 310
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
    D_0000EAFC_v310 = 1;
}
#endif

#if FW_VERSION == 303
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
    D_0000EAFC_v303 = 1;
}
#endif

#if FW_VERSION == 302
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
    D_0000EAFC_v302 = 1;
}
#endif

#if FW_VERSION == 301
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
    D_0000EAFC_v301 = 1;
}
#endif

#if FW_VERSION == 300
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
    D_0000EAFC_v300 = 1;
}
#endif

#if FW_VERSION == 282
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002668);

void func_00002998(void) {
}

void func_000029A0(void) {
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000029A8);

void func_00002C70(void) {
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002C78);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002CE8);
#endif

#if FW_VERSION < 282
void func_00001D44(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001D4C);
#endif

#if FW_VERSION >= 282
void func_00002F04(void) {
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002F0C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002F9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001F48);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000209C);

void func_00002138(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000232C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002140);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000031C4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003514);

void func_000035E8(void) {
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000035F0);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000365C);

#if FW_VERSION < 282
void func_00002204(void) {

}

void func_0000220C(void) {

}
#else
void func_000036D8(void) {
}

void func_000036E0(void) {
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000036E8);

#if FW_VERSION < 282
void func_00002478(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000026C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002480);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000024C8(s32 arg0) {
    s32 sp10;
    void **temp_v0;
    void **temp_v0_2;

    sceVshCommonGui_54BC644C(&sp10, sceVshCommonGui_5C161337(-1));
    func_00003E08((s32) &sp10);
    sceVshCommonGui_A0DE7090(1);
    temp_v0 = scePaf_4708AED4(D_0000E900, &D_00006718);
    M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x6C)(temp_v0, 0xF, 0x20);
    scePaf_533F3856(&sp10, scePaf_BB3CBD19(D_0000E900, &D_00006730, -1), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    temp_v0_2 = scePaf_72514A05(arg0, &D_00006718, 0);
    if (temp_v0_2 != NULL) {
        M2C_FIELD(*temp_v0_2, M2C_UNK (**)(void **, s32 *, M2C_UNK), 0xB0)(temp_v0_2, &sp10, 0);
    }
    scePaf_F47CA1C2(arg0, 0x10001, &func_00001374, 0);
    func_00003E08((s32) &sp10);
}
#endif

#if FW_VERSION == 100
void func_000024C8(s32 arg0) {
    M2C_UNK sp10;
    void **temp_v0;

    sceVshCommonGui_54BC644C(&sp10, sceVshCommonGui_5C161337(-1));
    func_00003E08((s32) &sp10);
    sceVshCommonGui_A0DE7090(1);
    scePaf_533F3856(&sp10, scePaf_BB3CBD19(D_0000E900, &D_00006730, -1), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    temp_v0 = scePaf_72514A05(arg0, &D_00006748, 0);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK *, M2C_UNK), 0xB0)(temp_v0, &sp10, 0);
    }
    scePaf_F47CA1C2(arg0, 0x10001, &func_00001374, 0);
    func_00003E08((s32) &sp10);
}
#endif

#if FW_VERSION < 201
void func_000025AC(void) {

}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000025B4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000026E4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002748);

void func_0000282C(void) {

}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002834);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002868);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000028C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002918);

void func_000029B8(void) {
    func_00002918(1, 0xFFFF);
}

void func_000029D8(void) {
    func_00002918(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000037E0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003868);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E08);
#endif

#if FW_VERSION < 282
void func_000029F8(void) {
    func_00002D4C();
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003C20);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002A14);
#endif

#if FW_VERSION >= 282
void func_000039C0(void) {
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000039C8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003A28);

void func_00003B20(void) {
    func_00003A28(1, 0xFFFF);
}

void func_00003B40(void) {
    func_00003A28(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003B60);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003BE8);

void func_00003C3C(void) {
    func_00004338();
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003C58);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003D24);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003D74);

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E08);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E38);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003AF4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E88);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003F24);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003C24);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004148);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E50);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002CC4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002D4C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000431C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002D68);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002DA0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004574);
#else
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003FB8);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004148);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000041E4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004338);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004364);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004574);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004620);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000419C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000046D4);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000047C8);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004824);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004900);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004A38);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004A8C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003104);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004944);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000031B0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003280);
#endif

#if FW_VERSION < 260
void *func_000034B8(void **arg0) {
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

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000034F0);
#endif

#if FW_VERSION < 282
void func_00003664(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00004924(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004934);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000048EC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000049C8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004B00);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004B54);

void func_00004BA8(struct Unk_func_00004BA8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00004BB8(struct Unk_func_00004BB8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004BC8);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004C08);

#if FW_VERSION < 250
void func_000036F0(void) {
    D_00006D9C = 0;
}

void func_000036FC(void) {
    func_000036F0();
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004C84);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004C4C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003894);

void func_000038F4(void) {
    func_00003894(0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004D04);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004D5C);

#if FW_VERSION < 282
void func_00003954(void) {
    func_00004D5C(0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E350);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004D04);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004F80);
#endif

#if FW_VERSION >= 282
void func_00004DA0(void) {
    func_00004D5C(0);
}

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E430);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004DBC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005030);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000050B8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000050E8);

#if FW_VERSION < 282
void func_000039D0(void) {
    func_000069EC();
}

void func_00005134(void) {
    func_00006A80();
}
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000679C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000067B4);
#endif

#if FW_VERSION >= 282
void func_00005118(void) {
    func_000069EC();
}

void func_00005134(void) {
    func_00006A80();
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005150);

#if FW_VERSION < 282
s32 func_00003A64(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00003A6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_00003A74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00003A7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_00003A84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_00003A8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_00003A94(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#else
s32 func_000051AC(struct Unk_func_000051AC_0 *arg0) {
    return arg0->unk4;
}

s32 func_000051B4(struct Unk_func_000051B4_0 *arg0) {
    return arg0->unk8;
}

s32 func_000051BC(struct Unk_func_000051BC_0 *arg0) {
    return arg0->unkC;
}

s32 func_000051C4(struct Unk_func_000051C4_0 *arg0) {
    return arg0->unk10;
}

s32 func_000051CC(struct Unk_func_000051CC_0 *arg0) {
    return arg0->unk14;
}

s32 func_000051D4(struct Unk_func_000051D4_0 *arg0) {
    return arg0->unk18;
}

s32 func_000051DC(struct Unk_func_000051DC_0 *arg0) {
    return arg0->unk1C;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000051E4);
#else
void func_000051E4(void *arg0, s32 *arg1) {
    scePaf_39E62C88(M2C_FIELD(arg0, s32 *, 4), arg1, 0, 0);
}
#endif

#if FW_VERSION < 282
void func_00003AC0(void *arg0) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4));
}

void func_00003ADC(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}

void func_00003AF8(void *arg0) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005208);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00005208(struct Unk_func_00005208_0 *arg0) {
    scePaf_CAF05F1D(arg0->unk4);
}
#endif

#if FW_VERSION >= 350
void func_00005224(struct Unk_func_00005224_0 *arg0) {
    scePaf_8B38372A(arg0->unk4);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00005224(struct Unk_func_00005224_0 *arg0) {
    scePaf_3481F595(arg0->unk4);
}
#endif

#if FW_VERSION >= 350
void func_00005240(struct Unk_func_00005240_0 *arg0) {
    scePaf_CD216C47(arg0->unk4);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00005240(struct Unk_func_00005240_0 *arg0) {
    scePaf_DAB59652(arg0->unk4);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000525C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005284);

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00003E44(void) {
    return __builtin_allegrex_min(D_0000EAD0, 0);
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E58);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004F14);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003B78);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003C0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00003C0C(void) {
    s32 var_v0;

    var_v0 = sceNetAdhocDownload_314ED31E(0x40, 0x1000, 0x40, 0x1000);
    if (var_v0 >= 0) {
        D_000081B0 = 5;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003C60);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003CC0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000517C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003D9C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003ECC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00003ECC(void) {
    return __builtin_allegrex_min(sceNetAdhocDownload_8A5500E0(), 0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003F00);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005874);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004008);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004080);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000054E4(void) {
    sceNetAdhocDownload_469F6B83();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004428);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E490);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004504);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005B68);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E41C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000057CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000040C4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000042AC);
#endif

#if FW_VERSION < 282
void func_000043E0(void) {

}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000043E8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004470);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000044E8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004580);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000046B8(void) {
    if (D_0000714C != 0) {
        D_0000EAD4 = 0;
        sceNetAdhocctlDisconnect();
        func_000064A8();
        D_0000714C = 0;
    }
    sceNetAdhocMatchingTerm();
    if (D_00007148 >= 0) {
        sceNetAdhocctlDelHandler(D_00007148);
        D_00007148 = -1;
    }
    sceNetAdhocctlTerm();
    sceNetAdhocTerm();
    sceNetTerm();
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000046B8(void) {
    if (D_00006ECC != 0) {
        sceNetAdhocctlDisconnect();
        func_000064A8();
        D_00006ECC = 0;
    }
    sceNetAdhocMatchingTerm();
    if (D_00006EC4 >= 0) {
        sceNetAdhocctlDelHandler(D_00006EC4);
        D_00006EC4 = -1;
    }
    sceNetAdhocctlTerm();
    sceNetAdhocTerm();
    sceNetTerm();
    return 0;
}
#endif

#if FW_VERSION < 282
void func_00004744(void) {
    D_0000EAD4 = 0;
    D_0000EAD0 = 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004B40);
#endif

#if FW_VERSION >= 282
s32 func_000052C0(void) {
    return __builtin_allegrex_min(D_0000EAD0, 0);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000052D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000047E0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000535C);

s32 func_0000544C(void) {
    s32 var_v0;

    var_v0 = sceNetAdhocDownload_314ED31E(0x40, 0x1000, 0x40, 0x1000);
    if (var_v0 >= 0) {
        D_0000EB00 = 5;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005488);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000054E8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000055C4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005710);

s32 func_00005748(void) {
    return __builtin_allegrex_min(sceNetAdhocDownload_8A5500E0(), 0);
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000576C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005874);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000058EC);

void func_00005930(void) {
    sceNetAdhocDownload_469F6B83();
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000594C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E490);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005A8C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005C18);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E4FC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005D7C);

void func_00006060(void) {
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006068);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006110);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006158);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000061F0);

s32 func_0000638C(void) {
    if (D_0000EB08 != 0) {
        D_0000EAD4 = 0;
        sceNetAdhocctlDisconnect();
        func_000064A8();
        D_0000EB08 = 0;
    }
    sceNetAdhocMatchingTerm();
    if (D_0000EB04 >= 0) {
        sceNetAdhocctlDelHandler(D_0000EB04);
        D_0000EB04 = -1;
    }
    sceNetAdhocctlTerm();
    sceNetAdhocTerm();
    sceNetTerm();
    return 0;
}

void func_0000641C(void) {
    D_0000EAD4 = 0;
    D_0000EAD0 = 0;
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006430);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000064A8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006514);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000060DC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004A18);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000066D0);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000067F4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004B8C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00004B8C(s32 arg0) {
    if (arg0 != -1) {
        sceKernelStopModule(arg0, 0U, NULL, NULL, NULL);
        sceKernelUnloadModule(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_000068C0(s32 arg0) {
    if (arg0 != -1) {
        sceKernelStopModule(arg0, 0U, NULL, NULL, NULL);
        sceKernelUnloadModule(arg0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000690C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000697C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000069EC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006A80);

#if FW_VERSION < 282
void func_00004D78(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00006D38(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006AA0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00006AA0(struct Unk_func_00006AA0_0 *arg0) {
    scePaf_27F64616(arg0->unk4);
    arg0->unk1C = 0;
    func_00006D38((u8 *)arg0 + 0x20);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006AD8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006B24);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006C30);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004FCC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005110);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006CF4);
#else
void func_00006CF4(struct Unk_func_00006CF4_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

void func_00006D04(struct Unk_func_00006D04_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_00006EC8((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006D38);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006DC0);

void func_00006E54(struct Unk_func_00006E54_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    func_00000480((arg0->unk0 + (arg0->unk4 * 0xC)) - 0xC);
    temp_v1 = arg0->unk4 - 1;
    temp_v0 = arg0->unk8;
    arg0->unk4 = temp_v1;
    if (temp_v1 >= (temp_v0 - 0x14)) {

    } else {
        func_00006EC8((s32) arg0, temp_v0 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006EC8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006FEC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007014);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006F68);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006FAC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007434);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007614);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000076C0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007874);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000079FC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007B6C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007DE8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000085DC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00008C5C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00008F3C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000090A8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000093EC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009684);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009B28);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009C30);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009FA0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A08C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A20C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A2A4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A46C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A4C4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A53C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A5AC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A638);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A7C0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A954);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000AAD4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000ACCC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000ADE4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000AEF8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000B3BC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000B780);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000B854);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000BBF8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000BCC0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000BE18);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000BF1C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E6C0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E628);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E630);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C0E4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C39C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C46C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C548);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C750);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C7C4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C818);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C854);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C910);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C9A4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CA38);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CAB0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CB80);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CBF4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CC54);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CCF0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CDE0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CEE4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000D054);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007050);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007094);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000751C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000076FC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000077A8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000795C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007AE4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007C54);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007ED0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000086C4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00008D44);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009024);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009190);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000094D4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000976C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009C10);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009D18);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A088);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A174);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A2F4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A38C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A554);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A5AC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A624);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A694);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A720);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A8A8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000AA3C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000ABBC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000ADB4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000AECC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000AFE0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000B4A4);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000B868);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000B93C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000BCE0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000BDA8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000BF00);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C004);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E6C0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E710);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E718);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C1CC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C484);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C554);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C630);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C838);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C8AC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C900);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C93C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C9F8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CA8C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CB20);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CB98);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CC68);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CCDC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CD3C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CDD8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CEC8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CFCC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000D13C);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000D310);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000D368);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E658);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E6C0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E740);
#endif
