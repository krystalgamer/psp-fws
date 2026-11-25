#include "common.h"
#include "pspnet_ap_dialog_dummy_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyConnect);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyInit);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyTerm);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyGetState);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000228);

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/pspnet_ap_dialog_dummy", D_000007BC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000294);

#if FW_VERSION < 250
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000570);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000620);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000668);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000700);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_0000077C);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_000007AC);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_000007E4);
#endif
