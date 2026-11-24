/* cflags: -Os -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlInit);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlTerm);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlAddHandler);

#if FW_VERSION == 100
void sceNetApctlDelHandler(s32 arg0) {
    func_00000E28(arg0);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDelHandler);
#endif

#if FW_VERSION == 100
void sceNetApctlConnect(s32 arg0) {
    func_00002204(arg0);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlConnect);
#endif

#if FW_VERSION == 100
void sceNetApctlDisconnect(void) {
    func_00000FD0();
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDisconnect);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000028C);
#endif

#if FW_VERSION == 100
void sceNetApctl_lib_B3CF6849(void) {
    func_00000FF8();
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_B3CF6849);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_A9721D11);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000394);
#endif

#if FW_VERSION == 100
void sceNetApctl_lib_0C7FFA5C(s32 arg0, s32 arg1) {
    func_00001038(arg0, arg1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_0C7FFA5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000044C);
#endif

#if FW_VERSION == 100
void sceNetApctl_lib_96BEB231(s32 arg0, s32 arg1, s32 arg2) {
    func_00002388(arg0, arg1, arg2);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_96BEB231);
#endif

#if FW_VERSION == 100
void sceNetApctlGetInfo(s32 arg0, s32 arg1) {
    func_00001098(arg0, arg1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetInfo);
#endif

#if FW_VERSION == 100
void sceNetApctlGetState(void) {
    func_000010EC();
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetState);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_7CFAB990);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_E11BAFAB);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_internal_user_E9B2E5E6);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_internal_user_6BDDCB8C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_internal_user_04776994);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_A7BB73DF);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_6F5D2981);
#endif

#if FW_VERSION != 100
s32 sceNetApctl_lib_C519EDCD(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80410005;
    if (sceKernelCheckThreadStack() >= 0x13F0) {
        var_v1 = func_00002514(arg0);
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000964);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000002BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000038C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000C38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000050C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000788);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000B24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000B68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000CB0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000E28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000EC8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A68);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000B54);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000C38);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000FE4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000013E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001580);
#endif

