/* cflags: -O2 -frename-registers */
#include "common.h"
#include "memlmd_decls.h"

INCLUDE_ASM("nonmatchings/memlmd", func_00000000);

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v340);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v311);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v302);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v282);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v271);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v260);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/memlmd", func_000000A8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v152);
#endif

INCLUDE_ASM("nonmatchings/memlmd", func_0000006C);

#if FW_VERSION >= 250 && FW_VERSION < 352
void memlmd_7CF1CD3E(s32 arg0, s32 arg1, s32 arg2) {
    func_0000006C(arg0, arg1, arg2, 0);
}

void memlmd_6A811217(s32 arg0, s32 arg1, s32 arg2) {
    func_0000006C(arg0, arg1, arg2, 1);
}
#endif

#if FW_VERSION < 250
void memlmd_8BDB1A3E(s32 arg0, s32 arg1, s32 arg2) {
    func_0000006C(arg0, arg1, arg2, 0);
}

void memlmd_185F0A2A(s32 arg0, s32 arg1, s32 arg2) {
    func_0000006C(arg0, arg1, arg2, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/memlmd", func_0000082C);

INCLUDE_ASM("nonmatchings/memlmd", func_00000898);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/memlmd", memlmd_C3A6F784);

INCLUDE_ASM("nonmatchings/memlmd", memlmd_DF76975E);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/memlmd", func_000000A8);

INCLUDE_ASM("nonmatchings/memlmd", func_00000134);

void memlmd_7CF1CD3E(s32 arg0, s32 arg1, s32 arg2) {
    func_00000134(arg0, arg1, arg2, 0);
}

void memlmd_6A811217(s32 arg0, s32 arg1, s32 arg2) {
    func_00000134(arg0, arg1, arg2, 1);
}

INCLUDE_ASM("nonmatchings/memlmd", func_00000E5C);

INCLUDE_ASM("nonmatchings/memlmd", func_00000EC8);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/memlmd", memlmd_323366CA);

INCLUDE_ASM("nonmatchings/memlmd", memlmd_30132606);
#endif

#if FW_VERSION >= 302
INCLUDE_ASM("nonmatchings/memlmd", memlmd_1570BAB4);

INCLUDE_ASM("nonmatchings/memlmd", memlmd_3E76F7E7);
#endif

void module_start(void) {
    func_0000145C();
}

void module_reboot_before(void) {
    func_00001414();
}

INCLUDE_ASM("nonmatchings/memlmd", func_00001198);

INCLUDE_ASM("nonmatchings/memlmd", func_00001218);

INCLUDE_ASM("nonmatchings/memlmd", func_00001270);

INCLUDE_ASM("nonmatchings/memlmd", func_0000133C);

INCLUDE_ASM("nonmatchings/memlmd", func_000013C8);

INCLUDE_ASM("nonmatchings/memlmd", func_00001414);

INCLUDE_ASM("nonmatchings/memlmd", func_0000145C);

INCLUDE_ASM("nonmatchings/memlmd", func_000015E8);

INCLUDE_ASM("nonmatchings/memlmd", func_00001760);

INCLUDE_ASM("nonmatchings/memlmd", semaphore_00EEC06A);

INCLUDE_ASM("nonmatchings/memlmd", semaphore_8EEB7BF2);

INCLUDE_ASM("nonmatchings/memlmd", semaphore_4C537C72);

INCLUDE_ASM("nonmatchings/memlmd", semaphore_77E97079);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/memlmd", memlmd_D1732BE4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001D10);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001D14);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001D18);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 311
INCLUDE_RODATA("nonmatchings/memlmd", D_00001D6C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/memlmd", D_00001D1C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001D20);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001D74);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 311
INCLUDE_RODATA("nonmatchings/memlmd", D_00001D78);
#endif

#if FW_VERSION >= 302 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001E9C);
#endif

#if FW_VERSION >= 302 && FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/memlmd", D_00001EA0);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001ECC);
#endif

#if FW_VERSION >= 311 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001F18);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/memlmd", D_00001F48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_000017C8);

INCLUDE_RODATA("nonmatchings/memlmd", D_000017D8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001D9C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/memlmd", D_00001CD0);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/memlmd", D_00001D44);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/memlmd", D_000012B4);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001F28);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F2C);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F30);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F34);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F38);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F3C);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F40);
#endif

#if FW_VERSION < 260 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001F44);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001F48);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F54);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F64);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F74);
#endif

INCLUDE_RODATA("nonmatchings/memlmd", D_00002004);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00002094);

INCLUDE_RODATA("nonmatchings/memlmd", D_00002124);
#endif

#if FW_VERSION < 260 || FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00002134);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001910);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 311
INCLUDE_RODATA("nonmatchings/memlmd", D_00001F4C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/memlmd", D_00001EF4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00001F04);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/memlmd", D_0000212C);

INCLUDE_RODATA("nonmatchings/memlmd", D_0000213C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/memlmd", D_00001F6C);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/memlmd", D_0000210C);
#endif

#if FW_VERSION >= 302 && FW_VERSION < 311
INCLUDE_RODATA("nonmatchings/memlmd", D_000020A4);
#endif

#if FW_VERSION >= 302 && FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/memlmd", D_000020B4);
#endif

#if FW_VERSION >= 302 && FW_VERSION < 311
INCLUDE_RODATA("nonmatchings/memlmd", D_000020C4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/memlmd", D_00001F7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/memlmd", D_000019A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_000019A4);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/memlmd", D_0000159C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00002144);

INCLUDE_RODATA("nonmatchings/memlmd", D_00002154);
#endif

INCLUDE_RODATA("nonmatchings/memlmd", D_00002AF0);
