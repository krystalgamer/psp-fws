/* lang: c++ */
/* cflags[150]: -O2 */
/* cflags[100,103]: -O2 */
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_00025F04);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_000260C0);
#else
INCLUDE_RODATA("nonmatchings/msvideo_plugin_02F100", D_00064E08);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F364);

INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F56C);
#endif

#if FW_VERSION == 103 || FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_0002F954);
#endif

#if FW_VERSION == 150
s32 func_0002F954(void *arg0, s32 *arg1) {
    s32 var_v0;

    var_v0 = func_0002B638(M2C_FIELD(arg0, void ***, 0xE4));
    if (var_v0 != 0) {
        var_v0 = 0x302;
    }
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
s32 func_0002F954(void *arg0, s32 *arg1) {
    s32 var_v0;

    var_v0 = func_0002B638(M2C_FIELD(arg0, void ***, 0xE0));
    if (var_v0 != 0) {
        var_v0 = 0x302;
    }
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00026348(s32 arg0) {
    func_0002F2F4(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_00026348);
#endif

#if FW_VERSION == 100
void func_00026348(s32 arg0) {
    func_0002F2F4(arg0 - 0x38);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00026364(s32 arg0) {
    func_0002F324(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/msvideo_plugin_02F100", func_00026364);
#endif

#if FW_VERSION == 100
void func_00026364(s32 arg0) {
    func_0002F324(arg0 - 0x38);
}
#endif

#if FW_VERSION == 201
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
