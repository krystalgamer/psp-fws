/* cflags: -O1 */
#include "common.h"
#include "premo_plugin_decls.h"

void func_00023E68(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xF8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xF4) = arg1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_023E68", func_00023E74);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_023E68", func_00023FB8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_023E68", func_000240C8);

void func_00024200(s32 arg0) {
    func_0002259C(arg0 - 0x84);
}

void func_0002421C(s32 arg0) {
    func_0002259C(arg0 - 0x68);
}

void func_00024238(s32 arg0) {
    func_0002259C(arg0 - 0x38);
}

void func_00024254(s32 arg0) {
    func_0002263C(arg0 - 0x84);
}

void func_00024270(s32 arg0) {
    func_0002263C(arg0 - 0x68);
}

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

void func_000242FC(s32 arg0) {
    func_00023E74(arg0 - 0x68);
}

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

