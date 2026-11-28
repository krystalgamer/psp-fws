/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -mext */
#include "common.h"
#include "mm_flash_decls.h"

void func_00062398(struct Unk_func_00062398_0 *arg0, struct Unk_func_0001E628_1 *arg1, s32 arg2) {
    struct Unk_func_00062398_temp_v0 *temp_v0;

    func_0006219C(arg0);
    temp_v0 = func_00090648(*func_0009F1C0(), 8, 0);
    func_0001E628(temp_v0, arg1, arg2);
    arg0->unk8 = temp_v0;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = (s32) (temp_v0->unk4 + 1);
        arg0->unk0 = 2;
    }
}

void func_00062424(struct Unk_func_00062424_0 *arg0, void **arg1) {
    struct Unk_func_00062424_temp_v0 *temp_v0;

    func_0006219C(arg0);
    temp_v0 = func_00090648(*func_0009F1C0(), 8, 0);
    func_0001E994(temp_v0, arg1);
    arg0->unk8 = temp_v0;
    if (temp_v0 != NULL) {
        temp_v0->unk4 = (s32) (temp_v0->unk4 + 1);
        arg0->unk0 = 2;
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000624A0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00062544);

void func_00062598(struct Unk_func_00062598_0 *arg0, s32 arg1) {
    struct Unk_func_00062598_temp_v0 *temp_v0;

    func_0006219C(arg0);
    temp_v0 = func_00063D90(arg1 + 0x148);
    arg0->unk8 = temp_v0;
    if (temp_v0 != NULL) {
        arg0->unk0 = 4;
        temp_v0->unk8 = (s32) (temp_v0->unk8 + 1);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000625F4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00062620);

void func_000626D0(struct Unk_func_000626D0_0 *arg0, struct Unk_func_00060074_1 *arg1) {
    s32 temp_a1;
    s32 temp_v0;

    func_0006219C(arg0);
    temp_v0 = func_000637FC(arg1);
    arg0->unk8 = temp_v0;
    if (temp_v0 == 0) {

    } else {
        arg0->unk0 = 3;
        func_00060074((void *) temp_v0, arg1);
        temp_a1 = arg0->unk8;
        func_00022588(arg1->unkBD0, temp_a1, temp_a1);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006273C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00062804);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000628A8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00062A94);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00062AF4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00062BA4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00062DD8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063090);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000631C4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000631F8);

void func_000632B8(struct Unk_func_0005A7A4_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk8 - 1;
    arg0->unk8 = temp_v0;
    if (temp_v0 == 0) {
        if (arg0 != NULL) {
            func_00063090();
            func_00090730(*func_0009F1C0(), (s32) arg0, 0);
        }
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063310);

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

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063480);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063508);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000635E8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000637FC);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000638B0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063AB0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063C2C);

void func_00063CA8(struct Unk_func_00063CA8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk8 - 1;
    arg0->unk8 = temp_v0;
    if (temp_v0 == 0) {
        if (arg0 != NULL) {
            func_00063C2C();
            func_00090730(*func_0009F1C0(), (s32) arg0, 0);
        }
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063D00);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063D90);

void func_00063E34(struct Unk_func_00063E34_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk44 = 0;
}

void func_00063E40(struct Unk_func_00063E40_0 *arg0, s32 arg1) {
    arg0->unk0 = arg1;
    arg0->unk44 = 0;
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063E4C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063EB8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00063F24);

void func_00063FD8(void *arg0, struct Unk_func_00063FD8_1 *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_v0 < 0x10) {
        M2C_FIELD(((temp_v0 * 4) + arg0), void **, 4) = arg1;
        arg1->unk8 = (s32) (arg1->unk8 + 1);
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00064010);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00064060);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000640C4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00064184);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006420C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000642E4);

void func_00064338(s32 arg0) {
    func_00062620(arg0 + 0x40);
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00064354);

s32 func_000643B4(struct Unk_func_000643B4_0 *arg0) {
    s32 var_v0;
    struct Unk_func_000643B4_temp_v1 *temp_v1;
    struct Unk_func_000643B4_temp_v1_2 *temp_v1_2;

    var_v0 = arg0->unkC;
    if (var_v0 == 0) {
        temp_v1 = arg0->unk10;
        if (temp_v1 != NULL) {
            temp_v1_2 = temp_v1->unk34;
            if (temp_v1_2 != NULL) {
                var_v0 = temp_v1_2->unk2DC;
                arg0->unkC = var_v0;
            }
        }
    }
    return var_v0 != 0;
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000643E8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000644D0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000645A4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00064684);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE290);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00064770);

s32 func_000647A0(struct Unk_func_000647A0_0 *arg0, struct Unk_func_000647A0_1 *arg1) {
    s32 var_v0;

    if (arg0 != NULL) {
        return arg0->unk34->unk228;
    }
    var_v0 = 0;
    if (arg1 != NULL) {
        var_v0 = arg1->unk230;
    }
    return var_v0;
}

s32 func_000647C8(struct Unk_func_000647C8_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = (arg1 == 0) ? 0 : (arg1 + 0x22C);
    if (arg0 != NULL) {
        var_v0 = arg0->unk34 + 0x224;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000647E4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00064D24);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00065264);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000656D8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00065B4C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00065FD8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00066318);

void func_000663C4(struct Unk_func_000663C4_0 *arg0) {
    if (arg0->unkC9C != 0) {
        func_00066AC4((s32) arg0);
        arg0->unkC9C = 0;
        arg0->unkCA0 = 0;
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00066400);

s32 func_00066634(struct Unk_func_00066634_0 *arg0) {
    s32 var_v0;

    var_v0 = arg0->unk102C;
    if (var_v0 != 0) {
        func_000001FC(arg0->unkFFC->unk4, arg0);
        func_00067F14(arg0);
        var_v0 = arg0->unk102C;
    }
    return var_v0;
}

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE2AC);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE2C8);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE2E4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006667C);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE314);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00066988);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00066AC4);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE328);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00066BD0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006708C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000670B8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00067130);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000671A4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000674F4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00067588);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000675E8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00067738);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00067928);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00067B74);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00067C20);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00067C74);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00067D90);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00067E70);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00067F14);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00068034);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006808C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006811C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000686CC);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00068740);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000687CC);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00068834);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00068AC4);

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

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00068B40);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00068B88);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00068C84);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00068D20);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00068DA8);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE35C);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE364);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE36C);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE374);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE37C);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE380);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00068EC0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000693D8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006966C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00069764);

void func_000697C8(s32 arg0, struct Unk_func_000697C8_1 *arg1, s32 arg2) {
    struct Unk_func_000697C8_temp_v1 *temp_v1;
    struct Unk_func_000697C8_temp_v1_2 *temp_v1_2;

    if ((arg1 != NULL) && (temp_v1 = arg1->unk74, (temp_v1 != NULL))) {
        temp_v1_2 = temp_v1->unk4;
        if (temp_v1_2 != (arg0 + 0x5F0)) {
            func_00056808(temp_v1_2->unk20, (s32) arg1, arg2);
        } else {
            func_000670B8(arg0, arg1->unk68);
        }
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00069810);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006A258);

void func_0006A384(struct Unk_func_0006A384_0 *arg0) {
    struct Unk_func_0006A384_temp_v0 *temp_v0;
    struct Unk_func_0006A384_var_s0 *var_s0;

    if (arg0 != NULL) {
        var_s0 = arg0->unkC;
        if (var_s0 != NULL) {
            do {
                func_0006A384(var_s0);
                var_s0 = var_s0->unk8;
            } while (var_s0 != NULL);
        }
        temp_v0 = arg0->unk10;
        if (temp_v0 != NULL) {
            if (temp_v0->unkB != 9) {

            } else {
                func_00016E90(arg0->unkA0);
            }
        }
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006A3FC);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006A628);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006A6B0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006A7A0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006A800);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006A914);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006AA1C);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE41C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006AA68);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006B194);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006B20C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006B320);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006B51C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006B5B8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006B894);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006B940);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006BA9C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006BB5C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006BC2C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006BC98);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE430);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE43C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006BD20);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006C30C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006C390);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006C42C);

void func_0006C4B4(void) {
    func_0009396C(6);
}

void func_0006C4D0(s32 arg0) {
    func_00093920(arg0 & 0xFF, 6);
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006C4F0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006C5B8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006C71C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006C7D4);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE4A0);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE4A8);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE4B0);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE4B8);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE4BC);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE4C4);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE4D0);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE4DC);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006C904);

void func_0006C99C(struct Unk_func_0006C99C_0 *arg0) {
    arg0->unk0 = &D_000BE524;
    arg0->unk4 = &D_000BE52C;
    arg0->unk8 = &D_000BE538;
    arg0->unkC = &D_000BE540;
    arg0->unk10 = 0;
}

void func_0006C9D4(struct Unk_func_0006C9D4_0 *arg0) {
    arg0->unk0 = &D_000BE524;
    arg0->unk4 = &D_000BE52C;
    arg0->unk8 = &D_000BE538;
    arg0->unkC = &D_000BE540;
    arg0->unk10 = 0;
}

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE524);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE52C);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE538);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE540);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006CA0C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006CA34);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006CCF4);

void func_0006CEC8(struct Unk_func_0006CEC8_0 *arg0) {
    if (arg0->unk0 != 3) {

    } else {
        func_0006CF30(arg0->unk8);
    }
}

void func_0006CEFC(s32 arg0) {
    func_0006CEC8(arg0 + 8);
    func_0006CEC8(arg0 + 0x18);
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006CF30);

void func_0006D050(struct Unk_func_0006D050_0 *arg0) {
    s32 temp_a0;
    struct Unk_func_0006D050_var_s0 *var_s0;

    var_s0 = arg0->unkC;
    if (var_s0 != NULL) {
        do {
            func_0006D050(var_s0);
            var_s0 = var_s0->unk8;
        } while (var_s0 != NULL);
    }
    temp_a0 = arg0->unk20;
    if (temp_a0 == 0) {

    } else {
        func_0006CF30(temp_a0 + 0x148);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006D0B0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006D280);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE588);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0006D3D0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00070CF8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00070DB0);

void func_00071450(s32 arg0, M2C_UNK arg1) {
    func_00071474(arg1, arg0);
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00071474);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0007156C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000715F0);

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

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000716F4);

void func_00071CA0(struct Unk_func_00071CA0_0 *arg0) {
    if (arg0->unkCBC != 0) {

    } else if (func_00079608() != 0) {
        arg0->unkCBC = 1;
        arg0->unkCB4 = func_000933A0();
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00071CEC);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00071D88);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00071F70);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00071FC0);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE5A8);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE5B0);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE5BC);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE5C4);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE5D0);

#if FW_VERSION >= 282 && FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE58C);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE7EC);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE814);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE2DC);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE53C);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE564);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE5DC);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE83C);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE864);
#endif

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE880);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00072018);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00072124);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00072298);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00072530);

void func_000725B0(struct Unk_func_000725B0_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkC70;
    if (temp_v0 == 0) {

    } else {
        arg0->unkC90 = (s32) (arg0->unkC90 == 0);
        func_000506B0(temp_v0);
    }
}

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE898);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE8A4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000725EC);

INCLUDE_RODATA("nonmatchings/mm_flash_062398", D_000BE930);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000727F4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000728A0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00072934);

s32 func_00072CF0(struct Unk_func_00072CF0_0 *arg0) {
    s32 var_v0;
    struct Unk_func_00072CF0_temp_a0 *temp_a0;

    temp_a0 = arg0->unkC70;
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = temp_a0->unkA0->unk8 != 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00072D10);

s32 func_00072ED8(struct Unk_func_00072ED8_0 *arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = arg0->unkC48;
    var_a0 = 0;
    temp_a1 = temp_v0 - 1;
    if (temp_v0 != 0) {
        arg0->unkC48 = temp_a1;
        func_0006219C(arg0->unkC44 + (temp_a1 * 0x10));
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_00072F20(struct Unk_func_00072F20_0 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unkC48;
    if (temp_v0 != 0) {
        func_000628A8(arg1, (arg0->unkC44 + (temp_v0 * 0x10)) - 0x10, 1);
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
    return arg0->unkC48 != 0;
}

s32 func_00072FC8(struct Unk_func_00072F20_0 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_00072F20(arg0, arg1);
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = arg0->unkC48 - 1;
        arg0->unkC48 = temp_v0_2;
        func_0006219C(arg0->unkC44 + (temp_v0_2 * 0x10));
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073024);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073078);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000730E0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073290);

void func_000733A8(struct Unk_func_000733A8_0 *arg0) {
    struct Unk_func_000733A8_temp_a0 *temp_a0;
    struct Unk_func_000733A8_temp_v0 *temp_v0;

    temp_a0 = arg0->unkD90;
    if (temp_a0 != NULL) {
        temp_v0 = temp_a0->unk10;
        if (temp_v0 != NULL) {
            if ((temp_v0->unkB == 2) || (func_0005264C(temp_a0) != 0)) {
                func_00073BFC(arg0, arg0->unkD90, 1, 1);
                func_00073BFC(arg0, arg0->unkD90, 0, 1);
            }
        }
    }
    arg0->unkCC0 = -1;
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073430);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073698);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000738F4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073A3C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073AA8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073B10);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073BFC);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073E88);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00073EA8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000740E8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000741B8);

void func_000742A8(struct Unk_func_000742A8_0 *arg0) {
    s32 temp_s1;

    temp_s1 = arg0->unkDA4;
    arg0->unkDA8 = 0;
    if (temp_s1 != 0) {
        func_00090730(*func_0009F1C0(), temp_s1, 0);
        arg0->unkDA4 = 0;
    }
    arg0->unkDAC = 0;
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00074300);

void func_00074344(struct Unk_func_00074344_0 *arg0) {
    if (arg0->unkD38 != 0) {
        func_000740E8((s32) arg0, arg0->unkD3C);
        arg0->unkD3C = 0;
        arg0->unkD38 = 0U;
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00074380);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0007450C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00074538);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00074624);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00074684);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00074714);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0007495C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00074A48);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00074BE8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00074DB4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00075124);

s32 func_000753DC(struct Unk_func_000753DC_0 *arg0, s32 arg1) {
    s32 var_v0;
    struct Unk_func_000753DC_temp_s0 *temp_s0;

    temp_s0 = arg0->unkD08;
    var_v0 = 0;
    if (temp_s0 != NULL) {
        if ((arg1 != 0) && (temp_s0->unk44->unk48 == 0)) {
            func_00074DB4((s32) arg0);
        }
        var_v0 = temp_s0->unk44->unk48;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0007542C);

void func_00075460(void) {
}

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00075468);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00075590);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000756C0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000765C0);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000766A4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000766D4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0007689C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00076934);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00076A10);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00076AE4);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00076B88);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00076EFC);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00076FDC);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00077124);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_0007724C);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000772D8);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000774BC);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_00077944);

INCLUDE_ASM("nonmatchings/mm_flash_062398", func_000779B4);

s32 func_00077A74(s32 arg0, s32 arg1) {
    void *sp0;
    return (func_000226F0(arg0, arg1, &sp0) == 0) ? 0 : sp0;
}
