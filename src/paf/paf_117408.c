#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void func_00117408(M2C_UNK **arg0) {
    *arg0 = &D_0019CEF8;
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
    _ZdlPv(arg0);
}

void func_00117440(struct Unk_func_00117440_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk28 = arg1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_117408", func_0011744C);
#endif

#if FW_VERSION == 282
s32 func_0011744C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4934 != arg1) {
        var_v0 = _ZNK3paf8PhWidget9IsInheritEPKc(arg0, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_117408", func_000B9A44);

INCLUDE_ASM("nonmatchings/paf_117408", func_000B9D98);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BA18C);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BA300);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BA36C);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BA3D0);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BA67C);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BA72C);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BA7DC);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BA850);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BA8C0);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BA9C4);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BBAAC);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BBB38);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BBBC4);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BBBF8);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BAF50);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BAF70);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BB08C);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BB0D0);

s32 func_000BB228(void *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x48);
        M2C_FIELD(temp_v1, M2C_UNK (**)(s32, s32), 0x10)(M2C_FIELD(temp_v1, s32 *, 0), temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    } else {
        temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x48);
        M2C_FIELD(temp_v1_2, M2C_UNK (**)(s32, s32), 0x10)(M2C_FIELD(temp_v1_2, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return 0;
}

s32 func_000BB2A4(void *arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) > 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            func_000BA36C(M2C_FIELD(arg0, s32 *, 0x2C) + var_s1);
            var_s1 += 0x4C;
        } while (var_s2 < M2C_FIELD(arg0, s32 *, 4));
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_117408", func_000BB308);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BB35C);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BB3E0);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BB818);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BB8B8);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BBD04);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BBF04);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_117408", func_000C00AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_117408", func_000BC098);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_117408", func_000BC3B8);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BC530);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BC96C);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BCE0C);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BD15C);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BD364);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BD418);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BD4D4);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BD800);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BDA14);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BDB34);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BDE34);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BE0F4);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BE1EC);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BE248);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BE2C0);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BE334);

INCLUDE_ASM("nonmatchings/paf_117408", func_000BE3A8);
#endif

#if FW_VERSION == 282
s32 func_00117478(void) {
    return D_001A4934;
}

s32 func_00117484(void) {
    return D_001A4934;
}

INCLUDE_ASM("nonmatchings/paf_117408", func_00117490);

INCLUDE_ASM("nonmatchings/paf_117408", func_00117510);
#endif
