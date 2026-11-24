/* cflags: -O1 */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
void func_0002F100(struct Unk_func_0002F100_0 *arg0) {
    arg0->unk33E = 0;
    arg0->unk33C = 0;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F10C);

void func_0002F1FC(s32 arg0) {
    func_0002E3EC(arg0 - 0x3C);
}

void func_0002F218(s32 arg0) {
    func_0002E508(arg0 - 0x3C);
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F234);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F27C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F2C4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F2F4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F324);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_00025F04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_000260C0);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_02F100", D_00064E08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F364);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F56C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F954);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_00026348);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_00026364);
#else
void func_0002F994(s32 arg0) {
    func_0002F2F4(arg0 - 0x3C);
}

void func_0002F9B0(s32 arg0) {
    func_0002F324(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F9CC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002FA90);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002FB54);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002FC30);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002FD0C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002FDF0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_02F100", D_00064F38);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_000300C0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0003041C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_000304A0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_00030534);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_000305F0);

void func_00030648(s32 arg0) {
    func_0002FC30(arg0 - 0x3C);
}

void func_00030664(s32 arg0) {
    func_0002FD0C(arg0 - 0x3C);
}
#endif
