#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000000);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000044);

void func_00000088(M2C_UNK **arg0) {
    *arg0 = &D_000B4408;
}

void func_00000098(M2C_UNK **arg0) {
    *arg0 = &D_000B4408;
}

void func_000000A8(M2C_UNK **arg0) {
    *arg0 = &D_000B4408;
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000000E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000012C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000001CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000001FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000364);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000470);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000004A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000004D4);

void func_00000504(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000050C);

void func_00000520(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_0000050C(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

void func_00000558(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_0000050C(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000590);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000638);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000968);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000ABC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000C38);

u32 func_00000D58(void) {
    u32 temp_v0;

    temp_v0 = func_00088984();
    return (temp_v0 < 0x11U) ? temp_v0 : -1U;
}

void func_00000D84(void) {
    func_00000DBC();
}

void func_00000DA0(void) {
    func_00000DBC();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000DBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000DD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000E10);

void func_00000E68(s32 arg0, M2C_UNK arg1) {
    s32 *temp_v1;
    s32 temp_v0;

    temp_v0 = func_00000C38(arg1);
    temp_v1 = (temp_v0 * 4) + arg0;
    if (temp_v0 >= 0) {
        *temp_v1 += 1;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000EA8);

s32 func_00000F1C(void **arg0) {
    s32 temp_v0;
    s32 var_v1;
    void *var_a0;

    var_a0 = *arg0;
    var_v1 = 0;
    if (var_a0 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_a0, s32 *, 8);
            var_a0 = M2C_FIELD(var_a0, void **, 0xC);
            var_v1 |= temp_v0;
        } while (var_a0 != NULL);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000F40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00000F54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00001114);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000119C);

void func_000011AC(void) {
}

void func_000011B4(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000011BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00001328);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000013EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00001434);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00001544);

s32 func_000015C4(s32 arg0) {
    return arg0;
}

void func_000015CC(void) {
}

void func_000015D4(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000015DC);

s32 func_000016B0(s8 *arg0) {
    void *sp0;
    s32 var_a1;
    s8 *temp_v0;

    temp_v0 = func_00068B0C(arg0, &sp0);
    var_a1 = 0;
    if (M2C_FIELD(temp_v0, s8 *, 0) == 0x30) {
        var_a1 = M2C_FIELD(temp_v0, s8 *, 1) == 0x78;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000016F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00001764);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4400);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4408);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4420);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B442C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B443C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4444);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4450);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4498);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B44A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B44B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B44C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B44D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B44E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B44F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00001898);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00002094);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00002220);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B46C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000025C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00002E0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00002E78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00003400);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000036B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000036F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000038E8);

void func_00003B64(s32 arg0) {
    func_000038E8(arg0, 1);
}

void func_00003B80(s32 arg0) {
    func_000038E8(arg0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00003B9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00003F44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00003F88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00004184);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4758);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B475C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4760);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4768);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000042B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00004428);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00004B7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00004CE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00005034);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00005D88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00005F58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00006108);

void func_000062B0(void **arg0) {
    M2C_FIELD(*arg0, s32 *, 0xCD0) = 1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000062C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000664C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00006DF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00006F68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000072E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000073D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4C44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4C54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00007448);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4D2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00008330);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00008788);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00008820);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00008CC4);

void func_00008FBC(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {

    } else {
        func_0006235C(arg0 + 0x18, 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00008FF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000915C);

void func_000091F8(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00009200);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000927C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4E24);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F64);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F70);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F78);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F88);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F8C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F94);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4F9C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FB4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FB8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FBC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FC0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FC4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FC8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FCC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FD4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FE4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FEC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FF0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FF8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B4FFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5000);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5004);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5008);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B500C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000093C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B502C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00009874);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00009A0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00009A8C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00009AC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00009B18);

s32 func_00009BD0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        temp_a0 = ((s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 0x10)) >> 1) - M2C_FIELD(arg0, s32 *, 8);
        temp_v1 = ((s32) (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x14)) >> 1) - M2C_FIELD(arg0, s32 *, 0xC);
        temp_a0_2 = __builtin_allegrex_max(temp_a0, -temp_a0);
        temp_v1_2 = __builtin_allegrex_max(temp_v1, -temp_v1);
        var_a0 = (temp_a0_2 + temp_v1_2) - (__builtin_allegrex_min(temp_v1_2, temp_a0_2) >> 1);
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00009C38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00009CD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00009DD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00009E54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000A1F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000A294);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000A3F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000A5A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000A5F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000A640);

void func_0000A690(s32 arg0) {
    func_0000A6E8();
    func_0009B73C(arg0);
}

void func_0000A6BC(s32 arg0) {
    func_0000A6E8();
    func_0009B73C(arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000A6E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000A784);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000A870);

void func_0000A8C4(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0009BA98((s32) arg0, (s32) M2C_FIELD(arg1, u8 *, 8));
    } else {
        func_0006235C((s32) arg1, func_0009BA58((s32) arg0));
    }
}

void func_0000A910(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {

    } else {
        func_000625F4(arg1);
    }
}

void func_0000A940(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {

    } else {
        func_0006219C(arg1);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000A970);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000AA78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000AAEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000AC38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000AE08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000B494);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000B538);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B507C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5088);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B508C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5090);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000B5D8);

void func_0000B984(s32 arg0, s32 arg1, s32 arg2) {
    func_0000B5D8(arg0, arg1, 1);
    if (arg2 == 0) {

    } else {
        func_0000A6E8(arg0);
    }
}

void func_0000B9D0(s32 arg0, s32 arg1, s32 arg2) {
    func_0000B5D8(arg0, arg1, 0);
    if (arg2 == 0) {

    } else {
        func_0000A6E8(arg0);
    }
}

void func_0000BA1C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000B5D8(arg0, arg1, 0);
    if (arg2 == 0) {

    } else {
        func_0000A6E8(arg0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000BA68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000BBDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000BD6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000BF24);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000BF5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C0E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C150);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C394);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C480);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C570);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C5DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C670);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C6EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C74C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C7D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C8C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C934);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C9A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000C9E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000CA3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000CB90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000CD18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5140);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5148);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B514C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5150);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5154);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5158);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B515C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5160);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5164);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5168);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B516C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5170);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5174);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5178);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B517C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5180);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5184);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5188);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B518C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5190);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5194);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5198);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B519C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B51FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5200);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5204);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5208);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B520C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5210);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5214);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5218);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B521C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5220);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5224);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5228);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B522C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5230);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5234);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5238);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B523C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5240);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5244);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5248);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B524C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5250);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5254);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5258);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B525C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5260);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5264);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5268);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B526C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5270);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5274);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5278);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B527C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000CDF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000D008);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000D04C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000DBB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000DBD8);

void func_0000DBFC(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000DC04);

s32 func_0000DC64(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
    var_a1 = 0;
    temp_v1 = temp_v0 - 1;
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = temp_v1;
        var_a1 = temp_v1 == 0;
    }
    return var_a1;
}

void func_0000DC84(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_s0 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_s0_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_s0_2 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0_2, 0);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000DD00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000DD0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000DEF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000E27C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000E318);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000E540);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000E70C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000E8A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000E9CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000EAA4);

s32 func_0000EB1C(void *arg0) {
    s32 *temp_s1;
    s32 temp_v0;
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (var_v0 == 0) {
        temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 **, 0x20);
        temp_v0 = func_00090648(*func_0009F1C0(), 0x68, 0);
        func_0007B534(temp_v0, *temp_s1, M2C_FIELD(arg0, void **, 4) + 0x30);
        M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000EB94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000ECE0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000ED70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000EDB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000EF5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F020);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F0E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F104);

void func_0000F1A4(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x3C;
    func_0001D6A8(temp_s0);
    func_0001D3D8(temp_s0, 0x80);
    func_0000F0E4(arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F1EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F224);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F2DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F3A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F410);

void func_0000F514(M2C_UNK **arg0) {
    *arg0 = &D_000B5390;
}

void func_0000F524(M2C_UNK **arg0) {
    *arg0 = &D_000B5390;
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

void func_0000F564(void) {
}

void func_0000F56C(void) {
}

s32 func_0000F574(void) {
    return 0;
}

void func_0000F57C(void) {
}

void func_0000F584(void) {
}

void func_0000F58C(void) {
}

void func_0000F594(void) {
}

s32 func_0000F59C(void) {
    return 0;
}

s32 func_0000F5A4(void) {
    return 0;
}

s32 func_0000F5AC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F5B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F5D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F6C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F784);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F850);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F9A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000F9F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000FAF0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000FB9C);

void func_0000FBB4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_0000FBBC(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s1;
    void *temp_a1_2;

    var_s1 = arg2;
    if (arg1 >= 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
        var_a3 = arg1 + arg2;
        if ((arg1 < temp_v1) & (arg2 > 0)) {
            if (temp_v1 < var_a3) {
                var_s1 = temp_v1 - arg1;
                var_a3 = arg1 + var_s1;
            }
            temp_a1 = M2C_FIELD(arg0, s32 *, 4);
            sceHVNetfront_Module_1A02495A(temp_a1 + (arg1 * 6), temp_a1 + (var_a3 * 6), (temp_v1 - var_a3) * 6, var_a3);
            temp_a1_2 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - var_s1);
            if (temp_a1_2 != NULL) {
                M2C_FIELD(temp_a1_2, s32 *, 0x268) = (s32) (M2C_FIELD(temp_a1_2, s32 *, 0x268) - var_s1);
            }
            func_0000FBB4(arg0);
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000FC7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000FEA8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000FF0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000FF58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000FF7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0000FFA0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001002C);

s32 func_00010164(s32 arg0) {
    func_0001018C();
    return arg0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001018C);

void func_000101AC(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_s1 != 0) {
        func_00090730(*func_0009F1C0(), temp_s1, 0);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010200);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010254);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010310);

s32 func_00010334(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0xC) == 0) && (M2C_FIELD(arg0, s32 *, 0x10) == 0) && (M2C_FIELD(arg0, s32 *, 0x14) == 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0) && (M2C_FIELD(arg0, s32 *, 0x18) == 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 4) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010380);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000103E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010418);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000104D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010590);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010674);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010788);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000108A0);

s32 func_0001098C(void *arg0) {
    return __builtin_allegrex_max(func_000108A0() - (M2C_FIELD(arg0, s32 *, 0xF8) - M2C_FIELD(arg0, s32 *, 0xF4)), 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000109C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010A94);

s32 func_00010D74(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xF0) - M2C_FIELD(arg0, s32 *, 0xEC);
    return __builtin_allegrex_max((s32) (temp_v0 + ((u32) (temp_v0 >> 0x1F) >> 0x1E)) >> 2, 0x10);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010D9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010EC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00010F90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001128C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001138C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00011510);

u16 func_000115B4(s32 arg0, s32 arg1) {
    void *sp0;
    return (func_00011510(arg0, arg1, &sp0) == 0) ? 0U : sp0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000115DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00011734);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00011C98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00011E7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00011F50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00012144);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001224C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000123C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000125B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00012794);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5344);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5374);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5380);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5390);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B53C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B53D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B53E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B53EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B53FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5454);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5558);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B55A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B55D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B55F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5634);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5640);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5650);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B56A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001286C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000133D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000134E0);

void func_00013530(void *arg0, s32 arg1) {
    sceHVNetfront_Module_D611E938(M2C_FIELD(arg0, s32 *, 4), (arg1 == 0) ? 0 : 0xFF, 0x2000);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001355C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001370C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000138BC);

void func_000138F8(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_s0 == 0) {

    } else {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

void func_00013940(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_s0 == 0) {

    } else {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00013988);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000140A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00014C38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5798);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000152E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000155F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B57EC);

void func_000159CC(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg1, s32 *, 0x48);
    if (var_v1 & 8) {
        func_0001DA90(arg0, (s32) "</U>");
        var_v1 = M2C_FIELD(arg1, s32 *, 0x48);
    }
    if (var_v1 & 2) {
        func_0001DA90(arg0, (s32) "</I>");
        var_v1 = M2C_FIELD(arg1, s32 *, 0x48);
    }
    if (!(var_v1 & 1)) {

    } else {
        func_0001DA90(arg0, (s32) "</B>");
    }
    if (*M2C_FIELD(arg1, s8 **, 0x3C) == 0) {

    } else {
        func_0001DA90(arg0, (s32) "</A>");
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00015A8C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5814);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B581C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5824);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B582C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00015B0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016218);

void func_0001627C(void *arg0) {
    s32 temp_v0;

    if (!(M2C_FIELD(arg0, s32 *, 0xE4) & 8)) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 != M2C_FIELD(arg0, s32 *, 4)) {
            func_00016218(arg0);
        } else {
            func_00017884((s32) arg0, temp_v0, temp_v0 + 1);
        }
        func_00011F50((s32) arg0);
    }
}

void func_000162DC(void *arg0) {
    s32 temp_a1;
    s32 temp_v1;

    if (!(M2C_FIELD(arg0, s32 *, 0xE4) & 8)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != M2C_FIELD(arg0, s32 *, 4)) {
            func_00016218(arg0);
        } else if (temp_v1 > 0) {
            func_00017884((s32) arg0, temp_v1 - 1, temp_v1);
            temp_a1 = M2C_FIELD(arg0, s32 *, 4) - 1;
            func_000167AC((s32) arg0, temp_a1, temp_a1, 0);
        }
        func_00011F50((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016358);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016444);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016490);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000164DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016560);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000165E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000166C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000167AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016868);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000168F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000169B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016A8C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016B30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016D3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016DD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016E90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00016F9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001700C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00017050);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000170A8);

s32 func_00017118(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 4) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00017134);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000171C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00017254);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000172E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001736C);

void func_000177F4(void *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_v1;

    M2C_FIELD(arg0, s32 *, 0x94) = arg1;
    var_a2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x170) > 0) {
        var_v1 = 0;
        do {
            var_a2 += 1;
            M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x160) + var_v1), s32 *, 0x4C) = arg1;
            var_v1 += 0x64;
        } while (var_a2 < M2C_FIELD(arg0, s32 *, 0x170));
    }
}

void func_00017830(void *arg0, s32 arg1) {
    func_00017884((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x268));
    func_000133D0((s32) arg0, arg1, sceHVNetfront_Module_15875ED4(arg1), 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00017884);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00017C44);

void func_00017EDC(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xE4) & 8) {

    } else {
        func_00017F68();
        func_00016218(arg0);
    }
}

void func_00017F20(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xE4) & 0x200)) {
        func_000152E4((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x268), (s32) "\r");
    } else {
        func_00015B0C((s32) arg0, 0, M2C_FIELD(arg0, s32 *, 0x268));
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00017F68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00017FF0);

s32 func_0001812C(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0xE4) & 8)) {
        var_v1 = func_0008C66C(*M2C_FIELD(arg0, s32 **, 0x2C)) != 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00018168);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000181EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000182AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00018354);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000183D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00018548);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00018628);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00018C64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00018CB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00018EC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00019814);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00019A98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00019D98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00019FBC);

void func_0001A35C(s32 *arg0) {
    *arg0 = 0;
    func_0001A37C();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001A37C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001A3E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001A4A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001A624);

s32 func_0001A72C(void *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 < M2C_FIELD(arg0, s32 *, 0x170))) {
        return M2C_FIELD(arg0, s32 *, 0x160) + (arg1 * 0x64);
    }
    return 0;
}

s32 func_0001A764(void *arg0, s32 arg1) {
    if ((arg1 >= 0) && (arg1 < M2C_FIELD(arg0, s32 *, 0x174))) {
        return M2C_FIELD(arg0, s32 *, 0x164) + (arg1 * 0x24);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001A798);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001A810);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001AAF0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001AB7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001AC14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5978);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001ACAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001ACF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001AD70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001ADEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001AE5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001AFF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001B214);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B59A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B59AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B59B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B59C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B59D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B59D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001B80C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001B944);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001BA90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001BB84);

void func_0001BCA8(void *arg0) {
    s32 temp_s1;

    if (func_0001BD18((s32) arg0, M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x30)) == 0) {
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x2C);
        if (temp_s1 == 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        } else {
            func_00090730(*func_0009F1C0(), temp_s1, 0);
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001BD18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001C104);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001C244);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001C360);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001C548);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001C60C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001C6F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001C7DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001C930);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CA7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CAA0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CAC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CAF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CB50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CC0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CCE0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CD64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CDDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CE14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CE54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CEB8);

s32 func_0001CF38(s32 arg0, M2C_UNK arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 > 0) {
        var_v0 = func_0001CEB8(arg1) % arg0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CF7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CFA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001CFCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D06C);

s32 func_0001D094(s32 arg0, s32 arg1) {
    if (arg0 != arg1) {
        func_0001CFCC();
    }
    return arg0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D0C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D0F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D108);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D150);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D208);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D2E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D3D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D400);

void func_0001D4F0(s32 arg0, void *arg1) {
    func_0001D2E4(arg0, (s32) M2C_FIELD(arg1, s8 *, 0));
    func_0001D2E4(arg0, (s32) M2C_FIELD(arg1, s8 *, 1));
    func_0001D2E4(arg0, (s32) M2C_FIELD(arg1, s8 *, 2));
}

void func_0001D53C(s32 arg0, s32 arg1) {
    if (arg1 >= 0xA) {

    } else {
        func_0001D2E4(arg0, 0x30);
    }
    func_0001D400(arg0, arg1, 0xA);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D594);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D664);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D6A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D6D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D7D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D858);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001D9A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001DA90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001DBA8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001DD84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001DE04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001DE4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001DEA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001DF00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001DF84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E044);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E0BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E13C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E198);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E1CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E244);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E2CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E300);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E494);

s32 func_0001E4E8(s32 arg0) {
    return (u32) ((arg0 - 0x41) & 0xFF) < 0x1AU;
}

s32 func_0001E4F8(s32 arg0) {
    return (u32) ((arg0 - 0x61) & 0xFF) < 0x1AU;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E508);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E55C);

void func_0001E5B0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_00090648(*func_0009F1C0(), 0x14, 0);
    func_0001F990(temp_v0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), arg2 < 6);
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void func_0001E628(void *arg0, void *arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_00090648(*func_0009F1C0(), 0x14, 0);
    func_0001F990(temp_v0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), arg2 < 6);
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E6A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E728);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E7B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E890);

void func_0001E994(void *arg0, void **arg1) {
    void *temp_a1;

    temp_a1 = *arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, void **, 0) = temp_a1;
    if (temp_a1 != NULL) {
        M2C_FIELD(temp_a1, s32 *, 8) = (s32) (M2C_FIELD(temp_a1, s32 *, 8) + 1);
    }
}

void func_0001E9B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void func_0001E9C4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001E9D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001EA80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001EB30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001EC2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001ED04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001EE0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001EF04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F058);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F10C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F168);

s32 func_0001F1E8(s32 *arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_v1;

    temp_a0 = *arg0;
    var_v1 = 0;
    if (temp_a0 != 0) {
        temp_v0 = *arg1;
        if (temp_v0 != 0) {
            var_v1 = func_0001FC2C(temp_a0, temp_v0);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F228);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F304);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F360);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F468);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F570);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F65C);

s32 func_0001F7A0(s32 **arg0) {
    s32 *temp_a0;
    s32 var_v0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = *temp_a0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F7B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F854);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F8B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001F990);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001FA38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001FAF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001FC2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001FCCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001FDB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001FEC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001FEEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0001FFFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020038);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020074);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000200CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020228);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002034C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020388);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000203A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000203BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000203DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020438);

void func_0002047C(s32 arg0, void *arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_v1 != 0x80000000) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (temp_v1 + arg0);
        M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - arg0);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) + arg0);
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) (M2C_FIELD(arg1, s32 *, 0xC) - arg0);
        func_00020534((s32) arg1);
    }
}

void func_000204D8(s32 arg0, void *arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0);
    if (temp_v1 != 0x80000000) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (temp_v1 - arg0);
        M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + arg0);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) - arg0);
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) (M2C_FIELD(arg1, s32 *, 0xC) + arg0);
        func_00020534((s32) arg1);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020534);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B5A74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6274);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B62A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B62D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B62D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B634C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6354);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6454);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6558);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B655C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020578);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020638);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000206D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020764);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000207E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020848);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020894);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020960);

void func_0002099C(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg0, s32 *, 8));
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000209C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020A40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020C38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020E4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020F1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00020FD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000215F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021A40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021B20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021B40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021BA8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021BC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021BE4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021D6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021DB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021E0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021E54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021F3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00021FC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022068);

void func_000220E8(void *arg0) {
    void *temp_s0;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 0x14);
    if (var_v1 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_v1, void **, 8);
            if (M2C_FIELD(var_v1, u16 *, 0x14) == 0) {
                func_00021F3C(arg0, var_v1);
            }
            var_v1 = temp_s0;
        } while (temp_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022144);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000221CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022254);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000222A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000222FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022370);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022410);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000224B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022588);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000226F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000227BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000228C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022A60);

void func_00022AA4(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0001DEA4(arg1, arg2, M2C_FIELD(arg0, u8 *, 0x14) & 1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022AD0);

void func_00022B1C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 1;
}

void func_00022B28(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {

    } else {
        func_0006CF30((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022B58);

void func_00022BC8(M2C_UNK **arg0) {
    *arg0 = &D_000B6698;
    func_00022C60();
    func_00022CA4((s32) arg0);
    func_00022254((s32) arg0);
}

void func_00022C08(M2C_UNK **arg0) {
    *arg0 = &D_000B6698;
    func_00022C60();
    func_00022CA4((s32) arg0);
    func_00022254((s32) arg0);
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022C60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022CA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022DBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022DC4);

void func_00022DD0(void) {
}

void func_00022DD8(M2C_UNK **arg0) {
    *arg0 = &D_000B66B8;
    func_000224B8();
    func_00022254((s32) arg0);
}

void func_00022E10(M2C_UNK **arg0) {
    *arg0 = &D_000B66B8;
    func_000224B8();
    func_00022254((s32) arg0);
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00022E60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023284);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000234CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002358C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023734);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023778);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002383C);

void func_00023874(M2C_UNK **arg0) {
    *arg0 = &D_000B6768;
    func_000224B8();
    func_00022254((s32) arg0);
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000238C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023904);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023950);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023998);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000239F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023A44);

void func_00023A98(s32 arg0) {
    func_00023EB8();
    func_0002383C(arg0 + 4);
}

void func_00023AC8(s32 arg0) {
    func_00023EB8();
    func_0002383C(arg0 + 4);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023AF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023C60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023CEC);

void func_00023DDC(void) {
    func_0002358C();
}

void func_00023DF8(void) {
    func_00023778();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023E14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023E50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023E90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023EB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023ED4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023EFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6584);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6698);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B66B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B66D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B66F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B66FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6708);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6714);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6728);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6738);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6744);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6748);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B674C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6750);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6754);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6758);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B675C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6768);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6780);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B678C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00023F24);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024130);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024174);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000241B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6954);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024364);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002471C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024884);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024A00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024AB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024B70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024C40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024DFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6B98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BB4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BB8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BBC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BC0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BC4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BC8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BCC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BD4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BE4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6BF0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6C08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6C14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024ED4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6C3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00024FDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002504C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000250B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000250DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00025100);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00025150);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000251A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00025208);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000253A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00025494);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00025548);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002562C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000256B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00025D40);

void func_0002629C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x1014);
    if (temp_v0 == 0) {

    } else {
        func_000253A8(temp_v0, arg0);
    }
}

s32 func_000262D4(void) {
    return 0;
}

s32 func_000262DC(void) {
    return 0;
}

s32 func_000262E4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000262EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026378);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026404);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026444);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026484);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026558);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002671C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002677C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026824);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026854);

void func_0002692C(s32 arg0) {
    func_00026854(arg0, func_0002695C());
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002695C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026A60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026AB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026B1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026C04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026C60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026CC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026CFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00026E58);

void func_00026FB4(M2C_UNK *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_s0;
    M2C_UNK *var_v1;

    var_s0 = arg0;
    func_0002736C(arg1);
    var_v1 = *var_s0;
    if (var_v1 != NULL) {
        do {
            temp_v0 = *var_v1;
            var_s0 = var_v1;
            var_v1 = temp_v0;
        } while (temp_v0 != NULL);
    }
    *var_s0 = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00027008);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000271C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00027254);

s32 func_00027314(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x1AC) ^ 1;
}

s32 func_00027320(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00090F90(arg0 + 0x160) == 0) {
        var_v1 = func_00090F90(arg0 + 0x180) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002736C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6C54);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6C5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6C64);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6C6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6C74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6C80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6C98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6CA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6CC0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6CCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000273B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002756C);

void func_000275D4(void) {
    func_000275F0();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000275F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000276AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00027728);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00027924);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000279A4);

void func_000279F4(s32 arg0) {
    func_00091F70(arg0 + 8);
}

void func_00027A10(s32 arg0) {
    func_00091F68(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00027A2C);

s32 func_00027CD4(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x31BC);
    temp_s0 = __builtin_allegrex_min(arg2, M2C_FIELD(arg0, s32 *, 0x31C8) - temp_v1);
    sceHVNetfront_Module_1A02495A((s32) (arg0 + temp_v1 + 0x11BC), arg1, temp_s0, arg3);
    M2C_FIELD(arg0, s32 *, 0x31BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x31BC) + temp_s0);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00027D2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00027DB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6D6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6D74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6D7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6D84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6D90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6D9C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DB4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00027E5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000282A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00028348);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002854C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00028848);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00028A4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00028D50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00028EEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00028FAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00029080);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000290E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00029154);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DE4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DEC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DF0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DF8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6DFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00029244);

void func_00029584(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002958C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00029660);

void func_000297B8(void *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0;
    void *temp_v0_2;

    if (M2C_FIELD(arg0, s32 *, 0) != 3) {

    } else {
        temp_s1 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_s1 != 0) {
            temp_v0 = func_0001F7B8(arg1);
            if (temp_v0 != 0) {
                temp_v0_2 = func_000608F4(temp_s1, temp_v0);
                if (temp_v0_2 != NULL) {
                    func_000628A8(arg0, (s32) temp_v0_2, 1);
                }
                func_00090730(*func_0009F1C0(), temp_v0, 0);
            }
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00029858);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6E1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6E20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6E38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6E44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6E54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00029CD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002AA84);

void func_0002AAEC(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_a2;
    s32 var_v0;
    s32 var_v1;

    var_v0 = *arg1;
    if (var_v0 < 0) {
        *arg1 = 0;
        var_v0 = 0;
    }
    if (var_v0 >= arg2) {
        *arg1 = arg2;
    }
    var_v1 = *arg0;
    if (var_v1 < 0) {
        *arg0 = 0;
        var_v1 = 0;
    }
    if (var_v1 >= arg2) {
        *arg1 = 0;
        var_v1 = 0;
        *arg0 = 0;
    }
    temp_a2 = *arg1;
    if (temp_a2 < var_v1) {
        *arg0 = temp_a2;
        *arg1 = var_v1;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002AB58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6E5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6E60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6E94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002ABA8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002BB10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002BB38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002BB60);

s32 func_0002BBA8(void *arg0) {
    s32 var_a1;
    void *temp_a0;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == 3) {
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        if (temp_a0 != NULL) {
            if (M2C_FIELD(temp_a0, s32 *, 0x7C) == 0xA) {
                var_a1 = M2C_FIELD(temp_a0, s32 *, 0x6C);
            }
        }
    }
    return var_a1;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6F10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6F14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6F18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6F1C);

void func_0002BBE4(s32 arg0) {
    func_00061B38(arg0, (s32) "contentType\0docTypeDecl\0ignoreWhite\0loaded\0status\0xmlDecl", (s32) &func_0002FA78, 0);
}

void func_0002BC10(s32 arg0) {
    func_00061B38(arg0, (s32) &D_000B6F5C, (s32) &func_0002E318, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002BC3C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6F5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6FCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002BCAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002BE0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002BE34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002BF54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002BFB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C090);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C1B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C2E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C364);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C43C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C478);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C4B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C4F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C54C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C68C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C908);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002C9AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002CB28);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002CBB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002CCC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002CE88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002CF38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002D310);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002D4C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002D5AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002D674);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002D898);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002DA14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002DBEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002DD4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002DDC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002DEC4);

s32 func_0002DF4C(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x40) != 0;
    }
    return var_v1;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B6FD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002DF68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002E054);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002E184);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002E318);

void func_0002E590(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002E5A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002E5E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002E720);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002E7BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002E874);

s32 func_0002E92C(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v0 != 0) {
        func_0001D094(arg1, temp_v0);
        var_v1 = 1;
    }
    return var_v1;
}

void func_0002E968(void *arg0) {
    func_0007AE5C(M2C_FIELD(arg0, s32 *, 0x24));
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002E984);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002E9A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002EA70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002EC04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002F070);

void func_0002F0F0(s32 arg0, s32 arg1, s32 arg2) {
    func_0002F070(arg0, 1, arg1, arg2);
}

void func_0002F114(s32 arg0, s32 arg1, s32 arg2) {
    func_0002F070(arg0, 3, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002F138);

void func_0002F800(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) ((arg1 & 0xFF) == 0);
}

void func_0002F810(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    func_0001D094((s32) (arg0 + 0x50), arg1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002F830);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002F8D8);

void func_0002F9F0(void *arg0, M2C_UNK arg1) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x5C);
    if ((temp_v1 == NULL) || (M2C_FIELD(temp_v1, s32 *, 4) == 0)) {

    } else {
        func_0001D0C4(arg1, temp_v1);
    }
    if (M2C_FIELD(arg0, void **, 0x60) != NULL) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), s32 *, 4) == 0) {

        } else {
            func_0001D0C4(arg1, M2C_FIELD(arg0, void **, 0x60));
        }
    }
    func_0002E184(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002FA78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0002FD9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030324);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000303FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000304BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003057C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003063C);

void func_000306CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0x2000;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0) = func_00090648(*func_0009F1C0(), 0x2000, 0);
}

void func_00030714(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 == 0) {

    } else {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

void func_0003075C(s32 *arg0) {
    s32 temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 == 0) {

    } else {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000307A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000308AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030950);

s32 func_000309CC(void *arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a2;

    temp_a1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    var_a2 = temp_v1 - temp_a1;
    if (temp_v1 < temp_a1) {
        var_a2 = (temp_v1 + M2C_FIELD(arg0, s32 *, 4)) - temp_a1;
    }
    return var_a2;
}

s32 func_000309F4(void *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = 0;
    if (func_000309CC(arg0) >= arg1) {
        var_a1 = 1;
        M2C_FIELD(arg0, s32 *, 8) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 8) + arg1) % (s32) M2C_FIELD(arg0, s32 *, 4));
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030A58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030AA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7118);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B711C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7128);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7138);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7148);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7158);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7160);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B716C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7178);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7184);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7190);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7198);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B71A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B71B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030AF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030C08);

void func_00030CF8(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {

    } else {
        func_000308AC(arg0 + 0x18, arg1 & 0xFF);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030D30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030E08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030ECC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030F08);

s32 func_00030F5C(void) {
    return 0;
}

s32 func_00030F64(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030F6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030FDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00030FE8);

void func_00030FF4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_000670B8(M2C_FIELD(arg0, s32 *, 0), 0x7EFFFFFF);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00031034);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B71C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B71F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7204);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7210);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000310B4);

s32 func_00031204(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000310B4(arg1);
    func_00031798(arg0, arg1, 0, arg2);
    return arg0;
}

void func_0003125C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000314D8(arg0);
    func_000318CC(arg0, 0, arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000312BC);

s32 func_00031404(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000312BC(arg1, arg2);
    func_00031798(arg0, arg1, arg2, arg3);
    return arg0;
}

void func_0003146C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000314D8(arg0);
    func_000318CC(arg0, arg1, arg2, arg3, arg4);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000314D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000316C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7250);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7260);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7270);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7278);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7280);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7288);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00031798);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000318CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00031A34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00031B7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00031BC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00031CB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00031D5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00031DB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00031F7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032580);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7334);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032670);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032A04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032ACC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032B58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032B8C);

void func_00032C48(s32 arg0, s32 arg1, s32 arg2) {
    func_0003125C(arg0 + 4, arg1, arg2, 1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032C68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032CB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032D00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032D50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00032E38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000330E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003320C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000332A4);

void func_00033408(void *arg0, s32 arg1) {
    void *sp0;
    func_000437AC(&sp0, M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    func_0004388C(&sp0);
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7388);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7390);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003344C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B739C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B73A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B73B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00033884);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00033A0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00033A74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00033A9C);

void func_00033BF0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_t2;
    u32 temp_lo;
    void *var_t0;
    void *var_t1;

    var_t1 = arg0;
    var_t0 = arg1;
    var_t2 = arg2 - 1;
    if (arg2 > 0) {
        do {
            temp_a0 = 0x100 - M2C_FIELD(var_t1, u16 *, 6);
            temp_lo = M2C_FIELD(var_t0, s32 *, 0) * temp_a0;
            temp_v0 = M2C_FIELD(var_t1, s32 *, 0);
            temp_a1 = M2C_FIELD(var_t1, s32 *, 4);
            temp_a3 = var_t2;
            var_t1 += 8;
            M2C_FIELD(var_t0, s32 *, 0) = (s32) ((temp_v0 + (temp_lo >> 8)) & 0xFF00FF);
            M2C_FIELD(var_t0, s32 *, 4) = (s32) ((temp_a1 + ((u32) (M2C_FIELD(var_t0, s32 *, 4) * temp_a0) >> 8)) & 0xFF00FF);
            var_t2 -= 1;
            var_t0 += 8;
        } while (temp_a3 > 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00033C70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00033CEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00033D64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00033D8C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B73C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000B7448);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD0E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD2F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00033E14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00034038);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00034084);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00034194);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000342EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00034D3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00034D60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00034DF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00034F54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000351BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00035298);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00035558);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00035750);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000358EC);

void func_00035988(s32 arg0) {
    func_000220E8(arg0 + 0x88);
    func_000220E8(arg0 + 0xA8);
    func_000220E8(arg0 + 0xC8);
}

s32 func_000359C4(void *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 0x40) != 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000359E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00035B3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00035D14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00035DD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00035E5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00035ED0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00036060);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00036124);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000361CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003626C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003630C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003637C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003640C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000364A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00036508);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003656C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000365CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000367E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000369E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00036A78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00036AC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00036B4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00036CA8);

void func_00037594(void *arg0) {
    M2C_UNK *temp_s0_2;
    M2C_UNK *var_a1;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x130) = (M2C_UNK *) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x114) * 4) + M2C_FIELD(arg0, void **, 0x4C)), M2C_UNK **, 0x368);
    } else {
        M2C_FIELD(arg0, M2C_UNK **, 0x130) = &func_0003656C;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x7C) = temp_v0;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0) - 1;
    if (temp_v0 >= M2C_FIELD(arg0, s32 *, 0x30)) {
        var_a1 = M2C_FIELD(arg0, M2C_UNK **, 0x6C);
    } else {
        do {
            func_00035ED0((s32) arg0);
            func_00036060((s32) arg0);
            func_00036B4C((s32) arg0);
            if ((temp_s0 != 0) && ((M2C_FIELD(arg0, s32 *, 0x7C) & temp_s0) == temp_s0)) {
                func_00036CA8((s32) arg0);
            }
            if (!(M2C_FIELD(arg0, s32 *, 0x7C) & 0x1F)) {
                func_0004B56C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), s32 *, 8));
            }
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x7C) + 1;
            M2C_FIELD(arg0, s32 *, 0x7C) = temp_v1;
        } while (temp_v1 < M2C_FIELD(arg0, s32 *, 0x30));
        var_a1 = M2C_FIELD(arg0, M2C_UNK **, 0x6C);
    }
    if (var_a1 != NULL) {
        do {
            temp_s0_2 = *var_a1;
            func_00022068((s32) (arg0 + 0x88), var_a1);
            var_a1 = temp_s0_2;
        } while (temp_s0_2 != NULL);
    }
    temp_s0_3 = M2C_FIELD(arg0, s32 *, 0x5C);
    M2C_FIELD(arg0, M2C_UNK **, 0x6C) = NULL;
    if (temp_s0_3 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0_3, 0);
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000376D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00037714);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003779C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00037800);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000378C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00037B80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00037CAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00037D7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00037E44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00037F0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00037F38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00038070);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000381A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00038208);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00038274);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000382E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00038520);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00038688);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000387F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003893C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00038B64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00038CA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00038DAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00038F40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00039150);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00039270);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00039390);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000394C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00039750);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00039A14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00039C34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00039EF0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003A220);

void func_0003A4C0(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003A4C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003A5FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003A778);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003A894);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003AD4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B0E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B220);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B244);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B28C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B378);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B46C);

void func_0003B604(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0x12) {
        func_0003B378((s32) arg0, arg1, arg2);
    } else {
        func_0003B46C((s32) arg0, arg1, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B640);

void func_0003B704(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    func_00033C70(arg0 + 0x20, arg3, arg2 - arg1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B728);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B77C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B7D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B8C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B92C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003B99C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003BA0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003BA7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003BB64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003BC08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003BCCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003BDBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003BDE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003BE14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003BE34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003BF5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003C018);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003C0A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003C1E0);

s32 func_0003C264(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) {
        if ((M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4)) && (M2C_FIELD(arg0, s32 *, 8) == M2C_FIELD(arg1, s32 *, 8)) && (M2C_FIELD(arg0, s32 *, 0xC) == M2C_FIELD(arg1, s32 *, 0xC))) {
            var_a2 = M2C_FIELD(arg0, s32 *, 0x10) == M2C_FIELD(arg1, s32 *, 0x10);
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003C2C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003C324);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003C390);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003C4DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003C670);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003C810);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003C8AC);

void func_0003C908(s32 *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) * *arg0);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) * *arg0);
    M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) * *arg0);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) (M2C_FIELD(arg1, s32 *, 0xC) * *arg0);
}

void func_0003C95C(s32 *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0) / (s32) *arg0);
    M2C_FIELD(arg1, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 4) / (s32) *arg0);
    M2C_FIELD(arg1, s32 *, 8) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 8) / (s32) *arg0);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0xC) / (s32) *arg0);
}

void func_0003C9B8(s32 *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) * *arg0);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) * *arg0);
}

void func_0003C9E4(s32 *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0) / (s32) *arg0);
    M2C_FIELD(arg1, s32 *, 4) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 4) / (s32) *arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003CA18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003CAE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD348);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD388);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD398);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD3D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD41C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD460);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD484);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD494);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD4BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD4D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD4E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD508);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD514);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003CB6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003CC50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003CCC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003CEA0);

void func_0003D55C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0;
    if (temp_v0 != 1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0);
}

void func_0003D584(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0;
    if (temp_v0 == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003D5A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003D5C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003D60C);

void func_0003D734(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_s0 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_s0_2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_s0_2 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0_2, 0);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003D7B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003D86C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003DA50);

void func_0003DC34(void *arg0) {
    void *temp_v0;
    void *var_v1;

    func_00050610(arg0 + 0x30);
    var_v1 = M2C_FIELD(arg0, void **, 0x2C8);
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x3C);
            M2C_FIELD(var_v1, s32 *, 0x70) = 0;
            var_v1 = temp_v0;
            M2C_FIELD(arg0, void **, 0x2C8) = temp_v0;
        } while (temp_v0 != NULL);
    }
    func_00041450(arg0 + 0x58C);
    func_00041450(arg0 + 0x580);
    func_00041450(arg0 + 0x574);
    func_00041450(arg0 + 0x568);
    func_00021E0C(arg0 + 0x548);
    func_00021E0C(arg0 + 0x528);
    func_00021E0C(arg0 + 0x508);
    func_000358EC(arg0 + 0x188);
}

void func_0003DCBC(void *arg0) {
    void *temp_v0;
    void *var_v1;

    func_00050610(arg0 + 0x30);
    var_v1 = M2C_FIELD(arg0, void **, 0x2C8);
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x3C);
            M2C_FIELD(var_v1, s32 *, 0x70) = 0;
            var_v1 = temp_v0;
            M2C_FIELD(arg0, void **, 0x2C8) = temp_v0;
        } while (temp_v0 != NULL);
    }
    func_00041450(arg0 + 0x58C);
    func_00041450(arg0 + 0x580);
    func_00041450(arg0 + 0x574);
    func_00041450(arg0 + 0x568);
    func_00021E0C(arg0 + 0x548);
    func_00021E0C(arg0 + 0x528);
    func_00021E0C(arg0 + 0x508);
    func_000358EC(arg0 + 0x188);
}

void func_0003DD44(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x3C) = (void *) M2C_FIELD(arg0, void **, 0x2C8);
    M2C_FIELD(arg0, void **, 0x2C8) = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003DD54);

s32 func_0003DE84(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0)) * (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg0, s32 *, 8));
}

s32 func_0003DEA8(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0) < M2C_FIELD(arg1, s32 *, 4)) && (M2C_FIELD(arg1, s32 *, 0) < M2C_FIELD(arg0, s32 *, 4)) && (M2C_FIELD(arg0, s32 *, 8) < M2C_FIELD(arg1, s32 *, 0xC))) {
        var_a2 = M2C_FIELD(arg1, s32 *, 8) < M2C_FIELD(arg0, s32 *, 0xC);
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003DEF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003E0EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003E2CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003E3B4);

void func_0003E4A4(void *arg0) {
    void *var_s0;

    func_0004E740();
    var_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (var_s0 != NULL) {
        do {
            func_0003E4A4(var_s0);
            var_s0 = M2C_FIELD(var_s0, void **, 8);
        } while (var_s0 != NULL);
    }
}

void func_0003E4E4(s32 arg0) {
    func_0003E4A4(arg0 + 0x30);
    func_000220E8(arg0 + 0x508);
    func_000220E8(arg0 + 0x548);
    func_000220E8(arg0 + 0x528);
    func_00035988(arg0 + 0x188);
}

void func_0003E530(s32 arg0, void **arg1) {
    void *temp_s0;
    void *var_s1;

    var_s1 = *arg1;
    *arg1 = NULL;
    if (var_s1 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_s1, void **, 8);
            M2C_FIELD(var_s1, void **, 8) = NULL;
            func_00033D8C(var_s1);
            func_00022068(arg0 + 0x528, var_s1);
            var_s1 = temp_s0;
        } while (temp_s0 != NULL);
    }
}

void func_0003E590(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE8) = arg1;
    func_0003EA70();
    func_0003E3B4(arg0, arg0 + 0x104);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003E5C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003EA70);

void func_0003EACC(void *arg0) {
    func_0003EA70();
    func_0003E3B4(arg0, arg0 + 0x104);
    func_000506B0(arg0 + 0x30);
}

void func_0003EB08(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0xE4) < arg2) {
        if (M2C_FIELD(arg0, s32 *, 0xE0) != arg1) {
            func_0003E3B4(arg0, arg0 + 0x104);
            M2C_FIELD(arg0, s32 *, 0xE0) = arg1;
        }
        M2C_FIELD(arg0, s32 *, 0xE4) = arg2;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003EB68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003EBC0);

void func_0003F104(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x100) != 0) {
        func_00050704(arg0 + 0x30, arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x100) = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003F148);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003F21C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD5DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD65C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD6DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003F398);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0003FEB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00040024);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004009C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000400E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00040238);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00040298);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00040434);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00040454);

void func_00040830(s32 arg0, void *arg1) {
    void *temp_v0;
    void *var_a1;
    void *var_s0;

    if (arg1 != NULL) {
        temp_v0 = M2C_FIELD(arg1, void **, 0x10);
        if ((temp_v0 == NULL) || (M2C_FIELD(temp_v0, u8 *, 0xB) != 9)) {
            var_s0 = M2C_FIELD(arg1, void **, 0xC);
        } else {
            func_00019A98(M2C_FIELD(arg1, s32 *, 0xA0));
            var_s0 = M2C_FIELD(arg1, void **, 0xC);
        }
        if (var_s0 != NULL) {
            var_a1 = var_s0;
            do {
                func_00040830(arg0, var_a1);
                var_s0 = M2C_FIELD(var_s0, void **, 8);
                var_a1 = var_s0;
            } while (var_s0 != NULL);
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000408B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD768);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00040B90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD7B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041030);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041150);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000412EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004134C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041414);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041424);

void func_00041434(void) {
    func_00041580();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041450);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004146C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041540);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041580);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000415F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041664);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000416E4);

void func_0004181C(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    M2C_FIELD(arg0, void **, 0xC) = arg4;
    if (arg4 != NULL) {
        func_000425E8(arg4);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void func_00041860(void) {
    func_000418B0();
}

void func_0004187C(void) {
    func_000418B0();
}

void func_00041898(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        *arg0 = temp_v0 + arg1;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000418B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000418FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004195C);

void func_00041C8C(s32 arg0, M2C_UNK arg1) {
    func_0003C810(arg0 + 0x188, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041CB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041D08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041D5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041DBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00041DE0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004200C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000421D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000421F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042250);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042310);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000423D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004249C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042568);

void func_000425E8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
}

void func_000425F8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x38) - 1;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_v0;
    if (temp_v0 == 0) {
        if (arg0 != NULL) {
            func_0004249C();
            func_00090730(*func_0009F1C0(), (s32) arg0, 0);
        }
    }
}

void func_00042650(void *arg0) {
    func_00042AF4(M2C_FIELD(arg0, s32 *, 0x44));
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004266C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042730);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000427F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042974);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042AF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042B8C);

void func_00042BD0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 1);
}

void func_00042BE0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C) - 1;
    M2C_FIELD(arg0, s32 *, 0x3C) = temp_v0;
    if (temp_v0 == 0) {
        if (arg0 != NULL) {
            func_00042974();
            func_00090730(*func_0009F1C0(), (s32) arg0, 0);
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042C38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042D9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042DFC);

void func_00042E88(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00090648(*func_0009F1C0(), 0x3C, 0);
    func_00042F7C(temp_v0, arg1);
    temp_v0_2 = M2C_FIELD(arg0, void **, 0x54);
    if (temp_v0_2 == NULL) {
        M2C_FIELD(arg0, s32 *, 0x50) = temp_v0;
    } else {
        M2C_FIELD(temp_v0_2, s32 *, 0x38) = temp_v0;
    }
    M2C_FIELD(arg0, void **, 0x54) = (void *) temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042EF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00042F7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043004);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043020);

void func_0004303C(void *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;
    void *var_v1_2;

    var_v1 = M2C_FIELD(arg0, void **, 0x14);
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x50);
            M2C_FIELD(var_v1, s32 *, 0x48) = 0;
            var_v1 = temp_v0;
            M2C_FIELD(arg0, void **, 0x14) = temp_v0;
        } while (temp_v0 != NULL);
    }
    var_v1_2 = M2C_FIELD(arg0, void **, 0xC);
    if (var_v1_2 != NULL) {
        do {
            temp_v0_2 = M2C_FIELD(var_v1_2, void **, 0x5C);
            M2C_FIELD(var_v1_2, s32 *, 0x44) = 0;
            var_v1_2 = temp_v0_2;
            M2C_FIELD(arg0, void **, 0xC) = temp_v0_2;
        } while (temp_v0_2 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_00043084(void *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;
    void *var_v1_2;

    var_v1 = M2C_FIELD(arg0, void **, 0x14);
    if (var_v1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_v1, void **, 0x50);
            M2C_FIELD(var_v1, s32 *, 0x48) = 0;
            var_v1 = temp_v0;
            M2C_FIELD(arg0, void **, 0x14) = temp_v0;
        } while (temp_v0 != NULL);
    }
    var_v1_2 = M2C_FIELD(arg0, void **, 0xC);
    if (var_v1_2 != NULL) {
        do {
            temp_v0_2 = M2C_FIELD(var_v1_2, void **, 0x5C);
            M2C_FIELD(var_v1_2, s32 *, 0x44) = 0;
            var_v1_2 = temp_v0_2;
            M2C_FIELD(arg0, void **, 0xC) = temp_v0_2;
        } while (temp_v0_2 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void func_000430CC(void *arg0) {
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (var_s0 != NULL) {
        do {
            func_00042B8C(var_s0);
            var_s0 = M2C_FIELD(var_s0, void **, 0x5C);
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043104);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043218);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000432B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043444);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043484);

void func_000434BC(void) {
    func_000435EC();
}

void func_000434D8(void) {
    func_000435EC();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000434F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043530);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004356C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000435AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000435EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000435FC);

void func_0004366C(void) {
    func_000436A4();
}

void func_00043688(void) {
    func_000436A4();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000436A4);

void func_000437AC(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_000434F4(arg0, arg1, func_00043104(arg1 + 0xD0C));
    temp_v0 = func_00090648(*func_0009F1C0(), 0x4C, 0);
    func_00041D08(temp_v0, arg1);
    temp_v0_2 = func_00090648(*func_0009F1C0(), 0xC, 0);
    func_00041424(temp_v0_2);
    M2C_FIELD(temp_v0, s32 *, 4) = temp_v0_2;
    func_000421D8(arg1 + 0x5C0, temp_v0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043858);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004388C);

void func_000438C0(void *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg1, void **, 0xD08);
    M2C_FIELD(arg0, void **, 4) = temp_v0;
    if (temp_v0 != NULL) {
        func_000425E8(temp_v0);
    }
    M2C_FIELD(arg0, void **, 0) = arg1;
    func_0007B03C(arg1, 0);
}

void func_00043914(void *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg1, void **, 0xD08);
    M2C_FIELD(arg0, void **, 4) = temp_v0;
    if (temp_v0 != NULL) {
        func_000425E8(temp_v0);
    }
    M2C_FIELD(arg0, void **, 0) = arg1;
    func_0007B03C(arg1, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043968);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000439B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD7E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD7E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000439F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043BE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00043FE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004437C);

void func_0004438C(void) {
}

void func_00044394(void) {
}

void func_0004439C(void **arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x6C) = (void *) *arg0;
    *arg0 = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000443AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000443E0);

void func_00044458(void **arg0, s32 arg1) {
    void *var_s0;

    var_s0 = *arg0;
    if (var_s0 != NULL) {
        do {
            if (M2C_FIELD(var_s0, s32 *, 0x64) != arg1) {
                var_s0 = M2C_FIELD(var_s0, void **, 0x6C);
            } else {
                func_00046250(var_s0);
                var_s0 = M2C_FIELD(var_s0, void **, 0x6C);
            }
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000444B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00044570);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD824);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD828);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD82C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD830);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD838);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD840);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD848);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD850);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD858);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD860);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD868);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD874);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD87C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD888);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD898);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD8C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00044650);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD8D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD8E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD8E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD8EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD8F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD8FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD908);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD910);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD918);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00044FF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000451B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000452E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000452F8);

void func_0004535C(s32 *arg0) {
    void *var_s0;
    void *var_s1;

    var_s0 = *arg0;
    if (var_s0 != NULL) {
        var_s1 = var_s0;
        do {
            var_s0 = M2C_FIELD(var_s0, void **, 4);
            if (var_s1 != NULL) {
                func_00090730(*func_0009F1C0(), (s32) var_s1, 0);
            }
            var_s1 = var_s0;
        } while (var_s0 != NULL);
    }
    *arg0 = NULL;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000453C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00045524);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00045634);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000457C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00045954);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000459C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00045AC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00045BD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00045CF8);

s32 func_00045DBC(void *arg0) {
    s32 temp_v1;
    s32 var_a1;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == 3) {
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x7C);
        switch (temp_v1) {                          /* irregular */
        case 0:
            var_a1 = 1;
            break;
        case 7:
            var_a1 = 1;
            break;
        }
    }
    return var_a1;
}

void func_00045DF8(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_000608F4();
    if ((temp_v0 == NULL) || (func_00045BD4(arg0, temp_v0), (func_00045DBC(temp_v0) == 0))) {

    } else {
        func_00045F60(arg0, M2C_FIELD(temp_v0, s32 *, 8));
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00045E5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00045F60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000460E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00046250);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00046334);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004640C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004649C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00046560);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD954);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD95C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD978);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BD980);

void func_00046628(s32 arg0) {
    if (func_0008D474() == 0) {

    } else {
        func_00046560(arg0);
        func_0004640C(arg0, (s32) "Macromedia");
        func_0004640C(arg0, (s32) "Flash Player");
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00046684);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000467E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00046AB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00046BB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00046CD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00046F04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00047CD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDA4C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDA54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00048334);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00048500);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00048634);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004877C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000487E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000488D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000489D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00048C38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004A16C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004A4C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004A50C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004A570);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004A638);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004ABD0);

