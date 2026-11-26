#include "common.h"
#include "reboot_decls.h"

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot", func_00000000_v100);
#endif

INCLUDE_ASM("nonmatchings/reboot", func_00000000);

INCLUDE_ASM("nonmatchings/reboot", sceKernelReboot);

s32 module_bootstart(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/reboot", func_000003BC);

INCLUDE_ASM("nonmatchings/reboot", func_000003C8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot", func_00000554);

INCLUDE_ASM("nonmatchings/reboot", func_00000684);

void func_00000768(s32 arg0) {
    func_00000000(arg0);
}

INCLUDE_ASM("nonmatchings/reboot", func_00000784);

INCLUDE_ASM("nonmatchings/reboot", func_00000AF4);
#endif

INCLUDE_ASM("nonmatchings/reboot", func_00000450);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot", func_00000E4C);
#else
INCLUDE_ASM("nonmatchings/reboot", func_00000554);

INCLUDE_ASM("nonmatchings/reboot", func_00000720);

INCLUDE_ASM("nonmatchings/reboot", func_00000A9C);
#endif

INCLUDE_RODATA("nonmatchings/reboot", D_0001484C);

INCLUDE_RODATA("nonmatchings/reboot", D_0001486C);

INCLUDE_ASM("nonmatchings/reboot", func_00000E48);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot", func_000010E4);
#else
INCLUDE_ASM("nonmatchings/reboot", func_000010CC);

INCLUDE_ASM("nonmatchings/reboot", func_000011B4);

INCLUDE_ASM("nonmatchings/reboot", func_00001AAC);

INCLUDE_ASM("nonmatchings/reboot", func_00001B78);
#endif

INCLUDE_ASM("nonmatchings/reboot", func_00001C14);

INCLUDE_ASM("nonmatchings/reboot", func_00001C20);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot", func_000012BC);

INCLUDE_ASM("nonmatchings/reboot", func_000012F4);

INCLUDE_ASM("nonmatchings/reboot", func_00001328);

INCLUDE_RODATA("nonmatchings/reboot", D_00012894);

INCLUDE_RODATA("nonmatchings/reboot", D_0001289C);

INCLUDE_ASM("nonmatchings/reboot", func_00001B78);
#else
INCLUDE_ASM("nonmatchings/reboot", func_00001C34);
#endif

INCLUDE_ASM("nonmatchings/reboot", func_00001C64);

INCLUDE_ASM("nonmatchings/reboot", func_00001C74);

INCLUDE_ASM("nonmatchings/reboot", func_00001CA4);
