/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhoc_transfer_int_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00000000);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00000218);

void func_0000043C(s32 arg0) {
    D_00002424 = 1;
    sceNetAdhocSetSocketAlert(arg0, 0x3F0);
}

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_00002130);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_00002134);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_00002140);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_00002150);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_00002160);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_00002178);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_0000218C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_000021A0);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_000021B0);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_000021C4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_000022B4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_000022BC);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_000022F4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_000022F8);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_0000231C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_transfer_int", D_00002334);
#endif

s32 func_00000464(u32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = sceKernelCreateVpl("SceNetAdhocTransferMemoryPool", 2, 0U, arg0, NULL);
    temp_v0 = __builtin_allegrex_min(temp_v0_2, 0);
    D_00002410 = temp_v0_2;
    return temp_v0;
}

void func_000004A8(void) {
    if (D_00002410 >= 0) {
        sceKernelDeleteVpl((u32) D_00002410);
        D_00002410 = -1;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_000004E4);

void func_00000558(void *arg0) {
    sceKernelFreeVpl((u32) D_00002410, arg0);
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00000580);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_69F19666);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_40D77905);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_AD0E88C6);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_9C6EE447);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_6D8B0D00);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00000B30);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00000D14);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00000D30);

s32 func_00000D58(struct Unk_func_00000D58_0 *arg0) {
    return arg0->unk20;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00000D60);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00000DB8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_552E0C4F);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_658833CC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_83FA2BBA);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_0B1F77E1);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_CD469448);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_E3707672);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_A735B9B2);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_B0975880);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_CD9F1D46);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_8897358A);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_0CAE4A7B);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_97D389A3);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_D438691D);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00001724);

s32 func_00001984(struct Unk_func_00001984_0 *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    s32 temp_v0;
    s32 var_v1;

    arg0->unk4 = arg2;
    arg0->unk8 = 0;
    if ((arg2 == 0) || (temp_v0 = func_000004E4(arg2), arg0->unk8 = temp_v0, var_v1 = -1, (temp_v0 != 0))) {
        arg0->unk4 = arg2;
        sceNet_lib_EF097716(arg0->unk8, arg3, arg2);
        sceNet_lib_EF097716((s32) ((u8 *)arg0 + 0xC), arg1, 6);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00001A18);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00001A74);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", func_00001AB8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_75DAEB6B);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_A64B28F7);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_48381015);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_6F595DFA);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_645E312A);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_24F04EF8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_541E3EAB);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_transfer_int", sceNetAdhocTransInt_7CFB68C9);
