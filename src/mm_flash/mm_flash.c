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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000016B0);

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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000115B4);

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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00033408);

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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004AC08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004AC70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004AE14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004AEC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B034);

s32 func_0004B068(void) {
    return 0;
}

void func_0004B070(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
}

void func_0004B080(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

void func_0004B0C0(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

void func_0004B100(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
}

void func_0004B110(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

void func_0004B150(M2C_UNK **arg0) {
    *arg0 = &D_000BDB40;
}

void func_0004B160(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B168);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B1C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B264);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B304);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B3C0);

void func_0004B47C(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 == 0) {

    } else {
        func_0004CFD8(temp_v0, arg0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B4B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B56C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B708);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B81C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B868);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004B940);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004BA8C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004BBEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004BC6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004BD84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004BE6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004BF48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004BFC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004C0EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004C2CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004CCFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004CD44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004CFD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004CFFC);

void func_0004D0C0(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 4);
    if (var_v0 != NULL) {
        do {
            M2C_FIELD(var_v0, s32 *, 0xC) = 1;
            var_v0 = M2C_FIELD(var_v0, void **, 4);
        } while (var_v0 != NULL);
    }
    func_0004CFFC();
}

void func_0004D0F8(void *arg0, void *arg1) {
    s32 temp_v1;
    void *var_a0;

    var_a0 = M2C_FIELD(arg0, void **, 4);
    if (var_a0 != NULL) {
        do {
            if (M2C_FIELD(var_a0, s32 *, 0x14) == arg1) {
                temp_v1 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x34), s32 *, 0x2DC) + 8;
                M2C_FIELD(var_a0, s32 *, 0x14) = (s32) ((((s32) arg1 ^ temp_v1) == 0) ? 0 : temp_v1);
            }
            var_a0 = M2C_FIELD(var_a0, void **, 4);
        } while (var_a0 != NULL);
    }
}

void func_0004D13C(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 4);
    if (var_s0 != NULL) {
        do {
            if (M2C_FIELD(var_s0, s32 *, 0x10) == arg1) {
                if (arg2 == 0) {
                    M2C_FIELD(var_s0, s32 *, 0xC) = 1;
                } else {
                    temp_v0 = M2C_FIELD(var_s0, void **, 0x18);
                    if ((temp_v0 != NULL) && (func_0001DE04(M2C_FIELD(temp_v0, s32 *, 0x24), arg2) != 0)) {
                        M2C_FIELD(var_s0, s32 *, 0xC) = 1;
                    }
                }
            }
            var_s0 = M2C_FIELD(var_s0, void **, 4);
        } while (var_s0 != NULL);
    }
    func_0004CFFC(arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004D1DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004D21C);

void func_0004D2A8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_a1;
    u8 *var_a0;
    u8 *var_a3;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = var_a0;
    if (arg2 != 0) {
        if (var_a1 > 0) {
            do {
                var_a1 -= 2;
                M2C_FIELD(var_a3, u8 *, 0) = (u8) ((s32) (M2C_FIELD(var_a0, u8 *, 0) + M2C_FIELD(var_a0, u8 *, 2)) >> 1);
                temp_v1 = M2C_FIELD(var_a0, u8 *, 1);
                temp_v0 = M2C_FIELD(var_a0, u8 *, 3);
                var_a0 += 4;
                M2C_FIELD(var_a3, s8 *, 1) = (s8) ((s32) (temp_v1 + temp_v0) >> 1);
                var_a3 += 2;
            } while (var_a1 > 0);
        }
    } else if (var_a1 > 0) {
        do {
            temp_v0_2 = *var_a0;
            var_a1 -= 2;
            var_a0 += 2;
            *var_a3 = temp_v0_2;
            var_a3 += 1;
        } while (var_a1 > 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004D328);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004D404);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004D498);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004D5AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004D8CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004D990);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004DA4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004DD18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004DDB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004DE30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004E0E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004E740);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004E7CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004EB8C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004ECC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0004F808);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00050014);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005007C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005020C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005049C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00050610);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000506B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00050704);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000507C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005089C);

void func_0005096C(void *arg0, M2C_UNK arg1) {
    void *var_a0;
    void *var_s0;

    func_00035DD8(arg1, M2C_FIELD(arg0, s32 *, 0x98));
    var_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (var_s0 != NULL) {
        var_a0 = var_s0;
        do {
            func_0005096C(var_a0, arg1);
            var_s0 = M2C_FIELD(var_s0, void **, 8);
            var_a0 = var_s0;
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000509C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00050B00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00050C04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00050DF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00051040);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00051258);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000514D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDB30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDB34);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDB40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDB60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDB80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDB98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDBA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDBB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDBBC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDBCC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDD30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDD38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDD48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDD68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDDA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDDB8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDDC8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDDD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDDE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00051720);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00051DAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000520D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00052160);

void *func_00052214(void *arg0) {
    s32 temp_v0;
    u8 temp_a1;
    void *temp_a3;
    void *var_v1;

    temp_a3 = M2C_FIELD(arg0, void **, 0x10);
    temp_a1 = M2C_FIELD(temp_a3, u8 *, 0xB);
    if (temp_a1 != 9) {
        if ((((temp_a1 == 6) | (temp_a1 == 0x62)) != 0) || (var_v1 = temp_a3 + 0x14, (temp_a1 == 0x61))) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0xAC);
            var_v1 = temp_v0 + 0xC;
            if (temp_v0 == 0) {
                var_v1 = temp_a3 + 0x14;
            }
        }
    } else {
        var_v1 = func_0001A4A8(M2C_FIELD(arg0, s32 *, 0xA0));
    }
    return var_v1;
}

void func_0005228C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xA4) = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00052294);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000523C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005250C);

void func_0005260C(void *arg0) {
    s32 var_a2;
    void *temp_a3;

    temp_a3 = M2C_FIELD(arg0, void **, 0x10);
    var_a2 = 0;
    if (M2C_FIELD(temp_a3, u8 *, 0xB) == 2) {
        var_a2 = (s32) M2C_FIELD(temp_a3, u8 *, 0x30);
    }
    func_0005250C((s32) arg0, (s32) "trackAsMenu", var_a2);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005264C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000526D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00052778);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000527DC);

void func_00052810(void) {
    func_00052A4C();
}

void func_0005282C(void) {
    func_00052A4C();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00052848);

void func_000528D0(s32 arg0, s32 arg1, s32 arg2) {
    func_00053988(arg0, 7, 0, 0, 0, 0);
    func_00053988(arg0, 2, arg1, arg2, 0, 0);
}

void func_0005293C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00053988(arg0, 3, arg1, arg2, arg3 & 0xFF, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005296C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000529A0);

void func_000529F8(s32 arg0) {
    func_00053988(arg0, 7, 0, 0, 0, 0);
    func_00053988(arg0, 6, 0, 0, 0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00052A4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00052B80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00052DF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00052FB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00053988);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00053C48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00053D4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00053DDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00053E48);

void func_00053EBC(s32 arg0, void *arg1) {
    s32 temp_v0;

    func_00054524();
    temp_v0 = func_00054530(arg0, 5);
    M2C_FIELD(arg1, s32 *, 0) = func_000545BC(arg0, temp_v0);
    M2C_FIELD(arg1, s32 *, 4) = func_000545BC(arg0, temp_v0);
    M2C_FIELD(arg1, s32 *, 8) = func_000545BC(arg0, temp_v0);
    M2C_FIELD(arg1, s32 *, 0xC) = func_000545BC(arg0, temp_v0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00053F44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00054050);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00054194);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000541D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00054278);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000542A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000542F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00054524);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00054530);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000545BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00054604);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00054738);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005486C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005490C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000549AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00054B74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000551C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000559A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00055CD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00055DF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00055F1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00055FAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005603C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000560B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056140);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000561E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000562FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056520);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056808);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056A88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056AEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056B88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056C0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056CA0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056D4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056E00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056EA0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00056F48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00057090);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE34);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE3C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE4C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE54);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE64);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE70);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE78);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDE84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00057454);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00057D18);

void func_00057E78(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x34);
    if (M2C_FIELD(temp_s1, s32 *, 0x2CC) != 0) {

    } else {
        temp_v0 = func_00090648(*func_0009F1C0(), 0x478, 1);
        func_0008FD94(temp_v0);
        M2C_FIELD(temp_s1, s32 *, 0x2CC) = temp_v0;
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x2CC);
        if (temp_v1 != 0) {
            if (func_0008FE1C(temp_v1, arg0) == 0) {
                temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x2CC);
                if (temp_v0_2 != 0) {
                    sceHVNetfront_Module_09FA691C(temp_v0_2);
                }
                temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x2CC);
                if (temp_s0 != 0) {
                    func_0008FDE8(temp_s0);
                    func_00090730(*func_0009F1C0(), temp_s0, 1);
                }
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x2CC) = 0;
            }
        }
    }
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BDEB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00057F5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005852C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000585A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005862C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00058768);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000588C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00058958);

void func_000589E4(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    void *temp_v0;
    void *temp_v1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_a1 + 2);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0) + temp_a1;
    temp_v0 = func_0005AA5C(M2C_FIELD(arg0, s32 *, 0x34), (M2C_FIELD(temp_v1, u8 *, 1) << 8) | M2C_FIELD(temp_v1, u8 *, 0));
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0xB) = 9;
        M2C_FIELD(temp_v0, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 0x18);
        func_00053EBC((s32) arg0, temp_v0 + 0x14);
        temp_a0 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(temp_v0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0) + temp_a0);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_a0 + 2);
        if (!((M2C_FIELD((M2C_FIELD(arg0, s32 *, 0) + temp_a0), u8 *, 1) << 8) & 0x100)) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x70), s32 *, 0xF4) = 1;
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00058A9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00058C04);

void func_00058DDC(void *arg0) {
    func_00058F44(M2C_FIELD(arg0, s32 *, 0x78));
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00058DF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00058E88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00058F44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00059354);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00059400);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00059558);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000598FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005996C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00059B94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00059CC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00059D2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00059D50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00059D98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005A09C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005A280);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005A3EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005A558);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005A5D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005A674);

void func_0005A7A4(void *arg0) {
    if (arg0 != NULL) {
        func_000632B8(arg0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005A7C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005A9DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005AA5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005AB48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005ABC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005AE6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005AF10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005AF64);

void func_0005AFB8(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_s1;
    s32 temp_v1;
    void *temp_a0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    temp_s1 = __builtin_allegrex_min(arg2, M2C_FIELD(arg0, s32 *, 4) - temp_v1);
    sceHVNetfront_Module_1A02495A(M2C_FIELD(arg0, s32 *, 8) + temp_v1, arg1, temp_s1, arg3);
    temp_a0 = arg0 + 0x10;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + temp_s1);
    M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(temp_a0, s32 *, 4) + temp_s1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005B020);

void func_0005B0A8(void *arg0, s32 arg1) {
    void *temp_a0;

    M2C_FIELD(arg0, s32 *, 0x58C) = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x2F8) != 0) {
        temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2DC), void **, 0x1018);
        if (temp_a0 != NULL) {
            M2C_FIELD(temp_a0, s32 *, 0x28) = arg1;
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005B0CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005B15C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005BA20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005BA74);

s32 func_0005BC1C(void *arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (arg1 >= 2) {
        if (M2C_FIELD(arg0, u8 *, 0) == 0xFF) {
            var_a2 = M2C_FIELD(arg0, u8 *, 1) == 0xD8;
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005BC4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005BD60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005BDF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005C12C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005C22C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE20C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE218);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE228);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE22C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE234);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE240);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE244);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE250);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE25C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE264);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE278);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE280);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005DDEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005F094);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005F5EC);

s32 func_0005F7A0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x2FC) != 0) {
        var_v0 = func_0005F7D0((s32) arg0) != 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005F7D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005F87C);

void func_0005F900(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) == 0) {
        M2C_FIELD(arg1, s32 *, 4) = func_0005F938(arg0, M2C_FIELD(arg1, s32 *, 0));
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005F938);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005F9EC);

s32 func_0005FD8C(void *arg0, s32 *arg1, s32 *arg2) {
    s32 var_t1;

    var_t1 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x64) == 0) && (M2C_FIELD(arg0, s32 *, 0x2A0) != 0)) {
        var_t1 = 1;
        *arg1 = (M2C_FIELD(arg0, s32 *, 0x2B0) - M2C_FIELD(arg0, s32 *, 0x2AC)) / 20;
        *arg2 = (M2C_FIELD(arg0, s32 *, 0x2B8) - M2C_FIELD(arg0, s32 *, 0x2B4)) / 20;
    }
    return var_t1;
}

s32 func_0005FE00(void *arg0) {
    s32 temp_v1;
    s32 var_a1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x2DC);
    var_a1 = 0;
    if (temp_v1 != 0) {
        var_a1 = (s32) arg0 == (temp_v1 + 8);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005FE20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005FF04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0005FFE8);

void func_00060068(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void func_00060074(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00060080);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00060264);

void func_00060348(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    }
}

void func_00060368(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00060378);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000603E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00060460);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000604A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000607A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000608F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00060A28);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00060CAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00060ED4);

s32 func_00060F3C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_00060F84(arg0, (s32) &D_000BE244, arg1, 0, (arg2 & 0xFF) | 3);
    M2C_FIELD(arg0, s32 *, 0x88) = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00060F84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006148C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061540);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000615B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061634);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061790);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061870);

void func_000618DC(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    void *temp_s1;
    void *temp_s2;

    temp_s2 = arg0 + 0x18;
    temp_s1 = arg0 + 8;
    M2C_FIELD(arg0, s32 *, 0x18) = 6;
    M2C_FIELD(temp_s1, s32 *, 8) = 0;
    M2C_FIELD(temp_s1, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 6;
    M2C_FIELD(temp_s2, s32 *, 8) = 0;
    M2C_FIELD(temp_s2, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = func_0001E044(arg1);
    func_000628A8(temp_s1, arg2, 1);
    func_000628A8(temp_s2, arg3, 1);
}

void func_00061974(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s1;
    void *temp_s2;

    temp_s2 = arg0 + 0x18;
    temp_s1 = arg0 + 8;
    M2C_FIELD(arg0, s32 *, 0x18) = 6;
    M2C_FIELD(temp_s1, s32 *, 8) = 0;
    M2C_FIELD(temp_s1, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 6;
    M2C_FIELD(temp_s2, s32 *, 8) = 0;
    M2C_FIELD(temp_s2, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = func_0001E044(arg1);
    func_000628A8(temp_s1, arg2, 1);
    func_000628A8(temp_s2, arg3, 1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061A0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061A64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061ABC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061B38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061C00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061D14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061E94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00061F5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000620EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006219C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00062294);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00062314);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006235C);

void func_00062398(s32 arg0, void *arg1, s32 arg2) {
    void *temp_v0;

    func_0006219C(arg0);
    temp_v0 = func_00090648(*func_0009F1C0(), 8, 0);
    func_0001E628(temp_v0, arg1, arg2);
    M2C_FIELD(arg0, void **, 8) = temp_v0;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) + 1);
        M2C_FIELD(arg0, s32 *, 0) = 2;
    }
}

void func_00062424(s32 arg0, void **arg1) {
    void *temp_v0;

    func_0006219C(arg0);
    temp_v0 = func_00090648(*func_0009F1C0(), 8, 0);
    func_0001E994(temp_v0, arg1);
    M2C_FIELD(arg0, void **, 8) = temp_v0;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) + 1);
        M2C_FIELD(arg0, s32 *, 0) = 2;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000624A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00062544);

void func_00062598(s32 arg0, s32 arg1) {
    void *temp_v0;

    func_0006219C(arg0);
    temp_v0 = func_00063D90(arg1 + 0x148);
    M2C_FIELD(arg0, void **, 8) = temp_v0;
    if (temp_v0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0) = 4;
        M2C_FIELD(temp_v0, s32 *, 8) = (s32) (M2C_FIELD(temp_v0, s32 *, 8) + 1);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000625F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00062620);

void func_000626D0(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_v0;

    func_0006219C(arg0);
    temp_v0 = func_000637FC(arg1);
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    if (temp_v0 == 0) {

    } else {
        M2C_FIELD(arg0, s32 *, 0) = 3;
        func_00060074((void *) temp_v0, arg1);
        temp_a1 = M2C_FIELD(arg0, s32 *, 8);
        func_00022588(M2C_FIELD(arg1, s32 *, 0xBD0), temp_a1, temp_a1);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006273C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00062804);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000628A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00062A94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00062AF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00062BA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00062DD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063090);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000631C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000631F8);

void func_000632B8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8) - 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    if (temp_v0 == 0) {
        if (arg0 != NULL) {
            func_00063090();
            func_00090730(*func_0009F1C0(), (s32) arg0, 0);
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063310);

void func_000633C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    void *temp_v0_2;

    func_0006219C(arg2);
    if ((arg1 < 0) || (arg1 >= func_00060264(arg0))) {

    } else {
        temp_v0 = func_0006966C(arg1, 0xA);
        if (temp_v0 != 0) {
            temp_v0_2 = func_000608F4(arg0, temp_v0);
            if (temp_v0_2 != NULL) {
                func_000628A8((void *) arg2, (s32) temp_v0_2, 1);
            }
            func_00090730(*func_0009F1C0(), temp_v0, 0);
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063480);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063508);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000635E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000637FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000638B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063AB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063C2C);

void func_00063CA8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8) - 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    if (temp_v0 == 0) {
        if (arg0 != NULL) {
            func_00063C2C();
            func_00090730(*func_0009F1C0(), (s32) arg0, 0);
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063D00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063D90);

void func_00063E34(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
}

void func_00063E40(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063E4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063EB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00063F24);

void func_00063FD8(void *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_v0 < 0x10) {
        M2C_FIELD(((temp_v0 * 4) + arg0), void **, 4) = arg1;
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) + 1);
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00064010);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00064060);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000640C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00064184);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006420C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000642E4);

void func_00064338(s32 arg0) {
    func_00062620(arg0 + 0x40);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00064354);

s32 func_000643B4(void *arg0) {
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;

    var_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (var_v0 == 0) {
        temp_v1 = M2C_FIELD(arg0, void **, 0x10);
        if (temp_v1 != NULL) {
            temp_v1_2 = M2C_FIELD(temp_v1, void **, 0x34);
            if (temp_v1_2 != NULL) {
                var_v0 = M2C_FIELD(temp_v1_2, s32 *, 0x2DC);
                M2C_FIELD(arg0, s32 *, 0xC) = var_v0;
            }
        }
    }
    return var_v0 != 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000643E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000644D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000645A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00064684);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE290);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00064770);

s32 func_000647A0(void *arg0, void *arg1) {
    s32 var_v0;

    if (arg0 != NULL) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x228);
    }
    var_v0 = 0;
    if (arg1 != NULL) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0x230);
    }
    return var_v0;
}

s32 func_000647C8(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = (arg1 == 0) ? 0 : (arg1 + 0x22C);
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x34) + 0x224;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000647E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00064D24);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00065264);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000656D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00065B4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00065FD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00066318);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000663C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00066400);

s32 func_00066634(void *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x102C);
    if (var_v0 != 0) {
        func_000001FC(M2C_FIELD(M2C_FIELD(arg0, void **, 0xFFC), s32 *, 4), arg0);
        func_00067F14(arg0);
        var_v0 = M2C_FIELD(arg0, s32 *, 0x102C);
    }
    return var_v0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE2AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE2C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE2E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006667C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE314);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00066988);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00066AC4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE328);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00066BD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006708C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000670B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00067130);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000671A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000674F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00067588);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000675E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00067738);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00067928);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00067B74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00067C20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00067C74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00067D90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00067E70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00067F14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00068034);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006808C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006811C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000686CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00068740);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000687CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00068834);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00068AC4);

s8 *func_00068B0C(s8 *arg0, s32 *arg1) {
    s8 *var_a0;
    s8 temp_v1;

    var_a0 = arg0;
    *arg1 = 0;
    temp_v1 = *var_a0;
    switch (temp_v1) {                              /* irregular */
    case 43:
        var_a0 += 1;
        break;
    case 45:
        *arg1 = 1;
        var_a0 += 1;
        break;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00068B40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00068B88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00068C84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00068D20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00068DA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE35C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE364);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE36C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE374);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE37C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE380);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00068EC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000693D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006966C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00069764);

void func_000697C8(s32 arg0, void *arg1, s32 arg2) {
    void *temp_v1;
    void *temp_v1_2;

    if ((arg1 != NULL) && (temp_v1 = M2C_FIELD(arg1, void **, 0x74), (temp_v1 != NULL))) {
        temp_v1_2 = M2C_FIELD(temp_v1, void **, 4);
        if (temp_v1_2 != (arg0 + 0x5F0)) {
            func_00056808(M2C_FIELD(temp_v1_2, s32 *, 0x20), (s32) arg1, arg2);
        } else {
            func_000670B8(arg0, M2C_FIELD(arg1, s32 *, 0x68));
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00069810);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006A258);

void func_0006A384(void *arg0) {
    void *temp_v0;
    void *var_s0;

    if (arg0 != NULL) {
        var_s0 = M2C_FIELD(arg0, void **, 0xC);
        if (var_s0 != NULL) {
            do {
                func_0006A384(var_s0);
                var_s0 = M2C_FIELD(var_s0, void **, 8);
            } while (var_s0 != NULL);
        }
        temp_v0 = M2C_FIELD(arg0, void **, 0x10);
        if (temp_v0 != NULL) {
            if (M2C_FIELD(temp_v0, u8 *, 0xB) != 9) {

            } else {
                func_00016E90(M2C_FIELD(arg0, s32 *, 0xA0));
            }
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006A3FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006A628);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006A6B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006A7A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006A800);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006A914);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006AA1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE41C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006AA68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006B194);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006B20C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006B320);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006B51C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006B5B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006B894);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006B940);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006BA9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006BB5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006BC2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006BC98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE430);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE43C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006BD20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006C30C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006C390);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006C42C);

void func_0006C4B4(void) {
    func_0009396C(6);
}

void func_0006C4D0(s32 arg0) {
    func_00093920(arg0 & 0xFF, 6);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006C4F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006C5B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006C71C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006C7D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE4A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE4A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE4B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE4B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE4BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE4C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE4D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE4DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006C904);

void func_0006C99C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000BE524;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_000BE52C;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_000BE538;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_000BE540;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void func_0006C9D4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000BE524;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_000BE52C;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_000BE538;
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_000BE540;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE524);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE52C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE538);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE540);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006CA0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006CA34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006CCF4);

void func_0006CEC8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 3) {

    } else {
        func_0006CF30(M2C_FIELD(arg0, s32 *, 8));
    }
}

void func_0006CEFC(s32 arg0) {
    func_0006CEC8(arg0 + 8);
    func_0006CEC8(arg0 + 0x18);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006CF30);

void func_0006D050(void *arg0) {
    s32 temp_a0;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (var_s0 != NULL) {
        do {
            func_0006D050(var_s0);
            var_s0 = M2C_FIELD(var_s0, void **, 8);
        } while (var_s0 != NULL);
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_a0 == 0) {

    } else {
        func_0006CF30(temp_a0 + 0x148);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006D0B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006D280);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE588);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0006D3D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00070CF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00070DB0);

void func_00071450(s32 arg0, M2C_UNK arg1) {
    func_00071474(arg1, arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00071474);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007156C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000715F0);

void func_00071664(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_0007166C(s32 *arg0) {
    if (func_0007AE5C(*arg0) < 6) {

    } else {
        func_0006D3D0(*arg0, 0);
    }
}

void func_000716B0(s32 *arg0) {
    if (func_0007AE5C(*arg0) < 6) {

    } else {
        func_0006D3D0(*arg0, 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000716F4);

void func_00071CA0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xCBC) != 0) {

    } else if (func_00079608() != 0) {
        M2C_FIELD(arg0, s32 *, 0xCBC) = 1;
        M2C_FIELD(arg0, s32 *, 0xCB4) = func_000933A0();
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00071CEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00071D88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00071F70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00071FC0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE5A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE5B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE5BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE5C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE5D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE5DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE83C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE864);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE880);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00072018);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00072124);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00072298);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00072530);

void func_000725B0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC70);
    if (temp_v0 == 0) {

    } else {
        M2C_FIELD(arg0, s32 *, 0xC90) = (s32) (M2C_FIELD(arg0, s32 *, 0xC90) == 0);
        func_000506B0(temp_v0);
    }
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE898);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE8A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000725EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BE930);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000727F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000728A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00072934);

s32 func_00072CF0(void *arg0) {
    s32 var_v0;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0xC70);
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 0xA0), s32 *, 8) != 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00072D10);

s32 func_00072ED8(void *arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC48);
    var_a0 = 0;
    temp_a1 = temp_v0 - 1;
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0xC48) = temp_a1;
        func_0006219C(M2C_FIELD(arg0, s32 *, 0xC44) + (temp_a1 * 0x10));
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_00072F20(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC48);
    if (temp_v0 != 0) {
        func_000628A8(arg1, (M2C_FIELD(arg0, s32 *, 0xC44) + (temp_v0 * 0x10)) - 0x10, 1);
        if (*arg1 != 2) {

        } else {
            temp_v0_2 = func_0006273C(arg1);
            if (temp_v0_2 != 0) {
                func_00090730(*func_0009F1C0(), temp_v0_2, 0);
            }
        }
    } else {
        func_0006219C((s32) arg1);
    }
    return M2C_FIELD(arg0, s32 *, 0xC48) != 0;
}

s32 func_00072FC8(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_00072F20(arg0, arg1);
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC48) - 1;
        M2C_FIELD(arg0, s32 *, 0xC48) = temp_v0_2;
        func_0006219C(M2C_FIELD(arg0, s32 *, 0xC44) + (temp_v0_2 * 0x10));
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073024);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073078);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000730E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073290);

void func_000733A8(void *arg0) {
    void *temp_a0;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg0, void **, 0xD90);
    if (temp_a0 != NULL) {
        temp_v0 = M2C_FIELD(temp_a0, void **, 0x10);
        if (temp_v0 != NULL) {
            if ((M2C_FIELD(temp_v0, u8 *, 0xB) == 2) || (func_0005264C(temp_a0) != 0)) {
                func_00073BFC(arg0, M2C_FIELD(arg0, void **, 0xD90), 1, 1);
                func_00073BFC(arg0, M2C_FIELD(arg0, void **, 0xD90), 0, 1);
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0xCC0) = -1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073430);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073698);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000738F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073A3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073AA8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073B10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073BFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073E88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00073EA8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000740E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000741B8);

void func_000742A8(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0xDA4);
    M2C_FIELD(arg0, s32 *, 0xDA8) = 0;
    if (temp_s1 != 0) {
        func_00090730(*func_0009F1C0(), temp_s1, 0);
        M2C_FIELD(arg0, s32 *, 0xDA4) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xDAC) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00074300);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00074344);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00074380);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007450C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00074538);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00074624);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00074684);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00074714);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007495C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00074A48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00074BE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00074DB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00075124);

s32 func_000753DC(void *arg0, s32 arg1) {
    s32 var_v0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xD08);
    var_v0 = 0;
    if (temp_s0 != NULL) {
        if ((arg1 != 0) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x44), s32 *, 0x48) == 0)) {
            func_00074DB4((s32) arg0);
        }
        var_v0 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x44), s32 *, 0x48);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007542C);

void func_00075460(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00075468);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00075590);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000756C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000765C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000766A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000766D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007689C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00076934);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00076A10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00076AE4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00076B88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00076EFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00076FDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00077124);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007724C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000772D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000774BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00077944);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000779B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00077A74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00077A9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00077AE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00077B34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00077B98);

s32 func_00077D00(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    var_v0 = 0;
    if (((arg0 == arg2) & (arg1 == arg3)) || ((arg1 == arg2) & (arg0 == arg3))) {
        var_v0 = 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00077D44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEB40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEB48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEB50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEB58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEB60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEB6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEB74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEB80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000780D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000781A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000782AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEBD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00078428);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000786A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00078774);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000787AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00078924);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00078BB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00078F40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEC60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEC6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEC74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEC80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEC88);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEC94);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECBC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECC4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECCC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BECF0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BED04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BED10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BED1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BED28);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BED4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079454);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007952C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079608);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079654);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079678);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000796CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000797B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079AF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079B88);

s32 func_00079C04(void) {
    return 1;
}

s32 func_00079C0C(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079C14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079DA0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079E90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079F80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00079FB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007A008);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007A0F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007A17C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007A438);

void func_0007A474(s32 arg0) {
    func_0006CF30(arg0);
}

void func_0007A490(void) {
    func_000224B8();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007A4AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007A4D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007A538);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007A7D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007A918);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007AA68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007AAA8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007AB28);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007AC48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007AD78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007AE5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007AE9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007AF1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007AF98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B03C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B0E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B11C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B1F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B2C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEF38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEF40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEF48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEF54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B2D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B3E8);

void func_0007B420(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x102C) = arg1;
}

s32 func_0007B428(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x102C);
}

void func_0007B430(M2C_UNK **arg0) {
    *arg0 = &D_000C0640;
    func_0007A490();
    *arg0 = &D_000B66B8;
    func_000224B8(arg0);
    func_00022254((s32) arg0);
}

void func_0007B47C(M2C_UNK **arg0) {
    *arg0 = &D_000C0640;
    func_0007A490();
    *arg0 = &D_000B66B8;
    func_000224B8(arg0);
    func_00022254((s32) arg0);
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

void func_0007B4E0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xFF8) = 0;
}

void func_0007B4E8(void) {
}

void func_0007B4F0(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B4F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B534);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B570);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B5B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007B7FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007BB08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007BE54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007C340);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007C394);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007C6F0);

void func_0007C8EC(s32 *arg0) {
    *arg0 = 0;
}

void func_0007C8F4(void) {
    func_0007C92C();
}

void func_0007C910(void) {
    func_0007C92C();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007C92C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007C9A0);

void func_0007CA14(void **arg0) {
    void *var_s0;

    var_s0 = *arg0;
    if (var_s0 != NULL) {
        do {
            func_00060368(M2C_FIELD(var_s0, void **, 0));
            var_s0 = M2C_FIELD(var_s0, void **, 4);
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007CA4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007CAD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000BEF88);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0230);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0430);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C04E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C04EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C04F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C04F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C04F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C04FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0500);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0504);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0508);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C050C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0510);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0514);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0518);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C051C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0520);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0524);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0528);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C052C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0530);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0534);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0538);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C053C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0540);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0544);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0548);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C054C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0550);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0554);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0558);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C055C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0560);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0564);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0568);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C056C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0570);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0574);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0578);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C057C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0580);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0584);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0588);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C058C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0590);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0594);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0598);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C059C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C05A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C05C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0640);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0658);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0678);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0684);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0690);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C06A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C06B0);

s32 func_0007CB40(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s0;
    void *temp_v0_2;

    temp_v0 = func_000753DC(arg0, 1);
    var_s0 = temp_v0;
    temp_v0_2 = func_000608F4(temp_v0, "System");
    if (temp_v0_2 != NULL) {
        if (M2C_FIELD(temp_v0_2, s32 *, 0) == 3) {
            temp_v0_3 = M2C_FIELD(temp_v0_2, s32 *, 8);
            var_s0 = (temp_v0_3 != 0) ? temp_v0_3 : var_s0;
        }
    }
    return var_s0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007CB9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007CBE4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007CC2C);

void func_0007CC74(s32 *arg0) {
    func_00060378(*arg0);
}

void func_0007CC90(s32 *arg0) {
    func_00060378(*arg0);
}

void func_0007CCAC(void **arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0xC) = (void *) *arg0;
    *arg0 = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007CCBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007CD34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007CD64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007CDE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C06C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C06CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C06D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C06DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C06E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C06F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007CE14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007D160);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007D23C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007D350);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007D464);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007D4A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007DEA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007DEF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C072C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0730);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C074C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007DF74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0778);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0780);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007E038);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007E0E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007E118);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C07C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C07C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C07D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C07D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007E15C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007E5C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007F420);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007F668);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007FA60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0830);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0834);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0838);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C083C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0840);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0844);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007FC78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007FDB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0007FE4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000800D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008014C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000802C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008058C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0860);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0864);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C086C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0874);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0884);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0894);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C089C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C08A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C08AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C08B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C08C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C08CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C08D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C08E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C08F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000805F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00080C78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00080DB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00080DF0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00080E60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0944);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C094C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0954);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0970);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0978);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0980);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00080F18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00081164);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00081210);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00081DD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00081E38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00081E6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00081EA0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00081F74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082024);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082044);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000821B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082508);

s32 func_0008269C(void *arg0) {
    return (func_000933A0() - M2C_FIELD(arg0, s32 *, 0x24)) + M2C_FIELD(arg0, s32 *, 0x28);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000826D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000826E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000826F8);

s32 func_0008270C(void) {
    return 0;
}

s32 func_00082714(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008271C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008285C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000829CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000829FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082A1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082AD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082B84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082C34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082CC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082E50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082EDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082EEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082F9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00082FBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00083000);

void func_00083138(M2C_UNK **arg0) {
    *arg0 = &D_000C0BA0;
}

void func_00083148(M2C_UNK **arg0) {
    *arg0 = &D_000C0BA0;
}

void func_00083158(M2C_UNK **arg0) {
    *arg0 = &D_000C0BA0;
}

s32 func_00083168(s32 arg0, s32 *arg1) {
    *arg1 = arg0;
    return 0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C09E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C09F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A24);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A28);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A2C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A34);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A3C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A4C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A54);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A64);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A70);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0A78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00083174);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00083760);

void func_000837CC(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0001E55C(arg0 + 8);
    func_0001E55C(arg0 + 0x18);
    func_0001E55C(arg0 + 0x20);
    func_0008387C(arg0, arg1);
}

void func_00083824(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_0001E55C(arg0 + 8);
    func_0001E55C(arg0 + 0x18);
    func_0001E55C(arg0 + 0x20);
    func_0008387C(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008387C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00083934);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00083964);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00083A0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00083B8C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00083DF0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00083EBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00083F18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008403C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00084104);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008415C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000841B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008436C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008453C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00084760);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000848B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008497C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0B7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0B80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0B84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0B88);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0B90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0BA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0BA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0BB4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0BC8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0BD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0BD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0BE0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000849E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00084A90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00085844);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0D04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0D0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0D20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00085AB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000868A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00086984);

void func_000869F4(s32 arg0, M2C_UNK arg1) {
    func_000868A0();
    func_00087454(arg1, arg0 + 4);
    func_00086E98(arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00086A38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00086B04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0E40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0E44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0E50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C0E5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1008);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C100C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1010);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1014);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1018);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00086BD4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1028);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C102C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1034);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00086E98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1048);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00087454);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00087768);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008780C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00087944);

s32 func_00087A70(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x1C);
    var_v0 = 0;
    if (temp_s0 != 0) {
        if ((arg1 < 6) || (func_00089554(temp_s0) != 0)) {
            var_v0 = func_0001E044(temp_s0);
        } else {
            var_v0 = func_00093720(temp_s0, 0);
        }
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00087ACC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00087B7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00087C20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00087CC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00087DF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00087EA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00087F50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088014);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088244);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088484);

void func_000884D0(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;

    if ((M2C_FIELD(arg0, u8 *, 5) != 0) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x64), (temp_v0 == 0))) {

    } else {
        func_00079E90(temp_v0, arg0, arg1, arg2);
    }
}

void func_00088518(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;

    if ((M2C_FIELD(arg0, u8 *, 5) != 0) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x64), (temp_v0 == 0))) {

    } else {
        func_00079FB0(temp_v0, arg0, arg1);
    }
}

void func_00088558(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 5) == 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_v0 == 0) {

        } else {
            func_0007A008(temp_v0, arg0);
        }
        M2C_FIELD(arg0, u8 *, 5) = 1U;
    }
    func_00088014(arg0);
}

void func_000885B0(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 5) == 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_v0 == 0) {

        } else {
            func_0007A17C(temp_v0, arg0);
        }
        M2C_FIELD(arg0, u8 *, 5) = 1U;
    }
    func_00088014(arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088608);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000888D8);

s32 func_0008895C(s32 arg0) {
    return arg0;
}

s32 func_00088964(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008896C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088984);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C10C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C10E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C10EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088A04);

s32 func_00088A74(s32 arg0) {
    return (u32) (arg0 - 0x11) < 2U;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088A80);

void func_00088A98(void) {
    func_00089790();
}

void func_00088AB4(s32 arg0) {
    func_00089884(arg0 & 0xFFFF);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088AD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088BDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088D1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00088EB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089030);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000890D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089198);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000891BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000892A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008931C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089348);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089384);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000893CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089430);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089494);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000894F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089554);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089648);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089698);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000896E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089790);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089884);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008994C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089960);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000899F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089A70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089ABC);

void func_00089B10(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

void func_00089B20(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089B30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089B9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089C08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1128);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1130);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1140);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C114C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1158);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1164);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1170);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C117C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1184);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C118C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C119C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C11A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C11B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C11C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C11D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C11DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C11E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C11F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1200);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C120C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C125C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1260);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1360);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C18E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C1E70);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C23E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00089C94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008A64C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008A688);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008A8CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008AA20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008AA98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008AB24);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008ABB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008AC54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008AC98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C29A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C29A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C29A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C29AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008AF48);

void func_0008AFF4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_v0 == 0) {

    } else {
        if (func_000756C0(M2C_FIELD(arg0, s32 *, 0x38), temp_v0, 0, (s32) "onClose", 1, 0, 0, 0) != 0) {
            func_0006D3D0(M2C_FIELD(arg0, s32 *, 0x38), 1);
        }
        func_00072ED8((void *) M2C_FIELD(arg0, s32 *, 0x38));
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008B06C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008B12C);

s32 func_0008B594(s32 arg0) {
    return arg0;
}

void func_0008B59C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = sceHVNetfront_Module_5412D662();
}

void func_0008B5C8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = sceHVNetfront_Module_5412D662();
}

void func_0008B5F4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0) != 0) {
        func_0008B6CC();
    }
    sceHVNetfront_Module_447295B3(M2C_FIELD(arg0, s32 *, 4));
}

void func_0008B634(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0) != 0) {
        func_0008B6CC();
    }
    sceHVNetfront_Module_447295B3(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008B674);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008B6CC);

void func_0008B704(void *arg0) {
    sceHVNetfront_Module_76D0A3FA(M2C_FIELD(arg0, s32 *, 4));
}

s32 func_0008B720(void) {
    return 1;
}

void func_0008B728(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    sceHVNetfront_Module_0DCE1309(M2C_FIELD(arg0, s32 *, 4), arg2, arg1);
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C29E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2A10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2A1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2A30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2A60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2A84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008B750);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008B9D0);

void func_0008B9EC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0008B9D0(arg0, arg1);
    func_0008BC28((void *) arg0, arg2, arg3);
}

void func_0008BA38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0008B9D0(arg0, arg1);
    func_0008BC28((void *) arg0, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008BA84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008BAFC);

void func_0008BB74(void) {
    func_0008BBAC();
}

void func_0008BB90(void) {
    func_0008BBAC();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008BBAC);

s32 func_0008BC28(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_t0;

    func_0008BBAC();
    temp_t0 = M2C_FIELD(arg0, void **, 0x44);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(temp_t0, s32 *, 0x1070);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(temp_t0, s32 *, 0x1074);
    return func_0008BC90(arg0, arg1, arg2, 0) != 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008BC90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008BD5C);

void func_0008BDA8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    sceHVNetfront_Module_9FDE9873();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008BDC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008BE84);

void func_0008C4B4(void) {
}

void func_0008C4BC(void) {
    func_0008C4F4();
}

void func_0008C4D8(void) {
    func_0008C4F4();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008C4F4);

s32 func_0008C548(void) {
    return M2C_FIELD(func_0009F1C0(), s32 *, 0x20);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008C568);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008C66C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008C690);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008C6F0);

void func_0008C750(M2C_UNK **arg0) {
    *arg0 = &D_000C2E00;
    func_00065264((s32) arg0);
}

void func_0008C778(M2C_UNK **arg0) {
    *arg0 = &D_000C2E00;
    func_00065264((s32) arg0);
}

void func_0008C7A0(M2C_UNK **arg0) {
    *arg0 = &D_000C2E00;
    func_00065264((s32) arg0);
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

s32 func_0008C7E8(void) {
    return 1;
}

void func_0008C7F0(void) {
}

s32 func_0008C7F8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008C800);

s32 func_0008C830(void) {
    return 0;
}

void func_0008C838(s32 arg0) {
    func_0001DA90(arg0, (s32) "NetFront/3.2 SDK");
}

void func_0008C858(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_BB5E8F0E(arg1, "1.0");
    *arg0 = 0x48;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008C894);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2C84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2C94);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2C9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008C960);

void func_0008CAD4(void) {
}

s32 func_0008CADC(void) {
    return 1;
}

void func_0008CAE4(void *arg0, M2C_UNK arg1) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x10D4);
    func_0009F1FC(temp_s0, func_0009F0C8(arg1));
}

void func_0008CB18(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_000933A0();
    if ((temp_v0 - M2C_FIELD(arg0, s32 *, 0x1058)) >= 0x1F5) {
        func_000725B0(arg0);
        M2C_FIELD(arg0, s32 *, 0x1058) = temp_v0;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008CB6C);

s32 func_0008CB90(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008CB98);

void func_0008CC04(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008CC0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008CCEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008CED0);

void func_0008D240(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1000);
    if (temp_v0 == 0) {

    } else {
        func_00032580(temp_v0, -1);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D274);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D2C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D308);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D418);

s32 func_0008D424(void) {
    return 0;
}

s32 func_0008D42C(void) {
    return 0;
}

s32 func_0008D434(void) {
    return 0;
}

s32 func_0008D43C(void) {
    return 0;
}

s32 func_0008D444(void) {
    return 0;
}

s32 func_0008D44C(void) {
    return 0;
}

s32 func_0008D454(void) {
    return 0;
}

s32 func_0008D45C(void) {
    return 0;
}

s32 func_0008D464(void) {
    return 0;
}

s32 func_0008D46C(void) {
    return 0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2E00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2E80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2E8C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2EA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2EA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2EA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2EAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2EB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D474);

s32 func_0008D498(void) {
    return 0;
}

s32 func_0008D4A0(void) {
    return 0;
}

s32 func_0008D4A8(void) {
    return 0;
}

void func_0008D4B0(void) {
}

s32 func_0008D4B8(void) {
    return 0;
}

s32 func_0008D4C0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D4C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D5F4);

M2C_UNK *func_0008D66C(void) {
    return &D_000C2ED0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2ED0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D678);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D788);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D8E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008D950);

s32 func_0008DA40(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0xE4), 8, 1);
}

s32 func_0008DA4C(s32 arg0, s32 arg1, void *arg2) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 | arg1) != 0) {
        var_v0 = M2C_FIELD(arg2, s32 *, 0x54) != 0;
    }
    return var_v0;
}

s32 func_0008DA68(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DA70);

s32 func_0008DA78(s32 arg0) {
    return arg0 & 0xFFFF;
}

void func_0008DA80(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_0008DA88(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DA90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DB78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DB84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DB90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DBC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DC00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DC9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DD10);

void func_0008DF24(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DF2C);

void func_0008DF54(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008DF5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E04C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E158);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E1E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E4A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E570);

void func_0008E5E0(s32 arg0, M2C_UNK arg1) {
    func_0000F3A4(arg0 + 0x1C, arg0, arg1);
}

void func_0008E608(s32 arg0, s32 arg1) {
    func_0000E70C(arg0, arg0 + 0x1C, arg1);
}

void func_0008E62C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000E9CC(arg0, arg0 + 0x1C, arg1, arg2);
}

s32 func_0008E658(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x6C);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E660);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E6FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E798);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E838);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E8D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E92C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E980);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008E9F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008EA48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008EBA8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008ED10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008EE30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008EEAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008EF08);

void func_0008EF80(void) {
    func_0000F224();
}

s32 func_0008EF9C(s32 arg0, s32 arg1) {
    if (arg0 != arg1) {
        func_0000F104();
    }
    return arg0;
}

void func_0008EFCC(s32 arg0, M2C_UNK arg1) {
    func_0008F498(arg1, arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008EFF0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F024);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F058);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F124);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F1F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F34C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F3C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F404);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F444);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F498);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F560);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F6C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F798);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F864);

void func_0008F890(void) {
}

void func_0008F898(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F8A0);

void func_0008F8B0(void) {
    func_0008DF24();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F8CC);

void func_0008F940(void) {
}

void func_0008F948(void) {
}

void func_0008F950(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008F958);

void func_0008F9B4(void) {
}

s32 func_0008F9BC(void *arg0) {
    s32 temp_v0;
    s32 var_v1;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = M2C_FIELD(arg0, void **, 0x18);
    temp_s1 = temp_s0 + 0x20;
    temp_v0 = func_00053D4C(M2C_FIELD(temp_s0, s32 *, 0x1C), temp_s1, 0x200);
    var_v1 = temp_v0;
    if (temp_v0 <= 0) {
        M2C_FIELD(temp_s0, s8 *, 0x20) = -1;
        var_v1 = 2;
        M2C_FIELD(temp_s0, s8 *, 0x21) = -0x27;
    }
    M2C_FIELD(temp_s0, void **, 0) = temp_s1;
    M2C_FIELD(temp_s0, s32 *, 4) = var_v1;
    return 1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008FA24);

void func_0008FAA4(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008FAAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008FB5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008FD94);

void func_0008FDB4(s32 arg0) {
    sceHVNetfront_Module_09FA691C(arg0);
    sceHVNetfront_Module_D611E938(arg0, 0, 0x474);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008FDE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008FE1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008FE3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008FE5C);

s32 func_0008FE8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

s32 func_0008FE94(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

void func_0008FE9C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x26C) = arg1;
}

s32 func_0008FEA4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008FEAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0008FEDC);

void func_0008FF0C(M2C_UNK **arg0) {
    *arg0 = &D_000C30D8;
    func_00024A00((s32) arg0);
}

void func_0008FF34(M2C_UNK **arg0) {
    *arg0 = &D_000C30D8;
    func_00024A00((s32) arg0);
}

void func_0008FF5C(M2C_UNK **arg0) {
    *arg0 = &D_000C30D8;
    func_00024A00((s32) arg0);
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2F40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2F58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2F98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2FB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2FD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2FDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2FE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C2FF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3008);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3020);

void *func_0008FFA4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_00046628((s32) arg0);
    func_0004640C((s32) arg0, (s32) "www.macromedia.com/bin");
    func_0004640C((s32) arg0, arg1);
    func_0004640C((s32) arg0, arg1);
    func_0004649C((s32) arg0);
    return arg0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3044);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090014);

s32 func_000900A8(void) {
    return 0;
}

s32 func_000900B0(void) {
    return 0;
}

s32 func_000900B8(void) {
    return 0;
}

s32 func_000900C0(void) {
    return 3;
}

void *func_000900C8(void *arg0, void *arg1) {
    func_0008FFA4(arg0, M2C_FIELD(arg1, s32 *, 0xC));
    return arg0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000900F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009011C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090164);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000901AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000901EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009022C);

void func_00090284(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009028C);

s32 func_000902F0(void *arg0) {
    s32 temp_v1;
    s32 var_a1;

    var_a1 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_v1 = var_a1 - 1;
    if (var_a1 >= 2) {
        var_a1 = temp_v1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_v1;
    } else if (M2C_FIELD(arg0, s32 *, 0x20) != -1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        var_a1 = 0;
    }
    return var_a1;
}

s32 func_0009032C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_00090334(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return 1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090344);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000903C8);

void func_0009041C(void ***arg0, void *arg1) {
    void **temp_v1;
    void *temp_a2;
    void *temp_v0;

    temp_a2 = arg1 - 8;
    temp_v1 = M2C_FIELD(temp_a2, void ***, 4);
    temp_v0 = M2C_FIELD(arg1, void **, -8);
    if (temp_v1 != NULL) {
        *temp_v1 = temp_v0;
    }
    if (temp_v0 == NULL) {
        *arg0 = temp_v1;
    } else {
        M2C_FIELD(temp_v0, void ***, 4) = temp_v1;
    }
    sceHVWWW_Library_2E58A543((s32) temp_a2);
}

void func_00090458(s32 arg0) {
    sceHVNetfront_Module_09FA691C(arg0);
    sceHVNetfront_Module_D611E938(arg0, 0, 0x478);
}

void func_0009048C(void) {
    func_0008E9F4();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000904A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000905C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090648);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090730);

void func_000907D8(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x100);
    M2C_FIELD(arg0, s32 *, 0x104) = 1;
    if (temp_v1 != 0) {
        sceHVWWW_Library_2E58A543(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x100) = 0;
    }
}

void func_0009081C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = sceHVWWW_Library_27C4AC1F(0x4000);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009084C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000908A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000908F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000909C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090A30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090AD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090B4C);

void func_00090BC4(void) {
    func_000908A8();
}

void func_00090BE0(void) {
    func_00090B4C();
}

void func_00090BFC(void) {
    func_00090A30();
}

void func_00090C18(s32 arg0, s32 arg1) {
    func_00090AD0(arg0, arg1 - 8);
}

s32 func_00090C34(s32 arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = arg0;
    if (arg1 >= 0x11U) {
        var_v1 = arg0 + 0x20;
        if (arg1 >= 0x21U) {
            var_v1 = arg0 + 0x40;
            if (arg1 >= 0x41U) {
                var_v1 = arg0 + 0x60;
                if (arg1 >= 0x81U) {
                    var_v1 = arg0 + 0x80;
                    if (arg1 >= 0x101U) {
                        var_v1 = arg0 + 0xA0;
                        if (arg1 >= 0x201U) {
                            var_v1 = (arg1 < 0x3F1U) ? (arg0 + 0xC0) : 0;
                        }
                    }
                }
            }
        }
    }
    return var_v1;
}

void func_00090C94(void) {
}

void func_00090C9C(void) {
}

void func_00090CA4(void) {
}

void func_00090CAC(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090CB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090CF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090D34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090D68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C305C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3090);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3094);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C30CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C30D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C30F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C30FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3120);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3138);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3144);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090D9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090DE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090E88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090F90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090FA0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00090FB0);

void func_00090FFC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_00091004(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_0009100C(void) {
}

void func_00091014(void) {
}

void func_0009101C(void) {
}

void func_00091024(void) {
    func_00091040();
}

void func_00091040(void) {
}

void func_00091048(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091050);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000910D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091160);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000911D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091248);

void func_000912D4(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000912DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000912FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091328);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000913E0);

void func_0009162C(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091634);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091668);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009168C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000916A8);

void func_000916C4(void) {
}

void func_000916CC(void) {
}

s32 func_000916D4(void) {
    return 0;
}

s32 func_000916DC(void) {
    return 1;
}

void func_000916E4(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000916EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009174C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000917AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091B44);

s32 func_00091CC8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091CD0);

void func_00091DCC(void) {
}

void func_00091DD4(void) {
}

void func_00091DDC(void) {
    func_00079AF4();
}

s32 func_00091DF8(s32 arg0) {
    return arg0;
}

void func_00091E00(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091E08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091E28);

void func_00091E48(void) {
    func_00091F48();
}

void func_00091E64(void) {
    func_00091F48();
}

void func_00091E80(void) {
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3468);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C34E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C34F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091E88);

s32 func_00091ED4(void) {
    return 0;
}

s32 func_00091EDC(void) {
    return 0;
}

s32 func_00091EE4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091EEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091F48);

s32 func_00091F50(void) {
    return 0;
}

s32 func_00091F58(void) {
    return 0;
}

s32 func_00091F60(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091F68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091F70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091F78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091FB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00091FF0);

void func_00092098(s32 arg0) {
    func_00091F48(arg0 + 0x28);
}

void func_000920B4(s32 arg0) {
    func_00091F70(arg0 + 0x28);
}

void func_000920D0(void *arg0) {
    s32 temp_v0;
    void *var_s0;

    var_s0 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0xFFC), void ***, 4);
    if (var_s0 != NULL) {
        do {
            temp_v0 = M2C_FIELD(M2C_FIELD(var_s0, void **, 0), s32 (**)(void *), 0xC)(var_s0);
            if (temp_v0 == 0) {
                var_s0 = M2C_FIELD(var_s0, void **, 0xC);
            } else {
                func_00092134(temp_v0);
                var_s0 = M2C_FIELD(var_s0, void **, 0xC);
            }
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092134);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092254);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000922A4);

s32 func_0009230C(void) {
    return 0;
}

void func_00092314(M2C_UNK **arg0) {
    *arg0 = &D_000C3628;
}

void func_00092324(M2C_UNK **arg0) {
    *arg0 = &D_000C3628;
}

void func_00092334(M2C_UNK **arg0) {
    *arg0 = &D_000C3628;
}

void func_00092344(M2C_UNK **arg0) {
    *arg0 = &D_000C3628;
}

void func_00092354(M2C_UNK **arg0) {
    *arg0 = &D_000C3628;
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

void func_00092394(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000C3600;
    M2C_FIELD(arg0, s8 *, 4) = 0;
}

void func_000923A8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000C3600;
    M2C_FIELD(arg0, s8 *, 4) = 0;
}

void func_000923BC(M2C_UNK **arg0) {
    *arg0 = &D_000C3600;
}

void func_000923CC(M2C_UNK **arg0) {
    *arg0 = &D_000C3600;
}

void func_000923DC(M2C_UNK **arg0) {
    *arg0 = &D_000C3600;
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

u8 func_0009241C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 4);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092424);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092484);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009249C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000924FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3538);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3568);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3574);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092518);

void func_0009265C(void) {
    func_00092968();
}

s32 func_00092678(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092680);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000926F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092968);

void func_00092A7C(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092A84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092B1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092B28);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092BC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092C68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092D6C);

s32 func_00092E98(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x110);
}

s32 func_00092EA0(s32 arg0) {
    return arg0;
}

void func_00092EA8(void) {
}

void func_00092EB0(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092EB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092EEC);

void func_00092F20(M2C_UNK **arg0) {
    *arg0 = &D_000C3768;
    func_00087DF8((s32) arg0);
}

void func_00092F48(M2C_UNK **arg0) {
    *arg0 = &D_000C3768;
    func_00087DF8((s32) arg0);
}

void func_00092F70(M2C_UNK **arg0) {
    *arg0 = &D_000C3768;
    func_00087DF8((s32) arg0);
    func_00090730(*func_0009F1C0(), (s32) arg0, 0);
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C35E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C35EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C35F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C35F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3600);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3628);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3640);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3650);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C365C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3668);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3674);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3688);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3698);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C36A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C36B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00092FB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000933A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000933BC);

M2C_UNK *func_0009352C(void) {
    return &D_000C37A4;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3768);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3780);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C378C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C37A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C37A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093538);

s32 func_00093708(void) {
    return 0;
}

s32 func_00093710(void) {
    return 0;
}

s32 func_00093718(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093720);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000937F8);

void func_00093918(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093920);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009396C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093974);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000939F0);

s32 func_00093A2C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8);
}

s32 func_00093A38(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x28);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093A44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093A98);

void func_00093AF0(void) {
}

s32 func_00093AF8(s32 arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(sceHVWWW_Library_B6D816EE(), s32 *, 0xA0);
    sceHVWWW_Library_FED7C11F(arg0);
    return temp_s1;
}

s32 func_00093B34(s32 arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(sceHVWWW_Library_B6D816EE(), s32 *, 0xA4);
    sceHVWWW_Library_FED7C11F(arg0);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093B70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093BC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093C60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093CA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093D24);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00093FD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C37FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C387C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3880);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3884);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C388C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3890);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3898);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C389C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C38F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3904);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3908);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3910);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3914);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C391C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C39D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C39D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C39DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000940BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000941FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000943FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00094600);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00094658);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000947A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000948FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00094A44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00094AF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00094C94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00094E2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00094FB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00095040);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000951CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00095238);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000953B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00095494);

void func_000956AC(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000956B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00095804);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00095B7C);

s32 func_00095DD4(void) {
    return sceHVWWW_Library_0DBCA9CE() + 0xE2EC;
}

s32 func_00095DF8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00095E00);

s32 func_00095E34(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00095E3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00095EA0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096004);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096168);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000961B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009632C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096364);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000963B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096510);

s32 func_0009659C(s32 arg0) {
    if (func_00093FD8() == 0) {

    } else {
        func_000963B4(arg0, 0);
    }
    return 0;
}

s32 func_000965E0(s32 arg0) {
    if (func_00093FD8() == 0) {

    } else {
        func_000963B4(arg0, func_0009632C(arg0) - 1);
    }
    return 0;
}

s32 func_00096630(s32 arg0) {
    if (func_00093FD8() == 0) {

    } else {
        func_000963B4(arg0, func_0009632C(arg0) + 1);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096680);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096748);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000967AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096868);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000968A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096934);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096A60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096C1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096DD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00096F60);

s32 func_00097100(void) {
    func_00093FD8();
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00097120);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000972A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00097420);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000975AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009772C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000978AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00097A34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00097BBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00097CD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00097E14);

s32 func_00097EBC(void) {
    func_00093FD8();
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00097EDC);

void func_00097FA0(void) {
    func_0009F020();
}

void func_00097FBC(void) {
    func_0009F054();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00097FD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000980F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A2C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A4C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A8C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3A90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3AA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3AAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3ABC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3AC4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3AD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3ADC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3AE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3AF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B28);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B34);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B78);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3B9C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3BA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3D18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3D1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3D24);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", sceHVFlash_Module_C6A63B83);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000983C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098410);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098480);

s32 func_000984EC(void) {
    return 0;
}

s32 func_000984F4(void) {
    return 0;
}

s32 func_000984FC(void) {
    return 0;
}

s32 func_00098504(void) {
    return 0;
}

s32 func_0009850C(void) {
    s32 temp_v0;

    temp_v0 = func_00090648(*func_0009F1C0(), 0x18, 0);
    func_0009B13C(temp_v0, 0x400);
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098550);

void func_00098594(void) {
    func_0009B428();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000985B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098618);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098680);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000986C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098700);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098784);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098808);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098848);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098888);

s32 func_000988C8(void *arg0) {
    s32 var_a0;
    void *temp_v0;

    temp_v0 = arg0 + 0x3C;
    var_a0 = (M2C_FIELD(arg0, u8 *, 0x3C) << 0x10) | (M2C_FIELD(temp_v0, u8 *, 1) << 8) | M2C_FIELD(temp_v0, u8 *, 2);
    if (var_a0 == 0xFFFFFF) {
        var_a0 = (M2C_FIELD(arg0, u8 *, 0x47) << 0x18) + (M2C_FIELD(arg0, u8 *, 0x48) << 0x10) + (M2C_FIELD(arg0, u8 *, 0x49) << 8) + M2C_FIELD(arg0, u8 *, 0x4A);
    }
    return var_a0;
}

s32 func_0009892C(void *arg0) {
    void *temp_a1;

    temp_a1 = arg0 + 0x3F;
    return (M2C_FIELD(arg0, u8 *, 0x3F) << 0x10) | (M2C_FIELD(temp_a1, u8 *, 1) << 8) | M2C_FIELD(temp_a1, u8 *, 2);
}

s8 func_00098950(void *arg0) {
    return M2C_FIELD(arg0, s8 *, 0x42);
}

s32 func_00098958(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x43) + (M2C_FIELD(arg0, u8 *, 0x44) << 8) + (M2C_FIELD(arg0, u8 *, 0x45) << 0x10) + (M2C_FIELD(arg0, u8 *, 0x46) << 0x18);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098984);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098A10);

void func_00098A2C(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x42) = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098A34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098A54);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098AE4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098B74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098BB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098C0C);

s32 func_00098C1C(void *arg0) {
    void *temp_v1;

    temp_v1 = arg0 + 0x3C;
    return ((M2C_FIELD(arg0, u8 *, 0x3C) << 0x10) | (M2C_FIELD(temp_v1, u8 *, 1) << 8) | M2C_FIELD(temp_v1, u8 *, 2)) == 0xFFFFFF;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098C50);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098C5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098CAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098CD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098D44);

void func_00098DB8(s32 arg0) {
    func_00098E18();
    func_000986C0(arg0 + 0x2C);
}

void func_00098DE8(s32 arg0) {
    func_00098E18();
    func_000986C0(arg0 + 0x2C);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098E18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098E88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098E94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00098F58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00099580);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3D5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3D7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3D80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009963C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000998CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000999C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00099A3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00099AB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00099B60);

void func_00099B74(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0);
    if (var_v0 != NULL) {
        do {
            M2C_FIELD(var_v0, s32 *, 0x14) = 0;
            var_v0 = M2C_FIELD(var_v0, void **, 0);
        } while (var_v0 != NULL);
    }
    sceHVNetfront_Module_D611E938((s32) (arg0 + 0x10), 0, 0x64);
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00099BC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00099C88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00099C94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00099DC8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_00099F9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009A534);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009A5D4);

void func_0009A650(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_v0;

    temp_v0 = func_0009850C();
    M2C_FIELD(temp_v0, s8 *, 8) = 4;
    func_0009B380(temp_v0, arg1, arg2);
    func_0009AE40(arg0, temp_v0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009A6BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009A7D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009A914);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009A924);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009A9BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009AB18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009AC30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009ACAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009ADD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009AE40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009AEB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B000);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B084);

void func_0009B0E4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = func_0009B084(arg1);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    sceHVNetfront_Module_D611E938((s32) (arg0 + 8), 0, 0xB);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B13C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B194);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B1D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B214);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B23C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B2D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B2EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B30C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B324);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B380);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B428);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B4C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B4D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B610);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B65C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B688);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B6B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B6F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B73C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B788);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B7D4);

void func_0009B7FC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    func_0009BB48((s32) arg0, 0);
    if (arg2 == 0) {

    } else {
        func_0009BC3C((s32) arg0, 0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B85C);

s32 func_0009B8F4(s32 *arg0, s32 *arg1) {
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a0;

    temp_s1 = func_0009BAEC();
    temp_v1 = temp_s1 & 0x3F;
    var_a0 = -1;
    if (*arg0 == 0) {
        *arg1 = temp_v1;
        if (temp_v1 == 0x3F) {
            *arg1 = func_0009BBB0(arg0);
        }
        var_a0 = temp_s1 >> 6;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009B968);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009BA58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009BA98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009BAEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009BB48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009BBB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009BC3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009BCC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009BD40);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009BD94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009BF04);

void func_0009C0FC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    sceHVNetfront_Module_4C5A5066(1, arg0, arg1, arg2);
}

void func_0009C128(void) {
}

void func_0009C130(s32 arg0, M2C_UNK arg1) {
    sceHVNetfront_Module_AF7B3F4B(1, arg0, arg1);
}

void func_0009C154(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    sceHVNetfront_Module_BA0DA285(1, arg0, arg1, arg2);
}

void func_0009C180(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0) {
    sceHVNetfront_Module_74FB57AC(1, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg_sp0);
}

s32 func_0009C1E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0009C1F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x104) != 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009C1FC);

void func_0009C290(void) {
    func_0004B81C();
}

void func_0009C2AC(void) {
    func_0004B56C();
}

void func_0009C2C8(void) {
    func_0006808C();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009C2E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009C300);

void func_0009C350(void) {
    func_0006C390();
}

void func_0009C36C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0x1052) = (s8) (arg1 != 0);
}

void func_0009C378(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xB60) = arg1;
}

void func_0009C380(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10D4) = arg1;
}

void func_0009C388(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xBD8) = arg1;
}

void func_0009C390(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10D0) = arg1;
}

void func_0009C398(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x10E4) = arg1;
}

void func_0009C3A0(void) {
    func_0009174C();
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3E00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3E04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3E08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3E0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3E10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3E14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009C3BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009C4D0);

s32 func_0009C518(void *arg0) {
    s32 temp_s0;

    temp_s0 = func_0009C4D0(M2C_FIELD(arg0, s8 *, 0)) * 0x10;
    return temp_s0 + func_0009C4D0(M2C_FIELD(arg0, s8 *, 1));
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009C55C);

void func_0009CCCC(void) {
    func_0006C30C();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009CCE8);

void func_0009CCFC(void *arg0) {
    func_000725B0(arg0);
}

void func_0009CD18(void) {
    func_000716F4();
}

void func_0009CD34(void) {
    func_00091CD0();
}

s32 func_0009CD50(s32 arg0) {
    return arg0 + 0x10B0;
}

s32 func_0009CD58(void *arg0) {
    s32 var_s1;
    void **temp_v0;

    var_s1 = 0;
    temp_v0 = func_000000E8(M2C_FIELD(M2C_FIELD(arg0, void **, 0xFFC), s32 *, 4));
    if ((temp_v0 != NULL) && (M2C_FIELD(*temp_v0, s32 (**)(void **), 8)(temp_v0) != 0)) {
        var_s1 = M2C_FIELD(*temp_v0, s32 (**)(void **), 8)(temp_v0);
    }
    return var_s1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009CDCC);

void func_0009CE3C(s32 arg0) {
    func_0009F1FC(arg0, 1);
}

s32 func_0009CE58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1098) != 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009CE64);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009CFCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D044);

s32 func_0009D110(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_0009D118(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10D0);
}

void func_0009D120(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1098) = arg1;
}

void func_0009D128(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10E0) = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D130);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D150);

void func_0009D174(void) {
    func_00088484();
}

void func_0009D190(void) {
    func_00088608();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D1AC);

void func_0009D1E8(void *arg0) {
    func_000000E8(M2C_FIELD(M2C_FIELD(arg0, void **, 0xFFC), s32 *, 4));
}

void func_0009D208(void *arg0) {
    func_00088558(arg0);
}

void func_0009D224(void *arg0) {
    func_000885B0(arg0);
}

void func_0009D240(void) {
    func_00091B44();
}

void func_0009D25C(void *arg0, s32 arg1) {
    func_00088518(arg0, arg1);
}

s32 func_0009D278(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10D8);
}

s32 func_0009D280(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

s32 func_0009D288(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10E0);
}

void func_0009D290(void *arg0) {
    func_000000E8(M2C_FIELD(arg0, s32 *, 4));
}

void func_0009D2AC(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 8)();
}

void func_0009D2D0(void *arg0, s32 arg1, s32 arg2) {
    func_000884D0(arg0, arg1, arg2);
}

s32 func_0009D2EC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xB60);
}

s32 func_0009D2F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40);
}

s32 func_0009D2FC(s32 arg0) {
    return arg0;
}

void func_0009D304(s32 arg0, s32 arg1, s32 arg2) {
    func_00066988(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

void func_0009D324(s32 arg0, s32 arg1, s32 arg2) {
    func_00066BD0(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D344);

void func_0009D368(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32), 0x3C)(arg0, func_00079454());
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D3A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D420);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D494);

void func_0009D4FC(void) {
}

s32 func_0009D504(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

void func_0009D50C(void *arg0) {
    func_00031D5C(M2C_FIELD(arg0, s32 *, 0x1000));
}

void func_0009D528(s32 arg0) {
    func_00059CC0(arg0 + 8, 1);
}

void func_0009D548(s32 arg0) {
    func_00059D2C(arg0 + 8);
}

s32 func_0009D564(s32 arg0) {
    s32 var_v1;
    void *temp_a0;

    temp_a0 = arg0 + 8;
    var_v1 = 0;
    if (M2C_FIELD(temp_a0, s32 *, 0x64) == 0) {
        var_v1 = M2C_FIELD(temp_a0, s32 *, 0x2A0) != 0;
    }
    return var_v1;
}

s32 func_0009D584(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

void func_0009D58C(void) {
    func_00068034();
}

void func_0009D5A8(void) {
    func_00071D88();
}

s32 func_0009D5C4(void *arg0) {
    return (s32) (M2C_FIELD(arg0, s32 *, 0x4C) * 0x64) / (s32) M2C_FIELD(arg0, s32 *, 0x294);
}

s32 func_0009D5EC(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x2AC) >= arg1;
}

void func_0009D5FC(void) {
    func_00071F70();
}

void func_0009D618(void) {
    func_00071FC0();
}

void func_0009D634(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_00078BB0(arg0, arg1, arg2, arg3, arg4, arg5 & 0xFFFF, arg6);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D650);

void func_0009D6EC(void) {
    func_00059D50();
}

s32 func_0009D708(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xCAC);
}

void func_0009D710(s32 arg0) {
    func_0006D3D0(arg0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D72C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D750);

s32 func_0009D890(s32 arg0) {
    s32 var_v1;
    void *temp_a0;

    temp_a0 = arg0 + 8;
    var_v1 = 0;
    if (M2C_FIELD(temp_a0, s32 *, 0x64) == 0) {
        var_v1 = M2C_FIELD(temp_a0, s32 *, 0x2A0) != 0;
    }
    return var_v1;
}

void func_0009D8B0(s32 arg0, s32 arg1) {
    func_00059D98(arg0, arg1, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009D8CC);

s32 func_0009D910(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4C);
}

void func_0009D918(s32 arg0) {
    func_00059CC0(arg0, 1);
}

void func_0009D934(s32 arg0) {
    func_00059D2C(arg0);
}

void func_0009D950(void) {
    func_0006B894();
}

void func_0009D96C(void) {
    func_0006A914();
}

void func_0009D988(s32 arg0) {
    func_000608F4(arg0 + 0x148);
}

void func_0009D9A4(void) {
    func_0006A628();
}

void func_0009D9C0(void) {
    func_0006BC2C();
}

void func_0009D9DC(void) {
    func_0006BC98();
}

void func_0009D9F8(void) {
    func_000730E0();
}

s32 func_0009DA14(void) {
    return func_00079454() == 4;
}

s32 func_0009DA38(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xBE4);
}

s32 func_0009DA40(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68);
}

s32 func_0009DA48(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC70);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009DA50);

s32 func_0009DA78(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC1C) == 0x80000000;
}

s32 func_0009DA8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC10) == 3;
}

s32 func_0009DA9C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xBD4) == 2;
}

s32 func_0009DAAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xBD4) == 1;
}

s32 func_0009DABC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xBD4) == 0;
}

s32 func_0009DAC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 func_0009DAD0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x54);
}

s32 func_0009DAD8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1000);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009DAE0);

void func_0009DB1C(void) {
    func_000905C0();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009DB38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009DB98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009DC00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009DC70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009DE44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009DF48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009E104);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009E1E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009E2B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009E380);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009E4D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009E604);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009E77C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009E8A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009E9A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009EA80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009EBEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009EC30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009EC94);

void func_0009ECC8(void *arg0) {
    if (arg0 != NULL) {
        func_000907D8(arg0);
    }
}

void func_0009ECE8(void *arg0) {
    if (arg0 != NULL) {
        func_0009081C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009ED08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009ED30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F020);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F054);

void func_0009F090(void) {
    func_000933A0();
}

void func_0009F0AC(void) {
    func_0008D274();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F0C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F124);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F1C0);

s32 func_0009F1CC(void) {
    return M2C_FIELD(M2C_FIELD(sceHVWWW_Library_6E00402C(), void **, 0x29C), s32 *, 0x28);
}

M2C_UNK *func_0009F1F0(void) {
    return &D_000C3F08;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F1FC);

void func_0009F2C8(void) {
}

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

void func_0009F2E0(void) {
    sceHVNetfront_Module_15875ED4();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F2FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F394);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3F08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F4C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F58C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F67C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F720);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F7C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F848);

s32 func_0009F858(void) {
    return 1;
}

void func_0009F860(void) {
    sceIoRename();
}

s32 func_0009F87C(void) {
    return -1;
}

s32 func_0009F884(void) {
    return -1;
}

s32 func_0009F88C(void) {
    return -1;
}

s32 func_0009F894(void) {
    return -1;
}

s32 func_0009F89C(void) {
    return -1;
}

s32 func_0009F8A4(void) {
    return -1;
}

s32 func_0009F8AC(void) {
    return -1;
}

s32 func_0009F8B4(void) {
    return -1;
}

s32 func_0009F8BC(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F8C4);

void func_0009F91C(void) {
    sceKernelLibcTime();
}

void func_0009F938(void) {
    sceKernelLibcGettimeofday();
}

s32 func_0009F954(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F95C);

s32 func_0009F96C(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009F974);

void func_0009F9A4(M2C_UNK **arg0) {
    *arg0 = &D_000C4060;
}

void func_0009F9B4(M2C_UNK **arg0) {
    *arg0 = &D_000C4060;
}

void func_0009F9C4(M2C_UNK **arg0) {
    *arg0 = &D_000C4060;
    func_000A0934((s32) arg0);
}

void func_0009F9EC(M2C_UNK **arg0) {
    *arg0 = &D_000C4048;
    func_000A0954();
}

void func_0009FA14(M2C_UNK **arg0) {
    *arg0 = &D_000C4048;
    func_000A0954();
}

void func_0009FA3C(M2C_UNK **arg0) {
    *arg0 = &D_000C4048;
    func_000A0954();
    func_000A0934((s32) arg0);
}

void func_0009FA74(M2C_UNK **arg0) {
    *arg0 = &D_000C4030;
    func_000A0954();
}

void func_0009FA9C(M2C_UNK **arg0) {
    *arg0 = &D_000C4030;
    func_000A0954();
}

void func_0009FAC4(M2C_UNK **arg0) {
    *arg0 = &D_000C4030;
    func_000A0954();
    func_000A0934((s32) arg0);
}

s32 func_0009FAFC(void) {
    return 0;
}

s32 func_0009FB04(void) {
    return 0;
}

s32 func_0009FB0C(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4);
}

s32 func_0009FB20(void) {
    return 0;
}

void func_0009FB28(s32 **arg0) {
    *arg0 = &D_000C4000;
    func_0009F9A4(arg0);
}

void func_0009FB50(s32 **arg0) {
    *arg0 = &D_000C4000;
    func_0009F9A4(arg0);
}

void func_0009FB78(s32 **arg0) {
    *arg0 = &D_000C4000;
    func_0009F9A4(arg0);
    func_000A0934((s32) arg0);
}

void func_0009FBB0(s32 **arg0) {
    *arg0 = &D_000C3FD0;
    func_0009FB28(arg0);
}

void func_0009FBD8(s32 **arg0) {
    *arg0 = &D_000C3FD0;
    func_0009FB28(arg0);
}

void func_0009FC00(s32 **arg0) {
    *arg0 = &D_000C3FD0;
    func_0009FB28(arg0);
    func_000A0934((s32) arg0);
}

void func_0009FC38(s32 **arg0) {
    *arg0 = &D_000C3FA0;
    func_0009FB28(arg0);
}

void func_0009FC60(s32 **arg0) {
    *arg0 = &D_000C3FA0;
    func_0009FB28(arg0);
}

void func_0009FC88(s32 **arg0) {
    *arg0 = &D_000C3FA0;
    func_0009FB28(arg0);
    func_000A0934((s32) arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009FCC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009FD18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009FD84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009FD98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009FDE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009FF1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009FF5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_0009FFF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A04C4);

s32 func_000A04F4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_v1;
    void **temp_v0;

    var_v1 = 1;
    if (func_000A04C4() == 0) {
        temp_v0 = M2C_FIELD(arg0, void ***, 8);
        var_v1 = M2C_FIELD(*temp_v0, s32 (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x18)(temp_v0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0574);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A07E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0934);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0954);

void func_000A0964(M2C_UNK **arg0) {
    *arg0 = &D_000C4180;
}

void func_000A0974(M2C_UNK **arg0) {
    *arg0 = &D_000C4180;
    func_000A0934((s32) arg0);
}

void func_000A099C(M2C_UNK **arg0) {
    *arg0 = &D_000C4168;
    func_000A0954();
}

void func_000A09C4(M2C_UNK **arg0) {
    *arg0 = &D_000C4168;
    func_000A0954();
}

void func_000A09EC(M2C_UNK **arg0) {
    *arg0 = &D_000C4168;
    func_000A0954();
    func_000A0934((s32) arg0);
}

s32 func_000A0A24(void **arg0) {
    return M2C_FIELD(M2C_FIELD(*arg0, void **, -4), s32 *, 4);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0A34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0AA4);

u8 *func_000A0B4C(u8 *arg0, s32 *arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 *var_a0;
    u8 temp_v1;

    var_a0 = arg0;
    var_a2 = 0;
    var_a3 = 0;
    do {
        temp_v1 = *var_a0;
        var_a0 += 1;
        var_a3 |= (temp_v1 & 0x7F) << var_a2;
        var_a2 += 7;
    } while ((s8) temp_v1 < 0);
    *arg1 = var_a3;
    return var_a0;
}

u8 *func_000A0B80(u8 *arg0, s32 *arg1) {
    s32 var_t0;
    u32 var_a3;
    u8 *var_a0;
    u8 temp_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_t0 = 0;
    do {
        temp_a2 = *var_a0;
        var_a0 += 1;
        var_t0 |= (temp_a2 & 0x7F) << var_a3;
        var_a3 += 7;
    } while ((s8) temp_a2 < 0);
    if (var_a3 < 0x20U) {
        if (temp_a2 & 0x40) {
            var_t0 |= -1 << var_a3;
        }
    }
    *arg1 = var_t0;
    return var_a0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3FA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C3FD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4000);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4030);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4048);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4060);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4078);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4080);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C408C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4098);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C40A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C40B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C40BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C40E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C410C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4130);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4140);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C414C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4168);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4180);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4190);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4198);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C41A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C41B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0BD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0D1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0E1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0E74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0F0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0F9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A0FD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A14A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A159C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A15C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A15DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A15F4);

s32 func_000A161C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000C55F4;
    D_000C55F4 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A162C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A1680);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A1700);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A1774);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A1848);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A18D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A1978);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A1A54);

void func_000A1A74(void) {
    D_000C55F8 = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A1A80);

M2C_UNK *func_000A1AB0(void) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (D_000C55F8 == 0) {
        var_v0 = &D_000CD2D0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A1AD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A1B30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A2114);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A22FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A2408);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A2414);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A2610);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A26D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A27E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4200);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4220);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C42FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4300);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4304);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4308);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C430C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4310);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4314);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4318);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C431C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4320);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4324);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4328);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C432C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4338);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C433C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4348);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C434C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4358);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C435C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A286C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4368);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C436C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A29B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4378);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C437C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A2B04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A2C74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A2E50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A2FDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A317C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C43FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4400);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4404);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A36BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A3818);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A4168);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A497C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A4D10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A5264);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A5634);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A5D68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A6FD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A76B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A79D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A7D38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A8A10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A8CDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A93C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A93D8);

s32 func_000A93FC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A9404);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A9618);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A97B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A97D8);

void func_000A97F0(void) {
    func_000A9898();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A980C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A9898);

void func_000A98C0(s32 arg0) {
    func_000A9B48(func_000A9898(), arg0);
}

void func_000A98F0(s32 arg0) {
    func_000AA984(func_000A9898(), arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A9920);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000A9B48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA090);

void func_000AA148(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if (D_000CD314 == 0) {
        D_000CD318 = temp_a0;
    }
    D_000CD314 += 1;
}

void func_000AA184(void) {
    s32 temp_v0;

    temp_v0 = D_000CD314 - 1;
    D_000CD314 = temp_v0;
    if (temp_v0 != 0) {

    } else {
        sceKernelCpuResumeIntr(D_000CD318);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA1C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA214);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA2A8);

s32 func_000AA4CC(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    D_000CD408 = 0;
    temp_v0 = func_0009F58C(arg1);
    if (temp_v0 != -1) {

    } else if (D_000CD408 != 0) {
        *arg0 = D_000CD408;
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA528);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA58C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA5F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA658);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA6E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA7A4);

void func_000AA840(s32 arg0) {
    func_000AA6E0(func_000A9898(), arg0);
}

void func_000AA870(s32 arg0, M2C_UNK arg1) {
    func_000AA658(func_000A9898(), arg0, arg1);
}

void func_000AA8B0(void) {
    func_000AA5F8(func_000A9898());
}

void func_000AA8D4(s32 arg0) {
    func_000AA7A4(func_000A9898(), arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA904);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA968);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AA984);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AAC00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AAD3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AB11C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AB240);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AB540);

void func_000AB5F8(void *arg0, void *arg1) {
    void **temp_v0;

    if (arg1 != NULL) {
        temp_v0 = (M2C_FIELD(arg1, s32 *, 4) * 4) + M2C_FIELD(arg0, s32 *, 0x4C);
        M2C_FIELD(arg1, void **, 0) = (void *) *temp_v0;
        *temp_v0 = arg1;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AB624);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AB854);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AB8DC);

void func_000AB994(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_000AB540(arg0, 1);
    M2C_FIELD(temp_v0, s32 *, 0x14) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AB9C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ABBE0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ABE30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AC084);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AC44C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AC9A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ACAC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ACB80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ACC7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ACCD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ACD48);

void func_000ACE2C(s32 arg0) {
    func_000ACEF4(arg0, (s32) &func_000ACB80);
}

void func_000ACE4C(void) {
    func_000ACE2C(D_000C5980);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ACE70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ACEF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ACFFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AD164);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AD270);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AD2E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AD374);

void func_000AD3EC(void *arg0) {
    func_000AD484(func_000A9898(), M2C_FIELD(arg0, s16 *, 0xE));
}

s32 func_000AD41C(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    D_000CD408 = 0;
    temp_v0 = func_0009F720(arg1, arg2, arg3);
    if (temp_v0 != -1) {

    } else if (D_000CD408 != 0) {
        *arg0 = D_000CD408;
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AD484);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AD4E0);

s32 func_000AD544(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    D_000CD408 = 0;
    temp_v0 = func_0009F394(arg1, arg2, arg3);
    if (temp_v0 != -1) {

    } else if (D_000CD408 != 0) {
        *arg0 = D_000CD408;
    }
    return temp_v0;
}

s32 func_000AD5AC(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    D_000CD408 = 0;
    temp_v0 = func_0009F67C(arg1, arg2, arg3);
    if (temp_v0 != -1) {

    } else if (D_000CD408 != 0) {
        *arg0 = D_000CD408;
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AD614);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AD698);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ADC6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000ADCB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE000);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE068);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE0DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE454);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE678);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE700);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE788);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE810);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE898);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE920);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AE9A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AEA84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AEB58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AEB9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AEBD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AEC40);

u8 *func_000AECE8(u8 *arg0, s32 *arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 *var_a0;
    u8 temp_v1;

    var_a0 = arg0;
    var_a2 = 0;
    var_a3 = 0;
    do {
        temp_v1 = *var_a0;
        var_a0 += 1;
        var_a3 |= (temp_v1 & 0x7F) << var_a2;
        var_a2 += 7;
    } while ((s8) temp_v1 < 0);
    *arg1 = var_a3;
    return var_a0;
}

u8 *func_000AED1C(u8 *arg0, s32 *arg1) {
    s32 var_t0;
    u32 var_a3;
    u8 *var_a0;
    u8 temp_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_t0 = 0;
    do {
        temp_a2 = *var_a0;
        var_a0 += 1;
        var_t0 |= (temp_a2 & 0x7F) << var_a3;
        var_a3 += 7;
    } while ((s8) temp_a2 < 0);
    if (var_a3 < 0x20U) {
        if (temp_a2 & 0x40) {
            var_t0 |= -1 << var_a3;
        }
    }
    *arg1 = var_t0;
    return var_a0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4410);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4414);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4488);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C448C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4490);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4494);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4498);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C449C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C44FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4578);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C457C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4580);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4584);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4588);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C458C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4590);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4594);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4598);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C459C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C45F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4628);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C462C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4630);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4634);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4638);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C463C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4640);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4644);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4648);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C464C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4650);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4654);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4658);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C465C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4660);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4664);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4668);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C466C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4670);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4674);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4680);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C46B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C46C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4700);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4704);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4708);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C470C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4710);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4714);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4718);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C471C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4720);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4724);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4728);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C472C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4730);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4734);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4738);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C473C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4740);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4744);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4748);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C474C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4750);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4754);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4758);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C475C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4760);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4764);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4768);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C476C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4770);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4774);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4780);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C47E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C47EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C47F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C47F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C47F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C47FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4800);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4804);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4808);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C480C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4810);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4814);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4818);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C481C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4820);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4824);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4828);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C482C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4830);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4834);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4838);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C483C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4840);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4844);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4848);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C484C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4850);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4854);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4858);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C485C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4860);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4870);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4880);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4968);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C496C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4970);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4974);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4978);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C497C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4980);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4984);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4988);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C498C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4990);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4994);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4998);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C499C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C49FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A24);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A28);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A2C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A34);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A3C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A4C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A54);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A64);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4A68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4B70);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C4C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C54);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C64);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C70);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C78);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4C9C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4CD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4CDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4CE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4CE4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4CE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4CEC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4CF0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4CF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4CF8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4CFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D94);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4D9C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4DA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4DA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4DA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4DAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4DB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4DB4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4DB8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4DBC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4DF8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4DFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E24);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E28);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4E2C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EB4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EB8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EBC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EC0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EC4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EC8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4ECC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4ED0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4ED4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4ED8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EE4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EEC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EF0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EF8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4EFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F24);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F28);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F2C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F34);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F3C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F78);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F88);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F8C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F94);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4F98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4FA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C4FB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C50F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AED74);

s32 func_000AEEC0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x354);
}

s32 func_000AEEC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x360);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AEED0);

s32 func_000AEEFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x35C);
}

s32 func_000AEF04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x358);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AEF0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AF0B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AF58C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AFA98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AFC1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AFD04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AFEC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AFF0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000AFFB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B03C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B0498);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B06D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B07F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B0980);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B0B10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B0C98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B0CCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B0E14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B0E28);

s32 func_000B0E3C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x350);
}

void func_000B0E44(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x350) = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B0E4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B11A4);

u8 *func_000B1214(u8 *arg0, s32 *arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 *var_a0;
    u8 temp_v1;

    var_a0 = arg0;
    var_a2 = 0;
    var_a3 = 0;
    do {
        temp_v1 = *var_a0;
        var_a0 += 1;
        var_a3 |= (temp_v1 & 0x7F) << var_a2;
        var_a2 += 7;
    } while ((s8) temp_v1 < 0);
    *arg1 = var_a3;
    return var_a0;
}

u8 *func_000B1248(u8 *arg0, s32 *arg1) {
    s32 var_t0;
    u32 var_a3;
    u8 *var_a0;
    u8 temp_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_t0 = 0;
    do {
        temp_a2 = *var_a0;
        var_a0 += 1;
        var_t0 |= (temp_a2 & 0x7F) << var_a3;
        var_a3 += 7;
    } while ((s8) temp_a2 < 0);
    if (var_a3 < 0x20U) {
        if (temp_a2 & 0x40) {
            var_t0 |= -1 << var_a3;
        }
    }
    *arg1 = var_t0;
    return var_a0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B12A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B13E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B1454);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B1474);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B14BC);

void func_000B151C(s32 arg0, s32 arg1) {
    func_000B14BC(arg0, arg1, 0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B153C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B1570);

void func_000B1668(void) {
    func_000B1570();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B1684);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B16BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B1730);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B1810);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B1838);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B18E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B19C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B1C30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B1D84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B1EE4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B2068);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B2328);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B24B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B2788);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B28D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B299C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B2C04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash", func_000B2D18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash", D_000C54D4);
