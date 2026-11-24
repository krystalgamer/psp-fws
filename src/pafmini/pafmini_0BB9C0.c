#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BB9C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BBCAC);

s32 func_000BBD08(s8 *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (*arg0 != 0) {
        do {
            var_a1 += 1;
        } while (*(arg0 + var_a1) != 0);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BBD30);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BBD64);

u8 *func_000BBDD8(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_v1;
    u8 temp_v0;

    var_a1 = arg1;
    var_v1 = arg0;
    do {
        temp_v0 = *var_a1;
        var_a1 += 1;
        *var_v1 = temp_v0;
        var_v1 += 1;
    } while (temp_v0 != 0);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BBDF8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BBE20);

u32 func_000BBE64(void *arg0) {
    u16 temp_a3;
    u16 temp_v1;
    u16 var_t0;
    u32 var_a1;
    u32 var_t1;
    void *var_a0;

    temp_a3 = M2C_FIELD(arg0, u16 *, 0x3C60);
    var_t0 = 0;
    var_a0 = arg0 + 0x3C64;
    var_t1 = 0;
    var_a1 = 0;
    if (temp_a3 != 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, u16 *, 0x82);
            var_a0 += 0x84;
            if (var_t0 < temp_v1) {
                var_t0 = temp_v1;
                var_t1 = var_a1;
            }
            var_a1 = (var_a1 + 1) & 0xFFFF;
        } while (var_a1 < temp_a3);
    }
    return var_t1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BBEB0);

s32 func_000BBEE8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 4) {
        var_v1 = func_000BBF90(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BBF1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BBF90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BBFE4);

s32 func_000BC04C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 == arg3) {
        var_v1 = func_000BBD64(arg0, arg2, arg1) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BC088);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BC19C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BC558);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BC654);

void scePaf_A08B0F31(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_B7E6052B);

void scePaf_F13EBB78(void) {
    scePaf_5FAC9869();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_4E67BB08);

void scePaf_B3D2C3BB(void) {
    scePaf_545FE2DA();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BC7F4);

s32 func_000BC82C(void) {
    void *sp0;
    s32 sp4;
    s32 temp_v0;

    scePafHeaparea_F50AAE41(&sp0, &sp4);
    temp_v0 = scePaf_6D491648(0, sp4, sp0);
    D_000E6038 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_5FAC9869);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_3586BE05);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_8FC65EB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_CE699963);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_545FE2DA);

void scePaf_26DE971C(void) {
    if (D_000E6038 == 0) {
        func_000BC82C();
    }
    func_000BD378(D_000E6038);
}

s32 func_000BCB14(void) {
    return D_000E6038;
}

void func_000BCB20(s32 arg0, s32 arg1) {
    if (D_000E6038 != 0) {

    } else {
        func_000BC82C();
    }
    func_000BD488(D_000E6038, arg0, arg1);
}

s32 scePaf_40C95283(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BCB88);

s32 func_000BCBC0(void) {
    void *sp0;
    s32 sp4;
    s32 temp_v0;

    scePafHeaparea_ACCE25B2(&sp0, &sp4);
    temp_v0 = scePaf_6D491648(0, sp4, sp0);
    D_000E603C = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_FCB4E053);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_2FA0EDDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_29BAA830);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BCDA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_7EC15225);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_613E9AA2);

void func_000BCEB4(s32 arg0, s32 arg1) {
    if (D_000E603C != 0) {

    } else {
        func_000BCBC0();
    }
    func_000BD488(D_000E603C, arg0, arg1);
}

s32 scePaf_B61E88F2(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_6D491648);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_8A861692);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_3E203AEB);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BD0DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_9948CDB3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_CC32A570);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BD378);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_C89D5A3B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BD488);

s32 scePaf_F84A99C8(void) {
    sceKernelResumeDispatchThread(sceKernelSuspendDispatchThread());
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BD54C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BD590);

void func_000BD654(s8 *arg0) {
    *arg0 = 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BD65C);

s32 func_000BD7E4(s32 arg0) {
    s32 temp_v1;

    if (arg0 == 0) {
        return D_000E6048;
    }
    if ((D_000E6044 == 0) || (arg0 != D_000E6044)) {
        return -1;
    }
    temp_v1 = D_000E6048;
    D_000E6044 = 0;
    D_000E6048 = temp_v1 + arg0;
    return temp_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BD82C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BD890);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BDB9C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BE040);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BE184);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BE29C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BE4FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BE738);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BE764);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BE784);

s32 func_000BEA5C(void) {
    func_000BE184(D_000E6040);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BEA80);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF104);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF204);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF294);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF394);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF494);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF508);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF580);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF5AC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF5CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BEACC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BEC90);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_60DECA7E);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_1D5D9A68);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_4B1A374C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_902515FB);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BEE80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BEEE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_FEAFC77A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BEF58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_44AAF96C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BF078);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BF0D0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_9D0192FD);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BF1EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_296897BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_DEDF238F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_44A0BCE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_7BED034E);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF730);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_11EF5210);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_302F609D);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BF6B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BF6FC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_B3D58D25);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BF80C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_F1B52E86);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_71B4AC50);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_3FBD9639);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_F95EA3F1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_6BA9C299);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_6829D7AF);

void scePaf_77EB25F5(s32 arg0, M2C_UNK arg1) {
    scePaf_6BA9C299(arg1, arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_99A5CD38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BFC0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000BFC30);

void func_000BFC78(struct Unk_func_000BFC78_0 *arg0, s32 arg1) {
    if (arg1 < 0x100) {
        arg0->unk4 = (s32) (arg0->unk4 + 1);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_71712601);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_809A4F83);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_71460F7C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_6F092DF6);

void func_000BFDB4(void) {
    scePaf_6829D7AF(&D_000E984C, 0, 0x2020);
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF780);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_ABBBB335);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C001C);

s32 scePaf_9C483594(void) {
    return 0;
}

s32 func_000C002C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_503BA324);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_F1552447);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_83944053);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_2FA84441);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_C9831AFF);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_BFE9E90B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_9870A25B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C038C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_07A5F495);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_84BD418F);

void func_000C043C(struct Unk_func_000C043C_0 *arg0) {
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        arg0->unk8 = 0;
    }
}

s32 scePaf_680513D9(struct Unk_scePaf_680513D9_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        var_v1 = __builtin_allegrex_ext(arg0->unk8, 1, 1);
    }
    return var_v1;
}

s32 scePaf_0B4C0DB6(struct Unk_scePaf_0B4C0DB6_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        var_v1 = arg0->unk8 & 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C04C4);

void scePaf_6C234A6A(s32 arg0) {
    scePaf_FBA47E77(arg0, 0, 0xA);
}

void scePaf_37A98AE9(s32 arg0) {
    scePaf_FBA47E77(arg0, 0, 0xA);
}

s32 scePaf_B4E3A16C(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_4370175A);

void scePaf_A82E3C19(s32 arg0) {
    D_000E1554 = arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C056C);

void scePaf_10B901E7(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((((arg0 == 0) | (arg3 == 0)) != 0) || (((arg1 == 0) | (arg2 == 0)) != 0)) {

    } else {
        func_000C056C(arg0, arg2, arg3, 0, arg1 - 1);
    }
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_3DD2A27B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C08A8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_26168DD3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_993E9FDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_66FE90D7);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_ED2B47FA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_980228BA);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C0BD8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C0C74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_CA79D58B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_626D68A1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_F0B4CAE7);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_DEB2D1C9);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_FF2F98C6);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_1E088F41);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_77D981F5);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C0FDC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_3188E7DB);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_7CD438D9);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_DC38941B);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_FBA47E77);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_2394D451);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C154C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_51AAAAF4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_2FDC80B3);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_FCFAA39F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_45D851D1);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C17BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_FD4C9F47);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C1860);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_54C0DD23);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_CB2198AB);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C1AA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_D121F409);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C1B48);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C1C1C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C1CF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_49A81B18);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C1D84);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_8F12B63A);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C1EE0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", scePaf_9F10613F);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C204C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C2074);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C20F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C2150);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF7D4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF7DC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF9C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF9C4);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF9C8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF9CC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF9D0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DF9F4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C2AFC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C3384);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C33BC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C34F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C3558);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C3580);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C3758);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C3884);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C38B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C38D8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DFBFC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000DFEFC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0270);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0290);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E02B0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E02D0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0314);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuInit);

s32 sceGuTerm(void) {
    sceKernelDeleteEventFlag(D_000FDAEC);
    return 0;
}

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0340);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0380);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0394);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E03EC);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0444);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuStart);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuSetDither);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuFinish);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuFinishId);

void sceGuCallMode(s32 arg0) {
    D_000FDB14 = arg0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C3FD0);

void func_000C409C(void) {
    sceGeContinue();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuCallList);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C41F4);

s32 func_000C429C(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(D_000FDB04, s32 *, 0xC) - (M2C_FIELD(D_000FDB04, s32 *, 4) - M2C_FIELD(D_000FDB04, s32 *, 0));
    }
    return M2C_FIELD(D_000FDB04, s32 *, 4);
}

void func_000C42D0(s32 arg0) {
    M2C_FIELD(D_000FDB04, s32 *, 4) = arg0;
}

s32 func_000C42E0(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_000FDB08 != 0) {

    } else {
        var_v0 = sceGeListUpdateStallAddr(D_000FDAB4, M2C_FIELD(D_000FDB04, void **, 4));
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuSync);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuEnable);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDisable);

s32 func_000C498C(void) {
    return D_000FDB18;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C4998);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuSetMatrix);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDrawArray);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C4EA8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDrawBezier);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C5108);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C5328);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDrawSprite);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuSpriteMode);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuCopyImage);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuClearColor);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuClearStencil);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuClearDepth);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuClear);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDrawBuffer);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDrawBufferList);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDepthBuffer);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDispBuffer);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDisplay);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuSwapBuffers);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuViewport);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDepthRange);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDepthOffset);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuOffset);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuPatchDivide);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6188);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuAmbient);

void sceGuColor(s32 arg0) {
    func_000C6288(7, arg0);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6260);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6288);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6324);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6364);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C63C0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuFrontFace);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuShadeModel);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuLight);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6550);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6578);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C65EC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuLightColor);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6798);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexMode);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexFilter);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexFunc);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexEnvColor);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexWrap);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6954);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexMapMode);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexProjMapMode);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6A80);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexImage);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexScale);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexOffset);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuTexFlush);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6C40);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuClutMode);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuClutLoad);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6D04);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6D74);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuAlphaFunc);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDepthFunc);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDepthMask);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuPixelMask);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuScissor);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6F3C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6F7C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C6FA4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuBlendFunc);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C7038);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C716C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGuDebugPrint);

s32 sceGuSetCallback(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (arg0 != 1) {
        if (arg0 == 4) {
            var_a2 = D_000FDAC0.unk4;
            D_000FDAC0.unk4 = arg1;
        }
    } else {
        var_a2 = D_000FDAC0.unk0;
        D_000FDAC0.unk0 = arg1;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGumSetMatrixStack);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0468);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGumLoadIdentity);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C75A0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C79CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGumPerspective);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C8144);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C84E4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C8B8C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C8F88);

void sceGumUpdateMatrix(void) {
    func_000CAEB8();
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C97DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C985C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000C98DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGumRotateY);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGumRotateZ);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGumTranslate);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGumScale);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CA430);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CA784);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGumMatrixMode);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGumPushMatrix);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceGumPopMatrix);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CAC34);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CAC94);

void sceGumDrawArray(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_000CAEB8();
    sceGuDrawArray(arg0, arg1, arg2, arg3, arg4);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CAD44);

void func_000CADC0(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_000CAEB8();
    sceGuDrawBezier(arg0, arg1, arg2, arg3, arg4);
}

void func_000CAE2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_000CAEB8();
    func_000C5108(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CAEB8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CAF7C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CAFE4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceWaveSetVoice);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceWaveSetVolume);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CB2A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CB3F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CB450);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceWaveGetStat);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CB4F0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceWavePlayEx);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceWaveStop);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CB7E0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CB830);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CB8CC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceWaveSetLoopMode);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceWavePause);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceWaveReplay);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CBA24);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E04C0);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E04DC);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CBA5C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CBB20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CBC38);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CBE20);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CBF58);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CC204);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CC774);

void sceReg_9B25EDF1(void) {
}

void sceReg_92E41280(void) {
}

void sceReg_FA8A5739(void) {
}

void sceReg_DEDA92BF(void) {
}

void sceReg_1D8A762E(void) {
}

void sceReg_0CAE832B(void) {
}

void sceReg_39461B4D(void) {
}

void sceReg_0D69BF40(void) {
}

void sceReg_57641A81(void) {
}

void sceReg_17768E14(void) {
}

void sceReg_D4475AA8(void) {
}

void sceReg_28A8E98A(void) {
}

void sceReg_2C0DB9DD(void) {
}

void sceReg_2D211135(void) {
}

void sceReg_4CA16893(void) {
}

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", sceReg_3615BC87);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CCB10);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CCB88);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CCCF0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CCFB0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD078);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD134);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD17C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD1B0);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD430);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD44C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD4C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD508);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD564);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD568);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD674);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CD770);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CE028);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CE080);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CE3C8);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CE430);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CE4A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CE81C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CE8A4);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CEB0C);

INCLUDE_ASM("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", func_000CEC20);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E04F8);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0500);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0540);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0580);

INCLUDE_RODATA("tmp/asm/282/pafmini/nonmatchings/pafmini_0BB9C0", D_000E0640);
