/* cflags: -O1 */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_087374", func_00087374);

void func_00087394(struct Unk_func_00087394_0 *arg0, s8 arg1) {
    arg0->unk0 = &D_000A20E0;
    arg0->unk4 = arg1;
    arg0->unk14 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
}

void func_000873B4(M2C_UNK **arg0) {
    *arg0 = &D_000A20E0;
}

void func_000873C4(M2C_UNK **arg0) {
    *arg0 = &D_000A20E0;
}
#endif
