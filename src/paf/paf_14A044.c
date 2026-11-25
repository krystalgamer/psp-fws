#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A044);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A330);

s32 func_0014A38C(s8 *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (*arg0 != 0) {
        do {
            var_a1 += 1;
        } while (*(arg0 + var_a1) != 0);
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A3B4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A3E8);

u8 *func_0014A45C(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A47C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A4A4);

u32 func_0014A4E8(struct Unk_func_0014A4E8_0 *arg0) {
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

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A534);

s32 func_0014A56C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 4) {
        var_v1 = func_0014A614(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A5A0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A614);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A668);

s32 func_0014A6D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 == arg3) {
        var_v1 = func_0014A3E8(arg0, arg2, arg1) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A70C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A820);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014ABDC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014ACD8);
#endif

void scePaf_A08B0F31(void) {
}

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_B7E6052B);

void scePaf_F13EBB78(void) {
    scePaf_5FAC9869();
}

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_4E67BB08);

void scePaf_B3D2C3BB(void) {
    scePaf_545FE2DA();
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014AE78);

s32 func_0014AEB0(void) {
    void *sp0;
    s32 sp4;
    s32 temp_v0;

    scePafHeaparea_F50AAE41(&sp0, &sp4);
    temp_v0 = scePaf_6D491648(0, sp4, sp0);
    D_001ABCF8 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_5FAC9869);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_3586BE05);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_00107960);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_8FC65EB0);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_CE699963);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_545FE2DA);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_26DE971C);
#else
void scePaf_26DE971C(void) {
    if (D_001ABCF8 == 0) {
        func_0014AEB0();
    }
    func_0014B9FC(D_001ABCF8);
}

s32 func_0014B198(void) {
    return D_001ABCF8;
}

void func_0014B1A4(s32 arg0, s32 arg1) {
    if (D_001ABCF8 != 0) {

    } else {
        func_0014AEB0();
    }
    func_0014BB0C(D_001ABCF8, arg0, arg1);
}
#endif

s32 scePaf_40C95283(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014B20C);

s32 func_0014B244(void) {
    void *sp0;
    s32 sp4;
    s32 temp_v0;

    scePafHeaparea_ACCE25B2(&sp0, &sp4);
    temp_v0 = scePaf_6D491648(0, sp4, sp0);
    D_001ABCFC = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_FCB4E053);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_2FA0EDDC);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_29BAA830);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014B428);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_7EC15225);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_613E9AA2);

#if FW_VERSION == 282
void func_0014B538(s32 arg0, s32 arg1) {
    if (D_001ABCFC != 0) {

    } else {
        func_0014B244();
    }
    func_0014BB0C(D_001ABCFC, arg0, arg1);
}
#endif

s32 scePaf_B61E88F2(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_6D491648);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_8A861692);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_3E203AEB);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014B760);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_9948CDB3);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010825C);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_CC32A570);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014B9FC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_001083F0);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_C89D5A3B);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BB0C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_F84A99C8);
#else
s32 scePaf_F84A99C8(void) {
    sceKernelResumeDispatchThread(sceKernelSuspendDispatchThread());
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BBD0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BC14);

void func_0014BCD8(s8 *arg0) {
    *arg0 = 0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BCE0);

s32 func_0014BE68(s32 arg0) {
    s32 temp_v1;

    if (arg0 == 0) {
        return D_001ABD08;
    }
    if ((D_001ABD04 == 0) || (arg0 != D_001ABD04)) {
        return -1;
    }
    temp_v1 = D_001ABD08;
    D_001ABD04 = 0;
    D_001ABD08 = temp_v1 + arg0;
    return temp_v1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BEB0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BF14);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014C220);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014C6C4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014C808);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_001092E8);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014C920);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014CB80);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014CDBC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014CDE8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014CE08);

s32 func_0014D0E0(void) {
    func_0014C808(D_001ABD00);
    return 0;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_00109AF4);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D104);
#endif

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1354);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1454);
#endif

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A14E4);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A15E4);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A16E4);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1758);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00135D8C);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_00135DC0);
#endif

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A17D0);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A17FC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_00109B3C);
#else
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A181C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D150);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D314);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_60DECA7E);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_1D5D9A68);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_4B1A374C);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_902515FB);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_00109EEC);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D504);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D564);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_FEAFC77A);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D5DC);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_44AAF96C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D6FC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D754);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_9D0192FD);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D870);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_296897BC);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_DEDF238F);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_44A0BCE4);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_7BED034E);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1980);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010A5A4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010A634);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_11EF5210);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_302F609D);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014DD34);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014DD80);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_B3D58D25);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014DE90);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_F1B52E86);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010A93C);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_71B4AC50);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_3FBD9639);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_F95EA3F1);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_6BA9C299);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_6829D7AF);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010AB1C);
#else
void scePaf_77EB25F5(s32 arg0, M2C_UNK arg1) {
    scePaf_6BA9C299(arg1, arg0);
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_99A5CD38);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014E290);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014E2B4);

#if FW_VERSION == 282
void func_0014E2FC(struct Unk_func_0014E2FC_0 *arg0, s32 arg1) {
    if (arg1 < 0x100) {
        arg0->unk4 = (s32) (arg0->unk4 + 1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_71712601);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_809A4F83);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_71460F7C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010AC9C);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_6F092DF6);
#endif

void func_0014E438(void) {
    scePaf_6829D7AF(&D_001AF50C, 0, 0x2020);
}

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A19D0);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_ABBBB335);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010AF44);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014E6A0);

s32 scePaf_9C483594(void) {
    return 0;
}

s32 func_0014E7FC(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_503BA324);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_F1552447);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_83944053);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_2FA84441);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_C9831AFF);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_BFE9E90B);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_9870A25B);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014EB5C);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_07A5F495);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_84BD418F);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010B3EC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010B420);
#else
void func_0014EC0C(struct Unk_func_0014EC0C_0 *arg0) {
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
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014EC94);

void scePaf_6C234A6A(s32 arg0) {
    scePaf_FBA47E77(arg0, 0, 0xA);
}

void scePaf_37A98AE9(s32 arg0) {
    scePaf_FBA47E77(arg0, 0, 0xA);
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010B4B8);
#else
s32 scePaf_B4E3A16C(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_4370175A);

void scePaf_A82E3C19(s32 arg0) {
    D_001A4BF4 = arg0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014ED3C);

void scePaf_10B901E7(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((((arg0 == 0) | (arg3 == 0)) != 0) || (((arg1 == 0) | (arg2 == 0)) != 0)) {

    } else {
        func_0014ED3C(arg0, arg2, arg3, 0, arg1 - 1);
    }
}

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_3DD2A27B);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014F078);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_26168DD3);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_993E9FDC);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_66FE90D7);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_ED2B47FA);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_980228BA);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014F3A8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014F444);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_CA79D58B);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_626D68A1);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_F0B4CAE7);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_DEB2D1C9);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_FF2F98C6);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010BE38);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_1E088F41);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_77D981F5);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014F7AC);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_3188E7DB);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010BFA8);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_7CD438D9);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_DC38941B);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_FBA47E77);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010C25C);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_2394D451);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014FD1C);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_51AAAAF4);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_2FDC80B3);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_FCFAA39F);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_45D851D1);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014FF8C);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_FD4C9F47);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150030);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_54C0DD23);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_CB2198AB);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150278);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010C948);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_D121F409);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150318);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001503EC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001504C0);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_49A81B18);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150554);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_8F12B63A);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001506B0);

INCLUDE_ASM("nonmatchings/paf_14A044", scePaf_9F10613F);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015081C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150844);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001508C0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150920);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1A2C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00136060);
#else
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1A34);
#endif

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C18);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C1C);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C20);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C24);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C28);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C4C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001512CC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151B54);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E1A8);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151B8C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151CC0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E344);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E34C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E354);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E35C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E364);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E36C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E3D8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E3F8);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151D28);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151D6C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151DB4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151DE8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151E1C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151E44);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151E6C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151EA8);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1E54);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1E60);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1E70);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1E80);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151EE4);

void func_00152108(struct Unk_func_00152108_0 *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = arg0->unk10 - 1, arg0->unk10 = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00152A7C();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015215C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152608);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001526A8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152A7C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152C00);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152CB8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152D54);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152E28);

s32 func_00152E80(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x50);
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152E8C);

s32 func_00152EC0(struct Unk_func_00152EC0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk40;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152ED4);

s32 func_00152F40(struct Unk_func_00152F40_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(arg0->unk14 & 8) ? 0 : ((u8 *)arg0 + 0x100);
    }
    return var_v0;
}

void func_00152F64(struct Unk_func_00152F64_0 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        arg0->unk90 = (s32) ((arg0->unk90 & ~arg1) | (arg1 & arg2));
    }
}

s32 func_00152F88(struct Unk_func_00152F88_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk90;
    }
    return var_v0;
}

void func_00152F9C(struct Unk_func_00152F9C_0 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        arg0->unk94 = (s32) ((arg0->unk94 & ~arg1) | (arg1 & arg2));
    }
}

s32 func_00152FC0(struct Unk_func_00152FC0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk94;
    }
    return var_v0;
}

s32 func_00152FD4(struct Unk_func_00152FD4_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(arg0->unk14 & 1) ? 0 : ((u8 *)arg0 + 0x98);
    }
    return var_v0;
}

s32 func_00152FF8(struct Unk_func_00152FF8_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(arg0->unk14 & 2) ? 0 : ((u8 *)arg0 + 0xB0);
    }
    return var_v0;
}

s32 func_0015301C(struct Unk_func_0015301C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(arg0->unk14 & 4) ? 0 : ((u8 *)arg0 + 0xF0);
    }
    return var_v0;
}

s32 func_00153040(struct Unk_func_00153040_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk2C;
    }
    return var_v0;
}

s32 func_00153054(struct Unk_func_00153054_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk30;
    }
    return var_v0;
}

s32 func_00153068(struct Unk_func_00153068_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk34;
    }
    return var_v0;
}

s32 func_0015307C(struct Unk_func_0015307C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk38;
    }
    return var_v0;
}

s32 func_00153090(struct Unk_func_00153090_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk3C;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_001530A4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001530D4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153104);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153134);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153164);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153194);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015322C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001532C4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015335C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001533F4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015348C);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1EDC);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00136518);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_00136554);
#else
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1EE8);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1F24);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_001535F8);

void func_0015383C(struct Unk_func_0015383C_0 *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = arg0->unk14 - 1, arg0->unk14 = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00153FA4();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153890);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153B18);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153FA4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154020);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015406C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001541D4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015432C);

s32 func_00154584(struct Unk_func_00154584_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk8;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154598);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154718);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001549BC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154AD0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154D0C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154D90);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154E14);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154EA4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154F30);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154FF0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001550C8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00155100);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00155138);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001551DC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015529C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001553B0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001554C0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001556A4);

void func_0015573C(struct Unk_func_0015573C_0 *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = arg0->unk14 - 1, arg0->unk14 = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00155938();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

void *func_00155790(struct Unk_func_00155790_0 *arg0) {
    void *var_v1;

    var_v1 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        arg0->unk14 = (s32) (arg0->unk14 + 1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_001557B0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00155938);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001559EC);
