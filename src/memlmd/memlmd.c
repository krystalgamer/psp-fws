/* cflags: -O2 -frename-registers */
#include "common.h"
#include "memlmd_decls.h"

INCLUDE_ASM("nonmatchings/memlmd", func_00000000);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/memlmd", func_0000006C_v152);
#endif

INCLUDE_ASM("nonmatchings/memlmd", func_0000006C);

#if FW_VERSION < 352
void memlmd_8BDB1A3E(s32 arg0, s32 arg1, s32 arg2) {
    func_0000006C(arg0, arg1, arg2, 0);
}

void memlmd_185F0A2A(s32 arg0, s32 arg1, s32 arg2) {
    func_0000006C(arg0, arg1, arg2, 1);
}
#else
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

INCLUDE_ASM("nonmatchings/memlmd", memlmd_323366CA);

INCLUDE_ASM("nonmatchings/memlmd", memlmd_30132606);

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

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/memlmd", D_000012B4);
#else
INCLUDE_ASM("nonmatchings/memlmd", memlmd_D1732BE4);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F28);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F2C);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F30);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F34);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F38);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F3C);

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F40);
#endif

INCLUDE_RODATA("nonmatchings/memlmd", D_00001F44);

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

INCLUDE_RODATA("nonmatchings/memlmd", D_00002134);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/memlmd", D_0000159C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/memlmd", D_00002144);

INCLUDE_RODATA("nonmatchings/memlmd", D_00002154);
#endif

INCLUDE_RODATA("nonmatchings/memlmd", D_00002AF0);
