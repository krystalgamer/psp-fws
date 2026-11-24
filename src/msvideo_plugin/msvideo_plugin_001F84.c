/* cflags: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

void func_00001F84(void) {
    s32 temp_v0;
    void *temp_v0_2;

    D_00065E18 = 0;
    temp_v0 = scePaf_D4FAE7D0(&D_000615CC);
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_338C3774(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            D_00065E18 = M2C_FIELD(temp_v0_2, s32 (**)(), 0x30)();
        }
    }
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00001FE0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_000020D0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00002188);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_000021FC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00002254);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_0000230C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_000024A8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00002844);

void func_00002868(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002888();
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00002888);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_000028A8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_0000290C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00002A14);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00002B1C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00002CB0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00002DE0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00002E34);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00002F6C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_000036E8);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00003798);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_000038A4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00003948);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00003A6C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00003A84);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00003AB0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00003BA0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00003CA4);

void func_00003E88(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x20) = 1;
}

void func_00003E94(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x20) = 0;
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00003E9C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00003EFC);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_0000412C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004208);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004370);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004440);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_000044D4);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004608);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_0000464C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004720);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_0000480C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004940);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_000049F0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004AA0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004B24);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004C04);

u8 func_00004C5C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x18);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004C64);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004CCC);

void func_00004D48(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
}

s32 func_00004D50(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50);
}

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_000617B4);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_000617D0);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_000617EC);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_00061808);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_00061824);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_00061840);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_00061854);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_00061878);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_000618A0);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_000618C4);

INCLUDE_RODATA("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", D_000618E0);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004D58);

u8 func_00004F0C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x36);
}

u8 func_00004F14(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x34);
}

u8 func_00004F1C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x35);
}

u8 func_00004F24(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x37);
}

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004F2C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_00004F8C);

INCLUDE_ASM("tmp/asm/201/msvideo_plugin/nonmatchings/msvideo_plugin_001F84", func_000050E0);

s32 func_00005224(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

