/* lang: c++ */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00089BF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00089C54);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00089CB8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00089D1C);

void func_00089E34(struct Unk_func_00086A54_0 *arg0, s32 arg1) {
    func_00086A54(arg0, arg1);
    M2C_FIELD(arg0, s32 **, 0) = &D_000A2338;
    arg0->unk18 = 0;
    arg0->unk1C = 0;
}

void func_00089E6C(struct Unk_func_00089E6C_0 *arg0, s32 arg1) {
    func_00086A54((Unk_func_00086A54_0*) arg0, arg1);
    arg0->unk0 = &D_000A2338;
    arg0->unk18 = 0;
    arg0->unk1C = 0;
}

Class_000A2338::~Class_000A2338() {
}

u16 func_00089F2C(struct Unk_func_00089F2C_0 *arg0) {
    return arg0->unk18;
}

void func_00089F34(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2328;
}

void func_00089F64(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2328;
}

Class_000A2328::~Class_000A2328() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A01C);

void func_0008A19C(M2C_UNK **arg0) {
    func_00086A54((Unk_func_00086A54_0*) arg0, (s32) &D_000A2350);
    *arg0 = &D_000A2370;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A1D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A1FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A224);

s32 func_0008A25C(struct Unk_func_0008A25C_0 *arg0) {
    return arg0->unk10;
}

void func_0008A264(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2360;
}

void func_0008A294(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2360;
}

void func_0008A2C4(s32 **arg0) {
    *arg0 = &D_000A2360;
    _ZN14Class_000A2078D2Ev(arg0);
}

void func_0008A2EC(s32 **arg0) {
    *arg0 = &D_000A2360;
    _ZN14Class_000A2078D2Ev(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A314);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0008A314(s32 **arg0) {
    *arg0 = &D_000A2360;
    _ZN14Class_000A2078D2Ev(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A34C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A434);

Class_000A2A08::~Class_000A2A08() {
}

s32 func_0008A504(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A50C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A528);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A558);

Class_000A29F8::~Class_000A29F8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A610);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008A998);

Class_000A2A40::~Class_000A2A40() {
}

s32 func_0008AA6C(Class_000A2A40 *arg0) {
    return arg0->unk24;
}

s32 func_0008AA74(struct Unk_func_0008AA74_0 *arg0) {
    return arg0->unk20;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008AA7C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008AAD8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008AB34);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008AB70);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008ABAC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008ABF0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008AD08);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008AE34);

Class_00098078::~Class_00098078() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008AEB4);
#endif

#if FW_VERSION >= 282
s32 func_0008AF14(void) {
    return 0;
}

s32 func_0008AF1C(struct Unk_func_0008AF1C_0 *arg0) {
    return arg0->unk20;
}

s32 func_0008AF24(struct Unk_func_0008AF24_0 *arg0) {
    return arg0->unk24;
}

s32 func_0008AF2C(struct Unk_func_0008AF2C_0 *arg0) {
    return arg0->unk28;
}

s32 func_0008AF34(struct Unk_func_0008AF34_0 *arg0) {
    return arg0->unk2C;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008AF3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008AFCC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008AFFC);
#endif

#if FW_VERSION >= 282
Class_000A2A30::~Class_000A2A30() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B024);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B084);

void func_0008B390(struct Unk_func_0008B390_0 *arg0) {
    func_00086A54((Unk_func_00086A54_0*) arg0, (s32) &D_000A2470);
    arg0->unk0 = &D_000A2490;
    arg0->unk18 = 0;
}

Class_000A2490::~Class_000A2490() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B3CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B3F4);
#endif

#if FW_VERSION >= 282
s32 func_0008B454(Class_000A2490 *arg0) {
    return arg0->unk10;
}

void func_0008B45C(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2480;
}

void func_0008B48C(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2480;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B4BC);
#endif

#if FW_VERSION >= 282
Class_000A2480::~Class_000A2480() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000784BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B4E4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B544);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B5D4);

void func_0008B6B8(M2C_UNK **arg0) {
    func_00086A54((Unk_func_00086A54_0*) arg0, (s32) &D_000A24A0);
    *arg0 = &D_000A24C0;
}

Class_000A24C0::~Class_000A24C0() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B6F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B718);
#endif

#if FW_VERSION >= 282
void func_0008B778(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A24B0;
}

void func_0008B7A8(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A24B0;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B7D8);
#endif

#if FW_VERSION >= 282
Class_000A24B0::~Class_000A24B0() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B800);
#endif

#if FW_VERSION >= 282
s32 func_0008B860(Class_000A24C0 *arg0) {
    return arg0->unk10;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B868);

void func_0008B908(struct Unk_func_0008B908_0 *arg0) {
    func_00086A54((Unk_func_00086A54_0*) arg0, (s32) &D_000A24D0);
    arg0->unk0 = &D_000A24F0;
    arg0->unk18 = 0;
}

void func_0008B944(struct Unk_func_0008B944_0 *arg0) {
    func_00086A54((Unk_func_00086A54_0*) arg0, (s32) &D_000A24D0);
    arg0->unk0 = &D_000A24F0;
    arg0->unk18 = 0;
}

Class_000A24F0::~Class_000A24F0() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B980);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008B9A8);
#endif

#if FW_VERSION >= 282
s32 func_0008BA08(Class_000A24F0 *arg0) {
    return arg0->unk10 + 0x10;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008BA14);

void func_0008BA44(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A24E0;
}

Class_000A24E0::~Class_000A24E0() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008BA74);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008BA9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00078624);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008BAFC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008BB8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008BD64);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008C088);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008C17C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008C2A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008C3D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008C47C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008C524);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008C5D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008CFCC);

s32 func_0008D064(struct Unk_func_0008D064_0 *arg0) {
    s32 var_v0;
    struct Unk_vt_func_0008D064_temp_v1 **temp_v1;

    var_v0 = 0;
    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        var_v0 = (*temp_v1)->unk18(temp_v1);
    }
    return var_v0;
}

s32 func_0008D098(struct Unk_func_0008D098_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008D0A0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008D104);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2000);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2030);

__asm__(".globl _ZTV14Class_000A2030\n_ZTV14Class_000A2030 = D_000A2030 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2040);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2050);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2078);

__asm__(".globl _ZTV14Class_000A2078\n_ZTV14Class_000A2078 = D_000A2078 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2088);

__asm__(".globl _ZTV14Class_000A2088\n_ZTV14Class_000A2088 = D_000A2088 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2098);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A20A8);

__asm__(".globl _ZTV14Class_000A20A8\n_ZTV14Class_000A20A8 = D_000A20A8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A20B8);

__asm__(".globl _ZTV14Class_000A20B8\n_ZTV14Class_000A20B8 = D_000A20B8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A20D0);

__asm__(".globl _ZTV14Class_000A20D0\n_ZTV14Class_000A20D0 = D_000A20D0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A20E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A20F8);

__asm__(".globl _ZTV14Class_000A20F8\n_ZTV14Class_000A20F8 = D_000A20F8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2108);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2120);

__asm__(".globl _ZTV14Class_000A2120\n_ZTV14Class_000A2120 = D_000A2120 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2130);

__asm__(".globl _ZTV14Class_000A2130\n_ZTV14Class_000A2130 = D_000A2130 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2140);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2150);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2160);

__asm__(".globl _ZTV14Class_000A2160\n_ZTV14Class_000A2160 = D_000A2160 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2170);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2180);

__asm__(".globl _ZTV14Class_00097DF8\n_ZTV14Class_00097DF8 = D_000A2180 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2190);

__asm__(".globl _ZTV14Class_00097E08\n_ZTV14Class_00097E08 = D_000A2190 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A21A8);

__asm__(".globl _ZTV14Class_000A21A8\n_ZTV14Class_000A21A8 = D_000A21A8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A21B8);

__asm__(".globl _ZTV14Class_000A21B8\n_ZTV14Class_000A21B8 = D_000A21B8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A21D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A21E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A21F8);

__asm__(".globl _ZTV14Class_000A21F8\n_ZTV14Class_000A21F8 = D_000A21F8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2208);

__asm__(".globl _ZTV14Class_000A2208\n_ZTV14Class_000A2208 = D_000A2208 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2218);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2220);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2230);

__asm__(".globl _ZTV14Class_00097E80\n_ZTV14Class_00097E80 = D_000A2230 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2240);

__asm__(".globl _ZTV14Class_00097E90\n_ZTV14Class_00097E90 = D_000A2240 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2250);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2260);

__asm__(".globl _ZTV14Class_000A2260\n_ZTV14Class_000A2260 = D_000A2260 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2270);

__asm__(".globl _ZTV14Class_000A2270\n_ZTV14Class_000A2270 = D_000A2270 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2280);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2290);

__asm__(".globl _ZTV14Class_000A2290\n_ZTV14Class_000A2290 = D_000A2290 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A22A0);

__asm__(".globl _ZTV14Class_000A22A0\n_ZTV14Class_000A22A0 = D_000A22A0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A22B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A22C0);

__asm__(".globl _ZTV14Class_000A22C0\n_ZTV14Class_000A22C0 = D_000A22C0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A22D0);

__asm__(".globl _ZTV14Class_000A22D0\n_ZTV14Class_000A22D0 = D_000A22D0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A22E0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A22E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A22F8);

__asm__(".globl _ZTV14Class_00097F48\n_ZTV14Class_00097F48 = D_000A22F8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2308);

__asm__(".globl _ZTV14Class_00097F58\n_ZTV14Class_00097F58 = D_000A2308 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2328);

__asm__(".globl _ZTV14Class_000A2328\n_ZTV14Class_000A2328 = D_000A2328 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2338);

__asm__(".globl _ZTV14Class_000A2338\n_ZTV14Class_000A2338 = D_000A2338 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2348);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2350);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2360);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2370);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2388);

__asm__(".globl _ZTV14Class_000A29F8\n_ZTV14Class_000A29F8 = D_000A2388 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2398);

__asm__(".globl _ZTV14Class_000A2A08\n_ZTV14Class_000A2A08 = D_000A2398 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A23A8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A23AC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A23B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A23B4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A23BC);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000BBA60);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000BBA64);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A23C0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A23D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A23E0);

__asm__(".globl _ZTV14Class_000A2A40\n_ZTV14Class_000A2A40 = D_000A23E0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A23F0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A23F8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2404);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2408);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A240C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2410);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2434);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2438);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000974D0);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A243C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_00097518);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2440);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2444);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2450);

__asm__(".globl _ZTV14Class_000A2A30\n_ZTV14Class_000A2A30 = D_000A2450 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2460);

__asm__(".globl _ZTV14Class_00098078\n_ZTV14Class_00098078 = D_000A2460 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2470);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2480);

__asm__(".globl _ZTV14Class_000A2480\n_ZTV14Class_000A2480 = D_000A2480 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2490);

__asm__(".globl _ZTV14Class_000A2490\n_ZTV14Class_000A2490 = D_000A2490 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A24A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A24B0);

__asm__(".globl _ZTV14Class_000A24B0\n_ZTV14Class_000A24B0 = D_000A24B0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A24C0);

__asm__(".globl _ZTV14Class_000A24C0\n_ZTV14Class_000A24C0 = D_000A24C0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A24D0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A24E0);

__asm__(".globl _ZTV14Class_000A24E0\n_ZTV14Class_000A24E0 = D_000A24E0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A24F0);

__asm__(".globl _ZTV14Class_000A24F0\n_ZTV14Class_000A24F0 = D_000A24F0 - 8\n");
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008D17C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008D2C4);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008D36C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008D3F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008D570);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008D71C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008D8C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008DB58);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007A6AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007A70C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007A764);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007A7BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007A818);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007A8E0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007A914);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B2E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B314);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B3D4);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B420);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008DC70);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2518);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2520);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B46C);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_00097590);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_00097598);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B580);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B5D0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B620);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B648);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B670);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B6A8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007B6EC);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000975D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007BA64);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007BBD8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007BCEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007BF28);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007BF30);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007BF8C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007BF94);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007BF9C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007BFA4);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_00097638);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_00097670);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_00097684);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C030);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C04C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C070);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C0B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C0F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C118);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C140);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C178);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C26C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C4C8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C4F4);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C574);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C590);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C6BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007C95C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007CD0C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007CD84);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007CE6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007CF1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007CF60);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007CF88);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007CFB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007D014);
#endif

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2524);
#endif

#if FW_VERSION == 260 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2550);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008DCD0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008DDBC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008DEA8);

s32 func_0008DFC0(struct Unk_func_0008DFC0_0 *arg0) {
    s32 var_a0;

    var_a0 = 0;
    if (func_000535DC((u8 *)arg0 + 0x24) != 0) {
        var_a0 = arg0->unk8 != 0;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008DFFC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000A3A44);
#endif

#if FW_VERSION != 271
u32 func_0008E0FC(struct Unk_func_0008E0FC_0 *arg0) {
    return (u32) ~arg0->unkC >> 0x1F;
}

s32 func_0008E10C(struct Unk_func_0008E10C_0 *arg0) {
    return arg0->unk20;
}

void func_0008E114(struct Unk_func_0008E114_0 *arg0, s32 arg1) {
    arg0->unk20 = arg1;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E11C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E3FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E684);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E6CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E71C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E76C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E7B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E7F4);

void func_0008E84C(void) {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E854);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E908);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A25A0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000A42A0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A25E8);
#endif

#if FW_VERSION == 260 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008E948);
#endif

#if FW_VERSION != 271
void func_0008EB7C(s32 arg0) {
    func_0008E7B0(arg0 - 8);
}

void func_0008EB98(s32 arg0) {
    func_0008E7B0(arg0 - 4);
}

void func_0008EBB4(s32 arg0) {
    func_0008E7F4(arg0 - 8);
}

void func_0008EBD0(s32 arg0) {
    func_0008E7F4(arg0 - 4);
}

void func_0008EBEC(s32 arg0) {
    func_000505F8(arg0 + 8);
}

void func_0008EC08(s32 arg0) {
    func_0008EBEC(arg0 - 8);
}

s32 func_0008EC24(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008EC2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008ECAC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000A46D4);
#endif

#if FW_VERSION == 260 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008ED2C);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008EDB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008EE3C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008EEEC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008EF9C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000A5070);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F054);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F094);

s32 func_0008F270(void) {
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000A5AB0);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000A52C4);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000BAC08);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000A59E4);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 310)
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F278);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A26A0);
#endif

#if FW_VERSION != 271
void func_0008F4F4(s32 arg0) {
    func_0008EEEC(arg0 - 8);
}

void func_0008F510(s32 arg0) {
    func_0008EEEC(arg0 - 4);
}

void func_0008F52C(s32 arg0) {
    func_0008EF9C(arg0 - 8);
}

void func_0008F548(s32 arg0) {
    func_0008EF9C(arg0 - 4);
}

void func_0008F564(s32 arg0) {
    func_000505F8(arg0 + 8);
}

void func_0008F580(s32 arg0) {
    func_0008F564(arg0 - 8);
}

s32 func_0008F59C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F5A4);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F610);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007EA08);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007EA6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0007EAD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F67C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F6EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F75C);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F7D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F854);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F8D8);
#endif

#if FW_VERSION == 260 || (FW_VERSION >= 282 && FW_VERSION < 350)
void func_0008F8D8(s32 arg0, s32 arg1, s32 arg2) {
    sce_paf_private_memcpy(arg0 + 0x10100, arg1, arg2);
}
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008F8FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008FA88);
#endif

#if FW_VERSION == 260 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A25E8);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2658);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A26A0);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008FAD0);

s32 func_0008FC84(void) {
    return 0;
}

void func_0008FC8C(s32 arg0) {
    func_0008F7D8(arg0 - 8);
}

void func_0008FCA8(s32 arg0) {
    func_0008F7D8(arg0 - 4);
}

void func_0008FCC4(s32 arg0) {
    func_0008F854(arg0 - 8);
}

void func_0008FCE0(s32 arg0) {
    func_0008F854(arg0 - 4);
}

void func_0008FCFC(s32 arg0) {
    func_000505F8(arg0 + 8);
}

void func_0008FD18(s32 arg0) {
    func_0008FCFC(arg0 - 8);
}

void func_0008FD34(struct Unk_func_0008FD34_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
}

void func_0008FD40(struct Unk_func_0008FD40_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
}

void func_0008FD4C(void) {
}

void func_0008FD54(void) {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008FD5C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008FE78);

INCLUDE_RODATA("nonmatchings/music_main_plugin_089BF0", D_000A2720);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0008FFD8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090048);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090090);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000900D8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090128);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090178);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000901BC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090200);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090258);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090318);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090358);

void func_0009044C(struct Unk_func_0009044C_0 *arg0) {
    arg0->unk44->unk28 = 4;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0009045C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000904AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000904FC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090554);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000905AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000905F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090634);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_0009068C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090764);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000907AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000908A0);

void func_0009090C(s32 arg0) {
    func_000901BC(arg0 - 8);
}

void func_00090928(s32 arg0) {
    func_000901BC(arg0 - 4);
}

void func_00090944(s32 arg0) {
    func_00090200(arg0 - 8);
}

void func_00090960(s32 arg0) {
    func_00090200(arg0 - 4);
}

void func_0009097C(s32 arg0) {
    func_000905F0(arg0 - 8);
}

void func_00090998(s32 arg0) {
    func_000905F0(arg0 - 4);
}

void func_000909B4(s32 arg0) {
    func_00090634(arg0 - 8);
}

void func_000909D0(s32 arg0) {
    func_00090634(arg0 - 4);
}

void func_000909EC(s32 arg0) {
    func_000505F8(arg0 + 8);
}

void func_00090A08(s32 arg0) {
    func_000909EC(arg0 - 8);
}

s32 func_00090A24(void) {
    return 0;
}

void func_00090A2C(s32 arg0) {
    func_000505F8(arg0 + 8);
}

void func_00090A48(s32 arg0) {
    func_00090A2C(arg0 - 8);
}

s32 func_00090A64(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090A6C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090B1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090BCC);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090C90);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090D54);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090DB4);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090E14);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090E78);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090F10);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090F60);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090F78);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090F88);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090F98);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00090FA8);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000910AC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00080A1C_v260);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00080A58);
#else
void func_000915F8(struct Unk_func_000915F8_0 *arg0) {
    arg0->unk0 = &D_000A2930;
    arg0->unk4 = -1;
    func_0006CA14((s32) ((u8 *)arg0 + 8));
}

void func_0009162C(struct Unk_func_0009162C_0 *arg0) {
    arg0->unk0 = &D_000A2930;
    arg0->unk4 = -1;
    func_0006CA14((s32) ((u8 *)arg0 + 8));
}
#endif

#if FW_VERSION < 282
Class_00097AA8::~Class_00097AA8() {
}
#else
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00091660);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00091688);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_000916B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00080B1C);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00080BA0);

INCLUDE_ASM("nonmatchings/music_main_plugin_089BF0", func_00080C14);
#endif
