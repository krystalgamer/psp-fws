/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "music_main_plugin_decls.h"

#if FW_VERSION >= 282
void func_00087A18(struct Unk_func_00087A18_0 *arg0) {
    func_00087374(arg0, 5);
    arg0->unk0 = &D_000A2130;
    arg0->unk18 = 0;
}

void func_00087A50(struct Unk_func_00087A50_0 *arg0) {
    func_00087374(arg0, 5);
    arg0->unk0 = &D_000A2130;
    arg0->unk18 = 0;
}

Class_000A2130::~Class_000A2130() {
}

void func_00087B10(s32 **arg0, s32 arg1, s32 arg2) {
    func_00087424((Unk_func_00087424_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2120;
}

void func_00087B40(s32 **arg0, s32 arg1, s32 arg2) {
    func_00087424((Unk_func_00087424_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2120;
}

Class_000A2120::~Class_000A2120() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00087BF8);

void func_00087C44(M2C_UNK **arg0) {
    func_00086A54((Unk_func_00086A54_0*) arg0, (s32) &D_000A2140);
    *arg0 = &D_000A2160;
}

void func_00087C7C(M2C_UNK **arg0) {
    func_00086A54((Unk_func_00086A54_0*) arg0, (s32) &D_000A2140);
    *arg0 = &D_000A2160;
}

Class_000A2160::~Class_000A2160() {
}

s32 func_00087D3C(Class_000A2160 *arg0) {
    return arg0->unk10;
}

void func_00087D44(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2150;
}

void func_00087D74(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2150;
}

void func_00087DA4(s32 **arg0) {
    *arg0 = &D_000A2150;
    _ZN14Class_000A2078D2Ev(arg0);
}

void func_00087DCC(s32 **arg0) {
    *arg0 = &D_000A2150;
    _ZN14Class_000A2078D2Ev(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00087DF4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00087DF4(s32 **arg0) {
    *arg0 = &D_000A2150;
    _ZN14Class_000A2078D2Ev(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00087E2C);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00087F0C);

Class_00097E08::~Class_00097E08() {
}

s32 func_00087FD4(void) {
    return 0;
}

s32 func_00087FDC(struct Unk_func_00087FDC_0 *arg0) {
    return arg0->unk20;
}

void func_00087FE4(M2C_UNK **arg0) {
    func_00088650();
    *arg0 = &D_000A2180;
}

void func_00088014(M2C_UNK **arg0) {
    func_00088650();
    *arg0 = &D_000A2180;
}

Class_00097DF8::~Class_00097DF8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_000880CC);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_000881D4);

Class_000A21B8::~Class_000A21B8() {
}

s32 func_000882A8(Class_000A21B8 *arg0) {
    return arg0->unk20;
}

u8 func_000882B0(struct Unk_func_000882B0_0 *arg0) {
    return arg0->unk18;
}

u8 func_000882B8(struct Unk_func_000882B8_0 *arg0) {
    return arg0->unk19;
}

u8 func_000882C0(struct Unk_func_000882C0_0 *arg0) {
    return arg0->unk1A;
}

void func_000882C8(s32 **arg0, s32 arg1, s32 arg2) {
    func_00087424((Unk_func_00087424_0*) arg0, arg1, arg2);
    *arg0 = &D_000A21A8;
}

void func_000882F8(s32 **arg0, s32 arg1, s32 arg2) {
    func_00087424((Unk_func_00087424_0*) arg0, arg1, arg2);
    *arg0 = &D_000A21A8;
}

Class_000A21A8::~Class_000A21A8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_000883B0);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00088538);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00088578);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", _ZN14Class_00097E58D2Ev);

void _ZN14Class_00097E58D1Ev(s32 **arg0) {
    *arg0 = &D_000A21E0;
    _ZN14Class_000A2088D2Ev(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", _ZN14Class_00097E58D0Ev);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void _ZN14Class_00097E58D0Ev(s32 **arg0) {
    *arg0 = &D_000A21E0;
    _ZN14Class_000A2088D2Ev(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00088640);
#endif

#if FW_VERSION >= 282
u8 func_00088640(struct Unk_func_00088640_0 *arg0) {
    return arg0->unk18;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00088648);
#endif

#if FW_VERSION >= 282
s32 func_00088648(s32 arg0) {
    return arg0 + 0x19;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00088650);

void func_00088680(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A21D0;
}

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", _ZN14Class_00097E48D2Ev);

void _ZN14Class_00097E48D1Ev(s32 **arg0) {
    *arg0 = &D_000A21D0;
    _ZN14Class_000A2078D2Ev(arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", _ZN14Class_00097E48D0Ev);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void _ZN14Class_00097E48D0Ev(s32 **arg0) {
    *arg0 = &D_000A21D0;
    _ZN14Class_000A2078D2Ev(arg0);
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00088738);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_0008883C);

Class_000A2208::~Class_000A2208() {
}

void func_000888FC(M2C_UNK **arg0) {
    func_0008BA14();
    *arg0 = &D_000A21F8;
}

void func_0008892C(M2C_UNK **arg0) {
    func_0008BA14();
    *arg0 = &D_000A21F8;
}

Class_000A21F8::~Class_000A21F8() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_000889E4);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00088D18);

Class_00097E90::~Class_00097E90() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00088DF8);
#endif

#if FW_VERSION >= 282
s32 func_00088DF8(void) {
    return 0;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00088E00);
#endif

#if FW_VERSION >= 282
s32 func_00088E00(struct Unk_func_00088E00_0 *arg0) {
    return arg0->unk20;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_0007825C);
#endif

#if FW_VERSION >= 282
s32 func_00088E08(struct Unk_func_00088E08_0 *arg0) {
    return arg0->unk24;
}

s32 func_00088E10(struct Unk_func_00088E10_0 *arg0) {
    return arg0->unk28;
}

s32 func_00088E18(struct Unk_func_00088E18_0 *arg0) {
    return arg0->unk2C;
}

void func_00088E20(M2C_UNK **arg0) {
    func_00088650();
    *arg0 = &D_000A2230;
}

void func_00088E50(M2C_UNK **arg0) {
    func_00088650();
    *arg0 = &D_000A2230;
}

Class_00097E80::~Class_00097E80() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00088F08);

void func_00089088(M2C_UNK **arg0) {
    func_00086A54((Unk_func_00086A54_0*) arg0, (s32) &D_000A2250);
    *arg0 = &D_000A2270;
}

Class_000A2270::~Class_000A2270() {
}

s32 func_00089148(Class_000A2270 *arg0) {
    return arg0->unk10;
}

void func_00089150(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2260;
}

void func_00089180(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2260;
}

Class_000A2260::~Class_000A2260() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00089238);

void func_00089310(M2C_UNK **arg0) {
    func_00086A54((Unk_func_00086A54_0*) arg0, (s32) &D_000A2280);
    *arg0 = &D_000A22A0;
}

Class_000A22A0::~Class_000A22A0() {
}

s32 func_000893D0(Class_000A22A0 *arg0) {
    return arg0->unk10;
}

void func_000893D8(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2290;
}

void func_00089408(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A2290;
}

Class_000A2290::~Class_000A2290() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_000894C0);

void func_00089598(M2C_UNK **arg0) {
    func_00086A54((Unk_func_00086A54_0*) arg0, (s32) &D_000A22B0);
    *arg0 = &D_000A22D0;
}

Class_000A22D0::~Class_000A22D0() {
}

s32 func_00089658(Class_000A22D0 *arg0) {
    return arg0->unk10;
}

void func_00089660(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A22C0;
}

void func_00089690(s32 **arg0, s32 arg1, s32 arg2) {
    func_00086B4C((Unk_func_00086B4C_0*) arg0, arg1, arg2);
    *arg0 = &D_000A22C0;
}

Class_000A22C0::~Class_000A22C0() {
}

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00089748);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_000897AC);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00089808);

Class_00097F58::~Class_00097F58() {
}

s32 func_000898EC(void) {
    return 0;
}

s32 func_000898F4(struct Unk_func_000898F4_0 *arg0) {
    return arg0->unk20;
}

s32 func_000898FC(struct Unk_func_000898FC_0 *arg0) {
    return arg0->unk24;
}

s32 func_00089904(struct Unk_func_00089904_0 *arg0) {
    return arg0->unk28;
}

s32 func_0008990C(struct Unk_func_0008990C_0 *arg0) {
    return arg0->unk2C;
}

void func_00089914(M2C_UNK **arg0) {
    func_00088650();
    *arg0 = &D_000A22F8;
}

void func_00089944(M2C_UNK **arg0) {
    func_00088650();
    *arg0 = &D_000A22F8;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00089974);
#endif

#if FW_VERSION >= 282
Class_00097F48::~Class_00097F48() {
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_0008999C);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_000782F0);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_0007834C);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_000783B0);

INCLUDE_RODATA("nonmatchings/music_main_plugin_087A18", D_00097488);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_000899FC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00089BDC);
#endif

#if FW_VERSION >= 282
s32 func_00089BDC(s32 arg0) {
    return ((1 << arg0) - 1) & 0xFF;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_000783EC);

INCLUDE_ASM("nonmatchings/music_main_plugin_087A18", func_00078400);
#endif
