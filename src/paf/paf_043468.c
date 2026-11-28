/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

s32 _ZN3paf5Image12GetErrorTypeEv(void) {
    return D_001A34E4;
}

s32 _ZN3paf5Image13SetCancelFuncEPFbPvES1_(struct Unk_scePaf_87E5F9C7_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkA0 = arg1;
    arg0->unkA4 = arg2;
    return 1;
}

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_043468", _ZN3paf5Image12CopyWithEdgeEv);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_043468", _ZN3paf5Image6MirrorEv);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_043468", func_00040864);
#endif

#if FW_VERSION == 282
s32 _ZN3paf5Image12CopyWithEdgeEv(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = _Znwj(8);
    func_0004B580(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00042C70(arg0, (s32) temp_v0);
    }
    return var_v0;
}

s32 _ZN3paf5Image6MirrorEv(s32 arg0) {
    s32 **temp_v0;
    s32 var_v0;

    temp_v0 = _Znwj(8);
    func_000439FC(temp_v0);
    var_v0 = 0;
    if (temp_v0 != NULL) {
        var_v0 = func_00042C70(arg0, (s32) temp_v0);
    }
    return var_v0;
}

s32 func_0004352C(struct Unk_func_0004352C_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0->unk15 != 0) && (arg0->unk29 != 0)) {
        var_v1 = arg0->unk0 != 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_043468", func_00043554);

INCLUDE_ASM("nonmatchings/paf_043468", func_000435C8);

INCLUDE_ASM("nonmatchings/paf_043468", func_00043608);

INCLUDE_ASM("nonmatchings/paf_043468", func_000436F8);

INCLUDE_ASM("nonmatchings/paf_043468", func_000437E4);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_043468", scePaf_891B7F7F);

void func_000439FC(M2C_UNK **arg0) {
    func_00044154((Unk_func_00044154_0*) arg0);
    *arg0 = &D_00171338;
}

Class_00171640::~Class_00171640() {
}

INCLUDE_ASM("nonmatchings/paf_043468", func_00043AB4);

INCLUDE_ASM("nonmatchings/paf_043468", func_00043C30);

INCLUDE_ASM("nonmatchings/paf_043468", func_00043CD4);

INCLUDE_ASM("nonmatchings/paf_043468", func_00043E58);

INCLUDE_ASM("nonmatchings/paf_043468", func_00043FDC);

s32 func_0004414C(void) {
    return 0;
}

void func_00044154(struct Unk_func_00044154_0 *arg0) {
    arg0->unk0 = &D_0017135C;
    arg0->unk4 = 0;
}

void func_00044168(struct Unk_func_00044168_0 *arg0) {
    arg0->unk0 = &D_0017135C;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/paf_043468", _ZN14Class_00126EC8D2Ev);

void _ZN14Class_00126EC8D1Ev(struct Unk_func_00044190_0 *arg0) {
    arg0->unk0 = &D_00171380;
    arg0->unk4 = 0;
}

void _ZN14Class_00126EC8D0Ev(struct Unk_func_000441A4_0 *arg0) {
    arg0->unk0 = &D_00171380;
    arg0->unk4 = 0;
    _ZdlPv(arg0);
}

s32 func_000441D0(struct Unk_func_000441D0_0 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v1;

    var_v1 = 0;
    if (func_0004352C(arg1) != 0) {
        arg0->unk4 = arg1;
        var_v1 = arg0->unk0->unk18(arg0, arg1 + 0x2C, arg1 + 4, arg1 + 0x18, arg4, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_043468", func_0004426C);

void func_00044394(struct Unk_func_00044394_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 == 0) {

    } else {
        func_00042E48(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/paf_043468", func_000443C4);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044470);

void func_00044678(void) {
}

void func_00044680(M2C_UNK **arg0) {
    *arg0 = &D_00171380;
}

void func_00044690(M2C_UNK **arg0) {
    *arg0 = &D_00171380;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/paf_043468", func_000446B8);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044714);

Class_00171684::~Class_00171684() {
}

INCLUDE_ASM("nonmatchings/paf_043468", func_000447F8);

INCLUDE_RODATA("nonmatchings/paf_043468", D_00171338);

__asm__(".globl _ZTV14Class_00171640\n_ZTV14Class_00171640 = D_00171338 - 8\n");

INCLUDE_RODATA("nonmatchings/paf_043468", D_0017135C);

INCLUDE_RODATA("nonmatchings/paf_043468", D_00171380);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044974);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044BB0);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044BFC);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044C40);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044C74);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044CDC);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044D64);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044DB8);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044E28);

INCLUDE_ASM("nonmatchings/paf_043468", func_00044EE8);

INCLUDE_ASM("nonmatchings/paf_043468", func_00045234);

INCLUDE_ASM("nonmatchings/paf_043468", func_00045480);

INCLUDE_ASM("nonmatchings/paf_043468", func_000454F8);

INCLUDE_ASM("nonmatchings/paf_043468", func_000456AC);

INCLUDE_ASM("nonmatchings/paf_043468", func_00045CEC);

INCLUDE_RODATA("nonmatchings/paf_043468", D_00171440);

INCLUDE_RODATA("nonmatchings/paf_043468", D_00171444);

INCLUDE_RODATA("nonmatchings/paf_043468", D_00171448);

INCLUDE_RODATA("nonmatchings/paf_043468", D_0017144C);

INCLUDE_ASM("nonmatchings/paf_043468", func_00045DA4);

INCLUDE_ASM("nonmatchings/paf_043468", func_00045ED8);

INCLUDE_ASM("nonmatchings/paf_043468", func_00046178);

INCLUDE_ASM("nonmatchings/paf_043468", func_00046418);
#endif
