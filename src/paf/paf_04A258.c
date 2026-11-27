#include "common.h"
#include "paf_decls.h"

#if FW_VERSION < 270 || FW_VERSION == 282
void func_0004A258(M2C_UNK **arg0) {
    *arg0 = &D_00171640;
    func_0004417C((s32) arg0);
}

void func_0004A280(M2C_UNK **arg0) {
    *arg0 = &D_00171640;
    func_0004417C((s32) arg0);
}

void func_0004A2A8(M2C_UNK **arg0) {
    *arg0 = &D_00171640;
    func_0004417C((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A2E0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A460);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A588);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A700);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A88C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_04A258", func_000421B4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004AA1C);
#endif

#if FW_VERSION < 270 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004AB6C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004AD68);
#endif

#if FW_VERSION < 270
s32 func_0004414C(void) {
    return 0;
}
#endif

#if FW_VERSION < 270 || FW_VERSION == 282
void func_0004AEA4(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171684;
}

void func_0004AED4(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_00171684;
}

void func_0004AF04(M2C_UNK **arg0) {
    *arg0 = &D_00171684;
    func_0004417C((s32) arg0);
}

void func_0004AF2C(M2C_UNK **arg0) {
    *arg0 = &D_00171684;
    func_0004417C((s32) arg0);
}

void func_0004AF54(M2C_UNK **arg0) {
    *arg0 = &D_00171684;
    func_0004417C((s32) arg0);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004AF8C);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171640);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B090);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171684);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00126EA4);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00126EC8);
#endif

#if FW_VERSION < 270 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B164);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_04A258", func_00042A48);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_00039E6C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00039FBC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B2A8);
#endif

#if FW_VERSION < 270 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B440);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_04A258", func_00042CF0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00042D20);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00042D50);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00042D78);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00042DA0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00042DD8);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/paf_04A258", func_00045B4C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/paf_04A258", func_00044A44);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_04A258", func_00043004);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001668C4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00126EA4);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00126EC8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_04A258", func_000432A0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00043468);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00043638);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00043810);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000439A4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00043BE8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", scePaf_891B7F7F);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00045904);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00045934);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004595C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00045984);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000459BC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00046C40);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/paf_04A258", func_00045B38);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016A838);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00126EA4);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00126EC8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00045BDC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00045D60);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00045EE4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00044120);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00044154);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003A3C8);
#endif

#if FW_VERSION < 200
void func_0003A3C8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00126EA4;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004417C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003A3F0);
#endif

#if FW_VERSION == 152
void func_0003A3F0(void *arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00126EC8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION < 152
void func_0003A3F0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00126EC8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003A404);
#endif

#if FW_VERSION == 152
void func_0003A404(void *arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_00126EC8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 152
void func_0003A404(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00126EC8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_000441D0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
s32 func_000441D0(struct Unk_func_000441D0_0 *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00040864(arg1) != 0) {
        arg0->unk4 = arg1;
        var_v1 = arg0->unk0->unk18(arg0, arg1 + 0x2C, arg1 + 4, arg1 + 0x18, arg4, arg2, arg3);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004426C);

void func_00044394(struct Unk_func_00044394_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 == 0) {

    } else {
        func_00042E48(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_000443C4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003A690);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003A898);
#endif

#if FW_VERSION < 200
void func_0003A898(void) {

}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003A8A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_0003A8A0(s32 **arg0) {
    *arg0 = &D_00126EC8;
}
#endif

#if FW_VERSION == 100
void func_0003A8A0(M2C_UNK **arg0) {
    *arg0 = &D_00126EC8;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003A8B0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_0003A8B0(s32 **arg0) {
    *arg0 = &D_00126EC8;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 100
void func_0003A8B0(M2C_UNK **arg0) {
    *arg0 = &D_00126EC8;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B550);
#else
void func_0004B550(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_001716C0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B580);
#else
void func_0004B580(M2C_UNK **arg0) {
    func_00044154(arg0);
    *arg0 = &D_001716C0;
}
#endif

void func_0004B5B0(M2C_UNK **arg0) {
    *arg0 = &D_001716C0;
    func_0004417C((s32) arg0);
}

void func_0004B5D8(M2C_UNK **arg0) {
    *arg0 = &D_001716C0;
    func_0004417C((s32) arg0);
}

void func_0004B600(M2C_UNK **arg0) {
    *arg0 = &D_001716C0;
    func_0004417C((s32) arg0);
    _ZdlPv(arg0);
}

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00044538);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000446B4);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003AA18);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003ABD0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00044944);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003AC1C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003AC50);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003ACB8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003AD40);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003AD94);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003AE04);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00044C30);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00044F74);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000451C0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00045238);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000453EC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00045A30);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003AEC4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003BA5C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00126F58);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00126F5C);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00126F60);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0017118C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001702CC);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016FB4C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016C44C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016A94C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166910);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001669D0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00045AE8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00115230);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00112A30);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001148B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00126F64);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003BB20);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001716C0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003BC2C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003BEEC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003C1AC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003C4AC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003C504);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_0003C504(s32 **arg0) {
    *arg0 = &D_001717B4;
    func_0004417C((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_0003C504(M2C_UNK **arg0) {
    *arg0 = &D_001717B4;
    func_0004417C((s32) arg0);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003C52C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_0003C52C(s32 **arg0) {
    *arg0 = &D_001717B4;
    func_0004417C((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_0003C52C(M2C_UNK **arg0) {
    *arg0 = &D_001717B4;
    func_0004417C((s32) arg0);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003C554);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_0003C554(s32 **arg0) {
    *arg0 = &D_001717B4;
    func_0004417C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 100
void func_0003C554(M2C_UNK **arg0) {
    *arg0 = &D_001717B4;
    func_0004417C((s32) arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_04A258", func_000467D0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000469A0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00046A58);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00046D28);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00046FF8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_04A258", func_000467A4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00046974);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00046A2C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00046CFC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00046FCC);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001717B4);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B04);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B10);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B2C);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B48);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016AAE0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016FCFC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/paf_04A258", func_000497E8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000499B8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049A70);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049D40);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A010);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/paf_04A258", func_000486E0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000488B0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048968);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048C38);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048F08);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001717B4);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B04);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B10);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B2C);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B48);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016AAE0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004651C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000466EC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000467A4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00046A74);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00046D44);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003C58C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003C75C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003C814);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003CAE4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003CDB4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001717B4);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B04);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B10);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B2C);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166B48);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D0AC);
#endif

#if FW_VERSION < 200
void func_0003D0AC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_001270D8;
    temp_v1 = arg0 + 4;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_001ABCF0;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    func_00002AE4((s32) temp_v1, arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = arg3;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00047080);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000470D8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D118);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D17C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D1E0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D24C);
#endif

#if FW_VERSION < 200
s32 func_0003D24C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CB9C((s32) (arg0 + 4), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14), arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_v0;
    return temp_v0 != 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000472B8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000473F0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D2A0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00047C1C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048064);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00047DCC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00047E28);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00047E84);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00047EE8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00047F3C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048150);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D6B8);

void func_0003D780(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_001270BC;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048064);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D7B8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D814);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D870);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D8D4);
#endif

#if FW_VERSION < 200
s32 func_0003D8D4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CCB0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D928);

void func_0003D9B0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_001270A0;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void func_0003D9CC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_001270A0;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003D9E8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003DA44);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003DAA0);

s32 func_0003DB04(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CCB0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    return temp_v0 != 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003DB58);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A5BC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A60C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A634);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A65C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A694);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A7D0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00048EBC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048ED8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048EE0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048F00);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_04A258", scePaf_6DFFCAAE);

INCLUDE_ASM("nonmatchings/paf_04A258", scePaf_7796B70B);

INCLUDE_ASM("nonmatchings/paf_04A258", scePaf_4EC4EEC6);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_04A258", func_00048FA0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000490CC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049104);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049114);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004915C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049164);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004916C);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004929C);

INCLUDE_ASM("nonmatchings/paf_04A258", scePaf_02A6AA18);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_04A258", func_00049230);

INCLUDE_ASM("nonmatchings/paf_04A258", scePaf_51CF12F7);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000495F8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000494A4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049638);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000494E4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049678);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049520);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000496B0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000496E4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049974);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000499F0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000498D8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004990C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049978);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049AA4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049B9C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000388C4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049CB0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049D58);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049E00);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049E60);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049EB8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049F68);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A074);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A27C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A2CC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A36C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A228);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A3CC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A3F4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A41C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A454);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A5D4);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016FD60);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A6FC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A874);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004AA00);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004AB90);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004ACE0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004AEDC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B018);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004AED4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B078);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B0A0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B0C8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B100);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B090);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B204);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016FDA4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B2D8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B41C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B5B4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B6C4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00042D20);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B724);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B74C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B774);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B7AC);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B864);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B9D8);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016FDE0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004BC5C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004BE10);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004BFCC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C194);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C328);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C56C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C6F0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000483F0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048438);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00048598);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000486F8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000487D0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000488A8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000488E0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B638);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171684);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B864);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004BAE8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004BC9C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004BE58);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C020);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C1B4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C3F8);

void func_0004C57C(struct Unk_func_0004C57C_0 *arg0, s32 arg1) {
    struct Unk_func_0004C57C_temp_v1 *temp_v1;

    arg0->unk0 = 1;
    temp_v1 = &arg0->unk4;
    arg0->unk4 = &D_001ABCF0;
    temp_v1->unk4 = 0;
    func_00002AE4((s32) temp_v1, arg1);
    arg0->unk10 = 0;
}

void func_0004C5C4(struct Unk_func_0004C5C4_0 *arg0, s32 arg1) {
    struct Unk_func_0004C5C4_temp_v1 *temp_v1;

    arg0->unk0 = 1;
    temp_v1 = &arg0->unk4;
    arg0->unk4 = &D_001ABCF0;
    temp_v1->unk4 = 0;
    func_00002AE4((s32) temp_v1, arg1);
    arg0->unk10 = 0;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C60C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C76C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C8CC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C9A4);

void func_0004CA7C(struct Unk_func_0004CA7C_0 *arg0) {
    if (arg0->unk0 != 0) {
        sce_paf_private_fopen(arg0->unk4);
    } else {
        func_0014E6A0(arg0->unk10);
    }
}

INCLUDE_RODATA("nonmatchings/paf_04A258", D_001716C0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CAB4);
#endif

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CB9C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CCB0);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00048BA8);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171704);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003DDD0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0003DFDC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CD7C);
#endif

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D040);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00048ECC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004900C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049158);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000494BC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004BF20);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/paf_04A258", func_000494C4_v201);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_000494C4_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000494CC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000494D4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000494DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004BF40);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/paf_04A258", func_000494E4_v201);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_000494E4_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000494EC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000494F4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D0A0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D1FC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D368);

s32 func_0004D6CC(void) {
    return 0;
}

s32 func_0004D6D4(void) {
    return 0;
}

s32 func_0004D6DC(void) {
    return 0;
}

s32 func_0004D6E4(void) {
    return 0;
}

s32 func_0004D6EC(void) {
    return 0;
}

s32 func_0004D6F4(void) {
    return 0;
}

s32 func_0004D6FC(void) {
    return 0;
}

s32 func_0004D704(void) {
    return 0;
}
#endif

void func_0004D70C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004D71C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    _ZdlPv(arg0);
}

s32 func_0004D744(void) {
    return 0;
}

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004BF98);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004953C_v201);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004953C_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00049554);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004956C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004957C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004958C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000495B4);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166BD4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004962C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004965C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049680);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000497AC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000498E0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049A30);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049C20);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049E3C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00049FCC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A0C4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A3BC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A468);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A4B4);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166C34);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A540);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004A560);
#endif

#if FW_VERSION == 282
void func_0004D74C(struct Unk_func_0004D74C_0 *arg0) {
    arg0->unk4 = 3;
    arg0->unk0 = &D_001717B4;
}

void func_0004D764(struct Unk_func_0004D764_0 *arg0) {
    arg0->unk4 = 3;
    arg0->unk0 = &D_001717B4;
}

void func_0004D77C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004D78C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004D79C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    _ZdlPv(arg0);
}

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171704);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D7C4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D83C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D86C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D890);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D9BC);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171754);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004DAF0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004DC40);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004DE30);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E04C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E1DC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E2D4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E5CC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E678);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E6C4);

void func_0004E750(void) {
    func_0004E6C4(1, 0xFFFF);
}

void func_0004E770(void) {
    func_0004E6C4(0, 0xFFFF);
}
#endif

s32 func_0004E790(struct Unk_func_0004E790_0 *arg0, u32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    if ((arg1 >= 0x10U) && (arg0->unk0 == 0x2E47494D)) {
        if (arg0->unk4 == 0x312E3030) {
            var_a2 = arg0->unk8 == 0x505350;
        }
    }
    return var_a2;
}

s32 func_0004E7DC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E7E4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E920);

s32 func_0004E948(s32 arg0) {
    return (arg0 & 0xFFFF) == 3;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E958);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E97C);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0017155C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001706BC);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016FF3C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016C73C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0016AC3C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166BDC);
#endif

#if FW_VERSION < 200 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001717B4);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001270A0);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_001270BC);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_001270D8);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171704);
#endif

#if FW_VERSION < 201 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E97C);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166C9C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166CDC);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_04A258", D_0012713C);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_0012715C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00114AAC);
#endif

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E9EC);

s32 func_0004EB38(void) {
    return 0;
}

s32 func_0004EB40(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004EB48);

void func_0004ECF4(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004ED04(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    _ZdlPv(arg0);
}

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004AB1C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004AB68);
#endif

#if FW_VERSION < 200
void func_0003E80C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00171880;
    M2C_FIELD(arg0, s32 *, 0x654) = 1;
}

void func_0003E824(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00171880;
    M2C_FIELD(arg0, s32 *, 0x654) = 1;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004ED2C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004ED78);
#endif

void func_0004EDC4(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004EDD4(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_0004EDE4(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    _ZdlPv(arg0);
}

void func_0004EE0C(void **arg0) {
    struct Unk_func_0004EE0C_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    sce_paf_private_longjmp((u8 *)temp_a0 + 0x84, temp_a0->unk14);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004EE30);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004EE70);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004EFA0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003EB5C);
#else
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F0F0);
#endif

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F234);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F270);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F4A0);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004B4F8);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003F0E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003F4E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00040B28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003FC04);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0003FD54);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C4DC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F708);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_0017181C);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_0017185C);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171860);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004FA94);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00050264);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000503EC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000506EC);
#endif

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005073C);

void func_000507E8(struct Unk_func_000507E8_0 *arg0) {
    arg0->unk18->unk24 = 1;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_000507F8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00050898);

void func_0005091C(void) {
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00050924);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C7E4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004C920);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CA28);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CA30);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F620);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CBC4_v201);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CBC4_v200);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CC00);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CCE8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CDC0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CEF8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CF50);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004CFA0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000509F4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00050B30);

s32 func_00050C38(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00050C40);

void func_00050DD4(struct Unk_func_00050DD4_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk67C(arg1, arg2, (u8 *)arg0 + 8, (u8 *)arg0 + 0x1D4, arg0->unk66C, arg0->unk674, arg0->unk678);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00050E10);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00050EF8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00050FD0);

s32 func_00051108(struct Unk_func_00051108_0 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sce_paf_private_setjmp((u8 *)arg0 + 0x258);
    if (temp_v0 != 0) {
        func_000506EC(temp_v0);
        var_v0 = 0;
    } else {
        func_0008A928((u8 *)arg0 + 8, arg0->unk66C, 1);
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_00051160(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sce_paf_private_setjmp(arg0 + 0x258);
    if (temp_v0 != 0) {
        func_000506EC(temp_v0);
        var_v0 = 0;
    } else {
        jpeg_abort(arg0 + 8);
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_000511B0(struct Unk_func_000511B0_0 *arg0) {
    s32 temp_v0;

    jpeg_destroy_decompress((u8 *)arg0 + 8);
    temp_v0 = arg0->unk65C;
    if (temp_v0 != 0) {
        sce_paf_private_fclose(temp_v0);
        arg0->unk65C = 0;
    }
    if (arg0->unk66C != 0) {
        arg0->unk66C = 0;
    }
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051204);

void func_00051290(void) {
    func_00051204(1, 0xFFFF);
}

void func_000512B0(void) {
    func_00051204(0, 0xFFFF);
}

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_000512D0);
#else
void func_000512D0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_001718F0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_000512F4);
#else
void func_000512F4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_001718F0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

void func_00051318(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_00051328(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_00051338(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    _ZdlPv(arg0);
}

s32 func_00051360(s32 arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 8U) {
        var_v1 = func_0009CE3C(arg0, 0, (s32) arg1) == 0;
    }
    return var_v1;
}

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D190);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D2B0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000513A0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000514C0);
#endif

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171880);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D3C0);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004040C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000406B4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00040750);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000515D0);
#endif

INCLUDE_ASM("nonmatchings/paf_04A258", func_000518A0);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D79C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004D998);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000519AC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051BA8);
#endif

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051D84);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004DD30);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004DE04);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004DED8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004DEE0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E020);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E03C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E058);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E074);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E0C4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E150);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004E170);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_00040AAC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00040B68);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00051F40);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052014);

s32 func_000520E8(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_000520F0);

void func_00052230(struct Unk_func_00052230_0 *arg0) {
    func_000533A8(arg0->unk10);
}

void func_0005224C(struct Unk_func_0005224C_0 *arg0) {
    func_000534B4(arg0->unk10);
}

void func_00052268(struct Unk_func_00052268_0 *arg0) {
    func_00053500(arg0->unk10);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052284);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000522D4);

void func_00052360(void) {
    func_000522D4(1, 0xFFFF);
}

void func_00052380(void) {
    func_000522D4(0, 0xFFFF);
}
#endif

INCLUDE_RODATA("nonmatchings/paf_04A258", D_001718F0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000523A0);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171938);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166DC4);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_04A258", D_001271EC);
#endif

void func_000524AC(struct Unk_func_000524AC_0 *arg0) {
    struct Unk_func_000524AC_temp_v1 *temp_v1;

    temp_v1 = &arg0->unk14;
    arg0->unk14 = 0;
    temp_v1->unk4 = 0;
    temp_v1->unk8 = 0;
    func_000523A0((s32) arg0);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_000524D8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052548);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052628);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_000527D4);
#endif

#if FW_VERSION < 200
void func_000527D4(struct Unk_func_000527D4_0 *arg0) {
    s32 temp_v0;

    if (arg0->unk0 == 0) {
        temp_v0 = arg0->unk20;
        if (temp_v0 == 0) {

        } else {
            sce_paf_private_fclose(temp_v0);
        }
        png_destroy_read_struct(&arg0->pad1[3], &arg0->pad1[7], &arg0->pad1[0xB]);
    }
}
#endif

#if FW_VERSION == 282
void func_000527D4(struct Unk_func_000527D4_0 *arg0) {
    s32 temp_v0;

    if (arg0->unk0 == 0) {
        temp_v0 = arg0->unk20;
        if (temp_v0 == 0) {

        } else {
            sce_paf_private_fclose(temp_v0);
        }
        if (arg0->unk40 != 0) {
            sce_paf_private_free(arg0->unk40);
            arg0->unk40 = 0;
        }
        arg0->unk44 = 0;
        arg0->unk48 = 0;
        arg0->unk4C = 0;
        png_destroy_read_struct((u8 *)arg0 + 4, (u8 *)arg0 + 8, (u8 *)arg0 + 0xC);
    }
}
#endif

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052850);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000528DC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052930);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052978);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052A6C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052AF0);

void func_00052B98(struct Unk_func_00052B98_0 *arg0) {
    func_000A0B78(arg0->unk4);
}

void func_00052BB4(struct Unk_func_00052BB4_0 *arg0) {
    png_set_packing(arg0->unk4);
}

void func_00052BD0(struct Unk_func_00052BD0_0 *arg0) {
    func_000AC6C0(arg0->unk4);
}

void func_00052BEC(struct Unk_func_00052BEC_0 *arg0) {
    func_000A0B68(arg0->unk4);
}

void func_00052C08(struct Unk_func_00052C08_0 *arg0) {
    func_000A15F8(arg0->unk4);
}

void func_00052C24(struct Unk_func_00052C24_0 *arg0) {
    func_000A15C8(arg0->unk4);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052C40);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052CB4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052DB4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00052ED8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000530E4);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F130);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F258);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F358);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F3A4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F464);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F4CC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00053280);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000533A8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000534B4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053500);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000535C0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053628);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00053690);
#endif

#if FW_VERSION < 200
void func_00053690(s32 **arg0) {
    *arg0 = &D_00171A5C;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F544);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F554);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F57C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F610);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166DD4);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166DD8);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166DE4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F688);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F700);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F824);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004F9B4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004FC58);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0004FE54);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000500B8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00050260);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000502BC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000503F0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000504CC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00050B2C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051004);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051028);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051094);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005109C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000510F4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051110);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051118);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051134);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005113C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051144);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005114C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051154);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051200);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000512CC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051430);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051524);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005152C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000516DC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051820);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000518E8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000518F0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051954);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166E04);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000519E0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051A00);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051A20);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051A6C);
#endif

#if FW_VERSION == 282
void func_00053690(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_000536A0(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_000536B0(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_000536D8);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171938);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171944);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005376C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000537E4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005385C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000539B8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053B7C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053E40);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00054084);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005431C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000544C4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00054520);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00054654);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00054730);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00054D78);

void func_00055250(s32 *arg0, s32 arg1, s32 arg2) {
    sce_paf_private_fread(arg1, 1, arg2, *arg0);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055274);

s32 func_000552E0(void) {
    return 0;
}

s32 func_000552E8(s32 *arg0) {
    s32 temp_s1;

    sce_paf_private_fseek(*arg0, 0, 2);
    temp_s1 = sce_paf_private_ftell(*arg0);
    sce_paf_private_fseek(*arg0, 0, 0);
    return temp_s1;
}

void func_00055340(void) {
    func_000553A0();
}

s32 func_0005535C(void) {
    return 0;
}

void func_00055364(void) {
    func_0005544C();
}

s32 func_00055380(void) {
    return 0;
}

s32 func_00055388(struct Unk_func_00055388_0 *arg0) {
    return arg0->unk4;
}

s32 func_00055390(void) {
    return 0;
}

void func_00055398(void) {
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_000553A0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005544C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055518);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171954);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171958);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171964);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005567C);

s32 func_00055770(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055778);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055928);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055A60);

s32 func_00055B1C(void) {
    return 1;
}

s32 func_00055B24(struct Unk_func_00055B24_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        sce_paf_private_fclose(temp_v0);
        arg0->unk10 = 0;
    }
    temp_v0_2 = arg0->unk44;
    if (temp_v0_2 != 0) {
        func_0006A618(temp_v0_2);
        arg0->unk44 = 0;
    }
    func_00058D4C(arg0->unk14);
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055B88);

void func_00055C14(void) {
    func_00055B88(1, 0xFFFF);
}

void func_00055C34(void) {
    func_00055B88(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055C54);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055CA0);
#endif

void func_00055CEC(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_00055CFC(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
}

void func_00055D0C(M2C_UNK **arg0) {
    *arg0 = &D_00171704;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055D34);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00051B40);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051C78);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051D98);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00051FB4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000521C8);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_00041BAC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00041C90);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00041D40);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00041ED0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00041FE0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00055D74);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055EAC);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00171984);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00055FCC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000561E8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000563FC);
#endif

INCLUDE_ASM("nonmatchings/paf_04A258", func_000565E8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00056708);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000567D4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00056908);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00056B7C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00056D04);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00056E58);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00057000);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00057358);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000575B0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005765C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_0005353C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005362C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_0005371C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053724);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053924);

INCLUDE_ASM("nonmatchings/paf_04A258", func_000539E4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053B64);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053CC0);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053CEC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053CF4);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053D60);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166EDC);

INCLUDE_RODATA("nonmatchings/paf_04A258", D_00166F1C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053DEC);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053E0C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053E2C);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00053E6C);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_04A258", func_00043228);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_04A258", func_00057728);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00057818);

s32 func_00057908(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00057910);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00057B08);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00057BC8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00057D38);

s32 func_00057E84(struct Unk_func_00057E84_0 *arg0) {
    return func_00058A64(arg0->unkC, arg0->unk20, arg0->unk1C) != 0;
}

s32 func_00057EB0(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/paf_04A258", func_00057EB8);

INCLUDE_ASM("nonmatchings/paf_04A258", func_00057F24);

void func_00057FB0(void) {
    func_00057F24(1, 0xFFFF);
}

void func_00057FD0(void) {
    func_00057F24(0, 0xFFFF);
}

s32 func_00057FF0(s32 arg0, u32 arg1, s32 arg2, u32 arg3) {
    s32 var_a2;
    u32 temp_a0;
    u32 var_a3;

    var_a3 = arg3;
    temp_a0 = arg0 & arg2;
    var_a2 = 0;
    if (arg1 < var_a3) {
        do {
            var_a3 -= arg1;
            var_a2 |= temp_a0 << var_a3;
        } while (arg1 < var_a3);
    }
    if (var_a3 != 0) {
        var_a2 |= temp_a0 >> (arg1 - var_a3);
    }
    return var_a2;
}

void func_00058030(struct Unk_func_00058030_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk2C(arg1, arg2, arg0->unkC, arg0->unk20, arg0->unk1C, arg0->unk24, arg0->unk28, arg0->unk30);
}
#endif
