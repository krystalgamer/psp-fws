#include "common.h"
#include "pspnet_adhoc_transfer_int_decls.h"

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00000000);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00000218);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_0000043C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00000464);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_000004A8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_000004E4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00000558);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00000580);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_69F19666);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_40D77905);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_AD0E88C6);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_9C6EE447);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_6D8B0D00);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00000B30);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00000D14);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00000D30);

s32 func_00000D58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x20);
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00000D60);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00000DB8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_552E0C4F);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_658833CC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_83FA2BBA);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_0B1F77E1);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_CD469448);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_E3707672);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_A735B9B2);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_B0975880);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_CD9F1D46);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_8897358A);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_0CAE4A7B);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_97D389A3);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_D438691D);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00001724);

s32 func_00001984(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    s32 var_v1;
    void *temp_v0;

    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, void **, 8) = NULL;
    if ((arg2 == 0) || (temp_v0 = func_000004E4(arg2), M2C_FIELD(arg0, void **, 8) = temp_v0, var_v1 = -1, (temp_v0 != NULL))) {
        M2C_FIELD(arg0, s32 *, 4) = arg2;
        sceNet_lib_EF097716(M2C_FIELD(arg0, void **, 8), arg3, arg2);
        sceNet_lib_EF097716(arg0 + 0xC, arg1, 6);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00001A18);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00001A74);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", func_00001AB8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_75DAEB6B);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_A64B28F7);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_48381015);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_6F595DFA);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_645E312A);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_24F04EF8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_541E3EAB);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_transfer_int/nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_7CFB68C9);
