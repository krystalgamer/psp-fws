#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_B2ED6CAA);

s32 scePaf_1232B7A3(struct Unk_scePaf_1232B7A3_0 *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;
    void *temp_v0;

    var_a3 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        arg0->unk334 = 1;
        var_a3 = func_00078644(temp_v0, arg1, arg2);
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006A528);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_37DD37B8);

s32 scePaf_B9BE69FD(struct Unk_scePaf_B9BE69FD_0 *arg0, s32 arg1) {
    s32 var_a2;
    void *temp_v0;

    var_a2 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        arg0->unk334 = 1;
        var_a2 = func_000786E0(temp_v0, arg1);
    }
    return var_a2;
}

s32 scePaf_8D7FC7DB(struct Unk_scePaf_8D7FC7DB_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a4;
    void *temp_v0;

    var_a4 = -1;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != NULL) {
        arg0->unk334 = 1;
        var_a4 = func_00078714(temp_v0, arg1, arg2, arg3);
    }
    return var_a4;
}

void scePaf_905CF2A7(struct Unk_scePaf_905CF2A7_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 == 0) {

    } else {
        func_00078748(temp_v0, arg1 & 0xFF);
    }
}

s32 scePaf_55CC4749(struct Unk_scePaf_55CC4749_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00078760(temp_v0);
    }
    return var_v1;
}

s32 scePaf_AEEF2A7C(struct Unk_scePaf_AEEF2A7C_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00078798(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_B711DC69);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_ECE59E24);

void scePaf_A574DB92(struct Unk_scePaf_A574DB92_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 == 0) {

    } else {
        func_00078850(temp_v0);
    }
}

#if FW_VERSION >= 150 && FW_VERSION < 282
void scePaf_F639E5E1(struct Unk_scePaf_F639E5E1_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 == 0) {

    } else {
        func_00092874(temp_v0);
    }
}
#endif

#if FW_VERSION == 282
void scePaf_F639E5E1(struct Unk_scePaf_F639E5E1_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 == 0) {

    } else {
        func_00078880(temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_7F2442DC);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006A8CC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006AA1C);
#endif

void func_0006AA5C(M2C_UNK **arg0) {
    *arg0 = &D_000D9490;
    scePaf_715E8DAB((s32) arg0);
}

void func_0006AA84(M2C_UNK **arg0) {
    *arg0 = &D_000D9490;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

s32 func_0006AABC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1288 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_0006AAE8(void) {
    return D_000E1288;
}

s32 scePaf_3291BDDD(void) {
    return D_000E1288;
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006AB00);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_15EF8E18);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006AD24);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006ADF8);

s32 func_0006AED4(void) {
    scePaf_1AD33D73();
    return 1;
}

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D947C);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9490);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9560);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_293A01D8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006AF3C);

void func_0006AF84(void) {
}

void func_0006AF8C(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_CFB1A402);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_5D7F1F27);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_AD007AB6);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_73D49419);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006B090);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006B1C0);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_3987B5C4);
#else
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_15947A70);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_369E597A);

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006B418);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006B448);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006B478);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006B4A8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00085AE8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_695BCD34);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_45386654);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006B578);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006B5C4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006B610);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_CB65103E);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_515EE222);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_F89ECA28);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_4AF8E417);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_76D5A950);
#else
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00082E04);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00082EBC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00082EBC(void) {

}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006BA5C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006BBD4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006BC30);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006BC8C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006BCDC);

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000861E4(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_0009B04C(temp_v0, arg1);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 func_0006BD2C(struct Unk_func_0006BD2C_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1E8;
    if (temp_v0 != 0) {
        var_v1 = func_00081478(temp_v0);
    }
    return var_v1;
}
#endif

s32 func_0006BD64(struct Unk_func_0006BD64_0 *arg0, s32 arg1) {
    s32 var_v0;
    struct Unk_vt_func_0006BD64_temp_v1 **temp_v1;

    if (arg1 > 0x01000008) {
        temp_v1 = arg0->unk1E8;
        var_v0 = -1;
        if (temp_v1 != NULL) {
            var_v0 = (*temp_v1)->unk84(temp_v1);
        }
    } else {
        var_v0 = scePaf_222526B6();
    }
    return var_v0;
}

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_F89014B3);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_F577BC82);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void scePaf_F577BC82(s32 arg0) {
    s32 temp_v1;

    scePaf_EAA5AFF6(arg0, 0x01000016);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v1 == 0) {

    } else {
        func_00093498(temp_v1);
    }
}
#endif

#if FW_VERSION == 282
void scePaf_F89014B3(struct Unk_scePaf_F89014B3_0 *arg0, s32 arg1) {
    s32 temp_v1;

    scePaf_EAA5AFF6(arg0, 0x01000016);
    temp_v1 = arg0->unk1E8;
    if (temp_v1 == 0) {

    } else {
        func_0007CDB4(temp_v1, arg1 & 0xFF);
    }
}
#endif

void func_0006BE14(struct Unk_func_0006BE14_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 == 0) {

    } else {
        func_000814CC(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006BE44);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00086344);
#endif

#if FW_VERSION == 282
void func_0006BEA0(struct Unk_func_0006BEA0_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1E8;
    if (temp_v0 == 0) {

    } else {
        func_0007EE24(temp_v0);
    }
}
#endif

s32 func_0006BED0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E128C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_0006BEFC(void) {
    return D_000E128C;
}

s32 scePaf_DAD477C1(void) {
    return D_000E128C;
}

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D95D4);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D95E8);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D96B8);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D96C4);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D7BA0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D5F78);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000F3F90);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000F21D0_v151);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000F3F50);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_00106708);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D96D0);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9744);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D7C1C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D5FF4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D6018);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000F400C);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000F224C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000F3FCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000F3FF0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_00106784);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_001067A8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D974C);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9770);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9788);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006BF14);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006C0CC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006C398);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006C4AC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006C5C8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000839C4);
#else
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006C79C);
#endif

s32 scePaf_4FC2470C(struct Unk_scePaf_4FC2470C_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = -1;
    if (arg1 >= 0) {
        arg0->unk330 = arg1;
        scePaf_DA3A6D88((s32) arg0, 0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006C834);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_CB7B666E);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_ADC146F0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_D5A254F9);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_A18DB948);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006CFE8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_0FB7D433);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_F554C7C7);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_5ACFC2EC);
#else
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_B0FD305A);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_42F43213);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_5D242D11);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006E3F0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006E520);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006E650);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006E7C8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006E8BC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006E9B4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006EB84);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_84A71447);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006ED54);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006EE30);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006EFA8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006F1BC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006EF6C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00086110);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006F34C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006F560);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006F710);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006F874);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006F9F0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0006FB54);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_DA3A6D88);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_9D92765E);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_D7074BD1);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_FDB39519);

void func_0006FFF4(void) {
    scePaf_47E35A50();
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_0C6EEA21);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_5458E412);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_D91B2651);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_1943B875);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_FE84212F);

void scePaf_43374E9E(void) {
    scePaf_0C6EEA21();
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000703E0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_199896A3);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00070550);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00070580);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_A02E66FA);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_70B92642);
#else
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00087470);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_05EEE8A6);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_F49F3C59);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000707BC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_32B27ADD);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_A7818BCE);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_2D79697E);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_EDF1C662);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_C4D819AA);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00070BE0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_63EA1815);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_447974D1);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00070E0C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00070E58);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_11361F12);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_51FF9D24);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_B77039E4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_9430557B);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_6797988C);
#else
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_F1C70408);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_449C8821);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_470470A6);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_BC0E5C5C);
#else
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_40B21F4F);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_501E9BC9);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_8E751FCC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_F32223AC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_98A6C193);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_BD49CAEF);

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_6C4976AF);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_85112756);

s32 scePaf_C933B3C5(struct Unk_scePaf_C933B3C5_0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk35C;
    arg0->unk35C = arg1;
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000714A8);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_EFAC3E9F);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_6C386158);
#else
INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_2D0E2A03);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071718);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071794);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071810);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000718F0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000719FC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008BCBC);

void func_0008BDCC(void) {

}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071AE0);

void func_00071BF0(void) {
}
#endif

s32 func_00071BF8(struct Unk_func_00071BF8_0 *arg0, s32 arg1) {
    s32 var_v0;
    struct Unk_vt_func_00071BF8_temp_v1 **temp_v1;

    if (arg1 > 0x01000008) {
        temp_v1 = arg0->unk1E8;
        var_v0 = -1;
        if (temp_v1 != NULL) {
            var_v0 = (*temp_v1)->unk84(temp_v1);
        }
    } else {
        var_v0 = scePaf_222526B6();
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071C4C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071C88);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071CE0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071D1C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071D74);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071DF4);

void ***func_00071E74(void ***arg0, struct Unk_func_00071E74_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_00071E74_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

void ***func_00071EDC(void ***arg0, struct Unk_func_00071EDC_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_00071EDC_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071F44);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071FC4);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D98A8);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D98B8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072054);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000F4240);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", scePaf_F6F3E99E);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007227C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072338);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00071F9C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072388);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072450);

void func_000724F8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x30, 0x12, arg1);
    scePaf_D6232F26(arg0 + 0xF0, 0x12, arg1);
    func_00073A14(arg0, arg1);
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072550);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072630);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000726C4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072754);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000727DC);

void func_0007286C(struct Unk_func_0007286C_0 *arg0) {
    struct Unk_vt_func_0007286C_temp_a0 **temp_a0;

    temp_a0 = arg0->unk24;
    (*temp_a0)->unk28(temp_a0);
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072894);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000728CC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000729C4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072AC4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072BDC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072D18);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072E2C);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D99B0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072F40);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00072FF4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000730A8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007315C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073210);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073288);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073300);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000733A8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073450);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073500);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000735EC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073640);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073714);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000738B8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073930);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073A14);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073AA8);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9AB8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_00106B70);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_00106C08);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000F2768);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_00106C98);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_00106CA8);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9BF8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9C98);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9D38);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073CF4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073DEC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00073F1C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074018);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074110);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000741D0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000742A4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074360);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007441C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000744B8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074554);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000745F0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B0AC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B11C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B1B8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B25C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B27C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0008B27C(s32 arg0) {
    scePaf_7952AE83(arg0 + 0x20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B298);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0008B298(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B2B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0008B2B4(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B2D0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0008B2D0(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B2EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0008B2EC(s32 arg0) {
    scePaf_E418D7E0(arg0 + 0x20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B308);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0008B308(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B324);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0008B324(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B340);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B374);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0008B374(void *arg0, s32 arg1) {
    func_0000AC60(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B39C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0008B39C(s32 arg0, s32 arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B3C0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B430);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B4CC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B570);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B590);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0008B590(s32 arg0) {
    func_0003DE84(arg0 + 0x20);
}

void func_0008EBB8(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_0008EBD4(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_0008EBF0(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B5AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0008B5AC(s32 arg0) {
    func_0003DEDC(arg0 + 0x20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B5C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0008B5C8(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B5E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0008B5E4(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B600);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B61C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B638);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B654);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B688);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0008B688(void *arg0, s32 arg1) {
    func_0000AC60(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B6B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0008B6B0(s32 arg0, s32 arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B6D4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008B798);
#else
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074730);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074830);
#else
void func_00074830(struct Unk_func_00074830_0 *arg0) {
    arg0->unk0 = &D_000D9B60;
    if (arg0->unk1C == 0) {

    } else {
        func_00049968(arg0->unk20);
    }
    arg0->unk0 = &D_000D80D8;
    arg0->unk8 = &D_000D1930;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007488C);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000748F0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007499C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000749E4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074A04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00074A04(struct Unk_func_00074A04_0 *arg0) {
    func_0004A0A4(M2C_FIELD(arg0, s32 *, 0x1C));
}
#endif

#if FW_VERSION == 282
void func_00074A04(struct Unk_func_00074A04_0 *arg0) {
    func_0004A0A4(arg0->unk20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074A20);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00074A20(struct Unk_func_00074A20_0 *arg0) {
    func_0004A184(M2C_FIELD(arg0, s32 *, 0x1C));
}
#endif

#if FW_VERSION == 282
void func_00074A20(struct Unk_func_00074A20_0 *arg0) {
    func_0004A184(arg0->unk20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074A3C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00074A3C(struct Unk_func_00074A3C_0 *arg0) {
    func_0004A290(M2C_FIELD(arg0, s32 *, 0x1C));
}
#endif

#if FW_VERSION == 282
void func_00074A3C(struct Unk_func_00074A3C_0 *arg0) {
    func_0004A290(arg0->unk20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074A58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00074A58(struct Unk_func_00074A58_0 *arg0) {
    func_00049D40(M2C_FIELD(arg0, s32 *, 0x1C));
}
#endif

#if FW_VERSION == 282
void func_00074A58(struct Unk_func_00074A58_0 *arg0) {
    func_00049D40(arg0->unk20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074A74);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00074A74(struct Unk_func_00074A74_0 *arg0) {
    func_00049DA4(M2C_FIELD(arg0, s32 *, 0x1C));
}
#endif

#if FW_VERSION == 282
void func_00074A74(struct Unk_func_00074A74_0 *arg0) {
    func_00049DA4(arg0->unk20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074A90);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00074A90(struct Unk_func_00074A90_0 *arg0) {
    func_00049E08(M2C_FIELD(arg0, s32 *, 0x1C));
}
#endif

#if FW_VERSION == 282
void func_00074A90(struct Unk_func_00074A90_0 *arg0) {
    func_00049E08(arg0->unk20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074AAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00074AAC(struct Unk_func_00074AAC_0 *arg0) {
    func_00049EAC(M2C_FIELD(arg0, s32 *, 0x1C));
}
#endif

#if FW_VERSION == 282
void func_00074AAC(struct Unk_func_00074AAC_0 *arg0) {
    func_00049EAC(arg0->unk20);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074AC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00074AC8(struct Unk_func_00074AC8_0 *arg0) {
    func_0004A5A4(M2C_FIELD(arg0, s32 *, 0x1C));
}
#endif

#if FW_VERSION == 282
void func_00074AC8(struct Unk_func_00074AC8_0 *arg0) {
    func_0004A5A4(arg0->unk20);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074AE4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074B10);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074B34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00074B34(struct Unk_func_00074B34_0 *arg0) {
    func_0004BE34(M2C_FIELD(arg0, struct Unk_func_0004BE34_0 **, 0x1C));
}
#endif

#if FW_VERSION == 282
void func_00074B34(struct Unk_func_00074B34_0 *arg0) {
    func_0004BE34(arg0->unk20);
}
#endif

void scePaf_8DEB3DB3(void) {
}

void scePaf_BA09CF46(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074B60);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074B68);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074BEC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074C70);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074D14);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074DB8);

void func_00074E64(void) {
}

s32 func_00074E6C(void) {
    return 0;
}

s32 func_00074E74(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074E7C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074E84);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074E8C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074E94);

void func_00074E9C(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074EA4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074ED8);

void func_00074EE0(void) {
}

void func_00074EE8(void) {
}

void func_00074EF0(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074EF8);

void func_00074F00(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074F08);

void func_00074F10(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074F18);

void func_00074F24(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074F2C);

void func_00074F34(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074F3C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074F44);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074F4C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074F54);

void func_00074F60(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00074FA0();
}

void func_00074F80(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00074FC8();
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074FA0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074FC8);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000768F4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074D84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9C98);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9D38);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008BE88);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9AB8);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9B50);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9B60);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9BF8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074FF0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000750F0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074EB8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00074EFC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075124);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075168);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007519C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075238);

void func_000752DC(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075300);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075350);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075394);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000753D8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007541C);

s32 func_00075460(struct Unk_func_00075460_0 *arg0, s32 arg1) {
    func_0000AC60(arg1, arg0->unk84);
    return 1;
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075488);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000754F0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075524);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000755C0);

void func_00075664(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075688);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000756D8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007571C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008C4E8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008C6A4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008C81C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008C968);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CAB4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CC08);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CC48);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CCBC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CD2C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CD9C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CE0C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CE94);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CF28);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CFC0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008CFE0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008D0B8);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_00106F38);
#else
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9C98);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9D38);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075760);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075960);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075B1C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075C44);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075D6C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075E9C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075EDC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00075FFC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007611C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00076234);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00076354);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00076464);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00076514);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000765D0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000765F8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00076718);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9E00);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9E90);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00076800);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00076A3C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00076C78);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00076EB8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000770F8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077340);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9EB0);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9EB4);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9EB8);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9EBC);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9EC0);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9EC4);

INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9EC8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D6804);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_00106FFC);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9ECC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_06A490", D_000D9ED0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077380);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007748C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000775A8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000776AC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000777B8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077914);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077ABC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077B8C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077BAC);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_000775C0);
#endif

#if FW_VERSION == 250
void func_000775C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3E8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC28) = arg1;
    M2C_FIELD(arg0, s32 *, 0xDA8) = arg1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0008E568);
#else
INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077BCC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077BDC);
#endif

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077CFC);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077DD0);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077E5C);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077EE8);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077F34);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077F80);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_00077FD4);

INCLUDE_ASM("nonmatchings/pafmini_06A490", func_0007804C);

s32 func_000780C0(struct Unk_func_000780C0_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk1C;
    if ((temp_v0 == 0) || (var_v1 = 0, (func_0004A0A4(temp_v0) != 0))) {
        var_v1 = arg0->unk0->unk10(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00078134(struct Unk_func_00078134_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk1C;
    if ((temp_v0 == 0) || (var_v1 = 0, (func_0004A290(temp_v0) != 0))) {
        var_v1 = arg0->unk0->unk18(arg0, arg1, arg2);
    }
    return var_v1;
}
