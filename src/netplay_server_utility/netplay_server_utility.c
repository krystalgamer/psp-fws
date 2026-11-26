/* cflags: -Os */
#include "common.h"
#include "netplay_server_utility_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000024);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000000AC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", module_start);

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 module_stop(void) {
    func_00003520();
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    func_00002F64();
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 module_stop(void) {
    func_00003A58();
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000015C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000001F0);

s32 func_000001FC(void) {
    func_0000015C();
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003DDC);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003DE0);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003DF0);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E04);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E1C);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E28);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E38);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E50);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E68);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E7C);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E9C);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003EAC);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003ED4);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003EDC);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003F78);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003F7C);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003FBC);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003FCC);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003FD0);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003FE0);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004018);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004068);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004078_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004078_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004078);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000407C);
#endif

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004080);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004094);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000040AC);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000040C4);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000040E4);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004108);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000412C);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000414C);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004170);

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004194);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000036C8);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000036F0);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003718);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003730);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000015C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000001AC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000001E4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000001F0);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000021C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000375C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000021C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000002B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00000430(void) {
    D_00004154 = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003770);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000002F8);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000003CC);
#endif

#if FW_VERSION >= 282
void func_000004D0(void) {
    D_000045D4 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000004DC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000500);

#if FW_VERSION < 282
void func_000004AC(void) {
    func_00000500(1, 0xFFFF);
}

void func_000004CC(void) {
    func_00000500(0, 0xFFFF);
}
#else
void func_0000058C(void) {
    func_00000500(1, 0xFFFF);
}

void func_000005AC(void) {
    func_00000500(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000005CC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000005FC);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000678);
#else
void func_00000678(s32 arg0, s32 arg1) {
    scePaf_8B38372A(D_000045F0, arg0);
    scePaf_39E62C88(D_000045F0, arg1, 0, 0);
    scePaf_A013540A(D_000045F0, arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000634);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000072C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003CC4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000037C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000007A0);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000898);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000008EC(void) {
    func_00000634(1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00000908(void) {
    func_00000634(3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000914);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000AD0);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000B68);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000C98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000924);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000005F4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000678_v100);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000037C0);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000037D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003CC4);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000037E4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000037F8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000381C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000009C4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000B80);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000C18);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000C90);

void func_00000D4C(void) {
    D_00004174 = 0;
    func_000025AC((s32) &D_0000416C);
}

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000D74);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000E6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003AE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003D30);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000006D4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000784);
#endif

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000041CC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003D70);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003D88);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003DAC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000423C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003DD0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003DE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E00);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000037C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E18);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E24);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003E54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000FD8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000073C);

void func_000007E8(void) {
    func_000005F4(1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000804);
#endif

#if FW_VERSION == 100
void func_00000804(void) {
    func_000005F4(-1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001054);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000106C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001104);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000012A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000820);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000089C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000A38);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000AB8);

void func_00000B70(void) {
    func_000025AC((s32) &D_00003D24);
}

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000B90);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000C28);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000D3C);
#endif

#if FW_VERSION < 282
void func_00000F3C(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000014F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000F44);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000FC8);

void func_0000116C(void) {

}

void func_00001174(void) {

}

void func_0000117C(void) {

}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00001790(s32 arg0) {
    void *sp0;
    D_00004160 = 4;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_B45ED019());
    func_000017D0(&sp0);
    sceVshCommonGui_A0DE7090(0);
    scePaf_A0ED77C4(0, &func_00000E6C, arg0, -1, -1, &func_00000FD8);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
void func_00001790(s32 arg0) {
    void *sp0;
    D_00004160 = 4;
    sceVshCommonGui_54BC644C(&sp0, scePaf_BB3CBD19(scePaf_D4FAE7D0(&D_000037C0), &D_000037E4, -1));
    func_000017D0(&sp0);
    sceVshCommonGui_A0DE7090(0);
    scePaf_A0ED77C4(0, &func_00000E6C, arg0, -1, -1, &func_00000FD8);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000181C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001184);

void func_00001360(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001368);

void func_00001430(void) {

}

void func_00001438(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000007F8);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000008D4);

void func_00000928(void) {
    func_000006D4(3);
}

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000944);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000B00);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000B98);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000D34);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000041F4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000E38);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000421C);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004244);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000425C);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004274);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004298);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000042BC);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000042D4);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000042EC);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004304);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004314);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004320);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000433C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001440);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000149C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000F58);
#endif

#if FW_VERSION >= 350
s32 func_00001048(void) {
    scePaf_82CF97B0(0xC8);
    scePaf_D1447DB7(D_000045F0);
    func_00002A38();
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00001048(void) {
    scePaf_C4BAD564(0xC8);
    scePaf_27F64616(D_000045D0);
    func_00002A38();
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000107C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001094);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000112C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000012F0);

void func_0000149C(void) {
}

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000014A4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001550);

void func_00001714(void) {
}

void func_0000171C(void) {
}

void func_00001724(void) {
}
#endif

#if FW_VERSION >= 350
void func_0000172C(s32 arg0) {
    void *sp0;
    D_000045E4 = 4;
    sceVshCommonGui_11C48509(&sp0, sceVshCommonGui_6BC16C05());
    func_000017D0(&sp0);
    sceVshCommonGui_F5A16B4D(0);
    scePaf_3EDD45EF(0, &func_00000E38, arg0, -1, -1, &func_00000F58);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000172C(s32 arg0) {
    void *sp0;
    D_000045E4 = 4;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_B45ED019());
    func_000017D0(&sp0);
    sceVshCommonGui_A0DE7090(0);
    scePaf_A0ED77C4(0, &func_00000E38, arg0, -1, -1, &func_00000F58);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000179C);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000017D0);

#if FW_VERSION < 282
void func_00001528(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_000018EC(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 350
void func_00001800(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_5E4447F6(arg1);
    }
    func_000018EC(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00001800(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_000018EC(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001850);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000018EC);

#if FW_VERSION < 250
void func_000016C8(void) {
    D_00003D28 = 0;
}

void func_000016D4(void) {
    func_000016C8();
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000019A0);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000019D0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001A44_v250);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000186C);

void func_000018CC(void) {
    func_0000186C(0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001A20);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001A78);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000435C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001AFC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001D78);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004358);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001AD8);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001D4C);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001DD4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001E04);

#if FW_VERSION < 282
void func_000019A8(void) {
    func_0000320C();
}

void func_000019C4(void) {
    func_000032A0();
}
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003A24);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003A3C);
#endif

#if FW_VERSION >= 282
void func_00001E34(void) {
    func_0000320C();
}

void func_00001E50(void) {
    func_000032A0();
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001E6C);

#if FW_VERSION < 282
s32 func_00001A3C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00001A44(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_00001A4C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00001A54(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_00001A5C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_00001A64(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_00001A6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#else
s32 func_00001EC8(struct Unk_func_00001EC8_0 *arg0) {
    return arg0->unk4;
}

s32 func_00001ED0(struct Unk_func_00001ED0_0 *arg0) {
    return arg0->unk8;
}

s32 func_00001ED8(struct Unk_func_00001ED8_0 *arg0) {
    return arg0->unkC;
}

s32 func_00001EE0(struct Unk_func_00001EE0_0 *arg0) {
    return arg0->unk10;
}

s32 func_00001EE8(struct Unk_func_00001EE8_0 *arg0) {
    return arg0->unk14;
}

s32 func_00001EF0(struct Unk_func_00001EF0_0 *arg0) {
    return arg0->unk18;
}

s32 func_00001EF8(struct Unk_func_00001EF8_0 *arg0) {
    return arg0->unk1C;
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001F00);
#else
void func_00001F00(void *arg0, s32 arg1) {
    scePaf_39E62C88(M2C_FIELD(arg0, s32 *, 4), arg1, 0, 0);
}
#endif

#if FW_VERSION < 282
void func_00001A98(void *arg0) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4));
}

void func_00001AB4(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}

void func_00001AD0(void *arg0) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001F24);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00001F24(struct Unk_func_00001F24_0 *arg0) {
    scePaf_CAF05F1D(arg0->unk4);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001F40);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00001F40(struct Unk_func_00001F40_0 *arg0) {
    scePaf_3481F595(arg0->unk4);
}
#endif

#if FW_VERSION >= 350
void func_00001F5C(struct Unk_func_00001F5C_0 *arg0) {
    scePaf_CD216C47(arg0->unk4);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00001F5C(struct Unk_func_00001F5C_0 *arg0) {
    scePaf_DAB59652(arg0->unk4);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001F78);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001FA0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000204C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002060);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000020A4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000021E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000043B8);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001B50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000021D4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001FDC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001FF0);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002078);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000021C0);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002448);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002534);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000025AC);

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000023A8(void) {
    D_00003E2C = 2;
    return 0;
}

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000023BC);

s32 func_00002468(void) {
    return __builtin_allegrex_min(sceNetAdhocDownload_C421875C(), 0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002740);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002254);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000239C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000248C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001CC4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001D30);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001E08);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001E4C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001EDC);
#else
s32 func_00002638(void) {
    D_00004608 = 2;
    return 0;
}

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000264C);

s32 func_000026F8(void) {
    return __builtin_allegrex_min(sceNetAdhocDownload_C421875C(), 0);
}

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000271C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002874);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000029CC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002A38);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002B78);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002C18);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002C88);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002DB4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002E64);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000028AC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000043B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002960);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002E88);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000043B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002110);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002248);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000022D4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000022E8);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002370);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000023E0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003028);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000312C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000319C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000320C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000032A0);

#if FW_VERSION < 282
void func_000025E4(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00003558(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000032C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_000032C0(struct Unk_func_000032C0_0 *arg0) {
    scePaf_27F64616(arg0->unk4);
    arg0->unk1C = 0;
    func_00003558((u8 *)arg0 + 0x20);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000032F8);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003344);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003450);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002838);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000297C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003514);
#else
void func_00003514(struct Unk_func_00003514_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003524);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003558);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000035E0);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003674);

#if FW_VERSION >= 350
void func_000036E8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_C1B0AA0D(arg1);
    }
    func_000038F0(arg0, arg1, var_v0);
}
#else
void func_000036E8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000038F0(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003738);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000385C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000038F0);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000399C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000039C4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003A00);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003A58);
#endif

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004490);
