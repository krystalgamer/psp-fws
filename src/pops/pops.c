/* compiler[302,303,310,311,330,340]: 1.9.2 */
/* cflags[302,303,310,311,330,340]: -O2 -mext */
#include "common.h"
#include "pops_decls.h"

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pops", D_0002AED4);

INCLUDE_RODATA("nonmatchings/pops", D_0002AED8);

INCLUDE_RODATA("nonmatchings/pops", D_0002AEEC);

INCLUDE_RODATA("nonmatchings/pops", D_0002AEF8);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/pops", D_0002BA04);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/pops", D_0002AF04);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pops", D_0002AF14);

INCLUDE_RODATA("nonmatchings/pops", D_0002AF20);

INCLUDE_RODATA("nonmatchings/pops", D_0002AF30);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/pops", D_0002BA40);

INCLUDE_RODATA("nonmatchings/pops", D_0002BA4C);

INCLUDE_RODATA("nonmatchings/pops", D_0002BA5C);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/pops", D_0002AF40);

INCLUDE_RODATA("nonmatchings/pops", D_0002AF4C);

INCLUDE_RODATA("nonmatchings/pops", D_0002AF5C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pops", D_0002AF6C);

INCLUDE_RODATA("nonmatchings/pops", D_0002AF78);

INCLUDE_RODATA("nonmatchings/pops", D_0002AF88);

INCLUDE_RODATA("nonmatchings/pops", D_0002AF98);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/pops", D_0002BAB0);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/pops", D_0002AFB0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pops", D_0002AFC4);

INCLUDE_RODATA("nonmatchings/pops", D_0002AFD8);

INCLUDE_RODATA("nonmatchings/pops", D_0002AFF0);

INCLUDE_RODATA("nonmatchings/pops", D_0002B008);

INCLUDE_RODATA("nonmatchings/pops", D_0002B018);

INCLUDE_RODATA("nonmatchings/pops", D_0002B038);

INCLUDE_RODATA("nonmatchings/pops", D_0002B04C);

INCLUDE_RODATA("nonmatchings/pops", D_0002B054);

INCLUDE_RODATA("nonmatchings/pops", D_0002B05C);

INCLUDE_RODATA("nonmatchings/pops", D_0002B068);

INCLUDE_RODATA("nonmatchings/pops", D_0002B0A4);

INCLUDE_RODATA("nonmatchings/pops", D_0002B0B8);

INCLUDE_RODATA("nonmatchings/pops", D_0002B0C0);

INCLUDE_RODATA("nonmatchings/pops", D_0002B0D4);

INCLUDE_RODATA("nonmatchings/pops", D_0002B0E8);

INCLUDE_RODATA("nonmatchings/pops", D_0002B0EC);

INCLUDE_RODATA("nonmatchings/pops", D_0002B104);

INCLUDE_RODATA("nonmatchings/pops", D_0002B11C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/pops", D_0002BC4C);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/pops", D_0002B148);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pops", D_0002B15C);

INCLUDE_RODATA("nonmatchings/pops", D_0002B1B4);

INCLUDE_RODATA("nonmatchings/pops", D_0002B1E8);

INCLUDE_RODATA("nonmatchings/pops", D_0002B1F0);

INCLUDE_RODATA("nonmatchings/pops", D_0002B1F4);

INCLUDE_RODATA("nonmatchings/pops", D_0002B240);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/pops", D_0002A000);

INCLUDE_ASM("nonmatchings/pops", func_00000000);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/pops", func_00000040);

INCLUDE_ASM("nonmatchings/pops", func_000000C8);

INCLUDE_RODATA("nonmatchings/pops", D_00038250);

INCLUDE_RODATA("nonmatchings/pops", D_00038268);

INCLUDE_RODATA("nonmatchings/pops", D_00038278);
#endif

INCLUDE_ASM("nonmatchings/pops", module_start);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/pops", func_00000068);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/pops", D_0002BD7C);

INCLUDE_RODATA("nonmatchings/pops", D_0002BD8C);

INCLUDE_RODATA("nonmatchings/pops", D_0002BD9C);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/pops", func_000001FC);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/pops", module_stop);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/pops", D_00031A48);

INCLUDE_RODATA("nonmatchings/pops", D_00031A4C);

INCLUDE_RODATA("nonmatchings/pops", D_00031A50);
#endif

#if FW_VERSION < 311
INCLUDE_ASM("nonmatchings/pops", module_stop);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/pops", func_000004F0);
#endif

#if FW_VERSION >= 350
s32 func_00000668(void) {
    sceImpose_A9884B00(0);
    sceKernelExitGame();
    return 0;
}
#else
s32 func_00000668(void) {
    sceKernelExitGame();
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/pops", func_000001D4);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/pops", func_0000022C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/pops", func_0000078C);
#endif

#if FW_VERSION >= 330
void func_0000048C(void) {
    func_00000DA0();
    func_000011B4();
    func_0000ACA8();
    func_0000BC28();
    func_0000B2BC();
    func_0000C0C4();
    func_0000E910();
    func_0002439C();
    func_00010284();
    func_0000C330();
    func_0000357C();
    func_0000078C();
}
#else
INCLUDE_ASM("nonmatchings/pops", func_00000688);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/pops", func_00000748);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/pops", func_000005D0);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/pops", func_0000076C);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/pops", func_0000078C);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/pops", func_00000958);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/pops", func_000006D0);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/pops", func_000008C4);
#endif

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/pops", func_000009C0);

INCLUDE_ASM("nonmatchings/pops", func_00000B00);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/pops", func_00000D44);
#endif

#if FW_VERSION < 340
INCLUDE_ASM("nonmatchings/pops", func_00000BB0);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/pops", func_00000AF0);

INCLUDE_ASM("nonmatchings/pops", func_00000B68);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/pops", func_00000C34);

INCLUDE_ASM("nonmatchings/pops", func_00000E00);

INCLUDE_ASM("nonmatchings/pops", func_00000E80);

s32 func_00000F24(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/pops", func_00000F2C);

INCLUDE_ASM("nonmatchings/pops", func_00000FDC);

INCLUDE_ASM("nonmatchings/pops", func_00001088);

INCLUDE_ASM("nonmatchings/pops", func_000010DC);

INCLUDE_ASM("nonmatchings/pops", func_00001148);

INCLUDE_ASM("nonmatchings/pops", func_000011B0);

INCLUDE_ASM("nonmatchings/pops", func_000011EC);

INCLUDE_ASM("nonmatchings/pops", func_00001224);

INCLUDE_ASM("nonmatchings/pops", func_00001324);

INCLUDE_ASM("nonmatchings/pops", func_000013FC);

INCLUDE_ASM("nonmatchings/pops", func_0000147C);

INCLUDE_ASM("nonmatchings/pops", func_00001518);

INCLUDE_ASM("nonmatchings/pops", func_00001564);

INCLUDE_ASM("nonmatchings/pops", func_000015D0);

INCLUDE_ASM("nonmatchings/pops", func_000016B8);

INCLUDE_ASM("nonmatchings/pops", func_000017B8);

INCLUDE_ASM("nonmatchings/pops", func_0000197C);

INCLUDE_ASM("nonmatchings/pops", func_00001D70);

INCLUDE_ASM("nonmatchings/pops", func_0000216C);

INCLUDE_ASM("nonmatchings/pops", func_0000230C);

INCLUDE_ASM("nonmatchings/pops", func_000023F4);

INCLUDE_ASM("nonmatchings/pops", func_00002434);

INCLUDE_ASM("nonmatchings/pops", func_000024B8);

INCLUDE_ASM("nonmatchings/pops", func_00002568);

INCLUDE_RODATA("nonmatchings/pops", D_000382DC);

INCLUDE_RODATA("nonmatchings/pops", D_000382FC);

INCLUDE_ASM("nonmatchings/pops", func_000025F4);

INCLUDE_ASM("nonmatchings/pops", func_00002CA4);

INCLUDE_ASM("nonmatchings/pops", func_00003000);

INCLUDE_ASM("nonmatchings/pops", func_00003430);

INCLUDE_ASM("nonmatchings/pops", func_000034C0);

INCLUDE_ASM("nonmatchings/pops", func_00003524);

INCLUDE_ASM("nonmatchings/pops", func_00003550);

INCLUDE_ASM("nonmatchings/pops", func_000035B4);

INCLUDE_ASM("nonmatchings/pops", func_000035DC);

INCLUDE_ASM("nonmatchings/pops", func_00003800);

INCLUDE_ASM("nonmatchings/pops", func_0000399C);

INCLUDE_ASM("nonmatchings/pops", func_00003A94);

INCLUDE_ASM("nonmatchings/pops", func_00003AF8);

INCLUDE_ASM("nonmatchings/pops", func_00003B24);

INCLUDE_ASM("nonmatchings/pops", func_00003B48);

INCLUDE_ASM("nonmatchings/pops", func_00003B9C);

INCLUDE_ASM("nonmatchings/pops", func_00003C20);

INCLUDE_ASM("nonmatchings/pops", func_00003C8C);

INCLUDE_ASM("nonmatchings/pops", func_00003D08);

INCLUDE_ASM("nonmatchings/pops", func_00003DF8);

INCLUDE_ASM("nonmatchings/pops", func_00003EA4);

INCLUDE_ASM("nonmatchings/pops", func_00003F24);

INCLUDE_ASM("nonmatchings/pops", func_00003F48);

INCLUDE_ASM("nonmatchings/pops", func_00003F68);

INCLUDE_ASM("nonmatchings/pops", func_000041DC);

INCLUDE_ASM("nonmatchings/pops", func_00004420);

INCLUDE_ASM("nonmatchings/pops", func_000044C8);

INCLUDE_ASM("nonmatchings/pops", func_00004608);

INCLUDE_RODATA("nonmatchings/pops", D_0003856C);

INCLUDE_ASM("nonmatchings/pops", func_0000471C);

INCLUDE_ASM("nonmatchings/pops", func_00004AA4);

INCLUDE_ASM("nonmatchings/pops", func_00005168);

INCLUDE_ASM("nonmatchings/pops", func_000051E0);

INCLUDE_ASM("nonmatchings/pops", func_000065C0);

INCLUDE_ASM("nonmatchings/pops", func_000067D4);

INCLUDE_ASM("nonmatchings/pops", func_00006900);

INCLUDE_ASM("nonmatchings/pops", func_00006AEC);

INCLUDE_ASM("nonmatchings/pops", func_00006B40);

INCLUDE_ASM("nonmatchings/pops", func_00006CD0);

INCLUDE_ASM("nonmatchings/pops", func_00006D98);

INCLUDE_ASM("nonmatchings/pops", func_00006F74);

INCLUDE_ASM("nonmatchings/pops", func_0000712C);

INCLUDE_ASM("nonmatchings/pops", func_000073A4);

INCLUDE_ASM("nonmatchings/pops", func_00007404);

INCLUDE_ASM("nonmatchings/pops", func_000075B0);

INCLUDE_ASM("nonmatchings/pops", func_0000779C);

INCLUDE_ASM("nonmatchings/pops", func_00007850);

INCLUDE_ASM("nonmatchings/pops", func_000078CC);

INCLUDE_ASM("nonmatchings/pops", func_00007954);

INCLUDE_ASM("nonmatchings/pops", func_000079E4);

INCLUDE_ASM("nonmatchings/pops", func_00007A44);

INCLUDE_ASM("nonmatchings/pops", func_00007AEC);

void func_00007BF0(void) {
    func_00009A58();
}

INCLUDE_ASM("nonmatchings/pops", func_00007C0C);

INCLUDE_ASM("nonmatchings/pops", func_00007D2C);

INCLUDE_ASM("nonmatchings/pops", func_00007D48);

INCLUDE_ASM("nonmatchings/pops", func_00007E2C);

INCLUDE_ASM("nonmatchings/pops", func_00007E88);

INCLUDE_ASM("nonmatchings/pops", func_00007EC8);

INCLUDE_ASM("nonmatchings/pops", func_00008010);

INCLUDE_ASM("nonmatchings/pops", func_00008070);

INCLUDE_ASM("nonmatchings/pops", func_000080E8);

INCLUDE_ASM("nonmatchings/pops", func_000081D0);

INCLUDE_ASM("nonmatchings/pops", func_0000822C);

void func_0000825C(void) {
}

INCLUDE_ASM("nonmatchings/pops", func_00008264);

INCLUDE_ASM("nonmatchings/pops", func_000082E4);

INCLUDE_ASM("nonmatchings/pops", func_00008374);

INCLUDE_ASM("nonmatchings/pops", func_00008608);

INCLUDE_ASM("nonmatchings/pops", func_00008824);

INCLUDE_ASM("nonmatchings/pops", func_0000889C);

INCLUDE_ASM("nonmatchings/pops", func_00008B30);

INCLUDE_ASM("nonmatchings/pops", func_00008DC4);

INCLUDE_ASM("nonmatchings/pops", func_00009058);

INCLUDE_ASM("nonmatchings/pops", func_000090B4);

INCLUDE_ASM("nonmatchings/pops", func_0000922C);

INCLUDE_ASM("nonmatchings/pops", func_000093A4);

INCLUDE_ASM("nonmatchings/pops", func_0000951C);

INCLUDE_ASM("nonmatchings/pops", func_00009570);

INCLUDE_ASM("nonmatchings/pops", func_000095C4);

INCLUDE_ASM("nonmatchings/pops", func_000095F8);

INCLUDE_ASM("nonmatchings/pops", func_0000963C);

INCLUDE_ASM("nonmatchings/pops", func_00009678);

INCLUDE_ASM("nonmatchings/pops", func_000096DC);

INCLUDE_ASM("nonmatchings/pops", func_00009718);

INCLUDE_ASM("nonmatchings/pops", func_00009760);

INCLUDE_ASM("nonmatchings/pops", func_000097C0);

INCLUDE_ASM("nonmatchings/pops", func_000097EC);

INCLUDE_ASM("nonmatchings/pops", func_00009814);

INCLUDE_ASM("nonmatchings/pops", func_00009874);

INCLUDE_ASM("nonmatchings/pops", func_000098D4);

INCLUDE_ASM("nonmatchings/pops", func_0000993C);

INCLUDE_ASM("nonmatchings/pops", func_00009988);

INCLUDE_ASM("nonmatchings/pops", func_00009A58);

INCLUDE_ASM("nonmatchings/pops", func_00009CF8);

INCLUDE_ASM("nonmatchings/pops", func_00009E74);

INCLUDE_ASM("nonmatchings/pops", func_00009EB8);

INCLUDE_ASM("nonmatchings/pops", func_00009F9C);

INCLUDE_ASM("nonmatchings/pops", func_0000A3D4);

INCLUDE_ASM("nonmatchings/pops", func_0000A3F8);

INCLUDE_ASM("nonmatchings/pops", func_0000A464);

INCLUDE_ASM("nonmatchings/pops", func_0000A478);

INCLUDE_ASM("nonmatchings/pops", func_0000A4B0);

INCLUDE_ASM("nonmatchings/pops", func_0000A54C);

INCLUDE_ASM("nonmatchings/pops", func_0000A60C);

INCLUDE_ASM("nonmatchings/pops", func_0000A744);

INCLUDE_ASM("nonmatchings/pops", func_0000A804);

INCLUDE_ASM("nonmatchings/pops", func_0000A82C);

INCLUDE_ASM("nonmatchings/pops", func_0000A894);

INCLUDE_ASM("nonmatchings/pops", func_0000A944);

INCLUDE_ASM("nonmatchings/pops", func_0000A9CC);

INCLUDE_RODATA("nonmatchings/pops", D_00038760);

INCLUDE_ASM("nonmatchings/pops", func_0000AA58);

INCLUDE_ASM("nonmatchings/pops", func_0000AAB4);

INCLUDE_ASM("nonmatchings/pops", func_0000ABC0);

INCLUDE_ASM("nonmatchings/pops", func_0000AD30);

INCLUDE_ASM("nonmatchings/pops", func_0000ADC0);

INCLUDE_ASM("nonmatchings/pops", func_0000B018);

INCLUDE_ASM("nonmatchings/pops", func_0000B194);

INCLUDE_ASM("nonmatchings/pops", func_0000B28C);

INCLUDE_ASM("nonmatchings/pops", func_0000B2D4);

INCLUDE_ASM("nonmatchings/pops", func_0000B34C);

INCLUDE_ASM("nonmatchings/pops", func_0000B384);

INCLUDE_ASM("nonmatchings/pops", func_0000B470);

INCLUDE_ASM("nonmatchings/pops", func_0000B4E0);

INCLUDE_ASM("nonmatchings/pops", func_0000B560);

s32 func_0000B784(void) {
    return D_001212C0;
}

INCLUDE_ASM("nonmatchings/pops", func_0000B790);

INCLUDE_ASM("nonmatchings/pops", func_0000B7BC);

INCLUDE_ASM("nonmatchings/pops", func_0000B80C);

INCLUDE_ASM("nonmatchings/pops", func_0000B860);

INCLUDE_ASM("nonmatchings/pops", func_0000B8A8);
#endif
