/* cflags: -O1 */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION == 282
void func_000916EC(struct Unk_func_000916EC_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_0916EC", func_000916FC);
#endif

#if FW_VERSION == 282
void func_000916FC(struct Unk_func_000916FC_0 *arg0) {
    arg0->unk8 = 0;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
}
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_0916EC", func_00080D28);

INCLUDE_ASM("nonmatchings/music_main_plugin_0916EC", func_00080D44);

INCLUDE_ASM("nonmatchings/music_main_plugin_0916EC", func_00080D60);

INCLUDE_ASM("nonmatchings/music_main_plugin_0916EC", func_00081DE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_0916EC", func_0009170C);
#endif

#if FW_VERSION == 282
void func_0009170C(struct Unk_func_0009170C_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk8 = arg3;
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
}
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_0916EC", func_00080DA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_0916EC", func_00080DB8);
#endif

#if FW_VERSION == 282
void func_0009171C(struct Unk_func_0009171C_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk8 = arg3;
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
}
#endif
