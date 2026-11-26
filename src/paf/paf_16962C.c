/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_16962C", func_0016962C);
#endif

#if FW_VERSION < 151
s32 func_0016962C(struct Unk_func_0016962C_0 *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    void *temp_a0;
    void *temp_s2;

    temp_a0 = M2C_FIELD(arg0, void **, 0x14);
    var_v1 = 0x80615100;
    if (arg1 < (s32) M2C_FIELD(temp_a0, u8 *, 0x19)) {
        temp_s2 = temp_a0 + 0x1A;
        var_s1 = 0;
        if (arg1 > 0) {
            var_s0 = arg1;
            do {
                var_s0 -= 1;
                var_s1 += func_0016B084((s32) (temp_s2 + var_s1));
            } while (var_s0 != 0);
        }
        M2C_FIELD(arg0, void **, 0x18) = (void *) (temp_s2 + var_s1);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 func_0016962C(struct Unk_func_0016962C_0 *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    struct Unk_func_0016962C_temp_a0 *temp_a0;
    void *temp_s2;

    temp_a0 = arg0->unk20;
    var_v1 = 0x80615100;
    if (arg1 < (s32) temp_a0->unk19) {
        temp_s2 = (u8 *)temp_a0 + 0x1A;
        var_s1 = 0;
        if (arg1 > 0) {
            var_s0 = arg1;
            do {
                var_s0 -= 1;
                var_s1 += func_0016B084((s32) (temp_s2 + var_s1));
            } while (var_s0 != 0);
        }
        arg0->unk28 = (void *) (temp_s2 + var_s1);
        var_v1 = 0;
    }
    return var_v1;
}
#endif
