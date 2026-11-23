#include "common.h"
#include "pspnet_adhoc_decls.h"

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocInit);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocTerm);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00000270);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_0000036C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_0000047C);

void func_00000490(void) {
    func_00002D2C();
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPollSocket);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00000974);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocSetSocketAlert);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocGetSocketAlert);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00000DD0);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00000E18);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00000E90);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00000ED8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00000F60);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00000FFC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00001044);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00001078);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPdpCreate);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPdpSend);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPdpDelete);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00001600);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00001C28);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPdpRecv);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_67346A2A);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_F9240FBA);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_1059683E);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000020A4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_0000223C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000022FC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocGetPdpStat);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_0000297C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000029E8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00002A6C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00002AFC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00002CD4);

s32 func_00002D20(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00002D2C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00002D94);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00002E48);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPtpOpen);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPtpConnect);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPtpListen);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPtpAccept);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPtpSend);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPtpRecv);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPtpFlush);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPtpClose);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00003A68);

void func_00003BB0(void *arg0) {
    func_00004B30(M2C_FIELD(arg0, s32 *, 0x14));
    func_00004AE4(arg0);
    func_00000FFC(arg0);
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00003BE8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00003D9C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004058);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004408);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_0000473C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_62B875A8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_2CA12790);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004964);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004A40);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004AE4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004B30);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004BD8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004DA4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004E98);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00005024);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocGetPtpStat);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000052D4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_0000532C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000053EC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00005594);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000055B0);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000055BC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000056E4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00005708);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000057CC);

INCLUDE_RODATA("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", D_0000789C);

INCLUDE_RODATA("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", D_000078A0);

INCLUDE_RODATA("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", D_000078A4);

INCLUDE_RODATA("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", D_000078AC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000058B8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000062FC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_0000660C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000067F8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000069D4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00006AA0);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_7F75C338);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_3278AB0C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_98C204C8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_A0229362);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00006F68);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00006F80);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_FA324B4E);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_AF6DFB15);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_0B2228E9);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000070E8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00007204);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00007298);
