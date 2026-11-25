#include "common.h"
#include "paf_decls.h"

void func_000E9AB8(M2C_UNK **arg0) {
    *arg0 = &D_0019AA20;
    func_000E49B0((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E9AF0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_0008EDEC);
#else
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E9CA8);
#endif

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000E9ED8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000918C8);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_00091BD4);
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

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA314);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA3B4);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA44C);
#endif

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA488);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA4DC);
#else
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA528);
#else
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA570);
#else
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

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA5BC);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000EA604);

#if FW_VERSION >= 150 && FW_VERSION < 282
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

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_000924FC);

INCLUDE_ASM("nonmatchings/paf_0E9AB8", func_00092934);
#endif

#if FW_VERSION == 200
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
