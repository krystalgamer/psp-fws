/* cflags: -O1 */
#include "common.h"
#include "photo_plugin_decls.h"

#if FW_VERSION >= 201
void func_0002B79C(struct Unk_func_0002B79C_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

void func_0002B7AC(struct Unk_func_0002B7AC_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02B79C", func_0002B7BC);

INCLUDE_ASM("nonmatchings/photo_plugin_02B79C", func_0002B830);

INCLUDE_ASM("nonmatchings/photo_plugin_02B79C", func_0002B8A4);

void func_0002B918(struct Unk_func_0002B918_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

void func_0002B928(struct Unk_func_0002B928_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/photo_plugin_02B79C", func_0002B938);

INCLUDE_ASM("nonmatchings/photo_plugin_02B79C", func_0002B9F8);

INCLUDE_ASM("nonmatchings/photo_plugin_02B79C", func_0002BAB8);

INCLUDE_ASM("nonmatchings/photo_plugin_02B79C", func_0002BB78);

s32 func_0002BC38(struct Unk_func_0002BC38_0 *arg0) {
    return arg0->unk4;
}
#endif
