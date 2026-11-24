/* cflags: -Os */
#include "common.h"
#include "msvideo_main_plugin_decls.h"

void func_0000C91C(s32 arg0, s32 arg1) {
    func_00004C84(arg0, arg1, (s32) &D_000AF100, 2, 0x20);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000AF330;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
}

void func_0000C960(s32 arg0, s32 arg1) {
    func_00004C84(arg0, arg1, (s32) &D_000AF100, 2, 0x20);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000AF330;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
}

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", func_0000C9A4);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", func_0000CB28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", func_0000CCAC);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", func_0000CE38);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", func_0000CE9C);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", func_0000CEA8);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", D_000AF070);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", D_000AF074);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", D_000AF080);

INCLUDE_RODATA("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", D_000AF100);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", func_0000CF28);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", func_0000CF68);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", func_0000DAA0);

INCLUDE_ASM("tmp/asm/352/msvideo_main_plugin/nonmatchings/msvideo_main_plugin_00C91C", func_0000DE38);

void func_0000DEE4(void **arg0, s32 arg1) {
    func_0000C220((s32) &D_000B60D4, arg1);
    D_000B60A8 = 1;
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, M2C_UNK *), 0x34)(arg0, &func_0000E054);
}

void func_0000DF34(void **arg0, s32 arg1) {
    func_0000C220((s32) &D_000B60D4, arg1);
    D_000B60A8 = 3;
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, M2C_UNK *), 0x34)(arg0, &func_0000E054);
}

void func_0000DF84(void **arg0, s32 arg1) {
    func_0000C220((s32) &D_000B60D4, arg1);
    D_000B60A8 = 4;
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, M2C_UNK *), 0x34)(arg0, &func_0000E054);
}

