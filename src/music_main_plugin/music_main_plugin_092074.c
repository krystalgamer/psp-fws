/* lang: c++ */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092074);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 350)
void func_00092074(M2C_UNK **arg0) {
    *arg0 = &D_000A2988;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_000A2968);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0009209C);

void func_000924A0(struct Unk_func_000924A0_0 *arg0) {
    arg0->unk0 = &D_000A2998;
    arg0->unk4 = 0;
}

void func_000924B4(struct Unk_func_000924B4_0 *arg0) {
    arg0->unk0 = &D_000A2998;
    arg0->unk4 = 0;
}

void func_000924C8(struct Unk_func_000924C8_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000A2998;
    arg0->unk4 = arg1;
}

void func_000924DC(struct Unk_func_000924DC_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000A2998;
    arg0->unk4 = arg1;
}

void func_000924F0(M2C_UNK **arg0) {
    *arg0 = &D_000A2998;
}

void func_00092500(M2C_UNK **arg0) {
    *arg0 = &D_000A2998;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092510);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 350)
void func_00092510(M2C_UNK **arg0) {
    *arg0 = &D_000A2998;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092538);

void func_00092624(M2C_UNK **arg0) {
    *arg0 = &D_000A29A8;
}

void func_00092634(M2C_UNK **arg0) {
    *arg0 = &D_000A29A8;
}

void func_00092644(M2C_UNK **arg0) {
    *arg0 = &D_000A29A8;
}

void func_00092654(M2C_UNK **arg0) {
    *arg0 = &D_000A29A8;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092664);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 350)
void func_00092664(M2C_UNK **arg0) {
    *arg0 = &D_000A29A8;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION != 271
void func_0009268C(struct Unk_func_0009268C_0 *arg0) {
    arg0->unk0 = &D_000A29C8;
    arg0->unk4 = 0;
}

void func_000926A0(struct Unk_func_000926A0_0 *arg0) {
    arg0->unk0 = &D_000A29C8;
    arg0->unk4 = 0;
}

void func_000926B4(struct Unk_func_000926B4_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000A29C8;
    arg0->unk4 = arg1;
}

void func_000926C8(struct Unk_func_000926C8_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000A29C8;
    arg0->unk4 = arg1;
}

void func_000926DC(M2C_UNK **arg0) {
    *arg0 = &D_000A29C8;
}

void func_000926EC(M2C_UNK **arg0) {
    *arg0 = &D_000A29C8;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000926FC);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 350)
void func_000926FC(M2C_UNK **arg0) {
    *arg0 = &D_000A29C8;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092724);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008461C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084624);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084048);
#endif

#if FW_VERSION == 271
void func_00084048(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084634);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008463C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084644);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000848E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000848F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084904);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084914);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084924);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008494C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008497C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000849AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000843A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084A0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084A58);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084B00);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084B08);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084CCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084FDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084FE4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008501C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085054);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000849BC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008357C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000850C4_v260);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085110);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000851B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000851C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008538C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000854F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000854FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085650);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00083B5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00083D0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00083E64);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085378);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008411C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000841C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084264);

s32 func_000856C8(struct Unk_func_000856C8_0 *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk14;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 8)(temp_v1);
    }
    return var_v0;
}

s32 func_000856FC(struct Unk_func_000856FC_0 *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = arg0->unk14;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0xC)(temp_v1);
    }
    return var_v0;
}

s32 func_00085730(struct Unk_func_00085730_0 *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = 0;
    temp_v1 = arg0->unk14;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x18)(temp_v1);
    }
    return var_v0;
}

s32 func_00085764(struct Unk_func_00085764_0 *arg0) {
    return arg0->unk14;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000843B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000857E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084824);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084948);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084A6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084D8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084FDC_v271);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00084FE4_v271);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009ECD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097CA8);

__asm__(".globl _ZTV14Class_00097CA8\n_ZTV14Class_00097CA8 = D_00097CA8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097CB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009ED28);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097CF0);

__asm__(".globl _ZTV14Class_00097CF0\n_ZTV14Class_00097CF0 = D_00097CF0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097D00);

__asm__(".globl _ZTV14Class_00097D00\n_ZTV14Class_00097D00 = D_00097D00 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097D10);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097D20);

__asm__(".globl _ZTV14Class_00097D20\n_ZTV14Class_00097D20 = D_00097D20 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097D30);

__asm__(".globl _ZTV14Class_00097D30\n_ZTV14Class_00097D30 = D_00097D30 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097D48);

__asm__(".globl _ZTV14Class_00097D48\n_ZTV14Class_00097D48 = D_00097D48 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097D58);

__asm__(".globl _ZTV14Class_00097D58\n_ZTV14Class_00097D58 = D_00097D58 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097D70);

__asm__(".globl _ZTV14Class_00097D70\n_ZTV14Class_00097D70 = D_00097D70 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097D80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097D98);

__asm__(".globl _ZTV14Class_00097D98\n_ZTV14Class_00097D98 = D_00097D98 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097DA8);

__asm__(".globl _ZTV14Class_00097DA8\n_ZTV14Class_00097DA8 = D_00097DA8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097DB8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097DC8);

__asm__(".globl _ZTV14Class_00097DC8\n_ZTV14Class_00097DC8 = D_00097DC8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097DD8);

__asm__(".globl _ZTV14Class_00097DD8\n_ZTV14Class_00097DD8 = D_00097DD8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097DE8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097DF8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097E08);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097E20);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097E30);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097E48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097E58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097E68);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097E70);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097E80);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097E90);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097EA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097EB0);

__asm__(".globl _ZTV14Class_00097EB0\n_ZTV14Class_00097EB0 = D_00097EB0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097EC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097ED0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097EE0);

__asm__(".globl _ZTV14Class_00097EE0\n_ZTV14Class_00097EE0 = D_00097EE0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097EF0);

__asm__(".globl _ZTV14Class_00097EF0\n_ZTV14Class_00097EF0 = D_00097EF0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097F00);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097F10);

__asm__(".globl _ZTV14Class_00097F10\n_ZTV14Class_00097F10 = D_00097F10 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097F20);

__asm__(".globl _ZTV14Class_00097F20\n_ZTV14Class_00097F20 = D_00097F20 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097F30);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097F38);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097F48);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097F58);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097F78);

__asm__(".globl _ZTV14Class_00097F78\n_ZTV14Class_00097F78 = D_00097F78 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097F88);

__asm__(".globl _ZTV14Class_00097F88\n_ZTV14Class_00097F88 = D_00097F88 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097F98);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097FA0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097FB0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_00097FC0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F030);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F038);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F03C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F048);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F058);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F068);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F070);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F07C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F080);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F084);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F088);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F0AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F0B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F0B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F0B8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F0BC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F0C8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F0D8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F0E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F0F8);

__asm__(".globl _ZTV14Class_0009F0F8\n_ZTV14Class_0009F0F8 = D_0009F0F8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F108);

__asm__(".globl _ZTV14Class_0009F108\n_ZTV14Class_0009F108 = D_0009F108 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000864C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000852C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008540C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085428);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000856A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008672C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085780);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086794);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000857D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085808);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085810);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085818);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085820);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086814);
#endif

#if FW_VERSION == 271
s32 func_00086814(s32 arg0, s32 *arg1) {
    *arg1 = 2;
    return arg0 + 0x1C;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085838);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085868);

Class_00097CA8::~Class_00097CA8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085920);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085A84);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085AC8);

Class_00097D00::~Class_00097D00() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086B24);
#endif

#if FW_VERSION == 271
void func_00086B24(struct Unk_func_00086B24_0 *arg0) {
    arg0->unk14 = 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085B5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085B6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085B74);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085B7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085B94);

Class_00097CF0::~Class_00097CF0() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085BF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00085DD8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086024);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086064);

Class_00097D30::~Class_00097D30() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008612C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086138);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086140);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086170);

Class_00097D20::~Class_00097D20() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086228);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000863F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086418);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086438);

Class_00097D58::~Class_00097D58() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000873FC);
#endif

#if FW_VERSION == 271
void func_000873FC(struct Unk_func_000873FC_0 *arg0) {
    arg0->unk14 = 0;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087404);
#endif

#if FW_VERSION == 271
s32 func_00087404(struct Unk_func_00087404_0 *arg0) {
    return arg0->unk14 == 1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000864B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000864C0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086204);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000864C8_v260);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000864E0);

Class_00097D48::~Class_00097D48() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086540);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008766C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086788);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087718);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086838);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086898);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000868A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000868A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000868B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000868B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000868C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000868C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000868F8);

Class_00097D70::~Class_00097D70() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000869B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086AFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086B34);

Class_00097DA8::~Class_00097DA8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086BF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086C24);

Class_00097D98::~Class_00097D98() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086CDC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086D34);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086D6C);

Class_00097DD8::~Class_00097DD8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086E2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086E34);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086E64);

Class_00097DC8::~Class_00097DC8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086F1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087010);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087050);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087078);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000870A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000870D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000870E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000870E8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00086E54);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087118_v260);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087148);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087170);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087198);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000871D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087300);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008734C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087374);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008739C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087110);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000873D4_v260);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000873DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000873E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000873EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000873F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087424);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087454);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008747C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000874A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000874DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088538);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000876B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000885B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087720);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087748);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087780);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087788);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088650);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000877C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000886B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087818);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087840);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087878);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088D18);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087A0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088D98);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087A5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087A94);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087A9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087AA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087AAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087AB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087ABC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088E50);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087B1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088EA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087B6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087BA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087D44);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087D7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087DA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087DCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087E04);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087E0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087E3C);

Class_00097EB0::~Class_00097EB0() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087EF4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00087FE0);

Class_00097EF0::~Class_00097EF0() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000880A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000880A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000880D8);

Class_00097EE0::~Class_00097EE0() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088190);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008827C);

Class_00097F20::~Class_00097F20() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008833C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088344);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088374);

Class_00097F10::~Class_00097F10() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008842C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008849C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000884F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088554);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008857C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000885A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000885DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000885E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000885EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000885F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000885FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088604);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088634);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088664);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008868C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000886B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000886EC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000888EC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088A04);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088A18);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088A7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088AE0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008876C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088B44);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088B7C);

Class_00097F88::~Class_00097F88() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088C3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088C44);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088C74);

Class_00097F78::~Class_00097F78() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088D2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A19C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088F1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A1FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088F6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088FA4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088FAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A294);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008900C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A2EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008905C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089094);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088ED4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088F20);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088F48);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088F70);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088FA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088FB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00088FB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089014);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089070);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000890AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000890E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008912C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089260);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089398);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000893F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089418);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089440);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089478);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089480);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089488);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089490);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089498);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000894A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089530);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089560);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089588);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000895B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000895E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089924);

Class_0009F108::~Class_0009F108() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000899E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000899F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089A20);

Class_0009F0F8::~Class_0009F0F8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089AD8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089B70);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089D24);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00089E18);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C2A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A070);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A118);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A1C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C5D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A8AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A8B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A8CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008A8D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CFCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D064);

s32 func_0008D098(struct Unk_func_0008D098_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008AF58);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008AFBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D17C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D2C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008B258);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008B2E8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008B4B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008B6A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008B8A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F130);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F138);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F13C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F168);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DB58);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008BCC4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008BD24);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DDBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008BEFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C014);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C050);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C150);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C160);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C168);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C170);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F1B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C450);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C6D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C720);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E71C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C7C0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C804);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C848);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C8A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C8A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C95C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008C99C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F200);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F270);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F2B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CBD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CBEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CC08);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CC24);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CC40);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CC5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CC78);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CC80);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CCF8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CD70);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008EDB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CE78);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CF14);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008CFB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D054);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D0A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D324);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D32C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D51C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D538);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D554);

void func_0008D570(s32 arg0) {
    func_0008CFB0(arg0 - 4);
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D58C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D5A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D5C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D5CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D634);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D69C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0007EA6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D75C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D7B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D814);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D880);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008D8A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DA90);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DAD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F338);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DC8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DC94);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DCB0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DCCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DCE8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DD04);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DD20);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DD3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DD48);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DD54);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DD5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DD64);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DE80);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008DFE0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F408);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F480);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F4F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F510);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F538);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F548);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E050);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E098);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E0E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090128);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E180);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E1C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E208);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E260);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E320);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E360);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E454);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E464);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E4B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E504);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090554);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E5B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E5F8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E63C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E694);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E76C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E7B4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E8A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E914);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E930);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E94C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E968);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E984);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E9A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E9BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E9D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008E9F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008EA10);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008EA2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008EA34);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008EA50);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008EA6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008EA74);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090B1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008EBD4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090C90);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008ED5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090DB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008EE1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090E78);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090F10);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090F60);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090F78);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008EF90);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090F98);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090FA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000910AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F688);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F6BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F6F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F718);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F740);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F77C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F78C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F79C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F7AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F7BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F7C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F7CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F994);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F9AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008F9C4);

Class_0009F560::~Class_0009F560() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008FA24);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F560);

__asm__(".globl _ZTV14Class_0009F560\n_ZTV14Class_0009F560 = D_0009F560 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008FC3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008FC58);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008FC74);

Class_0009F580::~Class_0009F580() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0008FCD8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_092074", D_0009F580);

__asm__(".globl _ZTV14Class_0009F580\n_ZTV14Class_0009F580 = D_0009F580 - 8\n");

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090100);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0009011C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090138);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090154);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090170);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092064);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092074);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000901B8);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090600);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090614);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090628);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0009063C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090650);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092500);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092510);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090698);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0009079C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000907AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000907BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000907CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000907DC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090804);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090818);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0009082C);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090840);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00090854);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000926EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_000926FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_0009089C);
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092884);

void func_000928E8(M2C_UNK **arg0) {
    *arg0 = &D_000A29D8;
}

void func_000928F8(M2C_UNK **arg0) {
    *arg0 = &D_000A29D8;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092908);
#else
void func_00092908(M2C_UNK **arg0) {
    *arg0 = &D_000A29D8;
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/music_main_plugin_092074", func_00092930);
