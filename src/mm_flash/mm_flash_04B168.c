/* compiler[303,340]: 1.9.2 */
/* cflags[303,340]: -O2 -mext */
/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -mext */
#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B168);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B1C4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B264);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B304);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B3C0);

void func_0004B47C(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 == 0) {

    } else {
        func_0004CFD8(temp_v0, arg0);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B4B0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B56C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B708);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B81C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B868);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004B940);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004BA8C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004BBEC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004BC6C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004BD84);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004BE6C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004BF48);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004BFC8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004C0EC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004C2CC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004CCFC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004CD44);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004CFD8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004CFFC);

void func_0004D0C0(struct Unk_func_0004D0C0_0 *arg0) {
    struct Unk_func_0004D0C0_var_v0 *var_v0;

    var_v0 = arg0->unk4;
    if (var_v0 != NULL) {
        do {
            var_v0->unkC = 1;
            var_v0 = var_v0->unk4;
        } while (var_v0 != NULL);
    }
    func_0004CFFC();
}

void func_0004D0F8(struct Unk_func_0004D0F8_0 *arg0, struct Unk_func_0004D0F8_1 *arg1) {
    s32 temp_v1;
    struct Unk_func_0004D0F8_var_a0 *var_a0;

    var_a0 = arg0->unk4;
    if (var_a0 != NULL) {
        do {
            if (var_a0->unk14 == arg1) {
                temp_v1 = arg1->unk34->unk2DC + 8;
                var_a0->unk14 = (s32) ((((s32) arg1 ^ temp_v1) == 0) ? 0 : temp_v1);
            }
            var_a0 = var_a0->unk4;
        } while (var_a0 != NULL);
    }
}

void func_0004D13C(struct Unk_func_0004D13C_0 *arg0, s32 arg1, s32 arg2) {
    struct Unk_func_0004D13C_temp_v0 *temp_v0;
    struct Unk_func_0004D13C_var_s0 *var_s0;

    var_s0 = arg0->unk4;
    if (var_s0 != NULL) {
        do {
            if (var_s0->unk10 == arg1) {
                if (arg2 == 0) {
                    var_s0->unkC = 1;
                } else {
                    temp_v0 = var_s0->unk18;
                    if ((temp_v0 != NULL) && (func_0001DE04(temp_v0->unk24, arg2) != 0)) {
                        var_s0->unkC = 1;
                    }
                }
            }
            var_s0 = var_s0->unk4;
        } while (var_s0 != NULL);
    }
    func_0004CFFC(arg0);
}

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004D1DC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004D21C);

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

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004D328);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004D404);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004D498);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004D5AC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004D8CC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004D990);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004DA4C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004DD18);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004DDB0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004DE30);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004E0E4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004E740);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004E7CC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004EB8C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004ECC8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0004F808);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00050014);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005007C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005020C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005049C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00050610);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000506B0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00050704);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000507C4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005089C);

void func_0005096C(struct Unk_func_0005096C_0 *arg0, M2C_UNK arg1) {
    void *var_a0;
    struct Unk_func_0005096C_var_s0 *var_s0;

    func_00035DD8(arg1, arg0->unk98);
    var_s0 = arg0->unkC;
    if (var_s0 != NULL) {
        var_a0 = var_s0;
        do {
            func_0005096C(var_a0, arg1);
            var_s0 = var_s0->unk8;
            var_a0 = var_s0;
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000509C8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00050B00);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00050C04);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00050DF8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00051040);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00051258);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000514D8);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDB30);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDB34);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDB40);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDB60);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDB80);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDB98);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDBA4);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDBB0);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDBBC);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDBCC);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDD30);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDD38);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDD48);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDD68);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDDA8);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDDB8);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDDC8);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDDD8);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDDE8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00051720);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00051DAC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000520D0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00052160);

void *func_00052214(struct Unk_func_00052214_0 *arg0) {
    s32 temp_v0;
    u8 temp_a1;
    struct Unk_func_00052214_temp_a3 *temp_a3;
    void *var_v1;

    temp_a3 = arg0->unk10;
    temp_a1 = temp_a3->unkB;
    if (temp_a1 != 9) {
        if ((((temp_a1 == 6) | (temp_a1 == 0x62)) != 0) || (var_v1 = (u8 *)temp_a3 + 0x14, (temp_a1 == 0x61))) {
            temp_v0 = arg0->unkAC;
            var_v1 = temp_v0 + 0xC;
            if (temp_v0 == 0) {
                var_v1 = (u8 *)temp_a3 + 0x14;
            }
        }
    } else {
        var_v1 = func_0001A4A8(arg0->unkA0);
    }
    return var_v1;
}

void func_0005228C(struct Unk_func_0005228C_0 *arg0, s32 arg1) {
    arg0->unkA4 = arg1;
}

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00052294);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000523C8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005250C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005260C);
#else
void func_0005260C(struct Unk_func_0005260C_0 *arg0) {
    s32 var_a2;
    struct Unk_func_0005260C_temp_a3 *temp_a3;

    temp_a3 = arg0->unk10;
    var_a2 = 0;
    if (temp_a3->unkB == 2) {
        var_a2 = (s32) temp_a3->unk30;
    }
    func_0005250C((s32) arg0, (s32) "trackAsMenu", var_a2);
}
#endif

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005264C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000526D8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00052778);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000527DC);

void func_00052810(void) {
    func_00052A4C();
}

void func_0005282C(void) {
    func_00052A4C();
}

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00052848);

void func_000528D0(s32 arg0, s32 arg1, s32 arg2) {
    func_00053988(arg0, 7, 0, 0, 0, 0);
    func_00053988(arg0, 2, arg1, arg2, 0, 0);
}

void func_0005293C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00053988(arg0, 3, arg1, arg2, arg3 & 0xFF, 0);
}

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005296C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000529A0);

void func_000529F8(s32 arg0) {
    func_00053988(arg0, 7, 0, 0, 0, 0);
    func_00053988(arg0, 6, 0, 0, 0, 0);
}

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00052A4C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00052B80);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00052DF4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00052FB8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00053988);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00053C48);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00053D4C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00053DDC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00053E48);

void func_00053EBC(s32 arg0, struct Unk_func_00053EBC_1 *arg1) {
    s32 temp_v0;

    func_00054524();
    temp_v0 = func_00054530(arg0, 5);
    arg1->unk0 = func_000545BC(arg0, temp_v0);
    arg1->unk4 = func_000545BC(arg0, temp_v0);
    arg1->unk8 = func_000545BC(arg0, temp_v0);
    arg1->unkC = func_000545BC(arg0, temp_v0);
}

void func_00053F44(s32 arg0, struct Unk_func_00053F44_1 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    func_00054524();
    if (func_00054530(arg0, 1) == 0) {
        arg1->unkC = 0x10000;
        arg1->unk0 = 0x10000;
    } else {
        temp_v0 = func_00054530(arg0, 5);
        arg1->unk0 = func_000545BC(arg0, temp_v0);
        arg1->unkC = func_000545BC(arg0, temp_v0);
    }
    if (func_00054530(arg0, 1) == 0) {
        arg1->unk8 = 0;
        arg1->unk4 = 0;
    } else {
        temp_v0_2 = func_00054530(arg0, 5);
        arg1->unk4 = func_000545BC(arg0, temp_v0_2);
        arg1->unk8 = func_000545BC(arg0, temp_v0_2);
    }
    temp_v0_3 = func_00054530(arg0, 5);
    arg1->unk10 = func_000545BC(arg0, temp_v0_3);
    arg1->unk14 = func_000545BC(arg0, temp_v0_3);
}

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00054050);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00054194);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000541D4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00054278);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000542A0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000542F0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00054524);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00054530);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000545BC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00054604);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00054738);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005486C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005490C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000549AC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00054B74);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000551C4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000559A4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00055CD4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00055DF8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00055F1C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00055FAC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005603C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000560B4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056140);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000561E0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000562FC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056520);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056808);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056A88);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056AEC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056B88);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056C0C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056CA0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056D4C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056E00);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056EA0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00056F48);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00057090);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE30);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE34);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE38);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE3C);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE40);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE44);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE48);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE4C);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE50);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE54);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE58);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE5C);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE60);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE64);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE68);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE6C);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE70);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE74);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE78);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE7C);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE80);

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDE84);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00057454);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00057D18);

void func_00057E78(struct Unk_func_00057E78_0 *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    struct Unk_func_00057E78_temp_s1 *temp_s1;

    temp_s1 = arg0->unk34;
    if (temp_s1->unk2CC != 0) {

    } else {
        temp_v0 = func_00090648(*func_0009F1C0(), 0x478, 1);
        func_0008FD94(temp_v0);
        temp_s1->unk2CC = temp_v0;
        temp_v1 = arg0->unk34->unk2CC;
        if (temp_v1 != 0) {
            if (func_0008FE1C(temp_v1, arg0) == 0) {
                temp_v0_2 = arg0->unk34->unk2CC;
                if (temp_v0_2 != 0) {
                    jpeg_destroy_decompress(temp_v0_2);
                }
                temp_s0 = arg0->unk34->unk2CC;
                if (temp_s0 != 0) {
                    func_0008FDE8(temp_s0);
                    func_00090730(*func_0009F1C0(), temp_s0, 1);
                }
                arg0->unk34->unk2CC = 0;
            }
        }
    }
}

INCLUDE_RODATA("nonmatchings/mm_flash_04B168", D_000BDEB4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00057F5C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005852C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000585A4);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005862C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00058768);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000588C0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00058958);

void func_000589E4(struct Unk_func_000589E4_0 *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    struct Unk_func_000589E4_temp_v0 *temp_v0;
    struct Unk_func_000589E4_temp_v1 *temp_v1;

    temp_a1 = arg0->unk4;
    arg0->unk4 = (s32) (temp_a1 + 2);
    temp_v1 = arg0->unk0 + temp_a1;
    temp_v0 = func_0005AA5C(arg0->unk34, (temp_v1->unk1 << 8) | temp_v1->unk0);
    if (temp_v0 != NULL) {
        temp_v0->unkB = 9;
        temp_v0->unkC = (u8) arg0->unk18;
        func_00053EBC((s32) arg0, (u8 *)temp_v0 + 0x14);
        temp_a0 = arg0->unk4;
        temp_v0->unk10 = (s32) (arg0->unk0 + temp_a0);
        arg0->unk4 = (s32) (temp_a0 + 2);
        if (!((M2C_FIELD((arg0->unk0 + temp_a0), u8 *, 1) << 8) & 0x100)) {
            arg0->unk70->unkF4 = 1;
        }
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00058A9C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00058C04);

void func_00058DDC(struct Unk_func_00058DDC_0 *arg0) {
    func_00058F44(arg0->unk78);
}

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00058DF8);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00058E88);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00058F44);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00059354);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00059400);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00059558);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_000598FC);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_0005996C);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00059B94);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00059CC0);

INCLUDE_ASM("nonmatchings/mm_flash_04B168", func_00059D2C);
