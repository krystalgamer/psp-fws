#include "common.h"
#include "music_main_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002EE90);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002EF08);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002EF90);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F268);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F318);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F4F0);

s32 func_0002F5E8(void) {
    return func_0002F60C() == 2;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F60C);

s32 func_0002F644(void) {
    if (D_000A505C != 0) {

    } else {
        func_0002F680();
    }
    return D_000A5064;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F680);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F6F8);

s32 func_0002F744(void) {
    D_000A505C = 0;
    D_000A5060 = 0;
    D_000A5064 = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F764);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F7D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F854);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F8D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002F948);

void func_0002FA94(s32 arg0) {
    func_0002FACC(arg0, 1);
}

void func_0002FAB0(s32 arg0) {
    func_0002FACC(arg0, 0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002FACC);

void func_0002FB70(s32 arg0) {
    func_0002FBA8(arg0, 1);
}

void func_0002FB8C(s32 arg0) {
    func_0002FBA8(arg0, 0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002FBA8);

s32 func_0002FC3C(s32 arg0) {
    return arg0 < 8;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002FC44);

void func_0002FCD0(void) {
}

void func_0002FCD8(void) {
}

void func_0002FCE0(void) {
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002FCE8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009C970);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009C9D0);

M2C_UNK *func_0002FDDC(void) {
    return "ms0:";
}

M2C_UNK *func_0002FDE8(void) {
    return "/HIFI";
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002FDF4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002FE44);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002FE94);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002FEB8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0002FFCC);

void func_00030068(void) {
    sceIoDclose();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030084);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003015C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030204);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003024C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000302D4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003031C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030438);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030640);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000306D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000307A0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000307C8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030830);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030A38);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030A68);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030C10);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030D4C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030DC0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030DF0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030DFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030E24);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00030FD0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031348);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000313E4);

void func_00031508(void) {
    func_000313E4();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031524);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031540);

void func_0003160C(void) {
    sceVshBridge_5BBB35E4();
}

void func_00031628(void) {
    func_0003160C();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031644);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CA88);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CA9C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031660);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CAC4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CAD8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CAE0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CAE8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CAF0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CAF8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CB00);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031858);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000319E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031A94);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031C38);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031DDC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031F0C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00031FB0);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000320E4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003237C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000324F8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000325F4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00032698);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000327A4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000327CC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000327E4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003285C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CC10);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CC58);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CC70);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CC74);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000328D8);

s32 func_00032B0C(s32 arg0) {
    func_0005BAA0();
    func_0005BB90();
    func_00033878(0, (s32) &D_000A5074);
    func_0005BB90();
    func_0005CD7C();
    func_000319E0(arg0, 0);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00032B68);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CC88);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CCA0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CCAC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CCB8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CCC4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CCE0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00032EF4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003309C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CD24);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CD30);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00033264);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000333CC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003341C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00033590);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000335E8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000337A8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00033878);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000339C8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00033AC0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00033B34);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00033CD4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00033E64);

void func_00033F58(void) {
    if (M2C_FIELD(&D_000A51D4, s32 *, 0) != 1) {

    } else {
        M2C_FIELD(&D_000A51D4, M2C_UNK (**)(s32, s32), 0x14)(M2C_FIELD(&D_000A51D4, s32 *, 4), func_0002FACC(M2C_FIELD(&D_000A51D4, s32 *, 8), M2C_FIELD(&D_000A51D4, s32 *, 0xC)));
    }
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00033FAC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034010);

void func_000340F0(void *arg0, struct Unk_func_000340F0_1 *arg1) {
    void *sp0;
    u8 temp_s0;
    u8 temp_v0;

    temp_s0 = arg1->unk34C;
    M2C_FIELD(arg0, s32 *, 0x114) = (s32) ((arg1->unk18 << 0x18) | (arg1->unk19 << 0x10) | (arg1->unk1A << 8) | arg1->unk1B);
    func_000320E4((s32) arg1, &sp0, (s32) (arg0 + 0x134));
    M2C_FIELD(arg0, s8 *, 0x12E) = 0;
    M2C_FIELD(arg0, u8 *, 0x12C) = sp0;
    if (func_0002FC3C((s32) sp0) != 0) {
        M2C_FIELD(arg0, s8 *, 0x12E) = 1;
    }
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x12C);
    M2C_FIELD(arg0, s8 *, 0x12D) = 0;
    if (temp_v0 < 8U) {
        M2C_FIELD(arg0, s8 *, 0x12D) = (s8) (temp_s0 >> 7);
    }
    func_000327A4((s32) (arg0 + 0x122), (s32) (arg0 + 0x120), (s32) temp_v0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CD90);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000341A4);

s32 func_000343A4(void *arg0) {
    func_0005C5C0(M2C_FIELD(arg0, u8 *, 0x12C), M2C_FIELD(arg0, u8 *, 0x12D), arg0 + 0x134);
    M2C_FIELD(arg0, u16 *, 0x15C) = (u16) (M2C_FIELD(arg0, u16 *, 0x15C) | 8);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000343E4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034434);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034580);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000345E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034704);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034BF8);

s32 func_00034C20(void) {
    return D_000A5190;
}

u8 func_00034C2C(void) {
    return D_000A51A0;
}

u8 func_00034C38(void) {
    return D_000A5078;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034C44);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034CEC);

s32 func_00034E30(void) {
    return 0;
}

s32 func_00034E38(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034E40);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034ED4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034F58);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00034FD8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035044);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000350D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035144);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000351D4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035248);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000352D4);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035360);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000353EC);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035478);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000354E8);

s32 func_00035534(void) {
    return 0;
}

s32 func_0003553C(void) {
    return 0;
}

s32 func_00035544(void) {
    return 0;
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CE54);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CE84);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CE90);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CE9C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CEA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CEB4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CEC0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CED4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CEE8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CEF8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CF04);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CF14);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CF28);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CF38);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CF48);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CF58);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CF68);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CF78);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CF88);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CF98);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CFA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CFB8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CFC8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CFD8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CFEC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009CFFC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D010);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D024);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D038);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003554C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035610);

void func_00035690(void) {
}

void func_00035698(void) {
}

void func_000356A0(void) {
}

void func_000356A8(void) {
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000356B0);

s32 func_000357C4(void) {
    func_000356B0(0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000357E4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003586C);

void func_000358F4(M2C_UNK **arg0) {
    *arg0 = &D_0009D0E0;
    func_00035F10();
    func_00006DC8((s32) arg0);
}

void func_0003592C(M2C_UNK **arg0) {
    *arg0 = &D_0009D0E0;
    func_00035F10();
    func_00006DC8((s32) arg0);
}

void func_00035964(M2C_UNK **arg0) {
    *arg0 = &D_0009D0E0;
    func_00035F10();
    func_00006DC8((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D0A0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000359A4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035B74);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035BF8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035C80);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035CE4);

s32 func_00035F10(void) {
    s32 var_v0;

    var_v0 = D_000A51F0;
    if (var_v0 != 0) {
        var_v0 = scePaf_79493F8F(0, var_v0);
        D_000A51F0 = 0;
    }
    return var_v0;
}

s32 func_00035F50(void) {
    return 0x400;
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D0E0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D0F0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D110);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D130);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D150);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D160);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D170);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D188);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D1A0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D1B4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D1C8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D1E0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D1F8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D214);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D230);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D24C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D26C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D278);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D298);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D29C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D2BC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D2D4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D2F0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00035F58);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000365A4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00036D50);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00036EB0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00037018);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000370FC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003719C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000373B8);

void func_00037528(s32 arg0, s32 arg1) {
    void *sp0;
    sceVshCommonGui_6C81492F(&sp0, M2C_FIELD(((M2C_FIELD((arg1 + arg0), u8 *, 0x20) * 4) + arg0), s32 *, 0x94));
    func_00003414(&sp0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00037564);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00037864);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000378E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00037C14);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00037D64);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00037E5C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00038014);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000382C8);

s32 func_00038320(void) {
    return 0x101;
}

void func_00038328(s32 arg0) {
    func_00013F9C(D_000A424C, arg0, 1);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D390);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D3A0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D3AC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D3B8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D3C4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D3D0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D3E0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D3F0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D3FC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D408);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D414);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D424);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D434);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D444);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D44C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D458);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D464);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D470);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D47C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D488);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D494);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D4A0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D4AC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D4B8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D4C0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D4CC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D4D8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D4E4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D4F0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D4FC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D508);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D514);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D524);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D534);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D53C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D544);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D550);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D558);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D560);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D56C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D574);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D580);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D588);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D594);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D59C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D5A4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D5B0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D5B8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D5C4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D5D8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D5E8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D600);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D60C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D610);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D628);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D634);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D63C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D644);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00038350);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003874C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00038BA8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00038C08);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00038C70);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00038CC0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00038D0C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00038E3C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00038F9C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003906C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00039188);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00039384);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003980C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00039BAC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00039E1C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003A0B4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003A444);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003A72C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003AB34);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003AE84);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003B00C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003B2F8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003B71C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003BE48);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003C2A8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003C3F8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003C4F8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003C558);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003C628);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003C768);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003C804);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003C8C8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003CBFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003D078);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003D160);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003D210);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003D2E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003DB64);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003E79C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003E85C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003E8D4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003F000);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003F090);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0003F624);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000400D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004060C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00040758);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000408FC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00040A0C);

void func_00040BC8(s32 *arg0) {
    func_00013F9C(D_000A424C, *arg0, 1);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00040BF4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00040CF4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00040D80);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00040E4C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00040EB0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000410E8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041190);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041278);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041384);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041474);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000414B4);

void ***func_00041530(void ***arg0, struct Unk_func_00041530_1 *arg1, void **arg2) {
    void **temp_s0;
    struct Unk_func_00041530_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    *temp_s0 = temp_v1->unk0;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
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
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041600);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004165C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000416EC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041748);

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
            scePaf_7EC15225(var_v0);
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
            scePaf_7EC15225(var_v0);
            var_v1 = arg0->unk0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    arg0->unk4 = 0;
    temp_v0 = arg0->unk0;
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041890);

s32 func_00041954(void) {
    return 0x100;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004195C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041998);

void func_000419D4(void **arg0) {
    void *temp_s0;
    struct Unk_func_000419D4_var_a0 *var_a0;
    struct Unk_func_000419D4_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
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
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D760);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D770);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D784);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D798);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D7B8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D7BC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D7C4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D7DC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D7E0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D7FC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D818);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D830);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D84C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D86C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D880);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D89C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D8B4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D8D8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D8EC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D90C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041A84);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041BA8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041CCC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041D98);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041E64);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00041F38);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00042618);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00042740);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00042BA0);

s32 func_00042D04(void) {
    return 0x104;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00042D0C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D960);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D970);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D984);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D99C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D9B4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00042D64);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00042F84);

void func_000431E0(M2C_UNK **arg0) {
    *arg0 = &D_0009D9E8;
    sceVshCommonGui_441D55D7(0);
    func_00006DC8((s32) arg0);
}

void func_0004321C(M2C_UNK **arg0) {
    *arg0 = &D_0009D9E8;
    sceVshCommonGui_441D55D7(0);
    func_00006DC8((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_00043260(void) {
    return 0x202;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00043268);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00043424);

void func_00043644(struct Unk_func_00043644_0 *arg0) {
    arg0->unk0 = &D_0009DB80;
    func_000079AC();
    sceVshCommonGui_441D55D7(0);
    scePaf_F47CA1C2(scePaf_8AB03D91(arg0->unk8, 1), 0x2000C, 0, 0);
    func_00006DC8((s32) arg0);
}

void func_000436A8(struct Unk_func_000436A8_0 *arg0) {
    arg0->unk0 = &D_0009DB80;
    func_000079AC();
    sceVshCommonGui_441D55D7(0);
    scePaf_F47CA1C2(scePaf_8AB03D91(arg0->unk8, 1), 0x2000C, 0, 0);
    func_00006DC8((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D9E8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D9F8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009D9FC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00043714);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004396C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00043E94);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DA20);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DA30);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000441E4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00044C4C);

s32 func_00045088(void) {
    return 0x103;
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DA90);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DAB4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DACC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DAE0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DAF8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DB00);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DB80);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045090);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000450E8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045168);

void func_000451E8(M2C_UNK **arg0) {
    *arg0 = &D_0009DE10;
    func_000456F4((s32) arg0);
    func_0004A310((s32) arg0);
}

void func_00045220(M2C_UNK **arg0) {
    *arg0 = &D_0009DE10;
    func_000456F4((s32) arg0);
    func_0004A310((s32) arg0);
}

void func_00045258(M2C_UNK **arg0) {
    *arg0 = &D_0009DE10;
    func_000456F4((s32) arg0);
    func_0004A310((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DB98);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DBA4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DBB0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DBBC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DBC8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DBD8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DBE8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DBF4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC00);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC0C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC1C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC2C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC3C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC44);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC50);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC5C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC68);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC74);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC8C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DC98);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DCA4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DCB0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DCB8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DCC4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DCD0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DCDC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DCE8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DCF4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD00);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD0C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD1C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD2C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD34);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD3C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD48);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD50);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD58);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD64);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD6C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD78);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD8C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD94);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DD9C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DDA8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045298);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045334);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045484);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000454F0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045558);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000455BC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045620);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045684);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000456F4);

s32 func_00045798(void) {
    return 0;
}

s32 func_000457A0(void) {
    return 0;
}

s32 func_000457A8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000457B0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045848);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000458E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045954);

void func_000459C8(M2C_UNK **arg0) {
    *arg0 = &D_0009DE38;
    func_00065608();
}

void func_000459F0(M2C_UNK **arg0) {
    *arg0 = &D_0009DE38;
    func_00065608();
}

void func_00045A18(M2C_UNK **arg0) {
    *arg0 = &D_0009DE38;
    func_00065608();
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045A50);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045AC0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045B30);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045BB4);

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
    scePaf_4E67BB08(arg0);
}

s32 func_00045CC0(struct Unk_func_00045CC0_0 *arg0) {
    return arg0->unk1C;
}

s32 func_00045CC8(struct Unk_func_00045CC8_0 *arg0) {
    return arg0->unk20;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045CD0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045D28);

void func_00045D80(M2C_UNK **arg0) {
    *arg0 = &D_0009DE60;
    func_00065608();
}

void func_00045DA8(M2C_UNK **arg0) {
    *arg0 = &D_0009DE60;
    func_00065608();
}

void func_00045DD0(M2C_UNK **arg0) {
    *arg0 = &D_0009DE60;
    func_00065608();
    scePaf_4E67BB08(arg0);
}

void func_00045E08(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00045F40(arg0, arg1, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = arg5;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009DE70;
    M2C_FIELD(arg0, s32 *, 4) = 6;
}

void func_00045E60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00045F40(arg0, arg1, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = arg5;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009DE70;
    M2C_FIELD(arg0, s32 *, 4) = 6;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045EB8);

void func_00045EE0(M2C_UNK **arg0) {
    *arg0 = &D_0009DE70;
    func_000461F8((s32) arg0);
}

void func_00045F08(M2C_UNK **arg0) {
    *arg0 = &D_0009DE70;
    func_000461F8((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00045F40);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00046004);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000460C8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00046160);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000461F8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004637C);

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
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DE10);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DE38);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DE48);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DE60);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DE70);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DE88);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DE90);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00046478);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DEB4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004673C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DEFC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DF14);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DF2C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DF44);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DF48);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DF5C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00046A38);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00046BDC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00047224);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00047270);

s32 func_000472CC(void) {
    return 0x8000FFFF;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000472D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00047B98);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00047C1C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00047D98);

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
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009DFA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E000);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00047EB0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000487CC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00048818);

s32 func_00048874(void) {
    return 0x80108F0F;
}

s32 func_00048880(void) {
    return 0x80108F0F;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004888C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000488F4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004895C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00048A4C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00048B3C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E098);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E0F0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E100);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00048C34);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000495B8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049740);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004983C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E160);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049988);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049A24);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049A88);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049AEC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049B50);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049D4C);

s32 func_00049EC8(void) {
    return 0x80108F0F;
}

s32 func_00049ED4(void) {
    return 0x80108F0F;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049EE0);

void func_00049EF8(struct Unk_func_00049EF8_0 *arg0) {
    arg0->unk0 = &D_0009E218;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049F10);

void func_00049F38(M2C_UNK **arg0) {
    *arg0 = &D_0009E218;
    func_00049F98();
}

void func_00049F60(M2C_UNK **arg0) {
    *arg0 = &D_0009E218;
    func_00049F98();
    scePaf_4E67BB08(arg0);
}

void func_00049F98(void) {
    func_00049FB4();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049FB4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00049FFC);

void func_0004A044(s32 arg0) {
    func_00049EE0(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009E470;
    M2C_FIELD(arg0, s32 *, 4) = 3;
}

void func_0004A07C(s32 arg0) {
    func_00049EE0(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009E470;
    M2C_FIELD(arg0, s32 *, 4) = 3;
}

void func_0004A0B4(M2C_UNK **arg0) {
    *arg0 = &D_0009E470;
    func_00049F10((s32) arg0);
}

void func_0004A0DC(M2C_UNK **arg0) {
    *arg0 = &D_0009E470;
    func_00049F10((s32) arg0);
}

void func_0004A104(M2C_UNK **arg0) {
    *arg0 = &D_0009E470;
    func_00049F10((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004A13C);

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

    temp_v0 = scePaf_3586BE05(0x40, arg1);
    *arg0 = temp_v0;
    if (temp_v0 == 0) {

    } else {
        scePaf_6829D7AF(temp_v0, 0, arg1);
    }
    return *arg0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004A25C);

void func_0004A298(s32 arg0) {
    func_0001B1D4(arg0);
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009E488;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

void func_0004A2D4(s32 arg0) {
    func_0001B1D4(arg0);
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009E488;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004A310);

void func_0004A338(M2C_UNK **arg0) {
    *arg0 = &D_0009E488;
    func_0001B28C((s32) arg0);
}

void func_0004A360(M2C_UNK **arg0) {
    *arg0 = &D_0009E488;
    func_0001B28C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_0004A398(void) {
    return 0;
}

void func_0004A3A0(M2C_UNK **arg0) {
    *arg0 = &D_0009E528;
}

void func_0004A3B0(M2C_UNK **arg0) {
    *arg0 = &D_0009E528;
}

void func_0004A3C0(M2C_UNK **arg0) {
    *arg0 = &D_0009E528;
}

void func_0004A3D0(M2C_UNK **arg0) {
    *arg0 = &D_0009E528;
}

void func_0004A3E0(M2C_UNK **arg0) {
    *arg0 = &D_0009E528;
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E1B8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E218);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E228);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E234);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E240);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E24C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E258);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E268);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E278);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E284);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E290);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E29C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E2AC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E2BC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E2CC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E2D4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E2E0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E2EC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E2F8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E304);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E310);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E31C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E328);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E334);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E340);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E348);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E354);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E360);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E36C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E378);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E384);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E390);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E39C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E3AC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E3BC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E3C4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E3CC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E3D8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E3E0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E3E8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E3F4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E3FC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E408);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E410);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E41C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E424);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E42C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E438);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E440);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E470);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E488);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004A408);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004A528);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004A7BC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004A830);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004ACB4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E4BC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E4D0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E4E4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E4F0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004B014);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004B1EC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004B2C4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004B6A0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004B9E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004BD20);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004C114);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004C2D4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004C86C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004CC6C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004CCA4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004CD90);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004CF60);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D018);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D0FC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D500);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D564);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D5C4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D5E8);

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

void func_0004D67C(M2C_UNK **arg0) {
    *arg0 = &D_0009E538;
    func_0004D730((s32) arg0);
    func_0004D8AC(arg0);
    scePaf_4E67BB08(arg0);
}

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D730);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D800);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D83C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D8AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D8F4);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D9B4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004D9E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DA14);

void func_0004DA48(M2C_UNK **arg0) {
    *arg0 = &D_0009E558;
    func_0004DF4C((s32) arg0);
}

void func_0004DA70(M2C_UNK **arg0) {
    *arg0 = &D_0009E558;
    func_0004DF4C((s32) arg0);
}

void func_0004DA98(M2C_UNK **arg0) {
    *arg0 = &D_0009E558;
    func_0004DF4C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DAD0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DB18);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DBF0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DC44);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DC70);

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

void func_0004DD64(M2C_UNK **arg0) {
    *arg0 = &D_0009E588;
    func_0004DF4C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DD9C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DDE4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DECC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DF0C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004DF4C);

void func_0004DF74(s32 **arg0) {
    *arg0 = &D_0009E5B8;
    func_0004D60C(arg0);
}

void func_0004DF9C(s32 **arg0) {
    *arg0 = &D_0009E5B8;
    func_0004D60C(arg0);
    scePaf_4E67BB08(arg0);
}

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E070);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E1C0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E2DC);

void func_0004E310(M2C_UNK **arg0) {
    *arg0 = &D_0009E5E8;
    func_0004DF4C((s32) arg0);
}

void func_0004E338(M2C_UNK **arg0) {
    *arg0 = &D_0009E5E8;
    func_0004DF4C((s32) arg0);
}

void func_0004E360(M2C_UNK **arg0) {
    *arg0 = &D_0009E5E8;
    func_0004DF4C((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E398);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E3E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E4B8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E4DC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E500);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E5E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E5F8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E63C);

void func_0004E738(s32 arg0) {
    func_0004E4B8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009E628;
    M2C_FIELD(arg0, s32 *, 4) = 1;
}

void func_0004E770(M2C_UNK **arg0) {
    *arg0 = &D_0009E628;
    func_0004E500((s32) arg0);
}

void func_0004E798(M2C_UNK **arg0) {
    *arg0 = &D_0009E628;
    func_0004E500((s32) arg0);
}

void func_0004E7C0(M2C_UNK **arg0) {
    *arg0 = &D_0009E628;
    func_0004E500((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_0004E7F8(struct Unk_func_0004E7F8_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk18;
    return (temp_v1 == 0) ? 0 : (temp_v1 + 1);
}

void func_0004E808(s32 arg0) {
    func_0004E4B8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009E638;
    M2C_FIELD(arg0, s32 *, 4) = 2;
}

void func_0004E840(s32 arg0) {
    func_0004E4B8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009E638;
    M2C_FIELD(arg0, s32 *, 4) = 2;
}

void func_0004E878(M2C_UNK **arg0) {
    *arg0 = &D_0009E638;
    func_0004E500((s32) arg0);
}

void func_0004E8A0(M2C_UNK **arg0) {
    *arg0 = &D_0009E638;
    func_0004E500((s32) arg0);
}

void func_0004E8C8(M2C_UNK **arg0) {
    *arg0 = &D_0009E638;
    func_0004E500((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_0004E900(struct Unk_func_0004E900_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk18;
    return (temp_v1 == 0) ? 0 : (temp_v1 + 1);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004E910);

void func_0004E980(s32 arg0) {
    func_0004E4B8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009E648;
    M2C_FIELD(arg0, s32 *, 4) = 4;
}

void func_0004E9B8(s32 arg0) {
    func_0004E4B8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0009E648;
    M2C_FIELD(arg0, s32 *, 4) = 4;
}

void func_0004E9F0(M2C_UNK **arg0) {
    *arg0 = &D_0009E648;
    func_0004E500((s32) arg0);
}

void func_0004EA18(M2C_UNK **arg0) {
    *arg0 = &D_0009E648;
    func_0004E500((s32) arg0);
}

void func_0004EA40(M2C_UNK **arg0) {
    *arg0 = &D_0009E648;
    func_0004E500((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_0004EA78(struct Unk_func_0004EA78_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk18;
    return (temp_v1 == 0) ? 0 : (temp_v1 + 1);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004EA88);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004EAF8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004EB38);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004EB78);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004EBFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004EC80);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004ED0C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004EEDC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F13C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F26C);

void func_0004F300(M2C_UNK **arg0) {
    *arg0 = &D_0009E678;
}

void func_0004F310(M2C_UNK **arg0) {
    *arg0 = &D_0009E678;
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E504);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E508);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E50C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E510);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E514);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E51C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E528);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E538);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E558);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E588);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E5B8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E5E8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E618);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E628);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E638);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E648);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E658);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E678);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F338);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F3A8);

s32 func_0004F3D0(struct Unk_func_0004F3D0_0 *arg0) {
    return (arg0->unk4 + (arg0->unk3 << 8)) & 0xFFFF;
}

u8 func_0004F3E8(struct Unk_func_0004F3E8_0 *arg0) {
    return arg0->unk5;
}

void func_0004F3F0(s32 arg0) {
    func_0004F630(arg0 + 6);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F40C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F5DC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F630);

void func_0004F6A0(void) {
    func_00022944();
}

void func_0004F6BC(void) {
    func_000229A8();
}

s32 func_0004F6D8(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 6, 1);
}

s32 func_0004F6E0(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 7, 1);
}

s32 func_0004F6E8(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 5, 1);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F6F0);

s32 func_0004F6F8(s32 arg0) {
    return arg0 & 0xFF;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F700);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F7D8);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F88C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004F928);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004FA30);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004FB30);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004FBA8);

s32 func_0004FC6C(s32 arg0, s32 *arg1) {
    *arg1 = arg0 & 0xFF;
    return 1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004FC7C);

void func_0004FF50(struct Unk_func_0004FF50_0 *arg0) {
    arg0->unkA = 0;
}

void func_0004FF58(void) {
}

void func_0004FF60(void) {
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004FF68);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0004FFF8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050014);

void func_00050030(s32 arg0) {
    func_0004F3F0(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005004C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050070);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050094);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000500B8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000500DC);

void func_00050100(void) {
    func_0004F84C(func_0004FFF8());
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050124);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000501AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050234);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000502F4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000503B4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050470);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005052C);

void func_000505F0(struct Unk_func_000505F0_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000505F8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050674);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000506F8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005076C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000507C8);

s32 func_00050904(struct Unk_func_00050904_0 *arg0) {
    return arg0->unk1C == 1;
}

void func_00050914(M2C_UNK **arg0) {
    *arg0 = &D_0009EAD0;
}

void func_00050924(M2C_UNK **arg0) {
    *arg0 = &D_0009EAD0;
}

void func_00050934(M2C_UNK **arg0) {
    *arg0 = &D_0009EAD0;
}

void func_00050944(M2C_UNK **arg0) {
    *arg0 = &D_0009EAD0;
}

void func_00050954(M2C_UNK **arg0) {
    *arg0 = &D_0009EAD0;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005097C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000509D4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050A2C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050A94);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050AFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050B50);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050BA4);

void func_00050C00(struct Unk_func_00050C00_0 *arg0, s32 arg1) {
    arg0->unk3C = arg1;
}

void func_00050C08(struct Unk_func_00050C08_0 *arg0, s32 arg1) {
    arg0->unk40 = arg1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050C10);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00050D74);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005115C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000511B0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051204);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051248);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005128C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000512D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051314);

void func_00051360(struct Unk_func_00051360_0 *arg0, s32 arg1) {
    arg0->unk38 = arg1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051368);

s32 func_000513DC(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    func_000535E8(temp_s1);
    func_00052B7C(arg0 + 0xC, 4);
    func_00053624(temp_s1);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005142C);

void func_000516DC(s32 arg0) {
    func_000512D0(arg0 - 4);
}

void func_000516F8(s32 arg0) {
    func_00051314(arg0 - 4);
}

void func_00051714(s32 arg0) {
    func_0005142C(arg0 - 4);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051730);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005180C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009E9DC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EA00);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EA24);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EA4C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EA74);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EAA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EAD0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EAF0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EB60);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EBA8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005189C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051AAC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051D64);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051E0C);

void func_00051EBC(struct Unk_func_00051EBC_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
}

s32 func_00051EC4(void *arg0) {
    s32 var_a0;

    var_a0 = 0;
    if (func_000535DC(arg0 + 0x40) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x18) != 0;
        }
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051F0C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051F80);

void func_00051FE0(struct Unk_func_00051FE0_0 *arg0, s32 arg1) {
    arg0->unk38 = arg1;
}

s32 func_00051FE8(struct Unk_func_00051FE8_0 *arg0) {
    return arg0->unk3C;
}

void func_00051FF0(struct Unk_func_00051FF0_0 *arg0, s32 arg1) {
    arg0->unk3C = arg1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00051FF8);

u32 func_00052064(struct Unk_func_00052064_0 *arg0) {
    return (u32) ~arg0->unk20 >> 0x1F;
}

u32 func_00052074(struct Unk_func_00052074_0 *arg0) {
    return (u32) ~arg0->unk20 >> 0x1F;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052084);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052160);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052458);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052540);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052658);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005287C);

void func_00052898(s32 arg0, s32 arg1) {
    func_00051FF0(arg0 - 4, arg1);
}

void func_000528B4(s32 arg0) {
    func_00051FF8(arg0 - 4);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000528D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000528EC);

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

void func_00052978(struct Unk_func_00052978_0 *arg0, void *arg1) {
    arg0->unk0 = &D_0009EC60;
    arg0->unk4 = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
}

void func_000529BC(struct Unk_func_000529BC_0 *arg0, void *arg1) {
    arg0->unk0 = &D_0009EC60;
    arg0->unk4 = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
}

void func_00052A00(struct Unk_func_00052A00_0 *arg0) {
    arg0->unk0 = &D_0009EC60;
    sceKernelDeleteEventFlag(arg0->unk4);
}

void func_00052A28(struct Unk_func_00052A28_0 *arg0) {
    arg0->unk0 = &D_0009EC60;
    sceKernelDeleteEventFlag(arg0->unk4);
}

void func_00052A50(struct Unk_func_00052A50_0 *arg0) {
    arg0->unk0 = &D_0009EC60;
    sceKernelDeleteEventFlag(arg0->unk4);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052A8C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052AA4);

s32 func_00052ABC(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052AC4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052AD0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052B7C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052BB0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052BEC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052C4C);

void func_00052CAC(M2C_UNK **arg0) {
    *arg0 = &D_0009EC98;
}

void func_00052CBC(M2C_UNK **arg0) {
    *arg0 = &D_0009EC98;
}

void func_00052CCC(M2C_UNK **arg0) {
    *arg0 = &D_0009EC98;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052CF4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EBD8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EC60);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EC68);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EC6C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EC70);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EC74);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EC78);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EC7C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EC80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EC84);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00052D10);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000534C4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053510);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005352C);

void func_00053548(struct Unk_func_00053548_0 *arg0) {
    arg0->unk0 = &D_0009ECA8;
    sceKernelDeleteSema(arg0->unk4);
}

void func_00053570(struct Unk_func_00053570_0 *arg0) {
    arg0->unk0 = &D_0009ECA8;
    sceKernelDeleteSema(arg0->unk4);
}

void func_00053598(struct Unk_func_00053598_0 *arg0) {
    arg0->unk0 = &D_0009ECA8;
    sceKernelDeleteSema(arg0->unk4);
    scePaf_4E67BB08(arg0);
}

s32 func_000535D4(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000535DC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000535E8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053624);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053660);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053698);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000536D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053708);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053740);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053770);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000537A0);

void func_000537E0(s32 arg0) {
    func_00053770(arg0 - 4);
}

void func_000537FC(s32 arg0) {
    func_000537A0(arg0 - 4);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053818);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005387C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EC98);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009ECA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009ECB8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009ED30);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000538E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053A50);

s32 func_00053D2C(void *arg0) {
    s32 var_a0;

    var_a0 = 0;
    if (func_000535DC(arg0 + 0x2C) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x10) != 0;
        }
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053D74);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00053DF0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000540F0);

void func_00054338(M2C_UNK **arg0) {
    *arg0 = &D_0009EDA0;
}

void func_00054348(M2C_UNK **arg0) {
    *arg0 = &D_0009EDA0;
}

void func_00054358(M2C_UNK **arg0) {
    *arg0 = &D_0009EDA0;
}

void func_00054368(M2C_UNK **arg0) {
    *arg0 = &D_0009EDA0;
}

void func_00054378(M2C_UNK **arg0) {
    *arg0 = &D_0009EDA0;
    scePaf_4E67BB08(arg0);
}

void func_000543A0(M2C_UNK **arg0) {
    *arg0 = &D_0009EDE0;
}

void func_000543B0(M2C_UNK **arg0) {
    *arg0 = &D_0009EDE0;
}

void func_000543C0(M2C_UNK **arg0) {
    *arg0 = &D_0009EDE0;
}

void func_000543D0(M2C_UNK **arg0) {
    *arg0 = &D_0009EDE0;
}

void func_000543E0(M2C_UNK **arg0) {
    *arg0 = &D_0009EDE0;
    scePaf_4E67BB08(arg0);
}

void func_00054408(M2C_UNK **arg0) {
    *arg0 = &D_0009EDF8;
}

void func_00054418(M2C_UNK **arg0) {
    *arg0 = &D_0009EDF8;
}

void func_00054428(M2C_UNK **arg0) {
    *arg0 = &D_0009EDF8;
}

void func_00054438(M2C_UNK **arg0) {
    *arg0 = &D_0009EDF8;
}

void func_00054448(M2C_UNK **arg0) {
    *arg0 = &D_0009EDF8;
    scePaf_4E67BB08(arg0);
}

void func_00054470(M2C_UNK **arg0) {
    *arg0 = &D_0009EE10;
}

void func_00054480(M2C_UNK **arg0) {
    *arg0 = &D_0009EE10;
}

void func_00054490(M2C_UNK **arg0) {
    *arg0 = &D_0009EE10;
}

void func_000544A0(M2C_UNK **arg0) {
    *arg0 = &D_0009EE10;
}

void func_000544B0(M2C_UNK **arg0) {
    *arg0 = &D_0009EE10;
    scePaf_4E67BB08(arg0);
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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00054518);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00054620);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00054858);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00054928);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00054B28);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00054E08);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00054EE8);

void func_00054FD0(struct Unk_func_00054FD0_0 *arg0, s32 arg1) {
    arg0->unk1C = arg1;
}

s32 func_00054FD8(void *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x24) >= 0) && (func_000535DC(arg0 + 0x28) != 0)) {
        if ((func_00052AC4(arg0 + 0x30) != 0) && (func_000535DC(arg0 + 0x138) != 0)) {
            var_s1 = func_00052AC4(arg0 + 0x130) != 0;
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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00055084);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000550CC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005543C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00055500);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005558C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005561C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00055660);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009ED60);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EDA0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EDE0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EDF8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EE10);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EE38);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EE5C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EE80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EEA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EED0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000556CC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00055A70);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00055C9C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00055D84);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00055E54);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000562F4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00056300);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00056474);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00056738);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00056834);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00056BC0);

void func_00056D80(s32 arg0) {
    func_00054E08(arg0 - 4);
}

void func_00056D9C(s32 arg0) {
    func_00054EE8(arg0 - 4);
}

void func_00056DB8(s32 arg0) {
    func_00055D84(arg0 - 4);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00056DD4);

void func_00056E64(struct Unk_func_00056E64_0 *arg0) {
    if (sceKernelSetEventFlag(arg0->unk4, D_000A3D58) != 0) {

    } else {
        sceKernelExitDeleteThread(1);
    }
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00056EA0);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00056F24);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00056F94);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057004);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005707C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000570F4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057168);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000571DC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057258);

s32 func_00057458(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057460);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000575B4);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057824);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057890);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057928);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057950);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057A7C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057B50);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057C00);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057CB0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057D14);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057DFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057EEC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00057FAC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058014);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058048);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058138);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000581AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058288);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058398);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058428);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058490);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058500);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058544);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000585A4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000585E8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058654);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000586C0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058730);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005877C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058964);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000589D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058A24);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058C2C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058C54);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058D58);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058E48);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058F40);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058F90);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00058FEC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000590CC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000591AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000592BC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059374);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059438);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000594A8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005958C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005967C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000596B8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000596EC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005974C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000597A4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059828);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000598B0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059984);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000599D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059A24);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059A68);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059A9C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059AC4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059B18);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059BC0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059C68);

void func_00059C9C(void) {
    D_000A5248 = &D_000A5220;
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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059D30);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059D5C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059E08);

s32 func_00059EE0(s32 arg0) {
    return D_000A527C == func_0005B0CC(arg0 - 1);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059F10);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059F40);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EF40);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009EF70);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00059F70);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005A2A4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005A314);

s32 func_0005A3DC(s32 arg0) {
    void *sp0;
    s32 sp4;
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != D_000A524C.unk18) {
        func_0005B0A8(arg0, &sp0, &sp4);
        var_v0 = M2C_FIELD(D_000A5248, s32 (**)(s32, s32), 0xC)(sp4, sp0);
        if (var_v0 == 0) {
            D_000A524C.unk18 = arg0;
        }
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005A448);

s32 func_0005A75C(s32 arg0) {
    return ((arg0 ^ 5) != 0) ? arg0 : 1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005A76C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005A9AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005AABC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005AC80);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005AD30);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005ADB8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005AEB4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005AF04);

void func_0005AF48(s32 arg0) {
    func_0001E96C(func_00011C50(), arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005AF78);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005AFB0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B008);

void func_0005B0A8(s32 arg0, s32 *arg1, s32 *arg2) {
    if (arg0 >= 0) {
        *arg1 = arg0;
        *arg2 = 0;
        return;
    }
    *arg1 = -arg0;
    *arg2 = 1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B0CC);

s32 func_0005B140(s32 arg0) {
    D_000A52BC = 1;
    D_000A52B8 = arg0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B15C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B194);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B1CC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B204);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B27C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B2E8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B34C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B384);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B3C4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B404);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B474);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B4BC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B504);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B53C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B574);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B5AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B5F4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B640);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B6AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B708);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B750);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B788);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B7E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B828);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B860);

s32 func_0005B8A8(void) {
    return D_000A52BC;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005B8B4);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005BA44);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005BAA0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005BAFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005BB90);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005BC10);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005BC8C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005BD10);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005BEA0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005BF08);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005BFA4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C190);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C280);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F074);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F08C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F134);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F230);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F2B4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F350);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F368);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F3EC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F4AC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F530);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F5C0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F620);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F68C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F6F8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F794);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F890);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009F92C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FA28);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FAA0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FB48);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FBE4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FC80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FCF8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FDA0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FDB8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C298);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C3A8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C41C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C468);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C518);

s32 func_0005C5B8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C5C0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C5E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C68C);

s32 func_0005C740(void) {
    func_0005C280();
    return 0;
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FDD0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FDE8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C760);

void func_0005C85C(void) {
    func_0005C760();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C878);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FE18);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FE34);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FE3C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C898);

s32 func_0005C8F8(s32 arg0) {
    func_0005C92C();
    func_000319E0(arg0, 0);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C92C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C934);

s32 func_0005C9A4(s32 arg0) {
    func_000319E0(arg0, 0);
    return 4;
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FE5C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005C9C4);

s32 func_0005CAD8(void) {
    func_0005C9C4(0);
    return 0;
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FE8C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FEA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FEB4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005CAF8);

s32 func_0005CD48(s32 arg0) {
    func_0005CD7C();
    func_000319E0(arg0, 0);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005CD7C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FF7C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005CE38);

void func_0005CF34(void) {
    func_0005CE38();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005CF50);

s32 func_0005CF70(struct Unk_func_0005CF70_0 *arg0) {
    if (arg0->unk18 != 1) {

    } else {
        func_000319E0((s32) arg0, 0);
    }
    return 0;
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FFB4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FFD0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FFD8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005CFA8);

s32 func_0005D008(s32 arg0) {
    func_0005D03C();
    func_000319E0(arg0, 0);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005D03C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_0009FFF8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005D044);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0028);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0040);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0048);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005D150);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005D258);

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

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0080);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005D494);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005D650);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005D770);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005D814);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005D968);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005DAC0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005DCC0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005DF30);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005DFAC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005E1CC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005E310);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005E370);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005E37C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005E3F0);

void func_0005E464(M2C_UNK **arg0) {
    *arg0 = &D_000A0220;
    func_0005FBC8();
    func_0004A310((s32) arg0);
}

void func_0005E49C(M2C_UNK **arg0) {
    *arg0 = &D_000A0220;
    func_0005FBC8();
    func_0004A310((s32) arg0);
}

void func_0005E4D4(M2C_UNK **arg0) {
    *arg0 = &D_000A0220;
    func_0005FBC8();
    func_0004A310((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005E514);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005EF24);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0190);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A01B0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F2C8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F3B4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F418);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F47C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F4E0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F544);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F5A4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F6B4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F720);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F78C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F908);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F96C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005F9D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005FAC0);

void func_0005FBAC(void) {
    func_0005FBC8();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005FBC8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0005FD78);

void func_0005FE24(struct Unk_func_0005FE24_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0298;
    if (temp_a0 != 0) {
        scePaf_B3D2C3BB(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        scePaf_B3D2C3BB(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        scePaf_B3D2C3BB(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        scePaf_B3D2C3BB(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        scePaf_B3D2C3BB(temp_a0_5);
        arg0->unk5C = 0;
    }
    func_0004A310((s32) arg0);
}

void func_0005FEE0(struct Unk_func_0005FEE0_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0298;
    if (temp_a0 != 0) {
        scePaf_B3D2C3BB(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        scePaf_B3D2C3BB(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        scePaf_B3D2C3BB(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        scePaf_B3D2C3BB(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        scePaf_B3D2C3BB(temp_a0_5);
        arg0->unk5C = 0;
    }
    func_0004A310((s32) arg0);
}

void func_0005FF9C(struct Unk_func_0005FF9C_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0298;
    if (temp_a0 != 0) {
        scePaf_B3D2C3BB(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        scePaf_B3D2C3BB(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        scePaf_B3D2C3BB(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        scePaf_B3D2C3BB(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        scePaf_B3D2C3BB(temp_a0_5);
        arg0->unk5C = 0;
    }
    func_0004A310((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void func_00060060(void) {
    func_0006007C();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006007C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0220);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060170);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060880);

void func_0006096C(s32 arg0) {
    func_0004D564(arg0 + 0x10);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060988);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060A44);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060AB0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060B1C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060B88);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060BF4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060D0C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060D78);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060DE4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060E50);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00060EC8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00061008);

void func_000610D0(struct Unk_func_000610D0_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0310;
    if (temp_a0 != 0) {
        scePaf_B3D2C3BB(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        scePaf_B3D2C3BB(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        scePaf_B3D2C3BB(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        scePaf_B3D2C3BB(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        scePaf_B3D2C3BB(temp_a0_5);
        arg0->unk5C = 0;
    }
    func_0004A310((s32) arg0);
}

void func_0006118C(struct Unk_func_0006118C_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0310;
    if (temp_a0 != 0) {
        scePaf_B3D2C3BB(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        scePaf_B3D2C3BB(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        scePaf_B3D2C3BB(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        scePaf_B3D2C3BB(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        scePaf_B3D2C3BB(temp_a0_5);
        arg0->unk5C = 0;
    }
    func_0004A310((s32) arg0);
}

void func_00061248(struct Unk_func_00061248_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;

    temp_a0 = arg0->unk2C;
    arg0->unk0 = &D_000A0310;
    if (temp_a0 != 0) {
        scePaf_B3D2C3BB(temp_a0);
        arg0->unk2C = 0;
    }
    temp_a0_2 = arg0->unk38;
    if (temp_a0_2 != 0) {
        scePaf_B3D2C3BB(temp_a0_2);
        arg0->unk38 = 0;
    }
    temp_a0_3 = arg0->unk44;
    if (temp_a0_3 != 0) {
        scePaf_B3D2C3BB(temp_a0_3);
        arg0->unk44 = 0;
    }
    temp_a0_4 = arg0->unk50;
    if (temp_a0_4 != 0) {
        scePaf_B3D2C3BB(temp_a0_4);
        arg0->unk50 = 0;
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        scePaf_B3D2C3BB(temp_a0_5);
        arg0->unk5C = 0;
    }
    func_0004A310((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void func_0006130C(void) {
    func_00061328();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00061328);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0298);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006141C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00061B40);

void func_00061C2C(s32 arg0) {
    func_0004D564(arg0 + 0x10);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00061C48);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00061D04);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00061DBC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00061E74);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00061F2C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00061F98);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000620B0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006211C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00062188);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000621F4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006226C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00062334);

void func_00062384(M2C_UNK **arg0) {
    *arg0 = &D_000A0388;
    func_00080478((s32) arg0);
}

void func_000623AC(M2C_UNK **arg0) {
    *arg0 = &D_000A0388;
    func_00080478((s32) arg0);
}

void func_000623D4(M2C_UNK **arg0) {
    *arg0 = &D_000A0388;
    func_00080478((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0310);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006240C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00062B50);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000630A8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006316C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0348);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00063324);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000635C0);

void func_0006363C(s32 arg0) {
    func_0004D564(arg0 + 0x10);
}

void func_00063658(struct Unk_func_00063658_0 *arg0) {
    func_00080388();
    arg0->unk0 = &D_000A03C8;
    arg0->unk28 = 5;
}

void func_00063690(struct Unk_func_00063690_0 *arg0) {
    func_00080388();
    arg0->unk0 = &D_000A03C8;
    arg0->unk28 = 5;
}

void func_000636C8(M2C_UNK **arg0) {
    *arg0 = &D_000A03C8;
    func_00080478((s32) arg0);
}

void func_000636F0(M2C_UNK **arg0) {
    *arg0 = &D_000A03C8;
    func_00080478((s32) arg0);
}

void func_00063718(M2C_UNK **arg0) {
    *arg0 = &D_000A03C8;
    func_00080478((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0388);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00063750);

s32 func_00063C04(void) {
    return 0x80108F0F;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00063C10);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00063C7C);

void func_00063CE8(M2C_UNK **arg0) {
    *arg0 = &D_000A0460;
    func_000643AC((s32) arg0);
    func_0004A310((s32) arg0);
}

void func_00063D20(M2C_UNK **arg0) {
    *arg0 = &D_000A0460;
    func_000643AC((s32) arg0);
    func_0004A310((s32) arg0);
}

void func_00063D58(M2C_UNK **arg0) {
    *arg0 = &D_000A0460;
    func_000643AC((s32) arg0);
    func_0004A310((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A03C8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00063D98);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000643AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00064490);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006458C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000645E8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00064644);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000646A0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000646FC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00064760);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000647C4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00064828);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00064884);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000648E8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006494C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000649B0);

void func_00064A14(s32 arg0) {
    func_0004D564(arg0 + 0x10);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00064A30);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00064A94);

void func_00064AF8(M2C_UNK **arg0) {
    *arg0 = &D_000A04C8;
    func_000654E0();
    func_0004A310((s32) arg0);
}

void func_00064B30(M2C_UNK **arg0) {
    *arg0 = &D_000A04C8;
    func_000654E0();
    func_0004A310((s32) arg0);
}

void func_00064B68(M2C_UNK **arg0) {
    *arg0 = &D_000A04C8;
    func_000654E0();
    func_0004A310((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00064BA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0460);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065028);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065104);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065160);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000651BC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065218);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065274);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000652D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006533C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000653A0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000653FC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065460);

void func_000654C4(void) {
    func_000654E0();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000654E0);

void func_000655BC(s32 arg0) {
    func_0004D564(arg0 + 0x10);
}

void func_000655D8(struct Unk_func_000655D8_0 *arg0) {
    arg0->unk0 = &D_000A04F0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_000655F0(struct Unk_func_000655F0_0 *arg0) {
    arg0->unk0 = &D_000A04F0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065608);

void func_00065618(M2C_UNK **arg0) {
    *arg0 = &D_000A04F0;
}

void func_00065628(M2C_UNK **arg0) {
    *arg0 = &D_000A04F0;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065650);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A04C8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A04F0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006566C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000659E4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065BB8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065CEC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065E28);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00065F68);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00066060);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000662B4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0524);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A052C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0534);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A053C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0544);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A054C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0554);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A055C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0564);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A056C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0574);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A057C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0584);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A058C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00066600);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00066984);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00066A40);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00066C68);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00066CFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00066DB8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00066EB4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006704C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000671CC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006720C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067250);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067294);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067310);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006738C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067410);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067804);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067904);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067968);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067A74);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067C60);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067D40);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067DBC);

void func_00067F84(struct Unk_func_00067F84_0 *arg0) {
    func_0004A830(arg0->unk14);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A05C8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0628);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00067FA0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00068050);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000680D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00068168);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000681D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00068238);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00068328);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00068418);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0660);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A06B8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00068510);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00068F64);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069060);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A06F4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0710);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000691AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069258);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000692BC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069320);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069384);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069500);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006967C);

s32 func_00069788(void) {
    return 0x80108F0F;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069794);

void func_00069A90(struct Unk_func_00069A90_0 *arg0) {
    func_0001B678();
    arg0->unk28 = 3;
    arg0->unk0 = &D_000A0810;
    arg0->unk54 = 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069ACC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069B24);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069B7C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0798);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069BDC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069F94);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00069FE0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A050);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A0B4);

s32 func_0006A1C0(void) {
    return 0x8000FFFF;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A1CC);

void func_0006A3C8(struct Unk_func_0006A3C8_0 *arg0) {
    func_0004A830(arg0->unk14);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A3E4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A410);

void func_0006A43C(M2C_UNK **arg0) {
    *arg0 = &D_000A0870;
    func_0006A584((s32) arg0);
}

void func_0006A464(M2C_UNK **arg0) {
    *arg0 = &D_000A0870;
    func_0006A584((s32) arg0);
}

void func_0006A48C(M2C_UNK **arg0) {
    *arg0 = &D_000A0870;
    func_0006A584((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A4C4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A584);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A600);

void func_0006A638(M2C_UNK **arg0) {
    *arg0 = &D_000A0880;
    func_0006A810((s32) arg0);
}

void func_0006A660(M2C_UNK **arg0) {
    *arg0 = &D_000A0880;
    func_0006A810((s32) arg0);
}

void func_0006A688(M2C_UNK **arg0) {
    *arg0 = &D_000A0880;
    func_0006A810((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A6C0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A728);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A754);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A780);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A7C8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A810);

void func_0006A838(s32 **arg0) {
    *arg0 = &D_000A08B8;
    func_0004D60C(arg0);
}

void func_0006A860(s32 **arg0) {
    *arg0 = &D_000A08B8;
    func_0004D60C(arg0);
    scePaf_4E67BB08(arg0);
}

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A944);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A96C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006A994);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006AB24);

void func_0006AC48(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000A08F0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    scePaf_6829D7AF((s32) (arg0 + 0x1C), 0, 6);
}

void func_0006AC94(M2C_UNK **arg0) {
    *arg0 = &D_000A08F0;
}

void func_0006ACA4(M2C_UNK **arg0) {
    *arg0 = &D_000A08F0;
}

void func_0006ACB4(M2C_UNK **arg0) {
    *arg0 = &D_000A08F0;
    scePaf_4E67BB08(arg0);
}

void func_0006ACDC(struct Unk_func_0006ACDC_0 *arg0) {
    arg0->unk0 = &D_000A0910;
    arg0->unk4 = 0xFF;
}

void func_0006ACF4(struct Unk_func_0006ACF4_0 *arg0) {
    arg0->unk0 = &D_000A0910;
    arg0->unk4 = 0xFF;
}

void func_0006AD0C(M2C_UNK **arg0) {
    *arg0 = &D_000A0910;
}

void func_0006AD1C(M2C_UNK **arg0) {
    *arg0 = &D_000A0910;
}

void func_0006AD2C(M2C_UNK **arg0) {
    *arg0 = &D_000A0910;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006AD54);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006AD9C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006ADE4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006AEF4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006AF24);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006B02C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006B134);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006B240);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006B34C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006B3D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006B454);

s32 func_0006B4E0(struct Unk_func_0006B4E0_0 *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = 0;
    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x18)(temp_v1);
    }
    return var_v0;
}

s32 func_0006B514(struct Unk_func_0006B514_0 *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 8)(temp_v1);
    }
    return var_v0;
}

s32 func_0006B548(struct Unk_func_0006B548_0 *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0xC)(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006B57C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006B650);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006B708);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0810);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0870);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0880);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A08B8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A08F0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0900);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0910);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0918);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0920);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0928);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0938);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0940);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0948);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0950);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0958);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0960);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0968);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0970);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0978);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0980);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0988);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0990);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0994);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0998);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A099C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A09A4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A09AC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A09B4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A09C0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A09CC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A09D0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A09DC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A09E4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A09F0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A09FC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A04);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A10);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A18);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A24);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A2C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A34);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A40);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A50);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A58);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A60);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A68);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A74);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A7C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A84);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A90);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0A98);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0AA0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0AA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0AB0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0ABC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0AD0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0AE4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0AEC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0AF4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B00);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B14);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B20);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B2C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B38);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B40);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B50);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B58);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B60);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B68);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B70);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B8C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0B94);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0BA4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0BAC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0BB8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0BC4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0BCC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0BD8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0BE0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0BE8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0BF0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0BFC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C08);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C10);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C18);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C20);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C2C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C38);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C40);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C4C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C5C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C64);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C70);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C78);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C88);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C90);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0C9C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0CA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0CB4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0CC8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0CDC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0CEC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0CF8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D04);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D0C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D1C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D28);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D30);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D38);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D40);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D48);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D58);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D60);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D6C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D78);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D80);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D8C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0D94);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0DA0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0DA8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0DB0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0DB8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0DC4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0DCC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0DDC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0DEC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0DF8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0E00);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0E0C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0E18);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0E24);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0E30);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A0E3C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006B7B4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006BB34);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006BC24);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006BFB4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006C168);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006C318);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006C4D8);

s32 func_0006C594(s32 arg0) {
    return (arg0 & 0xFFE0) == 0xFFE0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006C5A4);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006C604);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006C6AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006C754);

s32 func_0006C7C8(s32 arg0) {
    s32 temp_s0_2;
    s32 temp_s1;
    u32 temp_s0;

    temp_s0_2 = func_0006C754();
    temp_s0 = temp_s0_2 * func_0006C604(arg0);
    temp_s1 = __builtin_allegrex_ext(arg0, 9, 1);
    return ((u32) (temp_s0 / func_0006C6AC(arg0)) >> 3) + temp_s1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006C830);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006C9C4);

void func_0006CA08(struct Unk_func_0006CA08_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CA14);

void func_0006CA20(void) {
}

void func_0006CA28(void) {
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CA30);

void func_0006CA8C(s32 *arg0) {
    func_0006C604(*arg0);
}

void func_0006CAA8(s32 *arg0) {
    func_0006C6AC(*arg0);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1050);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CAC4);

s32 func_0006CB20(struct Unk_func_0006CB20_0 *arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_0006CAC4(arg1) != 0) {
        scePaf_F95EA3F1(arg0, arg1, 0x10);
        arg0->unk10 = 1;
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CB84);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CC90);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CCFC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CD18);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CD34);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CDF8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CEA4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CF50);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006CFC8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006D040);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006D0BC);

s32 func_0006D150(struct Unk_func_0006D150_0 *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0xC)(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006D184);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006DA6C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1088);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A10C8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A10D0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1110);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1118);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1158);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1160);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1168);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1170);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1178);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006DB80);

s32 func_0006DD2C(s32 arg0) {
    return func_00089D1C(arg0 + 0x14, arg0 + 0x48, arg0 + 0x13C, arg0 + 0x170) != 0;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006DD5C);

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

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1188);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1194);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A119C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A11A0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A11B0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006DE88);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006DF88);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006E538);

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

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006E83C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006E8C0);

void func_0006E910(M2C_UNK **arg0) {
    *arg0 = &D_000A1210;
    music_common_7DBFD08B();
}

void func_0006E938(M2C_UNK **arg0) {
    *arg0 = &D_000A1210;
    music_common_7DBFD08B();
}

void func_0006E960(M2C_UNK **arg0) {
    *arg0 = &D_000A1210;
    music_common_7DBFD08B();
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006E998);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A11D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006E9DC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006ED20);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006EE7C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006EF78);

void func_0006F18C(void) {
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1210);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006F194);

void func_0006F224(void) {
    func_0006FEA8();
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006F240);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006F264);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006F2A4);

void func_0006F2E4(M2C_UNK **arg0) {
    *arg0 = &D_000A1270;
    music_common_7DBFD08B();
}

void func_0006F30C(M2C_UNK **arg0) {
    *arg0 = &D_000A1270;
    music_common_7DBFD08B();
}

void func_0006F334(M2C_UNK **arg0) {
    *arg0 = &D_000A1270;
    music_common_7DBFD08B();
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006F36C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006F440);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006F674);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006F6A0);

void func_0006F720(s32 arg0) {
    sceAsfParser_6B3AE857(arg0 + 0x28);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006F73C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006F858);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006FACC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006FE54);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006FEA8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0006FF90);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070040);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070084);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000700AC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000700D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070118);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070158);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070198);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000701D8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070210);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070248);

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

void func_00070300(M2C_UNK **arg0) {
    *arg0 = &D_000A1358;
}

void func_00070310(M2C_UNK **arg0) {
    *arg0 = &D_000A1358;
}

void func_00070320(M2C_UNK **arg0) {
    *arg0 = &D_000A1358;
}

void func_00070330(M2C_UNK **arg0) {
    *arg0 = &D_000A1358;
}

void func_00070340(M2C_UNK **arg0) {
    *arg0 = &D_000A1358;
    scePaf_4E67BB08(arg0);
}

void func_00070368(M2C_UNK **arg0) {
    *arg0 = &D_000A1370;
}

void func_00070378(M2C_UNK **arg0) {
    *arg0 = &D_000A1370;
}

void func_00070388(M2C_UNK **arg0) {
    *arg0 = &D_000A1370;
}

void func_00070398(M2C_UNK **arg0) {
    *arg0 = &D_000A1370;
}

void func_000703A8(M2C_UNK **arg0) {
    *arg0 = &D_000A1370;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000703D0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0007048C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070548);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070604);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000706C0);

s32 func_00070784(void *arg0) {
    s32 var_s1;

    var_s1 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x14) >= 0) && (func_000535DC(arg0 + 0xC) != 0)) {
        if ((func_00052AC4(arg0 + 4) != 0) && (func_000535DC(arg0 + 0x2C) != 0)) {
            var_s1 = func_00052AC4(arg0 + 0x24) != 0;
        }
    }
    return var_s1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070800);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070840);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070950);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070A2C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070AB0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070AE4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070B64);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070BD0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070C3C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070CA8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070D28);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00070E54);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00071004);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0007123C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000713C4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000714B8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00071680);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000717F4);

s32 func_00071814(void) {
    return (D_000A55FC != 0) ? 0 : 0x8010961D;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0007182C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1270);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A12A8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A12BC);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A12E0);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1358);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1370);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1380);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A139C);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A13B4);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A13D8);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A13F8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00071838);

void func_000718EC(void) {
    func_00071838(1, 0xFFFF);
}

void func_0007190C(void) {
    func_00071838(0, 0xFFFF);
}

void func_0007192C(M2C_UNK **arg0) {
    *arg0 = &D_000A1490;
}

void func_0007193C(M2C_UNK **arg0) {
    *arg0 = &D_000A1490;
}

void func_0007194C(M2C_UNK **arg0) {
    *arg0 = &D_000A1490;
}

void func_0007195C(M2C_UNK **arg0) {
    *arg0 = &D_000A1490;
}

void func_0007196C(M2C_UNK **arg0) {
    *arg0 = &D_000A1490;
    scePaf_4E67BB08(arg0);
}

M2C_UNK *func_00071994(void) {
    return &D_000A5628;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000719A0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00071CE4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00071DA0);

void func_00071E1C(void) {
    func_00071DA0(1, 0xFFFF);
}

void func_00071E3C(void) {
    func_00071DA0(0, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1450);

INCLUDE_RODATA("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", D_000A1490);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00071E5C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00071EE8);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00071F74);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_0007211C);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000723BC);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000724B4);

s32 func_000725B4(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x7C) != 0) {
        var_v1 = func_000505F8(arg0 + 4) != 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000725F0);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_000727D4);

INCLUDE_ASM("tmp/asm/282/music_main_plugin/nonmatchings/music_main_plugin_02EE90", func_00072A34);

