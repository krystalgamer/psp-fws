/* compiler[302,303,310,311,330,340]: 1.9.2 */
/* cflags[302,303,310,311,330,340]: -Os -frename-registers -mext */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "pops_decls.h"

#if FW_VERSION == 302
s32 func_0000CC88(void) {
    sceKernelSignalSema(D_001613D4, 1);
    sceKernelCancelAlarm(D_001613D8);
    D_001613D8 = -1;
    return 0;
}

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000CCCC);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000CD14);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000CD6C);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000CE34);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000CEA8);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000CED8);

INCLUDE_RODATA("nonmatchings/pops_00CC88", D_00038850);

INCLUDE_RODATA("nonmatchings/pops_00CC88", D_00038860);

INCLUDE_RODATA("nonmatchings/pops_00CC88", D_000388A0);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000CF50);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000D028);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000D104);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000DD8C);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000DDD4);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000DE0C);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000DE94);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000DF50);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000E1FC);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000E7B4);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000E8FC);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000E97C);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000EA94);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000EBFC);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000ECD4);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000ED60);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000ED98);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000EE84);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000F078);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000F0D8);

void func_0000F138(void) {
    func_00010760();
}

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000F154);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000F224);

void func_0000F348(void) {
    func_00010578(0);
}

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000F364);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000F3A4);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000F3E8);

INCLUDE_ASM("nonmatchings/pops_00CC88", func_0000F44C);

void func_0000F58C(void) {
    struct Unk_func_0000F58C_temp_v0 *temp_v0;

    temp_v0 = func_0000EBFC(5, 0xC672);
    temp_v0->unk1 = (u8) D_00169648.unk0;
    temp_v0->unk2 = (u8) D_00169648.unk2D;
    temp_v0->unk3 = (u8) D_00169648.unk2;
    temp_v0->unk4 = (u8) D_00169648.unk3;
}
#endif
