/* lang: c++ */
/* cflags: -O1 */
#include "common.h"
#include "premo_plugin_decls.h"

#if FW_VERSION == 352
void func_00023E68(struct Unk_func_00023E68_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkF8 = arg2;
    arg0->unkF4 = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_00023E74);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_00023FB8);

INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_000240C8);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_0001D38C);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_0001C138_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_0001C138_v310);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_00024200);
#endif

#if FW_VERSION == 352
void func_00024200(s32 arg0) {
    func_0002259C(arg0 - 0x84);
}
#endif

#if FW_VERSION < 350
void func_00024200(s32 arg0) {
    func_0002259C(arg0 - 0x7C);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_0002421C);
#endif

#if FW_VERSION == 352
void func_0002421C(s32 arg0) {
    func_0002259C(arg0 - 0x68);
}
#endif

#if FW_VERSION < 350
void func_0002421C(s32 arg0) {
    func_0002259C(arg0 - 0x64);
}
#endif

void func_00024238(s32 arg0) {
    func_0002259C(arg0 - 0x38);
}

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_00024254);
#endif

#if FW_VERSION == 352
void func_00024254(s32 arg0) {
    func_0002263C(arg0 - 0x84);
}
#endif

#if FW_VERSION < 350
void func_00024254(s32 arg0) {
    func_0002263C(arg0 - 0x7C);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_00024270);
#endif

#if FW_VERSION == 352
void func_00024270(s32 arg0) {
    func_0002263C(arg0 - 0x68);
}
#endif

#if FW_VERSION < 350
void func_00024270(s32 arg0) {
    func_0002263C(arg0 - 0x64);
}
#endif

void func_0002428C(s32 arg0) {
    func_0002263C(arg0 - 0x38);
}

void func_000242A8(s32 arg0) {
    func_000226F8(arg0 - 0x38);
}

void func_000242C4(s32 arg0) {
    func_00022EC8(arg0 - 0x38);
}

void func_000242E0(s32 arg0) {
    func_000230C0(arg0 - 0x38);
}

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_023E68", func_000242FC);
#endif

#if FW_VERSION == 352
void func_000242FC(s32 arg0) {
    func_00023E74(arg0 - 0x68);
}
#endif

#if FW_VERSION < 350
void func_000242FC(s32 arg0) {
    func_00023E74(arg0 - 0x64);
}
#endif

s32 func_00024318(void) {
    return 0;
}

s32 func_00024320(void) {
    return 0;
}

s32 func_00024328(void) {
    return 0x80004001;
}

s32 func_00024334(void) {
    return 0x80004001;
}

s32 func_00024340(void) {
    return 0x80004001;
}

s32 func_0002434C(void) {
    return 0;
}

s32 func_00024354(void) {
    return 0;
}
