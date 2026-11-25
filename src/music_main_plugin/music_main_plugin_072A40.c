/* cflags: -O1 */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_072A40", func_00072A40);
#else
void func_00072A40(struct Unk_func_00072A40_0 *arg0, s32 arg1) {
    arg0->unk5C = 1;
    arg0->unk40 = arg1;
}
#endif

s32 func_00072A50(struct Unk_func_00072A50_0 *arg0) {
    return arg0->unk40;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_072A40", func_00072A58);

INCLUDE_ASM("nonmatchings/music_main_plugin_072A40", func_00072AD4);

s32 func_00072B50(struct Unk_func_00072B50_0 *arg0) {
    return arg0->unk44;
}

s32 func_00072B58(struct Unk_func_00072B58_0 *arg0) {
    return arg0->unk48;
}
