/* lang: c++ */
#include "common.h"
#include "music_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002EE90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002EF08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002EF90);

void func_0002F11C(s32 arg0, M2C_UNK arg1) {
    func_0002EF90(func_0002E72C(), arg0, arg1);
}

s32 func_0002F15C(void *arg0, u32 arg1) {
    s32 temp_v0;
    s32 var_s2;

    temp_v0 = sceIoOpen(func_0002E72C(), 1, 0);
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        var_s2 = sceIoIoctl((u32) temp_v0, 0x02125803, NULL, 0U, arg0, arg1);
        sceIoClose(temp_v0);
    }
    return var_s2;
}

s32 func_0002F1E4(void) {
    void *sp0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 1;
    temp_v0 = sceIoOpen(func_0002E72C(), 1, 0);
    if (temp_v0 >= 0) {
        if (sceIoIoctl((u32) temp_v0, 0x02125008, NULL, 0U, &sp0, 4U) == 0) {
            var_s1 = sp0 == 0;
        }
        sceIoClose(temp_v0);
    }
    return var_s1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F268);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F318);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F4F0);

s32 func_0002F5E8(void) {
    return func_0002F60C() == 2;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F60C);

s32 func_0002F644(void) {
    if (D_000A505C != 0) {

    } else {
        func_0002F680();
    }
    return D_000A5064;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F680);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F6F8);

s32 func_0002F744(void) {
    D_000A505C = 0;
    D_000A5060 = 0;
    D_000A5064 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F764);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F7D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F854);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F8D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002F948);

void func_0002FA94(s32 arg0) {
    func_0002FACC(arg0, 1);
}

void func_0002FAB0(s32 arg0) {
    func_0002FACC(arg0, 0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002FACC);

void func_0002FB70(s32 arg0) {
    func_0002FBA8(arg0, 1);
}

void func_0002FB8C(s32 arg0) {
    func_0002FBA8(arg0, 0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002FBA8);

s32 func_0002FC3C(s32 arg0) {
    return arg0 < 8;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002FC44);

void func_0002FCD0(void) {
}

void func_0002FCD8(void) {
}

void func_0002FCE0(void) {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002FCE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C970);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C9D0);

const char *func_0002FDDC(void) {
    return "ms0:";
}

const char *func_0002FDE8(void) {
    return "/HIFI";
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002FDF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002FE44);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002FE94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002FEB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002FFCC);

void func_00030068(void) {
    sceIoDclose();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030084);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003015C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030204);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003024C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000302D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003031C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030438);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030640);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000306D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000307A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000307C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030830);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030A38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030A68);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030C10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030D4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030DC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030DF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030DFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030E24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030FD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031348);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000313E4);

void func_00031508(void) {
    func_000313E4();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031524);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031540);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003160C);
#else
void func_0003160C(void) {
    vshMSAudioEndTrack();
}
#endif

void func_00031628(void) {
    func_0003160C();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031644);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CA88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CA9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031660);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CAC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CAD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CAE0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CAE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CAF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CAF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CB00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031858);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000319E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031A94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031C38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031DDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031F0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031FB0);

void func_00032090(s32 arg0) {
    D_000A3690.unk4 = arg0;
    M2C_VFIELD(&D_000A3690, s32, 0) = 0x8010961B;
}

void func_000320AC(s32 arg0) {
    D_000A3690.unk0 = arg0;
}

s32 func_000320B8(void) {
    return D_000A3690.unk0;
}

void func_000320C4(s32 arg0, s32 arg1) {
    func_0002F268(arg0, 0x52, arg1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000320E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003237C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000324F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000325F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00032698);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000327A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000327CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000327E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003285C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CC10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CC58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CC70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CC74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000328D8);

s32 func_00032B0C(s32 arg0) {
    func_0005BAA0();
    func_0005BB90();
    func_00033878(0, (s32) &D_000A5074);
    func_0005BB90();
    func_0005CD7C();
    func_000319E0(arg0, 0);
    return 1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00032B68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CC88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CCA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CCAC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CCB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CCC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CCE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00032EF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003309C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CD24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CD30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033264);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000333CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003341C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033590);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000335E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000337A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033878);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000339C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033AC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033B34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033CD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033E64);

void func_00033F58(void) {
    if (M2C_FIELD(&D_000A51D4, s32 *, 0) != 1) {

    } else {
        M2C_FIELD(&D_000A51D4, M2C_UNK (**)(s32, s32), 0x14)(M2C_FIELD(&D_000A51D4, s32 *, 4), func_0002FACC(M2C_FIELD(&D_000A51D4, s32 *, 8), M2C_FIELD(&D_000A51D4, s32 *, 0xC)));
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033FAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034010);

void func_000340F0(struct Unk_func_000340F0_0 *arg0, struct Unk_func_000340F0_1 *arg1) {
    void *sp0;
    u8 temp_s0;
    u8 temp_v0;

    temp_s0 = arg1->unk34C;
    arg0->unk114 = (s32) ((arg1->unk18 << 0x18) | (arg1->unk19 << 0x10) | (arg1->unk1A << 8) | arg1->unk1B);
    func_000320E4((s32) arg1, &sp0, (s32) ((u8 *)arg0 + 0x134));
    arg0->unk12E = 0;
    arg0->unk12C = sp0;
    if (func_0002FC3C((s32) sp0) != 0) {
        arg0->unk12E = 1;
    }
    temp_v0 = arg0->unk12C;
    arg0->unk12D = 0;
    if (temp_v0 < 8U) {
        arg0->unk12D = (s8) (temp_s0 >> 7);
    }
    func_000327A4((s32) ((u8 *)arg0 + 0x122), (s32) ((u8 *)arg0 + 0x120), (s32) temp_v0);
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CD90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000341A4);

s32 func_000343A4(struct Unk_func_000343A4_0 *arg0) {
    func_0005C5C0(arg0->unk12C, arg0->unk12D, (u8 *)arg0 + 0x134);
    arg0->unk15C = (u16) (arg0->unk15C | 8);
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000343E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034434);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034580);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038958);
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000345E0);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034704);

s32 func_00034B8C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a4;

    var_a4 = 0x8010960E;
    if (M2C_FIELD(&D_000A51D4, s32 *, 0) == 0) {
        M2C_FIELD(&D_000A51D4, s32 *, 0) = 1;
        var_a4 = 0;
        M2C_FIELD(&D_000A51D4, s32 *, 0x18) = arg2;
        M2C_FIELD(&D_000A51D4, s32 *, 4) = 0x8010961C;
        M2C_FIELD(&D_000A51D4, s32 *, 0x10) = arg0;
        M2C_FIELD(&D_000A51D4, s32 *, 0x14) = arg1;
        M2C_FIELD(&D_000A51D4, s32 *, 8) = 0;
    }
    return var_a4;
}

void func_00034BD4(void) {
    M2C_VFIELD(&D_000A51D4, s32, 0) = 0;
    M2C_VFIELD(&D_000A51D4, s32, 0x18) = 0;
    M2C_VFIELD(&D_000A51D4, s32, 4) = 0;
    M2C_VFIELD(&D_000A51D4, s32, 8) = 0;
    M2C_VFIELD(&D_000A51D4, s32, 0x10) = 0;
    M2C_VFIELD(&D_000A51D4, s32, 0x14) = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034BF8);

s32 func_00034C20(void) {
    return D_000A5190;
}

u8 func_00034C2C(void) {
    return D_000A51A0;
}

u8 func_00034C38(void) {
    return D_000A5078;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034C44);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034CEC);

s32 func_00034E30(void) {
    return 0;
}

s32 func_00034E38(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034E40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034ED4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034F58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034FD8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035044);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000350D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035144);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000351D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035248);

s32 func_00035284(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v0 = func_00034ED4(var_s0);
        var_s0 += 1;
        var_s1 = (temp_v0 != 0) ? ((var_s1 != 0) ? var_s1 : temp_v0) : var_s1;
    } while (var_s0 < 4);
    return var_s1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000352D4);

s32 func_00035310(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v0 = func_00034FD8(var_s0);
        var_s0 += 1;
        var_s1 = (temp_v0 != 0) ? ((var_s1 != 0) ? var_s1 : temp_v0) : var_s1;
    } while (var_s0 < 3);
    return var_s1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035360);

s32 func_0003539C(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v0 = func_000350D0(var_s0);
        var_s0 += 1;
        var_s1 = (temp_v0 != 0) ? ((var_s1 != 0) ? var_s1 : temp_v0) : var_s1;
    } while (var_s0 < 5);
    return var_s1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000353EC);

s32 func_00035428(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v0 = func_000351D4(var_s0);
        var_s0 += 1;
        var_s1 = (temp_v0 != 0) ? ((var_s1 != 0) ? var_s1 : temp_v0) : var_s1;
    } while (var_s0 < 0x10);
    return var_s1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035478);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000354E8);

s32 func_00035534(void) {
    return 0;
}

s32 func_0003553C(void) {
    return 0;
}

s32 func_00035544(void) {
    return 0;
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CE54);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CE84);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CE90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CE9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CEA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CEB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CEC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CED4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CEE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CEF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF04);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF14);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF28);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF38);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CFA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CFB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CFC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CFD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CFEC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CFFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D010);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D024);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D038);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003554C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035610);

void func_00035690(void) {
}

void func_00035698(void) {
}

void func_000356A0(void) {
}

void func_000356A8(void) {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000356B0);

s32 func_000357C4(void) {
    func_000356B0(0);
    return 0;
}

#if FW_VERSION >= 301 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039B84);
#endif

#if FW_VERSION == 300
void func_00039B84(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B4C30;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039BA0);
#endif

#if FW_VERSION == 300
void func_00039BA0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B4C30;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
Class_000B4C30::~Class_000B4C30() {
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035288);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035310_v271);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00023718);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00023748_v260);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000357E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003586C);
#endif

#if FW_VERSION == 260
Class_0009D0E0::~Class_0009D0E0() {
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000358F4);
#endif

#if FW_VERSION == 282
void func_000358F4(M2C_UNK **arg0) {
    *arg0 = &D_0009D0E0;
    func_00035F10();
    func_00006DC8((s32) arg0);
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039C04);
#endif

#if FW_VERSION == 300
void func_00039C04(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039C0C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039C18);
#endif

#if FW_VERSION == 300
void func_00039C18(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039C20);

s32 func_00039C4C(void) {
    return D_000BD4AC;
}

s32 func_00039C58(void) {
    return D_000BD4AC;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039C64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039CE8);

void func_0003592C(s32 **arg0) {
    *arg0 = &D_000B4C60;
    _ZN3paf8PhWidgetD2Ev();
}
#endif

#if FW_VERSION == 282
void func_0003592C(M2C_UNK **arg0) {
    *arg0 = &D_0009D0E0;
    func_00035F10();
    func_00006DC8((s32) arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_00035964(s32 **arg0) {
    *arg0 = &D_000B4C60;
    _ZN3paf8PhWidgetD2Ev();
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035964);
#endif

#if FW_VERSION == 282
void func_00035964(M2C_UNK **arg0) {
    *arg0 = &D_0009D0E0;
    func_00035F10();
    func_00006DC8((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_00039DF4(void *arg0, s32 arg1) {
    func_0006A6C8(M2C_FIELD(arg0, s32 *, 0x330), arg1);
}

void func_00039E10(void *arg0) {
    func_0006AFCC(M2C_FIELD(arg0, s32 *, 0x330));
}

void func_00039E2C(void *arg0) {
    void *temp_v0;

    temp_v0 = func_0006AFCC(M2C_FIELD(arg0, s32 *, 0x330));
    M2C_FIELD(temp_v0, M2C_UNK **, 0) = &D_000BF4F8;
    M2C_FIELD(temp_v0, s32 *, 4) = 0x1000;
    M2C_FIELD(temp_v0, s32 *, 8) = 0xAC44;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039E64);

s32 func_00039EC0(void) {
    return 5;
}

void func_00039EC8(void *arg0) {
    func_0006B298(M2C_FIELD(arg0, s32 *, 0x330));
}

void func_00039EE4(void *arg0) {
    func_0006B2FC(M2C_FIELD(arg0, s32 *, 0x330));
}

s32 func_00039F00(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00023800);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002387C);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D0A0);

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4C20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4C30);

__asm__(".globl _ZTV14Class_000B4C30\n_ZTV14Class_000B4C30 = D_000B4C30 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4C48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4C60);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039F08);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 330
s32 func_00039F5C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4D34);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4D40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4D4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4D58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4D60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4D6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4D78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4D84);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4D90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4D9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4DA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4DB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4DC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4DCC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4DD4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4DE0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4DF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E34);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E44);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E54);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E84);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4E9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4EA4);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B48F8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4EAC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4EB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4EC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4ED0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4ED8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4EE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4EF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F04);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F10);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F18);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F2C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F34);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F54);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4F78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4FA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4FD0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4FFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5020);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5030);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5040);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5058);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5070);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5084);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5098);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B511C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5140);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5160);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5184);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5224);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B524C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5274);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5284);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5298);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B52B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B52C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B52E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B52EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B52F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B52FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5308);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5318);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5340);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5358);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5384);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53E4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B540C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5428);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5440);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5464);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B547C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5494);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B54A0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B54B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B54C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B54C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B54E8);
#endif

#if FW_VERSION == 300
s32 func_00039F5C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039F68);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003AE74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003BF10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C0A0);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C954);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C238);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C290);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C2AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C82C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C848);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C92C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C948);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CA40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CA5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CB8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CE70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CEC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D110);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_0003D280(s32 arg0, s32 arg1) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, M2C_FIELD(((M2C_FIELD((arg1 + arg0), u8 *, 0x34) * 4) + arg0), s32 *, 0xA8));
    func_00003414(&sp0);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D280);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D2BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D568);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D88C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003DA14);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003DFB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E168);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E260);
#endif

#if FW_VERSION >= 340
s32 func_0003E524(void) {
    return 0x106;
}

void func_0003E52C(s32 arg0) {
    func_00013F9C(D_000A424C, arg0, 1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041CE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E610);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041E5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E7A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E874);

s32 func_0003E950(s32 arg0) {
    s32 var_v1;

    if (((((u32) (arg0 + 0x7FEF5FF7) < 3U) | (arg0 == 0x8010A801)) != 0) || (var_v1 = 0, (arg0 == 0x8010A803)) || ((u32) (arg0 + 0x7FEF5B9C) < 0x19BU)) {
        var_v1 = 1;
    }
    return var_v1;
}

void func_0003E9AC(s32 arg0, s32 arg1) {
    D_000BD658 = -1;
    func_0003E9EC(arg0, arg1);
}

void func_0003E9D0(s32 arg0, s32 arg1) {
    func_0003E9EC(arg0, arg1);
}
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B4FDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B55E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5008);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5014);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5880);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5020_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5020_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B502C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5034);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B58A0);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5040_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5040_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B504C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B58B8);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5058_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5058_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5064);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B58D0);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5070_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5070_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B507C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5088);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5094);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50D4);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5940);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50E0_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50E0_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50EC);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5958);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50F8_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B50F8_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5108);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5118);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5128);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5134);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B59A0);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5140_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5140_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B514C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5158);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5164);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5170);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5178);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5180);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5188);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5194);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51C0);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A30_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A30_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A30_v350);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51D0_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51D0_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B51F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5200);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5208);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5214);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B521C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5228);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5230);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5238);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5244);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5250);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B527C);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 340
s32 func_0003E524(void) {
    return 0x106;
}

void func_0003E52C(s32 arg0) {
    func_00013F9C(D_000A424C, arg0, 1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E554);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E610);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E6CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E7A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E874);

s32 func_0003E950(s32 arg0) {
    s32 var_v1;

    if (((((u32) (arg0 + 0x7FEF5FF7) < 3U) | (arg0 == 0x8010A801)) != 0) || (var_v1 = 0, (arg0 == 0x8010A803)) || ((u32) (arg0 + 0x7FEF5B9C) < 0x19BU)) {
        var_v1 = 1;
    }
    return var_v1;
}

void func_0003E9AC(s32 arg0, s32 arg1) {
    D_000BD658 = -1;
    func_0003E9EC(arg0, arg1);
}

void func_0003E9D0(s32 arg0, s32 arg1) {
    func_0003E9EC(arg0, arg1);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E9EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042560);

void func_0003EDEC(void) {
    D_000BC5F8 = -1;
    vsh_D8D84529();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000425D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000425D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042710);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004275C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042844);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5364);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B537C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5394);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B53F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042AAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043150);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000434C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000435EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043688);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043DB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043DB8);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B540C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5BC0);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043DB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043DB8);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043DD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043FB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000441FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044264);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000442D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000444A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035BF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000445B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044614);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044840);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044880);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044950);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000449A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041398);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000413D4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045078);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044D90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044E3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044E8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044EC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044F70);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004532C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044FC0);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045114);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045188);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000451D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000452A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004536C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B546C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5CD4);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5474);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B54C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B54E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5500);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5520);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5540);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5550);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5560);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5DD8);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5578_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5578_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5590);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B55A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B55B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B55D0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5E48);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B55E8_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B55E8_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5604);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5620);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B563C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5EBC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5EC8);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B565C_v340);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5668_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B565C_v330);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5668_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5688);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5EEC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5F0C);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B568C_v340);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56AC_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B568C_v330);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56AC_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56E0);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045114);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045188);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000451D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000452A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004536C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045374);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000365A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046174);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000462D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037018);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046520);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003719C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000373B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037528);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037564);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037864);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000378E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037C14);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037D64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037E5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038014);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000382C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000477C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000477D0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B55D8);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5780);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B55E8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5600);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B560C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5618);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5624);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B562C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5638);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5644);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5650);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B565C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5668);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5674);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5680);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B568C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5698);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B56F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5700);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5710);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5720);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B572C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5738);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5744);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5750);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B575C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5768);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5770);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5910);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5778);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5784);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5790);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B579C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B57A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B57B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B57C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B57D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B57DC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B57E4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B57EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B57F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5800);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B580C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5814);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5820);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5828);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5830);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B583C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5848);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5874);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B59FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A30);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A34);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A58);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B62C0);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A60);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B62E0);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A68);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5A9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5AA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5ABC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5AD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000477F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003874C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048058);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000480C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048130);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048180);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038D0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048304);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038F9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003906C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039188);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000488A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003980C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039BAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039E1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A0B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A444);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A72C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003AB34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003AE84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B00C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A9FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B71C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003BE48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C2A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C3F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C4F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C000);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C0D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C768);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C804);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C8C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CBFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CB58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D078);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CE98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D210);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D3B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DE80);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D018_v340);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D8AC_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D018_v330);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D8AC_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E858);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E918);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E990);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F0BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F14C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F9C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000504E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050ADC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050C28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050DCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050E7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050F8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051148);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051174);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051274);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051300);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000513CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051458);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051690);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051768);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005187C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000519B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5C20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051B28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051B44);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051B8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051C2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051C4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041464);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041474);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000414B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051D38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051DA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051E08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051E64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051EF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051F50);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000527CC);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051FE0_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051FE0_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000520A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000520FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052158);
#endif

#if FW_VERSION == 300
s32 func_0003E524(void) {
    return 0x106;
}

void func_0003E52C(s32 arg0) {
    func_00013F9C(D_000A424C, arg0, 1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E554);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E610);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E6CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E7A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E874);

s32 func_0003E950(s32 arg0) {
    s32 var_v1;

    if (((((u32) (arg0 + 0x7FEF5FF7) < 3U) | (arg0 == 0x8010A801)) != 0) || (var_v1 = 0, (arg0 == 0x8010A803)) || ((u32) (arg0 + 0x7FEF5B9C) < 0x19BU)) {
        var_v1 = 1;
    }
    return var_v1;
}

void func_0003E9AC(s32 arg0, s32 arg1) {
    D_000BD658 = -1;
    func_0003E9EC(arg0, arg1);
}

void func_0003E9D0(s32 arg0, s32 arg1) {
    func_0003E9EC(arg0, arg1);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E9EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003EDB4);

void func_0003EDEC(void) {
    D_000BD654 = -1;
    vsh_D8D84529();
}

void func_0003EE10(void) {

}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003EE10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052224);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052260);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005229C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000522F4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003F67C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003EE18);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003EF98);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003F800);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003EFE4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003F0B0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B04);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B1C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B34);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5C80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5C84);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5C8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5CA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5CA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5CC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5CE0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5CF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5D14);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5D34);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5D48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5D64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5D7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5DA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5DB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5DD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005234C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041BA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052594);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052660);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005272C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041F38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042618);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042740);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053CB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053E4C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5E10);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000534CC);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053660_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053660_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053668);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5E28);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5E40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5E5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5E78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5E98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5EA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5EB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5EC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5EDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5EF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000536C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042F84);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053EEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053F28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053F6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054760);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005491C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054350);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000543B4);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5F18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5F28);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5F40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5F44);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053EEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053F28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053F6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053F74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043424);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054350);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000543B4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054420);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054678);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054BA0);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5F68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5F78);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054678);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054BA0);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054FB0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6858);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056268);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5FD8_v340);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055A7C);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055EB8);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5FD8_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5FFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6014);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B68A8);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6028_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6028_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6040);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B68C8);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6048_v340);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6048_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B60D0);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055A7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055EB8);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055EC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6100);

__asm__(".globl _ZTV14Class_000B6100\n_ZTV14Class_000B6100 = D_000B6100 - 8\n");
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6988_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6988_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6988_v350);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6108);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055F18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055F30);

Class_000B6100::~Class_000B6100() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055F90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056004);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_0009E098D2Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_0009E098D1Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_0009E098D0Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056100);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B612C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056400);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6174);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B618C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B619C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B61B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B61CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B61D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B61E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000566FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6230);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000568B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056F58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056FA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057000);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005700C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057088);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057188);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057A6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057AF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057C24);

Class_000B63D8::~Class_000B63D8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057CF4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B54);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B90);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5B94);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003F318);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003F58C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003F9BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003FD34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003FE58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003FEF4);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 330
s32 func_00040618(void) {
    return 0x105;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040620);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5BAC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5BC0);
#endif

#if FW_VERSION == 300
s32 func_00040618(void) {
    return 0x105;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040620);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004063C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040860);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040AEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040B54);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000359A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035B74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035BF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035C80);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035CE4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A500);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A510);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A530);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A550);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A570);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A580);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A590);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A5A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A5C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A5D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A5E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A600);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A618);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A634);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A650);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A66C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A68C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A698);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A6B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A6BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A6DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A6F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A710);
#endif

#if FW_VERSION < 330
s32 func_00035F10(void) {
    s32 var_v0;

    var_v0 = D_000A51F0;
    if (var_v0 != 0) {
        var_v0 = Job_Cancel2(0, var_v0);
        D_000A51F0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041170);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041240);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041290);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041398);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000413D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041674);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041720);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041770);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000417A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041854);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000418A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000419F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041A6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041AB8);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041B84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035F50);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5C10);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6918);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5C18);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041B84);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000092D0);
#endif

#if FW_VERSION < 301
s32 func_00035F50(void) {
    return 0x400;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000359FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036048);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000367F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036954);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036ABC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036BA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036C40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036E5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036FCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037008);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037308);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037384);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000376B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037808);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037900);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037AB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037D6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037DC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037DCC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00023E78);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00023FEC);

Class_0009D760::~Class_0009D760() {
}
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D0E0);
#endif

#if FW_VERSION == 260
__asm__(".globl _ZTV14Class_0009D0E0\n_ZTV14Class_0009D0E0 = D_0009D0E0 - 8\n");
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D0F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D110);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D130);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D150);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D160);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D170);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D188);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D1A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D1B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D1C8);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057DDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057FDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000581C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058ACC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058E6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058EA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005908C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059A90);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A72C);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059F40_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059F40_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059F5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059F78);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059FB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059FE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A270);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A280);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A2C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A2DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A2F8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AB00);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A314_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A314_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A330);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A374);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A3A4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005ABC8);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A3DC_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A3DC_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A450);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A5AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A5E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A664);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A6BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A6E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A778);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A904);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A95C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A988);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A9E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AA0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AB7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005ACEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AD44);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AE04);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AE5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AF18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B050);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B10C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B1C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B300);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B438);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B48C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B4E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B534);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B588);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B5DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B630);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B668);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B6F8);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BF74_v352);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BF74_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BF74_v350);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B788_v340);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B788_v330);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B7B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B7D8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D1E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D1F8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D214);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D230);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D24C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B63D8);

__asm__(".globl _ZTV14Class_000B63D8\n_ZTV14Class_000B63D8 = D_000B63D8 - 8\n");
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D26C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B810);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C16C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C1B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B64D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C214);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C220);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C22C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C294);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C2FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C3EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C4DC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D278);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6530);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C5D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005CF6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D100);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D1FC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D298);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D348);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B65E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D3E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D448);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D4AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D510);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D70C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D888);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D894);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_0009E218C2Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_0009E218C1Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_0009E218D2Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_0009E218D1Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_0009E218D0Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D958);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D974);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D9BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DA04);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DA3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DA74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DA9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DAC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DAFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A1C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D29C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D2BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D2D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D2F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035F58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000365A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036D50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036EB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037018);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000370FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003719C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000373B8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037528);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_00037528(s32 arg0, s32 arg1) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, M2C_FIELD(((M2C_FIELD((arg1 + arg0), u8 *, 0x20) * 4) + arg0), s32 *, 0x94));
    func_00003414(&sp0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037564);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037864);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000378E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037C14);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037D64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037E5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038014);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6C10);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5F10);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000382C8);

s32 func_00038320(void) {
    return 0x101;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038328);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00038328(s32 arg0) {
    func_00013F9C(D_000A424C, arg0, 1);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A1E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A200);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DC1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DC68);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DC78);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A3D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A3E0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D390);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D3A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D3AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D3B8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D3C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D3D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D3E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D3F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D3FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D408);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D414);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D424);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D434);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D444);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D44C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D458);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D464);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D470);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D47C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D488);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D494);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D4A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D4AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D4B8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5FD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5FE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B5FF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6004);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6010);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B601C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6028);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6038);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6048);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D4C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D4CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D4D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D4E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D4F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D4FC);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B60A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B60A8);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B67D8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B60B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B60BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B60C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B60D4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D508);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D514);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D524);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D534);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D53C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D544);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D550);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D558);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D560);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D56C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D574);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D580);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D588);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D594);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D59C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D5A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D5B0);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D5B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D5C4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A7E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A7F0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000241E8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D5D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D5E8);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D600);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D60C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D610);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D628);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D634);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D63C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6F08);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6208);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037DF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000381F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038BA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038C08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038714);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038764);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091484);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00024494);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D644);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038350);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003874C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038BA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038C08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038C70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038CC0);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038D0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038E3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038F9C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00024860);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038BA8_v271);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003906C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039188);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039384);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003980C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039BAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039E1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A0B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A444);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A72C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A4A8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000260C4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003AB34);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003AE84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B00C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B2F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B71C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00027314);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000273D8);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003BE48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C2A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C3F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C4F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C558);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C628);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C768);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C804);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C8C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CBFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D078);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D160);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D210);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D2E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003DB64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E79C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E85C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003E8D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003F000);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003F090);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003F624);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000400D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004060C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040758);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000408FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040A0C);

void func_00040BC8(s32 *arg0) {
    func_00013F9C(D_000A424C, *arg0, 1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040BF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040CF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040D80);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040E4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00040EB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000410E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041190);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041278);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041384);

void func_00041424(void) {
    func_00041384(1, 0xFFFF);
}

void func_00041444(void) {
    func_00041384(0, 0xFFFF);
}

void func_00041464(struct Unk_func_00041464_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041474);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000414B4);

void ***func_00041530(void ***arg0, struct Unk_func_00041530_1 *arg1, void **arg2) {
    void **temp_s0;
    struct Unk_func_00041530_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    *temp_s0 = temp_v1->unk0;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

void ***func_00041598(void ***arg0, struct Unk_func_00041598_1 *arg1, void **arg2) {
    void **temp_s0;
    struct Unk_func_00041598_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    *temp_s0 = temp_v1->unk0;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041600);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004165C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000416EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041748);

void func_000417D8(struct Unk_func_000417D8_0 *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    struct Unk_func_000417D8_var_v0 *var_v0;

    var_v1 = arg0->unk0;
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_v1 = arg0->unk0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    arg0->unk4 = 0;
    temp_v0 = arg0->unk0;
    *temp_v0 = temp_v0;
}

void func_00041834(struct Unk_func_00041834_0 *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    struct Unk_func_00041834_var_v0 *var_v0;

    var_v1 = arg0->unk0;
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_v1 = arg0->unk0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    arg0->unk4 = 0;
    temp_v0 = arg0->unk0;
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041890);

s32 func_00041954(void) {
    return 0x100;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004195C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041998);

void func_000419D4(void **arg0) {
    void *temp_s0;
    struct Unk_func_000419D4_var_a0 *var_a0;
    struct Unk_func_000419D4_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}

void func_00041A2C(void **arg0) {
    void *temp_s0;
    struct Unk_func_00041A2C_var_a0 *var_a0;
    struct Unk_func_00041A2C_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002D028);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002D060);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002D098);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041D98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041E64);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D760);
#endif

#if FW_VERSION == 260
__asm__(".globl _ZTV14Class_0009D760\n_ZTV14Class_0009D760 = D_0009D760 - 8\n");
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A950);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A964);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A978);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091578);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 330)
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D770);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002D120);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002D7F0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D784);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 330)
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D798);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D7B8);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D7BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D7C4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009A9BC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D7DC);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D7E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D7FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D818);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D830);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002D878);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002D970);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002DE18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002DF04);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D04);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D84C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D86C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D880);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D89C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D8B4);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D8D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D8EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D90C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AA7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AA94);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AAB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AACC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AAEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000413B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000414D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000415F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041D98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041E64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041840);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041F20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042040);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000424A0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041A84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041BA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041CCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041D98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041E64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041F38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042618);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042740);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042BA0);
#endif

#if FW_VERSION == 271 || (FW_VERSION >= 310 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D04);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6518);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042BA0);

s32 func_00042D04(void) {
    return 0x104;
}
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D0C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002DFAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002DFDC);

Class_0009D9E8::~Class_0009D9E8() {
}
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D960);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6548);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6564);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6580);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B65A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B65A8);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AB50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AB64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AB7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AB94);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D970);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D984);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D99C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D9B4);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D64);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042834);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000431E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004321C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002E2A8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042F84);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B7320);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6620);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_000431E0(M2C_UNK **arg0) {
    *arg0 = &D_0009D9E8;
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    _ZN19Class_00097DC8_v271D2Ev((s32) arg0);
}
#endif

#if FW_VERSION == 282
void func_000431E0(M2C_UNK **arg0) {
    *arg0 = &D_0009D9E8;
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    func_00006DC8((s32) arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_0004321C(M2C_UNK **arg0) {
    *arg0 = &D_0009D9E8;
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    _ZN19Class_00097DC8_v271D2Ev((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 282
void func_0004321C(M2C_UNK **arg0) {
    *arg0 = &D_0009D9E8;
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    func_00006DC8((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 330
s32 func_00043260(void) {
    return 0x202;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002E2F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002E320);

Class_0009DB80::~Class_0009DB80() {
}
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043268);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042CD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043644);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000436A8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0002E588);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043424);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_00043644(struct Unk_func_00043644_0 *arg0) {
    arg0->unk0 = &D_0009DB80;
    func_000079AC();
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(_ZNK3paf8PhWidget8GetChildEi(arg0->unk8, 1), 0x2000C, 0, 0);
    _ZN19Class_00097DC8_v271D2Ev((s32) arg0);
}
#endif

#if FW_VERSION == 282
void func_00043644(struct Unk_func_00043644_0 *arg0) {
    arg0->unk0 = &D_0009DB80;
    func_000079AC();
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(_ZNK3paf8PhWidget8GetChildEi(arg0->unk8, 1), 0x2000C, 0, 0);
    func_00006DC8((s32) arg0);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_000436A8(struct Unk_func_000436A8_0 *arg0) {
    arg0->unk0 = &D_0009DB80;
    func_000079AC();
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(_ZNK3paf8PhWidget8GetChildEi(arg0->unk8, 1), 0x2000C, 0, 0);
    _ZN19Class_00097DC8_v271D2Ev((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 282
void func_000436A8(struct Unk_func_000436A8_0 *arg0) {
    arg0->unk0 = &D_0009DB80;
    func_000079AC();
    _ZN3vsh25ShowButtonNavigation_BackEb(0);
    _ZN3paf9PhHandler11SetCallBackEiPFvPNS_8PhWidgetEPNS_7PhEventEPvES5_(_ZNK3paf8PhWidget8GetChildEi(arg0->unk8, 1), 0x2000C, 0, 0);
    func_00006DC8((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D9E8);
#endif

#if FW_VERSION == 260
__asm__(".globl _ZTV14Class_0009D9E8\n_ZTV14Class_0009D9E8 = D_0009D9E8 - 8\n");
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D9F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D9FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043714);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004396C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00043E94);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DA20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DA30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000441E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044C4C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045088);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_00045088(void) {
    return 0x103;
}
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DA90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DAB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DACC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DAE0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DAF8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B7450);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6750);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009ACE0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000918E8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DB00);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DB80);
#endif

#if FW_VERSION == 260
__asm__(".globl _ZTV14Class_0009DB80\n_ZTV14Class_0009DB80 = D_0009DB80 - 8\n");
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045090);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000449B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044A30);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091968);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091980);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091994);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009199C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000919A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000919AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000919B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000919C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000919D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000919E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000919E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000919F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091A14);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000450E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045168);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044B20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044B60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009ADC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091A50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093600);

__asm__(".globl _ZTV14Class_00093600\n_ZTV14Class_00093600 = D_00093600 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044BFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044D4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044DB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044E20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044E84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044EE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044F4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00044FBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045060);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045068);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045070);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045078);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045110);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000451A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045954);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003003C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030064);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000451E8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045318);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045388);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000453F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004547C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_000451E8(M2C_UNK **arg0) {
    *arg0 = &D_0009DE10;
    func_000456F4((s32) arg0);
    _ZN14Class_00094D20D2Ev((s32) arg0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000300C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091A50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091A60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091A74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091A88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091A9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091AB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091ACC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091AE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091AF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091B0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091B20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091B3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091B58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091B74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091B90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091BAC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091BC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091BE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091C00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091C1C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091C20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091C24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091C28);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00099040);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00099044);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091C34);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091C38);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091C40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030308);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030374);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000303AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000306E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000307A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000308AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030A30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030AD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030B54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030BB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030C34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00030C3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00091F8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00031578);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00032360);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000323B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00032948);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000923A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000923AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00032C64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00032D58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00032FE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033018);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003309C_v260);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000330E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000331B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003322C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000333D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000333E8);

Class_00092948::~Class_00092948() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033448);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033454);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003349C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00006EBC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009248C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092494);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000924B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000924D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000924F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092518);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092538);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009255C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092584);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000925B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000925D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000925F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092618);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009262C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092644);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092664);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092680);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009269C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000926BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000926D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000926F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092710);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092734);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092750);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092768);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092780);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092798);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000927B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000927D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000927F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092808);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092824);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092844);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033C28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000076F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033E34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033FA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00033FF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034058);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034130);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00034170);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000341C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092948);

__asm__(".globl _ZTV14Class_00092948\n_ZTV14Class_00092948 = D_00092948 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092958);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092970);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092988);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000929A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035058);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035078);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035098);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000350B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035180);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000351AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000353BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035498);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000355D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035624);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035678);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035680);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000356AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000356B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003570C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035760);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035788);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045220);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00045220(M2C_UNK **arg0) {
    *arg0 = &D_0009DE10;
    func_000456F4((s32) arg0);
    _ZN14Class_00094D20D2Ev((s32) arg0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000357E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000929DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035D70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00035E10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092A20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092A38);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092A50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092A70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092A88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092A8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092BD0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092BEC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092C08);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092C24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092C40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092C54);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092C68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092C84);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092C9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092CBC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092CD4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092CF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092D04);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092D20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092D38);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092D4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092D68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092D7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092D90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092DA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092DC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092DDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092DE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E04);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E44);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092E84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000360CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003635C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000363DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036490);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000364FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000367BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036904);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036AA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036B64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036C80);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036CBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036D70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036DAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00036F5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000371D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037388);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00037674);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000376F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003825C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092EE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092EF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092F20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092F48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092F68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092F88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092FAC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092FD0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00092FF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093010);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093030);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093050);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093070);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093090);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000930B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000930D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000930F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093110);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009312C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093148);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093164);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093184);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000931A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000931BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000931D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000931EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093208);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093224);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093240);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093258);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093274);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009328C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009329C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000932AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000932BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038750);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000387B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038D3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038DE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038E64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038E84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038EA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038F00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038F80);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00038FDC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039038);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039040);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003907C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000390D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003911C);

Class_000935E8::~Class_000935E8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000391EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000392C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039324);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000932EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000932F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039394);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039610);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039670);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000397B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039838);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039B00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039BB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093488);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000934A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000934C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000934EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093514);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093538);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093550);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093574);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093598);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000935B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000935BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000935C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039CF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039D54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039E74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00039F94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A098);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A19C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A1F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A250);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A314);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A338);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A39C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A520);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A704);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000935E8);

__asm__(".globl _ZTV14Class_000935E8\n_ZTV14Class_000935E8 = D_000935E8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093600);

__asm__(".globl _ZTV14Class_00093600\n_ZTV14Class_00093600 = D_00093600 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093640);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A780);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A788);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045D28);

Class_00093600::~Class_00093600() {
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000456D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045728);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A8C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A954);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003A9E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003AA28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045258);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045808);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051588);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000460C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046160);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045AC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045C44);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00045258(M2C_UNK **arg0) {
    *arg0 = &D_0009DE10;
    func_000456F4((s32) arg0);
    _ZN14Class_00094D20D2Ev((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003AAB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B740);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B770);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045CE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045D08);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B798);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000936C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000936D8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000936E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093748);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093750);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045D40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AE64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046004);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046364);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AEC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009AED8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000469B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000469FC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B834);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00018258);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B950);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003B9B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003BA18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003BA7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003BAE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003BB54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003BCC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003BD74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003BE68);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C21C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C3D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C5DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003C9F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CA10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CA2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CABC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CAF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CB50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CBD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CC28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CC54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CD20);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CD48);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046A64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00047324);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CD50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003CEE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D070);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D114);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D1B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D264);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D408);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D438);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D624);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D728);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D814);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D81C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D8AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D93C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D964);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D98C);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DB98);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 330)
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DBA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DBB0);
#endif

#if FW_VERSION == 260 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DBBC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DBC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DBD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DBE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DBF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC1C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC2C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC3C);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 330)
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC44);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DC98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DCA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DCB0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6894);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B68A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B68B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B68C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B68CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B68D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B68E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B68F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6904);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DCB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DCC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DCD0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DCDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DCE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DCF4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B695C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6964);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B696C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6978);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6984);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6990);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD1C);
#endif

#if FW_VERSION == 260 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD2C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD34);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD94);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DDA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045298);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045334);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045484);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000454F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045558);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000455BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045620);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045684);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000456F4);

s32 func_00045798(void) {
    return 0;
}

s32 func_000457A0(void) {
    return 0;
}

s32 func_000457A8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000457B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045848);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000458E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045954);

Class_00093600::~Class_00093600() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045A50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045AC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045B30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045BB4);

void func_00045C38(M2C_UNK **arg0) {
    *arg0 = &D_0009DE48;
    func_00045EB8((s32) arg0);
}

void func_00045C60(M2C_UNK **arg0) {
    *arg0 = &D_0009DE48;
    func_00045EB8((s32) arg0);
}

void func_00045C88(M2C_UNK **arg0) {
    *arg0 = &D_0009DE48;
    func_00045EB8((s32) arg0);
    _ZdlPv(arg0);
}

s32 func_00045CC0(struct Unk_func_00045CC0_0 *arg0) {
    return arg0->unk1C;
}

s32 func_00045CC8(struct Unk_func_00045CC8_0 *arg0) {
    return arg0->unk20;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045CD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045D28);

void func_00045D80(M2C_UNK **arg0) {
    *arg0 = &D_0009DE60;
    _ZN14Class_000A04F0D2Ev();
}

void func_00045DA8(M2C_UNK **arg0) {
    *arg0 = &D_0009DE60;
    _ZN14Class_000A04F0D2Ev();
}

void func_00045DD0(M2C_UNK **arg0) {
    *arg0 = &D_0009DE60;
    _ZN14Class_000A04F0D2Ev();
    _ZdlPv(arg0);
}

void func_00045E08(struct Unk_func_00045E08_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00045F40(arg0, arg1, arg2, arg3);
    arg0->unk1C = arg4;
    arg0->unk20 = arg5;
    arg0->unk0 = &D_0009DE70;
    arg0->unk4 = 6;
}

void func_00045E60(struct Unk_func_00045E60_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00045F40(arg0, arg1, arg2, arg3);
    arg0->unk1C = arg4;
    arg0->unk20 = arg5;
    arg0->unk0 = &D_0009DE70;
    arg0->unk4 = 6;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045EB8);

void func_00045EE0(M2C_UNK **arg0) {
    *arg0 = &D_0009DE70;
    func_000461F8((s32) arg0);
}

void func_00045F08(M2C_UNK **arg0) {
    *arg0 = &D_0009DE70;
    func_000461F8((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045F40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046004);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000460C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046160);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000461F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004637C);

void func_000463F0(M2C_UNK **arg0) {
    *arg0 = &D_0009DFA8;
    func_0001A50C((s32) arg0);
}

void func_00046418(M2C_UNK **arg0) {
    *arg0 = &D_0009DFA8;
    func_0001A50C((s32) arg0);
}

void func_00046440(M2C_UNK **arg0) {
    *arg0 = &D_0009DFA8;
    func_0001A50C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE10);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE38);

__asm__(".globl _ZTV14Class_00093600\n_ZTV14Class_00093600 = D_0009DE38 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE88);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE90);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003D9C4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046478);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DEB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004673C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DEFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DF14);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DF2C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DF44);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DF48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DF5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046A38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046BDC);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00047224);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00047270);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_000472CC(void) {
    return 0x8000FFFF;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000472D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00047B98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00047C1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00047D98);

void func_00047E28(M2C_UNK **arg0) {
    *arg0 = &D_0009E098;
    func_0001A50C((s32) arg0);
}

void func_00047E50(M2C_UNK **arg0) {
    *arg0 = &D_0009E098;
    func_0001A50C((s32) arg0);
}

void func_00047E78(M2C_UNK **arg0) {
    *arg0 = &D_0009E098;
    func_0001A50C((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DFA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E000);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00047EB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000487CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048818);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048874);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_00048874(void) {
    return 0x80108F0F;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048880);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_00048880(void) {
    return 0x80108F0F;
}
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004888C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000488F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004895C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048A4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048B3C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E098);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E0F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E100);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048C34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000495B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049740);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004983C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E160);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049988);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E1B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E218);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B1C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E470);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B208);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093B10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E470);

__asm__(".globl _ZTV14Class_0009E470\n_ZTV14Class_0009E470 = D_0009E470 - 8\n");
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049A24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049A88);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049AEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049B50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049D4C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049EC8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_00049EC8(void) {
    return 0x80108F0F;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049ED4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_00049ED4(void) {
    return 0x80108F0F;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_0009E218C2Ev);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049EE0);
#endif

#if FW_VERSION == 260
void _ZN14Class_0009E218C1Ev(struct Unk_func_00049EF8_0 *arg0) {
    arg0->unk0 = &D_0009E218;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 330
void func_00049EF8(struct Unk_func_00049EF8_0 *arg0) {
    arg0->unk0 = &D_0009E218;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_0009E218D2Ev);

void _ZN14Class_0009E218D1Ev(M2C_UNK **arg0) {
    *arg0 = &D_0009E218;
    func_00049F98();
}

void _ZN14Class_0009E218D0Ev(M2C_UNK **arg0) {
    *arg0 = &D_0009E218;
    func_00049F98();
    _ZdlPv(arg0);
}

void func_00049F98(void) {
    func_00049FB4();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049FB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049FFC);
#endif

#if FW_VERSION == 260
Class_0009E470::Class_0009E470() {
    this->unk4 = 3;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 330
void func_0004A044(struct Unk_func_0004A044_0 *arg0) {
    func_00049EE0(arg0);
    arg0->unk0 = &D_0009E470;
    arg0->unk4 = 3;
}

void func_0004A07C(struct Unk_func_0004A07C_0 *arg0) {
    func_00049EE0(arg0);
    arg0->unk0 = &D_0009E470;
    arg0->unk4 = 3;
}
#endif

#if FW_VERSION == 260
Class_0009E470::~Class_0009E470() {
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 330
void func_0004A0B4(M2C_UNK **arg0) {
    *arg0 = &D_0009E470;
    _ZN14Class_0009E218D2Ev((s32) arg0);
}

void func_0004A0DC(M2C_UNK **arg0) {
    *arg0 = &D_0009E470;
    _ZN14Class_0009E218D2Ev((s32) arg0);
}

void func_0004A104(M2C_UNK **arg0) {
    *arg0 = &D_0009E470;
    _ZN14Class_0009E218D2Ev((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A13C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0001ADA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003FD4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003FD74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003FD9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003FDD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003FE54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0003FE5C);
#endif

#if FW_VERSION < 330
void func_0004A1C0(s32 *arg0) {
    *arg0 = 0;
}

void func_0004A1C8(void) {
    func_0004A25C();
}

void func_0004A1E4(void) {
    func_0004A25C();
}

s32 func_0004A200(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = sce_paf_private_memalign(0x40, arg1);
    *arg0 = temp_v0;
    if (temp_v0 == 0) {

    } else {
        sce_paf_private_memset(temp_v0, 0, arg1);
    }
    return *arg0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A25C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049A0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049A48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_00094D20D2Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_00094D20D1Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_00094D20D0Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049B0C);

Class_0009B2A8::Class_0009B2A8() {
}

Class_0009B2A8::~Class_0009B2A8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049B7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B23C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B250);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B264);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B270);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049C9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049F30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00049FA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A428);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A788);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B284);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B288);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B28C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B290);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B294);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B29C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B2A8);

__asm__(".globl _ZTV14Class_0009B2A8\n_ZTV14Class_0009B2A8 = D_0009B2A8 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A960);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004AA38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004AE14);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004B154);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004B494);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004B888);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004BA48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004BFF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C3F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C42C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C51C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C6E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C798);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C880);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CC84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CCE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CD48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CD6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D60C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CDC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CE00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CE40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CEB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CF00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CF84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CFC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D030);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D078);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D0A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D0E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D138);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D164);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D198);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D1CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D1F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D21C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D254);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D29C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D374);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D3C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D3F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D420);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D45C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D498);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D4C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D4E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D520);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D568);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D650);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D690);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D6D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D6F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D720);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D758);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D7F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D944);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DA5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DA90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DAB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DAE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DB18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DB60);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0004A298(struct Unk_func_0004A298_0 *arg0) {
    func_0001B1D4(arg0);
    arg0->unk4 = 2;
    arg0->unk0 = &D_0009E488;
    arg0->unk28 = 0;
}

void func_0004A2D4(struct Unk_func_0004A2D4_0 *arg0) {
    func_0001B1D4(arg0);
    arg0->unk4 = 2;
    arg0->unk0 = &D_0009E488;
    arg0->unk28 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_00094D20D2Ev);

void _ZN14Class_00094D20D1Ev(M2C_UNK **arg0) {
    *arg0 = &D_0009E488;
    func_0001B28C((s32) arg0);
}

void _ZN14Class_00094D20D0Ev(M2C_UNK **arg0) {
    *arg0 = &D_0009E488;
    func_0001B28C((s32) arg0);
    _ZdlPv(arg0);
}

s32 func_0004A398(void) {
    return 0;
}

Class_0009E528::Class_0009E528() {
}

Class_0009E528::~Class_0009E528() {
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E1B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E218);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E228);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E234);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E240);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E24C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E258);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E268);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E278);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E284);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E290);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E29C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E2AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E2BC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E2CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E2D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E2E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E2EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E2F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E304);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E310);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E31C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E328);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E334);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E340);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6F50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6F5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6F6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6F7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6F88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6F94);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6FA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6FB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6FC0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E348);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E354);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E360);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E36C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E378);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E384);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B7018);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B7020);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B7028);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B7034);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B7040);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B704C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E390);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E39C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E3AC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E3BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E3C4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E3CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E3D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E3E0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E3E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E3F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E3FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E408);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E410);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E41C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E424);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E42C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E438);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E440);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E470);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E488);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A408);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A528);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A7BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004A830);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004ACB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E4BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E4D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E4E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E4F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004B014);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004B1EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004B2C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004B6A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004B9E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004BD20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C114);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C2D4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060124);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004C86C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CC6C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060E9C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CCA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CD90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004CF60);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D018);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D0FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D500);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D564);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061858);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061890);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000618C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000618F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061918);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061950);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000619B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000619E4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D5C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D5E8);

void func_0004D60C(M2C_UNK **arg0) {
    *arg0 = &D_0009E538;
    func_0004D730((s32) arg0);
    func_0004D8AC(arg0);
}

void func_0004D644(M2C_UNK **arg0) {
    *arg0 = &D_0009E538;
    func_0004D730((s32) arg0);
    func_0004D8AC(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D67C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004D67C(M2C_UNK **arg0) {
    *arg0 = &D_0009E538;
    func_0004D730((s32) arg0);
    func_0004D8AC(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
s32 func_0004D6BC(struct Unk_func_0004D6BC_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108F0E;
    if (arg1 != 0) {
        var_v1 = 0x8000FFFF;
        if (arg0->unk4 == 0) {
            temp_v0 = sceIoOpen(arg1, 1, 0);
            arg0->unk8 = temp_v0;
            var_v1 = 0x80108F0F;
            if (temp_v0 >= 0) {
                arg0->unk4 = 1U;
                var_v1 = 0;
            }
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D730);

s32 func_0004D77C(struct Unk_func_0004D77C_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x8000FFFF;
    if ((arg0->unk4 != 0) && ((arg0->unk10 >= arg1) || (func_0004D8AC(), temp_v0 = func_0004D83C(arg0, arg1), var_v1 = temp_v0, (temp_v0 >= 0)))) {
        arg0->unk14 = sceIoRead(arg0->unk8, arg0->unkC, arg1);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D800);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D83C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D8AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D8F4);

s32 func_0004D924(struct Unk_func_0004D77C_0 *arg0, s32 arg1) {
    s32 var_v1;
    struct Unk_func_0004D924_temp_v0 *temp_v0;

    var_v1 = 0;
    if ((arg1 >= 0) && (arg0->unk14 >= (arg1 + 2))) {
        temp_v0 = arg0->unkC + arg1;
        var_v1 = (temp_v0->unk0 << 8) | temp_v0->unk1;
    }
    return var_v1;
}

s32 func_0004D960(struct Unk_func_0004D77C_0 *arg0, s32 arg1) {
    s32 var_a2;
    struct Unk_func_0004D960_temp_v1 *temp_v1;

    var_a2 = 0;
    if ((arg1 >= 0) && (arg0->unk14 >= (arg1 + 4))) {
        temp_v1 = arg0->unkC + arg1;
        var_a2 = (temp_v1->unk0 << 0x18) | (temp_v1->unk1 << 0x10) | (temp_v1->unk2 << 8) | temp_v1->unk3;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D9B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D9E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DA14);

void func_0004DA48(M2C_UNK **arg0) {
    *arg0 = &D_0009E558;
    func_0004DF4C((s32) arg0);
}

void func_0004DA70(M2C_UNK **arg0) {
    *arg0 = &D_0009E558;
    func_0004DF4C((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DA98);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004DA98(M2C_UNK **arg0) {
    *arg0 = &D_0009E558;
    func_0004DF4C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DAD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DB18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DBF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DC44);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DC70);

void func_0004DC9C(struct Unk_func_0004DC9C_0 *arg0) {
    func_0004DECC();
    arg0->unk2C = 0x190;
    arg0->unk0 = &D_0009E588;
    arg0->unk28 = 0;
}

void func_0004DCD8(struct Unk_func_0004DCD8_0 *arg0) {
    func_0004DECC();
    arg0->unk2C = 0x190;
    arg0->unk0 = &D_0009E588;
    arg0->unk28 = 0;
}

void func_0004DD14(M2C_UNK **arg0) {
    *arg0 = &D_0009E588;
    func_0004DF4C((s32) arg0);
}

void func_0004DD3C(M2C_UNK **arg0) {
    *arg0 = &D_0009E588;
    func_0004DF4C((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DD64);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004DD64(M2C_UNK **arg0) {
    *arg0 = &D_0009E588;
    func_0004DF4C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DD9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DDE4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00062318);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00062360);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000623A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000623D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000623F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00062430);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000624DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00062504);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006252C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000626BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DECC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DF0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DF4C);

void func_0004DF74(s32 **arg0) {
    *arg0 = &D_0009E5B8;
    func_0004D60C(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DF9C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004DF9C(s32 **arg0) {
    *arg0 = &D_0009E5B8;
    func_0004D60C(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
s32 func_0004DFD4(struct Unk_func_0004D77C_0 *arg0) {
    s32 temp_v0;
    s32 var_a2;

    temp_v0 = func_0004D77C(arg0, 0x4000);
    var_a2 = temp_v0;
    if (temp_v0 >= 0) {
        var_a2 = 0x8000FFFF;
        if ((arg0->unkC != 0) && (arg0->unk10 == 0x4000)) {
            arg0->unk18 = func_0004D924(arg0, 0x10);
            arg0->unk1C = func_0004D924(arg0, 0x12);
            arg0->unk20 = func_0004D924(arg0, 0x14);
            arg0->unk24 = func_0004D924(arg0, 0x18);
            var_a2 = 0;
        }
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E070);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E1C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E2DC);

void func_0004E310(M2C_UNK **arg0) {
    *arg0 = &D_0009E5E8;
    func_0004DF4C((s32) arg0);
}

void func_0004E338(M2C_UNK **arg0) {
    *arg0 = &D_0009E5E8;
    func_0004DF4C((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E360);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0004E360(M2C_UNK **arg0) {
    *arg0 = &D_0009E5E8;
    func_0004DF4C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E398);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E3E0);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E4B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E4DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E500);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E5E0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000400F0);
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E5F8);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E63C);

void func_0004E738(struct Unk_func_0004E738_0 *arg0) {
    func_0004E4B8(arg0);
    arg0->unk0 = &D_0009E628;
    arg0->unk4 = 1;
}

void func_0004E770(M2C_UNK **arg0) {
    *arg0 = &D_0009E628;
    func_0004E500((s32) arg0);
}

void func_0004E798(M2C_UNK **arg0) {
    *arg0 = &D_0009E628;
    func_0004E500((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E7C0);
#else
void func_0004E7C0(M2C_UNK **arg0) {
    *arg0 = &D_0009E628;
    func_0004E500((s32) arg0);
    _ZdlPv(arg0);
}
#endif

s32 func_0004E7F8(struct Unk_func_0004E7F8_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk18;
    return (temp_v1 == 0) ? 0 : (temp_v1 + 1);
}

void func_0004E808(struct Unk_func_0004E808_0 *arg0) {
    func_0004E4B8(arg0);
    arg0->unk0 = &D_0009E638;
    arg0->unk4 = 2;
}

void func_0004E840(struct Unk_func_0004E840_0 *arg0) {
    func_0004E4B8(arg0);
    arg0->unk0 = &D_0009E638;
    arg0->unk4 = 2;
}

void func_0004E878(M2C_UNK **arg0) {
    *arg0 = &D_0009E638;
    func_0004E500((s32) arg0);
}

void func_0004E8A0(M2C_UNK **arg0) {
    *arg0 = &D_0009E638;
    func_0004E500((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E8C8);
#else
void func_0004E8C8(M2C_UNK **arg0) {
    *arg0 = &D_0009E638;
    func_0004E500((s32) arg0);
    _ZdlPv(arg0);
}
#endif

s32 func_0004E900(struct Unk_func_0004E900_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk18;
    return (temp_v1 == 0) ? 0 : (temp_v1 + 1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004E910);

void func_0004E980(struct Unk_func_0004E980_0 *arg0) {
    func_0004E4B8(arg0);
    arg0->unk0 = &D_0009E648;
    arg0->unk4 = 4;
}

void func_0004E9B8(struct Unk_func_0004E9B8_0 *arg0) {
    func_0004E4B8(arg0);
    arg0->unk0 = &D_0009E648;
    arg0->unk4 = 4;
}

void func_0004E9F0(M2C_UNK **arg0) {
    *arg0 = &D_0009E648;
    func_0004E500((s32) arg0);
}

void func_0004EA18(M2C_UNK **arg0) {
    *arg0 = &D_0009E648;
    func_0004E500((s32) arg0);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004EA40);
#else
void func_0004EA40(M2C_UNK **arg0) {
    *arg0 = &D_0009E648;
    func_0004E500((s32) arg0);
    _ZdlPv(arg0);
}
#endif

s32 func_0004EA78(struct Unk_func_0004EA78_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk18;
    return (temp_v1 == 0) ? 0 : (temp_v1 + 1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004EA88);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004EAF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004EB38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004EB78);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004EBFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004EC80);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004ED0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004EEDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F13C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F26C);

void func_0004F300(M2C_UNK **arg0) {
    *arg0 = &D_0009E678;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F310);
#else
void func_0004F310(M2C_UNK **arg0) {
    *arg0 = &D_0009E678;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E504);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E508);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E50C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E510);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E514);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E51C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E528);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
__asm__(".globl _ZTV14Class_0009E528\n_ZTV14Class_0009E528 = D_0009E528 - 8\n");
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6988);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E538);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B2D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B308);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B338);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B368);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E558);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E588);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B6A40);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E5B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E5E8);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E618);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E628);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E638);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E648);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E658);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E678);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F338);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F3A8);

s32 func_0004F3D0(struct Unk_func_0004F3D0_0 *arg0) {
    return (arg0->unk4 + (arg0->unk3 << 8)) & 0xFFFF;
}

u8 func_0004F3E8(struct Unk_func_0004F3E8_0 *arg0) {
    return arg0->unk5;
}

void func_0004F3F0(s32 arg0) {
    func_0004F630(arg0 + 6);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F40C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F5DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F630);

void func_0004F6A0(void) {
    func_00022944();
}

void func_0004F6BC(void) {
    func_000229A8();
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F6D8);
#else
s32 func_0004F6D8(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 6, 1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F6E0);
#else
s32 func_0004F6E0(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 7, 1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F6E8);
#else
s32 func_0004F6E8(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 5, 1);
}
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F6F0);

s32 func_0004F6F8(s32 arg0) {
    return arg0 & 0xFF;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F700);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F7D8);

s32 func_0004F84C(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_0004F6F0(arg0 & 0xFFFF);
    var_a0 = 6;
    if (temp_v0 != 2) {
        var_a0 = ((u32) ((temp_v0 - 3) & 0xFF) >= 2U) ? 0 : 0xA;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F88C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004F928);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004FA30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004FB30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004FBA8);

s32 func_0004FC6C(s32 arg0, s32 *arg1) {
    *arg1 = arg0 & 0xFF;
    return 1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004FC7C);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E9DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EAA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EAD0);

__asm__(".globl _ZTV14Class_0009EAD0\n_ZTV14Class_0009EAD0 = D_0009EAD0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EAF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EB60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B928);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00093F40);
#endif

void func_0004FF50(struct Unk_func_0004FF50_0 *arg0) {
    arg0->unkA = 0;
}

void func_0004FF58(void) {
}

void func_0004FF60(void) {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004FF68);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004FFF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050014);

void func_00050030(s32 arg0) {
    func_0004F3F0(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005004C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050070);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050094);

void func_000500B8(void) {
    func_0004F6F0(func_0004FFF8());
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000500DC);

void func_00050100(void) {
    func_0004F84C(func_0004FFF8());
}

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041C20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041CFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00041D8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051AAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004225C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042304);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000423B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000423BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042404);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042478);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000424D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000424E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000424E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000424F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004255C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004256C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004257C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042658);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042950);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042A38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042B50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D04_v260);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042D90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042DAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042DC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042DE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042E00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042E1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042E38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00042E54);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050124);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000501AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050234);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000502F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000503B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050470);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005052C);

void func_000505F0(struct Unk_func_000505F0_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000505F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050674);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000506F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005076C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000507C8);

s32 func_00050904(struct Unk_func_00050904_0 *arg0) {
    return arg0->unk1C == 1;
}

Class_0009EAD0::Class_0009EAD0() {
}

Class_0009EAD0::~Class_0009EAD0() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005097C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000509D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050A2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050A94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050AFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050B50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050BA4);

void func_00050C00(struct Unk_func_00050C00_0 *arg0, s32 arg1) {
    arg0->unk3C = arg1;
}

void func_00050C08(struct Unk_func_00050C08_0 *arg0, s32 arg1) {
    arg0->unk40 = arg1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050C10);

s32 func_00050C84(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x18;
    func_000535E8(temp_s1);
    func_00052B7C(arg0 + 0x10, 4);
    func_00053624(temp_s1);
    return 0;
}

s32 func_00050CD4(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x18;
    func_000535E8(temp_s1);
    func_00052B7C(arg0 + 0x10, 2);
    func_00053624(temp_s1);
    return 0;
}

s32 func_00050D24(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x18;
    func_000535E8(temp_s1);
    func_00052B7C(arg0 + 0x10, 2);
    func_00053624(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050D74);

void func_00051098(s32 arg0) {
    func_00050B50(arg0 - 8);
}

void func_000510B4(s32 arg0) {
    func_00050B50(arg0 - 4);
}

void func_000510D0(s32 arg0) {
    func_00050BA4(arg0 - 8);
}

void func_000510EC(s32 arg0) {
    func_00050BA4(arg0 - 4);
}

void func_00051108(s32 arg0) {
    func_00050CD4(arg0 - 4);
}

void func_00051124(s32 arg0) {
    func_00050D24(arg0 - 4);
}

void func_00051140(s32 arg0) {
    func_00050D74(arg0 - 8);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005115C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000511B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051204);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051248);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005128C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000512D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051314);

void func_00051360(struct Unk_func_00051360_0 *arg0, s32 arg1) {
    arg0->unk38 = arg1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051368);

s32 func_000513DC(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    func_000535E8(temp_s1);
    func_00052B7C(arg0 + 0xC, 4);
    func_00053624(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005142C);

void func_000516DC(s32 arg0) {
    func_000512D0(arg0 - 4);
}

void func_000516F8(s32 arg0) {
    func_00051314(arg0 - 4);
}

void func_00051714(s32 arg0) {
    func_0005142C(arg0 - 4);
}

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050EB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050F90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051020);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051AAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000514E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051590);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051640);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051648);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051690);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051704);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051764);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005176C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051774);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005177C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000517E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000517F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051808);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000518E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051BDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051CC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051DDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051F90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051FAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051FC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051FE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052000);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005201C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052038);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052054);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052070);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005208C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000520A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000520C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000520E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000520FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000529BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052184);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052A28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000521D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052210);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052228);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052240);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052AC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052AD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052B7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052334);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051730);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005180C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E9DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EAA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EAD0);

__asm__(".globl _ZTV14Class_0009EAD0\n_ZTV14Class_0009EAD0 = D_0009EAD0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EAF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EB60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EBA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005189C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051AAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051D64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051E0C);

void func_00051EBC(struct Unk_func_00051EBC_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

s32 func_00051EC4(struct Unk_func_00051EC4_0 *arg0) {
    s32 var_a0;

    var_a0 = 0;
    if (func_000535DC((u8 *)arg0 + 0x40) != 0) {
        if (arg0->unk14 != 0) {
            var_a0 = arg0->unk18 != 0;
        }
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051F0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051F80);

void func_00051FE0(struct Unk_func_00051FE0_0 *arg0, s32 arg1) {
    arg0->unk38 = arg1;
}

s32 func_00051FE8(struct Unk_func_00051FE8_0 *arg0) {
    return arg0->unk3C;
}

void func_00051FF0(struct Unk_func_00051FF0_0 *arg0, s32 arg1) {
    arg0->unk3C = arg1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051FF8);

u32 func_00052064(struct Unk_func_00052064_0 *arg0) {
    return (u32) ~arg0->unk20 >> 0x1F;
}

u32 func_00052074(struct Unk_func_00052074_0 *arg0) {
    return (u32) ~arg0->unk20 >> 0x1F;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052084);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052160);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052458);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052540);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052658);

void func_0005280C(s32 arg0) {
    func_00051D64(arg0 - 4);
}

void func_00052828(s32 arg0) {
    func_00051E0C(arg0 - 4);
}

void func_00052844(s32 arg0) {
    func_00051EC4(arg0 - 4);
}

void func_00052860(s32 arg0, s32 arg1) {
    func_00051FE0(arg0 - 4, arg1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005287C);

void func_00052898(s32 arg0, s32 arg1) {
    func_00051FF0(arg0 - 4, arg1);
}

void func_000528B4(s32 arg0) {
    func_00051FF8(arg0 - 4);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000528D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000528EC);

void func_00052908(s32 arg0) {
    func_00052084(arg0 - 4);
}

void func_00052924(s32 arg0) {
    func_00052160(arg0 - 4);
}

void func_00052940(s32 arg0) {
    func_00052458(arg0 - 4);
}

void func_0005295C(s32 arg0) {
    func_00052658(arg0 - 4);
}

Class_00094528::Class_00094528(void *arg1) {
    this->unk4 = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
}

Class_00094528::~Class_00094528() {
    sceKernelDeleteEventFlag(this->unk4);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052A8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052AA4);

s32 func_00052ABC(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052AC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052AD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052B7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052BB0);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052BEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052C4C);

Class_0009EC98::~Class_0009EC98() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052CF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EBD8);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009B9E0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E9DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EA74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EAA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EAD0);

__asm__(".globl _ZTV14Class_0009EAD0\n_ZTV14Class_0009EAD0 = D_0009EAD0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EAF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EB60);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EC60);

__asm__(".globl _ZTV14Class_00094528\n_ZTV14Class_00094528 = D_0009EC60 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EC68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EC6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EC70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EC74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EC78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EC7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EC80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EC84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052D10);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000534C4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052C94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052CB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052CCC_v271);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053570);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052D1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052D58);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053510);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005352C);

Class_00094538::~Class_00094538() {
    sceKernelDeleteSema(this->unk4);
}

s32 func_000535D4(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000535DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000535E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053624);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F76C);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053660);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053698);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000536D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053708);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053740);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053770);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000537A0);

void func_000537E0(s32 arg0) {
    func_00053770(arg0 - 4);
}

void func_000537FC(s32 arg0) {
    func_000537A0(arg0 - 4);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053818);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005387C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EC98);

__asm__(".globl _ZTV14Class_0009EC98\n_ZTV14Class_0009EC98 = D_0009EC98 - 8\n");

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009BA28);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009ECA8);

__asm__(".globl _ZTV14Class_00094538\n_ZTV14Class_00094538 = D_0009ECA8 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009ECB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009ED30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000538E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053A50);

s32 func_00053D2C(struct Unk_func_00053D2C_0 *arg0) {
    s32 var_a0;

    var_a0 = 0;
    if (func_000535DC((u8 *)arg0 + 0x2C) != 0) {
        if (arg0->unkC != 0) {
            var_a0 = arg0->unk10 != 0;
        }
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053D74);

u32 func_00053DC0(struct Unk_func_00053DC0_0 *arg0) {
    return (u32) ~arg0->unk14 >> 0x1F;
}

u32 func_00053DD0(struct Unk_func_00053DD0_0 *arg0) {
    return (u32) ~arg0->unk14 >> 0x1F;
}

s32 func_00053DE0(struct Unk_func_00053DE0_0 *arg0) {
    return arg0->unk28;
}

void func_00053DE8(struct Unk_func_00053DE8_0 *arg0, s32 arg1) {
    arg0->unk28 = arg1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053DF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000540F0);

Class_0009EDA0::Class_0009EDA0() {
}

Class_0009EDA0::~Class_0009EDA0() {
}

Class_0009EDE0::Class_0009EDE0() {
}

Class_0009EDE0::~Class_0009EDE0() {
}

Class_0009EDF8::Class_0009EDF8() {
}

Class_0009EDF8::~Class_0009EDF8() {
}

Class_0009EE10::Class_0009EE10() {
}

Class_0009EE10::~Class_0009EE10() {
}

void func_000544D8(struct Unk_func_000544D8_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk8 = -1;
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unkC = 0;
}

void func_000544F0(struct Unk_func_000544F0_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk8 = -1;
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unkC = 0;
}

void func_00054508(void) {
}

void func_00054510(void) {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054518);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054620);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054858);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054928);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054B28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054E08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054EE8);

void func_00054FD0(struct Unk_func_00054FD0_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

s32 func_00054FD8(struct Unk_func_00054FD8_0 *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if ((arg0->unk24 >= 0) && (func_000535DC((u8 *)arg0 + 0x28) != 0)) {
        if ((func_00052AC4((u8 *)arg0 + 0x30) != 0) && (func_000535DC((u8 *)arg0 + 0x138) != 0)) {
            var_s1 = func_00052AC4((u8 *)arg0 + 0x130) != 0;
        }
    }
    return var_s1;
}

s32 func_00055054(struct Unk_func_00055054_0 *arg0) {
    return arg0->unk8;
}

s32 func_0005505C(struct Unk_func_0005505C_0 *arg0) {
    return arg0->unk10;
}

s32 func_00055064(struct Unk_func_00055064_0 *arg0) {
    return arg0->unk18;
}

s32 func_0005506C(struct Unk_func_0005506C_0 *arg0) {
    return arg0->unkC;
}

s32 func_00055074(void) {
    return 0;
}

s32 func_0005507C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055084);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000550CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005543C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055500);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005558C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005561C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055660);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009ED60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EDA0);

__asm__(".globl _ZTV14Class_0009EDA0\n_ZTV14Class_0009EDA0 = D_0009EDA0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EDE0);

__asm__(".globl _ZTV14Class_0009EDE0\n_ZTV14Class_0009EDE0 = D_0009EDE0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EDF8);

__asm__(".globl _ZTV14Class_0009EDF8\n_ZTV14Class_0009EDF8 = D_0009EDF8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EE10);

__asm__(".globl _ZTV14Class_0009EE10\n_ZTV14Class_0009EE10 = D_0009EE10 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EE38);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EE5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EE80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EEA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EED0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000556CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055A70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055C9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055D84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055E54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000562F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056300);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056474);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056738);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056834);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056BC0);

void func_00056D80(s32 arg0) {
    func_00054E08(arg0 - 4);
}

void func_00056D9C(s32 arg0) {
    func_00054EE8(arg0 - 4);
}

void func_00056DB8(s32 arg0) {
    func_00055D84(arg0 - 4);
}

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048484);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000484E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004853C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004857C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000485BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00022C04);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004860C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048658);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00022CC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00022D14);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00022D60);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000487E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048864);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048884);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000488A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000529BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004892C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052A28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004897C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000489B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000489D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000489E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052AC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052AD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052B7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048ADC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048B18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000534C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048BB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048BCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048BE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053570);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048C38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00048C74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000535DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000535E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053624);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056DD4);

void func_00056E64(struct Unk_func_00056E64_0 *arg0) {
    if (sceKernelSetEventFlag(arg0->unk4, D_000A3D58) != 0) {

    } else {
        sceKernelExitDeleteThread(1);
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056EA0);

void func_00056ED8(void) {
    sceKernelDelayThread();
}

s32 func_00056EF4(void) {
    return -1;
}

void func_00056EFC(void) {
    sceKernelGetThreadId();
}

u32 func_00056F18(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056F24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056F94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057004);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005707C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000570F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057168);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000571DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057258);

s32 func_00057458(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057460);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000575B4);

void func_00057774(s32 arg0) {
    func_00057168(arg0 - 8);
}

void func_00057790(s32 arg0) {
    func_00057168(arg0 - 4);
}

void func_000577AC(s32 arg0) {
    func_000571DC(arg0 - 8);
}

void func_000577C8(s32 arg0) {
    func_000571DC(arg0 - 4);
}

void func_000577E4(s32 arg0) {
    func_000505F8(arg0 + 8);
}

void func_00057800(s32 arg0) {
    func_000577E4(arg0 - 8);
}

s32 func_0005781C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057824);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057890);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057928);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057950);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057A7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057B50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057C00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057CB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057D14);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057DFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057EEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057FAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058014);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058048);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058138);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000581AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058288);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058398);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058428);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058490);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058500);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058544);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000585A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000585E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058654);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000586C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058730);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005877C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058964);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000589D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058A24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058C2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058C54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058D58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058E48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058F40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058F90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058FEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000590CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000591AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000592BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059374);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059438);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000594A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005958C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005967C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000596B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000596EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005974C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000597A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059828);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000598B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059984);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000599D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059A24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059A68);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059A9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059AC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059B18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059BC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059C68);

void func_00059C9C(void) {
    D_000A5248 = (Unk_D_000A5248*) &D_000A5220;
    D_000A524C.unk0 = 0;
    D_000A524C.unk14 = 3;
    D_000A524C.unk18 = 1;
    D_000A524C.unk3C = -1;
    D_000A524C.unk68 = 0;
    D_000A524C.unk4 = 0;
    D_000A524C.unk8 = 0;
    D_000A524C.unkC = -1;
    D_000A524C.unk10 = -1;
    D_000A524C.unk1C = 0;
    D_000A524C.unk20 = 0;
    D_000A524C.unk24 = -1;
    D_000A524C.unk28 = -1;
    D_000A524C.unk2C = 0;
    D_000A524C.unk30 = -1;
    D_000A524C.unk34 = -1;
    D_000A524C.unk38 = 0;
    D_000A524C.unk40 = 0;
    D_000A524C.unk44 = 0;
    D_000A524C.unk48 = 0;
    D_000A524C.unk4C = 0;
    D_000A524C.unk50 = 0;
    D_000A524C.unk54 = 0;
    D_000A524C.unk58 = 0;
    D_000A524C.unk5C = 0;
    D_000A524C.unk60 = 0;
    D_000A524C.unk64 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059D30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059D5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059E08);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004BDD8);
#else
s32 func_00059EE0(s32 arg0) {
    return D_000A527C == func_0005B0CC(arg0 - 1);
}
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059F10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059F40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EF40);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000944B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000944E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094518);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094528);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094538);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009EF70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059F70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A2A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A314);

s32 func_0005A3DC(s32 arg0) {
    void *sp0;
    s32 sp4;
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != D_000A524C.unk18) {
        func_0005B0A8(arg0, (s32*) &sp0, &sp4);
        var_v0 = D_000A5248->unkC(sp4, sp0);
        if (var_v0 == 0) {
            D_000A524C.unk18 = arg0;
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A448);

s32 func_0005A75C(s32 arg0) {
    return ((arg0 ^ 5) != 0) ? arg0 : 1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A76C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A9AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AABC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AC80);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AD30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005ADB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AEB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AF04);

void func_0005AF48(s32 arg0) {
    func_0001E96C(func_00011C50(), arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AF78);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005AFB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B008);

void func_0005B0A8(s32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 >= 0) {
        *arg1 = arg0;
        *arg2 = 0;
        return;
    }
    *arg1 = -arg0;
    *arg2 = 1;
}

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005A7FC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B0CC);
#endif

s32 func_0005B140(s32 arg0) {
    D_000A52BC = 1;
    D_000A52B8 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B15C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B194);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B1CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B204);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B27C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B2E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B34C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B384);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B3C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B404);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B474);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B4BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B504);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B53C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B574);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B5AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B5F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B640);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B6AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B708);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B750);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B788);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B7E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B828);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B860);

s32 func_0005B8A8(void) {
    return D_000A52BC;
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005B8B4);
#endif

s32 func_0005B9BC(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80108300;
    if (D_000A52C4 == 0) {
        D_000A52C0 = arg0;
        var_v1 = 0;
        D_000A52C4 = 1;
    }
    return var_v1;
}

s32 func_0005B9EC(void) {
    s32 var_v1;

    var_v1 = 0x80108300;
    if (D_000A52C4 != 0) {
        func_0005BAA0();
        func_0005BB90();
        D_000A52C0 = 0;
        D_000A52C4 = 0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BA44);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BAA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BAFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BB90);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D9C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094664);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094680);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094688);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DAC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DAE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DB00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DB60);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DB94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DB9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004DC0C);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BC10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BC8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BD10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BEA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BF08);

s32 func_0005BF74(void) {
    s32 var_v1;

    var_v1 = 0x80109609;
    if (D_000A5400 != 0) {
        D_000A5300.unkF4 = 0;
        var_v1 = 0;
        D_000A5300.unk74 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BFA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C190);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C280);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F074);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009BE0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009BEB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009BFB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C034);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C0D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C0E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C16C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C22C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C2B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C340);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C3A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C40C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C478);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C514_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C610);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C6AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C7A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C820);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C8C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009C964);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CA00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CA78);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F08C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F134);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F230);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F2B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F350);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F368);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F3EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F4AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F530);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F5C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F620);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F68C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F6F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F794);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F890);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009F92C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FA28);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FAA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FB48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FBE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FC80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FCF8);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FDA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FDB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C298);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C3A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C41C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C468);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C518);

s32 func_0005C5B8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C5C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C5E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C68C);

s32 func_0005C740(void) {
    func_0005C280();
    return 0;
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FDD0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FDE8);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BE90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CB98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CBB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CBBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BF8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BFA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005BFC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CBDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C028);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C05C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C064);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C0D4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C760);

void func_0005C85C(void) {
    func_0005C760();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C878);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FE18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FE34);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FE3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C898);

s32 func_0005C8F8(s32 arg0) {
    func_0005C92C();
    func_000319E0(arg0, 0);
    return 1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C92C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C934);

s32 func_0005C9A4(s32 arg0) {
    func_000319E0(arg0, 0);
    return 4;
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FE5C);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005C9C4);

s32 func_0005CAD8(void) {
    func_0005C9C4(0);
    return 0;
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FE8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FEA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FEB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005CAF8);

s32 func_0005CD48(s32 arg0) {
    func_0005CD7C();
    func_000319E0(arg0, 0);
    return 1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005CD7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FF7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005CE38);

void func_0005CF34(void) {
    func_0005CE38();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005CF50);

s32 func_0005CF70(struct Unk_func_0005CF70_0 *arg0) {
    if (arg0->unk18 != 1) {

    } else {
        func_000319E0((s32) arg0, 0);
    }
    return 0;
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FFB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FFD0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FFD8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005CFA8);

s32 func_0005D008(s32 arg0) {
    func_0005D03C();
    func_000319E0(arg0, 0);
    return 1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D03C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009FFF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D044);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0028);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0040);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0048);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D150);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D258);

s32 func_0005D3B0(struct Unk_func_0005D3B0_0 *arg0) {
    D_000A54A0.unk104 = (s32) arg0->unk24;
    D_000A54A0.unk108 = (s32) arg0->unk28;
    D_000A54A0.unk10C = (s32) arg0->unk2C;
    D_000A54A0.unk110 = (s32) arg0->unk30;
    func_0002CCEC(1);
    if (D_000A54A0.unk100 != 0) {
        D_000A54A0.unk100 = 0U;
    }
    func_000319E0((s32) arg0, 0);
    return 0;
}

s32 func_0005D428(s32 arg0) {
    func_0002CCEC(1);
    func_000319E0(arg0, 0);
    return 2;
}

s32 func_0005D460(s32 arg0) {
    func_0005D03C();
    func_000319E0(arg0, 0);
    return 1;
}

#if FW_VERSION >= 300
void func_0006962C(s32 arg0) {
    D_000C0AB0 = arg0;
}
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0080);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D494);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D650);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D770);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D814);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005D968);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DAC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DCC0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DF30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005DFAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005E1CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005E310);

#if FW_VERSION >= 301
s32 func_0005E370(void) {
    return 0x0A1FAFFB;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B8E48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B8E58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B8E6C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9B88);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B8E88);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B8EA0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009CF30);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005E370);
#endif

#if FW_VERSION == 300
s32 func_0005E370(void) {
    return 0x0A1FAFFB;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A560);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A614);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A6C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A854);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A938);

void func_0006AA24(void *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x4C;
    func_000535E8(temp_s0);
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 1) {
        if (arg1 == 1) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_00053624(temp_s0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AA8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AB40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AC40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AD10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006ADF0);

s32 func_0006AFCC(s32 arg0) {
    return arg0 + 0x30;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AFD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B150);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B1A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B298);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B2FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B8F30);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B8FC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9060);

void func_0006B338(M2C_UNK **arg0) {
    *arg0 = &D_000B9060;
}

void func_0006B348(M2C_UNK **arg0) {
    *arg0 = &D_000B9060;
    _ZdlPv(arg0);
}

void func_0006B370(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B8FC8;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_000B9060;
}

void func_0006B38C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B8FC8;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_000B9060;
    _ZdlPv(arg0);
}

void func_0006B3C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B3C8);

void func_0006B3E8(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEii(arg0 + 8);
}

void func_0006B404(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEif(arg0 + 8);
}

void func_0006B420(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEiRK4vec4(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B43C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B480);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B4C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B4FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B53C);

void func_0006B560(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}

void func_0006B584(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}

void func_0006B5A8(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B5CC);

void func_0006B5F0(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}

void func_0006B614(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}

void func_0006B638(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}

void func_0006B65C(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRb(arg0 + 8);
}

void func_0006B678(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRi(arg0 + 8);
}

void func_0006B694(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRf(arg0 + 8);
}

void func_0006B6B0(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiR4vec4(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B6CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B70C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B74C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B78C);

void func_0006B7CC(void) {

}

s32 func_0006B7D4(void) {
    return -1;
}

s32 func_0006B7DC(void) {
    return -1;
}

s32 func_0006B7E4(void) {
    return -1;
}

s32 func_0006B7EC(void) {
    return -1;
}

s32 func_0006B7F4(void) {
    return 0;
}

s32 func_0006B7FC(void) {
    return 0;
}

s32 func_0006B804(void) {
    return 1;
}

void func_0006B80C(void) {

}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B814);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B954);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BA94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BB58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BC1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BCE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9088);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B908C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9090);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9094);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B90A0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CF60);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D22C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D4F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D5BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D680);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B90B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B90C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B90D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C2B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C620);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C98C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CABC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CBEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CD24);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CE28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CEB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CF38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D060);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D110);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D864);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D998);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E148);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006ECC8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E278);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006EC10);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F94C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006EDC0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9330);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9334);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000BA018);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9340);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9378);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F068);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000BA080);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000BA0A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9378);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_0006F0E8(s32 arg0) {
    func_0006CABC(arg0 - 0x30);
}

void func_0006F104(s32 arg0) {
    func_0006CBEC(arg0 - 0x30);
}

void func_0006F120(s32 arg0) {
    func_0006CD24(arg0 - 0x30);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_0006F13C(M2C_UNK **arg0) {
    *arg0 = &D_000B9378;
}

void func_0006F14C(M2C_UNK **arg0) {
    *arg0 = &D_000B9378;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FC64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FC74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FC9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FCE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FDD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FEC8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F174);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F22C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F2E4_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F2E4_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F2E4_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F2E4_v300);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F320);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F35C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F3A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F3FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B93C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B93D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B93F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9410);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B942C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9448);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9464);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B947C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B94DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B953C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B956C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B959C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FAF0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070CAC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FE58);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000701E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070278);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000711B0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070310_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070310_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070310_v301);
#endif

#if FW_VERSION == 300
void func_00070310_v300(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070318);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B96E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9700);

__asm__(".globl _ZTV14Class_000B9700\n_ZTV14Class_000B9700 = D_000B9700 - 8\n");
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_00070FFC(s32 arg0) {
    return arg0 << 5;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070FFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071EF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071FA4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071004_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071004_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071004_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071004_v300);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000710AC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
Class_000B9700::~Class_000B9700() {
}

void func_0007119C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_000711A4(void *arg0) {
    sceGumDrawArray(6, 0x80011E, M2C_FIELD(arg0, s32 *, 8) * 2, NULL, M2C_FIELD(arg0, void **, 4));
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000711A4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_000711D8(s32 arg0) {
    return (arg0 * 0x78) + 0x3C;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000711D8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_000711EC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B9740;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    sce_paf_private_memset(arg2, 0, func_000711D8(arg1));
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

void func_00071244(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B9740;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    sce_paf_private_memset(arg2, 0, func_000711D8(arg1));
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

Class_000B9740::~Class_000B9740() {
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000721E4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000712E4);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007141C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072340);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007146C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_00071658(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_00071660(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 > 0) {
        sceGuDrawArray(3, 0x800102, (temp_v0 * 0xC) + 6, NULL, M2C_FIELD(arg0, void **, 4));
    }
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071660);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072494);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000716A8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9740);

__asm__(".globl _ZTV14Class_000B9740\n_ZTV14Class_000B9740 = D_000B9740 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071CAC);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072B5C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071EA0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071FF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007221C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9768);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B9780);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000722EC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072530);

void func_00072558(void *arg0, s32 arg1, u32 arg2) {
    s32 temp_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B9780;
    temp_v0 = sceKernelCreateThread(&D_000B9768, (s32) &func_00072530, arg1, arg2, 0x200000U, NULL);
    if (temp_v0 >= 0) {
        M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    }
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000725B4_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000725B4_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000725B4_v301);
#endif

#if FW_VERSION == 300
void func_000725B4_v300(void *arg0, s32 arg1, u32 arg2) {
    s32 temp_v0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B9780;
    temp_v0 = sceKernelCreateThread(&D_000B9768, (s32) &func_00072530, arg1, arg2, 0x200000U, NULL);
    if (temp_v0 >= 0) {
        M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    }
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_00072610(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B9780;
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, s32 *, 4), NULL);
    sceKernelDeleteThread(M2C_FIELD(arg0, s32 *, 4));
}

void func_00072650(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B9780;
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, s32 *, 4), NULL);
    sceKernelDeleteThread(M2C_FIELD(arg0, s32 *, 4));
}

void func_00072690(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000B9780;
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, s32 *, 4), NULL);
    sceKernelDeleteThread(M2C_FIELD(arg0, s32 *, 4));
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000726D8);

void func_00072704(void *arg0, s32 arg1) {
    sceKernelChangeThreadPriority(M2C_FIELD(arg0, s32 *, 4), arg1);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072720);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97D4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B97E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072874);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072A6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072BB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072EA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072F50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007302C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000730A0);

void func_00073114(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        func_0007314C((s32) arg0, arg1);
    } else {
        func_00073274((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007314C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00073274);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00073400);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007342C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00073434);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00073450);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005E37C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005E3F0);

Class_000A0220::~Class_000A0220() {
    func_0005FBC8();
}

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000507FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005E654);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000502FC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005EAE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005EB48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005EBAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005EC10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005EC74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005ECD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005EDE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005EE50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005EEBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F038);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F09C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005080C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F1F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050804);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005FBC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F4A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F554);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F610);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F6CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F790);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F7AC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0220);

__asm__(".globl _ZTV14Class_000A0220\n_ZTV14Class_000A0220 = D_000A0220 - 8\n");
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F8A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060020);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006010C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060128);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050398);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005E514);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005EF24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0190);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A01B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F2C8);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F3B4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060250);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000602BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060328);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060394);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D018);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050554);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060518);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060584);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000605F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060668);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006078C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060838);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000608F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000609B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060A74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060A90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060B84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061060);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006114C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061168);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F418);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F47C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F4E0);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00073EF8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061324);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061390);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D090);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000614A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061514);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061580);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000615EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061664);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006172C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006177C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000617A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000617CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061804);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D0C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061F48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000624A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00062564);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006271C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D108);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000629B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00062A34);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F544);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F5A4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000740CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F6B4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F720);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F78C);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F908);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005FBC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000507FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050804);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005080C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F96C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005F9D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005FAC0);

void func_0005FBAC(void) {
    func_0005FBC8();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005FBC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005FD78);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005FE24);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0005FE24(struct Unk_func_0005FE24_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0298;
    if (temp_a0 != 0) {
        _ZdaPv(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        _ZdaPv(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        _ZdaPv(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        _ZdaPv(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        _ZdaPv(temp_a0_5);
        arg0->unk5C = 0;
    }
    _ZN14Class_00094D20D2Ev((s32) arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005FEE0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0005FEE0(struct Unk_func_0005FEE0_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0298;
    if (temp_a0 != 0) {
        _ZdaPv(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        _ZdaPv(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        _ZdaPv(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        _ZdaPv(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        _ZdaPv(temp_a0_5);
        arg0->unk5C = 0;
    }
    _ZN14Class_00094D20D2Ev((s32) arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005FF9C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0005FF9C(struct Unk_func_0005FF9C_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0298;
    if (temp_a0 != 0) {
        _ZdaPv(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        _ZdaPv(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        _ZdaPv(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        _ZdaPv(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        _ZdaPv(temp_a0_5);
        arg0->unk5C = 0;
    }
    _ZN14Class_00094D20D2Ev((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_00060060(void) {
    func_0006007C();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006007C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0220);

__asm__(".globl _ZTV14Class_000A0220\n_ZTV14Class_000A0220 = D_000A0220 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060170);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060880);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006096C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0006096C(s32 arg0) {
    func_0004D564(arg0 + 0x10);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00075380);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060988);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060A44);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060AB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060B1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060B88);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060BF4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060D0C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060D78);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060DE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060E50);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00075880);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00060EC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061008);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000610D0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_000610D0(struct Unk_func_000610D0_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0310;
    if (temp_a0 != 0) {
        _ZdaPv(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        _ZdaPv(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        _ZdaPv(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        _ZdaPv(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        _ZdaPv(temp_a0_5);
        arg0->unk5C = 0;
    }
    _ZN14Class_00094D20D2Ev((s32) arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006118C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0006118C(struct Unk_func_0006118C_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0310;
    if (temp_a0 != 0) {
        _ZdaPv(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        _ZdaPv(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        _ZdaPv(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        _ZdaPv(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        _ZdaPv(temp_a0_5);
        arg0->unk5C = 0;
    }
    _ZN14Class_00094D20D2Ev((s32) arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061248);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00061248(struct Unk_func_00061248_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0310;
    if (temp_a0 != 0) {
        _ZdaPv(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        _ZdaPv(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        _ZdaPv(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        _ZdaPv(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        _ZdaPv(temp_a0_5);
        arg0->unk5C = 0;
    }
    _ZN14Class_00094D20D2Ev((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
void func_0006130C(void) {
    func_00061328();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061328);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0298);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006141C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061B40);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061C2C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00061C2C(s32 arg0) {
    func_0004D564(arg0 + 0x10);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000766A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00076798);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00076888);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00076978);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061C48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061D04);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061DBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061E74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061F2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00061F98);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000620B0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006211C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00062188);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000621F4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00076D30);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006226C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00062334);
#endif

#if FW_VERSION >= 301
void func_00062384(M2C_UNK **arg0) {
    *arg0 = &D_000A0388;
    func_00080478((s32) arg0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 301
void func_00062384(M2C_UNK **arg0) {
    *arg0 = &D_000A0388;
    _ZN14Class_000A1E50D2Ev((s32) arg0);
}
#endif

#if FW_VERSION >= 301
void func_000623AC(M2C_UNK **arg0) {
    *arg0 = &D_000A0388;
    func_00080478((s32) arg0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 301
void func_000623AC(M2C_UNK **arg0) {
    *arg0 = &D_000A0388;
    _ZN14Class_000A1E50D2Ev((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000623D4);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 350
void func_000623D4(M2C_UNK **arg0) {
    *arg0 = &D_000A0388;
    func_00080478((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 301
void func_000623D4(M2C_UNK **arg0) {
    *arg0 = &D_000A0388;
    _ZN14Class_000A1E50D2Ev((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0310);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006240C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00062B50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000630A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006316C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0348);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063324);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000635C0);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006363C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0006363C(s32 arg0) {
    func_0004D564(arg0 + 0x10);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063658);
#else
void func_00063658(struct Unk_func_00063658_0 *arg0) {
    func_00080388();
    arg0->unk0 = &D_000A03C8;
    arg0->unk28 = 5;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063690);
#else
void func_00063690(struct Unk_func_00063690_0 *arg0) {
    func_00080388();
    arg0->unk0 = &D_000A03C8;
    arg0->unk28 = 5;
}
#endif

#if FW_VERSION == 260 || FW_VERSION >= 301
void func_000636C8(M2C_UNK **arg0) {
    *arg0 = &D_000A03C8;
    func_00080478((s32) arg0);
}
#else
void func_000636C8(M2C_UNK **arg0) {
    *arg0 = &D_000A03C8;
    _ZN14Class_000A1E50D2Ev((s32) arg0);
}
#endif

#if FW_VERSION == 260 || FW_VERSION >= 301
void func_000636F0(M2C_UNK **arg0) {
    *arg0 = &D_000A03C8;
    func_00080478((s32) arg0);
}
#else
void func_000636F0(M2C_UNK **arg0) {
    *arg0 = &D_000A03C8;
    _ZN14Class_000A1E50D2Ev((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063718);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 301 && FW_VERSION < 350)
void func_00063718(M2C_UNK **arg0) {
    *arg0 = &D_000A03C8;
    func_00080478((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 301
void func_00063718(M2C_UNK **arg0) {
    *arg0 = &D_000A03C8;
    _ZN14Class_000A1E50D2Ev((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00062B48);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005090C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A03C8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A04F0);

__asm__(".globl _ZTV14Class_000A04F0\n_ZTV14Class_000A04F0 = D_000A04F0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094B18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A08B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094B58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094B68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094BC0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050DE8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063008);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063074);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000630E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063118);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063150);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063190);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000637F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000638DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D1E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000639D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063A34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063A90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063AEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063B48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063BAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063C10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063C74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063CD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063D34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063D98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063DFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063E60);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063E7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063EE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063F44);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063F7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063FB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063FF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006446C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D248);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A04F0);

__asm__(".globl _ZTV14Class_000A04F0\n_ZTV14Class_000A04F0 = D_000A04F0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D278);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D280);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D288);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D290);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D298);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D2A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D2A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064548);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000645A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064600);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006465C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000646B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006471C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064780);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000647E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064840);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000648A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064908);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064924);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064A00);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0388);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063750);

s32 func_00063C04(void) {
    return 0x80108F0F;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063C10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063C7C);

Class_000A0460::~Class_000A0460() {
    func_000643AC((s32) this);
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A03C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00063D98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000643AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064490);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006458C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000645E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064644);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000646A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000646FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064760);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000647C4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064828);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064884);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000793F4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000648E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006494C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000649B0);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007957C);
#endif

#if FW_VERSION >= 282
void func_00064A14(s32 arg0) {
    func_0004D564(arg0 + 0x10);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064A30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064A94);

Class_000A04C8::~Class_000A04C8() {
    func_000654E0();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064BA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0460);

__asm__(".globl _ZTV14Class_000A0460\n_ZTV14Class_000A0460 = D_000A0460 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065028);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065104);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065160);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000651BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065218);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065274);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000652D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006533C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000653A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000653FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065460);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007A050);
#endif

#if FW_VERSION >= 282
void func_000654C4(void) {
    func_000654E0();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000654E0);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000655BC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_000655BC(s32 arg0) {
    func_0004D564(arg0 + 0x10);
}
#endif

#if FW_VERSION < 330
Class_000A04F0::Class_000A04F0() {
    this->unk4 = 0;
    this->unk8 = 0;
}

Class_000A04F0::~Class_000A04F0() {
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064A94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064AF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064B4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064C48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064D44);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064E48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00064F88);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065080);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000652D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006579C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D308);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D368);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065B00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065BBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065DE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065E78);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065F34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066030);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000661C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006635C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006639C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000663E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066424);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000664A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006651C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000665A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066994);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066A08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066A94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066AF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066C04);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066DF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066ED0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066F4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067114);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067130);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000671E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D3A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D3F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071FC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000672F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067360);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000673C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000674B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000675A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000676A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D434);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D450);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000680F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000681F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006833C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000683E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006844C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000684B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068514);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068690);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006880C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068918);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068924);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D4D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068C20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068C5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068CB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068D0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068D6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009D550);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094B18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069124);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069170);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000691E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069244);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069350);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006935C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069558);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069574);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000695A0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050E6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050F04);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00050F9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00045954);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065650);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007A1F0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A04C8);

__asm__(".globl _ZTV14Class_000A04C8\n_ZTV14Class_000A04C8 = D_000A04C8 - 8\n");
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007A314);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007A5B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007A654);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_000B8A88D2Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_000B8A88D1Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_000B8A88D0Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007AA98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007ABD8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A04F0);

__asm__(".globl _ZTV14Class_000A04F0\n_ZTV14Class_000A04F0 = D_000A04F0 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006566C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000659E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065BB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065CEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065E28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065F68);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066060);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000662B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0524);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A052C);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000BA904);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0534);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A053C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0544);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A054C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0554);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A055C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0564);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A056C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0574);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A057C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0584);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A058C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066600);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007B6C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007B7C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C1D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007BA7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007BB54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C43C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C5D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C754);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B8A88);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007B6C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007B7C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066984);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066A40);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066C68);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007BA7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007BB54);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066CFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066DB8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066EB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006704C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000671CC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007BFA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000B8B20);

__asm__(".globl _ZTV14Class_000B8B20\n_ZTV14Class_000B8B20 = D_000B8B20 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C15C);

Class_000B8B20::~Class_000B8B20() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C21C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C33C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C498);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C550);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C5FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C638);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065BB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065CEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00081B84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0001BFC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066A40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065E28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066CFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00066DB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C9F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007D044);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00081C7C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006720C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067250);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067294);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067310);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006738C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067410);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067804);

s32 func_00067878(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    switch (arg2) {                                 /* irregular */
    default:
        var_v0 = 0;
        break;
    case 1:
        var_v0 = func_00067904(arg0, arg1);
        break;
    case 16:
        var_v0 = func_0001C038(arg0, arg1);
        break;
    case 9:
        var_v0 = func_00067968(arg0, arg1);
        break;
    case 8:
        var_v0 = func_00067A74(arg0, arg1);
        break;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067904);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067968);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067A74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067C60);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067D40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067DBC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067F84);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00067F84(struct Unk_func_00067F84_0 *arg0) {
    func_0004A830(arg0->unk14);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A05C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0628);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00067FA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068050);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000680D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068168);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000681D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068238);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068328);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068418);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0660);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A06B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068510);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00068F64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069060);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A06F4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0710);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000691AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069258);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000692BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069320);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007F5B4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069384);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069500);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007F794);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006967C);

s32 func_00069788(void) {
    return 0x80108F0F;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069794);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069A90);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00069A90(struct Unk_func_00069A90_0 *arg0) {
    func_0001B678();
    arg0->unk28 = 3;
    arg0->unk0 = &D_000A0810;
    arg0->unk54 = 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069ACC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069B24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069B7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0798);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069BDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069F94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069FE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A050);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A0B4);

s32 func_0006A1C0(void) {
    return 0x8000FFFF;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A1CC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A3C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0006A3C8(struct Unk_func_0006A3C8_0 *arg0) {
    func_0004A830(arg0->unk14);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A3E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A410);
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A43C);
#endif

#if FW_VERSION >= 282
void func_0006A43C(M2C_UNK **arg0) {
    *arg0 = &D_000A0870;
    func_0006A584((s32) arg0);
}
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000510AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000510D4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069654);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00065608);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069790);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005110C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005117C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000511EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051270);
#endif

#if FW_VERSION >= 282
void func_0006A464(M2C_UNK **arg0) {
    *arg0 = &D_000A0870;
    func_0006A584((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A48C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0006A48C(M2C_UNK **arg0) {
    *arg0 = &D_000A0870;
    func_0006A584((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A4C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A584);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A600);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A638);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0006A638(M2C_UNK **arg0) {
    *arg0 = &D_000A0880;
    func_0006A810((s32) arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A660);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0006A660(M2C_UNK **arg0) {
    *arg0 = &D_000A0880;
    func_0006A810((s32) arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A688);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069850);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000698B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000698E4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0006A688(M2C_UNK **arg0) {
    *arg0 = &D_000A0880;
    func_0006A810((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005137C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051384);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A6C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A728);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A754);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A780);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A7C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A810);

void func_0006A838(s32 **arg0) {
    *arg0 = &D_000A08B8;
    func_0004D60C(arg0);
}

void func_0006A860(s32 **arg0) {
    *arg0 = &D_000A08B8;
    func_0004D60C(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000514C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051588);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000460C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00046160);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0004D60C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005188C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000518CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005190C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051968);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000519C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051A9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051B10);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051B38);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051B60);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051B98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094BE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00051E5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000521BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094C40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094C58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005280C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00052858);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000528B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000528C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094CA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094CC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094D20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053188);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053308);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000533F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053484);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053594);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000535D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_00094D20D2Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_00094D20D1Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_00094D20D0Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053694);

Class_000A0870::Class_000A0870() {
}

Class_000A0870::~Class_000A0870() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053704);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094D54);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094D68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094D7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094D88);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053824);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053AB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053B30);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00053FC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054324);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094D9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094DA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094DA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094DA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094DAC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094DB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000544FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000545D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000549B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00054CF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055040);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005543C_v260);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000555FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055BA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055FA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00055FE0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000560E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000562A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005635C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056444);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056848);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000568B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056910);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056934);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_00094DD0D2Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_00094DD0D1Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", _ZN14Class_00094DD0D0Ev);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056A08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056A7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056AC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056B4C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056B88);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056BF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056C40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056C70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056CAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056D00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056D2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056D60);

Class_000A0880::~Class_000A0880() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056E1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056E64_v260);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056F3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056F90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056FBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00056FE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057024);

Class_00094E20::~Class_00094E20() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000570E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057130);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057218);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057258_v260);

Class_00094E50::~Class_00094E50() {
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A898);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_0006A898(struct Unk_func_0004D77C_0 *arg0) {
    s32 temp_v0;
    s32 var_a2;

    temp_v0 = func_0004D77C(arg0, 0x4000);
    var_a2 = temp_v0;
    if (temp_v0 >= 0) {
        var_a2 = 0x8000FFFF;
        if ((arg0->unkC != 0) && (arg0->unk10 == 0x4000)) {
            arg0->unk18 = func_0004D924(arg0, 0x10);
            arg0->unk1C = func_0004D924(arg0, 0x12);
            arg0->unk20 = func_0004D924(arg0, 0x14);
            arg0->unk24 = func_0004D924(arg0, 0x16);
            arg0->unk28 = func_0004D960(arg0, 0x18);
            var_a2 = 0;
        }
    }
    return var_a2;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000573BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005750C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057624);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A944);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A96C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069B24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069CB4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000576A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000576E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057728);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A994);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AB24);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AC48);
#else
void func_0006AC48(struct Unk_func_0006AC48_0 *arg0) {
    arg0->unk0 = &D_000A08F0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    sce_paf_private_memset((s32) ((u8 *)arg0 + 0x1C), 0, 6);
}
#endif

Class_000A08F0::~Class_000A08F0() {
}

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069E6C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000578E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000700D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057950_v260);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057990);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000579D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000701D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070210);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070248);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070290);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000702AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000702C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000702E4);

Class_000A0910::Class_000A0910() {
}
#endif

#if FW_VERSION >= 282
Class_000A0910::Class_000A0910() {
    this->unk4 = 0xFF;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006ACF4);
#endif

Class_000A0910::~Class_000A0910() {
}

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069EE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069F2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00069F74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000578E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A0B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A1BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A2C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A3D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A4DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A560);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A5E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A670);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A6A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A6D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A70C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A7E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A8A8);
#endif

#if FW_VERSION == 260
Class_000A1370::Class_000A1370() {
}

Class_000A1370::~Class_000A1370() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057C08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057CC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057D80);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070604);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000706C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00057FBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058038);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058078);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070950);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070A2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070AB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070AE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070B64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070BD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070C3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070CA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058570);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005869C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005884C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058A84);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058C0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058D00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00058EC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005903C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0005905C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00059074);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AD54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AD9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006ADE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AEF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AF24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B02C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B134);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B240);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B34C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B3D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B454);

s32 func_0006B4E0(struct Unk_func_0006B4E0_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_0006B4E0_temp_v1 **temp_v1;

    var_v0 = 0;
    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk18(temp_v1);
    }
    return var_v0;
}

s32 func_0006B514(struct Unk_func_0006B514_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_0006B514_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk8(temp_v1);
    }
    return var_v0;
}

s32 func_0006B548(struct Unk_func_0006B548_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_0006B548_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unkC(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B57C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B650);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B708);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0810);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0870);
#endif

#if FW_VERSION == 260
__asm__(".globl _ZTV14Class_000A0870\n_ZTV14Class_000A0870 = D_000A0870 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094DD0);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0880);
#endif

#if FW_VERSION == 260
__asm__(".globl _ZTV14Class_000A0880\n_ZTV14Class_000A0880 = D_000A0880 - 8\n");
#endif

#if FW_VERSION >= 271 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A08B8);
#endif

#if FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A08F0);

__asm__(".globl _ZTV14Class_000A08F0\n_ZTV14Class_000A08F0 = D_000A08F0 - 8\n");
#else
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094E20);

__asm__(".globl _ZTV14Class_00094E20\n_ZTV14Class_00094E20 = D_00094E20 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_00094E50);

__asm__(".globl _ZTV14Class_00094E50\n_ZTV14Class_00094E50 = D_00094E50 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0900);

#if FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0910);

__asm__(".globl _ZTV14Class_000A0910\n_ZTV14Class_000A0910 = D_000A0910 - 8\n");
#else
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A08F0);

__asm__(".globl _ZTV14Class_000A08F0\n_ZTV14Class_000A08F0 = D_000A08F0 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0918);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0920);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0928);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0938);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0940);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0948);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0950);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0958);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0960);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0968);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0970);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0978);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0980);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0988);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0990);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0994);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0998);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A099C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A09A4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A09AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A09B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A09C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A09CC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A09D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A09DC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A09E4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A09F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A09FC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A04);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A2C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A34);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A74);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A7C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A84);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0A98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0AA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0AA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0AB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0ABC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0AD0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0AE4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0AEC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0AF4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B14);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B2C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B38);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0B94);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0BA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0BAC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0BB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0BC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0BCC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0BD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0BE0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0BE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0BF0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0BFC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C08);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C2C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C38);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C4C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C5C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C64);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C88);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0C9C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0CA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0CB4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0CC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0CDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0CEC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0CF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D04);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D1C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D28);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D30);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D38);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D40);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D8C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0D94);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0DA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0DA8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0DB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0DB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0DC4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0DCC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0DDC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0DEC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0DF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0E00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0E0C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0E18);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0E24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0E30);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0E3C);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006A960);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AD20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006AE44);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DD90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B214);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B404);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B5F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B7C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B87C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B88C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B89C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B8B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B8C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B8D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B8EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B994);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BA3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BAB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BB18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BCAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BCF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00088648);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BD08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00088E00);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BD18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BD74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BD90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BDAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007834C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BE6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DDC8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE08);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE10_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE50);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DE98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BE94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BEA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BEBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BED0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BEEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BF08);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BF24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BF40);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BF5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000784BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BFE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C000);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C01C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C038);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C054);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0008B980);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0008B9A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0008BA74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C0C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C0E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C140);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C1A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C1F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C250);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C2AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C374);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C3A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CD78);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CDA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CE68);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CEB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CF00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DEB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DEB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D014);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007B5D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D0B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D0DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D104);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D13C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007B6EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DEF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D4F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D66C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D780);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D9BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D9C4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DF58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DF90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009DFA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DA54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DA70);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DA94);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C0B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DB14);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DB3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DB64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C178);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DC90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DEEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DF18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DF98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007C590);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E0E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E380);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007CD0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E7A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E890);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E940);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E984);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E9AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000700D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006EA18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006EA58);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006EA98);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000701D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070210);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070248);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070290);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000702AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000702C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000702E4);

Class_0009E040::Class_0009E040() {
}

Class_0009E040::~Class_0009E040() {
}

Class_000A1370::Class_000A1370() {
}

Class_000A1370::~Class_000A1370() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006ECD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006ED8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006EE48);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070604);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000706C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F084);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F100);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F140);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070950);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070A2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070AB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070AE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070B64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070BD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070C3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070CA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F628);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F754);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F904);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FB3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FCC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FDB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FF80);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000700F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070114);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007012C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006B7B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BB34);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BC24);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006BFB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C168);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C318);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C4D8);

s32 func_0006C594(s32 arg0) {
    return (arg0 & 0xFFE0) == 0xFFE0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C5A4);

s32 func_0006C5B4(s32 arg0) {
    return (4 - __builtin_allegrex_ext(arg0, 3, 2)) & 0xFF;
}

s32 func_0006C5C8(s32 arg0) {
    return (4 - __builtin_allegrex_ext(arg0, 0x13, 2)) & 0xFF;
}

s32 func_0006C5DC(s32 arg0) {
    return (4 - __builtin_allegrex_ext(arg0, 1, 2)) & 0xFF;
}

s32 func_0006C5F0(s32 arg0) {
    return (4 - __builtin_allegrex_ext(arg0, 0x11, 2)) & 0xFF;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C604);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C6AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C754);

s32 func_0006C7C8(s32 arg0) {
    s32 temp_s0_2;
    s32 temp_s1;
    u32 temp_s0;

    temp_s0_2 = func_0006C754();
    temp_s0 = temp_s0_2 * func_0006C604(arg0);
    temp_s1 = __builtin_allegrex_ext(arg0, 9, 1);
    return ((u32) (temp_s0 / func_0006C6AC(arg0)) >> 3) + temp_s1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C830);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006C9C4);

void func_0006CA08(struct Unk_func_0006CA08_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CA14);

void func_0006CA20(void) {
}

void func_0006CA28(void) {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CA30);

void func_0006CA8C(s32 *arg0) {
    func_0006C604(*arg0);
}

void func_0006CAA8(s32 *arg0) {
    func_0006C6AC(*arg0);
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1050);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CAC4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CB20);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_0006CB20(struct Unk_func_0006CB20_0 *arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_0006CAC4(arg1) != 0) {
        sce_paf_private_memcpy(arg0, arg1, 0x10);
        arg0->unk10 = 1;
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CB84);

s32 func_0006CBAC(struct Unk_func_0006CBAC_0 *arg0) {
    return (arg0->unk4 << 8) | arg0->unk5;
}

s32 func_0006CBC0(struct Unk_func_0006CBC0_0 *arg0) {
    return (arg0->unk6 << 8) | arg0->unk7;
}

s32 func_0006CBD4(struct Unk_func_0006CBD4_0 *arg0) {
    return (arg0->unk8 << 8) | arg0->unk9;
}

void func_0006CBE8(s32 arg0) {
    func_00022944(arg0 + 0xA);
}

void func_0006CC04(s32 arg0) {
    func_00022944(arg0 + 0xE);
}

void func_0006CC20(s32 arg0) {
    func_00022A0C(arg0 + 0x12);
}

void func_0006CC3C(s32 arg0) {
    func_00022A0C(arg0 + 0x14);
}

void func_0006CC58(s32 arg0) {
    func_00022A0C(arg0 + 0x16);
}

void func_0006CC74(s32 arg0) {
    func_00022A0C(arg0 + 0x18);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CC90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CCFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CD18);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CD34);

void func_0006CD50(s32 arg0) {
    func_0006CBE8(arg0);
}

void func_0006CD6C(s32 arg0) {
    func_0006CC04(arg0);
}

void func_0006CD88(s32 arg0) {
    func_0006CC20(arg0);
}

void func_0006CDA4(s32 arg0) {
    func_0006CC3C(arg0);
}

void func_0006CDC0(s32 arg0) {
    func_0006CC58(arg0);
}

void func_0006CDDC(s32 arg0) {
    func_0006CC74(arg0);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CDF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CEA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CF50);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006CFC8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D040);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D0BC);

s32 func_0006D150(struct Unk_func_0006D150_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_0006D150_temp_v1 **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unkC(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006D184);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DA6C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1088);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A10C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A10D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1110);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1118);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1158);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1160);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1168);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1170);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1178);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DB80);

s32 func_0006DD2C(s32 arg0) {
    return func_00089D1C(arg0 + 0x14, arg0 + 0x48, arg0 + 0x13C, arg0 + 0x170) != 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DD5C);

s32 func_0006DE08(s32 arg0, s32 *arg1, s32 *arg2) {
    *arg1 = func_000877F8(arg0 + 0x13C);
    *arg2 = 0;
    return 1;
}

s32 func_0006DE48(s32 arg0, s32 *arg1, s32 *arg2) {
    *arg1 = func_00086804(arg0 + 0x170);
    *arg2 = 0;
    return 1;
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1188);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1194);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A119C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A11A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A11B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DE88);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006DF88);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E538);

s32 func_0006E5BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 var_v1;
    void *temp_s1;

    temp_s1 = arg0 + 0x70;
    var_v1 = 0;
    if (func_00086B2C(temp_s1) == 0) {
        *arg4 = 0x1804;
    } else {
        var_v1 = func_0006E538(arg0, (s32) temp_s1, arg1, arg2, arg3, (s32) arg4);
    }
    return var_v1;
}

s32 func_0006E65C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 var_v1;
    void *temp_s1;

    temp_s1 = arg0 + 0xD0;
    var_v1 = 0;
    if (func_00086B2C(temp_s1) == 0) {
        *arg4 = 0x1804;
    } else {
        var_v1 = func_0006E538(arg0, (s32) temp_s1, arg1, arg2, arg3, (s32) arg4);
    }
    return var_v1;
}

s32 func_0006E6FC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 var_v1;
    void *temp_s1;

    temp_s1 = arg0 + 0xA0;
    var_v1 = 0;
    if (func_00086B2C(temp_s1) == 0) {
        *arg4 = 0x1804;
    } else {
        var_v1 = func_0006E538(arg0, (s32) temp_s1, arg1, arg2, arg3, (s32) arg4);
    }
    return var_v1;
}

s32 func_0006E79C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 var_v1;
    void *temp_s1;

    temp_s1 = arg0 + 0x100;
    var_v1 = 0;
    if (func_00086B2C(temp_s1) == 0) {
        *arg4 = 0x1804;
    } else {
        var_v1 = func_0006E538(arg0, (s32) temp_s1, arg1, arg2, arg3, (s32) arg4);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E83C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E8C0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E910);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0006E910(M2C_UNK **arg0) {
    *arg0 = &D_000A1210;
    music_common_7DBFD08B();
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E938);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0006E938(M2C_UNK **arg0) {
    *arg0 = &D_000A1210;
    music_common_7DBFD08B();
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E960);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0006E960(M2C_UNK **arg0) {
    *arg0 = &D_000A1210;
    music_common_7DBFD08B();
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E998);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A11D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006E9DC);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000BA070);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006ED20);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006EE7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006EF78);

void func_0006F18C(void) {
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1210);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F194);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000BA0D0);
#endif

#if FW_VERSION >= 282
void func_0006F224(void) {
    func_0006FEA8();
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F240);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F264);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F2A4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F2E4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0006F2E4(M2C_UNK **arg0) {
    *arg0 = &D_000A1270;
    music_common_7DBFD08B();
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F30C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0006F30C(M2C_UNK **arg0) {
    *arg0 = &D_000A1270;
    music_common_7DBFD08B();
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F334);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0006F334(M2C_UNK **arg0) {
    *arg0 = &D_000A1270;
    music_common_7DBFD08B();
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F36C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F440);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F674);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F6A0);

void func_0006F720(s32 arg0) {
    sceAsfSeekTime(arg0 + 0x28);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F73C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006F858);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FACC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FE54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FEA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0006FF90);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070040);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070084);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000700AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000700D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070118);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070158);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070198);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000701D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070210);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070248);

void func_00070290(s32 arg0) {
    func_00070210(arg0 - 8);
}

void func_000702AC(s32 arg0) {
    func_00070210(arg0 - 4);
}

void func_000702C8(s32 arg0) {
    func_00070248(arg0 - 8);
}

void func_000702E4(s32 arg0) {
    func_00070248(arg0 - 4);
}

Class_0009E040::Class_0009E040() {
}

Class_0009E040::~Class_0009E040() {
}

Class_000A1370::Class_000A1370() {
}

Class_000A1370::~Class_000A1370() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000703D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007048C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070548);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070604);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000706C0);

s32 func_00070784(struct Unk_func_00070784_0 *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if ((arg0->unk14 >= 0) && (func_000535DC((u8 *)arg0 + 0xC) != 0)) {
        if ((func_00052AC4((u8 *)arg0 + 4) != 0) && (func_000535DC((u8 *)arg0 + 0x2C) != 0)) {
            var_s1 = func_00052AC4((u8 *)arg0 + 0x24) != 0;
        }
    }
    return var_s1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070800);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070840);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070950);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070A2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070AB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070AE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070B64);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070BD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070C3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070CA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070D28);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00070E54);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071004);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007123C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000713C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000714B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071680);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000717F4);

s32 func_00071814(void) {
    return (D_000A55FC != 0) ? 0 : 0x8010961D;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007182C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1270);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A12A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A12BC);
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A12E0);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_0009E040);

__asm__(".globl _ZTV14Class_0009E040\n_ZTV14Class_0009E040 = D_0009E040 - 8\n");
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A0910);

__asm__(".globl _ZTV14Class_000A0910\n_ZTV14Class_000A0910 = D_000A0910 - 8\n");
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1358);

__asm__(".globl _ZTV14Class_0009E040\n_ZTV14Class_0009E040 = D_000A1358 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1370);

__asm__(".globl _ZTV14Class_000A1370\n_ZTV14Class_000A1370 = D_000A1370 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1380);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A139C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A13B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A13D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A13F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071838);

void func_000718EC(void) {
    func_00071838(1, 0xFFFF);
}

void func_0007190C(void) {
    func_00071838(0, 0xFFFF);
}

Class_000A1490::Class_000A1490() {
}

Class_000A1490::~Class_000A1490() {
}

M2C_UNK *func_00071994(void) {
    return &D_000A5628;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000719A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071CE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071DA0);

void func_00071E1C(void) {
    func_00071DA0(1, 0xFFFF);
}

void func_00071E3C(void) {
    func_00071DA0(0, 0xFFFF);
}

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1450);

INCLUDE_RODATA("nonmatchings/music_main_plugin_02EE90", D_000A1490);

__asm__(".globl _ZTV14Class_000A1490\n_ZTV14Class_000A1490 = D_000A1490 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071E5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071EE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00071F74);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_0007211C);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000723BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000724B4);

s32 func_000725B4(struct Unk_func_000725B4_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk7C != 0) {
        var_v1 = func_000505F8((u8 *)arg0 + 4) != 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000725F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_000727D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_02EE90", func_00072A34);
