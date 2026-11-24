#include "common.h"
#include "pspnet_ap_dialog_dummy_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyConnect);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyInit);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyTerm);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyGetState);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000228);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000294);
#endif

#if FW_VERSION == 100
s32 module_start(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000570);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000620);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000668);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000700);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_0000077C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_000007AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_000007E4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/pspnet_ap_dialog_dummy", D_000007BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_00000294);
#endif
