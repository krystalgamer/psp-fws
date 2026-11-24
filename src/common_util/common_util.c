#include "common.h"
#include "common_util_decls.h"

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00000024);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000000AC);

s32 module_start(void) {
    func_00000000();
    return 0;
}

s32 module_stop(void) {
    func_000083D0();
    return 0;
}

void sceVshCommonUtil_107EDCD9(void) {
    func_000083D0();
}

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_B9578145);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_29B75E11);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_68EB85B4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_7EEFA381);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000004BC);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_7A1C6D74);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_FC8E3CEF);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_BFC546B6);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000006B4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_FA969B6A);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_D4D66154);

void sceVshCommonUtil_5A0B7762(s32 arg0, s32 arg1) {
    D_00008BF0 = arg0;
    D_00008BF4 = arg1;
}

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008A14);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008A24);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008A30);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008A3C);

void sceVshCommonUtil_12F5429A(void) {
    D_00008BF8 = 0;
    D_00008BFC = sceKernelCreateEventFlag("SceVshRebootLock", 0x200U, 3U, NULL);
}

void sceVshCommonUtil_0713D516(void) {
    sceKernelDeleteEventFlag(D_00008BFC);
}

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_249059B5);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_7683BE4D);

void sceVshCommonUtil_0AF412FC(void) {
    sceVshCommonUtil_249059B5();
}

void func_00000978(void) {
    sceVshCommonUtil_7683BE4D();
}

void sceVshCommonUtil_686AAA1A(void) {
    sceVshCommonUtil_7683BE4D();
}

void sceVshCommonUtil_3FAF35EC(void) {
    sceKernelClearEventFlag(D_00008BFC, -3U);
    sceKernelWaitEventFlag(D_00008BFC, 1U, 0, NULL, NULL);
}

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000009F4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_2ACAD845);

void sceVshCommonUtil_98E57F6D(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0 != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
            sceReg_0D69BF40(temp_a0);
        }
        sceReg_0CAE832B(M2C_FIELD(arg0, s32 *, 8));
    }
    if (M2C_FIELD(arg0, u8 *, 0) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
            sceReg_39461B4D(M2C_FIELD(arg0, s32 *, 4));
        }
        sceReg_FA8A5739(M2C_FIELD(arg0, s32 *, 4));
    }
}

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_63FFE887);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008A5C);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008A7C);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_71DB8B88);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_28B6AD3B);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_57BDA5C1);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_799DFDC5);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_394CBE00);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_B48D135B);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000010D0);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00001114);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_0000159C);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_0000177C);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00001828);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000019DC);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00001B64);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00001CD4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00001F50);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_E55CADD9);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_F857F095);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000030A4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00003210);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00003554);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_B6E7804E);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_6349597A);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00003D98);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_EDED68FB);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_46931A6C);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00004374);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_0000472C);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00004774);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00004858);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000049A8);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_024CEB82);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00005174);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_27627379);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_0000535C);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000053F4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000055BC);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00005614);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_0000568C);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000056FC);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00005788);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00005910);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00005AA4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00005C24);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_9A2C3824);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_2D564AF6);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00006048);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_15AF8184);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000068D0);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000069A4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00006D48);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", sceVshCommonUtil_6B332472);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00006F68);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_0000706C);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008AD0);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008AD4);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008AE8);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008AF4);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008B08);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008B18);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008B2C);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008B40);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008B48);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007234);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000074EC);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000075BC);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007698);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000078A0);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007914);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007968);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000079A4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007A60);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007AF4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007B88);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007C00);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007CD0);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007D44);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007DA4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007E40);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00007F30);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00008034);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_000081A4);

INCLUDE_ASM("tmp/asm/282/common_util/nonmatchings/common_util", func_00008378);

INCLUDE_RODATA("tmp/asm/282/common_util/nonmatchings/common_util", D_00008B70);
