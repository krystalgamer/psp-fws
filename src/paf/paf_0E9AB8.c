#include "common.h"
#include "paf_decls.h"

void func_000E9AB8(M2C_UNK **arg0) {
    *arg0 = &D_0019AA20;
    func_000E49B0((s32) arg0);
    scePaf_4E67BB08(arg0);
}

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E9824);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E99DC);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E9C0C);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E9D30);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA00C);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA048);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA0E8);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA180);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA1BC);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA210);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA25C);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA2A4);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA2F0);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA338_v280);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA380);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_C6DF54AD);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_3C4AA878);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_7BC88D19);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_A0100F5B);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_020A7084);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_829C3411);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_F59525B2);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_7CEC4010);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_4ACED608);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_BAEAB61A);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_8ECB2367);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_C3AD96FE);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_D44604DD);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_DF92BA98);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_6141934B);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA480);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA534);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_256DE321);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_A37BC366);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E9AF0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008EDEC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E9CA8);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E9ED8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000918C8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_00091BD4);
#endif

#if FW_VERSION == 150
s32 func_00091BD4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 var_v0;

    temp_a4 = arg2 & 0xFF;
    if (arg1 != 0x32) {
        var_v0 = func_0008B9EC(arg0, arg1, temp_a4);
    } else {
        M2C_FIELD(arg0, s8 *, 0x6C8) = (s8) temp_a4;
        func_00092C78(arg0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008EFCC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E9FFC);

s32 func_000EA2D8(struct Unk_func_000EA2D8_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 var_v0;

    temp_a4 = arg2 & 0xFF;
    if (arg1 != 0x33) {
        var_v0 = func_000E5428(arg0, arg1, temp_a4);
    } else {
        arg0->unk6C8 = (s8) temp_a4;
        func_000EB590(arg0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 151 && FW_VERSION < 250) || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA314);
#endif

#if FW_VERSION == 150
s32 func_000EA314(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_scePaf_86B41BA3_0 *temp_v0;

    func_0008B9EC(arg0, arg1, arg2);
    switch (arg1) {                                 /* irregular */
    case 48:
        temp_v0 = M2C_FIELD(arg0, struct Unk_scePaf_86B41BA3_0 **, 0x700);
        M2C_FIELD(temp_v0, s8 *, 0x1FE) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1FF) = 0;
        scePaf_86B41BA3(temp_v0);
        break;
    case 14:
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(s32, M2C_UNK, M2C_UNK, s32), 0x7C)(arg0, 0xA, 0xE, arg2 & ~0xF0);
        func_000EB508(arg0);
        break;
    }
    return 0;
}
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA3B4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA44C);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA488);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA4DC);
#endif

#if FW_VERSION == 150
void func_000EA4DC(struct Unk_func_000EA4DC_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_0008BDE8((s32) arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = arg0->unk700;
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x6C)(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION == 100
void func_000EA4DC(struct Unk_func_000EA4DC_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_0008BDE8((s32) arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x6FC);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x6C)(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION == 282
void func_000EA4DC(struct Unk_func_000EA4DC_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct Unk_vt_func_000EA4DC_temp_v0 **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E58B4(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = arg0->unk700;
        (*temp_v0)->unk70(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA528);
#endif

#if FW_VERSION == 150
void func_000EA528(struct Unk_func_000EA528_0 *arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_0008C09C((s32) arg0, arg1, arg2);
    } else {
        temp_v0 = arg0->unk700;
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32), 0x70)(temp_v0, arg2);
    }
}
#endif

#if FW_VERSION == 100
void func_000EA528(struct Unk_func_000EA528_0 *arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_0008C09C((s32) arg0, arg1, arg2);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x6FC);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32), 0x70)(temp_v0, arg2);
    }
}
#endif

#if FW_VERSION == 282
void func_000EA528(struct Unk_func_000EA528_0 *arg0, s32 arg1, s32 arg2) {
    struct Unk_vt_func_000EA528_temp_v0 **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E5B88(arg0, arg1, arg2);
    } else {
        temp_v0 = arg0->unk700;
        (*temp_v0)->unk74(temp_v0, arg2);
    }
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA570);
#endif

#if FW_VERSION == 150
void func_000EA570(struct Unk_func_000EA570_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_0008C34C((s32) arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = arg0->unk700;
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x74)(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION == 100
void func_000EA570(struct Unk_func_000EA570_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 0xA) {
        func_0008C34C((s32) arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x6FC);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x74)(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION == 282
void func_000EA570(struct Unk_func_000EA570_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct Unk_vt_func_000EA570_temp_v0 **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E5E5C(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = arg0->unk700;
        (*temp_v0)->unk78(temp_v0, arg2, arg3);
    }
}
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA5BC);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA604);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_00091F10);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_00091FE0);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_00092094);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008F378);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008F420);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008F4CC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA64C);

s32 scePaf_6141934B(struct Unk_scePaf_6141934B_0 *arg0, s32 arg1) {
    s32 var_v0;

    if ((arg1 & 0xFFFF) != 8) {
        var_v0 = func_000E6D80(arg0, arg1);
    } else {
        var_v0 = arg0->unk700;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA74C);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA800);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_5A99AE67);
#endif

#if FW_VERSION == 282
s32 scePaf_5A99AE67(s32 arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_A72594EF();
    if (temp_v0 >= 0) {
        scePaf_EAA5AFF6(arg0, 0x0100000C);
    }
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EAAE4);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_D5F5E68F);

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EAB70);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EAF68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000924FC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_B6DD6FC6);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_00092934);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E4B54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000929C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_00092AA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008F7A4);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008FAC8);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008FB88);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008FC90);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EAE3C);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EB234);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EB2C4);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EB3C4);
#endif

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EB508);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_00092C78);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_00092EA0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E8BF4);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EB88C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000930C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008FDFC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EB590);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EB7D8);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EBA00);

void func_000EBB58(void) {
    func_000E5558();
}
#endif

s32 func_000EBB74(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47DC != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EBBA0(void) {
    return D_001A47DC;
}

s32 scePaf_C6F44EF9(void) {
    return D_001A47DC;
}

void func_000EBBB8(struct Unk_func_000EBBB8_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a2;

    var_a2 = arg2;
    if (var_a2 == 0) {
        temp_v0 = scePaf_B7E6052B(0x1AC);
        func_001026B4(temp_v0, arg0);
        var_a2 = temp_v0;
    }
    scePaf_87516C3B(arg0, arg1, var_a2);
    arg0->unk14 = 0x100;
    arg0->unk0 = &D_0019AB08;
    arg0->unk334 = 0;
    arg0->unk330 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0E9AB8", scePaf_D180ACBA);
