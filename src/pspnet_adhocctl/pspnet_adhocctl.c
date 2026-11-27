/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhocctl_decls.h"

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000000);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005D84);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005D88);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005D98);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005DA8);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005DC0);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005DD4);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005DE4);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005DF0);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005E00);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005E10);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005E28);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005E40);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005E54);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005E64);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005E74);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005F3C);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005F50);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005F90);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005F94);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005F9C);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005FE8);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00005FF0);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006010);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000603C);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006088);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000608C);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006094);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006098);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlInit);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlJoin);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlCreateEnterGameMode);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlJoinEnterGameMode);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetPeerList);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetPeerInfo);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetAddrByName);
#else
s32 sceNetAdhocctlTerm(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (D_000062B0 != 0) {
        temp_v0 = func_000018F8();
        if (temp_v0 >= 0) {
            D_000062B0 = 0;
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlTerm);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlConnect);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlCreate);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlJoin);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlJoinEnterGameMode);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlScan);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlDisconnect);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlExitGameMode);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlAddHandler);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlDelHandler);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceNetAdhocctlGetState(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0x80410B08;
    if (D_000062B0 != 0) {
        var_v0 = 0x80410B04;
        if (arg0 != NULL) {
            var_v0 = func_000023B4(arg0);
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION < 150
s32 sceNetAdhocctlGetState(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0x80410B08;
    if (D_000062B0 != 0) {
        var_v0 = 0x80410B04;
        if (arg0 != NULL) {
            var_v0 = _sce_pspnet_adhocctl_get_state(arg0);
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceNetAdhocctlGetState(s32 *arg0) {
    s32 var_a1;
    s32 var_v1;

    var_v1 = 0x80410005;
    if (sceKernelCheckThreadStack() >= 0xBF0) {
        var_a1 = 0x80410B08;
        if (D_00005960 != 0) {
            var_a1 = 0x80410B04;
            if (arg0 != NULL) {
                var_a1 = func_000023B4(arg0);
            }
        }
        var_v1 = var_a1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocctlGetState(s32 *arg0) {
    s32 var_a1;
    s32 var_v1;

    var_v1 = 0x80410005;
    if (sceKernelCheckThreadStack() >= 0xBF0) {
        var_a1 = 0x80410B08;
        if (D_000062B0 != 0) {
            var_a1 = 0x80410B04;
            if (arg0 != NULL) {
                var_a1 = func_000030BC(arg0);
            }
        }
        var_v1 = var_a1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetAdhocId);
#else
s32 sceNetAdhocctlGetAdhocId(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80410B08;
    if (D_000062B0 != 0) {
        var_v0 = 0x80410B04;
        if (arg0 != NULL) {
            var_v0 = func_000022A4(arg0);
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetPeerList);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetAddrByName);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetNameByAddr);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetParameter);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetScanInfo);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetGameModeInfo);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_EFA6AEAF);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetThreadExitDeleteEventFlag);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000854);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000890);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlAddInternalHandler);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", LinkDiscoverSkip);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_CDEA7ACB);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_1A2B6D03);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void sceNetAdhocctlRequestSuspend(void) {
    func_0000338C();
}
#endif

#if FW_VERSION >= 282
void sceNetAdhocctlRequestSuspend(void) {
    func_00003360();
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlHostDiscoverStart);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000F98);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000B74);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000AD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000120C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000148C);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001580);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000FC0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001874);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001BA0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001D84);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001F90);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000013A0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000E50);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001154);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000014B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000EF4);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000011F8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001BBC);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001DA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001558);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002038);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000610C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001BD4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001498);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000155C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000155C(s32 arg0, s32 arg1) {
    sceNetMemset(arg1, 0, 0x21);
    func_00001BD4(arg0, arg1, 0x47, arg0 + 0x24);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000015AC);
#endif

#if FW_VERSION >= 282
void func_00002014(struct Unk_func_00002014_0 *arg0) {
    sceNetConfigSetIfEventFlag(&D_0000610C, 0, 0);
    sceNetConfigDownInterface(&D_0000610C);
    sceWlanDevDetach();
    arg0->unk8 = 0;
}
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000610C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001BD4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002E70);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006240);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000184C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001EBC);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001F78);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002180);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002A50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000019B8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001720);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000018F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002320);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000258C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000023B4_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002448);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002500);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002614);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000019B8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001BE8);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001C5C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001CD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002068);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000021BC);

void func_00002280(s32 arg0, s32 arg1) {
    sceNetMemset(arg1, 0, 0x21);
    func_00002068(arg0, arg1, 0x47, arg0 + 0x24);
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000022D0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000243C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000025D0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000026C0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000028C8);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000029D0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002A80);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002B48);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002BDC);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002C70);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002D28);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002E3C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002F2C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000020A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000027C8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000020F0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002138);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000220C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000023B4(s32 *arg0) {
    *arg0 = D_00006400;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000028AC);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000028D8);
#endif

#if FW_VERSION < 150
s32 _sce_pspnet_adhocctl_get_state(s32 *arg0) {
    *arg0 = D_00006400;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000022A4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_VFIELD(&D_00005BE4, s32, 0x6DC);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_VFIELD(&D_00005BE4, s32, 0x6E0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_VFIELD(&D_00005BE4, s32, 0x6E4);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_VFIELD(&D_00005BE4, s32, 0x6E8);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000022A4);
#endif

#if FW_VERSION == 100
s32 func_000022A4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_VFIELD(&D_000063F4, s32, 0x6D4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_VFIELD(&D_000063F4, s32, 0x6D8);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_VFIELD(&D_000063F4, s32, 0x6DC);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_VFIELD(&D_000063F4, s32, 0x6E0);
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000022D4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002F90);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002FF0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003050);

s32 func_000030BC(s32 *arg0) {
    *arg0 = D_000062BC;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000030D0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000030FC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003190);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002484);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002528);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002598);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000029E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002A50);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002AE0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000032F8);

s32 func_0000338C(void) {
    return scePowerRequestSuspend();
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000033A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002B3C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003864);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002E70);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000024FC);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000258C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000025E0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002650);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000026FC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000023D8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000028B0);
#endif

#if FW_VERSION < 282
void func_00002984(s32 arg0) {
    void *sp0;
    M2C_UNK sp4;

    func_00002A24(arg0, &sp0, (s32) &sp4);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003204);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003270);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000032CC);

s32 func_00003360(void) {
    return scePowerRequestSuspend();
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000337C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003410);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003840);

void func_00003958(s32 arg0) {
    void *sp0;
    M2C_UNK sp4;

    func_00003A00(arg0, &sp0, (s32) &sp4);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003978);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002A24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000032AC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004364);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003A74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000044B0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002B38);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003304);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003A00);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003B80);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000432C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004D48);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000515C);
#endif

#if FW_VERSION < 103 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000051D0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003ED4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000042E4);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004730);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000047F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004A10);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000052A8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005640);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004EC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004D94);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_000059E8);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_000059F0);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006144);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006284);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004E24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00004E78(void) {
    if (D_00005B50 >= 0) {
        sceKernelDeleteSema((u32) D_00005B50);
    }
    D_00005B50 = -1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00004E78(void) {
    if (D_00005B50 > 0) {
        sceKernelDeleteSema((u32) D_00005B50);
    }
    D_00005B50 = -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004EB4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004EB4(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelGetThreadId();
    var_v1 = 0;
    if (temp_v0 != D_00005B54) {
        sceKernelWaitSema(D_00005B50, 1, NULL);
        D_00005B54 = temp_v0;
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00004F10(s32 arg0) {
    if (arg0 == 0) {

    } else {
        D_00005B54 = -1;
        sceKernelSignalSema(D_00005B50, 1);
    }
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", get_taginfo);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000048CC);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000048F8);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004924);

M2C_UNK *func_00004938(void) {
    return &D_00006361;
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004944);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000497C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000049F0);

u8 *func_00004A30(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004A64);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005050);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004A90);

void func_00004AD0(s32 arg0, s32 arg1) {
    func_0000497C(arg1, arg0);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004AF4);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004B1C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004BCC);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000051DC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004C14);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004CAC);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004D28);

u8 *func_00004D58(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004D90);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004DC4);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004E48);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005190);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000051F8);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000526C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000055E4);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000566C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005748);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005818);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005AB4);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005BD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005750);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006138);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006140);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006144);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006284);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006310);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006314);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006318);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000631C);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006320);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006324);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006328);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000632C);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006330);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006334);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006338);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000633C);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006340);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006344);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006348);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000581C);

void func_00005870(void) {
    if (D_000062A0 >= 0) {
        sceKernelDeleteSema((u32) D_000062A0);
    }
    D_000062A0 = -1;
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000058AC);

void func_00005918(s32 arg0) {
    if (arg0 == 0) {

    } else {
        D_000062A4 = -1;
        sceKernelSignalSema(D_000062A0, 1);
    }
}
#endif
