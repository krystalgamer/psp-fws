#include "common.h"
#include "fatmsmod_decls.h"

#if FW_VERSION >= 300
s32 module_start(void) {
    func_00000020();
    return 0;
}
#else
s32 sceFatMS_driver_BCB9DEDB(void) {
    func_00000020();
    return 0;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000020_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000020_v201);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000020_v152);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000020_v151);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007AEC);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000020);
#endif

#if FW_VERSION == 100
void func_0000022C(void) {
    IoFileMgrForKernel_C7F35804(D_0002B568);
}
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/fatmsmod", D_000146FC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000020_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000020);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000004B8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_000004B8(void) {
    IoFileMgrForKernel_C7F35804(D_0002BD1C);
}

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00022F3C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00015B80);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00015B88);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00014704);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00015D54);
#endif

#if FW_VERSION >= 282
void func_00000048(void) {
    IoFileMgrForKernel_C7F35804(D_0002B568);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000068);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023950);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023958);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000068);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000134);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000264);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000318);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000594);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000910);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000678);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000320);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000444);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000004F4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000A58);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000B1C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000BDC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023A20);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000009F4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_000009FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023A30);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023A34);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_000243D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023A38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000009A0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023A64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000007C0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000850);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000058C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000654);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000006E8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_000009A0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023B74);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000007E4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023B84);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023B88);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023B8C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023BAC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000098C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023BD8);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000BFC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000DC8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000ED4);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000CE4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000E00);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00000EF8);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/fatmsmod", func_00000FA4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023C68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001438);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000112C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023C78);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001064);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000170C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001810);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001914);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001A18);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000152C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023B5C);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023B78);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001A50);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023CD0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023CEC);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001CD0);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001CD8);
#endif

#if FW_VERSION == 151
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001CD0_v151);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001834);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001DA0);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001DCC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001EA4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000020A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001F8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001994);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00001F04);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000203C);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00002190);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000238C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000025E8);

#if FW_VERSION < 282
s32 func_00001F98(void) {
    return 0x80020325;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_00001FA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002778);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00002874);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000021E0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000022B8);
#endif

#if FW_VERSION >= 282
s32 func_000026FC(void) {
    return 0x80020325;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_00002708);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00002880);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000029E4);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000039E8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003A34);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003A50);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003AF4);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_000234E8);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_000234F0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002351C);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023530);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023550);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003878);
#endif

#if FW_VERSION < 282
s32 func_00002B48(void) {
    return 0x80020325;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003950);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023E70);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003AA8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_000039E8_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003B98);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003C04);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003C64);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003CC4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003D24);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003E10);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003FF8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004068);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000040C8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000041B0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004330);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000322C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_0000322C(void) {
    func_00000134();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003248);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00003248(void) {
    func_00000264();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003264);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003298);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00003298(void) {
    func_00000BFC();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000032B4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_000032B4(s32 arg0, s32 arg1, s32 arg2) {
    func_00000DC8(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000032D0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_000032D0(s32 arg0, s32 arg1, s32 arg2) {
    func_00000ED4(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000032EC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_000032EC(void) {
    func_00000EF8();
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000482C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003308);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000333C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003370);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000033A4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000033D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000340C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_0000340C(void) {
    func_00001CD0();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003428);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000345C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003490);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000034C4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000034F8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003514);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003530);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004A84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000354C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000035B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_000035D4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003624);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003674);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000036A8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000036C4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000036E0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000036FC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003718);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000374C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003780);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000037B4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000037E8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000381C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003838);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000386C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000038A0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000038D4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003908);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003924);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003940);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000395C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000039D0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023F3C);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023F44);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023F70);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023F84);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023FA4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003C18);

s32 func_00003CD8(void) {
    return 0x80020325;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003CE4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024014);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003D7C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003F4C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00003FB8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004018);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004078);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000040D8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000041C4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000043AC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000441C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000447C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004564);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000046EC);

void func_0000475C(void) {
    func_00000134();
}

void func_00004778(void) {
    func_00000264();
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004794);

void func_000047C8(void) {
    func_00000BFC();
}

void func_000047E4(void) {
    func_00000CE4();
}

void func_00004800(void) {
    func_00000E00();
}

void func_0000481C(void) {
    func_00000EF8();
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004838);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004880);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000048B4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000048E8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000491C);

void func_00004950(void) {
    func_00001CD0();
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000496C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000049A0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000049D4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004A08);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004A3C);

void func_00004A58(void) {
    func_00002708();
}

void func_00004A74(void) {
    func_00002880();
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004A90);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004B6C);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004B88);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002B98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00003A74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004BCC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004C10);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004C58);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002C20);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00002C60);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00002CA0);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004C9C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004CE0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004D24);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004D6C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002D24);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004DAC);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004DF0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004E30);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002DE4);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004E70);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004EB0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002E74);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004EFC);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004F40);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002EFC);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00004F88);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00002F8C);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004FD4);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000501C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005068);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000050AC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000050E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005124);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004DA8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000311C);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_00005168);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000051B0);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000051F8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005238);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000527C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000052D0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004E24);
#endif

#if FW_VERSION < 282
void func_0000326C(void) {
    sceIoDevctl(&D_0002411C, 0x0201D803, &D_00019AD4, 4U, NULL, 0U);
    sceKernelDeleteEventFlag(D_0001A040);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00023F2C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00005308);

void func_000053FC(void) {
    sceIoDevctl(&D_0002411C, 0x0201D803, &D_0002BAA0, 4U, NULL, 0U);
    sceKernelDeleteEventFlag(D_0002DC10);
}

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024110);
#endif

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002411C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005444);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/fatmsmod", func_00005B74);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_00005614);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000037AC);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_000059A8);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005D18);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_000241C8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005DA4);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/fatmsmod", func_000063E8);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006240);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00005134);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/fatmsmod", func_000041D8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000643C);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000065E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006694);

#if FW_VERSION < 282
s32 func_00004544(void) {
    sceIoClose(D_0002B5CC);
    D_0002B5CC = -1;
    D_00019B00 = 0;
    D_00019B04 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 300
s32 func_00006724(void) {
    if (D_0002B5CC != -1) {
        sceIoClose(D_0002B5CC);
        D_0002B5CC = -1;
    }
    D_0002BAC0 = 0;
    D_0002D730 = 0;
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00006724(void) {
    sceIoClose(D_0002B5CC);
    D_0002B5CC = -1;
    D_0002BAC0 = 0;
    D_0002D730 = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000676C);

#if FW_VERSION < 282
s8 *func_000045F4(void) {
    return &D_00019B04;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_0000635C(void) {
    return D_00019B00;
}

s32 func_00004600(void) {
    return D_0002B5CC;
}
#endif

#if FW_VERSION < 260
s32 func_00004600(void) {
    return D_00019B00;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000062F8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006338);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006378);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000063C8);
#endif

#if FW_VERSION >= 282
s8 *func_000067D4(void) {
    return &D_0002D730;
}

s32 func_000067E0(void) {
    return D_0002BAC0;
}

s32 func_000067EC(void) {
    return D_0002B5CC;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_000067F8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006838);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006878);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000068C8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006868);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006918);

#if FW_VERSION < 282
s32 func_0000465C(void) {
    return __builtin_allegrex_min(sceKernelDeleteMbx(D_00019E00), 0);
}
#else
s32 func_00006960(void) {
    return __builtin_allegrex_min(sceKernelDeleteMbx(D_0002DA00), 0);
}
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006988);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006A54);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00006B10);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006B44);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006BB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000066BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_000057F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00005868);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000048B8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006BBC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006C68);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000075CC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002435C);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_000243DC);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002445C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0001656C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002455C);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_000245DC);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002465C);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_000246DC);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002475C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_000165EC);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0001666C);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_000166EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002495C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007600);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004BBC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007718);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/fatmsmod", func_00005D40);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005D54);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024518);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024598);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024618);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024698);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024718);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024798);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024818);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024898);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024918);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024998);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024A18);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024A98);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024B18);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000760C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007718);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000793C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007968);

#if FW_VERSION < 282
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
#else
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

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007AEC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007AE0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007684);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000076CC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007878);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007718_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007760);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000077A8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000077F4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007838);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007880);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000078D4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000078F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007920);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007974);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007B2C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_000079CC_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007A48);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007A9C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007B30);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007DD4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007E68);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007F2C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007FB0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008034);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000080C8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000081DC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000082F0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008384);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008418);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000849C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008560);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000085E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008708);
#endif

#if FW_VERSION == 260
s32 func_00008708(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0 & 0xFFFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 = (var_a0 - 0x20) & 0xFFFF;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000872C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008750);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008778);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000087C0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008808);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008870);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000088A0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000088D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000088F8);
#endif

#if FW_VERSION == 260
s32 func_000088F8(s32 arg0) {
    return arg0 & 0xFF;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008900);
#endif

#if FW_VERSION == 260
s8 func_00008900(s8 arg0) {
    return arg0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008908);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008AC8);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024A24);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024BF0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007CCC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007D50);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007E8C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000846C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008CF8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008B98);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00004FAC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00005118);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000931C);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009C74);
#endif

#if FW_VERSION == 260
void func_00009C74(void) {
    if (D_0002C7CC != 0) {
        func_0000931C();
    } else {
        func_00005118();
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008F38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008FD0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000090A8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00009118);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000565C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009D50);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009E3C);
#endif

#if FW_VERSION == 260
s32 func_00009E3C(void) {
    s32 var_v0;

    if (D_0002C7CC != 0) {
        var_v0 = func_00009D50();
    } else {
        var_v0 = func_0000565C();
    }
    if (var_v0 == 0) {
        var_v0 = func_00007A5C((s32) &D_00027804, (s32) &D_00042A80) != 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000056FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009F34);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009254);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00009BE8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009FA0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A8F8);
#endif

#if FW_VERSION < 260 || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000057CC);
#endif

#if FW_VERSION == 260
void func_000057CC(s32 arg0) {
    if (D_0002C7CC != 0) {
        func_0000A8F8(arg0);
    } else {
        func_00009FA0(arg0);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A630);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000060D4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006148);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B59C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B440_v201);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B574);
#endif

#if FW_VERSION == 260
void func_0000B574(s32 arg0, s32 arg1, s32 arg2) {
    if (D_0002C7CC != 0) {
        func_0000B59C(arg0, arg1, arg2);
    } else {
        func_00006148(arg0, arg1, arg2);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A970);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AB30);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B90C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B9BC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BC50);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000627C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B738);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C66C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C700);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C4FC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CA8C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BF18);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BF6C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CF4C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C62C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C75C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C7A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D70C);
#endif

#if FW_VERSION == 260
void func_0000D70C(s32 arg0, s32 arg1, s8 arg2, s8 arg3) {
    if (D_0002C7CC != 0) {
        func_0000C7A8(arg0, arg1, (s32) arg2, (s32) arg3);
    } else {
        func_0000B738(arg0, arg1, (s32) arg2, (s32) arg3);
    }
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_00006414);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008230);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CFDC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008274);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DA6C);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DBD4);
#endif

#if FW_VERSION == 260
void func_0000DBD4(s32 arg0, s32 arg1, s8 arg2, s32 arg3) {
    if (D_0002C7CC != 0) {
        func_0000DA6C(arg0, arg1, (s32) arg2, arg3);
    } else {
        func_00008274(arg0, arg1, (s32) arg2, arg3);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D47C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E0B8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E42C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/fatmsmod", func_000070E0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000072F0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000764C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E050);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E0BC);
#endif

#if FW_VERSION == 260
void func_0000E0BC(void) {
    if (D_0002C7CC != 0) {
        func_0000E050();
    } else {
        func_0000764C();
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000076F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E278);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E344);
#endif

#if FW_VERSION == 260
void func_0000E344(s32 arg0, s32 arg1) {
    if (D_0002C7CC != 0) {
        func_0000E278(arg0, arg1);
    } else {
        func_000076F4(arg0, arg1);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DFD0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E0C4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E2A4);

s32 func_0000E3B4(void *arg0, s32 arg1) {
    return ((arg1 - 2) << M2C_FIELD(arg0, s32 *, 0x18)) + M2C_FIELD(arg0, s32 *, 4);
}

s32 func_0000E3CC(void *arg0, u32 arg1) {
    s32 var_a3;
    u16 temp_v0;
    u32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, u32 *, 4);
    var_a3 = 0;
    if (arg1 < temp_a2) {
        if (arg1 >= (u32) M2C_FIELD(arg0, u32 *, 0)) {
            var_a3 = __builtin_allegrex_min(temp_a2 - arg1, M2C_FIELD(arg0, s32 *, 0x20));
        }
    } else {
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x26);
        var_a3 = temp_v0 - ((u32) (arg1 - temp_a2) % temp_v0);
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E41C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E810);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EC38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EF2C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F050);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F1F0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F2CC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F848);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FA2C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FAB8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FD7C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FFB0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010160);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010774);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010848);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010A30);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007814);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000078D8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007A88);

s32 func_00007BB0(s32 arg0) {
    return ((arg0 - 2) << M2C_VFIELD(&D_0001BCC4, s32, 0x18)) + M2C_VFIELD(&D_0001BCC4, s32, 4);
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007BD4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007C30);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EB9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008028);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00008314);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000085D4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000086E8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008878);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008954);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008EFC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00009018);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FDA0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_000090A8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009398);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001028C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010420);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_000095BC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000096A8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009B3C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00009BF0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00009DC0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009F08);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00009F90);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010C90);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010DD0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000110C8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000111F4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011454);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00009FF4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A128);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A3AC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011318);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000113C4);
#endif

#if FW_VERSION == 260
void func_000113C4(s32 arg0) {
    if (D_0002C7CC != 0) {
        func_00011318(arg0);
    } else {
        func_0000A3AC(arg0);
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A460);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A698);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A714);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011518);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000115AC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011738);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001181C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011A78);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A744);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A7C0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A82C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A90C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011A58);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A99C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AAC4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000125A8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011BB4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011CE0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011D2C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011E44);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011EDC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AB38);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000ABF8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000ACF8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AD4C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AE30);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012280);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000122FC);
#endif

#if FW_VERSION == 260
void func_000122FC(void) {
    if (D_0002C7CC != 0) {
        func_00012280();
    } else {
        func_0000AE30();
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011FB4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000120D8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012310);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000125DC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AEAC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AFD0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B1D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000128A4);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012B7C);
#endif

#if FW_VERSION == 260
void func_00012B7C(s32 arg0, s32 arg1) {
    if (D_0002C7CC != 0) {
        func_000128A4(arg0, arg1);
    } else {
        func_0000B1D8(arg0, arg1);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B418);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000129A8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012ABC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012B30);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012BD8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012C50);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012D24);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B440);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B50C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012D40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B57C);
#endif

#if FW_VERSION == 100
void func_0000B57C(void) {
    D_000193FC = D_000193F8;
    func_00007718((s32) (&D_000193FC + 2), (s32) &D_00027804, 0x102);
    D_00027908 = M2C_FIELD(D_000276E4, s32 *, 0x1C);
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B5CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012E64);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012F30);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B650);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B71C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013110);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000131D8);
#endif

#if FW_VERSION == 260
void func_000131D8(s32 arg0, s32 arg1) {
    if (D_0002C7CC != 0) {
        func_00013110(arg0, arg1);
    } else {
        func_0000B71C(arg0, arg1);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013214);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_00013214(void *arg0) {
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

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013248);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000130D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B7E4);
#endif

#if FW_VERSION == 260
s32 func_0000B7E4(void *arg0) {
    s32 var_v0;

    if (D_0002C7CC == 0) {
        var_v0 = func_00013214(arg0);
    } else {
        var_v0 = func_00013248((s32) arg0);
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000132E8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013448);
#endif

#if FW_VERSION < 201
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

#if FW_VERSION < 260 || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B818);
#endif

#if FW_VERSION == 260
void func_0000B818(s32 arg0) {
    if (D_0002C7CC != 0) {
        func_00013448(arg0);
    } else {
        func_000132E8(arg0);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B978);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013684);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013558);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000136FC);
#endif

#if FW_VERSION == 260
void func_000136FC(s32 arg0, s32 arg1) {
    if (D_0002C7CC != 0) {
        func_00013684(arg0, arg1);
    } else {
        func_0000B978(arg0, arg1);
    }
}
#endif

#if FW_VERSION < 282
void func_0000BA20(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, -1) != 0x2E) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0) = 0x5C;
    M2C_FIELD(arg0, s8 *, 1) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001375C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000137A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000137DC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_000137DC(void *arg0) {
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

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013810);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000136B8);

void func_0001378C(void *arg0, u32 arg1) {
    u32 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xFA78), u32 *, 0x40);
    if ((temp_v1 < arg1) && (arg1 < (u32) (temp_v1 + M2C_FIELD(arg0, s32 *, 0x20)))) {
        M2C_FIELD(arg0, s32 *, 0xFAC4) = 0;
        M2C_FIELD(arg0, s32 *, 0xFAE0) = 0;
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BA44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BAF8);
#endif

#if FW_VERSION == 260
void func_0000BAF8(u32 arg0) {
    u32 temp_a1;

    temp_a1 = M2C_FIELD(D_0003F728, u32 *, 0x40);
    if ((temp_a1 < arg0) && (arg0 < (u32) (temp_a1 + D_0002EF50))) {
        M2C_VFIELD(&D_00027934, s32, 0x5C) = 0;
        M2C_VFIELD(&D_00027934, s32, 0x40) = 0;
    }
}
#endif

#if FW_VERSION < 201
void func_0000BAF8(u32 arg0) {
    u32 temp_a1;

    temp_a1 = M2C_FIELD(D_00027800, u32 *, 0x30);
    if ((temp_a1 < arg0) && (arg0 < (u32) (temp_a1 + D_0001BCE4))) {
        M2C_VFIELD(&D_00027934, s32, 0x4C) = 0;
        M2C_VFIELD(&D_00027934, s32, 0x30) = 0;
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BB3C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BBAC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013A44);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000139CC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013A18);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013AA8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013B38);
#endif

#if FW_VERSION == 260
void func_00013B38(s32 arg0, s32 arg1) {
    if (D_0002C7CC != 0) {
        func_00013A44(arg0, arg1);
    } else {
        func_0000BBAC(arg0);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013B74);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BC38);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BC84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013C58);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013B8C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013CD0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013EEC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000141A0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BCF0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BD30);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BE6C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013FE0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00014240);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00014AB8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000144CC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000146E0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000148F4);

void func_000149D4(void) {
    sceKernelDeleteFpl();
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_000149F0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00014CB4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C108);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D3B8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000144A8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001467C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C120);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00014AF8);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00014E4C);
#endif

#if FW_VERSION == 260
void func_00014E4C(s32 arg0) {
    if (D_0002C7CC != 0) {
        func_00014AF8(arg0);
    } else {
        func_0000C120(arg0);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00015094);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000154FC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007C04);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024BE0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024BF0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C3C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_000152C0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015468);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015AE8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00016270);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C7E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007CD8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007D5C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007E98);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008478);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008F04);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008F44);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00008FDC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000090B4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00009124);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000091F4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00009260);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00009BF4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A5FC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A63C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A6BC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A7FC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A93C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000A97C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000AB3C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B918);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000B9C8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BC5C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BDC4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BF24);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000BF78);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CF58);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CFA4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CFE8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D2E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D444);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D488);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D818);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DB94);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DBD4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DC90);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DD00);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DD40);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DED0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DF9C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DFDC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E0D0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E2B0);

s32 func_0000E3C0(struct Unk_func_0000E3C0_0 *arg0, s32 arg1) {
    return ((arg1 - 2) << arg0->unk18) + arg0->unk4;
}

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

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E428);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E81C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EC44);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EF38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F05C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F1FC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F2D8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F854);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FA38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FAC4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FD88);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FFBC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001016C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010780);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010854);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010A3C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010BB0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010C38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010C9C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010DDC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000110D4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011200);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011460);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000114F4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011524);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000115B8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011744);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011828);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011A84);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011AF8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011BC0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011CEC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011D38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011E50);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011EE8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011F80);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011FC0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000120E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001231C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000125E8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001294C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001298C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000129B4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012AC8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012B3C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012BE4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012C5C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012D30);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012E14);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012E54);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012F2C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013004);

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

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013078);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000130DC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001311C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001328C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000133F4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013434);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000134EC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013564);

void func_000135A8(struct Unk_func_000135A8_0 *arg0) {
    if (M2C_FIELD(arg0, s8 *, -1) != 0x2E) {
        return;
    }
    arg0->unk0 = 0x5C;
    arg0->unk1 = 0;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_000135CC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013614);

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

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013688);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000136C4);
#endif

#if FW_VERSION >= 310
void func_00013798(struct Unk_func_00013798_0 *arg0, u32 arg1) {
    u32 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xFA80), u32 *, 0x40);
    if ((temp_v1 < arg1) && (arg1 < (u32) (temp_v1 + arg0->unk20))) {
        M2C_FIELD(arg0, s32 *, 0xFACC) = 0;
        M2C_FIELD(arg0, s32 *, 0xFAE8) = 0;
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_00013798(struct Unk_func_00013798_0 *arg0, u32 arg1) {
    u32 temp_v1;

    temp_v1 = arg0->unkFA78->unk40;
    if ((temp_v1 < arg1) && (arg1 < (u32) (temp_v1 + arg0->unk20))) {
        arg0->unkFAC4 = 0;
        arg0->unkFAE0 = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000137D8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013858);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000138E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000139D8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013A24);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013AB4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013B24);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013B98);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013CDC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013EF8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000141AC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000142B0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000144D8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000146EC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00014900);

void func_000149E0(void) {
    sceKernelDeleteFpl();
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_000149FC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00014CC0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015060);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000150A0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015508);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_000155DC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000163EC);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00016484);
#endif

#if FW_VERSION == 260
void func_00016484(s32 arg0, s32 arg1) {
    if (D_0002C7CC != 0) {
        func_000163EC(arg0, arg1);
    } else {
        func_000155DC(arg0, arg1);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00015770);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000C928);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001568C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001573C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001577C);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015908);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000166C4);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001675C);
#endif

#if FW_VERSION == 260
void func_0001675C(s32 arg0, s32 arg1) {
    if (D_0002C7CC != 0) {
        func_000166C4(arg0, arg1);
    } else {
        func_00015908(arg0, arg1);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00015A9C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015CE4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015D28);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000165A0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00016FD0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00016798);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CB14);
#endif

#if FW_VERSION < 271
s32 func_0000CC88(void) {
    return D_00019E08;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000CC94);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00017164);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00017A14);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000183CC);
#endif

#if FW_VERSION == 260
void func_000183CC(s32 arg0, s32 arg1) {
    if (D_0002C7CC != 0) {
        func_00017A14(arg0, arg1);
    } else {
        func_00017164(arg0, arg1);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00017AFC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00017C48);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D440);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00018520);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00018638);
#endif

#if FW_VERSION == 260
void func_00018638(s32 arg0, s32 arg1) {
    if (D_0002C7CC != 0) {
        func_00018520(arg0, arg1);
    } else {
        func_0000D440(arg0, arg1);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00017DD4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00017F14);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D558);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D67C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000159B8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015A68);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015AA8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015CF0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00015D34);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000165AC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00016FDC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00017AC8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00017B08);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00017C54);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00017DA0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00017DE0);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/fatmsmod", func_00018074);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/fatmsmod", func_00017F20);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001815C);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00018228);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000D950);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00018234);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_00018570);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000185E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00018CC4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00018DE4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00018F24);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00019238);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001924C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00019418);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00019700);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000DCF4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019430);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019A48);
#endif

#if FW_VERSION == 260
void func_00019A48(s32 arg0) {
    if (D_0002C7CC != 0) {
        func_00019430(arg0);
    } else {
        func_0000DCF4(arg0);
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E318);

s32 func_0000E5E8(void) {
    D_00019E28 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000E5F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A1B8);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A630);
#endif

#if FW_VERSION == 260
void func_0001A630(s32 arg0) {
    if (D_0002C7CC != 0) {
        func_0001A1B8(arg0);
    } else {
        func_0000E5F8(arg0);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000185F0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00018CD0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00018DF0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00018F30);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00019244);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00019258);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00019424);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001970C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00019910);
#endif

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024D84);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019944);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EA3C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019950);
#endif

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024DA8);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024DAC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019B44);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A228);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000EC18);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F2CC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F58C);
#else
INCLUDE_ASM("nonmatchings/fatmsmod", func_00019B50);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A234);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A518);
#endif

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A620);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024BA0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024BA4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A3C4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A4C4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A5C4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A6C4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A7C4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A8C4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A9C4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002AAC4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002ABC4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002ACC4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002ADC4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002AEC4);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002AFC4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A794);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A8B8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AA2C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AB28);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B434);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B554);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B68C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B778);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B8B0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B968);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AE00);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001BA44);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001BB34);
#endif

#if FW_VERSION == 260
s32 func_0001BB34(void) {
    sceKernelDeleteFpl(D_0002D054);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001BB58);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B0BC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B1AC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B1FC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B2A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010BBC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00010C6C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F7D8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F8A4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F8F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001BEB0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001C304);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B7E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B910);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001BA4C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001BEA8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001CB38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001D5C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001C364);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001C468);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001C594);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_0000F95C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FD04);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FD3C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FE34);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0000FF1C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010238);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001D1FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DA7C);
#endif

#if FW_VERSION == 260
void func_0001DA7C(s32 arg0, s32 arg1, s32 arg2) {
    if (D_0002C7CC != 0) {
        func_0001D1FC(arg0, arg1, arg2);
    } else {
        func_00010238(arg0, arg1, arg2);
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00010A64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001E46C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001EE2C);
#endif

#if FW_VERSION == 260
void func_0001EE2C(s32 arg0) {
    if (D_0002C7CC != 0) {
        func_0001E46C(arg0);
    } else {
        func_00010A64(arg0);
    }
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011430);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F234);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DBD4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F448);
#endif

#if FW_VERSION == 260
void func_0001F448(s32 arg0, s32 arg1, s8 arg2) {
    if (D_0002C7CC != 0) {
        func_0001F234(arg0, arg1, (s32) arg2);
    } else {
        func_00011430(arg0, arg1, (s32) arg2);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_000117FC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000118E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F594);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F5E8);
#endif

#if FW_VERSION == 260
void func_0001F5E8(s32 arg0) {
    if (D_0002C7CC != 0) {
        func_0001F594(arg0);
    } else {
        func_000118E4(arg0);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DDC0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DF88);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001ECA4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001EEDC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001EFF8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00011910);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00011AB4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012480);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020690);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020984);
#endif

#if FW_VERSION == 260
void func_00020984(s32 arg0) {
    if (D_0002C7CC != 0) {
        func_00020690(arg0);
    } else {
        func_00012480(arg0);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F2D0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F344);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F554);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012710);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00012788);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020C0C);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020DC8);
#endif

#if FW_VERSION == 260
void func_00020DC8(void) {
    if (D_0002C7CC != 0) {
        func_00020C0C();
    } else {
        func_00012788();
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F768);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0002012C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00012964);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000216E0);
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 260) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022054);
#endif

#if FW_VERSION == 260
void func_00022054(s32 arg0, s32 arg1) {
    if (D_0002C7CC != 0) {
        func_000216E0(arg0, arg1);
    } else {
        func_00012964(arg0, arg1);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020B94);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00020CFC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013240);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000221CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00022314);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00020EB0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000216C4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021BD4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_0001337C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00013E3C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024DBC);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_00024DC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0001ACEC);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0001ADEC);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0001AEEC);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0001AFEC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00013EE0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00014220);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_0002329C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021D2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/fatmsmod", func_00015884);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_000158BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00023368);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00023384);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/fatmsmod", func_00007684);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000076CC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007878);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007760);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000077A8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021F14);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007838);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021FA0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000078D4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000078F4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007920);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007974);

s32 func_00008708(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0 & 0xFFFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 = (var_a0 - 0x20) & 0xFFFF;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022164);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022188);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000221B0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000221F8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022240);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000222A8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000222D8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022308);

s32 func_000088F8(s32 arg0) {
    return arg0 & 0xFF;
}

s8 func_00022338(s8 arg0) {
    return arg0;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022340);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00007B2C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0002257C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000225D0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000226D8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000227C0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000228E8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022BD4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022C8C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022D74);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022E1C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022EC4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022F7C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000230A8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000231D4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0002328C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00023344);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000233EC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A5E0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A6E0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A7E0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A8E0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002A9E0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002AAE0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002ABE0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002ACE0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002ADE0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002AEE0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002AFE0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002B0E0);

INCLUDE_RODATA("nonmatchings/fatmsmod", D_0002B1E0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A7A0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001A8C4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AA38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AB34);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AC78);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AD30);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AE0C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AEA8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001AEE4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B0C8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B1B8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B208);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B2B4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B790);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B7F0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001B91C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001BA58);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001BEB4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001CB44);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001D5CC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001D9CC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DBE0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DC2C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DD0C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DD38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DD8C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DDCC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001DF94);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001ECB0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001EEE8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F004);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F29C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F2DC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F350);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F560);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F734);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0001F774);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00020138);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00020B60);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00020BA0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00020D08);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00020E7C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00020EBC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000216D0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021BE0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021C94);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021D38);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021D78);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021D94);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021D30);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/fatmsmod", func_00021DB0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021DF8);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021E44);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021E8C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021ED4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021F20);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021F64);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00021FAC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022000);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0002204C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000220A0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000220F4);

s32 func_0002214C(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0 & 0xFFFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 = (var_a0 - 0x20) & 0xFFFF;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022170);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022194);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000221BC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022204);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0002224C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000222B4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000222E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022314);

s32 func_0002233C(s32 arg0) {
    return arg0 & 0xFF;
}

s8 func_00022344(s8 arg0) {
    return arg0;
}

INCLUDE_ASM("nonmatchings/fatmsmod", func_0002234C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_0002250C);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022588);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000225DC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000226E4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000227CC);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000228F4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022BE0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022C98);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022D80);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022E28);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022ED0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00022F88);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000230B4);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000231E0);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00023298);

INCLUDE_ASM("nonmatchings/fatmsmod", func_00023350);

INCLUDE_ASM("nonmatchings/fatmsmod", func_000233F8);
#endif
