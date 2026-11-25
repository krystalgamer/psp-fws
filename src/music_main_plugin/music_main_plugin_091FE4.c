/* cflags: -O1 */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION != 271
void func_00091FE4(struct Unk_func_00091FE4_0 *arg0) {
    arg0->unk0 = &D_000A2988;
    arg0->unkC = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00092000(struct Unk_func_00092000_0 *arg0) {
    arg0->unk0 = &D_000A2988;
    arg0->unkC = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_091FE4", func_0009201C);

INCLUDE_ASM("nonmatchings/music_main_plugin_091FE4", func_00092038);

void func_00092054(M2C_UNK **arg0) {
    *arg0 = &D_000A2988;
}

void func_00092064(M2C_UNK **arg0) {
    *arg0 = &D_000A2988;
}
#endif
