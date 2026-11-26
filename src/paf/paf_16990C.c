/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16990C", func_0016990C);
#endif

#if FW_VERSION < 151
u32 func_0016990C(struct Unk_func_0016990C_0 *arg0) {
    return (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), u8 *, 2) >> 5;
}
#endif

#if FW_VERSION == 282
u32 func_0016990C(struct Unk_func_0016990C_0 *arg0) {
    return (u8) arg0->unk30->unk2 >> 5;
}
#endif

INCLUDE_ASM("nonmatchings/paf_16990C", func_0016991C);

INCLUDE_ASM("nonmatchings/paf_16990C", func_00169950);

#if FW_VERSION >= 151 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_16990C", func_00121AD8);
#endif

#if FW_VERSION < 151
s32 func_00121AD8(void *arg0, void *arg1) {
    s32 var_s1;
    void *temp_s0;

    var_s1 = 0;
    temp_s0 = M2C_FIELD(arg0, void **, 0x20);
    if (func_0012172C((s32) M2C_FIELD(temp_s0, u8 *, 0), (s32) M2C_FIELD(temp_s0, u8 *, 1)) == 0) {
        M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(temp_s0, u8 *, 0xC) * 0x10);
        M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(temp_s0, u8 *, 0xD) * 0x10);
    } else {
        var_s1 = 0x80615100;
    }
    return var_s1;
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_16990C", func_00121B48);
#endif

INCLUDE_ASM("nonmatchings/paf_16990C", func_00169970);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16990C", func_00160540);

INCLUDE_ASM("nonmatchings/paf_16990C", func_001605D4);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16990C", func_0016810C);

INCLUDE_ASM("nonmatchings/paf_16990C", func_0016817C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_16990C", func_001699AC);

INCLUDE_ASM("nonmatchings/paf_16990C", func_00169A40);

INCLUDE_ASM("nonmatchings/paf_16990C", func_00169AAC);
#endif
