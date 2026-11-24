#include "common.h"
#include "paf_decls.h"

s32 func_00124B74(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    func_001257F0(arg0, arg1, arg2, arg3);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 0xD0)(arg0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0xDBC) = 0;
        M2C_FIELD(arg0, s32 *, 0xDC0) = 0;
    }
    D_001A7EE0 = (((s32) D_001A7EE0 ^ arg0) == 0) ? NULL : D_001A7EE0;
    return 0;
}

s32 func_00124BD8(void) {
    return 0;
}

s32 func_00124BE0(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xDBC);
    M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0) = 0;
    M2C_FIELD(temp_s0, s16 *, 2) = 0;
    M2C_FIELD(temp_s0, s16 *, 4) = 0;
    M2C_FIELD(temp_s0, s16 *, 6) = 0;
    M2C_FIELD(temp_s0, s16 *, 8) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x28) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x30) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x32) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x34) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x36) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x38) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3A) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3E) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x40) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x42) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x1C) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0xC) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x24) = 0;
    func_0012592C((s32) temp_s0, 0x108, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    func_0012592C((s32) temp_s0, 0x1A, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    return 0;
}

s32 func_00124CA4(void *arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x111, (s32) arg1, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124CD8(void) {
    return 0;
}

s32 func_00124CE0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xDBC), s16 *, 0x3A) != 7;
}

s32 func_00124D28(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x109, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xDBC), s16 *, 0x3A) != 1;
}

s32 func_00124D70(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x106, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124DA0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x107, 0, temp_a0 + 0x3C4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00124DD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00124EB8);

s32 func_00124F0C(void) {
    return 0;
}

s32 func_00124F14(void) {
    return 0;
}

s32 func_00124F1C(void) {
    return 0;
}

s32 func_00124F24(void) {
    return 0;
}

s32 func_00124F2C(void) {
    return 0;
}

s32 func_00124F34(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x100, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124F64(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x101, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124F94(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x10B, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124FC4(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x10C, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124FF4(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00125024(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x105, 0, temp_a0 + 0x3C4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001250F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001252D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012549C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D43C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012552C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001257F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012592C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012597C);

s32 func_001259CC(s32 arg0) {
    return (M2C_FIELD(D_001A7EE0, s32 (**)(void *, s32), 0xE0)(D_001A7EE0, arg0) == 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125A04);

s32 func_00125A9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;

    temp_s4 = M2C_FIELD(D_001A7EE0, s32 (**)(void *, s32), 0xEC)(D_001A7EE0, arg0);
    M2C_FIELD(D_001A7EE0, M2C_UNK (**)(void *, s32, s32, s32, M2C_UNK), 0xE4)(D_001A7EE0, arg0, arg1, arg2, 1);
    return M2C_FIELD(D_001A7EE0, s32 (**)(void *, s32), 0xEC)(D_001A7EE0, arg0) - temp_s4;
}

s32 func_00125B30(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_v1;

    var_s2 = 0;
    temp_v0 = sceIoOpen(arg0, 1, 0);
    if (temp_v0 >= 0) {
        var_s2 = sceIoRead(temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    var_v1 = 0;
    if (var_s2 < arg2) {
        scePaf_6829D7AF(arg1, 0, arg2);
        var_v1 = -1;
    }
    return var_v1;
}

s32 func_00125BD0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = sceIoOpen(arg0, 0x602, 0x180);
    var_s0 = 0;
    if (temp_v0 >= 0) {
        var_s0 = sceIoWrite(temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    return (var_s0 >= arg2) ? 0 : -1;
}

s16 func_00125C48(u8 *arg0) {
    s16 var_a1;
    u8 *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
            var_a1 += 1;
        } while (*var_a0 != 0);
    }
    return var_a1;
}

void func_00125C70(s32 arg0, s32 arg1) {
    func_00125C8C(arg0, arg1, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125C8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125CC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125D10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125D58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125D78);

void func_00125DF4(s32 arg0, M2C_UNK arg1) {
    func_00125D78(4, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125EE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00125FC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126028);

void func_00126264(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_00126028(2, (s32) arg0, (s32) arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012629C);

void func_001263EC(s16 arg0, s32 arg1, s16 arg2, s32 arg3) {
    func_0012629C((s32) arg0, arg1, (s32) arg2, 0, arg3);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001264DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126530);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001266D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126944);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012698C);

s32 func_001269B8(void) {
    func_00127218();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001269D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126ACC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126C1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126C5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00126CA4);

void func_001271C8(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001271D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00127218);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012729C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00127430);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00127490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00127520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00127568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001275D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00127880);

s32 func_001278D0(void) {
    return ~func_00127880();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001278F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001279F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00127AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00127B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001286B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00128830);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001288DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00128A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00128B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00128BD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00128CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00128D4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00128DD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D4BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D4CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D4EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D5F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D5F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D600);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D608);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D618);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019D658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00128F6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012946C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001294C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001295FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012962C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129714);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129794);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012980C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012989C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001299B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129A24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129A60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129B3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129EC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129F5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00129F94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012A374);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012A3FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012A474);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012A4D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012A5E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012A710);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012A770);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012A7F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012A814);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012AA04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012AB14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012AB70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012ABCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012AC68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012ACC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012AD20);

s32 func_0012AD7C(void) {
    s32 temp_v0;

    temp_v0 = func_00127568((s32) &D_001E0ECC, (s32) &D_001E8ED8, M2C_FIELD(M2C_FIELD(&D_001E0ECC, void **, 0x14), s32 *, 0x14), (s32) (s16) (M2C_FIELD(M2C_FIELD(&D_001E0ECC, void **, 0x14), s16 *, 0x26) * (M2C_FIELD(M2C_FIELD(&D_001E0ECC, void **, 0x14), s16 *, 0x2C) + 1)));
    M2C_FIELD(&D_001E0ECC, s32 *, 0xCC) = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012ADE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012AE2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012AFC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012B24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012B2B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012B4B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012B4FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012B5BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012B618);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012B684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012B73C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012B8EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012BBB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012BC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012BD08);

s32 func_0012BD78(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_0012BC60() != -1) {
        var_s0 = 0;
        func_0012B4FC(0, (s32) &D_001E504A);
    }
    return var_s0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012BDBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012BE70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012BFA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012C120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012C178);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012C1CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012C280);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012C2F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012C45C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012C680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012C7A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012C87C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012CC84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012CE20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012CF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012CFF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D0DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D18C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D25C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D2F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D3C4);

void func_0012D424(s32 arg0) {
    func_00125D58(arg0, 0x24);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D440);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D52C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D5DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D6C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012D93C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012DB04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012DB64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012DC34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012DD80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012DE8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012DFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012E16C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012E36C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012E3C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012E84C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012EF90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012F228);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012F398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012FC64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012FCAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012FE2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0012FFA8);

void func_0012FFFC(s16 arg0, s16 arg1, s16 arg2) {
    D_001E4FC6 = 3;
    func_001300B8(0, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_00130038(s16 arg0, s16 arg1, s16 arg2) {
    D_001E4FC6 = 7;
    func_001300B8(1, (s32) arg0, (s32) arg1, (s32) arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00130074);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001300B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001302E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013047C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00130580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00130900);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00130CA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00131008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001310BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00131434);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00131668);

void func_001317F0(s32 arg0) {
    func_0013180C(arg0, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013180C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001318A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00131FC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00132164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00132238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013232C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001324F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001327F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013288C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00132954);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00132A74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00132B68);

s32 func_00132C74(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;

    temp_a0 = arg0 & 0xFF;
    var_a0 = 0;
    if ((((temp_a0 == 0xA1) | (temp_a0 == 0xA4)) != 0) || (((temp_a0 == 0x2E) | (temp_a0 == 0x2C)) != 0)) {
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_00132CBC(u8 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v1;
    u8 *var_a0;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = 0;
    if (var_a1 >= 0) {
        do {
            temp_v0 = *var_a0;
            var_a1 -= 1;
            var_a0 += 1;
            var_v1 = (var_v1 + temp_v0) & 0xFF;
        } while (var_a1 >= 0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00132CE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00132DF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00133088);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013319C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00133258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00133370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001333D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00133664);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001338A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00133924);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00133CF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00133DB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013403C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134180);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134300);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001344DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013450C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001345FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013463C);

void func_00134730(void) {
    func_00125D58((s32) &D_001E208C, 0x14);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134754);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134794);

s32 func_001347E0(void) {
    s32 temp_v0;

    func_00134A14();
    temp_v0 = func_00134818();
    func_00134B04(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134818);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134A14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134C28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134D40);

void func_00134E94(s16 arg0) {
    func_00134754();
    if (arg0 == 0) {
        func_00134ED8();
    } else {
        func_00134FFC();
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00134FFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013510C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013517C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001351F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00135330);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00135BDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00136484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00136564);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013696C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00136CE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00136D68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013711C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137154);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137190);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001372CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001373FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001375B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DAF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DAF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DB2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DB64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DB70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DBA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DBB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DBD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DBE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DBEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DC00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DC10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DC1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DC24);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DC44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019DE38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019E02C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019E328);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019E398);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019E3B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019E414);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019EE58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_0019F3B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0B08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0B10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0B18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0B20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0B34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0B3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0B78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001375FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001376E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137870);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013791C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137A60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137B28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137B80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137D1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137D88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00137F9C);

void func_001380A8(void) {
    M2C_FIELD(D_001E2988, u16 *, 8) = (u16) M2C_FIELD(D_001E2988, u16 *, 4);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001380BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001381A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013821C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138250);

void func_00138298(void) {
    D_001E7C64 = 0;
}

void func_001382A4(void) {
    func_0013D5FC();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001382C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001382F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013846C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001384C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138528);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001385A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138610);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001386A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138718);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138788);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001387EC);

s32 func_0013882C(void) {
    return ((D_001E50B0 ^ 2) == 0) ? 0 : -1;
}

void func_00138844(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013884C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013893C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001389BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138A8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138AE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138BD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138C84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138D24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138D60);

void func_00138E10(void) {
    func_00138F54();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138E2C);

void func_00138EC8(void) {
    if (D_001E279A != -1) {
        if (D_001E279A != -2) {
            func_001391B8();
        } else {
            func_00138FA8();
        }
    } else {
        func_0013918C();
    }
}

void func_00138F20(void) {
    if (func_00139170() != 0) {

    } else {
        func_00138F54();
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138FA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00138FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139170);

void func_0013918C(void) {
    func_0013934C();
    func_00139438();
    func_001393F4();
}

void func_001391B8(void) {
    func_0013934C();
    func_00138FCC();
    func_001393F4();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001391E4);

void func_00139280(s16 arg0) {
    D_001E50C0 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013928C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001392D0);

void func_00139328(void) {
    func_00139A60();
    func_00139B10();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013934C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001393F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013948C);

void func_00139518(void) {
    func_00139B6C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139534);

void func_001395D8(void) {
    func_00139534(0);
}

void func_001395F4(void) {
    func_00139534(1);
}

void func_00139610(s16 arg0) {
    func_0013B6E8(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013962C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013967C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001396B4);

void func_001396EC(void) {
    func_0013B844(0);
}

void func_00139708(void) {
    func_0013B844(1);
}

void func_00139724(void) {
    void *temp_s0;

    temp_s0 = D_001E2988;
    M2C_FIELD(temp_s0, s16 *, 0x28) = func_00139758(M2C_FIELD(temp_s0, s32 *, 0x2C), (s32) M2C_FIELD(temp_s0, s16 *, 4));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001399A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139A0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139A60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139B10);

void func_00139B5C(s16 arg0) {
    M2C_FIELD(D_001E2988, s16 *, 0x3C) = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139B6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139D90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139DE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139E6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00139F50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A01C);

void func_0013A0E8(s16 arg0) {
    func_0013A10C(arg0);
    func_00143E94();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A10C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A208);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A368);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A430);

void func_0013A494(void) {
    if (func_0013A430((s32) M2C_FIELD(D_001E2988, s16 *, 4)) != -1) {
        func_0013EDA4();
        func_00143E94();
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A4D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A4FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A62C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A734);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A8A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013A904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013AAB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013AAF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013AB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013AC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013AD74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013AF9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013B324);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013B448);

void func_0013B558(void) {
    func_0013B448(0);
}

void func_0013B574(void) {
    func_0013B448(1);
}

void func_0013B590(void) {
    func_0013FBEC(0);
    func_00143E94();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013B5B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013B6E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013B844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013B924);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013B9F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013BB30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013BB8C);

void func_0013BBCC(void) {
    func_00139A60();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013BBE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013BC44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013BC68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013BC8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013BE14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013C000);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013C1E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013C268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013C4B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013C53C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013C768);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013CB34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013CB7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013CE14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013CF4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013CFB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013D028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013D08C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013D4F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013D5FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013D6AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013DB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013DDEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013DE7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013DEFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013DF7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013E280);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013E350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013E4AC);

void func_0013E4D4(void) {
}

void func_0013E4DC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013E4E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013E500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013E558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013E5C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013E744);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013EDA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013F308);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013F364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013F77C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013FA50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013FA84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013FBEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013FE9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0013FF34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140318);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014057C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001406C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001407C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001407E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014094C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140B58);

s16 func_00140B8C(s32 arg0) {
    s16 var_a0;

    var_a0 = arg0 & 0xFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 -= 0x20;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140BB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140C0C);

s32 func_00140C88(s32 arg0) {
    s32 temp_a0;
    s32 var_v1;

    temp_a0 = arg0 & 0xFF;
    var_v1 = 1;
    if ((u32) ((temp_a0 + 0x4A) & 0xFF) >= 0xFU) {
        var_v1 = func_00140CC8(temp_a0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140CC8);

s32 func_00140CD8(s16 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if (arg0 != 0xDE) {
        var_a1 = arg0 == 0xDF;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140CF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140D68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140DAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140DD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00140E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014107C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00141094);

void func_00141234(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014123C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001413A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00141454);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00141528);

void func_001415A8(s32 arg0, s16 arg1, s32 arg2) {
    func_00141454(arg0, (s32) arg1, arg2);
}

s32 func_001415C4(s32 arg0, s16 arg1, s32 arg2) {
    return func_001416CC(arg0, (s32) arg1, (s32) &D_001E7BE8, arg2) == 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001415F4);

void func_00141630(s32 arg0, s16 arg1, s32 arg2) {
    func_001415C4(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014164C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00141668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001416CC);

void func_00141D14(void) {
    func_001433F0();
}

void func_00141D30(void) {
    func_00143490();
}

void func_00141D4C(void) {
    func_001435A0();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00141D68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00141EF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00141F58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00141F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00142114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001422AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001424A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001424C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00142580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001425C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00142DC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00142F70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001430C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00143140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014321C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00143268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00143370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001433F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00143490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001435A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00143808);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001438F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00143E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00143E38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00143E94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014412C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001443A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014440C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00144494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00144540);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001445D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001446A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00144778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001447FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00144864);

void func_001448F8(s32 arg0) {
    func_00144924();
    func_00147548(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00144924);

void func_001449CC(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 4);
    func_001494FC(M2C_FIELD(temp_s0, s32 *, 0x3A74));
    M2C_FIELD(temp_s0, s32 *, 0x3A74) = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001449F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00144ACC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00145178);

void func_001454B4(void) {
    func_00147650();
}

void func_001454D0(s32 arg0) {
    func_00147548(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001454EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001455E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00145668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001457B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001458D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00145FAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001461FC);

void func_0014632C(s32 arg0, s32 arg1, s32 arg2) {
    func_0014634C(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014634C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001465D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001466C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00146874);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00146A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00146B40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00147548);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014758C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001475DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00147650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014766C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001476F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00147790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00147810);

void func_001478D0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        func_00148634(M2C_FIELD(arg0, s32 *, 0xC), temp_v0);
        func_0014792C((s32) arg0, 0, 0, 0, 0, 0, 0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014792C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00147A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00147AC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0DAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0DE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0DEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0E20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0E34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0F2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0F64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0F78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A0FE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A100C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A1014);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A1020);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf_124B74", D_001A102C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00147FF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001480BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001480C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001480CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001480D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001480DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001480E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001480EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001480F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001480FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00148104);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014810C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00148114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014811C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001481F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00148508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00148564);

s32 func_0014861C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 8) & 0xF) + M2C_FIELD(arg0, u8 *, 6) + 9;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00148634);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_0014869C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001486CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00148A0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00148C60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00149008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001491F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00149350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_001494FC);

u16 func_00149554(void *arg0) {
    u16 var_a1;
    void *temp_a0;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) != -1) {
        var_a1 = M2C_FIELD(arg0, u16 *, 0x1CB8);
    } else {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        if (temp_a0 != NULL) {
            var_a1 = M2C_FIELD(temp_a0, u16 *, 0xE);
        }
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00149584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00149638);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_124B74", func_00149674);

