#include "common.h"
#include "fatmsmod_decls.h"

#if FW_VERSION == 100
s32 sceFatMS_driver_BCB9DEDB(void) {
    func_00000020();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007AEC);
#endif

#if FW_VERSION != 100
s32 sceFatMS_driver_BCB9DEDB(void) {
    func_00000020();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000020);

#if FW_VERSION == 100
void func_0000022C(void) {
    IoFileMgrForKernel_C7F35804(D_0002B568);
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_000146FC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00014704);
#endif

#if FW_VERSION != 100
void func_00000048(void) {
    IoFileMgrForKernel_C7F35804(D_0002B568);
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023950);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023958);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000068);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000134);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000264);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000594);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000678);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000320);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000444);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000004F4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000007C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000850);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000058C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000654);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000006E8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000009A0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023B74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000007E4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023B84);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023B88);
#endif

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023B8C);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023BAC);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000098C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023BD8);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000BFC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000DC8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000ED4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000CE4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000E00);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000EF8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000112C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023C78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001064);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000170C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001810);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001914);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001A18);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000152C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001A50);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023CD0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023CEC);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001CD0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001834);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001DA0);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001DCC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001994);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001F04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000203C);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00002190);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000238C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000025E8);

#if FW_VERSION == 100
s32 func_00001F98(void) {
    return 0x80020325;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001FA4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000021E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000022B8);
#endif

#if FW_VERSION != 100
s32 func_000026FC(void) {
    return 0x80020325;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002708);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002880);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000029E4);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000039E8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003A34);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003A50);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003AF4);

#if FW_VERSION == 100
s32 func_00002B48(void) {
    return 0x80020325;
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023F3C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023F44);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023F70);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023F84);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023FA4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003C18);
#endif

#if FW_VERSION != 100
s32 func_00003CD8(void) {
    return 0x80020325;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003CE4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024014);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003D7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003F4C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003FB8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004018);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004078);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000040D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000041C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000043AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000441C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000447C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004564);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000046EC);
#endif

#if FW_VERSION != 100
void func_0000475C(void) {
    func_00000134();
}
#endif

#if FW_VERSION != 100
void func_00004778(void) {
    func_00000264();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004794);
#endif

#if FW_VERSION != 100
void func_000047C8(void) {
    func_00000BFC();
}
#endif

#if FW_VERSION != 100
void func_000047E4(void) {
    func_00000CE4();
}
#endif

#if FW_VERSION != 100
void func_00004800(void) {
    func_00000E00();
}
#endif

#if FW_VERSION != 100
void func_0000481C(void) {
    func_00000EF8();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004838);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004880);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000048B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000048E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000491C);
#endif

#if FW_VERSION != 100
void func_00004950(void) {
    func_00001CD0();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000496C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000049A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000049D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004A08);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004A3C);
#endif

#if FW_VERSION != 100
void func_00004A58(void) {
    func_00002708();
}
#endif

#if FW_VERSION != 100
void func_00004A74(void) {
    func_00002880();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004A90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004B6C);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004B88);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002B98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004BCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004C10);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004C58);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002C20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002C60);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002CA0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004C9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004CE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004D24);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004D6C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002D24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004DAC);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004DF0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004E30);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002DE4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004E70);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004EB0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002E74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004EFC);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004F40);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002EFC);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004F88);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002F8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004FD4);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000501C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005068);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000050AC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000050E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005124);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000311C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00005168);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000051B0);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000051F8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005238);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000527C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000052D0);

#if FW_VERSION == 100
void func_0000326C(void) {
    sceIoDevctl(&D_0002411C, 0x0201D803, &D_00019AD4, 4U, NULL, 0U);
    sceKernelDeleteEventFlag(D_0001A040);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00005308);
#endif

#if FW_VERSION != 100
void func_000053FC(void) {
    sceIoDevctl(&D_0002411C, 0x0201D803, &D_0002BAA0, 4U, NULL, 0U);
    sceKernelDeleteEventFlag(D_0002DC10);
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024110);
#endif

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002411C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005444);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005614);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000037AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000059A8);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005D18);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_000241C8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005DA4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006240);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000041D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000643C);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000065E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006694);

#if FW_VERSION == 100
s32 func_00004544(void) {
    sceIoClose(D_0002B5CC);
    D_0002B5CC = -1;
    D_00019B00 = 0;
    D_00019B04 = 0;
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00006724(void) {
    sceIoClose(D_0002B5CC);
    D_0002B5CC = -1;
    D_0002BAC0 = 0;
    D_0002D730 = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000676C);

#if FW_VERSION == 100
s8 *func_000045F4(void) {
    return &D_00019B04;
}
#endif

#if FW_VERSION == 100
s32 func_00004600(void) {
    return D_00019B00;
}
#endif

#if FW_VERSION != 100
s8 *func_000067D4(void) {
    return &D_0002D730;
}
#endif

#if FW_VERSION != 100
s32 func_000067E0(void) {
    return D_0002BAC0;
}
#endif

#if FW_VERSION != 100
s32 func_000067EC(void) {
    return D_0002B5CC;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000067F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006838);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006878);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000068C8);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006918);

#if FW_VERSION == 100
s32 func_0000465C(void) {
    return __builtin_allegrex_min(sceKernelDeleteMbx(D_00019E00), 0);
}
#endif

#if FW_VERSION != 100
s32 func_00006960(void) {
    return __builtin_allegrex_min(sceKernelDeleteMbx(D_0002DA00), 0);
}
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006988);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006A54);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006B10);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000048B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006BBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006C68);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000075CC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004BBC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024518);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024598);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024618);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024698);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024718);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024798);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024818);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024898);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024918);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024998);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024A18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024A98);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024B18);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000760C);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007718);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000793C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007968);

#if FW_VERSION == 100
s32 func_00004E68(s8 *arg0) {
    s8 *var_v1;

    var_v1 = arg0;
    if (*arg0 != 0) {
        do {
            var_v1 += 1;
        } while (*var_v1 != 0);
    }
    return var_v1 - arg0;
}
#endif

#if FW_VERSION != 100
s32 func_000079A8(s8 *arg0) {
    s8 *var_v1;

    var_v1 = arg0;
    if (*arg0 != 0) {
        do {
            var_v1 += 1;
        } while (*var_v1 != 0);
    }
    return var_v1 - arg0;
}
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000079CC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000079F8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007A20);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007A5C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007AB4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004FAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00005118);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000565C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000056FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000057CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000060D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006148);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000627C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006414);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000070E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000072F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000764C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000076F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007814);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000078D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007A88);
#endif

#if FW_VERSION == 100
s32 func_00007BB0(s32 arg0) {
    return ((arg0 - 2) << M2C_VFIELD(&D_0001BCC4, s32, 0x18)) + M2C_VFIELD(&D_0001BCC4, s32, 4);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007BD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007C30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008028);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008314);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000085D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000086E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008878);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008954);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008EFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009018);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000090A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009398);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000095BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000096A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009B3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009BF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009DC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009F08);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009F90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009FF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A128);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A3AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A460);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A698);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A714);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A744);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A7C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A82C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A90C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A99C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AAC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AB38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000ABF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000ACF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AD4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AE30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AEAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AFD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B1D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B418);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B440);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B50C);
#endif

#if FW_VERSION == 100
void func_0000B57C(void) {
    D_000193FC = D_000193F8;
    func_00007718((s32) (&D_000193FC + 2), (s32) &D_00027804, 0x102);
    D_00027908 = M2C_FIELD(D_000276E4, s32 *, 0x1C);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B5CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B650);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B71C);
#endif

#if FW_VERSION == 100
s32 func_0000B7E4(void *arg0) {
    s32 var_a1;
    s8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s8 *, 0);
    var_a1 = 1;
    if (((temp_v0 == 0x5C) | (temp_v0 == 0x2F)) == 0) {
        var_a1 = M2C_FIELD(arg0, s8 *, 1) == 0x3A;
    }
    return var_a1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B818);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B978);
#endif

#if FW_VERSION == 100
void func_0000BA20(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, -1) != 0x2E) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0) = 0x5C;
    M2C_FIELD(arg0, s8 *, 1) = 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BA44);
#endif

#if FW_VERSION == 100
void func_0000BAF8(u32 arg0) {
    u32 temp_a1;

    temp_a1 = M2C_FIELD(D_00027800, u32 *, 0x30);
    if ((temp_a1 < arg0) && (arg0 < (u32) (temp_a1 + D_0001BCE4))) {
        M2C_VFIELD(&D_00027934, s32, 0x4C) = 0;
        M2C_VFIELD(&D_00027934, s32, 0x30) = 0;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BB3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BBAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BC38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BC84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BCF0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BD30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BE6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C108);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C120);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007AEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007C04);
#endif

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024BE0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024BF0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C3C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C7E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007CD8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007D5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007E98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008478);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008F04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008F44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008FDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000090B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009124);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000091F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009260);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009BF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A5FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A63C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A6BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A7FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A93C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A97C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AB3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B918);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B9C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BC5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BDC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BF24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BF78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CF58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CFA4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CFE8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D2E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D444);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D488);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D818);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DB94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DBD4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DC90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DD00);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DD40);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DED0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DF9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DFDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E0D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E2B0);
#endif

#if FW_VERSION != 100
s32 func_0000E3C0(struct Unk_func_0000E3C0_0 *arg0, s32 arg1) {
    return ((arg1 - 2) << arg0->unk18) + arg0->unk4;
}
#endif

#if FW_VERSION != 100
s32 func_0000E3D8(struct Unk_func_0000E3D8_0 *arg0, u32 arg1) {
    s32 var_a3;
    u16 temp_v0;
    u32 temp_a2;

    temp_a2 = arg0->unk4;
    var_a3 = 0;
    if (arg1 < temp_a2) {
        if (arg1 >= (u32) arg0->unk0) {
            var_a3 = __builtin_allegrex_min(temp_a2 - arg1, arg0->unk20);
        }
    } else {
        temp_v0 = arg0->unk26;
        var_a3 = temp_v0 - ((u32) (arg1 - temp_a2) % temp_v0);
    }
    return var_a3;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E428);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E81C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EC44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EF38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F05C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F1FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F2D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F854);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FA38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FAC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FD88);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FFBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001016C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010780);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010854);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010A3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010BB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010C38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010C9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010DDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000110D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011200);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011460);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000114F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011524);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000115B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011744);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011828);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011A84);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011AF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011BC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011CEC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011D38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011E50);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011EE8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011F80);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011FC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000120E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001231C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000125E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001294C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001298C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000129B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012AC8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012B3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012BE4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012C5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012D30);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012E14);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012E54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012F2C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013004);
#endif

#if FW_VERSION != 100
s32 func_00013044(struct Unk_func_00013044_0 *arg0) {
    s32 var_a1;
    s8 temp_v0;

    temp_v0 = arg0->unk0;
    var_a1 = 1;
    if (((temp_v0 == 0x5C) | (temp_v0 == 0x2F)) == 0) {
        var_a1 = arg0->unk1 == 0x3A;
    }
    return var_a1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013078);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000130DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001311C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001328C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000133F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013434);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000134EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013564);
#endif

#if FW_VERSION != 100
void func_000135A8(struct Unk_func_000135A8_0 *arg0) {
    if (M2C_FIELD(arg0, s8 *, -1) != 0x2E) {
        return;
    }
    arg0->unk0 = 0x5C;
    arg0->unk1 = 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000135CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013614);
#endif

#if FW_VERSION != 100
void func_00013654(void *arg0) {
    void *var_a0;

    var_a0 = arg0;
    if (M2C_FIELD(var_a0, s8 *, -1) == 0x2E) {
        do {
            M2C_FIELD(var_a0, s8 *, -1) = 0;
            var_a0 -= 1;
        } while (M2C_FIELD(var_a0, s8 *, -1) == 0x2E);
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013688);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000136C4);
#endif

#if FW_VERSION != 100
void func_00013798(struct Unk_func_00013798_0 *arg0, u32 arg1) {
    u32 temp_v1;

    temp_v1 = arg0->unkFA78->unk40;
    if ((temp_v1 < arg1) && (arg1 < (u32) (temp_v1 + arg0->unk20))) {
        arg0->unkFAC4 = 0;
        arg0->unkFAE0 = 0;
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000137D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013858);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000138E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000139D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013A24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013AB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013B24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013B98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013CDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013EF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000141AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000142B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000144D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000146EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00014900);
#endif

#if FW_VERSION != 100
void func_000149E0(void) {
    sceKernelDeleteFpl();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000149FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00014CC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00015060);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000150A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00015508);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000155DC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C928);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001568C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001573C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001577C);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015908);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CB14);
#endif

#if FW_VERSION == 100
s32 func_0000CC88(void) {
    return D_00019E08;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CC94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D440);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D558);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D67C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000159B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00015A68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00015AA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00015CF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00015D34);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000165AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00016FDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00017AC8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00017B08);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00017C54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00017DA0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00017DE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00017F20);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001815C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D950);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00018234);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00018570);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DCF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E318);
#endif

#if FW_VERSION == 100
s32 func_0000E5E8(void) {
    D_00019E28 = 0;
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E5F8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000185F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00018CD0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00018DF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00018F30);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019244);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019258);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019424);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001970C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019910);
#endif

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024D84);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EA3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019950);
#endif

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024DA8);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024DAC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EC18);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F2CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F58C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019B50);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A234);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A518);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A620);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F7D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F8A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F8F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F95C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FD04);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FD3C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FE34);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FF1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010238);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010A64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011430);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000117FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000118E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011910);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011AB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012480);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012710);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012788);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012964);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013240);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001337C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013E3C);
#endif

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024DBC);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024DC0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013EE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00014220);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A5E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A6E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A7E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A8E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A9E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002AAE0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002ABE0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002ACE0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002ADE0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002AEE0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002AFE0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002B0E0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002B1E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A7A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A8C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AA38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AB34);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AC78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AD30);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AE0C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AEA8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AEE4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B0C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B1B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B208);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B2B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B790);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B7F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B91C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001BA58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001BEB4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001CB44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001D5CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001D9CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DBE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DC2C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DD0C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DD38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DD8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DDCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DF94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001ECB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001EEE8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F004);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F29C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F2DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F350);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F560);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F734);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F774);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020138);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020B60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020BA0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020D08);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020E7C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020EBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000216D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021BE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021C94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021D38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021D78);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021D94);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021DB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021DF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021E44);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021E8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021ED4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021F20);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021F64);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021FAC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022000);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0002204C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000220A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000220F4);
#endif

#if FW_VERSION != 100
s32 func_0002214C(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0 & 0xFFFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 = (var_a0 - 0x20) & 0xFFFF;
    }
    return var_a0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022170);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022194);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000221BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022204);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0002224C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000222B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000222E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022314);
#endif

#if FW_VERSION != 100
s32 func_0002233C(s32 arg0) {
    return arg0 & 0xFF;
}
#endif

#if FW_VERSION != 100
s8 func_00022344(s8 arg0) {
    return arg0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0002234C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0002250C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022588);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000225DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000226E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000227CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000228F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022BE0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022C98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022D80);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022E28);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022ED0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022F88);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000230B4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000231E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00023298);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00023350);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000233F8);
#endif
