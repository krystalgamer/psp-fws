/* lang: c++ */
/* cflags: -O1 */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_0376D8", func_000376D8);

void func_000376F0(void) {
    func_000376D8();
}

s32 func_0003770C(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0376D8", func_00037720);

void func_000377A0(struct Unk_func_000377A0_0 *arg0) {
    if (arg0 != NULL) {
        arg0->unk8 = 0;
        arg0->unk0 = 0;
        arg0->unk4 = 0;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0376D8", func_000377BC);

s32 func_00037804(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0376D8", func_00037818);

void func_000378D4(struct Unk_func_000378D4_0 *arg0) {
    if (arg0 != NULL) {
        arg0->unk8 = 0;
        arg0->unk0 = 0;
        arg0->unk4 = 0;
    }
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0376D8", func_000378F0);

s32 func_00037938(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_0376D8", func_0003794C);

s32 func_00037A08(struct Unk_func_00037A08_0 *arg0) {
    return arg0->unk58 == 1;
}
#endif
