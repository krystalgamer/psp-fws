/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004DA94);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004DA94(s32 arg0) {
    func_0004D018(arg0 + 0x14);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_04DA94", D_0005FA90);

INCLUDE_RODATA("nonmatchings/music_plugin_04DA94", D_00060900);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00054030);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_000540A8);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00054120);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00054214);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004ECF0);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004ED7C);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EE18);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_000545C8);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_000547BC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_04DA94", D_000608F0);

INCLUDE_RODATA("nonmatchings/music_plugin_04DA94", D_00060900);

INCLUDE_RODATA("nonmatchings/music_plugin_04DA94", D_00060928);

INCLUDE_RODATA("nonmatchings/music_plugin_04DA94", D_00060938);

INCLUDE_RODATA("nonmatchings/music_plugin_04DA94", D_00060948);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004DAB0);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004DD94);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004DE70);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004DF4C);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004E244);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004E468);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0004E468(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004E470);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004E628);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004E74C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004E74C(s32 arg0) {
    func_0004D8FC(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004E768);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004E768(s32 arg0) {
    func_0004D9A8(arg0 - 4);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004E784);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004E840);

INCLUDE_RODATA("nonmatchings/music_plugin_04DA94", D_00060968);

INCLUDE_RODATA("nonmatchings/music_plugin_04DA94", D_00060990);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004E8C4);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EA94);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004ECF0);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004ED7C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EE10);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004EE10(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EE18);
#endif

#if FW_VERSION == 100
s32 func_0004EE18(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (func_0002DC50(arg0 + 0x34) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
                var_v1 = 1;
            }
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
s32 func_0004EE18(void *arg0) {
    s32 var_a0;

    var_a0 = 0;
    if (func_00058B1C(arg0 + 0x40) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x18) != 0;
        }
    }
    return var_a0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EE64);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EEC0);
#endif

#if FW_VERSION == 100
s32 func_0004EEC0(void *arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00030354(M2C_FIELD(arg0, s32 *, 0x28));
    if ((temp_v0 == 0) || (var_a0 = -1, (temp_v0 == 0x0A1FAFFF))) {
        D_00063134 = 0;
        var_a0 = 0;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 152
s32 func_0004EEC0(void *arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00030354(M2C_FIELD(arg0, s32 *, 0x34));
    if ((temp_v0 == 0) || (var_a0 = -1, (temp_v0 == 0x0A1FAFFF))) {
        D_00067664 = 0;
        var_a0 = 0;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EF00);
#endif

#if FW_VERSION == 100
void func_0004EF00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
}
#endif

#if FW_VERSION == 152
void func_0004EF00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EF08);
#endif

#if FW_VERSION == 100
s32 func_0004EF08(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_000549F8);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00054A74);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EF10);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EF64);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EF74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00054B00);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00059E08);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00054BB4_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00054C20);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00054C6C);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00054CA0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0005A7D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004EF84);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004F050);

INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004F27C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00053400);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_00052D78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004F36C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004F410);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004F59C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F59C(s32 arg0) {
    func_0004ECF0(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004F5B8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F5B8(s32 arg0) {
    func_0004ED7C(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004F5D4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F5D4(s32 arg0) {
    func_0004EE18(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004F5F0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F5F0(s32 arg0, s32 arg1) {
    func_0004EF00(arg0 - 4, arg1);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_04DA94", func_0004F60C);
#endif
