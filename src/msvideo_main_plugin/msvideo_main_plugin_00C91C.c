/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

void func_0000C91C(struct Unk_func_0000C91C_0 *arg0, s32 arg1) {
    func_00004C84(arg0, arg1, (s32) &D_000AF100, 2, 0x20);
    arg0->unk0 = &D_000AF330;
    arg0->unk68 = 0;
}

void func_0000C960(struct Unk_func_0000C960_0 *arg0, s32 arg1) {
    func_00004C84(arg0, arg1, (s32) &D_000AF100, 2, 0x20);
    arg0->unk0 = &D_000AF330;
    arg0->unk68 = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000C9A4);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000CB28);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000CCAC);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000CE38);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000CE9C);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000CEA8);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00C91C", D_000AF070);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00C91C", D_000AF074);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00C91C", D_000AF080);

INCLUDE_RODATA("nonmatchings/msvideo_main_plugin_00C91C", D_000AF100);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000CF28);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000CF68);

INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000DAA0);

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000F63C);
#else
INCLUDE_ASM("nonmatchings/msvideo_main_plugin_00C91C", func_0000DE38);
#endif

void func_0000DEE4(struct Unk_vt_func_0000DEE4_arg0 **arg0, s32 arg1) {
    func_0000C220((s32) &D_000B60D4, arg1);
    D_000B60A8 = 1;
    (*arg0)->unk34(arg0, &func_0000E054);
}

void func_0000DF34(struct Unk_vt_func_0000DF34_arg0 **arg0, s32 arg1) {
    func_0000C220((s32) &D_000B60D4, arg1);
    D_000B60A8 = 3;
    (*arg0)->unk34(arg0, &func_0000E054);
}

void func_0000DF84(struct Unk_vt_func_0000DF84_arg0 **arg0, s32 arg1) {
    func_0000C220((s32) &D_000B60D4, arg1);
    D_000B60A8 = 4;
    (*arg0)->unk34(arg0, &func_0000E054);
}
