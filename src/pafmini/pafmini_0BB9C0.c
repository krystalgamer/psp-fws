#include "common.h"
#include "pafmini_decls.h"

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BB9C0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BBCAC);

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

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BBD30);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BBD64);

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

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BBDF8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BBE20);

u32 func_000BBE64(struct Unk_func_000BBE64_0 *arg0) {
    u16 temp_a3;
    u16 temp_v1;
    u16 var_t0;
    u32 var_a1;
    u32 var_t1;
    void *var_a0;

    temp_a3 = arg0->unk3C60;
    var_t0 = 0;
    var_a0 = (u8 *)arg0 + 0x3C64;
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

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BBEB0);

s32 func_000BBEE8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 4) {
        var_v1 = func_000BBF90(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BBF1C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BBF90);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BBFE4);

s32 func_000BC04C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 == arg3) {
        var_v1 = func_000BBD64(arg0, arg2, arg1) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BC088);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BC19C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BC558);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BC654);
#endif

void scePaf_A08B0F31(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_B7E6052B);

void scePaf_F13EBB78(void) {
    scePaf_5FAC9869();
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_4E67BB08);

void scePaf_B3D2C3BB(void) {
    scePaf_545FE2DA();
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BC7F4);

s32 func_000BC82C(void) {
    void *sp0;
    s32 sp4;
    s32 temp_v0;

    scePafHeaparea_F50AAE41(&sp0, &sp4);
    temp_v0 = scePaf_6D491648(0, sp4, sp0);
    D_000E6038 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_5FAC9869);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_3586BE05);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000ECEB0);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_8FC65EB0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_CE699963);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_545FE2DA);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_26DE971C);
#else
void scePaf_26DE971C(void) {
    if (D_000E6038 == 0) {
        func_000BC82C();
    }
    func_000BD378(D_000E6038);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000D9E88(void) {
    return D_000E6038;
}

void func_000D9E94(s32 arg0, s32 arg1) {
    if (D_000E6038 != 0) {

    } else {
        func_000BC82C();
    }
    func_000BD488(D_000E6038, arg0, arg1);
}
#endif

#if FW_VERSION == 282
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
#endif

s32 scePaf_40C95283(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BCB88);

s32 func_000BCBC0(void) {
    void *sp0;
    s32 sp4;
    s32 temp_v0;

    scePafHeaparea_ACCE25B2(&sp0, &sp4);
    temp_v0 = scePaf_6D491648(0, sp4, sp0);
    D_000E603C = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_FCB4E053);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_2FA0EDDC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000DA118);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_29BAA830);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BCDA4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_7EC15225);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_613E9AA2);

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000DA228(s32 arg0, s32 arg1) {
    if (D_000E603C != 0) {

    } else {
        func_000BCBC0();
    }
    func_000BD488(D_000E603C, arg0, arg1);
}
#endif

#if FW_VERSION == 282
void func_000BCEB4(s32 arg0, s32 arg1) {
    if (D_000E603C != 0) {

    } else {
        func_000BCBC0();
    }
    func_000BD488(D_000E603C, arg0, arg1);
}
#endif

s32 scePaf_B61E88F2(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_6D491648);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_8A861692);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_3E203AEB);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BD0DC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_9948CDB3);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000ED7AC);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_CC32A570);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BD378);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000ED940);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_C89D5A3B);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BD488);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_F84A99C8);
#else
s32 scePaf_F84A99C8(void) {
    sceKernelResumeDispatchThread(sceKernelSuspendDispatchThread());
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BD54C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BD590);

void func_000BD654(s8 *arg0) {
    *arg0 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BD65C);

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

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BD82C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BD890);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BDB9C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BE040);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BE184);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000EE838);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BE29C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BE4FC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BE738);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BE764);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BE784);

s32 func_000BEA5C(void) {
    func_000BE184(D_000E6040);
    return 0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000EF044);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BEA80);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF104);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000F9AFC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF204);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF294);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF394);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF494);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF508);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010C6B4);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010C6C0);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF580);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF5AC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000EF08C);
#else
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF5CC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BEACC);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BEC90);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_60DECA7E);

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_1D5D9A68);
#else
s8 scePaf_1D5D9A68(s8 arg0) {
    s8 var_v0;

    var_v0 = arg0;
    if (scePaf_902515FB((s32) arg0) & 2) {
        var_v0 = arg0 - 0x20;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_4B1A374C);
#else
s8 scePaf_4B1A374C(s8 arg0) {
    s8 var_v0;

    var_v0 = arg0;
    if (scePaf_902515FB((s32) arg0) & 1) {
        var_v0 = arg0 + 0x20;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_902515FB);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000EF43C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
M2C_UNK *func_000EF43C(void) {
    return &D_0010F091;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BEE80);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BEEE0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_FEAFC77A);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BEF58);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_44AAF96C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BF078);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BF0D0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_9D0192FD);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BF1EC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_296897BC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_DEDF238F);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_44A0BCE4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_7BED034E);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF730);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_11EF5210);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000EFAF4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000EFB84);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_302F609D);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BF6B0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BF6FC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_B3D58D25);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BF80C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_F1B52E86);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000FA114);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000F8354);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000FA0D4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000EFE8C);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_71B4AC50);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_3FBD9639);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_F95EA3F1);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_6BA9C299);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_6829D7AF);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F006C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000F006C(s32 arg0, s32 arg1) {
    scePaf_6BA9C299(arg1, arg0);
}
#endif

#if FW_VERSION == 282
void scePaf_77EB25F5(s32 arg0, M2C_UNK arg1) {
    scePaf_6BA9C299(arg1, arg0);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_99A5CD38);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BFC0C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000BFC30);

#if FW_VERSION == 282
void func_000BFC78(struct Unk_func_000BFC78_0 *arg0, s32 arg1) {
    if (arg1 < 0x100) {
        arg0->unk4 = (s32) (arg0->unk4 + 1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_71712601);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_809A4F83);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_71460F7C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F01EC);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_6F092DF6);
#endif

void func_000BFDB4(void) {
    scePaf_6829D7AF(&D_000E984C, 0, 0x2020);
}

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF780);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_ABBBB335);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C001C);

#if FW_VERSION == 282
s32 scePaf_9C483594(void) {
    return 0;
}

s32 func_000C002C(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_503BA324);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_F1552447);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_83944053);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_2FA84441);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_C9831AFF);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_BFE9E90B);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_9870A25B);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C038C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_07A5F495);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_84BD418F);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000DBA10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F093C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000F093C(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        var_v1 = ((u32) M2C_FIELD(arg0, u32 *, 8) >> 1) & 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F0970);
#endif

#if FW_VERSION == 282
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
#endif

#if FW_VERSION >= 150
s32 scePaf_0B4C0DB6(struct Unk_scePaf_0B4C0DB6_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        var_v1 = arg0->unk8 & 1;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C04C4);

void scePaf_6C234A6A(s32 arg0) {
    scePaf_FBA47E77(arg0, 0, 0xA);
}

void scePaf_37A98AE9(s32 arg0) {
    scePaf_FBA47E77(arg0, 0, 0xA);
}

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000DBB04);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F0A08);
#endif

#if FW_VERSION == 282
s32 scePaf_B4E3A16C(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_4370175A);

void scePaf_A82E3C19(s32 arg0) {
    D_000E1554 = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C056C);

void scePaf_10B901E7(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((((arg0 == 0) | (arg3 == 0)) != 0) || (((arg1 == 0) | (arg2 == 0)) != 0)) {

    } else {
        func_000C056C(arg0, arg2, arg3, 0, arg1 - 1);
    }
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_3DD2A27B);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C08A8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_26168DD3);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_993E9FDC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_66FE90D7);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_ED2B47FA);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_980228BA);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C0BD8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C0C74);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_CA79D58B);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_626D68A1);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_F0B4CAE7);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_DEB2D1C9);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_FF2F98C6);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F1388);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_1E088F41);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_77D981F5);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C0FDC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_3188E7DB);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F14F8);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_7CD438D9);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_DC38941B);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_FBA47E77);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F17AC);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_2394D451);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C154C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_51AAAAF4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_2FDC80B3);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_FCFAA39F);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_45D851D1);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C17BC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_FD4C9F47);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C1860);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_54C0DD23);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_CB2198AB);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C1AA8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F1E98);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_D121F409);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C1B48);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C1C1C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C1CF0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_49A81B18);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C1D84);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_8F12B63A);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C1EE0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", scePaf_9F10613F);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C204C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C2074);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C20F0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C2150);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF7D4);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000FA170);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000F83B0);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000FA130);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010C960);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF7DC);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF9C0);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF9C4);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF9C8);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF9CC);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF9D0);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DF9F4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C2AFC);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010CD84);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C3384);

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F36F8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C33BC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C34F0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F38C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000F38C4(u32 *arg0) {
    *arg0 = sceIoOpen(&D_0010CD84, 3, 0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F38FC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000F38FC(s32 *arg0) {
    sceIoClose(*arg0);
    *arg0 = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3928);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000F3928(s32 *arg0) {
    sceIoClose(*arg0);
    *arg0 = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3954);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F39EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3A68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000F3A68(void) {
    func_000F39EC(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3A88);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000F3A88(void) {
    func_000F39EC(0, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3AA8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3B24);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3B54);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3B84);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3BD8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3BF8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C3558);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C3580);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C3758);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E0CA8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E0CD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3F84);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F3FA0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C3884);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C38B0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C38D8);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DFBFC);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000DFEFC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000FABD0);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000FABF0);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000FAC10);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010D400);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010D420);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010D440);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0270);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0290);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E02B0);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E02D0);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0314);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F4068);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F4130);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000F4130(void) {
    sceKernelDeleteEventFlag(D_00118DD4);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuInit);

s32 sceGuTerm(void) {
    sceKernelDeleteEventFlag(D_000FDAEC);
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0340);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010D510);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000FACF4);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000FAD4C);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000FADA4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010D524);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010D57C);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010D5D4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F415C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E100C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F4428);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E1410);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F42DC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F4428);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F45E0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0380);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0394);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E03EC);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0444);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuStart);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuSetDither);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuFinish);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuFinishId);

void sceGuCallMode(s32 arg0) {
    D_000FDB14 = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C3FD0);
#endif

void func_000C409C(void) {
    sceGeContinue();
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E14F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F4698);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F47AC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F48A4);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuCallList);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C41F4);

s32 func_000C429C(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_000FDB04->unkC - (D_000FDB04->unk4 - D_000FDB04->unk0);
    }
    return D_000FDB04->unk4;
}

void func_000C42D0(s32 arg0) {
    D_000FDB04->unk4 = arg0;
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

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuSync);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuEnable);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDisable);

s32 func_000C498C(void) {
    return D_000FDB18;
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C4998);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F4CD4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F4FCC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C4EA8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F5188);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C5108);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E26C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F54FC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F5908);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E2B90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F593C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F5A78);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F5AA0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F5AC8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F5AF0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F5D68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E30A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F5E60);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F5EC8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F5F44);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6004);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F606C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E331C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F60F0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6184);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6250);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E34EC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3538);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3570);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E35E8);

void sceGuColor(s32 arg0) {
    func_000E3680(7, arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3650);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3680);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E372C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3774);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E37D8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3804);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6298);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F62D4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F62F8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F634C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6390);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F63B0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F63D0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F64C8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6550);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F656C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F65A0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuSetMatrix);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDrawArray);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C4EA8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDrawBezier);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C5108);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C5328);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDrawSprite);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuSpriteMode);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuCopyImage);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuClearColor);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuClearStencil);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuClearDepth);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuClear);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDrawBuffer);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDrawBufferList);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDepthBuffer);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDispBuffer);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDisplay);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuSwapBuffers);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuViewport);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDepthRange);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDepthOffset);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuOffset);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuPatchDivide);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6188);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuAmbient);

void sceGuColor(s32 arg0) {
    func_000C6288(7, arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6260);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6288);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6324);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6364);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C63C0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuFrontFace);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuShadeModel);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E38C0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3970);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3998);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3A0C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3AB0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3BCC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6898);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3CB0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3CE8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3D4C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3D7C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E2050);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3DB4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3E24);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3EA8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3F0C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6B18);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6BF0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6C24);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E40B4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E40D4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6C94);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6CCC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E41A8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E4228);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E427C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6E50);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E42F4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E4324);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E4368);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E441C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E4464);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E448C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E44CC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E4530);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E4694);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F65F8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F66A8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F66CC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6730);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F67AC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6898);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6908);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F692C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F697C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F69A8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F69CC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6A28);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6AA8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6AF8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6B18);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6BF0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6C24);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6C58);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6C78);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6C94);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6CCC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6D34);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6DAC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6E18);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6E50);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6E70);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6E90);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6ED4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6FAC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F6FD0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7000);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7078);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7140);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F715C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F72C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000F72C4(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (arg0 != 1) {
        if (arg0 == 4) {
            var_a2 = M2C_VFIELD(&D_0012B34C, s32, 4);
            M2C_VFIELD(&D_0012B34C, s32, 4) = arg1;
        }
    } else {
        var_a2 = M2C_VFIELD(&D_0012B34C, s32, 0);
        M2C_VFIELD(&D_0012B34C, s32, 0) = arg1;
    }
    return var_a2;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7738);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7A30);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E2D58);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3184);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E35A0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E38FC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E3C9C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E434C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E4BA0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E4C20);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E4CA0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E4FD0);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7300);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7684);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CAEB8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7738);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7914);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7930);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F79B0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7A30);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7A8C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7B44);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuLight);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6550);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6578);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C65EC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuLightColor);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6798);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexMode);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexFilter);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexFunc);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexEnvColor);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexWrap);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6954);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexMapMode);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexProjMapMode);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6A80);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexImage);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexScale);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexOffset);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuTexFlush);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6C40);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuClutMode);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuClutLoad);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6D04);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6D74);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuAlphaFunc);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDepthFunc);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDepthMask);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuPixelMask);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuScissor);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6F3C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6F7C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C6FA4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuBlendFunc);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C7038);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C716C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGuDebugPrint);

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

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumSetMatrixStack);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0468);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumLoadIdentity);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C75A0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C79CC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumPerspective);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C8144);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C84E4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C8B8C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C8F88);

void sceGumUpdateMatrix(void) {
    func_000CAEB8();
}

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C97DC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C985C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000C98DC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumRotateY);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumRotateZ);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000F907C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E5228);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E53A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7CB4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F7E08);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumTranslate);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumScale);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E57F4);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F8108);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F8150);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F8264);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F8344);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000F907C);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_0010D62C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F865C);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CA430);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CA784);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumMatrixMode);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumPushMatrix);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumPopMatrix);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F876C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E5CD4);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F87BC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CAC34);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CAC94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceGumDrawArray);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void sceGumDrawArray(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_000CAEB8();
    func_000F4FCC(arg0, arg1, arg2, (s32) arg3, (s32) arg4);
}
#endif

#if FW_VERSION == 282
void sceGumDrawArray(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_000CAEB8();
    sceGuDrawArray(arg0, arg1, arg2, arg3, arg4);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CAD44);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CADC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000CADC0(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_000CAEB8();
    func_000F5188(arg0, arg1, arg2, (s32) arg3, (s32) arg4);
}
#endif

#if FW_VERSION == 282
void func_000CADC0(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_000CAEB8();
    sceGuDrawBezier(arg0, arg1, arg2, arg3, arg4);
}
#endif

void func_000CAE2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_000CAEB8();
    func_000C5108(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CAEB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E5F94);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F8F1C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F89D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E62B4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E6400);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E6460);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F8C84);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F8CB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E6764);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F8F1C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F8FDC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F90D8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F91D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F9230);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F92D0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CAF7C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CAFE4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceWaveSetVoice);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceWaveSetVolume);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CB2A4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CB3F0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F938C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F93EC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F94D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E6A3C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E6A74);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E6B38);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000E6C54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F951C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F95A4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F966C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F9824);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F9968);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000F9C04);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000FA11C);
#else
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CB450);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceWaveGetStat);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CB4F0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceWavePlayEx);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceWaveStop);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CB7E0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CB830);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CB8CC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceWaveSetLoopMode);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceWavePause);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceWaveReplay);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CBA24);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E04C0);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E04DC);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CBA5C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CBB20);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CBC38);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CBE20);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CBF58);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CC204);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CC774);
#endif

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

#if FW_VERSION != 150
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", sceReg_3615BC87);
#else
void sceReg_3615BC87(void) {

}
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CCB10);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CCB88);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CCCF0);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CCFB0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD078);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD134);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD17C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD1B0);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD430);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD44C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD4C8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD508);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD564);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD568);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD674);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CD770);
#endif

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CE028);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CE080);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CE3C8);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CE430);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CE4A4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CE81C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CE8A4);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CEB0C);

INCLUDE_ASM("nonmatchings/pafmini_0BB9C0", func_000CEC20);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E04F8);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0500);

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0540);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0580);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_0BB9C0", D_000E0640);
