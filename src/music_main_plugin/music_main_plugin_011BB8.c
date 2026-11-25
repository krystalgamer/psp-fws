#include "common.h"
#include "music_main_plugin_decls.h"

s32 func_00011BB8(void) {
    return D_000A43D0;
}

s32 func_00011BC4(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_000A43D0 != 0) {
        var_v0 = D_000A43D0 + 0x300000;
    }
    return var_v0;
}
