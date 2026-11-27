/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F644);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F644(s32 arg0) {
    func_0004EF64(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F660);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F660(s32 arg0) {
    func_0004EF74(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F67C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F67C(s32 arg0, s32 arg1) {
    func_0004EF84(arg0 - 4, arg1);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F698);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F698(s32 arg0, s32 arg1) {
    func_0004F050(arg0 - 4, arg1);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F6B4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F6B4(s32 arg0, s32 arg1) {
    func_0004F27C(arg0 - 4, arg1);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F6D0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F6D0(s32 arg0, s32 arg1) {
    func_0004F410(arg0 - 4, arg1);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F6EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F774);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F7FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F8BC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004F97C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FA38);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FAF4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FBB8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004FBB8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FBC0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FC44);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FCC8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FD3C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055A2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055B3C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055C08);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055C8C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055CC0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B010);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055D2C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055D98);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055E04);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055E70);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055EF0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056004);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B48C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056194);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005638C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B7F0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000564DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000565C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056750);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005685C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005687C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056894);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089BD0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089C50);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089C6C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089C84);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089CA8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089CC8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000568A0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056954);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056974);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FD94);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FED0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0004FED0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C) == 1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FEE0);
#endif

#if FW_VERSION == 100
void func_0004FEE0(s32 **arg0) {
    *arg0 = &D_00060B30;
}
#endif

#if FW_VERSION == 152
void func_0004FEE0(M2C_UNK **arg0) {
    *arg0 = &D_00060B30;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FEF0);
#endif

#if FW_VERSION == 100
void func_0004FEF0(s32 **arg0) {
    *arg0 = &D_00060B30;
}
#endif

#if FW_VERSION == 152
void func_0004FEF0(M2C_UNK **arg0) {
    *arg0 = &D_00060B30;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FF00);
#endif

#if FW_VERSION == 100
void func_0004FF00(s32 **arg0) {
    *arg0 = &D_00060B30;
}
#endif

#if FW_VERSION == 152
void func_0004FF00(M2C_UNK **arg0) {
    *arg0 = &D_00060B30;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FF10);
#endif

#if FW_VERSION == 100
void func_0004FF10(s32 **arg0) {
    *arg0 = &D_00060B30;
}
#endif

#if FW_VERSION == 152
void func_0004FF10(M2C_UNK **arg0) {
    *arg0 = &D_00060B30;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FF20);
#endif

#if FW_VERSION == 100
void func_0004FF20(s32 **arg0) {
    *arg0 = &D_00060B30;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000569FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056A08);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056D20);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056DDC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056E58);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056E78);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056E98);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056F00);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056F68);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057058);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050170);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005027C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000502CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057408);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000575F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057880);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FF48);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FFA0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0004FFF8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050060);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000500C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005011C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050170);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000501CC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000501CC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000501D4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000501D4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057924);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005799C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CD14_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057A14_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057A1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057A24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057AD8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057B40);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000501DC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_000501DC(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x18;
    func_0002DC5C(temp_s1);
    func_0002DA7C(arg0 + 0x10, 4U);
    func_0002DC98(temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005022C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_0005022C(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x18;
    func_0002DC5C(temp_s1);
    func_0002DA7C(arg0 + 0x10, 4U);
    func_0002DC98(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005027C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000502CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005031C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050644);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00050644(s32 arg0) {
    func_0005011C(arg0 - 8);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050660);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00050660(s32 arg0) {
    func_0005011C(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005067C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0005067C(s32 arg0) {
    func_00050170(arg0 - 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089D20);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060B30);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057C10);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D690);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050698);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00050698(s32 arg0) {
    func_00050170(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000506B4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000506B4(s32 arg0) {
    func_0005027C(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000506D0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000506D0(s32 arg0) {
    func_000502CC(arg0 - 4);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000583D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005848C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058548);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058604);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000586C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058784);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000506EC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000506EC(s32 arg0) {
    func_0005031C(arg0 - 8);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050708);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005075C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000507B0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000507F4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050838);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005087C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058840);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058950);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058A1C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000508C0);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005090C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0005090C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050914);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00050914(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    func_0002DC5C(temp_s1);
    func_0002DA7C(arg0 + 0xC, 4U);
    func_0002DC98(temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050964);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00050964(s32 arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x14;
    func_0002DC5C(temp_s1);
    func_0002DA7C(arg0 + 0xC, 4U);
    func_0002DC98(temp_s1);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000509B4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050C30);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00050C30(s32 arg0) {
    func_0005087C(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050C4C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00050C4C(s32 arg0) {
    func_000508C0(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050C68);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00050C68(s32 arg0) {
    func_000509B4(arg0 - 4);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058AD4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058B40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058BAC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058C18);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058C84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058D04);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058E0C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005E334);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058F98);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059190);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005E698);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000592E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000593C4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059554);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059660);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050C84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050CE4);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050D44);
#endif

#if FW_VERSION == 100
void func_00050D44(s32 **arg0) {
    *arg0 = &D_00060C38;
}
#endif

#if FW_VERSION == 152
void func_00050D44(M2C_UNK **arg0) {
    *arg0 = &D_00060C38;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050D54);
#endif

#if FW_VERSION == 100
void func_00050D54(s32 **arg0) {
    *arg0 = &D_00060C38;
}
#endif

#if FW_VERSION == 152
void func_00050D54(M2C_UNK **arg0) {
    *arg0 = &D_00060C38;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050D64);
#endif

#if FW_VERSION == 100
void func_00050D64(s32 **arg0) {
    *arg0 = &D_00060C38;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050D8C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_000609C0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060A38);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060A5C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060A80);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060AA8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060AD0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060B08);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060B30);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060B50);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060BC0);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060C08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000596A4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060C0C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060C10);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060C14);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060C18);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060C1C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060C20);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060C24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00050DA8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051510);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051548);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051580);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000515B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000515F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051620);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051650);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051690);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00051690(s32 arg0) {
    func_00051620(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000516AC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000516AC(s32 arg0) {
    func_00051650(arg0 - 4);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000516C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005172C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060C38);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060C48);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060CB8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051790);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051918);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051C0C);
#endif

#if FW_VERSION == 100
s32 func_00051C0C(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (func_0002DC50(arg0 + 0x2C) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
                var_v1 = 1;
            }
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 152
s32 func_00051C0C(void *arg0) {
    s32 var_a0;

    var_a0 = 0;
    if (func_00058B1C(arg0 + 0x2C) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            var_a0 = M2C_FIELD(arg0, s32 *, 0x10) != 0;
        }
    }
    return var_a0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051C58);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051CA4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
u32 func_00051CA4(void *arg0) {
    return (u32) ~M2C_FIELD(arg0, s32 *, 0x14) >> 0x1F;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051CB4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
u32 func_00051CB4(void *arg0) {
    return (u32) ~M2C_FIELD(arg0, s32 *, 0x14) >> 0x1F;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051CC4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00051CC4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051CCC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00051FE4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052250);
#endif

#if FW_VERSION == 100
void func_00052250(s32 **arg0) {
    *arg0 = &D_00060D20;
}
#endif

#if FW_VERSION == 152
void func_00052250(M2C_UNK **arg0) {
    *arg0 = &D_00060D20;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052260);
#endif

#if FW_VERSION == 100
void func_00052260(s32 **arg0) {
    *arg0 = &D_00060D20;
}
#endif

#if FW_VERSION == 152
void func_00052260(M2C_UNK **arg0) {
    *arg0 = &D_00060D20;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052270);
#endif

#if FW_VERSION == 100
void func_00052270(s32 **arg0) {
    *arg0 = &D_00060D20;
}
#endif

#if FW_VERSION == 152
void func_00052270(M2C_UNK **arg0) {
    *arg0 = &D_00060D20;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052280);
#endif

#if FW_VERSION == 100
void func_00052280(s32 **arg0) {
    *arg0 = &D_00060D20;
}
#endif

#if FW_VERSION == 152
void func_00052280(M2C_UNK **arg0) {
    *arg0 = &D_00060D20;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052290);
#endif

#if FW_VERSION == 100
void func_00052290(s32 **arg0) {
    *arg0 = &D_00060D20;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059800);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059964);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000599EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059A68);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059A88);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059AA8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059B1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059B90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059C14);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059C98);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059D24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059EBC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A0B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A12C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A1A4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A20C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A320);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A374);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A3B8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089EC8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060D20);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A858);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AA78);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AA94);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005FE2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AAB0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AAD0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AAD8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AAE0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AAE8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005FE78);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005FE94);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005FEB0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005FF6C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060028);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000600E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000601A0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060264);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000602E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060320);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060430);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060520);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000605A4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000605D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060644);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000606B0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006071C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060788);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060808);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060910);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060AD0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060CF0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060E74);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060F70);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061134);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061288);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000612A8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000612C0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_000915C8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00091640);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0009165C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00091674);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00091698);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_000916B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000612CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061380);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000613A0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000613C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000613D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000613E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000613F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061400);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061428);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061744);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061800);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006187C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006189C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000618BC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061924);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006198C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061A10);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061A94);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061B20);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061C9C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061E74);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061EEC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061F64);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061FDC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000620EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000620F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062100);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062210);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00091710);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00091740);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062254);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062530);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062650);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062658);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062674_v250);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062690);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062698);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AAF4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AB10);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AB2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005ABE8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005ACA4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AD60);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AE1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AEE0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AF5C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AF9C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B0AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B178);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B1FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B240);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B2AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B318);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B384);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B3F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B470);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B59C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B720);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005B914);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005BA60);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005BB3C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005BCD4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005BDF4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005BE14);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005BE2C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089F10);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089F90);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089FAC);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089FC8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00089FEC);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A010);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005BED4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005BF88);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005BFA8);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000522B8);
#endif

#if FW_VERSION == 100
void func_000522B8(s32 **arg0) {
    *arg0 = &D_00060D58;
}
#endif

#if FW_VERSION == 152
void func_000522B8(M2C_UNK **arg0) {
    *arg0 = &D_00060D58;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000522C8);
#endif

#if FW_VERSION == 100
void func_000522C8(s32 **arg0) {
    *arg0 = &D_00060D58;
}
#endif

#if FW_VERSION == 152
void func_000522C8(M2C_UNK **arg0) {
    *arg0 = &D_00060D58;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000522D8);
#endif

#if FW_VERSION == 100
void func_000522D8(s32 **arg0) {
    *arg0 = &D_00060D58;
}
#endif

#if FW_VERSION == 152
void func_000522D8(M2C_UNK **arg0) {
    *arg0 = &D_00060D58;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000522E8);
#endif

#if FW_VERSION == 100
void func_000522E8(s32 **arg0) {
    *arg0 = &D_00060D58;
}
#endif

#if FW_VERSION == 152
void func_000522E8(M2C_UNK **arg0) {
    *arg0 = &D_00060D58;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000522F8);
#endif

#if FW_VERSION == 100
void func_000522F8(s32 **arg0) {
    *arg0 = &D_00060D58;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052320);
#endif

#if FW_VERSION == 100
void func_00052320(s32 **arg0) {
    *arg0 = &D_00060D70;
}
#endif

#if FW_VERSION == 152
void func_00052320(M2C_UNK **arg0) {
    *arg0 = &D_00060D70;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C044);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C4C4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C5C4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C640);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C660);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A068);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060D58);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C680);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C6F4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C768);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C7DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C850);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C8DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C968);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000645A0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005C9FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CC04);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CC0C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CC14);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CC1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CC98);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CD14);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CD1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CD24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CDD8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CE44);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CE90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005CECC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D5B0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D600);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D61C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D638);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D654);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065250);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D670);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D704);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D798);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D800);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D868);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D890);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D8B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D8F4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D910);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D92C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005D948);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DA2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DA80);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DAEC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DB48);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DBC0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DC34);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DC58);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DC90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DCC8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DD68);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DF44);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A0E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005DFD8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005E4E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005E758);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005E7D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005E858);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000369C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005E9FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005EA80);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005EAE4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005EB28);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005EB6C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006675C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000667D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066844);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061724);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006175C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006179C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00067308);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005EB74);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005EC80);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005ED8C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005EF84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005F3B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005F6E8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005F7E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005F8E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005F9DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005FAE0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005FC90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005FD40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005FF8C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060074);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006007C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A190);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A198);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A1B0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A258);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A354);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A3D8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A474);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A48C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A510);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A5D0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A654);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A6E4);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A744);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A7B0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A81C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A8B8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008A9B4);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008AA50);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008AB4C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008ABC4);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008AC6C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008AD08);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008ADA4);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008AE1C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008AEC4);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008AEE0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008AEF8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008AF1C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008AF3C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000600E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000601B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060254);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060264);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006026C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060274);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006027C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060364);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060438);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060440);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006055C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060BD0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060C84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060CE0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00060DA8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000611BC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061678);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000616EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00061724);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006175C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006179C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000621DC);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B008);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B038);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B058);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062588);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062674);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000626D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006273C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000627A0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062804);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062864);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062974);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000629E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062A4C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062BC8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062C2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062C98);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062D7C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062E78);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00062E94);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006815C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063044);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000630F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000631AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063268);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006332C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063348);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B0C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006343C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063B98);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063C84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063DD8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063DF8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063EB8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063F24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063F90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00063FFC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064068);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064180);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000641EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064258);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000642C4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006433C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000693D0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064460);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006450C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000645C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064684);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064748);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064764);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B148);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064858);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064CD4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064DCC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064DEC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064E68);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064ED4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064F40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00064FAC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065018);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065130);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006519C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065208);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065274);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000652EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065364);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000653C4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065424);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006545C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065494);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B1C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000654D4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000655C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065624);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065688);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000656EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065750);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000658AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000659BC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065BA8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065C14);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065D90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065EC4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065F28);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00065F4C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006609C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066108);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066140);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066178);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B240);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000661B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066820);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066904);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066A00);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066A5C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066AB8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066B14);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066B70);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066BD4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066C38);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066C9C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066CF8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066D5C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066DC0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066E24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066E88);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BD94);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BDF8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BE5C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BE94);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BECC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BF0C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B2E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C340);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C41C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C478);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C4D4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C530);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C58C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C5F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C654);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C6B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C714);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C778);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C7DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C7F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C8D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066EA8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066EFC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00066F50);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006704C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00067148);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006724C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006CE4C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00067404);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00092A08);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B2E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B300);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006D0BC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00067560);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000679B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00067CE0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00067DA4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00067FB0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DBFC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00068044);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00068124);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DDB4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DE64);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00068220);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000682F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006833C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000683B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00068434);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000684B8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006E5D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000688B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00068944);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000689A8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00068ABC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00068CA8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00068D90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00068E1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00068FF0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B358);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B3C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00069018);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000690D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00069160);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000691F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00069258);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000692C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000693B0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000694A0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B3F8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B450);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00069598);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A008);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A104);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B48C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B4A8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A250);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A2FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A360);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A3C4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A428);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A5A4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A720);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A834);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006A840);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006AB4C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006AB88);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006ABE0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006AC38);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B530);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006AC98);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00070D5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B05C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B0CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B130);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B244);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B250);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B460);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B488);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B4C4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B500);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B528);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B550);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B588);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B590);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0003E980);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B5E8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B610);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B638);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0003EA34);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B730);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B7AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B7E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B80C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B834);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B86C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B8D4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B900);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B92C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B974);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B9BC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006B9E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BA0C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BA44);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BAF0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BB18);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BB40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BCD0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052330);
#endif

#if FW_VERSION == 100
void func_00052330(s32 **arg0) {
    *arg0 = &D_00060D70;
}
#endif

#if FW_VERSION == 152
void func_00052330(M2C_UNK **arg0) {
    *arg0 = &D_00060D70;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052340);
#endif

#if FW_VERSION == 100
void func_00052340(s32 **arg0) {
    *arg0 = &D_00060D70;
}
#endif

#if FW_VERSION == 152
void func_00052340(M2C_UNK **arg0) {
    *arg0 = &D_00060D70;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052350);
#endif

#if FW_VERSION == 100
void func_00052350(s32 **arg0) {
    *arg0 = &D_00060D70;
}
#endif

#if FW_VERSION == 152
void func_00052350(M2C_UNK **arg0) {
    *arg0 = &D_00060D70;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052360);
#endif

#if FW_VERSION == 100
void func_00052360(s32 **arg0) {
    *arg0 = &D_00060D70;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BE20);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BE68);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006BEB0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C118);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C270);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C3CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C528);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C5CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C670);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C71C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C750);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C784);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C7B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C7C0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B5A8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B608);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B630);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B640);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B678);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B6B0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060D70);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006C854);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006CC0C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006CCF8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006CDE4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006D0F8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052388);
#endif

#if FW_VERSION == 100
void func_00052388(s32 **arg0) {
    *arg0 = &D_00060D88;
}
#endif

#if FW_VERSION == 152
void func_00052388(M2C_UNK **arg0) {
    *arg0 = &D_00060D88;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052398);
#endif

#if FW_VERSION == 100
void func_00052398(s32 **arg0) {
    *arg0 = &D_00060D88;
}
#endif

#if FW_VERSION == 152
void func_00052398(M2C_UNK **arg0) {
    *arg0 = &D_00060D88;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000523A8);
#endif

#if FW_VERSION == 100
void func_000523A8(s32 **arg0) {
    *arg0 = &D_00060D88;
}
#endif

#if FW_VERSION == 152
void func_000523A8(M2C_UNK **arg0) {
    *arg0 = &D_00060D88;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000523B8);
#endif

#if FW_VERSION == 100
void func_000523B8(s32 **arg0) {
    *arg0 = &D_00060D88;
}
#endif

#if FW_VERSION == 152
void func_000523B8(M2C_UNK **arg0) {
    *arg0 = &D_00060D88;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006D340);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00073244);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006D520);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000523C8);
#endif

#if FW_VERSION == 100
void func_000523C8(s32 **arg0) {
    *arg0 = &D_00060D88;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006D660);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006D67C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006D784);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006D88C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006D998);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DAA4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DB28);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DBAC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DC38);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DC6C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DCA0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DCD4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DE40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DEF0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B6F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006DF90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006E310);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006E3FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006E78C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006E93C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006EAEC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006ECB4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006ED74);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006ED84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006ED98);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006EDB0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006EDC8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006EDE0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006EDF8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006EEA4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006EF50);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006EFC4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F038);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F1D4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F218);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F224);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000523F0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000523F0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052408);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00052408(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052420);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00052420(void) {

}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052428);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00052428(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F240);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F29C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F2B8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B738);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F2D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052430);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052538);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052784);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052868);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052A40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052D08);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052DF8);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052EF0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00052EF0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052EF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F394);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F3BC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F3D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F3E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F3F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F414);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F430);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F44C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F468);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F484);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F4A0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F50C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F528);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F544);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F560);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F57C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F598);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F5B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F5D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F5EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F608);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F6FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F7F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006F91C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006FA48);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006FAF0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006FB98);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0006FC44);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000705D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00070670);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052F7C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00052F7C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052F84);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00052F84(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052F8C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00052F8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052F94);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00052F94(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000706AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00070710);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B770);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B7B0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B7B8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B7F8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B800);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B840);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000707A4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000708E8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00070988);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00070A04);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000768C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076A68);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00070BA0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00070D64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00070F24);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076E70);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000711B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071218);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071278);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000712D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071328);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000770F4);
#endif

#if FW_VERSION == 150 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052F9C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00052F9C(void) {
    return 0;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052FA4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00052FA4(void) {
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052FAC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00052FF4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000532B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00053380);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005340C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005349C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000713DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071410);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071C04);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071C34);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071CD8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071D18);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B860);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000534E0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060CE8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060D20);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060D58);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060D70);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060D88);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060DB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071D58);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071E58);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071EA8);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060DD4);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060DF8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060E20);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060E48);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005354C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000538AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00053B24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00053C04);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00053CB8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054154);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054160);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000542D4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054508);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054600);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054960);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054B18);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00054B18(s32 arg0) {
    func_00052D08(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054B34);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00054B34(s32 arg0) {
    func_00052DF8(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054B50);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00054B50(s32 arg0, s32 arg1) {
    func_00053C04(arg0 - 4, arg1);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058DB8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002D8BC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058E40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002D928);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058E90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058ECC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058EE4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058EFC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002D9C4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002D9D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DA7C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058FF0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005902C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DB38);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000590C4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000590E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000590FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DBE4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005914C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059188);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DC50);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DC5C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DC98);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DCD4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DD6C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DDA8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059320);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005933C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059344);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058744);
#endif

#if FW_VERSION == 152
void func_00058744(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065260;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071F80);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B878);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B880);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077D6C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078098);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00071FC4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000722E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000725BC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00072698);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000784DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000784F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007851C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007855C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007859C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000785C4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000785EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078624);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000786FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078724);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078868);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078890);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000788B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000788E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078938);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078964);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000789E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078A00);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078A68);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078B4C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078C24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078C84);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060EB8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00093028);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00093060);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0009308C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078CE4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078DD0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078EBC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078FD4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079010);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079110);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079120);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079128);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079408);
#endif

#if FW_VERSION == 152
void func_0002D8BC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065260;
    M2C_FIELD(arg0, s32 *, 4) = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
}

void func_000587CC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065260;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}

void func_0002D928(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065260;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005881C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058858);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058870);

s32 func_00058888(s32 arg0) {
    return arg0;
}

s32 func_00058890(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4) > 0;
}

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002D9D0);

s32 func_0002DA7C(void *arg0, u32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 > 0) {
        var_v1 = sceKernelSetEventFlag(temp_v0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005897C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000589B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DB38);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058A50);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058A6C);

void func_00058A88(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065270;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 4));
}

void func_0002DBE4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00065270;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058AD8);

s32 func_00058B14(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00058B1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DC5C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DC98);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DCD4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DD6C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0002DDA8);

void func_00058CA4(u32 arg0) {
    sceKernelDelayThread(arg0);
}

s32 func_00058CC0(void) {
    return -1;
}

void func_00058CC8(void) {
    sceKernelGetThreadId();
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054B6C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054BB4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054BFC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054C50);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054CA4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054CE8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054D2C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054D84);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00054D84(void) {

}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054D8C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054E44);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_000930D8);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060EB8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_000658C8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_000658D8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00065260);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00065270);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00054E84);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000550B8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000550B8(s32 arg0) {
    func_00054CE8(arg0 - 8);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000550D4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000550D4(s32 arg0) {
    func_00054CE8(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000550F0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000550F0(s32 arg0) {
    func_00054D2C(arg0 - 8);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005510C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0005510C(s32 arg0) {
    func_00054D2C(arg0 - 4);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00072E3C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00072E58);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079C40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00072E74);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00072EE0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00072F4C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00072FC8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00073044);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079EB4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079F50);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000730E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007317C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00073220);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00073260);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00073410);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00073418);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A3D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A3F4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A410);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A42C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A448);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A464);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A480);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A488);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A4E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A540);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A5A4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A608);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000730E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007317C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A72C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A750);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A8DC);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00093118);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00093188);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_000931D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A924);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AAD8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000735E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00073600);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007361C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00073638);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00073654);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00073670);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055128);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055128(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055134);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055134(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055140);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055140(void) {

}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055148);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055148(void) {

}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055150);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005526C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B900);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008B970);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060EF0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000553B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055424);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005546C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000554B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055508);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005555C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000555A0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000555E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005563C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059EF4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059898);
#endif

#if FW_VERSION == 100
s32 func_00055700(void) {
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055708);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000557FC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000557FC(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0x28) = 4;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005580C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005585C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000558AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055908);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055964);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000559A8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000559EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055A44);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A348);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059CF0);
#endif

#if FW_VERSION == 100
s32 func_00055B1C(void) {
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055B24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055C18);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055C84);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055C84(s32 arg0) {
    func_000555A0(arg0 - 8);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055CA0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055CA0(s32 arg0) {
    func_000555A0(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055CBC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055CBC(s32 arg0) {
    func_000555E4(arg0 - 8);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055CD8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055CD8(s32 arg0) {
    func_000555E4(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055CF4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055CF4(s32 arg0) {
    func_000559A8(arg0 - 8);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055D10);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055D10(s32 arg0) {
    func_000559A8(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055D2C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055D2C(s32 arg0) {
    func_000559EC(arg0 - 8);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055D48);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00055D48(s32 arg0) {
    func_000559EC(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A5D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A680);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A730);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A7F4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A8B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00074360);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007437C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B894);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00074398);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000743B4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B8D4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00059F78);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A028);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A0D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A19C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A260);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055D64);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055DC8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055E2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055EC4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055F5C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00055FF4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005608C);
#endif

#if FW_VERSION == 100
void func_00056128(void) {
    vshIoDevctl(&D_00061090, 0x01E080D4, 0, 0, 0, 0);
}

void func_00056160(void) {
    vshIoDevctl(&D_00061090, 0x01E000D5, 0, 0, 0, 0);
}

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056198);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005620C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005629C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000562D0);
#endif

#if FW_VERSION == 100
u32 func_000562D0(void *arg0) {
    return (u32) ~M2C_FIELD(arg0, s32 *, 0x8018) >> 0x1F;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000562E8);
#endif

#if FW_VERSION == 100
s32 func_000562E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x801C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000562F8);
#endif

#if FW_VERSION == 100
s32 func_000562F8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x8004);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056308);
#endif

#if FW_VERSION == 100
s32 func_00056308(s32 arg0) {
    return arg0 + 0x800C;
}
#endif

#if FW_VERSION == 152
s32 func_00056308(s32 arg0) {
    return arg0 + 0x2000C;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005AB0C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005ABFC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A4B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005A5A4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00074F2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00074F3C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00074F4C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00074F5C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00074F6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00074F94);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00074FCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056314);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000564A0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060FB8);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00061028);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00061090);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000569C0);

void func_00056A68(void) {
    func_000569C0(1, 0xFFFF);
}

void func_00056A88(void) {
    func_000569C0(0, 0xFFFF);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056AA8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056AA8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000610F0;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    func_00041A6C(arg0 + 8);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056ADC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056ADC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000610F0;
    M2C_FIELD(arg0, s32 *, 4) = -1;
    func_00041A6C(arg0 + 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00075054);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BA88);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BB00);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00065428);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00065448);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_000610E0);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BBC8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007508C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000760B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076140);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007617C);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056B10);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056B38);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056B60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076240);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000762C4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D79C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BC30);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BC58);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007633C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056B9C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056B9C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056BAC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056BAC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076494);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000764B0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000764CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000764E8);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056BBC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056BBC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056BCC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056BCC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076524);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056BDC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056BDC(void) {

}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056BE4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056BE4(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076554);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076678);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056BEC);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056D78);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056D78(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061108;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056D90);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056D90(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061108;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056DA8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00056DA8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061108;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056DC0);
#endif

#if FW_VERSION == 100
void func_00056DC0(s32 **arg0) {
    *arg0 = &D_00061108;
}
#endif

#if FW_VERSION == 152
void func_00056DC0(M2C_UNK **arg0) {
    *arg0 = &D_00061108;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056DD0);
#endif

#if FW_VERSION == 100
void func_00056DD0(s32 **arg0) {
    *arg0 = &D_00061108;
}
#endif

#if FW_VERSION == 152
void func_00056DD0(M2C_UNK **arg0) {
    *arg0 = &D_00061108;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056DE0);
#endif

#if FW_VERSION == 100
void func_00056DE0(s32 **arg0) {
    *arg0 = &D_00061108;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00060FB8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00061028);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00065A90);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00065AB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076838);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076A3C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076B90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076BB0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076BD0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076BF0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076C00);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076C10);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076C38);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076C40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076C48);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076D54);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00076E30);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077098);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000770F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077154);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000771B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000771E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077208);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077244);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077254);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007725C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077264);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007726C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077274);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007727C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077284);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077480);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000775FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077774);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077790);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000777AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000777C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000777D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000777E8);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00093490);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BC58);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00061028);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00093548);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD00);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00061108);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD20);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD30);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077810);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00077DBC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000782F4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000783B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000783D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000783EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078408);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078424);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078434);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078444);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007846C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000787B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000787EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078820);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078848);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078870);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000788AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000788FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007894C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000789C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078A34);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078A5C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078A84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078AC0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078AC8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078AD0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078AD8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078D20);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078D30);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078D40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078D50);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078D58);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078D60);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078EE8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078F00);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078F18);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078F30);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078F40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00078F50);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00061028);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BCF0);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD00);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00061108);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD20);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD30);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD38);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD3C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD48);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD4C);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD58);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD68);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD78);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00065428);

INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00065448);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_000610E0);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_000610F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BD98);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00056E08);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057070);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057070(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061128;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005708C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0005708C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061128;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000570A8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000570A8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061128;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000570C4);
#endif

#if FW_VERSION == 100
void func_000570C4(s32 **arg0) {
    *arg0 = &D_00061128;
}
#endif

#if FW_VERSION == 152
void func_000570C4(M2C_UNK **arg0) {
    *arg0 = &D_00061128;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000570D4);
#endif

#if FW_VERSION == 100
void func_000570D4(s32 **arg0) {
    *arg0 = &D_00061128;
}
#endif

#if FW_VERSION == 152
void func_000570D4(M2C_UNK **arg0) {
    *arg0 = &D_00061128;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000570E4);
#endif

#if FW_VERSION == 100
void func_000570E4(s32 **arg0) {
    *arg0 = &D_00061128;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_0008BDB0);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00061108);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005710C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000574C4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000574C4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061148;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000574E0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000574E0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061148;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000574FC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000574FC(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061148;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057518);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057518(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061148;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057534);
#endif

#if FW_VERSION == 100
void func_00057534(s32 **arg0) {
    *arg0 = &D_00061148;
}
#endif

#if FW_VERSION == 152
void func_00057534(M2C_UNK **arg0) {
    *arg0 = &D_00061148;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057544);
#endif

#if FW_VERSION == 100
void func_00057544(s32 **arg0) {
    *arg0 = &D_00061148;
}
#endif

#if FW_VERSION == 152
void func_00057544(M2C_UNK **arg0) {
    *arg0 = &D_00061148;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057554);
#endif

#if FW_VERSION == 100
void func_00057554(s32 **arg0) {
    *arg0 = &D_00061148;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_0004F644", D_00061128);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005757C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0005797C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0005797C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061158;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057990);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057990(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061158;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000579A4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000579A4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061158;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000579B8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000579B8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061158;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000579CC);
#endif

#if FW_VERSION == 100
void func_000579CC(s32 **arg0) {
    *arg0 = &D_00061158;
}
#endif

#if FW_VERSION == 152
void func_000579CC(M2C_UNK **arg0) {
    *arg0 = &D_00061158;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000579DC);
#endif

#if FW_VERSION == 100
void func_000579DC(s32 **arg0) {
    *arg0 = &D_00061158;
}
#endif

#if FW_VERSION == 152
void func_000579DC(M2C_UNK **arg0) {
    *arg0 = &D_00061158;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000579EC);
#endif

#if FW_VERSION == 100
void func_000579EC(s32 **arg0) {
    *arg0 = &D_00061158;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057A14);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057B04);
#endif

#if FW_VERSION == 100
void func_00057B04(s32 **arg0) {
    *arg0 = &D_00061168;
}
#endif

#if FW_VERSION == 152
void func_00057B04(M2C_UNK **arg0) {
    *arg0 = &D_00061168;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057B14);
#endif

#if FW_VERSION == 100
void func_00057B14(s32 **arg0) {
    *arg0 = &D_00061168;
}
#endif

#if FW_VERSION == 152
void func_00057B14(M2C_UNK **arg0) {
    *arg0 = &D_00061168;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057B24);
#endif

#if FW_VERSION == 100
void func_00057B24(s32 **arg0) {
    *arg0 = &D_00061168;
}
#endif

#if FW_VERSION == 152
void func_00057B24(M2C_UNK **arg0) {
    *arg0 = &D_00061168;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057B34);
#endif

#if FW_VERSION == 100
void func_00057B34(s32 **arg0) {
    *arg0 = &D_00061168;
}
#endif

#if FW_VERSION == 152
void func_00057B34(M2C_UNK **arg0) {
    *arg0 = &D_00061168;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057B44);
#endif

#if FW_VERSION == 100
void func_00057B44(s32 **arg0) {
    *arg0 = &D_00061168;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057B6C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057B6C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061188;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057B80);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057B80(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061188;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057B94);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057B94(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061188;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057BA8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057BA8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00061188;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057BBC);
#endif

#if FW_VERSION == 100
void func_00057BBC(s32 **arg0) {
    *arg0 = &D_00061188;
}
#endif

#if FW_VERSION == 152
void func_00057BBC(M2C_UNK **arg0) {
    *arg0 = &D_00061188;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057BCC);
#endif

#if FW_VERSION == 100
void func_00057BCC(s32 **arg0) {
    *arg0 = &D_00061188;
}
#endif

#if FW_VERSION == 152
void func_00057BCC(M2C_UNK **arg0) {
    *arg0 = &D_00061188;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057BDC);
#endif

#if FW_VERSION == 100
void func_00057BDC(s32 **arg0) {
    *arg0 = &D_00061188;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057C04);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079E68);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079E70);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079E78);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079E80);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079E88);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00079E90);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057D04);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057D44);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057D84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057DC4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057E04);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057E3C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057E74);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057EBC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057EBC(s32 arg0) {
    func_00057E3C(arg0 - 8);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057ED8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057ED8(s32 arg0) {
    func_00057E3C(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057EF4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057EF4(s32 arg0) {
    func_00057E74(arg0 - 8);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057F10);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00057F10(s32 arg0) {
    func_00057E74(arg0 - 4);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057F2C);
#endif

#if FW_VERSION == 100
void func_00057F2C(s32 **arg0) {
    *arg0 = &D_00061208;
}
#endif

#if FW_VERSION == 152
void func_00057F2C(M2C_UNK **arg0) {
    *arg0 = &D_00061208;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057F3C);
#endif

#if FW_VERSION == 100
void func_00057F3C(s32 **arg0) {
    *arg0 = &D_00061208;
}
#endif

#if FW_VERSION == 152
void func_00057F3C(M2C_UNK **arg0) {
    *arg0 = &D_00061208;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057F4C);
#endif

#if FW_VERSION == 100
void func_00057F4C(s32 **arg0) {
    *arg0 = &D_00061208;
}
#endif

#if FW_VERSION == 152
void func_00057F4C(M2C_UNK **arg0) {
    *arg0 = &D_00061208;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057F5C);
#endif

#if FW_VERSION == 100
void func_00057F5C(s32 **arg0) {
    *arg0 = &D_00061208;
}
#endif

#if FW_VERSION == 152
void func_00057F5C(M2C_UNK **arg0) {
    *arg0 = &D_00061208;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057F6C);
#endif

#if FW_VERSION == 100
void func_00057F6C(s32 **arg0) {
    *arg0 = &D_00061208;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A11C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A14C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A17C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A1AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A1DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A228);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057F94);
#endif

#if FW_VERSION == 100
void func_00057F94(s32 **arg0) {
    *arg0 = &D_00061220;
}
#endif

#if FW_VERSION == 152
void func_00057F94(M2C_UNK **arg0) {
    *arg0 = &D_00061220;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A2D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A430);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A6F4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A6FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A734);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A76C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A7A4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A7DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A828);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A8D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007A8D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AA38);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AB64);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AB6C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AC88);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007ACD8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AD68);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007ADA8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007ADD0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007ADF8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AE30);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AE38);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AE40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AE48);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057FA4);
#endif

#if FW_VERSION == 100
void func_00057FA4(s32 **arg0) {
    *arg0 = &D_00061220;
}
#endif

#if FW_VERSION == 152
void func_00057FA4(M2C_UNK **arg0) {
    *arg0 = &D_00061220;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AE60);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AE90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AEC0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AEE8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AF10);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007AF48);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B090);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B0D4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057FB4);
#endif

#if FW_VERSION == 100
void func_00057FB4(s32 **arg0) {
    *arg0 = &D_00061220;
}
#endif

#if FW_VERSION == 152
void func_00057FB4(M2C_UNK **arg0) {
    *arg0 = &D_00061220;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057FC4);
#endif

#if FW_VERSION == 100
void func_00057FC4(s32 **arg0) {
    *arg0 = &D_00061220;
}
#endif

#if FW_VERSION == 152
void func_00057FC4(M2C_UNK **arg0) {
    *arg0 = &D_00061220;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00057FD4);
#endif

#if FW_VERSION == 100
void func_00057FD4(s32 **arg0) {
    *arg0 = &D_00061220;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B160);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B168);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B178);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B180);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B188);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B1A0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B1B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B1C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B1D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B200);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B3C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B5CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B60C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B64C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B674);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B69C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B6D4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B6E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B6E8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B718);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B748);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B770);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B798);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B7D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B974);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B99C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B9BC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B9DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B9EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007B9FC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BA24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BA2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BA3C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BA44);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BA4C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BA64);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BA7C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BA8C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BA9C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BAC4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BC90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BCE4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BD3C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BD94);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BDF4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BDFC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BE04);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BE0C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BE14);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BE1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BE24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BE54);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BE84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BEAC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BED4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007BF0C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C034);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C06C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C0A4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C0CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C0F4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C12C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C15C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C18C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C1B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C1DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C214);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C260);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C298);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C2D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C2F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C320);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C358);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C360);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C390);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C3C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C3E8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C410);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C448);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C528);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C568);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C590);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C5B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C5F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C5F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C600);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C630);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C660);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C688);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C6B0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C6E8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C7EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C838);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C860);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C888);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C8C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C8C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C8D0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C8D8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C8E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C910);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C940);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C968);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C990);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007C9C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CB44);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CB84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CBC4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CBEC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CC14);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CC4C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CC54);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CC5C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CC8C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CCBC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CCE4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CD0C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CD44);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CE60);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CEB8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CEE0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CF08);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CF40);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CF48);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CF50);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CF58);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CF60);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CF68);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CF98);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CFC8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007CFF0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D018);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D050);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D1B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D1F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D218);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D240);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D278);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D280);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D2B0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D2E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D308);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D330);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D368);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D440);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D478);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D4A0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D4C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D500);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D508);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D538);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D568);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D590);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D5B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D5F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D6C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D700);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D728);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D750);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D788);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D790);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D7C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D7F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D818);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D840);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D878);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D8DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D938);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D994);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D9BC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007D9E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DA1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DA24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DA2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DA34);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DA3C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DA44);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DA74);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DAA4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DACC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DAF4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DB2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DD00);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DE18);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DE2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DE90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DEF4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DF58);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DF90);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DFC8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007DFF0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E018);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E050);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E058);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E088);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E0B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E0E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E108);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E140);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E2B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E2EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E314);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E33C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E374);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E37C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E3AC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E3DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E404);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E42C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E464);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E568);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E5CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E5DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E5EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E614);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E720);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E73C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E9C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007E9C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007EB04);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007EB24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F040);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F074);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F07C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F1C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F20C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F234);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F25C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F294);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F29C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F2A4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F2D4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F304);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F32C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F354);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F38C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F4B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F5E4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F630);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F658);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F680);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F6B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F6C0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F6C8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F6F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F728);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F750);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F778);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F7B0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F900);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007F9EC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FAD8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FC10);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FC5C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FC84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FCAC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FCE4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FCEC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FCF4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FD50);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FDAC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FDE8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FE24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FE68);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0007FF78);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080094);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000800E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080108);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080130);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080168);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080170);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080178);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080180);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000801B0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000801E0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080208);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080230);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080268);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000803DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0008051C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080568);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080590);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000805B8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000805F0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000805F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080600);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080630);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080660);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080688);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000806B0);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000806E8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080814);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000808F4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080A2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080A84);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080AAC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080AD4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080B0C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080B14);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080B1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080B24);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080B2C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080B34);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080BC4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080BF4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080C1C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080C44);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080C7C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080F80);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080FBC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00080FE4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0008100C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00081044);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0008104C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00081080);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000810B4);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000810DC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00081104);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_0008113C);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000811CC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000812F8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00081460);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00001698);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_000018A8);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00001984);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00001ABC);

INCLUDE_ASM("nonmatchings/music_plugin_0004F644", func_00001B10);
#endif
