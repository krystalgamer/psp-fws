/* cflags[151]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100,102]: -O2 -frename-registers */
#include "common.h"
#include "pspnet_ap_dialog_dummy_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyConnect);

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyInit);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", sceNetApDialogDummyTerm);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
int sceNetApDialogDummyTerm(void) {
    if (D_000009B0 != 0) {
        if (D_000009A0 >= 0) {
            sceNetApctlDelInternalHandler(D_000009A0);
        }
        D_000009B0 = 0;
        D_000009A0 = -1;
    }
    return 0;
}
#endif

#if FW_VERSION < 150
int sceNetApDialogDummyTerm(void) {
    if (D_00000990 != 0) {
        if (D_00000980 >= 0) {
            sceNetApctlDelHandler(D_00000980);
        }
        D_00000990 = 0;
        D_00000980 = -1;
    }
    return 0;
}
#endif

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

u8 *func_000007AC(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_ap_dialog_dummy", func_000007E4);
#endif
