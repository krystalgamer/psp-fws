/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhoc_decls.h"

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocInit);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocTerm);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00000270);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_0000036C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_0000047C);

void func_00000490(s32 arg0) {
    func_00002D2C(arg0);
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhocPollSocket);

s32 func_00000974(void *arg0, s32 arg1) {
    s32 var_s2;
    s32 var_s3;
    u8 temp_v1;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *var_s1;

    var_s3 = 0;
    var_s1 = arg0;
    if (arg1 > 0) {
        var_s2 = arg1;
        do {
            temp_a1 = M2C_FIELD(var_s1, void **, 0);
            temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x10);
            switch (temp_v1) {                      /* irregular */
            case 2:
                temp_s0 = M2C_FIELD(var_s1, void **, 4);
                M2C_FIELD(temp_s0, s32 *, 8) = func_00005024((s32) temp_a1, M2C_FIELD(temp_s0, s32 *, 4));
                break;
            case 1:
                temp_s0_2 = M2C_FIELD(var_s1, void **, 4);
                M2C_FIELD(temp_s0_2, s32 *, 8) = func_00002D94((s32) temp_a1, M2C_FIELD(temp_s0_2, s32 *, 4));
                break;
            }
            temp_v0 = M2C_FIELD(var_s1, void **, 4);
            var_s2 -= 1;
            var_s1 += 8;
            var_s3 += M2C_FIELD(temp_v0, s32 *, 8) != 0;
        } while (var_s2 != 0);
    }
    return var_s3;
}

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

void sceNetAdhoc_lib_F9240FBA(void) {
    sceNet_lib_57CC57DA(&D_000079CC, 0, 0x18);
}

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
    func_00004AE4((s32) arg0);
    func_00000FFC((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00003BE8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00003D9C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004058);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00004408);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_0000473C);

void sceNetAdhoc_lib_62B875A8(void) {
    sceNet_lib_57CC57DA(&D_000079E8, 0, 0x7C);
}

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

s32 func_00005594(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
    return 0;
}

void func_000055B0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xCC) = arg1;
    M2C_FIELD(arg0, s32 *, 0xD0) = arg2;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000055BC);

s32 func_000056E4(void *arg0, s32 arg1) {
    void *temp_a2;

    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
    M2C_FIELD(arg0, s32 *, 0xDC) = arg1;
    temp_a2 = M2C_FIELD(arg0, void **, 0x58);
    M2C_FIELD(temp_a2, s32 *, 0xC) = (s32) (M2C_FIELD(temp_a2, s32 *, 0xC) | 0x1000);
    return 0;
}

void func_00005708(void *arg0) {
    s32 temp_s2;
    void *temp_a1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x10);
    if (var_s0 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_s0, void **, 8);
            temp_s2 = M2C_FIELD(var_s0, s32 *, 0x58);
            if (temp_a1 != NULL) {
                M2C_FIELD(temp_a1, void ***, 0xC) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            } else {
                M2C_FIELD(arg0, void ***, 0x14) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            }
            *M2C_FIELD(var_s0, void ***, 0xC) = temp_a1;
            M2C_FIELD(arg0, s32 *, 0xD8) = (s32) (M2C_FIELD(arg0, s32 *, 0xD8) - 1);
            func_00004E98((s32) var_s0);
            func_00005708(var_s0);
            func_00004AE4(temp_s2);
            func_00000FFC(temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    sceNet_lib_57CC57DA(arg0 + 0x18, 0, 6);
    sceNet_lib_57CC57DA(arg0 + 0x1E, 0, 6);
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    func_00004B30((s32) arg0);
}

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

s32 func_00006F68(void) {
    D_000079C0.unk0 = 0;
    D_000079C0.unk4 = &D_000079C0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00006F80);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_FA324B4E);

void sceNetAdhoc_lib_AF6DFB15(s32 arg0, s32 arg1) {
    func_00007298(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", sceNetAdhoc_0B2228E9);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_000070E8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00007204);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc/nonmatchings/pspnet_adhoc", func_00007298);
