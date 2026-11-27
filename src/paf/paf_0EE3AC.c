#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EE3AC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EB3B0);
#endif

#if FW_VERSION == 282
void func_000EE3AC(struct Unk_func_000EE3AC_0 *arg0) {
    arg0->unk0 = &D_0019AE48;
    sceKernelDeleteSema(arg0->unk370);
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EE3F0);
#endif

INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_B104EC1B);

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_4E62343D);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_3CEDE012);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_85696453);
#else
INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_B3659499);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_7475E79A);
#endif

INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_6E94BA7B);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_18D51B42);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_03064559);
#else
INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_00092630);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_2A5DDF04);
#endif

#if FW_VERSION == 282
void scePaf_2A5DDF04(struct Unk_scePaf_2A5DDF04_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk3F8 = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EE8DC);

s32 func_000EE950(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4814 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EE97C(void) {
    return D_001A4814;
}

s32 scePaf_256218C2(void) {
    return D_001A4814;
}

INCLUDE_RODATA("nonmatchings/paf_0EE3AC", D_0019AE34);

INCLUDE_RODATA("nonmatchings/paf_0EE3AC", D_0019AE48);

INCLUDE_RODATA("nonmatchings/paf_0EE3AC", D_0019AF18);

INCLUDE_RODATA("nonmatchings/paf_0EE3AC", D_0019AF20);

INCLUDE_RODATA("nonmatchings/paf_0EE3AC", D_0019AF2C);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EE994);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_C8FD64AA);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EED10);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EED6C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EEDD0);
#endif

#if FW_VERSION < 200
void func_000EEDD0(struct Unk_vt_func_000EEDD0_arg0 **arg0) {
    func_0011E438(2);
    func_0011D80C();
    M2C_FIELD(*arg0, M2C_UNK (**)(struct Unk_vt_func_000EEDD0_arg0 **), 0x5C)(arg0);
}
#endif

#if FW_VERSION == 282
void func_000EEDD0(struct Unk_vt_func_000EEDD0_arg0 **arg0) {
    sceGumMatrixMode(2);
    sceGumLoadIdentity();
    (*arg0)->unk60(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EEE10);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_79C3CBF7);

s32 func_000EEFFC(struct Unk_func_000EEFFC_0 *arg0) {
    return arg0->unk554;
}

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF004);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF07C);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF118);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF13C);

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_00092E9C);
#endif

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF18C);

#if FW_VERSION < 151 || (FW_VERSION >= 200 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF208);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 200
s32 func_000EF208(s32 arg0, s32 arg1) {
    scePaf_DC544921();
    scePaf_4E60E34C(arg0, 0x80004, arg1);
    return 1;
}
#endif

#if FW_VERSION == 282
s32 func_000EF208(s32 arg0, M2C_UNK arg1) {
    scePaf_DC544921();
    scePaf_4E60E34C(arg0, 0x80005, arg1);
    return 1;
}
#endif

void func_000EF250(struct Unk_func_000EF250_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF260);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF2A0);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF38C);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF400);

s32 func_000EF4C0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4818 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EF4EC(void) {
    return D_001A4818;
}

s32 scePaf_F7FB133E(void) {
    return D_001A4818;
}

INCLUDE_RODATA("nonmatchings/paf_0EE3AC", D_0019AF48);

INCLUDE_RODATA("nonmatchings/paf_0EE3AC", D_0019AF58);

INCLUDE_RODATA("nonmatchings/paf_0EE3AC", D_0019B028);

INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_000EF504);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_0EE3AC", scePaf_57AF63CE);
#else
INCLUDE_ASM("nonmatchings/paf_0EE3AC", func_0009331C);
#endif
