/* cflags: -Os */
#include "common.h"
#include "netconf_plugin_auto_nec_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000024);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_000000AC);

s32 module_start(void) {
    func_00000000();
    return 0;
}

s32 module_stop(void) {
    func_000055BC();
    return 0;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", sceVshNetconfRaku_2AFE9FD3);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", sceVshNetconfRaku_70A22EF2);
#endif

s32 func_00000180(void) {
    D_000084A4 = -1;
    return 1;
}

s32 func_00000194(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_0000019C);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000500);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000057EC);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000057F0);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000057FC);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000580C);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005824);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005848);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005854);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005874);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005884);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005894);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000589C);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000058BC);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000058D0);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000058F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005910);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005914);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005924);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005930);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005948);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000595C);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005960);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000596C_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000596C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000596C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000596C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000597C_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000597C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000597C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005978);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_0000597C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_000004D8);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_0000098C);

#if FW_VERSION == 352
void func_00000B1C(void) {
    if (D_000084A4_v352 == 0) {
        D_000084A4_v352 = 0;
        sceNetApctlDisconnect();
        if (D_000084A4_v352 == 0) {
            do {
                sceKernelDelayThread(0x7A120U);
            } while (D_000084A4_v352 == 0);
        }
        D_00008540 = 0;
    }
    if (D_00008538 != 0) {
        sceUtility_netparam_internal_854ACDD6(0);
        D_00008538 = 0;
    }
}
#endif

#if FW_VERSION == 351
void func_00000B1C(void) {
    if (D_000084A4_v351 == 0) {
        D_000084A4_v351 = 0;
        sceNetApctlDisconnect();
        if (D_000084A4_v351 == 0) {
            do {
                sceKernelDelayThread(0x7A120U);
            } while (D_000084A4_v351 == 0);
        }
        D_00008540 = 0;
    }
    if (D_00008538 != 0) {
        sceUtility_netparam_internal_854ACDD6(0);
        D_00008538 = 0;
    }
}
#endif

#if FW_VERSION == 350
void func_00000B1C(void) {
    if (D_000084A4_v350 == 0) {
        D_000084A4_v350 = 0;
        sceNetApctlDisconnect();
        if (D_000084A4_v350 == 0) {
            do {
                sceKernelDelayThread(0x7A120U);
            } while (D_000084A4_v350 == 0);
        }
        D_00008540 = 0;
    }
    if (D_00008538 != 0) {
        sceUtility_netparam_internal_854ACDD6(0);
        D_00008538 = 0;
    }
}
#endif

#if FW_VERSION < 350
void func_00000B1C(void) {
    if (D_000084A0 == 0) {
        D_000084A0 = 0;
        sceNetApctlDisconnect();
        if (D_000084A0 == 0) {
            do {
                sceKernelDelayThread(0x7A120U);
            } while (D_000084A0 == 0);
        }
        D_00008540 = 0;
    }
    if (D_00008538 != 0) {
        sceUtilityDeleteNetParam(0);
        D_00008538 = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000B98);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000BD8);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000C64);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000C84);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000D08);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000D74);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000DC8);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000EFC);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00000FC0);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00001040);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00001180);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00001220);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_0000134C);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000059B8);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_000013A4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00001518);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00001758);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00001624);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00001804);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00001AD4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00002120);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_0000217C);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_0000243C);

void func_000026FC(struct Unk_func_000026FC_0 *arg0, struct Unk_func_000026FC_1 *arg1, struct Unk_func_000026FC_2 *arg2) {
    arg2->unk0 = (s8) (arg0->unk0 ^ arg1->unk0);
    arg2->unk1 = (s8) (arg0->unk1 ^ arg1->unk1);
    arg2->unk2 = (s8) (arg0->unk2 ^ arg1->unk2);
    arg2->unk3 = (s8) (arg0->unk3 ^ arg1->unk3);
    arg2->unk4 = (s8) (arg0->unk4 ^ arg1->unk4);
    arg2->unk5 = (s8) (arg0->unk5 ^ arg1->unk5);
    arg2->unk6 = (s8) (arg0->unk6 ^ arg1->unk6);
    arg2->unk7 = (s8) (arg0->unk7 ^ arg1->unk7);
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00002780);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00002C0C);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00002F44);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00003584);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00003BC4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00003C00);

void func_00003CFC(s32 arg0, struct Unk_func_00003CFC_1 *arg1) {
    void *sp0;
    s32 var_a2;
    u32 temp_a3;

    func_000048E4(&sp0, &arg1->unk10, 8);
    temp_a3 = ((u32) arg1->unk10 >> 3) & 0x3F;
    var_a2 = 0x38 - temp_a3;
    if (temp_a3 >= 0x38U) {
        var_a2 = 0x78 - temp_a3;
    }
    func_00003C00((s32) arg1, (s32) &D_000084B8, var_a2);
    func_00003C00((s32) arg1, &sp0, 8);
    func_000048E4(arg0, (s32) arg1, 0x10);
    func_000049B8((s32) arg1, 0, 0x58);
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00003DA0);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_000048E4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00004930);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00004988);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_000049B8);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_000049DC);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00004A38);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00004AC4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00004B24);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00004B48);
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00004BD4);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00004C2C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", sceVshNetconfRaku_2A1CBBAC);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", sceVshNetconfRaku_B7E8374D);

s32 sceVshNetconfRaku_8D3A5DA0(void *arg0) {
    s32 var_v1;

    var_v1 = D_00008498;
    M2C_FIELD(arg0, s32 *, 0) = (s32) D_00008530;
    if (var_v1 != -1) {
        var_v1 = D_00008498 - func_00004A38();
    }
    M2C_FIELD(arg0, s32 *, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 8) = (s32) D_00008534;
    return 1;
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", sceVshNetconfRaku_1B26D858);
#else
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", necApConfigStart);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", necApConfigEnd);

s32 necApConfigGetState(void *arg0) {
    s32 var_v1;

    var_v1 = D_00008498;
    M2C_FIELD(arg0, s32 *, 0) = (s32) D_00008530;
    if (var_v1 != -1) {
        var_v1 = D_00008498 - func_00004A38();
    }
    M2C_FIELD(arg0, s32 *, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 8) = (s32) D_00008534;
    return 1;
}

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", necApConfigGetResult);
#endif

#if FW_VERSION >= 250
s32 func_00004FE8(void) {
    return 0x410;
}
#else
s32 func_00004FE8(void) {
    return 0x401;
}
#endif

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00004FF0);

INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_00005048);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/netconf_plugin_auto_nec", func_000055BC);
#endif

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005AF8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00005EF8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000062F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000066F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00006AF8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00006EF8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000072F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000076F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00007AF8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00007EF8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_000082F8);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00008320);

INCLUDE_RODATA("nonmatchings/netconf_plugin_auto_nec", D_00008388);
