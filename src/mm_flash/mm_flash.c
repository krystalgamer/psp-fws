#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("nonmatchings/mm_flash", func_00000000);

INCLUDE_ASM("nonmatchings/mm_flash", func_00000044);

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

INCLUDE_ASM("nonmatchings/mm_flash", func_000000E8);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000012C);

INCLUDE_ASM("nonmatchings/mm_flash", func_000001CC);

INCLUDE_ASM("nonmatchings/mm_flash", func_000001FC);

INCLUDE_ASM("nonmatchings/mm_flash", func_00000364);

INCLUDE_ASM("nonmatchings/mm_flash", func_00000470);

INCLUDE_ASM("nonmatchings/mm_flash", func_000004A4);

INCLUDE_ASM("nonmatchings/mm_flash", func_000004D4);

void func_00000504(void) {
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0000050C);

void func_00000520(struct Unk_func_00000520_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk0 = 0;
    arg0->unk8 = 0;
    func_0000050C((u8 *)arg0 + 0xC);
    arg0->unk1C = 0;
}

void func_00000558(struct Unk_func_00000558_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk0 = 0;
    arg0->unk8 = 0;
    func_0000050C((u8 *)arg0 + 0xC);
    arg0->unk1C = 0;
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00000590);

INCLUDE_ASM("nonmatchings/mm_flash", func_00000638);

INCLUDE_ASM("nonmatchings/mm_flash", func_00000968);

INCLUDE_ASM("nonmatchings/mm_flash", func_00000ABC);

INCLUDE_ASM("nonmatchings/mm_flash", func_00000C38);

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

INCLUDE_ASM("nonmatchings/mm_flash", func_00000DBC);

INCLUDE_ASM("nonmatchings/mm_flash", func_00000DD8);

INCLUDE_ASM("nonmatchings/mm_flash", func_00000E10);

void func_00000E68(s32 arg0, M2C_UNK arg1) {
    s32 *temp_v1;
    s32 temp_v0;

    temp_v0 = func_00000C38(arg1);
    temp_v1 = (temp_v0 * 4) + arg0;
    if (temp_v0 >= 0) {
        *temp_v1 += 1;
    }
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00000EA8);

s32 func_00000F1C(void **arg0) {
    s32 temp_v0;
    s32 var_v1;
    struct Unk_func_00000F1C_var_a0 *var_a0;

    var_a0 = *arg0;
    var_v1 = 0;
    if (var_a0 != NULL) {
        do {
            temp_v0 = var_a0->unk8;
            var_a0 = var_a0->unkC;
            var_v1 |= temp_v0;
        } while (var_a0 != NULL);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00000F40);

INCLUDE_ASM("nonmatchings/mm_flash", func_00000F54);

INCLUDE_ASM("nonmatchings/mm_flash", func_00001114);

void func_0000119C(struct Unk_func_0000119C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk40C = 0;
}

void func_000011AC(void) {
}

void func_000011B4(void) {
}

INCLUDE_ASM("nonmatchings/mm_flash", func_000011BC);

INCLUDE_ASM("nonmatchings/mm_flash", func_00001328);

INCLUDE_ASM("nonmatchings/mm_flash", func_000013EC);

INCLUDE_ASM("nonmatchings/mm_flash", func_00001434);

INCLUDE_ASM("nonmatchings/mm_flash", func_00001544);

s32 func_000015C4(s32 arg0) {
    return arg0;
}

void func_000015CC(void) {
}

void func_000015D4(void) {
}

INCLUDE_ASM("nonmatchings/mm_flash", func_000015DC);

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

INCLUDE_ASM("nonmatchings/mm_flash", func_000016F4);

INCLUDE_ASM("nonmatchings/mm_flash", func_00001764);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4400);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4408);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4420);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B442C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B443C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4444);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4450);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4498);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B44A0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B44B8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B44C8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B44D4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B44E8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B44F4);

INCLUDE_ASM("nonmatchings/mm_flash", func_00001898);

INCLUDE_ASM("nonmatchings/mm_flash", func_00002094);

INCLUDE_ASM("nonmatchings/mm_flash", func_00002220);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B46C0);

INCLUDE_ASM("nonmatchings/mm_flash", func_000025C4);

INCLUDE_ASM("nonmatchings/mm_flash", func_00002E0C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00002E78);

INCLUDE_ASM("nonmatchings/mm_flash", func_00003400);

INCLUDE_ASM("nonmatchings/mm_flash", func_000036B4);

INCLUDE_ASM("nonmatchings/mm_flash", func_000036F0);

INCLUDE_ASM("nonmatchings/mm_flash", func_000038E8);

void func_00003B64(s32 arg0) {
    func_000038E8(arg0, 1);
}

void func_00003B80(s32 arg0) {
    func_000038E8(arg0, 0);
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00003B9C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00003F44);

INCLUDE_ASM("nonmatchings/mm_flash", func_00003F88);

INCLUDE_ASM("nonmatchings/mm_flash", func_00004184);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4758);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B475C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4760);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4768);

INCLUDE_ASM("nonmatchings/mm_flash", func_000042B0);

INCLUDE_ASM("nonmatchings/mm_flash", func_00004428);

INCLUDE_ASM("nonmatchings/mm_flash", func_00004B7C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00004CE8);

INCLUDE_ASM("nonmatchings/mm_flash", func_00005034);

INCLUDE_ASM("nonmatchings/mm_flash", func_00005D88);

INCLUDE_ASM("nonmatchings/mm_flash", func_00005F58);

INCLUDE_ASM("nonmatchings/mm_flash", func_00006108);

void func_000062B0(struct Unk_vt_func_000062B0_arg0 **arg0) {
    (*arg0)->unkCD0 = 1;
}

INCLUDE_ASM("nonmatchings/mm_flash", func_000062C0);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000664C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00006DF4);

INCLUDE_ASM("nonmatchings/mm_flash", func_00006F68);

INCLUDE_ASM("nonmatchings/mm_flash", func_000072E8);

INCLUDE_ASM("nonmatchings/mm_flash", func_000073D4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4C44);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4C54);

INCLUDE_ASM("nonmatchings/mm_flash", func_00007448);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4D2C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00008330);

INCLUDE_ASM("nonmatchings/mm_flash", func_00008788);

INCLUDE_ASM("nonmatchings/mm_flash", func_00008820);

INCLUDE_ASM("nonmatchings/mm_flash", func_00008CC4);

void func_00008FBC(struct Unk_func_00008FBC_0 *arg0) {
    if (arg0->unk38 != 0) {

    } else {
        func_0006235C((u8 *)arg0 + 0x18, 0);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00008FF4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000915C);

void func_000091F8(void) {
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00009200);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000927C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4E24);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F60);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F64);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F68);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F6C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F70);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F74);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F78);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F7C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F80);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F84);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F88);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F8C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F90);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F94);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F98);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4F9C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FA0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FA4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FA8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FAC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FB0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FB4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FB8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FBC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FC0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FC4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FC8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FCC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FD0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FD4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FD8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FDC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FE0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FE4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FE8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FEC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FF0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FF4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FF8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B4FFC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5000);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5004);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5008);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B500C);

INCLUDE_ASM("nonmatchings/mm_flash", func_000093C8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B502C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00009874);

INCLUDE_ASM("nonmatchings/mm_flash", func_00009A0C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00009A8C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00009AC4);

INCLUDE_ASM("nonmatchings/mm_flash", func_00009B18);

s32 func_00009BD0(struct Unk_func_00009BD0_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;

    var_a0 = 0;
    if (arg0->unk18 == 0) {
        temp_a0 = ((s32) (arg0->unk0 + arg0->unk10) >> 1) - arg0->unk8;
        temp_v1 = ((s32) (arg0->unk4 + arg0->unk14) >> 1) - arg0->unkC;
        temp_a0_2 = __builtin_allegrex_max(temp_a0, -temp_a0);
        temp_v1_2 = __builtin_allegrex_max(temp_v1, -temp_v1);
        var_a0 = (temp_a0_2 + temp_v1_2) - (__builtin_allegrex_min(temp_v1_2, temp_a0_2) >> 1);
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00009C38);

INCLUDE_ASM("nonmatchings/mm_flash", func_00009CD8);

INCLUDE_ASM("nonmatchings/mm_flash", func_00009DD8);

INCLUDE_ASM("nonmatchings/mm_flash", func_00009E54);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000A1F0);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000A294);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000A3F8);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000A5A0);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000A5F0);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000A640);

void func_0000A690(s32 arg0) {
    func_0000A6E8();
    func_0009B73C(arg0);
}

void func_0000A6BC(s32 arg0) {
    func_0000A6E8();
    func_0009B73C(arg0);
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0000A6E8);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000A784);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000A870);

void func_0000A8C4(struct Unk_func_0000A8C4_0 *arg0, struct Unk_func_0000A8C4_1 *arg1) {
    if (arg0->unk4 != 0) {
        func_0009BA98((s32) arg0, (s32) arg1->unk8);
    } else {
        func_0006235C((s32) arg1, func_0009BA58((s32) arg0));
    }
}

void func_0000A910(struct Unk_func_0000A910_0 *arg0, M2C_UNK arg1) {
    if (arg0->unk4 != 0) {

    } else {
        func_000625F4(arg1);
    }
}

void func_0000A940(struct Unk_func_0000A940_0 *arg0, M2C_UNK arg1) {
    if (arg0->unk4 != 0) {

    } else {
        func_0006219C(arg1);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0000A970);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000AA78);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000AAEC);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000AC38);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000AE08);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000B494);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000B538);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B507C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5088);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B508C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5090);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000B5D8);

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

INCLUDE_ASM("nonmatchings/mm_flash", func_0000BA68);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000BBDC);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000BD6C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000BF24);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000BF5C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C0E8);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C150);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C394);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C480);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C570);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C5DC);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C670);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C6EC);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C74C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C7D4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C8C8);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C934);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C9A0);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000C9E4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000CA3C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000CB90);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000CD18);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5140);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5148);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B514C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5150);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5154);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5158);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B515C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5160);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5164);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5168);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B516C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5170);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5174);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5178);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B517C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5180);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5184);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5188);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B518C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5190);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5194);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5198);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B519C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51A0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51A4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51A8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51AC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51B0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51B4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51B8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51BC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51C0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51C4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51C8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51CC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51D0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51D4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51D8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51DC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51E0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51E4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51E8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51EC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51F0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51F4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51F8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B51FC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5200);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5204);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5208);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B520C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5210);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5214);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5218);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B521C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5220);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5224);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5228);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B522C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5230);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5234);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5238);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B523C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5240);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5244);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5248);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B524C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5250);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5254);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5258);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B525C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5260);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5264);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5268);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B526C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5270);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5274);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5278);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B527C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000CDF4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000D008);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000D04C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000DBB4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000DBD8);

void func_0000DBFC(void) {
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0000DC04);

s32 func_0000DC64(struct Unk_func_0000DC64_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;

    temp_v0 = arg0->unk18;
    var_a1 = 0;
    temp_v1 = temp_v0 - 1;
    if (temp_v0 != 0) {
        arg0->unk18 = temp_v1;
        var_a1 = temp_v1 == 0;
    }
    return var_a1;
}

void func_0000DC84(struct Unk_func_0000DC84_0 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0 = arg0->unk8;
    if (temp_s0 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
        arg0->unk8 = 0;
    }
    temp_s0_2 = arg0->unkC;
    if (temp_s0_2 != 0) {
        func_00090730(*func_0009F1C0(), temp_s0_2, 0);
        arg0->unkC = 0;
    }
}

void func_0000DD00(struct Unk_func_0000DD00_0 *arg0) {
    arg0->unk14 = 0;
    arg0->unk10 = 0;
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0000DD0C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000DEF8);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000E27C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000E318);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000E540);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000E70C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000E8A8);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000E9CC);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000EAA4);

s32 func_0000EB1C(struct Unk_func_0000EB1C_0 *arg0) {
    s32 *temp_s1;
    s32 temp_v0;
    s32 var_v0;

    var_v0 = arg0->unkC;
    if (var_v0 == 0) {
        temp_s1 = M2C_FIELD(arg0->unk4, s32 **, 0x20);
        temp_v0 = func_00090648(*func_0009F1C0(), 0x68, 0);
        func_0007B534(temp_v0, *temp_s1, arg0->unk4 + 0x30);
        arg0->unkC = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0000EB94);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000ECE0);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000ED70);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000EDB0);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000EF5C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F020);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F0E4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F104);

void func_0000F1A4(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x3C;
    func_0001D6A8(temp_s0);
    func_0001D3D8(temp_s0, 0x80);
    func_0000F0E4(arg0);
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F1EC);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F224);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F2DC);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F3A4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F410);

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

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F5B4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F5D8);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F6C4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F784);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F850);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F9A4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000F9F8);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000FAF0);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000FB9C);

void func_0000FBB4(struct Unk_func_0000FBB4_0 *arg0) {
    arg0->unk8 = 0;
}

void func_0000FBBC(struct Unk_func_0000FBB4_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s1;
    struct Unk_func_0000FBBC_temp_a1_2 *temp_a1_2;

    var_s1 = arg2;
    if (arg1 >= 0) {
        temp_v1 = arg0->unk1C;
        var_a3 = arg1 + arg2;
        if ((arg1 < temp_v1) & (arg2 > 0)) {
            if (temp_v1 < var_a3) {
                var_s1 = temp_v1 - arg1;
                var_a3 = arg1 + var_s1;
            }
            temp_a1 = arg0->unk4;
            sceHVNetfront_Module_1A02495A(temp_a1 + (arg1 * 6), temp_a1 + (var_a3 * 6), (temp_v1 - var_a3) * 6, var_a3);
            temp_a1_2 = arg0->unk0;
            arg0->unk1C = (s32) (arg0->unk1C - var_s1);
            if (temp_a1_2 != NULL) {
                temp_a1_2->unk268 = (s32) (temp_a1_2->unk268 - var_s1);
            }
            func_0000FBB4(arg0);
        }
    }
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0000FC7C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000FEA8);

INCLUDE_ASM("nonmatchings/mm_flash", func_0000FF0C);

void func_0000FF58(struct Unk_func_0000FF58_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    func_00010164((s32) arg0);
}

void func_0000FF7C(struct Unk_func_0000FF7C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    func_00010164((s32) arg0);
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0000FFA0);

INCLUDE_ASM("nonmatchings/mm_flash", func_0001002C);

s32 func_00010164(s32 arg0) {
    func_0001018C();
    return arg0;
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0001018C);

void func_000101AC(struct Unk_func_000101AC_0 *arg0) {
    s32 temp_s1;

    temp_s1 = arg0->unk0;
    if (temp_s1 != 0) {
        func_00090730(*func_0009F1C0(), temp_s1, 0);
        arg0->unk0 = 0;
    }
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00010200);

INCLUDE_ASM("nonmatchings/mm_flash", func_00010254);

void func_00010310(struct Unk_func_00010310_0 *arg0, s32 arg1) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    func_00010380((s32) arg0, arg1);
}

s32 func_00010334(struct Unk_func_00010334_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0->unkC == 0) && (arg0->unk10 == 0) && (arg0->unk14 == 0) && (arg0->unk1C == 0) && (arg0->unk18 == 0)) {
        var_v1 = arg0->unk4 == 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00010380);

INCLUDE_ASM("nonmatchings/mm_flash", func_000103E0);

INCLUDE_ASM("nonmatchings/mm_flash", func_00010418);

INCLUDE_ASM("nonmatchings/mm_flash", func_000104D4);

INCLUDE_ASM("nonmatchings/mm_flash", func_00010590);

INCLUDE_ASM("nonmatchings/mm_flash", func_00010674);

INCLUDE_ASM("nonmatchings/mm_flash", func_00010788);

INCLUDE_ASM("nonmatchings/mm_flash", func_000108A0);

s32 func_0001098C(struct Unk_func_0001098C_0 *arg0) {
    return __builtin_allegrex_max(func_000108A0() - (arg0->unkF8 - arg0->unkF4), 0);
}

INCLUDE_ASM("nonmatchings/mm_flash", func_000109C8);

INCLUDE_ASM("nonmatchings/mm_flash", func_00010A94);

s32 func_00010D74(struct Unk_func_00010D74_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkF0 - arg0->unkEC;
    return __builtin_allegrex_max((s32) (temp_v0 + ((u32) (temp_v0 >> 0x1F) >> 0x1E)) >> 2, 0x10);
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00010D9C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00010EC4);

INCLUDE_ASM("nonmatchings/mm_flash", func_00010F90);

INCLUDE_ASM("nonmatchings/mm_flash", func_0001128C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0001138C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00011510);

u16 func_000115B4(s32 arg0, s32 arg1) {
    void *sp0;
    return (func_00011510(arg0, arg1, &sp0) == 0) ? 0U : sp0;
}

INCLUDE_ASM("nonmatchings/mm_flash", func_000115DC);

INCLUDE_ASM("nonmatchings/mm_flash", func_00011734);

INCLUDE_ASM("nonmatchings/mm_flash", func_00011C98);

INCLUDE_ASM("nonmatchings/mm_flash", func_00011E7C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00011F50);

INCLUDE_ASM("nonmatchings/mm_flash", func_00012144);

INCLUDE_ASM("nonmatchings/mm_flash", func_0001224C);

INCLUDE_ASM("nonmatchings/mm_flash", func_000123C8);

INCLUDE_ASM("nonmatchings/mm_flash", func_000125B0);

INCLUDE_ASM("nonmatchings/mm_flash", func_00012794);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5344);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5374);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5380);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5390);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B53C8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B53D4);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B53E0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B53EC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B53FC);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5454);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5558);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B55A0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B55D8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B55F0);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5634);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5640);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5650);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B56A4);

INCLUDE_ASM("nonmatchings/mm_flash", func_0001286C);

INCLUDE_ASM("nonmatchings/mm_flash", func_000133D0);

INCLUDE_ASM("nonmatchings/mm_flash", func_000134E0);

void func_00013530(struct Unk_func_00013530_0 *arg0, s32 arg1) {
    sceHVNetfront_Module_D611E938(arg0->unk4, (arg1 == 0) ? 0 : 0xFF, 0x2000);
}

INCLUDE_ASM("nonmatchings/mm_flash", func_0001355C);

INCLUDE_ASM("nonmatchings/mm_flash", func_0001370C);

INCLUDE_ASM("nonmatchings/mm_flash", func_000138BC);

void func_000138F8(struct Unk_func_000138F8_0 *arg0) {
    s32 temp_s0;

    temp_s0 = arg0->unk4;
    if (temp_s0 == 0) {

    } else {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

void func_00013940(struct Unk_func_00013940_0 *arg0) {
    s32 temp_s0;

    temp_s0 = arg0->unk4;
    if (temp_s0 == 0) {

    } else {
        func_00090730(*func_0009F1C0(), temp_s0, 0);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00013988);

INCLUDE_ASM("nonmatchings/mm_flash", func_000140A0);

INCLUDE_ASM("nonmatchings/mm_flash", func_00014C38);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5798);

INCLUDE_ASM("nonmatchings/mm_flash", func_000152E4);

INCLUDE_ASM("nonmatchings/mm_flash", func_000155F8);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B57EC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/mm_flash", func_000159CC);
#else
void func_000159CC(s32 arg0, struct Unk_func_000159CC_1 *arg1) {
    s32 var_v1;

    var_v1 = arg1->unk48;
    if (var_v1 & 8) {
        func_0001DA90(arg0, (s32) "</U>");
        var_v1 = arg1->unk48;
    }
    if (var_v1 & 2) {
        func_0001DA90(arg0, (s32) "</I>");
        var_v1 = arg1->unk48;
    }
    if (!(var_v1 & 1)) {

    } else {
        func_0001DA90(arg0, (s32) "</B>");
    }
    if (*arg1->unk3C == 0) {

    } else {
        func_0001DA90(arg0, (s32) "</A>");
    }
}
#endif

INCLUDE_ASM("nonmatchings/mm_flash", func_00015A8C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5814);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B581C);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B5824);

INCLUDE_RODATA("nonmatchings/mm_flash", D_000B582C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00015B0C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00016218);

void func_0001627C(struct Unk_func_0001627C_0 *arg0) {
    s32 temp_v0;

    if (!(arg0->unkE4 & 8)) {
        temp_v0 = arg0->unk0;
        if (temp_v0 != arg0->unk4) {
            func_00016218(arg0);
        } else {
            func_00017884((s32) arg0, temp_v0, temp_v0 + 1);
        }
        func_00011F50((s32) arg0);
    }
}

void func_000162DC(struct Unk_func_000162DC_0 *arg0) {
    s32 temp_a1;
    s32 temp_v1;

    if (!(arg0->unkE4 & 8)) {
        temp_v1 = arg0->unk0;
        if (temp_v1 != arg0->unk4) {
            func_00016218(arg0);
        } else if (temp_v1 > 0) {
            func_00017884((s32) arg0, temp_v1 - 1, temp_v1);
            temp_a1 = arg0->unk4 - 1;
            func_000167AC((s32) arg0, temp_a1, temp_a1, 0);
        }
        func_00011F50((s32) arg0);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash", func_00016358);

INCLUDE_ASM("nonmatchings/mm_flash", func_00016444);

INCLUDE_ASM("nonmatchings/mm_flash", func_00016490);

INCLUDE_ASM("nonmatchings/mm_flash", func_000164DC);

INCLUDE_ASM("nonmatchings/mm_flash", func_00016560);

INCLUDE_ASM("nonmatchings/mm_flash", func_000165E4);

INCLUDE_ASM("nonmatchings/mm_flash", func_000166C4);

INCLUDE_ASM("nonmatchings/mm_flash", func_000167AC);

INCLUDE_ASM("nonmatchings/mm_flash", func_00016868);

INCLUDE_ASM("nonmatchings/mm_flash", func_000168F8);

INCLUDE_ASM("nonmatchings/mm_flash", func_000169B4);

INCLUDE_ASM("nonmatchings/mm_flash", func_00016A8C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00016B30);

INCLUDE_ASM("nonmatchings/mm_flash", func_00016D3C);

INCLUDE_ASM("nonmatchings/mm_flash", func_00016DD8);

INCLUDE_ASM("nonmatchings/mm_flash", func_00016E90);
