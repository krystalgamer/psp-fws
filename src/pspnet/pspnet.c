/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_decls.h"

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211InfraScanJoinRequest);
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211ScanJoinRequest);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211ScanCreateRequest);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211LeaveRequest);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211SetAuth);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211SetPowerSave);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet", D_00009B7C);

INCLUDE_RODATA("nonmatchings/pspnet", D_00009B80);

INCLUDE_RODATA("nonmatchings/pspnet", D_00009B98);

INCLUDE_RODATA("nonmatchings/pspnet", D_00009BAC);

INCLUDE_RODATA("nonmatchings/pspnet", D_00009BC4);

INCLUDE_RODATA("nonmatchings/pspnet", D_00009BD8);

INCLUDE_RODATA("nonmatchings/pspnet", D_00009BEC);

INCLUDE_RODATA("nonmatchings/pspnet", D_00009BFC);

INCLUDE_RODATA("nonmatchings/pspnet", D_00009C04);

INCLUDE_RODATA("nonmatchings/pspnet", D_00009C74);

INCLUDE_RODATA("nonmatchings/pspnet", D_00009C80);

INCLUDE_RODATA("nonmatchings/pspnet", D_0000A0F8);

INCLUDE_RODATA("nonmatchings/pspnet", D_0000A100);

INCLUDE_RODATA("nonmatchings/pspnet", D_0000A104);

INCLUDE_RODATA("nonmatchings/pspnet", D_0000A15C);

INCLUDE_RODATA("nonmatchings/pspnet", D_0000A1A0);
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211GetIfInfo);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211GetBssDesc);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211ScanRequest);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211CreateRequest);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211JoinRequest);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_EB38431E);
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211SetConf);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211GetConf);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211GetAuth);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211GetPowerSave);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211EnterGameMode);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_AB375964);

INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_8DA79EB0);
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigUpInterface);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigDownInterface);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigGetEtherAddr);

INCLUDE_ASM("nonmatchings/pspnet", sceNetGetLocalEtherAddr);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigGetIfEvent);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigSetIfEventFlag);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigGetIfEventFlag);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_C1D2A7FB);

INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_CFA79880);
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetInit);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceNetTerm(void) {
    func_00001B7C();
    func_00002300();
    func_00003028();
    func_0000348C();
    func_00002C34();
    func_00007778();
    sceWlanDrv_lib_8D5F551B(0x10000);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetTerm);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet", func_0000198C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet", func_0000195C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet", func_000016BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet", func_00001980);
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_00001CE0);

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_schednetintr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void _sce_pspnet_schednetintr(s32 arg0) {
    D_0000AC38 |= 1 << arg0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_schednetintr_with_evf);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void _sce_pspnet_schednetintr_with_evf(s32 arg0) {
    D_0000AC38 |= 1 << arg0;
    sceKernelSetEventFlag(D_0000A0D0, 0x10U);
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", func_00001B7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00001B7C(void) {
    if (D_0000AC3C >= 0) {
        sceKernelTerminateThread(D_0000AC3C);
        sceKernelDeleteThread(D_0000AC3C);
    }
    D_0000AC3C = -1;
    if (D_0000A0D0 >= 0) {
        sceKernelDeleteEventFlag(D_0000A0D0);
    }
    D_0000A0D0 = -1;
    return sceNetIfhandleTerm();
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_inet_module_in_netintr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sce_pspnet_start_of_inet_module_in_netintr(s32 arg0, s32 arg1) {
    D_0000AC20 = arg0;
    D_0000AC24 = arg1;
    D_0000AC10 = 1;
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_inet_module_in_netintr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sce_pspnet_stop_of_inet_module_in_netintr(void) {
    D_0000AC10 = 0;
    D_0000AC20 = 0;
    D_0000AC24 = 0;
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_ipv6_module_in_netintr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sce_pspnet_start_of_ipv6_module_in_netintr(s32 arg0) {
    D_0000AC28 = arg0;
    D_0000AC14 = 1;
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_ipv6_module_in_netintr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sce_pspnet_stop_of_ipv6_module_in_netintr(void) {
    D_0000AC14 = 0;
    D_0000AC28 = 0;
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_pppoe_module_in_netintr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sce_pspnet_start_of_pppoe_module_in_netintr(s32 arg0) {
    D_0000AC2C = arg0;
    D_0000AC18 = 1;
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_pppoe_module_in_netintr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sce_pspnet_stop_of_pppoe_module_in_netintr(void) {
    D_0000AC18 = 0;
    D_0000AC2C = 0;
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_adhoc_module_in_netintr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sce_pspnet_start_of_adhoc_module_in_netintr(s32 arg0, s32 arg1) {
    D_0000AC30 = arg0;
    D_0000AC34 = arg1;
    D_0000AC1C = 1;
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_adhoc_module_in_netintr);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 _sce_pspnet_stop_of_adhoc_module_in_netintr(void) {
    D_0000AC1C = 0;
    D_0000AC30 = 0;
    D_0000AC34 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 282
void _sce_pspnet_schednetintr(s32 arg0) {
    D_0000AF40 |= 1 << arg0;
}

void _sce_pspnet_schednetintr_with_evf(s32 arg0) {
    D_0000AF40 |= 1 << arg0;
    sceKernelSetEventFlag(D_0000A864, 0x10U);
}

void func_00001E74(void) {
    if (D_0000A860 >= 0) {
        sceKernelTerminateThread(D_0000A860);
        sceKernelDeleteThread(D_0000A860);
    }
    D_0000A860 = -1;
    if (D_0000A864 >= 0) {
        sceKernelDeleteEventFlag(D_0000A864);
    }
    D_0000A864 = -1;
    sceNetIfhandleTerm();
}

s32 _sce_pspnet_start_of_inet_module_in_netintr(s32 arg0, s32 arg1) {
    D_0000AF28 = arg0;
    D_0000AF2C = arg1;
    D_0000AF18 = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_inet_module_in_netintr(void) {
    D_0000AF18 = 0;
    D_0000AF28 = 0;
    D_0000AF2C = 0;
    return 0;
}

s32 _sce_pspnet_start_of_ipv6_module_in_netintr(s32 arg0) {
    D_0000AF30 = arg0;
    D_0000AF1C = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_ipv6_module_in_netintr(void) {
    D_0000AF1C = 0;
    D_0000AF30 = 0;
    return 0;
}

s32 _sce_pspnet_start_of_pppoe_module_in_netintr(s32 arg0) {
    D_0000AF34 = arg0;
    D_0000AF20 = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_pppoe_module_in_netintr(void) {
    D_0000AF20 = 0;
    D_0000AF34 = 0;
    return 0;
}

s32 _sce_pspnet_start_of_adhoc_module_in_netintr(s32 arg0, s32 arg1) {
    D_0000AF38 = arg0;
    D_0000AF3C = arg1;
    D_0000AF24 = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_adhoc_module_in_netintr(void) {
    D_0000AF24 = 0;
    D_0000AF38 = 0;
    D_0000AF3C = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_thread_enter);

INCLUDE_ASM("nonmatchings/pspnet", sceNetFreeThreadinfo);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00001F0C);
#else
s32 func_00002248(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    D_0000AF44.unk0 = NULL;
    D_0000AF44.unk4 = &D_0000AF44;
    temp_v0_2 = sceKernelCreateSema("SceNetThreadList", 0U, 1, 1, NULL);
    temp_v0 = __builtin_allegrex_min(temp_v0_2, 0);
    D_0000A868 = temp_v0_2;
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_get_threadinfo);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_lock_threadinfo);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_unlock_threadinfo);
#endif

#if FW_VERSION < 201
void _sce_pspnet_unlock_threadinfo(struct Unk_sceNet_lib_C21E18B2_0 *arg0) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    arg0->unkC -= 1;
    sceKernelSignalSema(D_0000A868, 1);
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_thread_leave);
#endif

#if FW_VERSION == 150
s32 _sce_pspnet_thread_leave(struct Unk_sceNet_lib_757085B0_0 *arg0, s32 arg1) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    arg0->unk10 = arg1;
    arg0->unkC -= 1;
    sceKernelSignalSema(D_0000A868, 1);
    return (arg1 == 0) - 1;
}
#endif

#if FW_VERSION == 152
s32 _sce_pspnet_thread_leave(struct Unk_sceNet_lib_757085B0_0 *arg0, s32 arg1) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    arg0->unk10 = arg1;
    arg0->unkC -= 1;
    sceKernelSignalSema(D_0000A868, 1);
    return (arg1 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION >= 282
void _sce_pspnet_unlock_threadinfo(struct Unk_sceNet_lib_C21E18B2_0 *arg0) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    arg0->unkC = (u16) (arg0->unkC - 1);
    sceKernelSignalSema(D_0000A868, 1);
}

s32 _sce_pspnet_thread_leave(struct Unk_sceNet_lib_757085B0_0 *arg0, s32 arg1) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    arg0->unk10 = arg1;
    arg0->unkC = (u16) (arg0->unkC - 1);
    sceKernelSignalSema(D_0000A868, 1);
    return (arg1 == 0) ? 0 : -1;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_get_thread_errno);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_set_thread_errno);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_thread_busycount);
#endif

#if FW_VERSION < 152
s32 _sce_pspnet_thread_busycount(void) {
    s16 temp_a1;
    s32 var_s0;
    void *var_v1;

    var_s0 = 0;
    sceKernelWaitSema(D_0000A868, 1, NULL);
    var_v1 = D_0000AF44.unk0;
    if (var_v1 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_v1, s16 *, 0xC);
            var_v1 = M2C_FIELD(var_v1, void **, 0);
            var_s0 += temp_a1 > 0;
        } while (var_v1 != NULL);
    }
    sceKernelSignalSema(D_0000A868, 1);
    return (-(var_s0 == 0) & 0x7FBEFEFB) - 0x7FBEFEFB;
}
#endif

#if FW_VERSION == 152
s32 _sce_pspnet_thread_busycount(void) {
    s16 temp_a1;
    s32 var_s0;
    void *var_v1;

    var_s0 = 0;
    sceKernelWaitSema(D_0000A868, 1, NULL);
    var_v1 = D_0000AF44.unk0;
    if (var_v1 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_v1, s16 *, 0xC);
            var_v1 = M2C_FIELD(var_v1, void **, 0);
            var_s0 += temp_a1 > 0;
        } while (var_v1 != NULL);
    }
    sceKernelSignalSema(D_0000A868, 1);
    return (var_s0 == 0) ? 0 : 0x80410105;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00002300);
#else
s32 _sce_pspnet_thread_busycount(void) {
    s16 temp_a1;
    s32 var_s0;
    struct Unk_sceNet_lib_45452B7B_var_v1 *var_v1;

    var_s0 = 0;
    sceKernelWaitSema(D_0000A868, 1, NULL);
    var_v1 = D_0000AF44.unk0;
    if (var_v1 != NULL) {
        do {
            temp_a1 = var_v1->unkC;
            var_v1 = var_v1->unk0;
            var_s0 += temp_a1 > 0;
        } while (var_v1 != NULL);
    }
    sceKernelSignalSema(D_0000A868, 1);
    return (var_s0 == 0) ? 0 : 0x80410105;
}

void func_0000260C(void) {
    struct Unk_func_0000260C_var_s0 *var_s0;

    if (D_0000A868 >= 0) {
        var_s0 = D_0000AF44.unk0;
        if (var_s0 != NULL) {
            do {
                sceKernelDeleteSema(var_s0->unk4C);
                var_s0 = var_s0->unk0;
            } while (var_s0 != NULL);
        }
        sceKernelDeleteSema(D_0000A868);
    }
    D_0000A868 = -1;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetThreadAbort);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfPoll);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfOpen);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfClose);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfRead);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfWrite);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfIoctl);

INCLUDE_ASM("nonmatchings/pspnet", func_00002C34);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_callout_reset_usec);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_callout_stop);

INCLUDE_ASM("nonmatchings/pspnet", func_00002E8C);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_callout_init);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_callout_cleanup);
#endif

#if FW_VERSION < 201
void _sce_pspnet_callout_cleanup(void) {

}
#endif

#if FW_VERSION >= 282
void _sce_pspnet_callout_cleanup(void) {
}
#endif

void _sce_pspnet_callout_reset(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    u32 var_v1;

    var_v1 = arg1;
    if (arg1 <= 0x68DB8U) {
        if (var_v1 == 0) {
            var_v1 = 1;
        }
        _sce_pspnet_callout_reset_usec(arg0, var_v1 * 0x2710, arg2, arg3);
    }
}

INCLUDE_ASM("nonmatchings/pspnet", func_00002FD8);

INCLUDE_ASM("nonmatchings/pspnet", func_000030A8);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_tsleep_usec);

INCLUDE_ASM("nonmatchings/pspnet", func_0000331C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00003028);
#else
void func_00003380(void) {
    if (D_0000A874 >= 0) {
        sceKernelDeleteSema(D_0000A874);
    }
    D_0000A874 = -1;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_tsleep);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00003100);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00003100(void *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) | 1);
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x4C), 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#endif

#if FW_VERSION == 100
void func_000030A8_v100(void *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) | 1);
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x4C), 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#endif

#if FW_VERSION >= 282
void func_00003400(struct Unk_func_00003400_0 *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (arg0->unk20 == 0) {

    } else {
        arg0->unk20 = 0;
        arg0->unk48 = (s32) (arg0->unk48 | 1);
        sceKernelSignalSema(arg0->unk4C, 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_wakeup);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_tiwakeup);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_tabort);
#endif

#if FW_VERSION < 201
void _sce_pspnet_tabort(struct Unk_sceNet_lib_C9C97945_0 *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    arg0->unk48 |= 2;
    if (arg0->unk20 == 0) {

    } else {
        arg0->unk20 = 0;
        sceKernelSignalSema(arg0->unk4C, 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#endif

#if FW_VERSION >= 282
void _sce_pspnet_tabort(struct Unk_sceNet_lib_C9C97945_0 *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    arg0->unk48 = (s32) (arg0->unk48 | 2);
    if (arg0->unk20 == 0) {

    } else {
        arg0->unk20 = 0;
        sceKernelSignalSema(arg0->unk4C, 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_adhoc_sabort);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_inet_sabort);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_adhoc_module_in_sched);
#else
s32 _sce_pspnet_start_of_adhoc_module_in_sched(s32 arg0) {
    D_0000AF60 = arg0;
    D_0000AF68 = 1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_adhoc_module_in_sched);
#else
s32 _sce_pspnet_stop_of_adhoc_module_in_sched(void) {
    D_0000AF68 = 0;
    D_0000AF60 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_inet_module_in_sched);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_start_of_inet_module_in_sched(s32 arg0, s32 arg1) {
    D_0000AC58 = arg0;
    D_0000AF64 = arg1;
    D_0000AF6C = 1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_inet_module_in_sched);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_stop_of_inet_module_in_sched(void) {
    D_0000AF6C = 0;
    D_0000AC58 = 0;
    D_0000AF64 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 _sce_pspnet_start_of_inet_module_in_sched(s32 arg0, s32 arg1) {
    D_0000AF5C = arg0;
    D_0000AF64 = arg1;
    D_0000AF6C = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_inet_module_in_sched(void) {
    D_0000AF6C = 0;
    D_0000AF5C = 0;
    D_0000AF64 = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_00003790);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_0000348C);
#else
void func_000037E4(void) {
    if (D_0000A878 >= 0) {
        sceKernelDeleteSema(D_0000A878);
    }
    D_0000A878 = -1;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_spllock);
#else
s32 _sce_pspnet_spllock(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelGetThreadId();
    var_v1 = 0;
    if (temp_v0 != D_0000B06C) {
        sceKernelWaitSema(D_0000A0E4, 1, NULL);
        D_0000B06C = temp_v0;
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_splunlock);
#endif

#if FW_VERSION < 201
void _sce_pspnet_splunlock(s32 arg0) {
    if (arg0 == 0) {

    } else {
        D_0000B06C = -1;
        sceKernelSignalSema(D_0000A0E4, 1);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_spllock_owner);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_spllock_owner(void) {
    return D_0000B06C;
}
#endif

#if FW_VERSION >= 282
void _sce_pspnet_splunlock(s32 arg0) {
    if (arg0 > 0) {
        D_0000B370 = -1;
        sceKernelSignalSema(D_0000A878, 1);
    }
}

s32 _sce_pspnet_spllock_owner(void) {
    return D_0000B370;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_microtime);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_uiomove);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_hashinit);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_hashdone);
#else
void _sce_pspnet_hashdone(void) {
    sceNetFreeInternal();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_selrecord);
#else
void _sce_pspnet_selrecord(struct Unk_sceNet_lib_92633D8D_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk8;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_selwakeup);
#endif

#if FW_VERSION < 201
void _sce_pspnet_selwakeup(s32 *arg0) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != 0) {
        _sce_pspnet_tiwakeup(temp_v1, (s32) &D_0000B91C);
        *arg0 = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_get_selwait_addr);
#endif

#if FW_VERSION < 201
s32 *_sce_pspnet_get_selwait_addr(void) {
    return &D_0000B91C;
}
#endif

#if FW_VERSION >= 282
void _sce_pspnet_selwakeup(s32 *arg0) {
    s32 temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != 0) {
        _sce_pspnet_tiwakeup(temp_v1, (s32) &D_0000BC0C);
        *arg0 = 0;
    }
}

M2C_UNK *_sce_pspnet_get_selwait_addr(void) {
    return &D_0000BC0C;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_00003B30);

INCLUDE_ASM("nonmatchings/pspnet", func_00003C98);

INCLUDE_ASM("nonmatchings/pspnet", func_00003E78);

INCLUDE_ASM("nonmatchings/pspnet", func_000041D8);

INCLUDE_ASM("nonmatchings/pspnet", func_000042FC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00004430);
#endif

#if FW_VERSION < 201
void func_00004430(s32 arg0, u8 *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
}
#endif

#if FW_VERSION >= 282
void func_00004430(s32 arg0, u8 *arg1) {
    sceNetMemcpy(arg1, arg0 + 0x14, 0x10);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_0000445C);

INCLUDE_ASM("nonmatchings/pspnet", func_000044C0);

INCLUDE_ASM("nonmatchings/pspnet", func_000045CC);

INCLUDE_ASM("nonmatchings/pspnet", func_0000460C);

INCLUDE_ASM("nonmatchings/pspnet", func_00004678);

INCLUDE_ASM("nonmatchings/pspnet", func_00004770);

INCLUDE_ASM("nonmatchings/pspnet", func_00004820);

INCLUDE_ASM("nonmatchings/pspnet", func_000048F4);

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", func_00004974);
#endif

#if FW_VERSION == 152
u8 *func_00004974(u8 *arg0, void *arg1, u32 arg2) {
    u32 temp_a2;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 var_s1;
    u8 *var_s3;
    void *var_s2;

    var_s3 = arg0;
    var_s2 = arg1;
    var_s1 = arg2;
    if (arg2 != 0) {
        do {
            temp_s0 = M2C_FIELD(var_s2, u32 *, 0xC);
            temp_s0_2 = (temp_s0 >= var_s1) ? var_s1 : temp_s0;
            temp_a2 = temp_s0_2;
            var_s1 -= temp_s0_2;
            func_00007CC0(var_s3, M2C_FIELD(var_s2, u8 **, 8), (s32) temp_a2);
            var_s3 = &var_s3[temp_s0_2];
            var_s2 = M2C_FIELD(var_s2, void **, 0);
        } while (var_s1 != 0);
    }
    return arg0;
}
#endif

#if FW_VERSION >= 282
u8 *func_00004974(u8 *arg0, void *arg1, u32 arg2) {
    u32 temp_a2;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 var_s1;
    u8 *var_s3;
    struct Unk_func_00004974_var_s2 *var_s2;

    var_s3 = arg0;
    var_s2 = arg1;
    var_s1 = arg2;
    if (arg2 != 0) {
        do {
            temp_s0 = var_s2->unkC;
            temp_s0_2 = (temp_s0 >= var_s1) ? var_s1 : temp_s0;
            temp_a2 = temp_s0_2;
            var_s1 -= temp_s0_2;
            sceNetMemcpy(var_s3, var_s2->unk8, (s32) temp_a2);
            var_s3 = &var_s3[temp_s0_2];
            var_s2 = var_s2->unk0;
        } while (var_s1 != 0);
    }
    return arg0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_000049F4);

INCLUDE_ASM("nonmatchings/pspnet", func_00004B34);

INCLUDE_ASM("nonmatchings/pspnet", func_00005010);

INCLUDE_ASM("nonmatchings/pspnet", func_00005120);

INCLUDE_ASM("nonmatchings/pspnet", func_00005234);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_if_attach);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_if_detach);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_if_down);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005404);
#endif

#if FW_VERSION < 201
void func_00005404(void *arg0) {
    void *var_a0;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0);
    var_a0 = var_s0;
    if (var_s0 != NULL) {
        do {
            var_s0 = M2C_FIELD(var_s0, void **, 4);
            sceNetMFreem(var_a0);
            var_a0 = var_s0;
        } while (var_s0 != NULL);
    }
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
#endif

#if FW_VERSION >= 282
void func_00005744(struct Unk_func_00005744_0 *arg0) {
    void *var_a0;
    struct Unk_func_00005744_var_s0 *var_s0;

    var_s0 = arg0->unk0;
    var_a0 = var_s0;
    if (var_s0 != NULL) {
        do {
            var_s0 = var_s0->unk4;
            sceNetMFreem(var_a0);
            var_a0 = var_s0;
        } while (var_s0 != NULL);
    }
    arg0->unk0 = NULL;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_ifioctl);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005AD4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet", func_000057D8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_if_nulloutput);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_if_nulloutput(void) {
    return 6;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005C28);
#endif

#if FW_VERSION < 201
void func_00005C28(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005C30);
#endif

#if FW_VERSION < 201
void func_00005C30(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005C38);
#endif

#if FW_VERSION < 201
s32 func_00005C38(void) {
    return 6;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005C40);
#endif

#if FW_VERSION < 201
s32 func_00005C40(void) {
    return 6;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005C48);
#endif

#if FW_VERSION < 201
void func_00005C48(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005C50);
#endif

#if FW_VERSION < 201
void func_00005C50(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005ADC);

s32 _sce_pspnet_if_nulloutput(void) {
    return 6;
}

void func_00005C28(void) {
}

void func_00005C30(void) {
}

s32 func_00005C38(void) {
    return 6;
}

s32 func_00005C40(void) {
    return 6;
}

void func_00005C48(void) {
}

void func_00005C50(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_00005C58);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_ifafree);
#else
void _sce_pspnet_ifafree(void) {
    sceNetFreeInternal();
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_link_rtrequest);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_if_up);

INCLUDE_ASM("nonmatchings/pspnet", func_00005D64);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_ifunit);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_if_exist);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_ifioctl_sync);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_E9D457B6);
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_get_ifindex);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_ifplookup_index);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_get_if_core_variables);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_get_if_core_variables(s32 *arg0, s32 *arg1, s32 *arg2, u8 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_0000B0B0;
    }
    if (arg1 != NULL) {
        *arg1 = D_0000B0B8;
    }
    if (arg2 != NULL) {
        *arg2 = D_0000B3B8;
    }
    if (arg3 != NULL) {
        M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(&D_0000BE54, s32 *, 0);
        M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(&D_0000BE54, s32 *, 4);
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 _sce_pspnet_get_if_core_variables(s32 *arg0, s32 *arg1, s32 *arg2, u8 *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_0000B3B4;
    }
    if (arg1 != NULL) {
        *arg1 = D_0000B3BC;
    }
    if (arg2 != NULL) {
        *arg2 = D_0000B3B8;
    }
    if (arg3 != NULL) {
        sceNetMemcpy(arg3, &D_0000BE54, 8);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_inet_module_in_if_core);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_inet_module_in_if_core);

INCLUDE_ASM("nonmatchings/pspnet", func_000064CC);

INCLUDE_ASM("nonmatchings/pspnet", func_000069DC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00006AA0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet", func_00006B10);

INCLUDE_ASM("nonmatchings/pspnet", func_00006BBC);

INCLUDE_ASM("nonmatchings/pspnet", func_00006C28);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet", func_00006AA8);
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_00006AE8);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_ifplookup_lladdr);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_inet_module_in_if_ethersubr_core);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_inet_module_in_if_ethersubr_core);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_adhoc_module_in_if_ethersubr_core);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_start_of_adhoc_module_in_if_ethersubr_core(s32 arg0) {
    D_0000B0CC = arg0;
    D_0000B0D4 = 1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core(void) {
    D_0000B0D4 = 0;
    D_0000B0CC = 0;
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 _sce_pspnet_start_of_adhoc_module_in_if_ethersubr_core(s32 arg0) {
    D_0000B3D0 = arg0;
    D_0000B3D8 = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core(void) {
    D_0000B3D8 = 0;
    D_0000B3D0 = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_00006C8C);

INCLUDE_ASM("nonmatchings/pspnet", func_00007020);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet", func_00007060);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet", func_0000704C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet", func_000071FC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet", func_00007054);
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_000075C0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_inet_module_in_ifhandle_ether);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_start_of_inet_module_in_ifhandle_ether(s32 arg0) {
    D_0000B0EC = arg0;
    D_0000B0F0 = 1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_inet_module_in_ifhandle_ether);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_stop_of_inet_module_in_ifhandle_ether(void) {
    D_0000B0F0 = 0;
    D_0000B0EC = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00007738);
#endif

#if FW_VERSION < 201
s32 func_00007738(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceNetIfhandle_lib_0C391E9F();
    var_v0 = 0;
    if (temp_v0 < 0) {
        sceNetIfhandle_lib_29ED84C5();
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00007778);
#endif

#if FW_VERSION < 201
s32 func_00007778(void) {
    sceNetIfhandle_lib_29ED84C5();
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 _sce_pspnet_start_of_inet_module_in_ifhandle_ether(s32 arg0) {
    D_0000B3DC = arg0;
    D_0000B3E0 = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_inet_module_in_ifhandle_ether(void) {
    D_0000B3E0 = 0;
    D_0000B3DC = 0;
    return 0;
}

s32 func_00007678(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceNetIfhandle_lib_0C391E9F();
    var_v0 = 0;
    if (temp_v0 < 0) {
        sceNetIfhandle_lib_29ED84C5();
        var_v0 = temp_v0;
    }
    return var_v0;
}

s32 func_000076B8(void) {
    sceNetIfhandle_lib_29ED84C5();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_000076D8);

INCLUDE_ASM("nonmatchings/pspnet", sceNetRand);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_000079DC);
#endif

#if FW_VERSION < 201
s32 func_000079DC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_000079E4);
#endif

#if FW_VERSION < 201
s32 func_000079E4(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet", sceNetGetSystemClockUsec);
#endif

#if FW_VERSION >= 282
s32 func_0000791C(void) {
    return 0;
}

s32 func_00007924(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetGetSystemClockSec);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00007A68);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pspnet", D_00009D5C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet", func_0000795C);
#endif

#if FW_VERSION != 282
INCLUDE_ASM("nonmatchings/pspnet", sceNetEtherNtostr);
#else
void sceNetEtherNtostr(struct Unk_sceNetEtherNtostr_0 *arg0, s32 arg1) {
    if (((arg0 == NULL) | (arg1 == 0)) != 0) {

    } else {
        sceNetSprintf(arg1, (s32) "%02x:%02x:%02x:%02x:%02x:%02x", (s32) arg0->unk0, (s32) arg0->unk1, (s32) arg0->unk2, (s32) arg0->unk3, (s32) arg0->unk4, (s32) arg0->unk5);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetEtherStrton);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNetGetMallocStat);
#else
void sceNetGetMallocStat(void) {
    sceNetGetMallocStatInternal();
}

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet", func_00007BD4);

INCLUDE_ASM("nonmatchings/pspnet", func_00007C0C);

INCLUDE_ASM("nonmatchings/pspnet", func_00007C80);

u8 *func_00007CC0(u8 *arg0, u8 *arg1, s32 arg2) {
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

INCLUDE_ASM("nonmatchings/pspnet", func_00007CF4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet", func_00007CA4);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet", func_00007D20);
#endif

#if FW_VERSION < 201
void func_00007D60(s32 arg0, s32 arg1) {
    func_00007C0C(arg1, arg0);
}

INCLUDE_ASM("nonmatchings/pspnet", func_00007D84);

INCLUDE_ASM("nonmatchings/pspnet", func_00007DAC);

INCLUDE_ASM("nonmatchings/pspnet", func_00007E5C);

INCLUDE_ASM("nonmatchings/pspnet", func_00007EA4);

INCLUDE_ASM("nonmatchings/pspnet", func_00007F3C);

INCLUDE_ASM("nonmatchings/pspnet", func_00007FB8);

u8 *func_00007FE8(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("nonmatchings/pspnet", func_00008020);

INCLUDE_ASM("nonmatchings/pspnet", func_00008054);

INCLUDE_ASM("nonmatchings/pspnet", func_000080A0);

INCLUDE_ASM("nonmatchings/pspnet", func_000087C8);
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_00007B50);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNetTolower);

INCLUDE_ASM("nonmatchings/pspnet", sceNetLook_ctype_table);
#else
INCLUDE_ASM("nonmatchings/pspnet", func_0000881C);

INCLUDE_ASM("nonmatchings/pspnet", func_00008848);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_0000885C);
#endif

#if FW_VERSION < 152
s32 *func_0000885C(void) {
    return &D_0000A10D;
}
#endif

#if FW_VERSION == 152
M2C_UNK *func_0000885C(void) {
    return &D_0000A10D;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", sceNetMemcmp);

INCLUDE_ASM("nonmatchings/pspnet", sceNetMemcpy);

INCLUDE_ASM("nonmatchings/pspnet", sceNetMemset);

INCLUDE_ASM("nonmatchings/pspnet", sceNetMemchr);

INCLUDE_ASM("nonmatchings/pspnet", sceNetMemmove);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBcmp);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBcopy);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBzero);

INCLUDE_ASM("nonmatchings/pspnet", sceNetSprintf);

INCLUDE_ASM("nonmatchings/pspnet", func_00007E3C);

INCLUDE_ASM("nonmatchings/pspnet", sceNetVsprintf);

INCLUDE_ASM("nonmatchings/pspnet", func_00008598);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrtoul);

INCLUDE_ASM("nonmatchings/pspnet", func_00008794);

INCLUDE_ASM("nonmatchings/pspnet", sceNetAtoi);
#endif

#if FW_VERSION >= 282
M2C_UNK *func_00007BBC(void) {
    return &D_0000A88D;
}

INCLUDE_ASM("nonmatchings/pspnet", sceNetMemcmp);

u8 *sceNetMemcpy(u8 *arg0, u8 *arg1, s32 arg2) {
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

INCLUDE_ASM("nonmatchings/pspnet", sceNetMemset);

INCLUDE_ASM("nonmatchings/pspnet", sceNetMemchr);

INCLUDE_ASM("nonmatchings/pspnet", sceNetMemmove);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBcmp);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBcopy);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBzero);

INCLUDE_ASM("nonmatchings/pspnet", sceNetSprintf);

INCLUDE_ASM("nonmatchings/pspnet", func_00007E50);

INCLUDE_ASM("nonmatchings/pspnet", sceNetVsprintf);

INCLUDE_ASM("nonmatchings/pspnet", func_00008594);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrtoul);

INCLUDE_ASM("nonmatchings/pspnet", func_00008790);

void sceNetAtoi(s32 arg0) {
    func_00008790(arg0, 0, 0xA);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNetStrcmp);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", sceNetStrcpy);
#endif

#if FW_VERSION >= 282
u8 *sceNetStrcpy(u8 *arg0, u8 *arg1) {
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

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNetStrlen);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrncmp);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrncpy);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrchr);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrcasecmp);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrncasecmp);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrcat);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrrchr);
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_00008E1C);

INCLUDE_ASM("nonmatchings/pspnet", func_00009390);

INCLUDE_RODATA("nonmatchings/pspnet", D_0000A574);

#if FW_VERSION == 260 || FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet", D_0000A5B4);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/pspnet", D_0000A584);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/pspnet", D_0000A598);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/pspnet", D_0000A564);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pspnet", D_0000A530);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pspnet", D_0000A4D0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pspnet", D_00009DF4);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pspnet", D_00009E34);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet", D_00009DEC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pspnet", D_0000A57C);
#endif

INCLUDE_RODATA("nonmatchings/pspnet", D_0000A760);
