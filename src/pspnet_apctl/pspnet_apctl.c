/* cflags: -Os -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlInit);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlTerm);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlAddHandler);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDelHandler);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlConnect);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDisconnect);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000028C);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_B3CF6849);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_A9721D11);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000394);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_0C7FFA5C);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000044C);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_96BEB231);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetInfo);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetState);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_7CFAB990);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_E11BAFAB);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_internal_user_E9B2E5E6);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_internal_user_6BDDCB8C);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_internal_user_04776994);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_A7BB73DF);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_6F5D2981);

s32 sceNetApctl_lib_C519EDCD(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80410005;
    if (sceKernelCheckThreadStack() >= 0x13F0) {
        var_v1 = func_00002514(arg0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000964);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A68);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000B54);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000C38);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D98);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000FE4);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000013E0);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001580);

