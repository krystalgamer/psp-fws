/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhocctl_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlInit);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlJoin);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_A5C055CE);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_1FF89745);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetPeerList);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetPeerInfo);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetAddrByName);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlTerm);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlConnect);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlCreate);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlScan);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlDisconnect);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_CF8E084D);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlAddHandler);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlDelHandler);

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

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetAdhocId);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetNameByAddr);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetParameter);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetScanInfo);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_5A014CE0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_EFA6AEAF);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_1593C05D);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_F8BABD85);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_1C679240);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_CDEA7ACB);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_1A2B6D03);

void sceNetAdhocctl_lib_1572422C(void) {
    func_00003360();
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_F6057CC4);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000F98);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000120C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000148C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001580);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001874);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001BA0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001D84);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001F90);

void func_00002014(struct Unk_func_00002014_0 *arg0) {
    sceNet_lib_AB7DD9A5(&D_0000610C, 0, 0);
    sceNet_lib_D2422E4D(&D_0000610C);
    sceWlanDrv_lib_C9A8CAB7();
    arg0->unk8 = 0;
}

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000610C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002068);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000021BC);

void func_00002280(s32 arg0, s32 arg1) {
    sceNet_lib_57CC57DA(arg1, 0, 0x21);
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

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002D28);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002E3C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002F2C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002F90);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002FF0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003050);

s32 func_000030BC(s32 *arg0) {
    *arg0 = D_000062BC;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000030D0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000030FC);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003190);

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

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003978);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003A00);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003B80);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000432C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004D48);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000515C);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000051D0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000052A8);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005640);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005750);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006138);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006140);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006144);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006284);

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
