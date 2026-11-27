/* cflags[100]: -O2 -mno-split-addresses */
#include "common.h"
#include "rebooti_decls.h"

s32 func_00000000(void) {
    if (func_00005F78(0) < 0) {
        func_00001A54("flash.c:%s:sceBootLfatfsMount failed\n", "FlashInitialize");
        return 0x80020001;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti", func_0000004C);

INCLUDE_ASM("nonmatchings/rebooti", sceKernelReboot);

s32 module_bootstart(void) {
    return 0;
}

void func_000004BC(void (*arg0)(s32)) {
    D_00015254 = arg0;
}

INCLUDE_ASM("nonmatchings/rebooti", func_000004C8);

INCLUDE_ASM("nonmatchings/rebooti", func_00000554);

INCLUDE_ASM("nonmatchings/rebooti", func_00000684);

void func_00000768(void) {
    func_0000004C();
}

INCLUDE_ASM("nonmatchings/rebooti", func_00000784);

INCLUDE_ASM("nonmatchings/rebooti", func_00000AF4);

INCLUDE_ASM("nonmatchings/rebooti", func_00000D40);

INCLUDE_ASM("nonmatchings/rebooti", func_00000E4C);

INCLUDE_RODATA("nonmatchings/rebooti", D_00012A14);

INCLUDE_RODATA("nonmatchings/rebooti", D_00012A34);

INCLUDE_ASM("nonmatchings/rebooti", func_00000E6C);

INCLUDE_ASM("nonmatchings/rebooti", func_000010E4);

INCLUDE_ASM("nonmatchings/rebooti", func_0000129C);

void func_000012A8(s32 arg0, s32 arg1) {
    D_00014F14 = arg0;
    D_00014F18 = arg1;
}

INCLUDE_ASM("nonmatchings/rebooti", func_000012BC);

INCLUDE_ASM("nonmatchings/rebooti", func_000012F4);

INCLUDE_ASM("nonmatchings/rebooti", func_00001328);

INCLUDE_RODATA("nonmatchings/rebooti", D_00012AF4);

INCLUDE_RODATA("nonmatchings/rebooti", D_00012AFC);

INCLUDE_ASM("nonmatchings/rebooti", func_00001A54);

INCLUDE_ASM("nonmatchings/rebooti", func_00001B10);

INCLUDE_ASM("nonmatchings/rebooti", func_00001B20);

INCLUDE_ASM("nonmatchings/rebooti", func_00001B50);
