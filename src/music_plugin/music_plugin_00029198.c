/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029198);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DAD0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002924C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002944C);
#endif

#if FW_VERSION == 100
s32 func_0002944C(void *arg0) {
    func_0002F3B4((s32) M2C_FIELD(arg0, u8 *, 0x12C), (s32) M2C_FIELD(arg0, u8 *, 0x12D), (s32) (arg0 + 0x134));
    M2C_FIELD(arg0, u16 *, 0x15C) = (u16) (M2C_FIELD(arg0, u16 *, 0x15C) | 8);
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_0002944C(void *arg0) {
    func_0002F3B4((s32) M2C_FIELD(arg0, u8 *, 0x12C), (s32) M2C_FIELD(arg0, u8 *, 0x12D), arg0 + 0x134);
    M2C_FIELD(arg0, u16 *, 0x15C) = (u16) (M2C_FIELD(arg0, u16 *, 0x15C) | 8);
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002948C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000294DC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029630);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029690);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000297C0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029C38);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00029C38(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a4;

    var_a4 = 0x960E;
    if (M2C_FIELD(&D_00062D54, s32 *, 0) == 0) {
        M2C_FIELD(&D_00062D54, s32 *, 0) = 1;
        var_a4 = 0;
        M2C_FIELD(&D_00062D54, s32 *, 0x18) = arg2;
        M2C_FIELD(&D_00062D54, s32 *, 4) = 0x961C;
        M2C_FIELD(&D_00062D54, s32 *, 0x10) = arg0;
        M2C_FIELD(&D_00062D54, s32 *, 0x14) = arg1;
        M2C_FIELD(&D_00062D54, s32 *, 8) = 0;
    }
    return var_a4;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029C78);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00029C78(void) {
    M2C_VFIELD(&D_00062D54, s32, 0) = 0;
    M2C_VFIELD(&D_00062D54, s32, 0x18) = 0;
    M2C_VFIELD(&D_00062D54, s32, 4) = 0;
    M2C_VFIELD(&D_00062D54, s32, 8) = 0;
    M2C_VFIELD(&D_00062D54, s32, 0x10) = 0;
    M2C_VFIELD(&D_00062D54, s32, 0x14) = 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B0D8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029C9C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029CC4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029CD0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029CDC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029CE8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029D90);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029ED4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00029ED4(void) {
    return 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029EDC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00029EDC(void) {
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029EE4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029F74);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029FF4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A070);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A0D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A160);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A1D0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A25C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A2CC);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A308);
#endif

#if FW_VERSION == 152
s32 func_0002A308(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v0 = func_00029F74(var_s0);
        var_s0 += 1;
        var_s1 = (temp_v0 != 0) ? ((var_s1 != 0) ? var_s1 : temp_v0) : var_s1;
    } while (var_s0 < 4);
    return var_s1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A358);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A394);
#endif

#if FW_VERSION == 152
s32 func_0002A394(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v0 = func_0002A070(var_s0);
        var_s0 += 1;
        var_s1 = (temp_v0 != 0) ? ((var_s1 != 0) ? var_s1 : temp_v0) : var_s1;
    } while (var_s0 < 3);
    return var_s1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A3E4);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A420);
#endif

#if FW_VERSION == 152
s32 func_0002A420(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v0 = func_0002A160(var_s0);
        var_s0 += 1;
        var_s1 = (temp_v0 != 0) ? ((var_s1 != 0) ? var_s1 : temp_v0) : var_s1;
    } while (var_s0 < 5);
    return var_s1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A470);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A4AC);
#endif

#if FW_VERSION == 152
s32 func_0002A4AC(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v0 = func_0002A25C(var_s0);
        var_s0 += 1;
        var_s1 = (temp_v0 != 0) ? ((var_s1 != 0) ? var_s1 : temp_v0) : var_s1;
    } while (var_s0 < 0x10);
    return var_s1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A4FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A56C);
#endif

#if FW_VERSION == 100
s32 func_0002A56C(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_0002A308();
    if (temp_v0 != 0) {
        var_s0 = temp_v0;
    }
    temp_v0_2 = func_0002A4AC();
    if (temp_v0_2 != 0) {
        var_s0 = temp_v0_2;
    }
    temp_v0_3 = func_0002A420();
    if (temp_v0_3 != 0) {
        var_s0 = temp_v0_3;
    }
    temp_v0_4 = func_0002A394();
    if (temp_v0_4 != 0) {
        var_s0 = temp_v0_4;
    }
    return var_s0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A5CC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002A5CC(void) {
    return 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A5D4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002A5D4(void) {
    return 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A5DC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002A5DC(void) {
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DB94);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DBC4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DBD0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DBDC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DBE8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DBF4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DC00);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DC14);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DC28);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DC38);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DC44);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DC54);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DC68);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DC78);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DC88);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DC98);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DCA8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DCB8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DCC8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DCD8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DCE8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DCF8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DD08);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DD18);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DD2C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DD3C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DD50);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DD64);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DD78);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A5E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A6A8);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A728);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002A728(void) {

}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A730);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002A730(void) {

}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A738);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002A738(void) {

}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A740);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002A740(void) {

}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A748);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A85C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BF14);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BF40);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BF4C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00062578);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00062590);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000625A0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BF58);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C2B8);

Class_00062628::~Class_00062628() {
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C6A0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C9EC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CA58);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CAC0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CB1C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CB84);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CF70);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CFB0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D0C0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D0C8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D11C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D128);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D1C0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D258_v150);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D2CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022294);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000222D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002231C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002236C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000223B0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000223BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022408);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085CC8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085CE0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022498);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000225B0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022D6C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022D98);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022DD0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022DEC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022E08);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022E24);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022E54);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022F74);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023094);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023224);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0005F7E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00013F04);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002346C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023518_v250);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023560);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000235A8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000235F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00013F78);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00014004);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023698);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000236D4_v250);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023724);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002372C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000237A4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023800);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002398C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023A30);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023B98);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085D10);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D1C0_v250);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023CF4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023E48);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023F40);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023F74);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023FA4_v250);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023FD4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024004);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024034);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024064);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000240A4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000240D4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024104);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024138);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024174);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000241A8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000241B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000241C0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000241C8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000241D0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000242EC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024408);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000245BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024894);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000249B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024A08);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024A58);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024AAC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00025158);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000254B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00025818);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D218);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D250);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000259E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00025EAC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000261F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000261F8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000262A0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026400);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026410);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026428);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026438);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026618);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026870);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026890);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026AC8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026C04);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00027A60);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00027B14);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00027C58);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000283DC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028C88);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028CD4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028CF0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028D0C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028D34);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028D5C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028D98);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028DA0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028DAC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028DE8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028E24);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028EB4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028EF0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028F28);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028F44);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028F4C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028F68);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000225EC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002261C);

Class_00085D40::~Class_00085D40() {
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000226D4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022750);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D6C0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D6D0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085D10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002278C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002295C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000229E0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022A68);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022ACC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022CF8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022D38);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000296C8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085D40);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022D40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00022E80);

Class_00085F70::~Class_00085F70() {
}
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085D40);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D710);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D71C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023048);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D758);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D764);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D770);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D784);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D7A0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D7B4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D7D0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D7F0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D80C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D824);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D828);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008D830);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023328);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023394);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023458);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002357C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023648);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000237FC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023AB8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A7C4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00023E58_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024194);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002443C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024858);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024BA0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00024E28);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002504C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000251D4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00025474);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002597C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002614C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026504);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026654);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026794);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026820);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000268F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026A30);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026ACC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026B90);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026E1C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D418);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D910);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00026EEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000276A8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028054);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028144);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028234);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000282F4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002836C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028A98);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EDEC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00028B28);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029084);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00029B14);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A038);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A184);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A328);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A438);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A5F4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A620);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A720);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A7AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A878);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A8DC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002AB14);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002ABBC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002ACA4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002ADB0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002AE50);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002AE70);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00013548);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00013558);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00013598);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002AF5C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002AFC4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B02C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B088);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B118);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B174);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B204);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B260);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B2BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B380);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B388);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B3C4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B400);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B458);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B4B0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B4E8);

Class_00086100::~Class_00086100() {
}
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085E48);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085E58);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085E70);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085E7C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085E90);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085E9C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085EA8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085EBC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085ED8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085EEC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085F08);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085F28);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085F44);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085F5C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085F60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085F70);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085F80);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085F84);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00085F98);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000317DC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B5A8_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BB38);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BB94);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BC90);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C14C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C234);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C27C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C284);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C2B4);

Class_00086180::~Class_00086180() {
}

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000860E8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000860EC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000860F0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000860F4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086100);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C36C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032744);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C564_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C5A4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C5AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C5DC);

Class_000862D0::~Class_000862D0() {
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C694);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C7D4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086180);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086190);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086194);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000329F8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C818_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CA74);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000861B8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000861C8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CFB8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DB94);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DB9C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DBCC);

Class_00086480::~Class_00086480() {
}

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086228);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008624C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086264);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086278);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086290);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008DC28);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086298);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000862D0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000862E0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000862FC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086318);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086320);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086328);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086330);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086338);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086344);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086364);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086384);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000863A4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000863C8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000863E8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000863FC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086408);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086410);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008641C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086440);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DC84);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033F50);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034278);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DEC8_v201);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E1F0_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E2C4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E3C8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000345D4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E54C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E5EC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E670);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086480);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086490);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086494);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086498);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008649C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000864A0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000864A4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E678);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030810);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030860);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030F0C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031198);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031220);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031238);

Class_00087060::~Class_00087060() {
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031298);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000312A4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031318);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086C90);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031360);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031704);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086E14);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086E18);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086E1C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086E38);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086E54);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086E78);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086E94);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086EAC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086EC8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086EE8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086F00);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086F18);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086F30);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086F4C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00086F6C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003173C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003181C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003188C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000319B8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036DB8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031A18);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031AF8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031B38);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000328E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032904);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032924);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003292C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003297C);

Class_000875F0::~Class_000875F0() {
}

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087060);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087070);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087088);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000870A0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000870B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032A54);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032FBC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000870F4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033048);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087138);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087150);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087168);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087188);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000871A0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008E834);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000871A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000872E8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087304);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008E9B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087320);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008733C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087358);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008736C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087388);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000873A0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000873C0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000873D8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000873F8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087408);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087424);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008743C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087450);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008746C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087480);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087494);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000874A8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000874C4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000874E0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087500);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087520);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087540);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087560);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087564);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087568);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008756C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087570);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087574);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087578);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008757C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087580);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000332D0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033560);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000335E0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033694);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033700);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000339B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033AF8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033CA0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033D58);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033FFC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034038);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000341D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034450);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034604);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000348F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034970);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035434);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003591C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035980);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035F30);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035F80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035FD8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036058);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036078);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036098);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000360F4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B4F0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036174_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000361D0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003622C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036234);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036270);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000362C8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036308);

Class_00061F10::~Class_00061F10() {
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000363D0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036494);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000875F0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008EC88);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008ECB0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008ECD8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008ECF8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008ED18);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008ED3C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008ED60);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008ED80);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008EDA0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087600);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087620);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087640);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087660);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087680);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000876A4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000876C4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000876EC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008770C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008772C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087750);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087770);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008EF34);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008EF4C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008EF64);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008EF7C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008EF98);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008EFB4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008EFD0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008EFE8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008F004);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008F01C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008F02C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008F03C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000364F8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000877B0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000877B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036568);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000367E8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036848);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003699C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008791C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087944);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087968);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036A20);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036D1C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036DCC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00037004);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087B50);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087B68);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087B90);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087BB4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087BDC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087C00);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087C18);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087C3C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087C60);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087C80);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087C84);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00087C88);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00037004);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000372E0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C3C4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C4A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00037354);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000373AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00037408);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000374CC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000374F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00037554);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000376D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000378BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00037938);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BCA0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BCCC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BCD8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00061F10);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00061F28);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00061F38);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002BCE4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C044);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C3A4);
#endif

#if FW_VERSION == 152
void func_0002C3A4(M2C_UNK **arg0) {
    *arg0 = &D_00061FC0;
    _ZN3paf8PhWidgetD2Ev();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C3CC);
#endif

#if FW_VERSION == 152
void func_0002C3CC(M2C_UNK **arg0) {
    *arg0 = &D_00061FC0;
    _ZN3paf8PhWidgetD2Ev();
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C3F4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C42C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C778);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C7E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C84C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C8A8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C910);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CCC8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CD08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CE18);
#endif

#if FW_VERSION == 152
s32 func_0002CE18(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CE20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CE74);
#endif

#if FW_VERSION == 152
s32 func_0002CE74(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00038B20);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00038B78);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CE80);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CF18);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CFB0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D024);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A87C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A90C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A99C);
#endif

#if FW_VERSION == 100
void func_0002A99C(s32 **arg0) {
    *arg0 = &D_0005DE90;
    func_000324DC((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0002A99C(M2C_UNK **arg0) {
    *arg0 = &D_0005DE90;
    func_000324DC((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A9C4);
#endif

#if FW_VERSION == 100
void func_0002A9C4(s32 **arg0) {
    *arg0 = &D_0005DE90;
    func_000324DC((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0002A9C4(M2C_UNK **arg0) {
    *arg0 = &D_0005DE90;
    func_000324DC((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002A9EC);
#endif

#if FW_VERSION == 100
void func_0002A9EC(s32 **arg0) {
    *arg0 = &D_0005DE90;
    func_000324DC((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D3C8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D458);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D4E8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D510);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D538);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00062628);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D120);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D1B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D240);
#endif

#if FW_VERSION == 152
void func_0002D240(M2C_UNK **arg0) {
    *arg0 = &D_00062130;
    func_0003495C((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D268);
#endif

#if FW_VERSION == 152
void func_0002D268(M2C_UNK **arg0) {
    *arg0 = &D_00062130;
    func_0003495C((s32) arg0);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D290);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00061FC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DE90);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DDE0);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DDF8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002AA24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00039754);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B348);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B37C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B3D8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002B3D8(void) {
    return 0x80070005;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B3E4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002B3E4(void) {
    return 0x80070005;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B3F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B454);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B4B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B5A8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B698);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00062798);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00062130);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DE90);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DEE0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DEF0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002B790);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EC70);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EDF8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EF04);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E9B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EB38);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DF38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C124);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 152 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C38C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000621F8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C4D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C564);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C5C8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C62C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C690);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F208);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EF38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003ACE8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C71C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C7A8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002C7A8(void) {
    return 0x80070005;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C7B4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002C7B4(void) {
    return 0x80070005;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C7C0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002C7C0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005DFF8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C7D8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002C7D8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005DFF8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C7F0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C818);
#endif

#if FW_VERSION == 100
void func_0002C818(s32 **arg0) {
    *arg0 = &D_0005DFF8;
    func_0002C878();
}
#endif

#if FW_VERSION == 152
void func_0002C818(M2C_UNK **arg0) {
    *arg0 = &D_0005DFF8;
    func_0002C878();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C840);
#endif

#if FW_VERSION == 100
void func_0002C840(s32 **arg0) {
    *arg0 = &D_0005DFF8;
    func_0002C878();
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C878);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C894);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C8DC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C924);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C95C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C994);
#endif

#if FW_VERSION == 100
void func_0002C994(s32 **arg0) {
    *arg0 = &D_0005E020;
    func_0002C7F0((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0002C994(M2C_UNK **arg0) {
    *arg0 = &D_0005E020;
    func_0002C7F0((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C9BC);
#endif

#if FW_VERSION == 100
void func_0002C9BC(s32 **arg0) {
    *arg0 = &D_0005E020;
    func_0002C7F0((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0002C9BC(M2C_UNK **arg0) {
    *arg0 = &D_0005E020;
    func_0002C7F0((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002C9E4);
#endif

#if FW_VERSION == 100
void func_0002C9E4(s32 **arg0) {
    *arg0 = &D_0005E020;
    func_0002C7F0((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CA1C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CA9C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002CA9C(void) {
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DFA0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005DFF8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CAA4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CB20);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002CB20(s32 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CB28);
#endif

#if FW_VERSION == 100
void func_0002CB28(s32 arg0) {
    func_0002CBBC(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CB44);
#endif

#if FW_VERSION == 100
void func_0002CB44(s32 arg0) {
    func_0002CBBC(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CB60);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CBBC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000404BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000404D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040510);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040548);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040584);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000405C0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B2B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B2D4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B324);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B3E8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B538);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B570);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040644);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040684);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000406A0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000407C0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B5BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B65C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B6F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B868);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B890);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CBF8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CC1C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B8D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B9B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003B9D0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BA18);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BB14);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BB4C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BB74);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BB9C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BBD4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BBE4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BC1C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BC54);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BC7C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CC40);
#endif

#if FW_VERSION == 100
void func_0002CC40(s32 **arg0) {
    *arg0 = &D_0005E038;
    func_0002CD64((s32) arg0);
    func_0002CF3C((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0002CC40(M2C_UNK **arg0) {
    *arg0 = &D_0005E038;
    func_0002CD64((s32) arg0);
    func_0002CF3C((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CC78);
#endif

#if FW_VERSION == 100
void func_0002CC78(s32 **arg0) {
    *arg0 = &D_0005E038;
    func_0002CD64((s32) arg0);
    func_0002CF3C((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_0002CC78(M2C_UNK **arg0) {
    *arg0 = &D_0005E038;
    func_0002CD64((s32) arg0);
    func_0002CF3C((s32) arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BCDC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BCEC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BD5C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BD94);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BDCC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BDF4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CCB0);
#endif

#if FW_VERSION == 100
void func_0002CCB0(s32 **arg0) {
    *arg0 = &D_0005E038;
    func_0002CD64((s32) arg0);
    func_0002CF3C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BE54);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003BE64);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CCF0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CD64);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CDB0);
#endif

#if FW_VERSION == 100
s32 func_0002CDB0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x8000FFFF;
    if ((M2C_FIELD(arg0, u8 *, 4) != 0) && ((M2C_FIELD(arg0, s32 *, 0x10) >= arg1) || (func_0002CF3C((s32) arg0), temp_v0 = func_0002CECC((s32) arg0, arg1), var_v1 = temp_v0, (temp_v0 >= 0)))) {
        M2C_FIELD(arg0, s32 *, 0x14) = sceIoRead(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, void **, 0xC), (u32) arg1);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CE34);
#endif

#if FW_VERSION == 100
s32 func_0002CE34(void *arg0, void *arg1, u32 arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x8000FFFF;
    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        var_v1 = 0x80070057;
        if (arg1 != NULL) {
            temp_v0 = sceIoRead(M2C_FIELD(arg0, s32 *, 8), arg1, arg2);
            if (arg3 != NULL) {
                *arg3 = temp_v0;
            }
            var_v1 = 0;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CE88);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CECC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CF3C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CF84);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CFB4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002CFF0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D044);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D084);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D0C4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D148);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D1CC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D258);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D41C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D67C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D7AC);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D840);
#endif

#if FW_VERSION == 100
void func_0002D840(s32 **arg0) {
    *arg0 = &D_0005E078;
}
#endif

#if FW_VERSION == 152
void func_0002D840(M2C_UNK **arg0) {
    *arg0 = &D_0005E078;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D850);
#endif

#if FW_VERSION == 100
void func_0002D850(s32 **arg0) {
    *arg0 = &D_0005E078;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E020);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088088);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008808C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088098);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000880A4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000880B0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000880BC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000880C4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000880C8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000880CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000880D0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000880E0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000880F0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088100);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088110);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E058);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E078);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C714);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C74C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C774);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C78C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C794);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C7B0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C980);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C9D4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CA44);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CA60);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CA7C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CA88);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CA94);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CAA0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CAAC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CAB4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CB94);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CC0C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CC4C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CCE8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CE00);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CF0C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003CF84);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D048);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D058);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D320);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D328);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D330);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D338);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D3C8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D3E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D400);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D41C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D440);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D464);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D488);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D4AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D4D0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D4F4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D5B8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000884A0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D644);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003D864);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DB2C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DBD4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DC84);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DC8C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DCD4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DD28);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DD68);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DD70);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DD78);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DDD4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DDE4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DDF4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003DED8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E1A8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E298);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E3C0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E558);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E574);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E590);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E5AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E5C8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E5E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E600);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E61C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E638);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E654);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E670);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E68C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E6A8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E730);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E7B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E878);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E938);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003E9F4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EAB0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EB74);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EB7C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EBF8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EC7C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003ECF0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003ED4C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EE88);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EE98);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EEA8);

Class_00088640::~Class_00088640() {
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EF00);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EF58);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003EFB0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F018);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F080);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F0D4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F128);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F184);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F18C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004411C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F194);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F1E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F234);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F284);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F2D4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F5F8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F614);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F630);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F64C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F668);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F684);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F6A0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F6BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F710);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F764);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F7A8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F7EC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F830);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F874);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F8C0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044874);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F8C8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F918);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003F968);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003FC18);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003FC34);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003FC50);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003FC6C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003FCCC);

Class_00088748::~Class_00088748() {
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003FD74);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000884D0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088548);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008856C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088590);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000885B8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000885E0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088618);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088640);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088660);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000886D0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088718);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008871C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088720);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088724);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088728);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008872C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088730);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088734);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003FD90);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000404F8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040530);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040568);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000405A0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000405D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040608);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040638);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040678);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040694);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000406B0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000406B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000406C0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040724);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088748);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088758);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000887D0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040788);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004090C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040BFC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040C44);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040C90);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040CA0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040CB0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040CB8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00040FD0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004123C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004124C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004125C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004126C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004127C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000412A4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000412B4);

Class_00088870::~Class_00088870() {
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004130C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004131C);

Class_00088888::~Class_00088888() {
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041374);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041384);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000523A8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000413A4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000413B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000413DC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000413F4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004140C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041414);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004141C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041524);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041770);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041854);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041A6C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041D74);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041E64);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041F5C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041F64);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041FE0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041FE8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041FF0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00041FF8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00042000);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00042008);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00042010);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00042058);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000423B8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004248C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004256C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000425F8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00042688);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000426CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00042710);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088800);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088838);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088870);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088888);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000888A0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000888C8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000888EC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088910);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088938);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088960);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004277C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00042B00);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00042D44);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00042E44);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00042F14);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000433B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000433C0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043534);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000437D4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000438CC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043C2C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043DE4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043E00);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043E1C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043E38);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D8BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043EC0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D928);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043F10);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043F4C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043F64);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043F7C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00058890);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00043F90);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DA7C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044070);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000440AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DB38);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044144);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044160);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004417C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DBE4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000441CC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044208);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00058B1C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DC5C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DC98);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044294);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DD6C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DDA8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044398);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000443B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000443BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000443D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000443E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044450);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000444BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044534);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000445AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044620);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044694);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044710);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044910);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044918);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044A54);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044C14);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044C30);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044C4C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044C68);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044C84);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044CA0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000499E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044CBC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044D28);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044DC0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044DE8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044ECC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00044F5C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004500C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045084);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000450E8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000451C8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000452B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045378);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000453E0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045414);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000454EC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004555C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045618);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045728);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045798);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045800);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004586C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000458B0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045910);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045954);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000459C0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045A2C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045A9C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045AE8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045CC4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045D38);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045D84);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045F80);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00045FA8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000460AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004619C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046294);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000462E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046340);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046420);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046500);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046610);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000466C8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004678C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000467FC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000468E0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000469D0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046A0C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046A40);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046AA0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046AF8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046B78);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046C00);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046CD0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046D24);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046D70);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046DB4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046DE8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046E10);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046E64);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046F0C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046FB4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00046FE8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00038C7C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000470A0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004714C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000471EC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00047224);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000889D0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088A00);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088A10);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088A20);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00047254);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004750C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004757C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00047644);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000476B0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004789C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000478AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00047AD0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00047B98);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00047D5C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00047E0C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00047E94);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00047F90);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00047FE0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00048024);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00048054);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004808C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004D120);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000480E4);
#endif

#if FW_VERSION == 100
void func_0002D878(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E088;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
}

void func_0002D8BC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E088;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
}

void func_0002D900(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E088;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}

void func_0002D928(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E088;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}

void func_0002D950(s32 **arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_0005E088;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D98C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D9A4);

s32 func_0002D9BC(s32 arg0) {
    return arg0;
}

s32 func_0002D9C4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) > 0;
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002D9D0);

s32 func_0002DA7C(void *arg0, u32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 > 0) {
        var_v1 = sceKernelSetEventFlag(temp_v0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DAB0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DAEC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DB38);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DB84);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DBA0);

void func_0002DBBC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E098;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 4));
}

void func_0002DBE4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E098;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 4));
}

void func_0002DC0C(s32 **arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_0005E098;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 4));
    _ZdlPv(arg0);
}

s32 func_0002DC48(s32 arg0) {
    return arg0;
}

s32 func_0002DC50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) > 0;
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DC5C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DC98);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DCD4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DD6C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DDA8);

s32 func_0002DDE0(void) {
    return -1;
}

void func_0002DDE8(void) {
    sceKernelGetThreadId();
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DE04);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002DE04(s32 arg0) {
    D_00062D74 = 1;
    D_00062D70 = arg0;
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DE20);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DE58);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DE90);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DEC8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DF30);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002DF9C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E000);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E038);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E078);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E0B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E128);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E170);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E1B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E1F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E228);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E260);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E2A8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E2F4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E360);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E3BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E404);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E43C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E494);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E4CC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E504);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E54C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E558);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002E558(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x8300;
    if (D_00062D7C == 0) {
        D_00062D78 = arg0;
        var_v1 = 0;
        D_00062D7C = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E584);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E5D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E638);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E698);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E724);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E020);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E038);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E058);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E078);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E088);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E098);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E79C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E898);
#endif

#if FW_VERSION == 100
void func_0002E898(void) {
    func_0002E79C();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E8B4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E0B8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E0D4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E0DC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E8D4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E934);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E968);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002E968(void) {
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E970);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002E9F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EA10);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EA88);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00048E24);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EB08);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EC9C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002ED00);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002ED6C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002ED98);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002EF90);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F074);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E0FC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E11C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E134);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F08C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F19C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F210);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F25C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F30C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F3AC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002F3AC(void) {
    return 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F3B4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002F3B4(s32 arg0, s32 arg1, s32 arg2) {
    func_0002ED98(arg0 & 0xFF, arg1 & 0xFF, arg2);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F3D4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F47C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F530);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002F530(void) {
    func_0002F074();
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E14C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E164);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F550);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F660);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002F660(void) {
    func_0002F550(0);
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E18C);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E1A8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E1B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F680);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F8D0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F904);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E27C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002F9C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FABC);
#endif

#if FW_VERSION == 100
void func_0002FABC(void) {
    func_0002F9C0();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FAD8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FAF8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E2B4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E2D0);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E2D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FB30);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FB90);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FBC4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0002FBC4(void) {
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E2F8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FBCC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E328);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E340);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E348);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FCE0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FDE8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FF3C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FFB4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0002FFEC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E380);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030020);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000301C4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000302B0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030354);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000304BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030618);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003082C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030A84);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030B04);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000333D8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003309C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030D10);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030DE4);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030E44);
#endif

#if FW_VERSION == 152
s32 func_00030E44(void) {
    return 0x0A1FAFFB;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050330);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050340);

Class_00090590::~Class_00090590() {
}

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050398);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000503DC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050420);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050448);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050470);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000504AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000504C4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000504DC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000504E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000504F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0005059C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000505D0);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030E50);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030EB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004B2B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004B2DC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004B304);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00090590);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000905D0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030F10);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00030FD4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031098);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031164);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003169C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031768);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000317CC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031830);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033F78);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033C38);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031894);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000319AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031ABC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031C28);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031C94);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031D20);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031E10);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00031E10(void) {
    return 0x80070005;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031E1C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00031E1C(void) {
    return 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003C38C);
#endif

#if FW_VERSION == 152
void func_0003C38C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000627B8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034584);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000324DC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000345AC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000345BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034244);
#endif

#if FW_VERSION == 152
void func_00034244(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000627B8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000324DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003426C);
#endif

#if FW_VERSION == 152
void func_0003426C(M2C_UNK **arg0) {
    *arg0 = &D_000627B8;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003427C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004B8B0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004B948);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004B9E0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004BA54);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031E24);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031E7C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031ED4);
#endif

#if FW_VERSION == 100
void func_00031ED4(s32 **arg0) {
    *arg0 = &D_0005E528;
    func_0003C3BC();
}
#endif

#if FW_VERSION == 152
void func_00031ED4(M2C_UNK **arg0) {
    *arg0 = &D_0005E528;
    func_000324DC((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031EFC);
#endif

#if FW_VERSION == 100
void func_00031EFC(s32 **arg0) {
    *arg0 = &D_0005E528;
    func_0003C3BC();
}
#endif

#if FW_VERSION == 152
void func_00031EFC(M2C_UNK **arg0) {
    *arg0 = &D_0005E528;
    func_000324DC((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031F24);
#endif

#if FW_VERSION == 100
void func_00031F24(s32 **arg0) {
    *arg0 = &D_0005E528;
    func_0003C3BC();
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004BB50);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004BBC0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004BC30);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004BCB4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004BD38);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004BD60);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004BD88);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004BDC0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004BDC8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031F5C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00031FB4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003200C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032034);
#endif

#if FW_VERSION == 100
void func_00032034(s32 **arg0) {
    *arg0 = &D_0005E538;
    func_0003234C((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00032034(M2C_UNK **arg0) {
    *arg0 = &D_0005E538;
    func_0003234C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003205C);
#endif

#if FW_VERSION == 100
void func_0003205C(s32 **arg0) {
    *arg0 = &D_0005E538;
    func_0003234C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032094);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032158);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003221C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000322B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003234C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003245C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003249C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034C9C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003495C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000324DC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032538);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032594);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003266C);
#endif

#if FW_VERSION == 100
void func_0003266C(void *arg0) {
    s32 *temp_s1;
    s32 temp_v0;

    func_0003245C();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E618;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
    temp_s1 = _Znwj(4);
    temp_v0 = sceKernelCreateSema(&D_0005E5A8, 0x100U, 1, 1, NULL);
    if (temp_v0 > 0) {
        *temp_s1 = temp_v0;
    }
    M2C_FIELD(arg0, s32 **, 0x84) = temp_s1;
}
#endif

#if FW_VERSION == 152
void func_0003266C(void *arg0) {
    s32 *temp_s1;
    s32 temp_v0;

    func_0003245C();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E618;
    M2C_FIELD(arg0, s32 *, 0x84) = 1;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    temp_s1 = _Znwj(4);
    temp_v0 = sceKernelCreateSema(&D_0005E5A8, 0x100U, 1, 1, NULL);
    if (temp_v0 > 0) {
        *temp_s1 = temp_v0;
    }
    M2C_FIELD(arg0, s32 **, 0x88) = temp_s1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000326E0);
#endif

#if FW_VERSION == 100
void func_000326E0(s32 **arg0) {
    *arg0 = &D_0005E618;
    func_000324DC((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_000326E0(M2C_UNK **arg0) {
    *arg0 = &D_0005E618;
    func_0003495C((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032708);
#endif

#if FW_VERSION == 100
void func_00032708(s32 **arg0) {
    *arg0 = &D_0005E618;
    func_000324DC((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00032708(M2C_UNK **arg0) {
    *arg0 = &D_0005E618;
    func_0003495C((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032730);
#endif

#if FW_VERSION == 100
void func_00032730(s32 **arg0) {
    *arg0 = &D_0005E618;
    func_000324DC((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E500);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00062E20);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000627B8);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E528);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00088F78);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E538);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E548);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E558);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E5A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004C5DC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E5B8);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E5BC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034BF0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032768);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032C5C);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E5E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004C8B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004CBE0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004D244);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00089068);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_00089080);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032C90);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032CEC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00032CEC(void) {
    return 0x8000FFFF;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00032CF8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035CC8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035E60);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035944);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035AE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033488);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033648);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033734);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036114_v150);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000361A4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035D94);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035E24);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033820);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003385C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033898);
#endif

#if FW_VERSION == 100
void func_00033898(s32 **arg0) {
    *arg0 = &D_0005E670;
    func_0001A048((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00033898(M2C_UNK **arg0) {
    *arg0 = &D_0005E670;
    func_0001A048((s32) arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000338C0);
#endif

#if FW_VERSION == 100
void func_000338C0(s32 **arg0) {
    *arg0 = &D_0005E670;
    func_0001A048((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_000338C0(M2C_UNK **arg0) {
    *arg0 = &D_0005E670;
    func_0001A048((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000338E8);
#endif

#if FW_VERSION == 100
void func_000338E8(s32 **arg0) {
    *arg0 = &D_0005E670;
    func_0001A048((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033920);
#endif

#if FW_VERSION == 100
void func_00033920(s32 **arg0) {
    *arg0 = &D_0005E708;
}
#endif

#if FW_VERSION == 152
void func_00033920(M2C_UNK **arg0) {
    *arg0 = &D_0005E708;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033930);
#endif

#if FW_VERSION == 100
void func_00033930(s32 **arg0) {
    *arg0 = &D_0005E708;
}
#endif

#if FW_VERSION == 152
void func_00033930(M2C_UNK **arg0) {
    *arg0 = &D_0005E708;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033940);
#endif

#if FW_VERSION == 100
void func_00033940(s32 **arg0) {
    *arg0 = &D_0005E708;
}
#endif

#if FW_VERSION == 152
void func_00033940(M2C_UNK **arg0) {
    *arg0 = &D_0005E708;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033950);
#endif

#if FW_VERSION == 100
void func_00033950(s32 **arg0) {
    *arg0 = &D_0005E708;
}
#endif

#if FW_VERSION == 152
void func_00033950(M2C_UNK **arg0) {
    *arg0 = &D_0005E708;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033960);
#endif

#if FW_VERSION == 100
void func_00033960(s32 **arg0) {
    *arg0 = &D_0005E708;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_000890C8);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E618);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E670);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033988);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033AA8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033D30);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004E60C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00033DB0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036CE4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003695C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034274);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E6A4);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E6B8);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0008917C);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E6CC);

INCLUDE_RODATA("nonmatchings/music_plugin_00029198", D_0005E6D8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034608);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000347F0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000348C8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00037348);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0004F8B0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00037690_v152);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00034CA8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035030);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000353B8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000357DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000501B4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0005075C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050B60);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050B98);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050C98);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050E5C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050F14);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00050FFC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00056608);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00056670);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00051400);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035994);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000359B8);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000359DC);
#endif

#if FW_VERSION == 100
void func_000359DC(s32 **arg0) {
    *arg0 = &D_0005E718;
    func_00035B00((s32) arg0);
    func_00035C84((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_000359DC(M2C_UNK **arg0) {
    *arg0 = &D_0005E718;
    func_00035B00((s32) arg0);
    func_00035C84((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035A14);
#endif

#if FW_VERSION == 100
void func_00035A14(s32 **arg0) {
    *arg0 = &D_0005E718;
    func_00035B00((s32) arg0);
    func_00035C84((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00035A14(M2C_UNK **arg0) {
    *arg0 = &D_0005E718;
    func_00035B00((s32) arg0);
    func_00035C84((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035A4C);
#endif

#if FW_VERSION == 100
void func_00035A4C(s32 **arg0) {
    *arg0 = &D_0005E718;
    func_00035B00((s32) arg0);
    func_00035C84((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035A8C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035B00);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035B4C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00035B4C(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x8000FFFF;
    if ((M2C_FIELD(arg0, u8 *, 4) != 0) && ((M2C_FIELD(arg0, s32 *, 0x10) >= arg1) || (func_00035C84((s32) arg0), temp_v0 = func_00035C14((s32) arg0, arg1), var_v1 = temp_v0, (temp_v0 >= 0)))) {
        M2C_FIELD(arg0, s32 *, 0x14) = sceIoRead(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, void **, 0xC), (u32) arg1);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035BD0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035C14);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035C84);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035CCC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035CFC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035D38);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035D8C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035DB8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00035DB8(void *arg0) {
    func_000362A4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E738;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035DEC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00035DEC(void *arg0) {
    func_000362A4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0005E738;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035E20);
#endif

#if FW_VERSION == 100
void func_00035E20(s32 **arg0) {
    *arg0 = &D_0005E738;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00035E20(M2C_UNK **arg0) {
    *arg0 = &D_0005E738;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035E48);
#endif

#if FW_VERSION == 100
void func_00035E48(s32 **arg0) {
    *arg0 = &D_0005E738;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00035E48(M2C_UNK **arg0) {
    *arg0 = &D_0005E738;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035E70);
#endif

#if FW_VERSION == 100
void func_00035E70(s32 **arg0) {
    *arg0 = &D_0005E738;
    func_00036324((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035EA8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035EF0);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00035FC8);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003601C);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036048);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036074);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000360B0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000360EC);
#endif

#if FW_VERSION == 100
void func_000360EC(s32 **arg0) {
    *arg0 = &D_0005E768;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_000360EC(M2C_UNK **arg0) {
    *arg0 = &D_0005E768;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036114);
#endif

#if FW_VERSION == 100
void func_00036114(s32 **arg0) {
    *arg0 = &D_0005E768;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION == 152
void func_00036114(M2C_UNK **arg0) {
    *arg0 = &D_0005E768;
    func_00036324((s32) arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003613C);
#endif

#if FW_VERSION == 100
void func_0003613C(s32 **arg0) {
    *arg0 = &D_0005E768;
    func_00036324((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036174);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000361BC);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000362A4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_000362E4);

INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036324);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_0003634C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0003634C(s32 **arg0) {
    *arg0 = &D_0005E798;
    func_000359DC(arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00029198", func_00036374);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00036374(s32 **arg0) {
    *arg0 = &D_0005E798;
    func_000359DC(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150
/* vtable of Class_00062628 (data) */
__asm__(".globl _ZTV14Class_00062628\n_ZTV14Class_00062628 = D_00062628 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00087060 (data) */
__asm__(".globl _ZTV14Class_00087060\n_ZTV14Class_00087060 = D_00087060 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00085D40 (data) */
__asm__(".globl _ZTV14Class_00085D40\n_ZTV14Class_00085D40 = D_00085D40 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00085F70 (data) */
__asm__(".globl _ZTV14Class_00085F70\n_ZTV14Class_00085F70 = D_00085F70 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00086100 (data) */
__asm__(".globl _ZTV14Class_00086100\n_ZTV14Class_00086100 = D_00086100 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00086180 (data) */
__asm__(".globl _ZTV14Class_00086180\n_ZTV14Class_00086180 = D_00086180 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_000862D0 (data) */
__asm__(".globl _ZTV14Class_000862D0\n_ZTV14Class_000862D0 = D_000862D0 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00086480 (data) */
__asm__(".globl _ZTV14Class_00086480\n_ZTV14Class_00086480 = D_00086480 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_000875F0 (data) */
__asm__(".globl _ZTV14Class_000875F0\n_ZTV14Class_000875F0 = D_000875F0 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00061F10 (data) */
__asm__(".globl _ZTV14Class_00061F10\n_ZTV14Class_00061F10 = D_00061F10 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00088640 (data) */
__asm__(".globl _ZTV14Class_00088640\n_ZTV14Class_00088640 = D_00088640 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00088748 (data) */
__asm__(".globl _ZTV14Class_00088748\n_ZTV14Class_00088748 = D_00088748 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00088870 (data) */
__asm__(".globl _ZTV14Class_00088870\n_ZTV14Class_00088870 = D_00088870 - 8\n");
#endif

#if FW_VERSION == 201 || FW_VERSION == 250
/* vtable of Class_00088888 (data) */
__asm__(".globl _ZTV14Class_00088888\n_ZTV14Class_00088888 = D_00088888 - 8\n");
#endif

#if FW_VERSION == 250
/* vtable of Class_00090590 (data) */
__asm__(".globl _ZTV14Class_00090590\n_ZTV14Class_00090590 = D_00090590 - 8\n");
#endif
