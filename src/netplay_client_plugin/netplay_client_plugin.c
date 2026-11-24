#include "common.h"
#include "netplay_client_plugin_decls.h"

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", module_start);

#if FW_VERSION == 100
s32 module_stop(void) {
    func_00005568();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_0000D368();
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DD88);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DD9C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000DDB4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00005E7C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00005E9C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00005EC0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00005EE4);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000613C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006158);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006178);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006194);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000061B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000061D4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000061FC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006220);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006238);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000015C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000001AC);

#if FW_VERSION == 100
u8 func_000001D4(void) {
    return D_0000E904;
}
#endif

#if FW_VERSION != 100
u8 func_000001D4(void) {
    return D_0000E904;
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000001E0);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000234);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E000);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006278);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000025C);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000002C0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000368);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000390);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000003B4);

#if FW_VERSION == 100
void func_0000049C(void) {
    func_000003B4(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_000004BC(void) {
    func_000003B4(0, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_00000440(void) {
    func_000003B4(1, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_00000460(void) {
    func_000003B4(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000480);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000004B0);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000052C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005874);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000588);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000688);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E028);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000680);
#endif

#if FW_VERSION == 100
void func_000009D4(void) {

}
#endif

#if FW_VERSION == 100
void func_000009DC(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, scePaf_BB3CBD19(scePaf_D4FAE7D0(&D_0000E140), &D_0000E158, -1));
    func_00003E08(&sp0);
    func_00005874();
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E040);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E050);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000006D0);
#endif

#if FW_VERSION != 100
void func_0000083C(s32 arg0) {
    if (arg0 == 0) {

    } else {
        func_00000588();
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000864);
#endif

#if FW_VERSION != 100
void func_000008D0(void) {
    func_0000052C((s32) &D_0000E0B0, (s32) &D_0000E0C4);
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0B0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0C4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0D8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0E8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E0F4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E11C);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E140);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E158);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E170);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E188);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1A0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1BC);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E1E0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000063DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006404);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E200);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000643C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006454);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E214);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006488);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000064AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000064C0);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E234);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E240);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E250);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006508);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E25C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006560);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000657C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006588);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000065BC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000065DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000065F0);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E274);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E28C);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E2A4);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E2AC);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E2C0);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E2DC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E2F0);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E300);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E314);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E338);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E358);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E378);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E38C);
#endif

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E39C);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E3B0);

INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E3C8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006718);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006730);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_00006748);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000A2C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000AB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000008F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000A38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000A90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000AD8);
#endif

#if FW_VERSION != 100
void func_00000BAC(void) {
    func_00000588();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000BC8);
#endif

#if FW_VERSION != 100
void func_00000C50(void) {
    func_0000052C((s32) &D_0000E140, (s32) &D_0000E158);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000C78);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000C18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000F40);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00000E68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001368);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001D18);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001E24);
#endif

#if FW_VERSION != 100
void func_00002210(void) {
    sceKernelPowerTick(0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000222C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000022CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000234C);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000023B0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001260);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000012BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001318);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001374);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000014B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001524);
#endif

#if FW_VERSION != 100
void func_000023F8(void) {
    if ((D_0000E90C != 0) || (func_0000535C() == 0)) {
        func_0000544C();
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002434);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002528);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000015D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001658);
#endif

#if FW_VERSION == 100
void func_00001814(void) {

}
#endif

#if FW_VERSION == 100
void func_0000181C(void) {

}
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

#if FW_VERSION == 100
void func_00001884(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000188C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000018C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001950);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001A28);
#endif

#if FW_VERSION == 100
void func_00001B30(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001B38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000255C);
#endif

#if FW_VERSION != 100
s32 func_0000260C(void) {
    func_0000594C();
    return 0;
}
#endif

#if FW_VERSION != 100
void func_0000262C(void) {
    void *sp0;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00003E08(&sp0);
    func_00005150((s32) &D_0000E8CC);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002668);
#endif

#if FW_VERSION != 100
void func_00002998(void) {
}
#endif

#if FW_VERSION != 100
void func_000029A0(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000029A8);
#endif

#if FW_VERSION != 100
void func_00002C70(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002C78);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002CE8);

#if FW_VERSION == 100
void func_00001D44(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001D4C);
#endif

#if FW_VERSION != 100
void func_00002F04(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002F0C);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002F9C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00001F48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000209C);
#endif

#if FW_VERSION == 100
void func_00002138(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002140);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000031C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003514);
#endif

#if FW_VERSION != 100
void func_000035E8(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000035F0);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000365C);

#if FW_VERSION == 100
void func_00002204(void) {

}
#endif

#if FW_VERSION == 100
void func_0000220C(void) {

}
#endif

#if FW_VERSION != 100
void func_000036D8(void) {
}
#endif

#if FW_VERSION != 100
void func_000036E0(void) {
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000036E8);

#if FW_VERSION == 100
void func_00002478(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002480);
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

#if FW_VERSION == 100
void func_000025AC(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000025B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000026E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002748);
#endif

#if FW_VERSION == 100
void func_0000282C(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002834);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002868);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000028C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002918);
#endif

#if FW_VERSION == 100
void func_000029B8(void) {
    func_00002918(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_000029D8(void) {
    func_00002918(0, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_000029F8(void) {
    func_00002D4C();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002A14);
#endif

#if FW_VERSION != 100
void func_000039C0(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000039C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003A28);
#endif

#if FW_VERSION != 100
void func_00003B20(void) {
    func_00003A28(1, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_00003B40(void) {
    func_00003A28(0, 0xFFFF);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003B60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003BE8);
#endif

#if FW_VERSION != 100
void func_00003C3C(void) {
    func_00004338();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003C58);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003D24);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003D74);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E08);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E38);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E88);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003F24);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002CC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002D4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002D68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00002DA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004574);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003FB8);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004148);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000041E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004338);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004364);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004574);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004620);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000046D4);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000047C8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003104);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000031B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003280);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000034F0);
#endif

#if FW_VERSION == 100
void func_00003664(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000048EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000049C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004B00);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004B54);
#endif

#if FW_VERSION != 100
void func_00004BA8(struct Unk_func_00004BA8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION != 100
void func_00004BB8(struct Unk_func_00004BB8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004BC8);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004C08);

#if FW_VERSION == 100
void func_000036F0(void) {
    D_00006D9C = 0;
}
#endif

#if FW_VERSION == 100
void func_000036FC(void) {
    func_000036F0();
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004C84);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003894);
#endif

#if FW_VERSION == 100
void func_000038F4(void) {
    func_00003894(0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004D04);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004D5C);

#if FW_VERSION == 100
void func_00003954(void) {
    func_00004D5C(0);
}
#endif

#if FW_VERSION != 100
void func_00004DA0(void) {
    func_00004D5C(0);
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E430);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004DBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005030);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000050B8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000050E8);

#if FW_VERSION == 100
void func_000039D0(void) {
    func_000069EC();
}
#endif

#if FW_VERSION == 100
void func_00005134(void) {
    func_00006A80();
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000679C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_000067B4);
#endif

#if FW_VERSION != 100
void func_00005118(void) {
    func_000069EC();
}
#endif

#if FW_VERSION != 100
void func_00005134(void) {
    func_00006A80();
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005150);

#if FW_VERSION == 100
s32 func_00003A64(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION == 100
s32 func_00003A6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION == 100
s32 func_00003A74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_00003A7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 100
s32 func_00003A84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}
#endif

#if FW_VERSION == 100
s32 func_00003A8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}
#endif

#if FW_VERSION == 100
s32 func_00003A94(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION != 100
s32 func_000051AC(struct Unk_func_000051AC_0 *arg0) {
    return arg0->unk4;
}
#endif

#if FW_VERSION != 100
s32 func_000051B4(struct Unk_func_000051B4_0 *arg0) {
    return arg0->unk8;
}
#endif

#if FW_VERSION != 100
s32 func_000051BC(struct Unk_func_000051BC_0 *arg0) {
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_000051C4(struct Unk_func_000051C4_0 *arg0) {
    return arg0->unk10;
}
#endif

#if FW_VERSION != 100
s32 func_000051CC(struct Unk_func_000051CC_0 *arg0) {
    return arg0->unk14;
}
#endif

#if FW_VERSION != 100
s32 func_000051D4(struct Unk_func_000051D4_0 *arg0) {
    return arg0->unk18;
}
#endif

#if FW_VERSION != 100
s32 func_000051DC(struct Unk_func_000051DC_0 *arg0) {
    return arg0->unk1C;
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000051E4);

#if FW_VERSION == 100
void func_00003AC0(void *arg0) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_00003ADC(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_00003AF8(void *arg0) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION != 100
void func_00005208(struct Unk_func_00005208_0 *arg0) {
    scePaf_CAF05F1D(arg0->unk4);
}
#endif

#if FW_VERSION != 100
void func_00005224(struct Unk_func_00005224_0 *arg0) {
    scePaf_3481F595(arg0->unk4);
}
#endif

#if FW_VERSION != 100
void func_00005240(struct Unk_func_00005240_0 *arg0) {
    scePaf_DAB59652(arg0->unk4);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000525C);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005284);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003B78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003C0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003C60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003CC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003D9C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003E94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003ECC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00003F00);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004008);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004080);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E490);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000040C4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000042AC);
#endif

#if FW_VERSION == 100
void func_000043E0(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000043E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004470);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000044E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004580);
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

#if FW_VERSION == 100
void func_00004744(void) {
    D_0000EAD4 = 0;
    D_0000EAD0 = 0;
}
#endif

#if FW_VERSION != 100
s32 func_000052C0(void) {
    return __builtin_allegrex_min(D_0000EAD0, 0);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000052D4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000047E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000535C);
#endif

#if FW_VERSION != 100
s32 func_0000544C(void) {
    s32 var_v0;

    var_v0 = sceNetAdhocDownload_314ED31E(0x40, 0x1000, 0x40, 0x1000);
    if (var_v0 >= 0) {
        D_0000EB00 = 5;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005488);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000054E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000055C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005710);
#endif

#if FW_VERSION != 100
s32 func_00005748(void) {
    return __builtin_allegrex_min(sceNetAdhocDownload_8A5500E0(), 0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000576C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005874);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000058EC);
#endif

#if FW_VERSION != 100
void func_00005930(void) {
    sceNetAdhocDownload_469F6B83();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000594C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E490);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005A8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005C18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E4FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005D7C);
#endif

#if FW_VERSION != 100
void func_00006060(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006068);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006110);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006158);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000061F0);
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
void func_0000641C(void) {
    D_0000EAD4 = 0;
    D_0000EAD0 = 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006430);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000064A8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006514);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004A18);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000066D0);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000067F4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004B8C);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
void func_00004D78(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00006D38(arg0 + 0x20);
}
#endif

#if FW_VERSION != 100
void func_00006AA0(struct Unk_func_00006AA0_0 *arg0) {
    scePaf_27F64616(arg0->unk4);
    arg0->unk1C = 0;
    func_00006D38((u8 *)arg0 + 0x20);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006AD8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006B24);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006C30);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00004FCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00005110);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006CF4);
#endif

#if FW_VERSION == 100
void func_00006D04(struct Unk_func_00006D04_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_00006EC8((s32) arg0, arg1);
    }
}
#endif

#if FW_VERSION != 100
void func_00006CF4(struct Unk_func_00006CF4_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION != 100
void func_00006D04(struct Unk_func_00006D04_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_00006EC8((s32) arg0, arg1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006D38);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006DC0);

#if FW_VERSION == 100
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
#endif

#if FW_VERSION != 100
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
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006EC8);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00006FEC);

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007014);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007050);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007094);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000751C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000076FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000077A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000795C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007AE4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007C54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00007ED0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000086C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00008D44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009024);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009190);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_000094D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000976C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009C10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_00009D18);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A088);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A174);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A2F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A38C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A554);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A5AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A624);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A694);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A720);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000A8A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000AA3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000ABBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000ADB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000AECC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000AFE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000B4A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000B868);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000B93C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000BCE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000BDA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000BF00);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C004);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E6C0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E710);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E718);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C1CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C484);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C554);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C630);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C838);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C8AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C900);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C93C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000C9F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CA8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CB20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CB98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CC68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CCDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CD3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CDD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CEC8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000CFCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000D13C);
#endif

INCLUDE_ASM("nonmatchings/netplay_client_plugin", func_0000D310);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E6C0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_client_plugin", D_0000E740);
#endif
