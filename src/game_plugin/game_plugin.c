/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "game_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/game_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/game_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/game_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/game_plugin", module_start);

#if FW_VERSION < 282
s32 module_stop(void) {
    func_0000FC3C();
    return 0;
}
#else
s32 module_stop(void) {
    func_00010A38();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/game_plugin", func_0000015C);

INCLUDE_ASM("nonmatchings/game_plugin", func_000003DC);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/game_plugin", D_000183F0);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000183F4);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00018408);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00018420);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001842C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00018434);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00018448);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00018454);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001846C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00018480);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000184A0);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000184DC);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000184F0);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000186AC);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000186B4);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000186C0);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00018704);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00018730);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000187D4);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000187EC);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000187F4);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00018808);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00018858);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001897C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00011564);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000189B0);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00011574);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00011578);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/game_plugin", func_00000458);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000474);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010698);

INCLUDE_ASM("nonmatchings/game_plugin", func_000004D0);

INCLUDE_ASM("nonmatchings/game_plugin", func_000005D4);
#endif

INCLUDE_ASM("nonmatchings/game_plugin", func_0000045C);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/game_plugin", D_00011730_v271);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00000534(s32 arg0) {
    func_000074E0(&D_0001157C, arg0);
    return 0;
}

void func_0000055C(void) {
    func_000071AC(0);
}

void func_00000578(void) {
    func_000071AC(1);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/game_plugin", func_00000548);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/game_plugin", func_00000594);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/game_plugin", func_000005F4);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000638);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/game_plugin", func_00000664);

void func_0000076C(void) {
    func_00008120(&D_0001157C);
}

INCLUDE_ASM("nonmatchings/game_plugin", func_0000078C);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000868);

INCLUDE_ASM("nonmatchings/game_plugin", func_0000088C);

void func_00000938(void) {
    func_0000088C(1, 0xFFFF);
}

void func_00000958(void) {
    func_0000088C(0, 0xFFFF);
}

void func_00000D3C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A58();
}

void func_00000998(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000A78();
}

void func_000009B8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00000AA8();
}

INCLUDE_ASM("nonmatchings/game_plugin", func_000009D8);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000A58);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000A78);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000AA8);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000AD8);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000BB8);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000DA8);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000DEC);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000E68);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000E78);

INCLUDE_ASM("nonmatchings/game_plugin", func_00000EA0);

s32 func_00000ED0(s32 arg0, u32 arg1) {
    return (((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1) * arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/game_plugin", D_00010870);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001087C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010888);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010894);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000108A8);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000108BC);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000108D0);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000108E4);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000108F4);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010908);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001091C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001092C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010940);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010958);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010968);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010978);

INCLUDE_RODATA("nonmatchings/game_plugin", D_00010988);

INCLUDE_RODATA("nonmatchings/game_plugin", D_0001099C);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000109B0);

INCLUDE_RODATA("nonmatchings/game_plugin", D_000109C4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/game_plugin", D_000118C0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/game_plugin", D_00011C6C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/game_plugin", func_000006B8);
#endif

#if FW_VERSION == 100
void func_000006B8(void) {
    vsh_B55C095C(&D_000115D8);
}
#endif

#if FW_VERSION >= 282
s32 func_000004E8(s32 arg0) {
    func_00008160(( Unk_func_00008160_0*) &D_0001247C, arg0);
    return 0;
}

void func_00000510(void) {
    func_00006EF4(0);
}

void func_0000052C(void) {
    func_00006EF4(1);
}

INCLUDE_ASM("nonmatchings/game_plugin", func_00000548);
#endif
