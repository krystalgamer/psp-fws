/* cflags: -O2 -frename-registers */
#include "common.h"
#include "paf_decls.h"

s32 func_001696B0(void *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    void *temp_a0;
    void *temp_s2;

    temp_a0 = M2C_FIELD(arg0, void **, 0x28);
    var_v1 = 0x80615100;
    if (arg1 < (s32) M2C_FIELD(temp_a0, u8 *, 0x11)) {
        temp_s2 = temp_a0 + 0x12;
        var_s1 = 0;
        if (arg1 > 0) {
            var_s0 = arg1;
            do {
                var_s0 -= 1;
                var_s1 += func_0016B084((s32) (temp_s2 + var_s1));
            } while (var_s0 != 0);
        }
        M2C_FIELD(arg0, void **, 0x2C) = (void *) (temp_s2 + var_s1);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1696B0", func_00169734);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf_1696B0", func_0016975C);

