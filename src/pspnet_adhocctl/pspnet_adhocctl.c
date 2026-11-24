/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhocctl_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlInit);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlJoin);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_A5C055CE);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_1FF89745);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetPeerList);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetPeerInfo);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetAddrByName);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlTerm);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlConnect);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlCreate);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlJoin);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_1FF89745);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlScan);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlDisconnect);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_CF8E084D);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlAddHandler);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlDelHandler);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetState);
#endif

#if FW_VERSION != 100
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

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetAdhocId);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetPeerList);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetAddrByName);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetNameByAddr);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetParameter);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctlGetScanInfo);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_5A014CE0);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_EFA6AEAF);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_1593C05D);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_F8BABD85);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_1C679240);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_CDEA7ACB);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_1A2B6D03);
#endif

#if FW_VERSION != 100
void sceNetAdhocctl_lib_1572422C(void) {
    func_00003360();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", sceNetAdhocctl_lib_F6057CC4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000F98);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000AD0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000120C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000148C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001580);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00000FC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001874);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001BA0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001D84);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001F90);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000013A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001498);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000155C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000015AC);
#endif

#if FW_VERSION != 100
void func_00002014(struct Unk_func_00002014_0 *arg0) {
    sceNet_lib_AB7DD9A5(&D_0000610C, 0, 0);
    sceNet_lib_D2422E4D(&D_0000610C);
    sceWlanDrv_lib_C9A8CAB7();
    arg0->unk8 = 0;
}
#endif

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000610C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006240);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001720);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000018F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000019B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001BE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001C5C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00001CD0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002D28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002E3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002068);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000021BC);
#endif

#if FW_VERSION != 100
void func_00002280(s32 arg0, s32 arg1) {
    sceNet_lib_57CC57DA(arg1, 0, 0x21);
    func_00002068(arg0, arg1, 0x47, arg0 + 0x24);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000022D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000243C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000025D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000026C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000028C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000029D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002A80);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002B48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002BDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002C70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002D28);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002E3C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002F2C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000020A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000020F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002138);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000220C);
#endif

#if FW_VERSION == 100
s32 func_00002290(s32 *arg0) {
    *arg0 = D_00006400;
    return 0;
}
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000022D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002F90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002FF0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003050);
#endif

#if FW_VERSION != 100
s32 func_000030BC(s32 *arg0) {
    *arg0 = D_000062BC;
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000030D0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000030FC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003190);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000023D8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000028B0);
#endif

#if FW_VERSION == 100
void func_00002984(s32 arg0) {
    void *sp0;
    M2C_UNK sp4;

    func_00002A24(arg0, &sp0, (s32) &sp4);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003204);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003270);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000032CC);
#endif

#if FW_VERSION != 100
s32 func_00003360(void) {
    return scePowerRequestSuspend();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000337C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003410);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003840);
#endif

#if FW_VERSION != 100
void func_00003958(s32 arg0) {
    void *sp0;
    M2C_UNK sp4;

    func_00003A00(arg0, &sp0, (s32) &sp4);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003978);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002A24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00002B38);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003304);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003A00);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003B80);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000432C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004D48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000515C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000051D0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00003ED4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000042E4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000052A8);

INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005640);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000482C);
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
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000048CC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000048F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004924);
#endif

#if FW_VERSION == 100
M2C_UNK *func_00004938(void) {
    return &D_00006361;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004944);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000497C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000049F0);
#endif

#if FW_VERSION == 100
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
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004A64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004A90);
#endif

#if FW_VERSION == 100
void func_00004AD0(s32 arg0, s32 arg1) {
    func_0000497C(arg1, arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004AF4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004B1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004BCC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004C14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004CAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004D28);
#endif

#if FW_VERSION == 100
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
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004D90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004DC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00004E48);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005190);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000051F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000526C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000055E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000566C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005748);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005818);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005AB4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005BD0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_00005750);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006138);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006140);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006144);

INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006284);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006310);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006314);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006318);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000631C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006320);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006324);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006328);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000632C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006330);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006334);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006338);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_0000633C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006340);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006344);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_adhocctl", D_00006348);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_0000581C);
#endif

#if FW_VERSION != 100
void func_00005870(void) {
    if (D_000062A0 >= 0) {
        sceKernelDeleteSema((u32) D_000062A0);
    }
    D_000062A0 = -1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/pspnet_adhocctl", func_000058AC);
#endif

#if FW_VERSION != 100
void func_00005918(s32 arg0) {
    if (arg0 == 0) {

    } else {
        D_000062A4 = -1;
        sceKernelSignalSema(D_000062A0, 1);
    }
}
#endif
