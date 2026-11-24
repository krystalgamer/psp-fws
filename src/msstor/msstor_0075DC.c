/* cflags: -Os */
#include "common.h"
#include "msstor_decls.h"

#if FW_VERSION != 100
s32 func_000075DC(struct Unk_func_000075DC_0 *arg0) {
    s32 var_v0;

    var_v0 = 0xC0220100;
    if (arg0 != NULL) {
        sceKernelSetEventFlag(arg0->unk24, 1U);
        arg0->unk20 = -1;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msstor_0075DC", func_00007620);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/msstor_0075DC", func_000076E4);
#endif

#if FW_VERSION != 100
void func_00007798(struct Unk_func_00007798_0 *arg0) {
    arg0->unk4E84 = 0;
}
#endif

#if FW_VERSION != 100
void func_000077A0(struct Unk_func_000077A0_0 *arg0, s32 arg1) {
    if (arg1 != 0) {
        arg0->unk4E8C = 1;
        return;
    }
    arg0->unk4E8C = 0;
}
#endif

#if FW_VERSION != 100
s32 func_000077B8(struct Unk_func_000077B8_0 *arg0) {
    return arg0->unk4E8C != 0;
}
#endif

