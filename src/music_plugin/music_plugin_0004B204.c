/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B204);
#endif

#if FW_VERSION < 150
s32 func_0004B204(s32 arg0) {
    s32 var_a0;
    u32 temp_v0;

    temp_v0 = func_0004B098(arg0 & 0xFFFF);
    var_a0 = 6;
    if (temp_v0 != 2) {
        var_a0 = -((u32) ((temp_v0 - 3) & 0xFF) < 2U) & 0xA;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 152
s32 func_0004B204(s32 arg0) {
    s32 var_a0;
    u32 temp_v0;

    temp_v0 = func_0004B098(arg0 & 0xFFFF);
    var_a0 = 6;
    if (temp_v0 != 2) {
        var_a0 = ((u32) ((temp_v0 - 3) & 0xFF) >= 2U) ? 0 : 0xA;
    }
    return var_a0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B244);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B2E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B3F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B504);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B57C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B640);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0004B640(s32 arg0, s32 *arg1) {
    *arg1 = arg0 & 0xFF;
    return 1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B650);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B918);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004B918(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B920);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004B920(void) {

}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B928);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004B928(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B930);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B9C0);
#endif

#if FW_VERSION < 150
void func_0004B9C0(void *arg0) {
    func_0004AD6C(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B9DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004B9F8);
#endif

#if FW_VERSION < 150
void func_0004B9F8(s32 arg0) {
    func_0004AD8C(arg0);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BA14);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004BA14(void) {
    func_0004B074(func_0004B9DC());
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BA38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BA5C);
#endif

#if FW_VERSION < 150
void func_0004BA5C(void) {
    func_0004B08C(func_0004B9DC());
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BA80);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BAA4);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BAC8);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BAEC);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BB3C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BB8C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004BB8C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000608F0;
    M2C_FIELD(arg0, s32 *, 4) = 0xFF;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    func_00041A6C(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BC00);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004BC00(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000608F0;
    M2C_FIELD(arg0, s32 *, 4) = 0xFF;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    func_00041A6C(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BC74);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BC9C);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BCC4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BD00);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0004BD00(s32 arg0) {
    return arg0 + 4;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BD08);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0004BD08(s32 arg0) {
    return arg0 + 8;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BD10);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0004BD10(s32 arg0) {
    return arg0 + 0xC;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BD18);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BF3C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004BF3C(s32 *arg0) {
    *arg0 = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BF44);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004BF44(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BF4C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004BF4C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BF54);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004BF54(void) {

}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BF5C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004BF5C(void) {

}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004BF64);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C168);
#endif

#if FW_VERSION < 150
void func_0004C168(s32 **arg0) {
    *arg0 = &D_00060900;
}
#endif

#if FW_VERSION == 152
void func_0004C168(s32 **arg0) {
    *arg0 = &D_00060900;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C178);
#endif

#if FW_VERSION < 150
void func_0004C178(s32 **arg0) {
    *arg0 = &D_00060900;
}
#endif

#if FW_VERSION == 152
void func_0004C178(s32 **arg0) {
    *arg0 = &D_00060900;
}
#endif

#if FW_VERSION < 260
Class_00060900::~Class_00060900() {
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C1D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C200);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C230);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C260);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C290);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C2DC);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C384);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0004C384(s32 arg0) {
    return arg0 + 8;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_00053BA0);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_00053EB8);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_00053F74);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C38C);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C4C8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C774);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0004C774(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C77C);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C7B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C7EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C824);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C85C);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C8A8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C950);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0004C950(s32 arg0) {
    return arg0 + 8;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004C958);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CA9C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CBAC);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0004CBAC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x24);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CBB4);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CCBC);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CD0C);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CD9C);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CDDC);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CE58);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CED4);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CEFC);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CF24);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CF60);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CFC8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004CFF8);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
u32 func_0004CFF8(void *arg0) {
    return (u32) ~M2C_FIELD(arg0, s32 *, 0x405C) >> 0x1F;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D008);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0004D008(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4060);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D010);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
s32 func_0004D010(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4048);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D018);
#endif

#if FW_VERSION < 150
s32 func_0004D018(s32 arg0) {
    return arg0 + 0x4050;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D020);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D1E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D408);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D570);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D6E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D850);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D8FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004D9A8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004DA5C);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004DA5C(s32 arg0) {
    func_0004CF60(arg0 + 0x14);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004B204", func_0004DA78);
#endif

#if FW_VERSION < 150 || FW_VERSION == 152
void func_0004DA78(s32 arg0) {
    func_0004CFC8(arg0 + 0x14);
}
#endif
