/* cflags: -Os -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006340);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006414);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_0000646C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_0000659C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_0000667C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006708);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006870);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_0000693C);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006BD8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006C50);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006CE0);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006DE4);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006E58);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006F34);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00006FC8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_0000708C);

void func_000070C0(s32 *arg0) {
    if (arg0 != NULL) {
        sceNet_lib_57CC57DA(arg0, 0, 0x404);
    }
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_000070E8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00007244);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00007358);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_000074A8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_000078F8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00007CD0);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00007FF8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00008300);

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", D_00010DA4);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_000085A8);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00008834);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00008BE0);

s32 func_00008E00(void) {
    s32 var_v0;

    var_v0 = 0x8041030B;
    if (D_00013F20 != NULL) {
        var_v0 = sceKernelSignalSema(D_00013F20->unk4, 1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00008E34);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00008EB0);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00009098);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_000091A8);

s32 func_00009328(void) {
    sceNet_lib_DB88F458();
    return 0;
}

s32 func_00009348(void) {
    s32 temp_v0;

    temp_v0 = sceNet_lib_B6FC0A5B();
    return (temp_v0 < 0) ? 0x80410E87 : temp_v0;
}

INCLUDE_RODATA("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", D_00010DF0);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00009374);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00009500);

s32 func_00009588(s32 arg0) {
    D_00016528 = arg0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00009598);

INCLUDE_ASM("tmp/asm/282/pspnet_apctl/nonmatchings/pspnet_apctl_006340", func_00009818);

