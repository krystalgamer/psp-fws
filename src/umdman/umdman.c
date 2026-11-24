/* cflags: -O2 -frename-registers */
#include "common.h"
#include "umdman_decls.h"

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_D27D050E);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000002E4);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000109C4);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000109D0);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000109E0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000003B8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_CC80CFC6);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_8CFED611);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_CAD31025);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_F6BE91FC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_47E2B6D8);

void func_00000968(s32 arg0, s32 arg1) {
    func_00007A30(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_B2368381);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_E779ECEF);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_8634FFC7);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_CEA5C857);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_39704B6E);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_84410A8E);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_63ACFD28);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", module_start);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000016C8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00001834);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_FCFEF5FE);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00001B8C);

void func_00001C40(s32 arg0) {
    D_00012BDC = arg0;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00001C4C);

s32 func_00001D7C(void) {
    return D_00011B40;
}

s32 sceUmdMan_driver_2C756C37(void) {
    return D_00011B48;
}

void func_00001D94(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if ((u32) (arg0 + 0x7FDEEF60) < 2U) {
        D_00011B48 = 0x80210003;
    } else {
        D_00011B48 = arg0;
    }
    sceKernelCpuResumeIntr(temp_a0);
}

s32 func_00001DF4(void) {
    return D_00011B44;
}

void func_00001E00(s32 arg0) {
    if (arg0 < 0) {
        D_00011B44 = 0;
    }
    D_00011B44 = arg0;
}

s32 func_00001E18(void) {
    return D_00012BE0;
}

void func_00001E24(s32 arg0) {
    D_00012BE0 = arg0;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_0D3EA203);

s32 func_00001E94(void) {
    s32 temp_s0;

    temp_s0 = func_00007B48();
    return func_00007B34() - temp_s0;
}

void func_00001EC0(void) {
    func_00007C78();
}

s32 sceUmdMan_driver_0D14D540(void) {
    return D_00012BDC;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00001EE8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00001FD0);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00010C90);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00010D68);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00010E10);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00010E28);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00002050);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00002100);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00002178);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00002358);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000242C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000024E4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000025A0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00002654);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00002724);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00002800);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000028D8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000029AC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00002A84);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00002D00);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00002D54);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_2CBE959B);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_E3F448E0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_1B19A313);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_1B1BF9FD);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_F819E17C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_14D3381C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_68577709);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_5AA96415);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_2A39569B);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_CEE55E3E);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_65E1B97E);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_E5B7EDC5);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_2A08FE9A);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_18DE1880);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_3D44BABF);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_98345381);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_108B2322);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_D31DAD7E);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_7094E3A7);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_61C32A52);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_73E49F8F);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_250E6975);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_61EB07A5);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00004CEC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_485D4925);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_92F1CC33);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005024);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005050);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000510C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005358);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000053F0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000055F4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000057C0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005828);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000058D8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000590C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000599C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005AC0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005B6C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005BD0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005BE8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005CBC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005DCC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005F0C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00005F2C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000606C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000617C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00006250);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000062B0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00006384);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000643C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000065E8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00006874);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000068F8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000069A8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00006A68);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00006C50);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00006CE0);

M2C_UNK *func_00006D30(void) {
    return &D_00011A80;
}

M2C_UNK *func_00006D3C(void) {
    return &D_00012C40;
}

s32 func_00006D48(void) {
    return 0;
}

s32 func_00006D50(void) {
    return 0;
}

s32 func_00006D58(void) {
    return 0;
}

M2C_UNK *func_00006D60(void) {
    return &D_00012C80;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00006D6C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00006D78);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007148);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007184);

s32 func_000072E0(void) {
    s32 var_v0;

    sceKernelDisableSubIntr(6, 1);
    sceKernelDisableSubIntr(6, 2);
    sceKernelDisableSubIntr(6, 3);
    sceKernelDisableSubIntr(6, 4);
    sceKernelDisableSubIntr(6, 5);
    sceKernelDisableSubIntr(6, 6);
    sceKernelDisableSubIntr(6, 7);
    var_v0 = sceKernelReleaseSubIntrHandler(6, 1);
    if (var_v0 >= 0) {
        var_v0 = sceKernelReleaseSubIntrHandler(6, 2);
        if (var_v0 >= 0) {
            var_v0 = sceKernelReleaseSubIntrHandler(6, 3);
            if (var_v0 >= 0) {
                var_v0 = sceKernelReleaseSubIntrHandler(6, 4);
                if (var_v0 >= 0) {
                    var_v0 = sceKernelReleaseSubIntrHandler(6, 5);
                    if (var_v0 >= 0) {
                        var_v0 = sceKernelReleaseSubIntrHandler(6, 6);
                        if (var_v0 >= 0) {
                            var_v0 = __builtin_allegrex_min(sceKernelReleaseSubIntrHandler(6, 7), 0);
                        }
                    }
                }
            }
        }
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000073D4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000745C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007480);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000074F4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_552F671A);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000076B4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000076C0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000076D4);

s32 func_000079A4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_7C3D307C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000079B8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000079C4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000079E0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007A0C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007A1C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007A30);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007A58);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007AF0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007B10);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007B34);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007B48);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007B5C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007B94);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007BC8);

void func_00007C08(s32 arg0, s32 arg1) {
    func_00007F24(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007C24);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007C30);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007C3C);

void func_00007C5C(void) {
    func_00006D6C();
}

s32 func_00007C78(void) {
    return D_00012CD0;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007C84);

void func_00007CA8(void) {
    sceKernelWaitSema(D_00012C10, 1, NULL);
}

void func_00007CD0(void) {
    sceKernelSignalSema(D_00012C10, 1);
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007CF4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007DC0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007E38);

s32 sceUmdMan_driver_405B48A5(void) {
    s32 cmp_tmp = func_000076B4() > 0x10001;
    return cmp_tmp == 0;
}

s32 sceUmdMan_driver_65D0DEC6(void) {
    return D_00012CD4 + 0xFFFD0000;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_2E49311E);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007EDC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007F24);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00007FC8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000081EC);

s32 func_00008274(s32 arg0) {
    return (arg0 != 0) ? 0 : 0x80010016;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00008284);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000082AC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000082D4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000082FC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00008324);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000834C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00008374);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00008410);

s32 func_000084A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 >= 0) {
        return 0;
    }
    return (arg2 | arg3) == arg0;
}

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00010F9C);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00010FB4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000084C0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000085D8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000086D0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000879C);

s32 func_0000888C(struct Unk_func_0000888C_0 *arg0, u8 *arg1) {
    s32 var_a4;
    s8 *temp_v1;
    struct Unk_func_0000888C_temp_v0 *temp_v0;

    var_a4 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk18;
        if (temp_v0 != NULL) {
            temp_v1 = temp_v0->unkC;
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xC;
                var_a4 = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 1) = (u8) *arg1;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 2) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 3) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 4) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 5) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a4;
}

s32 func_00008958(struct Unk_func_00008958_0 *arg0, struct Unk_func_00008958_1 *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    struct Unk_func_00008958_temp_v0 *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk18;
        if (temp_v0 != NULL) {
            temp_v1 = temp_v0->unkC;
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xD;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 1) = (u8) arg1->unk6;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 2) = (s8) ((u16) arg1->unk0 >> 8);
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 3) = (u8) arg1->unk0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 4) = (s8) ((u16) arg1->unk2 >> 8);
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 5) = (u8) arg1->unk2;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00008A3C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00008B28);

s32 func_00008CA0(struct Unk_func_00008CA0_0 *arg0, struct Unk_func_00008CA0_1 *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    struct Unk_func_00008CA0_temp_v0 *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk18;
        if (temp_v0 != NULL) {
            temp_v1 = temp_v0->unkC;
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -0xF;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 1) = (u8) arg1->unk4;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 2) = (u8) arg1->unk5;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 3) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 4) = (s8) ((u16) arg1->unk0 >> 8);
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 5) = (u8) arg1->unk0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 6) = (s8) ((u16) arg1->unk2 >> 8);
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 7) = (u8) arg1->unk2;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 8) = (u8) arg1->unk6;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}

s32 func_00008D8C(struct Unk_func_00008D8C_0 *arg0, struct Unk_func_00008D8C_1 *arg1) {
    s32 var_a3;
    s8 *temp_v1;
    struct Unk_func_00008D8C_temp_v0 *temp_v0;

    var_a3 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk18;
        if (temp_v0 != NULL) {
            temp_v1 = temp_v0->unkC;
            if (((temp_v1 == NULL) | (arg1 == NULL)) == 0) {
                *temp_v1 = -7;
                var_a3 = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 1) = (u8) arg1->unk0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 2) = (s8) ((u16) arg1->unk2 >> 8);
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), u8 *, 3) = (u8) arg1->unk2;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 4) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 5) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 6) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 7) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 8) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 9) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xA) = 0;
                M2C_FIELD(M2C_FIELD(arg0->unk18, void **, 0xC), s8 *, 0xB) = 0;
            }
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_B511F821);

s32 func_00008EC4(void) {
    return (sceGpio_driver_4250D44A() >> 0x18) & 1;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_736AE133);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00008F50);

M2C_UNK *func_00008FE8(void) {
    return &D_0001BD00;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00008FF4);

M2C_UNK *func_000090AC(void) {
    return &D_0001BD38;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_000090B8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_4581E306);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_CA68F200);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00009814);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00009A68);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_F4AFF62D);

void func_00009F10(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BE38 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 sceUmdMan_driver_7F482409(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;

    sceSyscon_driver_8CBC7987(2, 1);
    sceClockgen_driver_DBE5F283();
    sceKernelDelayThread(0x2710U);
    sceSyscon_driver_8A4519F5(0);
    sceKernelDelayThread(0x2710U);
    temp_v0 = sceSyscon_driver_8A4519F5(1);
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        sceKernelDelayThread(0x2710U);
        temp_v0_2 = sceClockgen_driver_7FF82F6F();
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            sceKernelDelayThread(0x2710U);
            temp_v0_3 = sceSyscon_driver_8CBC7987(2, 0);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                sceUmdMan_driver_552F671A(0xB0);
            }
        }
    }
    return var_s0;
}

s32 func_00009FE8(void) {
    return D_0001BE38;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_00009FF4);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011054);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011060);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000A09C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000A190);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000110B4);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000110C0);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000110D4);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011104);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_0001112C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000A1D8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000A28C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000A358);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000A420);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011254);

s32 func_0000A654(void) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_v0 = sceKernelEnableSubIntr(4, 0x1A);
    if (temp_v0 < 0) {
        KDebugForKernel_84F370BC(&D_00011254, &D_000110B4, "_sceUmdManEnableUMDDetectIntr", temp_v0);
    }
    sceKernelCpuResumeIntr(temp_s1);
    return temp_v0;
}

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000112A0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000A6CC);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000112EC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000A744);

s32 func_0000A7EC(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x1A, 2);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011330);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000A834);

s32 func_0000A8DC(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x18, 2);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_0000A924(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x19, 0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

s32 func_0000A96C(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_317D9D2C(0x19, 2);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_BF8AED79);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_4217E7F5);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000AB38);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000AB68);

void func_0000AC20(s32 arg0) {
    D_0001BE90 = arg0;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000AC2C);

void sceUmdMan_driver_4FB913A3(void) {
    sceAta_driver_1C29566B();
}

void func_0000AD5C(void) {
    sceAta_driver_7F551D66();
}

void func_0000AD78(void) {
    sceAta_driver_68DEA2FF();
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000AD94);

void sceUmdMan_driver_B0A6DC55(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BE6C = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelCancelAlarm(arg0);
}

void func_0000AEA4(s32 arg0) {
    D_0001BE68 = 0;
    sceKernelCancelAlarm(arg0);
}

void sceUmdMan_driver_7DF2A18D(u32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BE6C = 0;
    sceKernelCpuResumeIntr(temp_a0);
    sceKernelSetAlarm(arg0, (s32) &func_0000B2FC, NULL);
}

void func_0000AF0C(u32 arg0) {
    D_0001BE68 = 0;
    sceKernelSetAlarm(arg0, (s32) &func_0000B330, NULL);
}

s32 func_0000AF38(void) {
    return D_0001BE68;
}

s32 sceUmdMan_driver_D1D4F296(void) {
    return D_0001BE6C;
}

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_0001140C);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_0001142C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000AF50);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000B0E0);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011478);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011490);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000B1B0);

s32 func_0000B2A0(void) {
    return D_0001BE90;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000B2AC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000B2FC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000B330);

s32 func_0000B344(void) {
    s32 temp_s0;

    temp_s0 = sceKernelCpuSuspendIntr();
    sceGpio_driver_4250D44A();
    sceKernelCpuResumeIntr(temp_s0);
    return 0;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000B378);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", module_reboot_before);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000B924);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000BAA8);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_1F9AFFF4);

void func_0000BBC8(void) {
    if (sceAta_driver_6FC42083() != 0) {
        func_0000CD24();
    } else {
        func_0000E0C4();
    }
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_8609D1E4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_AAA4ED91);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000BCBC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000BECC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000BF1C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000BF6C);

void func_0000BFD0(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BF14 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 func_0000C004(void) {
    return D_0001BF14;
}

void func_0000C010(s32 arg0) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BF18 = arg0;
    sceKernelCpuResumeIntr(temp_a0);
}

s32 sceUmdMan_driver_42D28DD1(void) {
    return D_0001BF18;
}

M2C_UNK *sceUmdMan_driver_E192C10A(void) {
    return &D_0001BE94;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000C05C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000C124);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000C1D8);

void func_0000C2BC(s32 arg0) {
    D_0001BF1C = arg0;
}

s32 func_0000C2C8(void) {
    return D_0001BF1C;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000C2D4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000C450);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_77E6C03A);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000C5F0);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000115D8);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000115E4);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011618);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000C6E4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000C7E0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000C874);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000C934);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000CCBC);

s32 func_0000CD24(void) {
    return D_00011B0C;
}

void sceUmdMan_driver_A869CAB3(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_0001BF3C = 0;
    D_0001BF40 = 0;
    D_0001BF24 = 0;
    sceKernelCpuResumeIntr(temp_a0);
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_F65D819F);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_2787078E);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000CE20);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000D028);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000D094);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000D104);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000D4E4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000D7EC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000DA78);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000DE54);

s32 func_0000E0AC(void) {
    return D_0001BF48;
}

void func_0000E0B8(s32 arg0) {
    D_0001BF48 = arg0;
}

s32 func_0000E0C4(void) {
    s32 temp_s1;
    u32 temp_s0;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = sceGpio_driver_4250D44A();
    sceKernelCpuResumeIntr(temp_s1);
    return (temp_s0 >> 0x1A) & 1;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000E10C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000E66C);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011704);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_0001170C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000E754);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011774);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011780);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011794);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000117C0);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000117F0);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_00011820);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000E9D0);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000EDD4);

void sceUmdMan_driver_0DC8D26D(void) {
    sceKernelWaitSema(D_0001C048, 1, NULL);
}

void sceUmdMan_driver_9F106F73(void) {
    sceKernelPollSema(D_0001C048, 1);
}

void sceUmdMan_driver_B0A43DA7(void) {
    sceKernelSignalSema(D_0001C048, 1);
}

s32 sceUmdMan_driver_BD13A488(void) {
    s32 var_v0;

    var_v0 = -1;
    if (D_0001BF54 != NULL) {
        var_v0 = *D_0001BF54;
    }
    return var_v0;
}

s32 sceUmdMan_driver_3DCFAA71(s32 arg0) {
    return (D_0001C034 & arg0) != 0;
}

s32 sceUmdMan_driver_9814DCF3(void) {
    return D_0001C034;
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000F49C);

void func_0000F4F8(void) {
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000F500);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_0001190C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000F534);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000F60C);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000F700);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000F818);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000F854);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000119C0);

INCLUDE_RODATA("tmp/asm/201/umdman/nonmatchings/umdman", D_000119CC);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000F964);

void func_0000FB08(void) {
    sceKernelTerminateDeleteThread(D_0001C050);
    sceKernelDeleteEventFlag(D_0001C058);
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000FB38);

void func_0000FB64(void) {
    sceKernelTerminateThread(D_0001C050);
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000FB88);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000FBE4);

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", sceUmdMan_driver_EFD566A8);

s32 func_0000FD1C(void) {
    sceUmd_4832ABF3(func_0000FD4C);
    LoadExecForKernel_11412288(func_0000FBE4);
    return 0;
}

void func_0000FD4C(s32 arg0) {
    if (arg0 != 2) {
        func_0000FD80();
    } else {
        func_0000FBE4();
    }
}

INCLUDE_ASM("tmp/asm/201/umdman/nonmatchings/umdman", func_0000FD80);
