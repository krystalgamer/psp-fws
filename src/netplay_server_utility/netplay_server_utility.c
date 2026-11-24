/* cflags: -Os */
#include "common.h"
#include "netplay_server_utility_decls.h"

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000024);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000000AC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", module_start);

#if FW_VERSION == 100
s32 module_stop(void) {
    func_00002F64();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_00003A58();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000015C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000001F0);
#endif

#if FW_VERSION != 100
s32 func_000001FC(void) {
    func_0000015C();
    return 0;
}
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

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004194);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000036C8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000036F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003718);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003730);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000015C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000001AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000001E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000001F0);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000021C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000375C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003770);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000002F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000003CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000002B4);
#endif

#if FW_VERSION != 100
void func_000004D0(void) {
    D_000045D4 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000004DC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000500);

#if FW_VERSION == 100
void func_000004AC(void) {
    func_00000500(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_000004CC(void) {
    func_00000500(0, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_0000058C(void) {
    func_00000500(1, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_000005AC(void) {
    func_00000500(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000005CC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000005FC);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000678);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000005F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000678_v100);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000037C0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000037D0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000037E4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000037F8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000381C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000006D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000784);
#endif

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000041CC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000073C);
#endif

#if FW_VERSION == 100
void func_000007E8(void) {
    func_000005F4(1);
}
#endif

#if FW_VERSION == 100
void func_00000804(void) {
    func_000005F4(-1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000820);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000089C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000A38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000AB8);
#endif

#if FW_VERSION == 100
void func_00000B70(void) {
    func_000025AC((s32) &D_00003D24);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000B90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000C28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000D3C);
#endif

#if FW_VERSION == 100
void func_00000F3C(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000F44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000FC8);
#endif

#if FW_VERSION == 100
void func_0000116C(void) {

}
#endif

#if FW_VERSION == 100
void func_00001174(void) {

}
#endif

#if FW_VERSION == 100
void func_0000117C(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001184);
#endif

#if FW_VERSION == 100
void func_00001360(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001368);
#endif

#if FW_VERSION == 100
void func_00001430(void) {

}
#endif

#if FW_VERSION == 100
void func_00001438(void) {

}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000007F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000008D4);
#endif

#if FW_VERSION != 100
void func_00000928(void) {
    func_000006D4(3);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000944);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000B00);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000B98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000D34);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000041F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000E38);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000421C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004244);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000425C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004274);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004298);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000042BC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000042D4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000042EC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004304);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004314);
#endif

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004320);

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_0000433C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001440);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000149C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00000F58);
#endif

#if FW_VERSION != 100
s32 func_00001048(void) {
    scePaf_C4BAD564(0xC8);
    scePaf_27F64616(D_000045D0);
    func_00002A38();
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000107C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001094);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000112C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000012F0);
#endif

#if FW_VERSION != 100
void func_0000149C(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000014A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001550);
#endif

#if FW_VERSION != 100
void func_00001714(void) {
}
#endif

#if FW_VERSION != 100
void func_0000171C(void) {
}
#endif

#if FW_VERSION != 100
void func_00001724(void) {
}
#endif

#if FW_VERSION != 100
void func_0000172C(s32 arg0) {
    void *sp0;
    D_000045E4 = 4;
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_B45ED019());
    func_000017D0(&sp0);
    sceVshCommonGui_A0DE7090(0);
    scePaf_A0ED77C4(0, &func_00000E38, arg0, -1, -1, &func_00000F58);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000179C);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000017D0);

#if FW_VERSION == 100
void func_00001528(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_FD4C9F47(arg1);
    }
    func_000018EC(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
void func_000016C8(void) {
    D_00003D28 = 0;
}
#endif

#if FW_VERSION == 100
void func_000016D4(void) {
    func_000016C8();
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000019A0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000186C);
#endif

#if FW_VERSION == 100
void func_000018CC(void) {
    func_0000186C(0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001A20);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001A78);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004358);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001AD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001D4C);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001DD4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001E04);

#if FW_VERSION == 100
void func_000019A8(void) {
    func_0000320C();
}
#endif

#if FW_VERSION == 100
void func_000019C4(void) {
    func_000032A0();
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003A24);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00003A3C);
#endif

#if FW_VERSION != 100
void func_00001E34(void) {
    func_0000320C();
}
#endif

#if FW_VERSION != 100
void func_00001E50(void) {
    func_000032A0();
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001E6C);

#if FW_VERSION == 100
s32 func_00001A3C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}
#endif

#if FW_VERSION == 100
s32 func_00001A44(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION == 100
s32 func_00001A4C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION == 100
s32 func_00001A54(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 100
s32 func_00001A5C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}
#endif

#if FW_VERSION == 100
s32 func_00001A64(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}
#endif

#if FW_VERSION == 100
s32 func_00001A6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}
#endif

#if FW_VERSION != 100
s32 func_00001EC8(struct Unk_func_00001EC8_0 *arg0) {
    return arg0->unk4;
}
#endif

#if FW_VERSION != 100
s32 func_00001ED0(struct Unk_func_00001ED0_0 *arg0) {
    return arg0->unk8;
}
#endif

#if FW_VERSION != 100
s32 func_00001ED8(struct Unk_func_00001ED8_0 *arg0) {
    return arg0->unkC;
}
#endif

#if FW_VERSION != 100
s32 func_00001EE0(struct Unk_func_00001EE0_0 *arg0) {
    return arg0->unk10;
}
#endif

#if FW_VERSION != 100
s32 func_00001EE8(struct Unk_func_00001EE8_0 *arg0) {
    return arg0->unk14;
}
#endif

#if FW_VERSION != 100
s32 func_00001EF0(struct Unk_func_00001EF0_0 *arg0) {
    return arg0->unk18;
}
#endif

#if FW_VERSION != 100
s32 func_00001EF8(struct Unk_func_00001EF8_0 *arg0) {
    return arg0->unk1C;
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001F00);

#if FW_VERSION == 100
void func_00001A98(void *arg0) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_00001AB4(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
void func_00001AD0(void *arg0) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION != 100
void func_00001F24(struct Unk_func_00001F24_0 *arg0) {
    scePaf_CAF05F1D(arg0->unk4);
}
#endif

#if FW_VERSION != 100
void func_00001F40(struct Unk_func_00001F40_0 *arg0) {
    scePaf_3481F595(arg0->unk4);
}
#endif

#if FW_VERSION != 100
void func_00001F5C(struct Unk_func_00001F5C_0 *arg0) {
    scePaf_DAB59652(arg0->unk4);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001F78);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001FA0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001B50);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001FDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001FF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002078);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000021C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002448);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002534);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000025AC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001CC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001D30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001E08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001E4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00001EDC);
#endif

#if FW_VERSION != 100
s32 func_00002638(void) {
    D_00004608 = 2;
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000264C);
#endif

#if FW_VERSION != 100
s32 func_000026F8(void) {
    return __builtin_allegrex_min(sceNetAdhocDownload_C421875C(), 0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000271C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002874);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000029CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002A38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002B78);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002C18);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002C88);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002C88);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002DB4);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002E64);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002E88);
#endif

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_000043B8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002110);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002248);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000022D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000022E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002370);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000023E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003028);
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000312C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000319C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000320C);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000032A0);

#if FW_VERSION == 100
void func_000025E4(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00003558(arg0 + 0x20);
}
#endif

#if FW_VERSION != 100
void func_000032C0(struct Unk_func_000032C0_0 *arg0) {
    scePaf_27F64616(arg0->unk4);
    arg0->unk1C = 0;
    func_00003558((u8 *)arg0 + 0x20);
}
#endif

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_000032F8);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003344);

INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003450);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00002838);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_0000297C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/netplay_server_utility", func_00003514);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
void func_000036E8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_CA79D58B(arg1);
    }
    func_000038F0(arg0, arg1, var_v0);
}
#endif

#if FW_VERSION != 100
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

INCLUDE_RODATA("nonmatchings/netplay_server_utility", D_00004490);
