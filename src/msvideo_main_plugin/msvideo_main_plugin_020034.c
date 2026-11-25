#include "common.h"
#include "msvideo_main_plugin_decls.h"

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020034);

s32 func_000200B0(void) {
    return D_000B6114;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000200BC);

void func_00020150(void) {
    func_000200BC(1, 0xFFFF);
}

void func_00020170(void) {
    func_000200BC(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020190);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020210);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020290);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000202E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020340);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020464);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000205F8);

void func_00020604(struct Unk_func_00020604_0 *arg0, s8 arg1) {
    arg0->unk35A = arg1;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_0002060C);

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B1148);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000AFCF0_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000AFCF0_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000AFCF0_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000AFCF0_v300);
#endif

void func_00020838(struct Unk_func_00020838_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020848);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000208D4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000209F0);

s32 func_00020AD4(struct Unk_func_00020AD4_0 *arg0) {
    return arg0->unk1D4;
}

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B04C8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B04D0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B04E0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B04F8);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020ADC);

s32 func_00020B30(struct Unk_func_00020B30_0 *arg0, s32 arg1) {
    arg0->unk1EC = arg1;
    return 0;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020B3C);
#else
void func_00020B3C(struct Unk_func_00020B3C_0 *arg0) {
    arg0->unk0 = &D_000B04F8;
    sceKernelDeleteSema(arg0->unk360);
    func_00020C14((s32) ((u8 *)arg0 + 0x340));
    func_00020C14((s32) ((u8 *)arg0 + 0x330));
    scePaf_9E0CA28F(arg0);
}
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020B88);
#else
void func_00020B88(struct Unk_func_00020B88_0 *arg0) {
    arg0->unk0 = &D_000B04F8;
    sceKernelDeleteSema(arg0->unk360);
    func_00020C14((s32) ((u8 *)arg0 + 0x340));
    func_00020C14((s32) ((u8 *)arg0 + 0x330));
    scePaf_9E0CA28F(arg0);
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020BDC);

s32 func_00020C08(void) {
    return D_000B5BF4;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020C14);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020C54);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020D58);

void func_00020DE8(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B6140 = 0;
    func_00004374((s32) arg0);
}

void func_00020E14(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B6140 = 0;
    func_00004374((s32) arg0);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020E40);
#else
void func_00020E40(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B6140 = 0;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B05CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00020E80);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00021074);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000212AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000213DC);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_0002148C);
#else
u8 func_0002148C(struct Unk_func_0002148C_0 *arg0) {
    u8 var_v0;
    struct Unk_func_0002148C_temp_v1 *temp_v1;

    temp_v1 = arg0->unk24;
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = temp_v1->unk342;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000214A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00021530);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000215E4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00021664);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_0002174C);
#endif

#if FW_VERSION == 310
void func_0002174C(void) {
    s32 temp_v0;

    if (D_000B6140 != NULL) {
        temp_v0 = D_000B6140->unk20;
        if (temp_v0 == 0) {

        } else {
            func_000214F8(temp_v0);
        }
    }
}
#endif

#if FW_VERSION >= 301 && FW_VERSION < 310
void func_0002174C(void) {
    s32 temp_v0;

    if (D_000B6140 != NULL) {
        temp_v0 = D_000B6140->unk20;
        if (temp_v0 == 0) {

        } else {
            func_0001F840(temp_v0);
        }
    }
}
#endif

#if FW_VERSION == 352
void func_0002174C(void) {
    s32 temp_v0;

    if (D_000B6140 != 0) {
        temp_v0 = D_000B6140->unk20;
        if (temp_v0 == 0) {

        } else {
            func_0001F87C(temp_v0);
        }
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_0002178C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000217C0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B06A4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B06A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B06AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_0002180C);

void func_00021A30(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    func_00004374((s32) arg0);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00021A58);
#else
void func_00021A58(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00021A90);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00021C20);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00021D3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00021E2C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00021F1C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B06C0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0700);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0738);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00022014);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000224AC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000227BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00022878);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B087C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0884);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B088C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0894);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B089C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B08A8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B08B4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B08C0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B08CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B08D8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B08E4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B08EC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B08F4);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B08FC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0904);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B093C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0954);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0968);

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B15AC);
#endif

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0154);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0974);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B09AC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B09CC);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B09E8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0A08);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0A2C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0A48);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0A64);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0A6C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0A80);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0A98);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0A9C);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0AA0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0AA4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000228B8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_0002298C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000229C0);

void func_00022A90(s32 arg0) {
    func_00022FC4();
    func_000237E8(arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00022ABC);

void func_00022D74(struct Unk_func_00022D74_0 *arg0, s32 arg1) {
    if (func_00022DEC() != 0) {
        arg0->unk100 = arg1;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00022DAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00022DEC);

void func_00022FBC(void) {
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00022FC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_0002300C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000233D0);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023798);
#else
void func_00023798(struct Unk_func_00023798_0 *arg0, struct Unk_func_00023798_1 *arg1) {
    if (arg1->unk1C != 2) {

    } else {
        if (arg0->unk1FD != 0) {
            arg0->unk1FE = 0;
            arg0->unk1FD = 0U;
        } else {
            arg0->unk1FD = 1U;
            arg0->unk1FE = 1;
        }
        scePaf_BE0D7212(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000237E8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023844);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000239A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000239F4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023B3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023B8C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023C38);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023C78);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023D24);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023D64);

void func_00023DA4(void) {
    func_00023D64(1, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023DC4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023EB0);

void func_00023F9C(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B61E4 = 0;
    func_00004374((s32) arg0);
}

void func_00023FC8(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B61E4 = 0;
    func_00004374((s32) arg0);
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00023FF4);
#else
void func_00023FF4(M2C_UNK **arg0) {
    *arg0 = &D_000B0700;
    D_000B61E4 = 0;
    func_00004374((s32) arg0);
    scePaf_6261C0A5((s32) arg0);
}
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00024034);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
s32 func_00024034(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_000B61E4;
    if (var_v0 == 0) {
        temp_v0 = scePaf_B7E6052B(0xD0);
        func_00023EB0(temp_v0, arg0, arg1);
        D_000B61E4 = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 352
s32 func_00024034(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = D_000B61E4;
    if (var_v0 == 0) {
        temp_v0 = scePaf_61A8E8EC(0x120);
        func_00023EB0(temp_v0, arg0, arg1);
        D_000B61E4 = temp_v0;
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0AE0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0B18);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000240A8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00024C9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00024E48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000250CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_0002522C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000254CC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025520);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000255DC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025680);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025738);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000257D8);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000258A0);
#endif

#if FW_VERSION >= 301 && FW_VERSION < 352
void func_000258A0(struct Unk_func_000258A0_0 *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    struct Unk_func_000258A0_temp_v0 *temp_v0;

    temp_a0 = arg0->unk20;
    if (temp_a0 != 0) {
        temp_s1 = arg0->unk54;
        if (temp_s1 != 0) {
            if (arg0->unkCC != 1) {
                temp_v0 = arg0->unk48;
                temp_v0->unk1FD = 0;
                temp_v0->unk1FE = 0;
                scePaf_86B41BA3(temp_v0);
            } else {
                scePaf_C2C25056(temp_s1, func_0001EBE0(temp_a0));
            }
        }
        if ((arg0->unk6C != 0) || (arg0->unk70 != 0) || (arg0->unk74 != 0)) {
            func_00025E90(arg0, func_0001EE64(arg0->unk20));
        }
    }
    arg0->unkBE = 1;
}
#endif

#if FW_VERSION == 352
void func_000258A0(struct Unk_func_000258A0_0 *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    struct Unk_func_000258A0_temp_v0 *temp_v0;

    temp_a0 = arg0->unk20;
    if (temp_a0 != 0) {
        temp_s1 = arg0->unk54;
        if (temp_s1 != 0) {
            if (arg0->unkCC != 1) {
                temp_v0 = arg0->unk48;
                temp_v0->unk1FD = 0;
                temp_v0->unk1FE = 0;
                scePaf_BE0D7212(temp_v0);
            } else {
                scePaf_0BF42D26(temp_s1, func_0001EBE0(temp_a0));
            }
        }
        if ((arg0->unk6C != 0) || (arg0->unk70 != 0) || (arg0->unk74 != 0)) {
            func_00025E90(arg0, func_0001EE64(arg0->unk20));
        }
    }
    arg0->unkBE = 1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025960);

void func_00025AEC(struct Unk_func_00025AEC_0 *arg0) {
    arg0->unkBE = 1;
    func_00024E48();
}

void func_00025B10(struct Unk_func_00025B10_0 *arg0) {
    arg0->unkBE = 0;
    func_00004794((s32) arg0, 0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025B30);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025C3C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025CD0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0E38);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0E44);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0618);
#else
INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0E54);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0EC0);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0EC8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_020034", D_000B0ED8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025D34);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025E90);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025EDC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00025FA0);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00026160);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00026414);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000264EC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00026630);

void func_00026754(struct Unk_func_00026754_0 *arg0) {
    if (arg0->unkCC != 1) {
        func_000257D8();
        arg0->unkBC = 0;
        func_000017A4();
    } else {
        func_00026C60();
    }
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000267A0);

void func_0002684C(s32 arg0) {
    func_00024C9C();
    func_00026D48(arg0);
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00026878);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_0002694C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00026AA8);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00026B44);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00026C60);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00026D48);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00026E40);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00026FFC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00027080);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_000270BC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00027118);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_00027238);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_020034", func_0002734C);
