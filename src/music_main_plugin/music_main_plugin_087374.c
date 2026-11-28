/* lang: c++ */
/* cflags: -O1 */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION >= 282
s32 func_00087374(s32 cxxthis, s32 arg1) {
    Class_000A20E0 *arg0 = (Class_000A20E0 *) cxxthis;
    M2C_FIELD(arg0, void **, 0) = &D_000A20E0;
    arg0->unk4 = (s8) arg1;
    arg0->unk14 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    return (s32) &D_000A20E0;
}

void func_00087394(struct Unk_func_00087394_0 *arg0, s8 arg1) {
    arg0->unk0 = &D_000A20E0;
    arg0->unk4 = arg1;
    arg0->unk14 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
}

void _ZN14Class_000A20E0D2Ev(M2C_UNK **arg0) {
    *arg0 = &D_000A20E0;
}

void _ZN14Class_000A20E0D1Ev(M2C_UNK **arg0) {
    *arg0 = &D_000A20E0;
}
#endif
