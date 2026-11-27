/* cflags[152]: -O2 -frename-registers */
/* cflags[151]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100]: -O2 -frename-registers */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlInit);

#if FW_VERSION < 250
s32 sceNetApctlTerm(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (D_00008220 != 0) {
        temp_v0 = func_00000CB0();
        if (temp_v0 >= 0) {
            D_00008220 = 0;
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlTerm);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlAddHandler);
#endif

#if FW_VERSION == 150
s32 sceNetApctlAddHandler(s32 arg0, s32 arg1) {
    void *sp0;
    s32 var_v0;

    var_v0 = func_00000D60(arg0, arg1, &sp0, 0);
    if (var_v0 >= 0) {
        var_v0 = sp0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
s32 sceNetApctlAddHandler(s32 arg0, s32 arg1) {
    void *sp0;
    s32 var_v0;

    var_v0 = func_00000D54(arg0, arg1, &sp0);
    if (var_v0 >= 0) {
        var_v0 = sp0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
s32 sceNetApctlAddHandler(s32 arg0, s32 arg1) {
    void *sp0;
    s32 temp_v0;

    temp_v0 = func_00000D60(arg0, arg1, &sp0, 0);
    return (temp_v0 >= 0) ? sp0 : temp_v0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDelHandler);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void sceNetApctlDelHandler(s32 arg0) {
    func_00000F18(arg0, 0);
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlConnect);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDisconnect);
#endif

#if FW_VERSION == 100
void sceNetApctlDelHandler(s32 arg0) {
    func_00000E28(arg0);
}
#endif

#if FW_VERSION < 250
void sceNetApctlConnect(s32 arg0) {
    func_00002204(arg0);
}

void sceNetApctlDisconnect(void) {
    func_00000FD0();
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000028C);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlScan);
#endif

#if FW_VERSION < 250
void sceNetApctlScan(void) {
    func_00000FF8();
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlScanSSID);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000394);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetBSSDescIDList);
#endif

#if FW_VERSION < 250
void sceNetApctlGetBSSDescIDList(s32 arg0, s32 arg1) {
    func_00001038(arg0, arg1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000044C);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetBSSDescEntry);
#endif

#if FW_VERSION < 250
void sceNetApctlGetBSSDescEntry(s32 arg0, s32 arg1, s32 arg2) {
    func_00002388(arg0, arg1, arg2);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000004E4);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetInfo);
#else
void sceNetApctlGetInfo(s32 arg0, s32 arg1) {
    func_00001098(arg0, arg1);
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetState);
#else
void sceNetApctlGetState(void) {
    func_000010EC();
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlAddInternalHandler);
#endif

#if FW_VERSION == 150
s32 sceNetApctlAddInternalHandler(s32 arg0, s32 arg1) {
    void *sp0;
    s32 var_v0;

    var_v0 = func_00000D60(arg0, arg1, &sp0, 1);
    if (var_v0 >= 0) {
        var_v0 = sp0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
s32 sceNetApctlAddInternalHandler(s32 arg0, s32 arg1) {
    void *sp0;
    s32 temp_v0;

    temp_v0 = func_00000D60(arg0, arg1, &sp0, 1);
    return (temp_v0 >= 0) ? sp0 : temp_v0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDelInternalHandler);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void sceNetApctlDelInternalHandler(s32 arg0) {
    func_00000F18(arg0, 1);
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlScanUser);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void sceNetApctlScanUser(void) {
    func_00000FF8();
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetBSSDescIDListUser);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void sceNetApctlGetBSSDescIDListUser(s32 arg0, s32 arg1) {
    func_00001038(arg0, arg1);
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetBSSDescEntryUser);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
void sceNetApctlGetBSSDescEntryUser(s32 arg0, s32 arg1, s32 arg2) {
    func_00002388(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlAddInternal03Handler);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDelInternal03Handler);
#endif

#if (FW_VERSION >= 260 && FW_VERSION < 282) || FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_C519EDCD);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000964);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A1C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000009BC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A68);
#endif

#if FW_VERSION == 282
s32 sceNetApctl_lib_C519EDCD(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80410005;
    if (sceKernelCheckThreadStack() >= 0x13F0) {
        var_v1 = func_00002514(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000964);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000002BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000038C);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000C38);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D98);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D54);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000010A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000014A4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001550);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000050C);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000788);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A30);
#endif

#if FW_VERSION < 250
s32 func_00000A30(void *arg0, s32 arg1) {
    if (arg1 == 6) {
        if (M2C_FIELD(arg0, s32 *, 0x6C8) > 0) {
            func_00002480((s32) arg0);
        }
    }
    sceWlanDevDetach();
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000002BC);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A74);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000B24);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000016AC);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001914);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000019DC);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001B44);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001C3C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000021E0);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000010EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000020DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00002024);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000B68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D60);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000CB0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000F18);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000FE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D54);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000E28);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000EC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A68);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000B54);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010650);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010654);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010664);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010678);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010688);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106A0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106AC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106BC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106CC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106E0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106F8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010710);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010720);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010730);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_0001073C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000107A4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000107B4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000107EC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010808);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010820);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010824);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010828);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010880);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010898);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000108A0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000108C0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000108F8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_0001095C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010968);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_0001096C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000C38);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D98);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000FE4);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000013E0);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001580);
#endif
