#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F058);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F124);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F1F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F34C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F3C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F404);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F444);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F498);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F560);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F6C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F798);

void func_0008F864(struct Unk_func_0008F864_0 *arg0) {
    arg0->unk7BC = 0;
    arg0->unk7C0 = 0;
    arg0->unk7C4 = 0;
    sceHVNetfront_Module_D611E938((s32) arg0, 0, 0x7C8);
}

void func_0008F890(void) {
}

void func_0008F898(void) {
}

void func_0008F8A0(struct Unk_func_0008F8A0_0 *arg0) {
    arg0->unk7BC = 0;
    arg0->unk7C0 = 0;
    arg0->unk7C4 = 0;
}

void func_0008F8B0(void) {
    func_0008DF24();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F8CC);

void func_0008F940(void) {
}

void func_0008F948(void) {
}

void func_0008F950(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008F958);

void func_0008F9B4(void) {
}

s32 func_0008F9BC(struct Unk_func_0008F9BC_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;
    struct Unk_func_0008F9BC_temp_s0 *temp_s0;
    void *temp_s1;

    temp_s0 = arg0->unk18;
    temp_s1 = &temp_s0->unk20;
    temp_v0 = func_00053D4C(temp_s0->unk1C, temp_s1, 0x200);
    var_v1 = temp_v0;
    if (temp_v0 <= 0) {
        temp_s0->unk20 = -1;
        var_v1 = 2;
        temp_s0->unk21 = -0x27;
    }
    temp_s0->unk0 = temp_s1;
    temp_s0->unk4 = var_v1;
    return 1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008FA24);

void func_0008FAA4(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008FAAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008FB5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008FD94);

void func_0008FDB4(s32 arg0) {
    sceHVNetfront_Module_09FA691C(arg0);
    sceHVNetfront_Module_D611E938(arg0, 0, 0x474);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008FDE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008FE1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008FE3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008FE5C);

s32 func_0008FE8C(struct Unk_func_0008FE8C_0 *arg0) {
    return arg0->unk1C;
}

s32 func_0008FE94(struct Unk_func_0008FE94_0 *arg0) {
    return arg0->unk20;
}

void func_0008FE9C(struct Unk_func_0008FE9C_0 *arg0, s32 arg1) {
    arg0->unk26C = arg1;
}

s32 func_0008FEA4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008FEAC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0008FEDC);

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

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C2F40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C2F58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C2F98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C2FB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C2FD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C2FDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C2FE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C2FF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3008);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3020);

void *func_0008FFA4(struct Unk_func_0008FFA4_0 *arg0, s32 arg1) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    func_00046628((s32) arg0);
    func_0004640C((s32) arg0, (s32) "www.macromedia.com/bin");
    func_0004640C((s32) arg0, arg1);
    func_0004640C((s32) arg0, arg1);
    func_0004649C((s32) arg0);
    return arg0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3044);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090014);

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

void *func_000900C8(struct Unk_func_0008FFA4_0 *arg0, struct Unk_func_000900C8_1 *arg1) {
    func_0008FFA4(arg0, arg1->unkC);
    return arg0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000900F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0009011C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090164);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000901AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000901EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0009022C);

void func_00090284(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0009028C);

s32 func_000902F0(struct Unk_func_000902F0_0 *arg0) {
    s32 temp_v1;
    s32 var_a1;

    var_a1 = arg0->unk1C;
    temp_v1 = var_a1 - 1;
    if (var_a1 >= 2) {
        var_a1 = temp_v1;
        arg0->unk1C = temp_v1;
    } else if (arg0->unk20 != -1) {
        arg0->unk1C = 0;
        var_a1 = 0;
    }
    return var_a1;
}

s32 func_0009032C(struct Unk_func_0009032C_0 *arg0) {
    return arg0->unk18;
}

s32 func_00090334(struct Unk_func_00090334_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
    arg0->unk0 = 0;
    return 1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090344);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000903C8);

void func_0009041C(void ***arg0, void *arg1) {
    void **temp_v1;
    struct Unk_func_0009041C_temp_a2 *temp_a2;
    struct Unk_func_0009041C_temp_v0 *temp_v0;

    temp_a2 = arg1 - 8;
    temp_v1 = temp_a2->unk4;
    temp_v0 = M2C_FIELD(arg1, void **, -8);
    if (temp_v1 != NULL) {
        *temp_v1 = temp_v0;
    }
    if (temp_v0 == NULL) {
        *arg0 = temp_v1;
    } else {
        temp_v0->unk4 = temp_v1;
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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000904A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000905C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090648);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090730);

void func_000907D8(struct Unk_func_000907D8_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk100;
    arg0->unk104 = 1;
    if (temp_v1 != 0) {
        sceHVWWW_Library_2E58A543(temp_v1);
        arg0->unk100 = 0;
    }
}

void func_0009081C(struct Unk_func_0009081C_0 *arg0) {
    arg0->unk104 = 0;
    arg0->unk100 = sceHVWWW_Library_27C4AC1F(0x4000);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0009084C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000908A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000908F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000909C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090A30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090AD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090B4C);

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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090CB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090CF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090D34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090D68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C305C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3090);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3094);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C30CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C30D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C30F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C30FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3120);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3138);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3144);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090D9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090DE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090E88);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090F90);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090FA0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00090FB0);

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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091050);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000910D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091160);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000911D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091248);

void func_000912D4(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000912DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000912FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091328);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000913E0);

void func_0009162C(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091634);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091668);

void func_0009168C(void) {
    func_0008C7E8();
}

void func_000916A8(void) {
    func_0008C7F8();
}

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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000916EC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0009174C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000917AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091B44);

s32 func_00091CC8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091CD0);

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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091E08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091E28);

void func_00091E48(void) {
    func_00091F48();
}

void func_00091E64(void) {
    func_00091F48();
}

void func_00091E80(void) {
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3468);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C34E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C34F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091E88);

s32 func_00091ED4(void) {
    return 0;
}

s32 func_00091EDC(void) {
    return 0;
}

s32 func_00091EE4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091EEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091F48);

s32 func_00091F50(void) {
    return 0;
}

s32 func_00091F58(void) {
    return 0;
}

s32 func_00091F60(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091F68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091F70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091F78);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091FB4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00091FF0);

void func_00092098(s32 arg0) {
    func_00091F48(arg0 + 0x28);
}

void func_000920B4(s32 arg0) {
    func_00091F70(arg0 + 0x28);
}

void func_000920D0(struct Unk_func_000920D0_0 *arg0) {
    s32 temp_v0;
    struct Unk_func_000920D0_var_s0 *var_s0;

    var_s0 = *arg0->unkFFC->unk4;
    if (var_s0 != NULL) {
        do {
            temp_v0 = var_s0->unk0->unkC(var_s0);
            if (temp_v0 == 0) {
                var_s0 = var_s0->unkC;
            } else {
                func_00092134(temp_v0);
                var_s0 = var_s0->unkC;
            }
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092134);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092254);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000922A4);

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

void func_00092394(struct Unk_func_00092394_0 *arg0) {
    arg0->unk0 = &D_000C3600;
    arg0->unk4 = 0;
}

void func_000923A8(struct Unk_func_000923A8_0 *arg0) {
    arg0->unk0 = &D_000C3600;
    arg0->unk4 = 0;
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

u8 func_0009241C(struct Unk_func_0009241C_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092424);

void func_00092484(struct Unk_func_00092484_0 *arg0) {
    arg0->unk0 = &D_000C3640;
    arg0->unk104 = 0;
    arg0->unk108 = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0009249C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000924FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3538);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3568);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3574);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092518);

void func_0009265C(void) {
    func_00092968();
}

s32 func_00092678(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092680);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000926F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092968);

void func_00092A7C(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092A84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092B1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092B28);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092BC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092C68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092D6C);

s32 func_00092E98(struct Unk_func_00092E98_0 *arg0) {
    return arg0->unk110;
}

s32 func_00092EA0(s32 arg0) {
    return arg0;
}

void func_00092EA8(void) {
}

void func_00092EB0(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092EB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092EEC);

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

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C35E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C35EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C35F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C35F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3600);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3628);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3640);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3650);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C365C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3668);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3674);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3688);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3698);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C36A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C36B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00092FB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000933A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000933BC);

M2C_UNK *func_0009352C(void) {
    return &D_000C37A4;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3768);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3780);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C378C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C37A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C37A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093538);

s32 func_00093708(void) {
    return 0;
}

s32 func_00093710(void) {
    return 0;
}

s32 func_00093718(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093720);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000937F8);

void func_00093918(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093920);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0009396C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093974);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000939F0);

s32 func_00093A2C(struct Unk_func_00093A2C_0 *arg0) {
    return arg0->unk4->unk8;
}

s32 func_00093A38(struct Unk_func_00093A38_0 *arg0) {
    return arg0->unk4->unk28;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093A44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093A98);

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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093B70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093BC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093C60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093CA4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093D24);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00093FD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C37FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C387C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3880);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3884);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C388C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3890);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3898);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C389C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C38F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3904);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3908);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3910);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3914);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C391C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C39D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C39D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C39DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000940BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000941FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000943FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00094600);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00094658);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000947A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000948FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00094A44);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00094AF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00094C94);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00094E2C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00094FB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00095040);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000951CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00095238);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000953B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00095494);

void func_000956AC(void) {
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000956B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00095804);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00095B7C);

s32 func_00095DD4(void) {
    return sceHVWWW_Library_0DBCA9CE() + 0xE2EC;
}

s32 func_00095DF8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00095E00);

s32 func_00095E34(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00095E3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00095EA0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096004);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096168);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000961B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0009632C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096364);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000963B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096510);

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

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096680);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096748);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000967AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096868);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000968A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096934);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096A60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096C1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096DD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00096F60);

s32 func_00097100(void) {
    func_00093FD8();
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00097120);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000972A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00097420);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000975AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_0009772C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000978AC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00097A34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00097BBC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00097CD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00097E14);

s32 func_00097EBC(void) {
    func_00093FD8();
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00097EDC);

void func_00097FA0(void) {
    func_0009F020();
}

void func_00097FBC(void) {
    func_0009F054();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00097FD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000980F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A2C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A4C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A8C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3A90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3AA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3AAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3ABC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3AC4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3AD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3ADC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3AE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3AF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B28);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B34);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B78);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3B9C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3BA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3D18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3D1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", D_000C3D24);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", sceHVFlash_Module_C6A63B83);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_000983C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00098410);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_08F058", func_00098480);

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

