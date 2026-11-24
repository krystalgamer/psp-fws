/* cflags: -O2 -frename-registers */
#include "common.h"
#include "mpeg_vsh_decls.h"

#if FW_VERSION >= 150
s32 func_00005C20(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 >= 4) {

    } else {
        var_v0 = func_00009530(arg0 + (arg1 * 2) + 2);
    }
    return var_v0;
}

s32 func_00005C5C(s32 arg0) {
    return arg0 + 0xE;
}

void *func_00005C64(void **arg0) {
    struct Unk_func_00005C64_temp_a1 *temp_a1;

    temp_a1 = *arg0;
    return (u8 *)temp_a1 + (temp_a1->unk24 * 0x644) + 0x28;
}

s32 func_00005C84(void) {
    return 0;
}
#endif
