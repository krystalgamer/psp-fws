/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_decls.h"

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211InfraScanJoinRequest);
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211ScanJoinRequest);

INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211ScanCreateRequest);

#if FW_VERSION < 201
s32 sceNetConfig80211LeaveRequest(const char *name, s32 *out) {
    struct SceNetIfreq1 req = {{0}};
    s32 ret;

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    ret = _sce_pspnet_ifioctl(NULL, 0xC01469D8, &req, 1);
    if (ret != 0)
        goto end;
    *out = req.args[0];
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211LeaveRequest);
#endif

#if FW_VERSION < 201
s32 sceNetConfig80211SetAuth(const char *name, s32 auth) {
    struct SceNetIfreq1 req = {{0}};

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    req.args[0] = auth;
    return _sce_pspnet_ifioctl(NULL, 0x801469DD, &req, 1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211SetAuth);
#endif

#if FW_VERSION < 201
s32 sceNetConfig80211SetPowerSave(const char *name, s32 arg) {
    struct SceNetIfreq1 req = {{0}};

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    req.args[0] = arg;
    return _sce_pspnet_ifioctl(NULL, 0x801469DF, &req, 1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211SetPowerSave);
#endif

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

#if FW_VERSION < 201
s32 sceNetConfig80211GetBssDesc(const char *name, s32 arg) {
    struct SceNetIfreq1 req = {{0}};

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    req.args[0] = arg;
    return _sce_pspnet_ifioctl(NULL, 0xC01469D7, &req, 1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211GetBssDesc);
#endif

#if FW_VERSION < 201
s32 sceNetConfig80211ScanRequest(const char *name, s32 arg0, s32 *inout, s32 arg2, s32 *out) {
    struct SceNetIfreq4 req = {{0}};
    s32 ret;

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    req.args[0] = arg0;
    req.args[1] = *inout;
    req.args[2] = arg2;
    ret = _sce_pspnet_ifioctl(NULL, 0xC02069D4, &req, 1);
    if (ret != 0)
        goto end;
    *inout = req.args[1];
    *out = req.args[3];
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211ScanRequest);
#endif

#if FW_VERSION < 201
s32 sceNetConfig80211CreateRequest(const char *name, s32 arg, s32 *out) {
    struct SceNetIfreq2 req = {{0}};
    s32 ret;

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    req.args[0] = arg;
    ret = _sce_pspnet_ifioctl(NULL, 0xC01869D5, &req, 1);
    if (ret != 0)
        goto end;
    *out = req.args[1];
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211CreateRequest);
#endif

#if FW_VERSION < 201
s32 sceNetConfig80211JoinRequest(const char *name, s32 arg, s32 *out) {
    struct SceNetIfreq2 req = {{0}};
    s32 ret;

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    req.args[0] = arg;
    ret = _sce_pspnet_ifioctl(NULL, 0xC01869D6, &req, 1);
    if (ret != 0)
        goto end;
    *out = req.args[1];
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211JoinRequest);

INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_EB38431E);
#endif

#if FW_VERSION < 201
s32 sceNetConfig80211SetConf(const char *name, s32 arg) {
    struct SceNetIfreq1 req = {{0}};

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    req.args[0] = arg;
    return _sce_pspnet_ifioctl(NULL, 0x801469D2, &req, 1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211SetConf);
#endif

#if FW_VERSION < 201
s32 sceNetConfig80211GetConf(const char *name, void *buf) {
    struct SceNetIfreq1 req = {{0}};

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    req.args[0] = (s32)buf;
    return _sce_pspnet_ifioctl(NULL, 0x401469D3, &req, 1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211GetConf);
#endif

#if FW_VERSION < 201
s32 sceNetConfig80211GetAuth(const char *name, void *buf) {
    struct SceNetIfreq1 req = {{0}};

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    req.args[0] = (s32)buf;
    return _sce_pspnet_ifioctl(NULL, 0x401469DE, &req, 1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211GetAuth);
#endif

#if FW_VERSION < 201
s32 sceNetConfig80211GetPowerSave(const char *name, s32 *out) {
    struct SceNetIfreq1 req = {{0}};
    s32 ret;

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    ret = _sce_pspnet_ifioctl(NULL, 0x401469E0, &req, 1);
    if (ret != 0)
        goto end;
    *out = req.args[0];
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211GetPowerSave);
#endif

#if FW_VERSION < 201
s32 sceNetConfig80211EnterGameMode(const char *name, s32 arg0, s32 arg1, s32 *out) {
    struct SceNetIfreq3 req = {{0}};
    s32 ret;

    sceNetStrncpy(req.ifr_name, name, IFNAMSIZ);
    req.args[0] = arg0;
    req.args[1] = arg1;
    ret = _sce_pspnet_ifioctl(NULL, 0xC01C69E1, &req, 1);
    if (ret != 0)
        goto end;
    *out = req.args[2];
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfig80211EnterGameMode);

INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_AB375964);

INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_8DA79EB0);
#endif

#if FW_VERSION < 201
s32 sceNetConfigUpInterface(const char *name) {
    struct ifreq ifr = {{0}};
    s32 ret;

    sceNetStrncpy(ifr.ifr_name, name, IFNAMSIZ);
    ret = _sce_pspnet_ifioctl(NULL, SIOCGIFFLAGS, &ifr, 1);
    if (ret != 0)
        goto end;
    ifr.ifr_flags |= IFF_UP;
    ret = _sce_pspnet_ifioctl(NULL, SIOCSIFFLAGS, &ifr, 1);
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigUpInterface);
#endif

#if FW_VERSION < 201
s32 sceNetConfigDownInterface(const char *name) {
    struct ifreq ifr = {{0}};
    s32 ret;

    sceNetStrncpy(ifr.ifr_name, name, IFNAMSIZ);
    ret = _sce_pspnet_ifioctl(NULL, SIOCGIFFLAGS, &ifr, 1);
    if (ret != 0)
        goto end;
    ifr.ifr_flags &= ~IFF_UP;
    ret = _sce_pspnet_ifioctl(NULL, SIOCSIFFLAGS, &ifr, 1);
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigDownInterface);
#endif

#if FW_VERSION < 201
s32 sceNetConfigGetEtherAddr(const char *name, u8 *ea) {
    struct ifnet *ifp;
    s32 ret;

    ret = 0;
    ifp = _sce_pspnet_ifunit(name);
    if (ifp == NULL) {
        ret = 0x80410180;
    } else {
        *(struct ether_addr *)ea = *(struct ether_addr *)LLADDR(ifp->if_sadl);
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigGetEtherAddr);
#endif

#if FW_VERSION < 201
s32 sceNetGetLocalEtherAddr(u8 *ea) {
    struct ifnet *ifp;
    s32 ret;

    ret = 0;
    ifp = _sce_pspnet_ifunit("wlan");
    if (ifp == NULL) {
        ret = 0x80410180;
    } else {
        *(struct ether_addr *)ea = *(struct ether_addr *)LLADDR(ifp->if_sadl);
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetGetLocalEtherAddr);
#endif

#if FW_VERSION < 201
s32 sceNetConfigGetIfEvent(const char *name, s32 *out0, s32 *out1) {
    struct ifreq ifr = {{0}};
    struct SceNetIfEvent ev;
    s32 ret;

    sceNetStrncpy(ifr.ifr_name, name, IFNAMSIZ);
    ifr.ifr_data = &ev;
    ev.unk0 = 0;
    ev.unk4 = 0;
    ret = _sce_pspnet_ifioctl(NULL, 0xC020693D, &ifr, 1);
    if (ret != 0)
        goto end;
    *out0 = ev.unk0;
    *out1 = ev.unk4;
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigGetIfEvent);
#endif

#if FW_VERSION < 201
s32 sceNetConfigSetIfEventFlag(const char *name, s32 arg0, s32 arg1) {
    struct ifreq ifr = {{0}};
    struct SceNetIfEvent ev;

    sceNetStrncpy(ifr.ifr_name, name, IFNAMSIZ);
    ifr.ifr_data = &ev;
    ev.unk0 = arg0;
    ev.unk4 = arg1;
    return _sce_pspnet_ifioctl(NULL, 0x8020693E, &ifr, 1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigSetIfEventFlag);
#endif

#if FW_VERSION < 201
s32 sceNetConfigGetIfEventFlag(const char *name, s32 *out0, s32 *out1) {
    struct ifreq ifr = {{0}};
    struct SceNetIfEvent ev;
    s32 ret;

    sceNetStrncpy(ifr.ifr_name, name, IFNAMSIZ);
    ifr.ifr_data = &ev;
    ev.unk0 = 0;
    ev.unk4 = 0;
    ret = _sce_pspnet_ifioctl(NULL, 0xC020693E, &ifr, 1);
    if (ret != 0)
        goto end;
    *out0 = ev.unk0;
    *out1 = ev.unk4;
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetConfigGetIfEventFlag);

INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_C1D2A7FB);

INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_CFA79880);
#endif

#if FW_VERSION == 100
s32 sceNetInit(s32 poolSize, s32 calloutPrio, s32 calloutStack, s32 netintrPrio, s32 netintrStack) {
    s32 ret;

    func_000076D8(sceKernelGetSystemTimeLow());
    ret = func_00007738(poolSize);
    if (ret < 0)
        goto fail;
    sceNetIfhandle_lib_0FB8AE0D();
    ret = callout_startup(calloutPrio, calloutStack);
    if (ret < 0)
        goto fail;
    ret = spl_init();
    if (ret < 0)
        goto fail;
    ret = slpque_init();
    if (ret < 0)
        goto fail;
    ret = threadinfo_init();
    if (ret < 0)
        goto fail;
    ret = netintr_init(netintrPrio, netintrStack);
    if (ret < 0)
        goto fail;
    ifinit();
    bpfilterattach(8);
    return 0;

fail:
    netintr_term();
    threadinfo_term();
    slpque_term();
    spl_term();
    callout_shutdown();
    func_00007778();
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceNetInit(s32 poolSize, s32 calloutPrio, s32 calloutStack, s32 netintrPrio, s32 netintrStack) {
    s32 ret;

    func_000076D8(sceKernelGetSystemTimeLow());
    ret = func_00007738(poolSize);
    if (ret < 0)
        goto fail;
    sceNetIfhandle_lib_0FB8AE0D();
    ret = callout_startup(calloutPrio, calloutStack);
    if (ret < 0)
        goto fail;
    ret = spl_init();
    if (ret < 0)
        goto fail;
    ret = slpque_init();
    if (ret < 0)
        goto fail;
    ret = threadinfo_init();
    if (ret < 0)
        goto fail;
    ret = netintr_init(netintrPrio, netintrStack);
    if (ret < 0)
        goto fail;
    ifinit();
    bpfilterattach(8);
    sceWlanDrv_lib_8D5F551B(0x10500);
    return 0;

fail:
    sceNetTerm();
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNetInit);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceNetTerm(void) {
    netintr_term();
    threadinfo_term();
    slpque_term();
    spl_term();
    callout_shutdown();
    func_00007778();
    sceWlanDrv_lib_8D5F551B(0x10000);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 sceNetTerm(void) {
    netintr_term();
    threadinfo_term();
    slpque_term();
    spl_term();
    callout_shutdown();
    func_00007778();
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNetTerm);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet", func_0000198C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet", func_0000195C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet", netintr_thread);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet", func_00001980);
#endif

#if FW_VERSION < 201
s32 netintr_init(s32 prio, s32 stackSize) {
    s32 ret;

    D_0000AC38 = 0;
    ret = sceKernelCreateEventFlag("SceNetNetintr", 0, 0, NULL);
    if (ret < 0)
        goto fail;
    D_0000A0D0 = ret;
    ret = sceKernelCreateThread("SceNetNetintr", netintr_thread, prio, stackSize, 0, NULL);
    if (ret < 0)
        goto fail;
    D_0000AC3C = ret;
    ret = sceKernelStartThread(ret, 0, NULL);
    if (ret < 0)
        goto fail;
    sceNetIfhandleInit(D_0000A0D0);
    return 0;

fail:
    if (D_0000AC3C >= 0) {
        sceKernelTerminateThread(D_0000AC3C);
        sceKernelDeleteThread(D_0000AC3C);
    }
    D_0000AC3C = -1;
    if (D_0000A0D0 >= 0) {
        sceKernelDeleteEventFlag(D_0000A0D0);
    }
    D_0000A0D0 = -1;
    sceNetIfhandleTerm();
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", netintr_init);
#endif

#if FW_VERSION < 282
void _sce_pspnet_schednetintr(s32 arg0) {
    D_0000AC38 |= 1 << arg0;
}

void _sce_pspnet_schednetintr_with_evf(s32 arg0) {
    D_0000AC38 |= 1 << arg0;
    sceKernelSetEventFlag(D_0000A0D0, 0x10U);
}

s32 netintr_term(void) {
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

s32 _sce_pspnet_start_of_inet_module_in_netintr(s32 arg0, s32 arg1) {
    D_0000AC20 = arg0;
    D_0000AC24 = arg1;
    D_0000AC10 = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_inet_module_in_netintr(void) {
    D_0000AC10 = 0;
    D_0000AC20 = 0;
    D_0000AC24 = 0;
    return 0;
}

s32 _sce_pspnet_start_of_ipv6_module_in_netintr(s32 arg0) {
    D_0000AC28 = arg0;
    D_0000AC14 = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_ipv6_module_in_netintr(void) {
    D_0000AC14 = 0;
    D_0000AC28 = 0;
    return 0;
}

s32 _sce_pspnet_start_of_pppoe_module_in_netintr(s32 arg0) {
    D_0000AC2C = arg0;
    D_0000AC18 = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_pppoe_module_in_netintr(void) {
    D_0000AC18 = 0;
    D_0000AC2C = 0;
    return 0;
}

s32 _sce_pspnet_start_of_adhoc_module_in_netintr(s32 arg0, s32 arg1) {
    D_0000AC30 = arg0;
    D_0000AC34 = arg1;
    D_0000AC1C = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_adhoc_module_in_netintr(void) {
    D_0000AC1C = 0;
    D_0000AC30 = 0;
    D_0000AC34 = 0;
    return 0;
}
#else
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

#if FW_VERSION == 100
struct SceNetThreadInfo *_sce_pspnet_thread_enter(void) {
    SceUID thid;
    struct SceNetThreadInfo *ti;

    thid = sceKernelGetThreadId();
    sceKernelWaitSema(D_0000A868, 1, NULL);
    for (ti = TAILQ_FIRST(&D_0000AF44); ti != NULL; ti = TAILQ_NEXT(ti, ti_link)) {
        if (ti->ti_thid == thid)
            break;
    }
    if (ti == NULL) {
        ti = sceNetMallocInternal(sizeof(struct SceNetThreadInfo));
        if (ti == NULL)
            goto fail;
        sceNetMemset(ti, 0, sizeof(struct SceNetThreadInfo));
        TAILQ_INSERT_TAIL(&D_0000AF44, ti, ti_link);
        ti->ti_thid = thid;
    }
    if (ti->ti_sleepcnt == 0) {
        ti->ti_sema = sceKernelCreateSema("SceNetThreadInfo", 0, 0, 1, NULL);
        if (ti->ti_sema < 0) {
            ti->ti_errno = 0x2E;
            goto fail;
        }
    }
    ti->ti_sleepcnt++;
    ti->ti_refcnt++;
    ti->ti_errno = 0;
    sceKernelSignalSema(D_0000A868, 1);
    return ti;

fail:
    sceKernelSignalSema(D_0000A868, 1);
    return NULL;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
struct SceNetThreadInfo *_sce_pspnet_thread_enter(void) {
    SceUID thid;
    struct SceNetThreadInfo *ti;

    thid = sceKernelGetThreadId();
    sceKernelWaitSema(D_0000A868, 1, NULL);
    for (ti = TAILQ_FIRST(&D_0000AF44); ti != NULL; ti = TAILQ_NEXT(ti, ti_link)) {
        if (ti->ti_thid == thid)
            break;
    }
    if (ti == NULL) {
        ti = sceNetMallocInternal(sizeof(struct SceNetThreadInfo));
        if (ti == NULL)
            goto fail;
        sceNetMemset(ti, 0, sizeof(struct SceNetThreadInfo));
        TAILQ_INSERT_TAIL(&D_0000AF44, ti, ti_link);
        ti->ti_thid = thid;
        ti->ti_sema = sceKernelCreateSema("SceNetThreadInfo", 0, 0, 1, NULL);
        if (ti->ti_sema < 0) {
            ti->ti_errno = 0x2E;
            goto fail;
        }
    }
    ti->ti_refcnt++;
    ti->ti_errno = 0;
    sceKernelSignalSema(D_0000A868, 1);
    return ti;

fail:
    sceKernelSignalSema(D_0000A868, 1);
    return NULL;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_thread_enter);
#endif

#if FW_VERSION == 100
s32 sceNetFreeThreadinfo(SceUID thid) {
    struct SceNetThreadInfo *ti;
    s32 ret;

    ret = 0;
    sceKernelWaitSema(D_0000A868, 1, NULL);
    for (ti = TAILQ_FIRST(&D_0000AF44); ti != NULL; ti = TAILQ_NEXT(ti, ti_link)) {
        if (ti->ti_thid == thid)
            break;
    }
    if (ti == NULL) {
        ret = 0x80410104;
    } else if (ti->ti_refcnt > 0) {
        ret = 0x80410105;
    } else {
        TAILQ_REMOVE(&D_0000AF44, ti, ti_link);
        _sce_pspnet_callout_cleanup(&ti->ti_callout);
        sceNetFreeInternal(ti);
    }
    sceKernelSignalSema(D_0000A868, 1);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceNetFreeThreadinfo(SceUID thid) {
    struct SceNetThreadInfo *ti;
    s32 ret;

    ret = 0;
    sceKernelWaitSema(D_0000A868, 1, NULL);
    for (ti = TAILQ_FIRST(&D_0000AF44); ti != NULL; ti = TAILQ_NEXT(ti, ti_link)) {
        if (ti->ti_thid == thid)
            break;
    }
    if (ti == NULL) {
        ret = 0x80410104;
    } else if (ti->ti_refcnt > 0) {
        ret = 0x80410105;
    } else {
        TAILQ_REMOVE(&D_0000AF44, ti, ti_link);
        _sce_pspnet_callout_cleanup(&ti->ti_callout);
        sceKernelDeleteSema(ti->ti_sema);
        sceNetFreeInternal(ti);
    }
    sceKernelSignalSema(D_0000A868, 1);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNetFreeThreadinfo);
#endif

#if FW_VERSION < 282
s32 threadinfo_init(void) {
    s32 ret;

    TAILQ_INIT(&D_0000AF44);
    ret = sceKernelCreateSema("SceNetThreadList", 0, 1, 1, NULL);
    D_0000A868 = ret;
    if (ret >= 0)
        return 0;
    return ret;
}
#else
s32 func_00002248(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    TAILQ_INIT(&D_0000AF44);
    temp_v0_2 = sceKernelCreateSema("SceNetThreadList", 0U, 1, 1, NULL);
    temp_v0 = __builtin_allegrex_min(temp_v0_2, 0);
    D_0000A868 = temp_v0_2;
    return temp_v0;
}
#endif

struct SceNetThreadInfo *_sce_pspnet_get_threadinfo(SceUID thid) {
    struct SceNetThreadInfo *ti;

    sceKernelWaitSema(D_0000A868, 1, NULL);
    for (ti = TAILQ_FIRST(&D_0000AF44); ti != NULL; ti = TAILQ_NEXT(ti, ti_link)) {
        if (ti->ti_thid == thid)
            break;
    }
    sceKernelSignalSema(D_0000A868, 1);
    return ti;
}

struct SceNetThreadInfo *_sce_pspnet_lock_threadinfo(SceUID thid) {
    struct SceNetThreadInfo *ti;

    sceKernelWaitSema(D_0000A868, 1, NULL);
    for (ti = TAILQ_FIRST(&D_0000AF44); ti != NULL; ti = TAILQ_NEXT(ti, ti_link)) {
        if (ti->ti_thid == thid)
            break;
    }
    if (ti != NULL)
        ti->ti_refcnt++;
    sceKernelSignalSema(D_0000A868, 1);
    return ti;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_unlock_threadinfo);
#endif

#if FW_VERSION < 201
void _sce_pspnet_unlock_threadinfo(struct SceNetThreadInfo *arg0) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    arg0->ti_refcnt -= 1;
    sceKernelSignalSema(D_0000A868, 1);
}
#endif

#if FW_VERSION == 100
s32 _sce_pspnet_thread_leave(struct SceNetThreadInfo *ti, s32 err) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    ti->ti_errno = err;
    ti->ti_refcnt--;
    if (--ti->ti_sleepcnt == 0)
        sceKernelDeleteSema(ti->ti_sema);
    sceKernelSignalSema(D_0000A868, 1);
    return (err == 0) - 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_thread_leave);
#endif

#if FW_VERSION == 150
s32 _sce_pspnet_thread_leave(struct SceNetThreadInfo *arg0, s32 arg1) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    arg0->ti_errno = arg1;
    arg0->ti_refcnt -= 1;
    sceKernelSignalSema(D_0000A868, 1);
    return (arg1 == 0) - 1;
}
#endif

#if FW_VERSION == 152
s32 _sce_pspnet_thread_leave(struct SceNetThreadInfo *arg0, s32 arg1) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    arg0->ti_errno = arg1;
    arg0->ti_refcnt -= 1;
    sceKernelSignalSema(D_0000A868, 1);
    return (arg1 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION >= 282
void _sce_pspnet_unlock_threadinfo(struct SceNetThreadInfo *arg0) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    arg0->ti_refcnt = (u16) (arg0->ti_refcnt - 1);
    sceKernelSignalSema(D_0000A868, 1);
}

s32 _sce_pspnet_thread_leave(struct SceNetThreadInfo *arg0, s32 arg1) {
    sceKernelWaitSema(D_0000A868, 1, NULL);
    arg0->ti_errno = arg1;
    arg0->ti_refcnt = (u16) (arg0->ti_refcnt - 1);
    sceKernelSignalSema(D_0000A868, 1);
    return (arg1 == 0) ? 0 : -1;
}
#endif

s32 _sce_pspnet_get_thread_errno(void) {
    SceUID thid;
    struct SceNetThreadInfo *ti;

    thid = sceKernelGetThreadId();
    sceKernelWaitSema(D_0000A868, 1, NULL);
    for (ti = TAILQ_FIRST(&D_0000AF44); ti != NULL; ti = TAILQ_NEXT(ti, ti_link)) {
        if (ti->ti_thid == thid)
            break;
    }
    sceKernelSignalSema(D_0000A868, 1);
    if (ti == NULL)
        return 0x80410001;
    return ti->ti_errno;
}

s32 _sce_pspnet_set_thread_errno(s32 err) {
    SceUID thid;
    struct SceNetThreadInfo *ti;

    thid = sceKernelGetThreadId();
    sceKernelWaitSema(D_0000A868, 1, NULL);
    for (ti = TAILQ_FIRST(&D_0000AF44); ti != NULL; ti = TAILQ_NEXT(ti, ti_link)) {
        if (ti->ti_thid == thid)
            break;
    }
    sceKernelSignalSema(D_0000A868, 1);
    if (ti == NULL)
        return 0x80410001;
    ti->ti_errno = err;
    return 0;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_thread_busycount);
#endif

#if FW_VERSION < 152
s32 _sce_pspnet_thread_busycount(void) {
    s16 temp_a1;
    s32 var_s0;
    struct SceNetThreadInfo *var_v1;

    var_s0 = 0;
    sceKernelWaitSema(D_0000A868, 1, NULL);
    var_v1 = D_0000AF44.tqh_first;
    if (var_v1 != NULL) {
        do {
            temp_a1 = var_v1->ti_refcnt;
            var_v1 = var_v1->ti_link.tqe_next;
            var_s0 += temp_a1 > 0;
        } while (var_v1 != NULL);
    }
    sceKernelSignalSema(D_0000A868, 1);
    return (-(var_s0 == 0) & 0x7FBEFEFB) - 0x7FBEFEFB;
}
#endif

#if FW_VERSION == 152 || FW_VERSION >= 282
s32 _sce_pspnet_thread_busycount(void) {
    s16 temp_a1;
    s32 var_s0;
    struct SceNetThreadInfo *var_v1;

    var_s0 = 0;
    sceKernelWaitSema(D_0000A868, 1, NULL);
    var_v1 = D_0000AF44.tqh_first;
    if (var_v1 != NULL) {
        do {
            temp_a1 = var_v1->ti_refcnt;
            var_v1 = var_v1->ti_link.tqe_next;
            var_s0 += temp_a1 > 0;
        } while (var_v1 != NULL);
    }
    sceKernelSignalSema(D_0000A868, 1);
    return (var_s0 == 0) ? 0 : 0x80410105;
}
#endif

#if FW_VERSION < 250
void threadinfo_term(void) {
    if (D_0000A868 >= 0)
        sceKernelDeleteSema(D_0000A868);
    D_0000A868 = -1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", threadinfo_term);
#endif

#if FW_VERSION >= 282
void func_0000260C(void) {
    struct SceNetThreadInfo *var_s0;

    if (D_0000A868 >= 0) {
        var_s0 = D_0000AF44.tqh_first;
        if (var_s0 != NULL) {
            do {
                sceKernelDeleteSema(var_s0->ti_sema);
                var_s0 = var_s0->ti_link.tqe_next;
            } while (var_s0 != NULL);
        }
        sceKernelDeleteSema(D_0000A868);
    }
    D_0000A868 = -1;
}
#endif

#if FW_VERSION == 100
s32 sceNetThreadAbort(SceUID thid) {
    struct SceNetThreadInfo *self;
    struct SceNetThreadInfo *ti;
    s32 ret;
    s32 err;

    err = 0;
    ret = 0;
    self = _sce_pspnet_thread_enter();
    if (self == NULL)
        return 0x80410001;
    sceKernelWaitSema(D_0000A868, 1, NULL);
    for (ti = TAILQ_FIRST(&D_0000AF44); ti != NULL; ti = TAILQ_NEXT(ti, ti_link)) {
        if (ti->ti_thid == thid)
            break;
    }
    if (ti != NULL)
        ti->ti_refcnt++;
    sceKernelSignalSema(D_0000A868, 1);
    if (ti == NULL) {
        err = 2;
        ret = 0x80410104;
    } else {
        _sce_pspnet_tabort(ti);
        sceKernelWaitSema(D_0000A868, 1, NULL);
        ti->ti_refcnt--;
        sceKernelSignalSema(D_0000A868, 1);
    }
    sceKernelWaitSema(D_0000A868, 1, NULL);
    self->ti_errno = err;
    self->ti_refcnt--;
    if (--self->ti_sleepcnt == 0)
        sceKernelDeleteSema(self->ti_sema);
    sceKernelSignalSema(D_0000A868, 1);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceNetThreadAbort(SceUID thid) {
    struct SceNetThreadInfo *self;
    struct SceNetThreadInfo *ti;
    s32 ret;
    s32 err;

    err = 0;
    ret = 0;
    self = _sce_pspnet_thread_enter();
    if (self == NULL)
        return 0x80410001;
    sceKernelWaitSema(D_0000A868, 1, NULL);
    for (ti = TAILQ_FIRST(&D_0000AF44); ti != NULL; ti = TAILQ_NEXT(ti, ti_link)) {
        if (ti->ti_thid == thid)
            break;
    }
    if (ti != NULL)
        ti->ti_refcnt++;
    sceKernelSignalSema(D_0000A868, 1);
    if (ti == NULL) {
        err = 2;
        ret = 0x80410104;
    } else {
        _sce_pspnet_tabort(ti);
        sceKernelWaitSema(D_0000A868, 1, NULL);
        ti->ti_refcnt--;
        sceKernelSignalSema(D_0000A868, 1);
    }
    sceKernelWaitSema(D_0000A868, 1, NULL);
    self->ti_errno = err;
    self->ti_refcnt--;
    sceKernelSignalSema(D_0000A868, 1);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNetThreadAbort);
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfPoll);

#if FW_VERSION < 201
s32 sceNetBpfOpen(void) {
    struct SceNetThreadInfo *ti;
    s32 error;
    s32 fd;
    s32 i;

    fd = 0;
    i = 0;
    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return -1;
again:
    error = bpfopen(i);
    if (error == 0) {
        fd = i;
    } else if (error == 16) {
        i++;
        goto again;
    }
    if (_sce_pspnet_thread_leave(ti, error) < 0)
        return -1;
    return fd;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfOpen);
#endif

#if FW_VERSION < 201
s32 sceNetBpfClose(s32 fd) {
    struct SceNetThreadInfo *ti;

    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return -1;
    return _sce_pspnet_thread_leave(ti, bpfclose(fd));
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfClose);
#endif

#if FW_VERSION < 201
s32 sceNetBpfRead(s32 fd, void *buf, s32 len) {
    struct SceNetThreadInfo *ti;
    struct uio uio;
    struct iovec iov;
    s32 error;
    s32 ret;

    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return -1;
    uio.uio_iov = &iov;
    uio.uio_iovcnt = 1;
    iov.iov_base = buf;
    uio.uio_rw = UIO_READ;
    uio.uio_offset = 0;
    uio.uio_resid = len;
    iov.iov_len = len;
    error = bpfread(fd, &uio);
    ret = len - uio.uio_resid;
    if (_sce_pspnet_thread_leave(ti, error) < 0)
        return -1;
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfRead);
#endif

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfWrite);

#if FW_VERSION < 201
s32 sceNetBpfIoctl(s32 fd, u32 cmd, void *data) {
    struct SceNetThreadInfo *ti;

    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return -1;
    return _sce_pspnet_thread_leave(ti, bpfioctl(fd, cmd, data));
}
#else
INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfIoctl);
#endif

void callout_shutdown(void) {
    struct callout *c;
    s32 s;

    s = sceKernelCpuSuspendIntr();
    for (;;) {
        c = TAILQ_FIRST(&D_0000AF54);
        if (c == NULL)
            break;
        TAILQ_REMOVE(&D_0000AF54, c, c_link);
        sceKernelCancelAlarm(c->c_alarm);
    }
    sceKernelCpuResumeIntr(s);
    if (D_0000A870 >= 0) {
        sceKernelTerminateThread(D_0000A870);
        sceKernelDeleteThread(D_0000A870);
    }
    D_0000A870 = -1;
    if (D_0000A86C >= 0) {
        sceKernelDeleteSema(D_0000A86C);
    }
    D_0000A86C = -1;
}

#if FW_VERSION < 152
void _sce_pspnet_callout_reset_usec(struct callout *c, u32 usec, void (*func)(void *), void *arg) {
    s32 s;

    if (usec == 0) {
        usec = 1;
    }
    s = sceKernelCpuSuspendIntr();
    if (c->c_flags & CALLOUT_PENDING) {
        _sce_pspnet_callout_stop(c);
    }
    c->c_flags = CALLOUT_ACTIVE | CALLOUT_PENDING;
    c->c_arg = arg;
    c->c_func = func;
    c->c_time = usec;
    c->c_qlink.tqe_next = NULL;
    c->c_qlink.tqe_prev = NULL;
    c->c_alarm = sceKernelSetAlarm(usec, callout_alarm, c);
    TAILQ_INSERT_TAIL(&D_0000AF54, c, c_link);
    sceKernelCpuResumeIntr(s);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_callout_reset_usec);
#endif

#if FW_VERSION < 271
void _sce_pspnet_callout_stop(struct callout *c) {
    s32 s;

    s = sceKernelCpuSuspendIntr();
    if (!(c->c_flags & CALLOUT_PENDING)) {
        c->c_flags &= ~CALLOUT_ACTIVE;
    } else {
        if (sceKernelCancelAlarm(c->c_alarm) == 0) {
            TAILQ_REMOVE(&D_0000AF54, c, c_link);
        } else {
            TAILQ_REMOVE(&D_0000AF4C, c, c_qlink);
        }
        c->c_flags &= ~(CALLOUT_ACTIVE | CALLOUT_PENDING);
        c->c_qlink.tqe_next = NULL;
        c->c_qlink.tqe_prev = NULL;
        c->c_func = NULL;
    }
    sceKernelCpuResumeIntr(s);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_callout_stop);
#endif

#if FW_VERSION < 201
s32 callout_startup(s32 prio, s32 stackSize) {
    s32 ret;

    TAILQ_INIT(&D_0000AF4C);
    TAILQ_INIT(&D_0000AF54);
    D_0000A86C = sceKernelCreateSema("SceNetCalloutQueue", 0, 0, 1, NULL);
    if (D_0000A86C < 0)
        return D_0000A86C;
    D_0000A870 = sceKernelCreateThread("SceNetCallout", callout_thread, prio, stackSize, 0, NULL);
    if (D_0000A870 < 0)
        return D_0000A870;
    ret = sceKernelStartThread(D_0000A870, 0, NULL);
    if (ret >= 0)
        ret = 0;
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", callout_startup);
#endif

#if FW_VERSION < 201
void _sce_pspnet_callout_init(struct callout *c) {
    c->c_qlink.tqe_next = NULL;
    c->c_qlink.tqe_prev = NULL;
    c->c_link.tqe_next = NULL;
    c->c_link.tqe_prev = NULL;
    c->c_func = NULL;
    c->c_arg = NULL;
    c->c_time = 0;
    c->c_flags = 0;
    c->c_alarm = 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_callout_init);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_callout_cleanup);
#endif

#if FW_VERSION < 201
void _sce_pspnet_callout_cleanup(struct callout *c) {

}
#endif

#if FW_VERSION >= 282
void _sce_pspnet_callout_cleanup(struct callout *c) {
}
#endif

void _sce_pspnet_callout_reset(struct callout *c, u32 ticks, void (*func)(void *), void *arg) {
    u32 t;

    t = ticks;
    if (ticks <= 0x68DB8U) {
        if (t == 0) {
            t = 1;
        }
        _sce_pspnet_callout_reset_usec(c, t * 10000, func, arg);
    }
}

INCLUDE_ASM("nonmatchings/pspnet", callout_thread);

u32 callout_alarm(void *common) {
    struct callout *c = common;

    TAILQ_INSERT_TAIL(&D_0000AF4C, c, c_qlink);
    TAILQ_REMOVE(&D_0000AF54, c, c_link);
    sceKernelSignalSema(D_0000A86C, 1);
    return 0;
}

#if FW_VERSION == 100
s32 _sce_pspnet_tsleep_usec(void *ident, u32 usec) {
    struct SceNetThreadInfo *ti;
    struct slpque *qp;
    s32 error;
    s32 relock;

    relock = 0;
    error = 0;
    ti = _sce_pspnet_get_threadinfo(sceKernelGetThreadId());
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (D_0000AF6C > 0)
        D_0000AC58(ti);
    if (ti->ti_flags & TI_ABORTED) {
        ti->ti_flags &= ~TI_ABORTED;
        error = 4;
        goto out;
    }
    qp = &D_0000AC6C[LOOKUP(ident)];
    ti->ti_wchan = ident;
    TAILQ_INSERT_TAIL(qp, ti, ti_slplink);
    sceKernelSignalSema(D_0000A874, 1);
    if (usec != 0)
        _sce_pspnet_callout_reset_usec(&ti->ti_callout, usec, (void (*)(void *))func_000030A8_v100, ti);
    if (_sce_pspnet_spllock_owner() == sceKernelGetThreadId()) {
        relock = 1;
        _sce_pspnet_splunlock(1);
    }
    sceKernelWaitSema(ti->ti_sema, 1, NULL);
    if (relock)
        _sce_pspnet_spllock();
    if (usec != 0)
        _sce_pspnet_callout_stop(&ti->ti_callout);
    sceKernelWaitSema(D_0000A874, 1, NULL);
    TAILQ_REMOVE(qp, ti, ti_slplink);
    ti->ti_slplink.tqe_next = NULL;
    ti->ti_slplink.tqe_prev = NULL;
    if (ti->ti_flags & TI_TIMEDOUT) {
        ti->ti_flags &= ~TI_TIMEDOUT;
        error = 11;
        goto out;
    }
    if (ti->ti_flags & TI_ABORTED) {
        ti->ti_flags &= ~TI_ABORTED;
        error = 4;
    }
out:
    sceKernelSignalSema(D_0000A874, 1);
    return error;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 _sce_pspnet_tsleep_usec(void *ident, u32 usec) {
    struct SceNetThreadInfo *ti;
    struct slpque *qp;
    s32 error;
    s32 relock;

    relock = 0;
    error = 0;
    ti = _sce_pspnet_get_threadinfo(sceKernelGetThreadId());
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (D_0000AF6C > 0)
        D_0000AC58(ti);
    if (ti->ti_flags & TI_ABORTED) {
        ti->ti_flags &= ~TI_ABORTED;
        error = 4;
        goto out;
    }
    qp = &D_0000AC6C[LOOKUP(ident)];
    ti->ti_wchan = ident;
    TAILQ_INSERT_TAIL(qp, ti, ti_slplink);
    sceKernelSignalSema(D_0000A874, 1);
    if (usec != 0)
        _sce_pspnet_callout_reset_usec(&ti->ti_callout, usec, (void (*)(void *))func_00003100, ti);
    if (_sce_pspnet_spllock_owner() == sceKernelGetThreadId()) {
        relock = 1;
        _sce_pspnet_splunlock(1);
    }
    sceKernelWaitSema(ti->ti_sema, 1, NULL);
    if (relock)
        _sce_pspnet_spllock();
    if (usec != 0)
        _sce_pspnet_callout_stop(&ti->ti_callout);
    sceKernelWaitSema(D_0000A874, 1, NULL);
    TAILQ_REMOVE(qp, ti, ti_slplink);
    ti->ti_slplink.tqe_next = NULL;
    ti->ti_slplink.tqe_prev = NULL;
    if (ti->ti_flags & TI_TIMEDOUT) {
        ti->ti_flags &= ~TI_TIMEDOUT;
        error = 11;
        goto out;
    }
    if (ti->ti_flags & TI_ABORTED) {
        ti->ti_flags &= ~TI_ABORTED;
        error = 4;
    }
out:
    sceKernelSignalSema(D_0000A874, 1);
    return error;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_tsleep_usec);
#else
s32 slpque_init(void) {
    s32 i;
    s32 ret;

    for (i = 0; i < 128; i++)
        TAILQ_INIT(&D_0000AC6C[i]);
    ret = sceKernelCreateSema("SceNetSlpque", 0, 1, 1, NULL);
    D_0000A874 = ret;
    if (ret >= 0)
        return 0;
    return ret;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet", slpque_init);
#endif

#if FW_VERSION < 282
void slpque_term(void) {
    if (D_0000A874 >= 0)
        sceKernelDeleteSema(D_0000A874);
    D_0000A874 = -1;
}
#else
void func_00003380(void) {
    if (D_0000A874 >= 0) {
        sceKernelDeleteSema(D_0000A874);
    }
    D_0000A874 = -1;
}
#endif

s32 _sce_pspnet_tsleep(void *ident, u32 timo) {
    if (timo > 0x68DB8)
        return 22;
    return _sce_pspnet_tsleep_usec(ident, timo * 10000);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00003100);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00003100(struct SceNetThreadInfo *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (arg0->ti_wchan == NULL) {

    } else {
        arg0->ti_wchan = NULL;
        arg0->ti_flags |= TI_TIMEDOUT;
        sceKernelSignalSema(arg0->ti_sema, 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#endif

#if FW_VERSION == 100
void func_000030A8_v100(struct SceNetThreadInfo *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (arg0->ti_wchan == NULL) {

    } else {
        arg0->ti_wchan = NULL;
        arg0->ti_flags |= TI_TIMEDOUT;
        sceKernelSignalSema(arg0->ti_sema, 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#endif

#if FW_VERSION >= 282
void func_00003400(struct SceNetThreadInfo *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (arg0->ti_wchan == NULL) {

    } else {
        arg0->ti_wchan = NULL;
        arg0->ti_flags |= TI_TIMEDOUT;
        sceKernelSignalSema(arg0->ti_sema, 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#endif

#if FW_VERSION < 271
void _sce_pspnet_wakeup(void *ident) {
    struct slpque *qp;
    struct SceNetThreadInfo *ti;

    sceKernelWaitSema(D_0000A874, 1, NULL);
    qp = &D_0000AC6C[LOOKUP(ident)];
    for (ti = TAILQ_FIRST(qp); ti != NULL; ti = TAILQ_NEXT(ti, ti_slplink)) {
        if (ti->ti_wchan == ident) {
            ti->ti_wchan = NULL;
            sceKernelSignalSema(ti->ti_sema, 1);
        }
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_wakeup);
#endif

#if FW_VERSION < 271
void _sce_pspnet_tiwakeup(SceUID thid, void *ident) {
    struct slpque *qp;
    struct SceNetThreadInfo *ti;

    sceKernelWaitSema(D_0000A874, 1, NULL);
    qp = &D_0000AC6C[LOOKUP(ident)];
    for (ti = TAILQ_FIRST(qp); ti != NULL; ti = TAILQ_NEXT(ti, ti_slplink)) {
        if ((thid < 0 || thid == ti->ti_thid) && ti->ti_wchan == ident) {
            ti->ti_wchan = NULL;
            sceKernelSignalSema(ti->ti_sema, 1);
        }
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_tiwakeup);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_tabort);
#else
void _sce_pspnet_tabort(struct SceNetThreadInfo *arg0) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    arg0->ti_flags |= TI_ABORTED;
    if (arg0->ti_wchan == NULL) {

    } else {
        arg0->ti_wchan = NULL;
        sceKernelSignalSema(arg0->ti_sema, 1);
    }
    sceKernelSignalSema(D_0000A874, 1);
}
#endif

void _sce_pspnet_adhoc_sabort(s32 a, s32 b) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (D_0000AF68 > 0)
        D_0000AF60(a, b);
    sceKernelSignalSema(D_0000A874, 1);
}

void _sce_pspnet_inet_sabort(s32 a) {
    sceKernelWaitSema(D_0000A874, 1, NULL);
    if (D_0000AF6C > 0)
        D_0000AF64(a);
    sceKernelSignalSema(D_0000A874, 1);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_adhoc_module_in_sched);
#else
s32 _sce_pspnet_start_of_adhoc_module_in_sched(void (*sabort)(s32, s32)) {
    D_0000AF60 = sabort;
    D_0000AF68 = 1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_stop_of_adhoc_module_in_sched);
#else
s32 _sce_pspnet_stop_of_adhoc_module_in_sched(void) {
    D_0000AF68 = 0;
    D_0000AF60 = NULL;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_start_of_inet_module_in_sched);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_start_of_inet_module_in_sched(void (*sleephook)(struct SceNetThreadInfo *), void (*sabort)(s32)) {
    D_0000AC58 = sleephook;
    D_0000AF64 = sabort;
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
    D_0000AC58 = NULL;
    D_0000AF64 = NULL;
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 _sce_pspnet_start_of_inet_module_in_sched(void (*sleephook)(struct SceNetThreadInfo *), void (*sabort)(s32)) {
    D_0000AF5C = sleephook;
    D_0000AF64 = sabort;
    D_0000AF6C = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_inet_module_in_sched(void) {
    D_0000AF6C = 0;
    D_0000AF5C = NULL;
    D_0000AF64 = NULL;
    return 0;
}
#else
s32 spl_init(void) {
    D_0000A0E4 = sceKernelCreateSema("SceNetSpl", 0, 1, 1, NULL);
    if (D_0000A0E4 < 0)
        return D_0000A0E4;
    D_0000B06C = -1;
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet", spl_init);
#else
void spl_term(void) {
    if (D_0000A0E4 >= 0)
        sceKernelDeleteSema(D_0000A0E4);
    D_0000A0E4 = -1;
}
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION == 100
void _sce_pspnet_microtime(struct timeval *tv) {
    u64 t;

    t = sceNetGetSystemClockUsec();
    tv->tv_sec = t / 1000000;
    tv->tv_usec = t % 1000000;
}
#else
void _sce_pspnet_microtime(struct timeval *tv) {
    u64 t;

    t = sceKernelGetSystemTimeWide();
    tv->tv_sec = t / 1000000;
    tv->tv_usec = t % 1000000;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_uiomove);

void *_sce_pspnet_hashinit(s32 elements, u32 *hashmask) {
    s32 hashsize;
    void **hashtbl;
    s32 i;

    for (hashsize = 1; hashsize < elements; hashsize <<= 1)
        ;
    hashtbl = sceNetMallocInternal(hashsize * sizeof(*hashtbl));
    if (hashtbl == NULL)
        return NULL;
    for (i = 0; i < hashsize; i++)
        hashtbl[i] = NULL;
    *hashmask = hashsize - 1;
    return hashtbl;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_hashdone);
#else
void _sce_pspnet_hashdone(void *hashtbl) {
    sceNetFreeInternal(hashtbl);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_selrecord);
#else
void _sce_pspnet_selrecord(struct SceNetThreadInfo *ti, s32 *sip) {
    *sip = ti->ti_thid;
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
        _sce_pspnet_tiwakeup(temp_v1, &D_0000B91C);
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
        _sce_pspnet_tiwakeup(temp_v1, &D_0000BC0C);
        *arg0 = 0;
    }
}

M2C_UNK *_sce_pspnet_get_selwait_addr(void) {
    return &D_0000BC0C;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", bpfread);

INCLUDE_ASM("nonmatchings/pspnet", bpfwrite);

INCLUDE_ASM("nonmatchings/pspnet", bpfioctl);

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

s32 bpf_allocbufs(struct bpf_d *d) {
    d->bd_fbuf = sceNetMallocInternal(d->bd_bufsize);
    if (d->bd_fbuf == NULL)
        return 12;
    d->bd_sbuf = sceNetMallocInternal(d->bd_bufsize);
    if (d->bd_sbuf == NULL) {
        sceNetFreeInternal(d->bd_fbuf);
        return 12;
    }
    d->bd_slen = 0;
    d->bd_hlen = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet", func_000044C0);

void bpfilterattach(s32 n) {
    s32 i;

    D_0000A87C = 0x2000;
    D_0000BC10 = NULL;
    for (i = 0; i < NBPFILTER; ++i)
        D_MARKFREE(&D_0000BC14[i]);
}

#if FW_VERSION < 201
s32 bpfopen(s32 minor) {
    struct bpf_d *d;

    if ((u32)minor >= NBPFILTER)
        return 6;
    d = &D_0000BC14[minor];
    if (!D_ISFREE(d))
        return 16;
    sceNetMemset(d, 0, sizeof(*d));
    d->bd_bufsize = D_0000A87C;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", bpfopen);
#endif

s32 bpfclose(s32 minor) {
    struct bpf_d *d = &D_0000BC14[minor];
    struct bpf_if *bp;
    struct bpf_d **p;
    s32 s;

    s = _sce_pspnet_spllock();
    if (d->bd_bif) {
        bp = d->bd_bif;
        p = &bp->bif_dlist;
        while (*p != d)
            p = &(*p)->bd_next;
        *p = (*p)->bd_next;
        if (bp->bif_dlist == NULL)
            *bp->bif_driverp = NULL;
        d->bd_bif = NULL;
    }
    _sce_pspnet_splunlock(s);
    if (d->bd_sbuf != NULL) {
        sceNetFreeInternal(d->bd_sbuf);
        if (d->bd_hbuf != NULL)
            sceNetFreeInternal(d->bd_hbuf);
        if (d->bd_fbuf != NULL)
            sceNetFreeInternal(d->bd_fbuf);
    }
    if (d->bd_filter)
        sceNetFreeInternal(d->bd_filter);
    D_MARKFREE(d);
    return 0;
}

s32 bpfpoll(s32 minor, s32 events, struct SceNetThreadInfo *p) {
    struct bpf_d *d = &D_0000BC14[minor];
    s32 revents = 0;
    s32 s;

    s = _sce_pspnet_spllock();
    if (events & (POLLIN | POLLRDNORM)) {
        if (d->bd_hlen != 0 || (d->bd_immediate && d->bd_slen != 0))
            revents |= events & (POLLIN | POLLRDNORM);
        else
            _sce_pspnet_selrecord(p, &d->bd_sel);
    }
    _sce_pspnet_splunlock(s);
    return revents;
}

void bpf_mtap(void *arg, struct mbuf *m) {
    struct bpf_if *bp = arg;
    struct bpf_d *d;
    u32 pktlen, slen;
    struct mbuf *m0;
    s32 s;

    pktlen = 0;
    for (m0 = m; m0 != NULL; m0 = m0->m_next)
        pktlen += m0->m_len;
    s = _sce_pspnet_spllock();
    for (d = bp->bif_dlist; d != NULL; d = d->bd_next) {
        ++d->bd_rcount;
        slen = bpf_filter(d->bd_filter, (u8 *)m, pktlen, 0);
        if (slen != 0)
            catchpacket(d, (u8 *)m, pktlen, slen, bpf_mcpy);
    }
    _sce_pspnet_splunlock(s);
}

#if FW_VERSION < 271
void bpfattach(struct bpf_if **driverp, struct ifnet *ifp, u32 dlt, u32 hdrlen) {
    struct bpf_if *bp;

    bp = sceNetMallocInternal(sizeof(*bp));
    bp->bif_dlist = NULL;
    bp->bif_driverp = driverp;
    bp->bif_ifp = ifp;
    bp->bif_dlt = dlt;
    bp->bif_next = D_0000BC10;
    D_0000BC10 = bp;
    *bp->bif_driverp = NULL;
    bp->bif_hdrlen = BPF_WORDALIGN(hdrlen + SIZEOF_BPF_HDR) - hdrlen;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", bpfattach);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet", bpf_mcpy);
#endif

#if FW_VERSION == 152
u8 *bpf_mcpy(u8 *arg0, void *arg1, u32 arg2) {
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
            sceNetMemcpy(var_s3, M2C_FIELD(var_s2, u8 **, 8), (s32) temp_a2);
            var_s3 = &var_s3[temp_s0_2];
            var_s2 = M2C_FIELD(var_s2, void **, 0);
        } while (var_s1 != 0);
    }
    return arg0;
}
#endif

#if FW_VERSION >= 282
u8 *bpf_mcpy(u8 *arg0, void *arg1, u32 arg2) {
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

#if FW_VERSION < 271
void catchpacket(struct bpf_d *d, u8 *pkt, u32 pktlen, u32 snaplen, u8 *(*cpfn)()) {
    struct bpf_hdr *hp;
    s32 totlen, curlen;
    s32 hdrlen = d->bd_bif->bif_hdrlen;
    struct timeval tv;

    totlen = hdrlen + min(snaplen, pktlen);
    if (totlen > d->bd_bufsize)
        totlen = d->bd_bufsize;
    curlen = BPF_WORDALIGN(d->bd_slen);
    if (curlen + totlen > d->bd_bufsize) {
        if (d->bd_fbuf == 0) {
            ++d->bd_dcount;
            return;
        }
        ROTATE_BUFFERS(d);
        bpf_wakeup(d);
        curlen = 0;
    } else if (d->bd_immediate)
        bpf_wakeup(d);
    hp = (struct bpf_hdr *)(d->bd_sbuf + curlen);
    _sce_pspnet_microtime(&tv);
    hp->bh_tstamp = tv;
    hp->bh_datalen = pktlen;
    hp->bh_hdrlen = hdrlen;
    (*cpfn)((u8 *)hp + hdrlen, pkt, (hp->bh_caplen = totlen - hdrlen));
    d->bd_slen = curlen + totlen;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", catchpacket);
#endif

INCLUDE_ASM("nonmatchings/pspnet", bpf_filter);

s32 bpf_validate(struct bpf_insn *f, s32 len) {
    s32 i;
    struct bpf_insn *p;

    for (i = 0; i < len; ++i) {
        p = &f[i];
        if (BPF_CLASS(p->code) == BPF_JMP) {
            s32 from = i + 1;

            if (BPF_OP(p->code) == BPF_JA) {
                if ((p->k < 0) ||
                    (from + p->k >= len) ||
                    (from + p->k < 0))
                    return 0;
            }
            else if (from + p->jt >= len || from + p->jf >= len)
                return 0;
        }
        if ((BPF_CLASS(p->code) == BPF_ST ||
             (BPF_CLASS(p->code) == BPF_LD &&
              (p->code & 0xe0) == BPF_MEM)) &&
            (p->k >= BPF_MEMWORDS || p->k < 0))
            return 0;
        if (p->code == (BPF_ALU | BPF_DIV | BPF_K) && p->k == 0)
            return 0;
    }
    return BPF_CLASS(f[len - 1].code) == BPF_RET;
}

s32 m_xword(struct mbuf *m, s32 k, s32 *err) {
    s32 len;
    u8 *cp, *np;
    struct mbuf *m0;

    MINDEX(len, m, k);
    cp = mtod(m, u8 *) + k;
    if (len - k >= 4) {
        *err = 0;
        return EXTRACT_LONG(cp);
    }
    m0 = m->m_next;
    if (m0 == 0 || m0->m_len + len - k < 4)
        goto bad;
    *err = 0;
    np = mtod(m0, u8 *);
    switch (len - k) {
    case 1:
        return (cp[0] << 24) | (np[0] << 16) | (np[1] << 8) | np[2];
    case 2:
        return (cp[0] << 24) | (cp[1] << 16) | (np[0] << 8) | np[1];
    default:
        return (cp[0] << 24) | (cp[1] << 16) | (cp[2] << 8) | np[0];
    }
bad:
    *err = 1;
    return 0;
}

s32 m_xhalf(struct mbuf *m, s32 k, s32 *err) {
    s32 len;
    u8 *cp;
    struct mbuf *m0;

    MINDEX(len, m, k);
    cp = mtod(m, u8 *) + k;
    if (len - k >= 2) {
        *err = 0;
        return EXTRACT_SHORT(cp);
    }
    m0 = m->m_next;
    if (m0 == 0)
        goto bad;
    *err = 0;
    return (cp[0] << 8) | mtod(m0, u8 *)[0];
bad:
    *err = 1;
    return 0;
}

#if FW_VERSION < 152
void _sce_pspnet_if_attach(struct ifnet *ifp) {
    u32 socksize, ifasize;
    s32 namelen, masklen;
    struct sockaddr_dl *sdl;
    struct ifaddr *ifa;
    struct ifnet *p;
    s32 index;

    TAILQ_INIT(&ifp->if_addrlist);
    for (index = 1; index < 8; index++) {
        for (p = TAILQ_FIRST(&D_0000BE54); p != NULL; p = TAILQ_NEXT(p, if_list)) {
            if (p->if_index == index)
                break;
        }
        if (p == NULL)
            break;
    }
    if (D_0000B0B0 < index)
        D_0000B0B0 = index;
    TAILQ_INSERT_TAIL(&D_0000BE54, ifp, if_list);
    ifp->if_index = index;
    D_0000B0B8[ifp->if_index] = ifp;

    namelen = sceNetStrlen(ifp->if_xname);
    masklen = 8 + namelen;
    socksize = masklen + ifp->if_addrlen;
#define ROUNDUP(a) (1 + (((a) - 1) | (sizeof(long) - 1)))
    if (socksize < sizeof(*sdl))
        socksize = sizeof(*sdl);
    socksize = ROUNDUP(socksize);
    ifasize = sizeof(*ifa) + 2 * socksize;
    ifa = sceNetMallocInternal(ifasize);
    sceNetMemset(ifa, 0, ifasize);
    sdl = (struct sockaddr_dl *)(ifa + 1);
    sdl->sdl_len = socksize;
    sdl->sdl_family = AF_LINK;
    sceNetBcopy(ifp->if_xname, sdl->sdl_data, namelen);
    sdl->sdl_nlen = namelen;
    sdl->sdl_index = ifp->if_index;
    sdl->sdl_type = ifp->if_type;
    D_0000B3B8[ifp->if_index] = ifa;
    IFAREF(ifa);
    ifa->ifa_ifp = ifp;
    ifa->ifa_rtrequest = _sce_pspnet_link_rtrequest;
    TAILQ_INSERT_HEAD(&ifp->if_addrlist, ifa, ifa_list);
    IFAREF(ifa);
    ifa->ifa_addr = (struct sockaddr *)sdl;
    ifp->if_sadl = sdl;
    sdl = (struct sockaddr_dl *)(socksize + (char *)sdl);
    ifa->ifa_netmask = (struct sockaddr *)sdl;
    sdl->sdl_len = masklen;
    while (namelen != 0)
        sdl->sdl_data[--namelen] = 0xff;
    if (ifp->if_snd.ifq_maxlen == 0)
        ifp->if_snd.ifq_maxlen = D_0000A0EC;
    ifp->if_broadcastaddr = 0;
    ifp->if_link_state = 0;
    if (D_0000B3AC > 0)
        D_0000B37C(ifp);
}
#endif

#if FW_VERSION == 152
void _sce_pspnet_if_attach(struct ifnet *ifp) {
    u32 socksize, ifasize;
    s32 namelen, masklen;
    struct sockaddr_dl *sdl;
    struct ifaddr *ifa;
    struct ifnet *p;
    s32 index;

    TAILQ_INIT(&ifp->if_addrlist);
    for (index = 1; index < 8; index++) {
        for (p = TAILQ_FIRST(&D_0000BE54); p != NULL; p = TAILQ_NEXT(p, if_list)) {
            if (p->if_index == index)
                break;
        }
        if (p == NULL)
            break;
    }
    if (D_0000B0B0 < index)
        D_0000B0B0 = index;
    TAILQ_INSERT_TAIL(&D_0000BE54, ifp, if_list);
    ifp->if_index = index;
    D_0000B0B8[ifp->if_index] = ifp;

    namelen = sceNetStrlen(ifp->if_xname);
    masklen = 8 + namelen;
    socksize = masklen + ifp->if_addrlen;
#define ROUNDUP(a) (1 + (((a) - 1) | (sizeof(long) - 1)))
    if (socksize < sizeof(*sdl))
        socksize = sizeof(*sdl);
    socksize = ROUNDUP(socksize);
    ifasize = sizeof(*ifa) + 2 * socksize;
    ifa = sceNetMallocInternal(ifasize);
    sceNetMemset(ifa, 0, ifasize);
    sdl = (struct sockaddr_dl *)(ifa + 1);
    sdl->sdl_len = socksize;
    sdl->sdl_family = AF_LINK;
    sceNetBcopy(ifp->if_xname, sdl->sdl_data, namelen);
    sdl->sdl_nlen = namelen;
    sdl->sdl_index = ifp->if_index;
    sdl->sdl_type = ifp->if_type;
    D_0000B3B8[ifp->if_index] = ifa;
    IFAREF(ifa);
    ifa->ifa_ifp = ifp;
    ifa->ifa_rtrequest = _sce_pspnet_link_rtrequest;
    TAILQ_INSERT_HEAD(&ifp->if_addrlist, ifa, ifa_list);
    IFAREF(ifa);
    ifa->ifa_addr = (struct sockaddr *)sdl;
    ifp->if_sadl = sdl;
    sdl = (struct sockaddr_dl *)(socksize + (char *)sdl);
    ifa->ifa_netmask = (struct sockaddr *)sdl;
    sdl->sdl_len = masklen;
    while (namelen != 0)
        sdl->sdl_data[--namelen] = 0xff;
    if (ifp->if_snd.ifq_maxlen == 0)
        ifp->if_snd.ifq_maxlen = D_0000A0FC;
    ifp->if_broadcastaddr = 0;
    ifp->if_link_state = 0;
    if (D_0000B3AC > 0)
        D_0000B37C(ifp);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_if_attach);
#endif

void _sce_pspnet_if_detach(struct ifnet *ifp) {
    struct ifaddr *ifa;
    s32 family;
    s32 s;

    s = _sce_pspnet_spllock();
    _sce_pspnet_if_down(ifp);
    for (ifa = TAILQ_FIRST(&ifp->if_addrlist); ifa != NULL; ifa = TAILQ_FIRST(&ifp->if_addrlist)) {
        family = ifa->ifa_addr->sa_family;
        if (family == AF_LINK) {
            if (D_0000B3AC > 0)
                D_0000B380(ifa);
            TAILQ_REMOVE(&ifp->if_addrlist, ifa, ifa_list);
            IFAFREE(ifa);
            continue;
        }
        if (D_0000B3AC > 0)
            D_0000B384(ifp, family);
    }
    if (D_0000B3AC > 0)
        D_0000B388(ifp);
    IFAFREE(D_0000B3B8[ifp->if_index]);
    D_0000B3B8[ifp->if_index] = NULL;
    if (D_0000B3AC > 0)
        D_0000B38C(ifp);
    TAILQ_REMOVE(&D_0000BE54, ifp, if_list);
    _sce_pspnet_splunlock(s);
}

#if FW_VERSION < 271
void _sce_pspnet_if_down(struct ifnet *ifp) {
    ifp->if_flags &= ~IFF_UP;
    if (D_0000B3AC > 0)
        D_0000B390(ifp);
    func_00005404(&ifp->if_snd);
    if (D_0000B3AC > 0)
        D_0000B394(ifp);
}
#else
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_if_down);
#endif

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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet", ifconf);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005AD4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet", ifinit);
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
INCLUDE_ASM("nonmatchings/pspnet", if_nullinput);
#endif

#if FW_VERSION < 201
void if_nullinput(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", if_nullstart);
#endif

#if FW_VERSION < 201
void if_nullstart(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", if_nullioctl);
#endif

#if FW_VERSION < 201
s32 if_nullioctl(void) {
    return 6;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", if_nullreset);
#endif

#if FW_VERSION < 201
s32 if_nullreset(void) {
    return 6;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", if_nullwatchdog);
#endif

#if FW_VERSION < 201
void if_nullwatchdog(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", if_nulldrain);
#endif

#if FW_VERSION < 201
void if_nulldrain(void) {

}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet", func_00005ADC);

s32 _sce_pspnet_if_nulloutput(void) {
    return 6;
}

void if_nullinput(void) {
}

void if_nullstart(void) {
}

s32 if_nullioctl(void) {
    return 6;
}

s32 if_nullreset(void) {
    return 6;
}

void if_nullwatchdog(void) {
}

void if_nulldrain(void) {
}
#endif

void if_deactivate(struct ifnet *ifp) {
    s32 s;

    s = _sce_pspnet_spllock();
    ifp->if_output = _sce_pspnet_if_nulloutput;
    ifp->if_input = if_nullinput;
    ifp->if_start = if_nullstart;
    ifp->if_ioctl = if_nullioctl;
    ifp->if_reset = if_nullreset;
    ifp->if_watchdog = if_nullwatchdog;
    ifp->if_drain = if_nulldrain;
    ifp->if_snd.ifq_maxlen = 0;
    _sce_pspnet_splunlock(s);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_ifafree);
#else
void _sce_pspnet_ifafree(struct ifaddr *ifa) {
    sceNetFreeInternal(ifa);
}
#endif

void _sce_pspnet_link_rtrequest(s32 cmd, void *rt, void *info) {
    if (D_0000B3AC > 0)
        D_0000B374(cmd, rt, info);
}

void _sce_pspnet_if_up(struct ifnet *ifp) {
    ifp->if_flags |= IFF_UP;
    if (D_0000B3AC > 0)
        D_0000B398(ifp);
}

void if_slowtimo(void *arg) {
    struct ifnet *ifp;
    s32 s;

    s = _sce_pspnet_spllock();
    for (ifp = TAILQ_FIRST(&D_0000BE54); ifp != NULL; ifp = TAILQ_NEXT(ifp, if_list)) {
        if (ifp->if_timer == 0 || --ifp->if_timer)
            continue;
        if (ifp->if_watchdog)
            (*ifp->if_watchdog)(ifp);
    }
    _sce_pspnet_splunlock(s);
    _sce_pspnet_callout_reset(&D_0000BE5C, 100, if_slowtimo, NULL);
}

#if FW_VERSION < 201
struct ifnet *_sce_pspnet_ifunit(const char *name) {
    struct ifnet *ifp;
    s32 s;

    s = _sce_pspnet_spllock();
    for (ifp = TAILQ_FIRST(&D_0000BE54); ifp != NULL; ifp = TAILQ_NEXT(ifp, if_list)) {
        if (ifp->if_output == _sce_pspnet_if_nulloutput)
            continue;
        if (sceNetStrcmp(ifp->if_xname, name) == 0) {
            _sce_pspnet_splunlock(s);
            return ifp;
        }
    }
    _sce_pspnet_splunlock(s);
    return NULL;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_ifunit);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_if_exist(const char *name) {
    struct ifnet *ifp;
    s32 s;

    s = _sce_pspnet_spllock();
    for (ifp = TAILQ_FIRST(&D_0000BE54); ifp != NULL; ifp = TAILQ_NEXT(ifp, if_list)) {
        if (ifp->if_output == _sce_pspnet_if_nulloutput)
            continue;
        if (sceNetStrcmp(ifp->if_xname, name) == 0) {
            _sce_pspnet_splunlock(s);
            return 1;
        }
    }
    _sce_pspnet_splunlock(s);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_if_exist);
#endif

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_ifioctl_sync);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", sceNet_lib_E9D457B6);
#else
s32 _sce_pspnet_get_ifindex(const char *name) {
    struct ifnet *ifp;
    s32 s;
    s32 index;

    index = -1;
    s = _sce_pspnet_spllock();
    for (ifp = TAILQ_FIRST(&D_0000BE54); ifp != NULL; ifp = TAILQ_NEXT(ifp, if_list)) {
        if (sceNetStrncmp(name, ifp->if_xname, IFNAMSIZ) == 0) {
            index = ifp->if_index;
            break;
        }
    }
    _sce_pspnet_splunlock(s);
    return index;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_get_ifindex);
#endif

struct ifnet *_sce_pspnet_ifplookup_index(u32 index) {
    struct ifnet *ifp;
    s32 s;

    s = _sce_pspnet_spllock();
    for (ifp = TAILQ_FIRST(&D_0000BE54); ifp != NULL; ifp = TAILQ_NEXT(ifp, if_list)) {
        if (ifp->if_index == index)
            break;
    }
    _sce_pspnet_splunlock(s);
    return ifp;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_get_if_core_variables);
#endif

#if FW_VERSION < 201
s32 _sce_pspnet_get_if_core_variables(s32 *arg0, s32 *arg1, s32 *arg2, struct ifnethead *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_0000B0B0;
    }
    if (arg1 != NULL) {
        *arg1 = (s32)D_0000B0B8;
    }
    if (arg2 != NULL) {
        *arg2 = (s32)D_0000B3B8;
    }
    if (arg3 != NULL) {
        *arg3 = D_0000BE54;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 _sce_pspnet_get_if_core_variables(s32 *arg0, s32 *arg1, s32 *arg2, struct ifnethead *arg3) {
    if (arg0 != NULL) {
        *arg0 = D_0000B3B4;
    }
    if (arg1 != NULL) {
        *arg1 = D_0000B3BC;
    }
    if (arg2 != NULL) {
        *arg2 = (s32)D_0000B3B8;
    }
    if (arg3 != NULL) {
        sceNetMemcpy(arg3, &D_0000BE54, 8);
    }
    return 0;
}
#endif

s32 _sce_pspnet_start_of_inet_module_in_if_core(void (*f0)(), void (*f1)(), void (*f2)(), void (*f3)(), void (*f4)(), void (*f5)(), void (*f6)(), void (*f7)(), void (*f8)(), void (*f9)(), void (*f10)(), void (*f11)(), void (*f12)()) {
    struct ifnet *ifp;

    D_0000B374 = f0;
    D_0000B378 = f1;
    D_0000B37C = f2;
    D_0000B380 = f3;
    D_0000B384 = f4;
    D_0000B388 = f5;
    D_0000B38C = f6;
    D_0000B390 = f7;
    D_0000B394 = f8;
    D_0000B398 = f9;
    D_0000B39C = f10;
    D_0000B3A0 = f11;
    D_0000B3A4 = f12;
    for (ifp = TAILQ_FIRST(&D_0000BE54); ifp != NULL; ifp = TAILQ_NEXT(ifp, if_list)) {
        f2(ifp);
        if (ifp->if_flags & IFF_UP)
            f9(ifp);
    }
    D_0000B3AC = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_inet_module_in_if_core(void) {
    struct ifnet *ifp;
    struct ifaddr *ifa;
    s32 family;
    s32 s;

    D_0000B3AC = 0;
    for (ifp = TAILQ_FIRST(&D_0000BE54); ifp != NULL; ifp = TAILQ_NEXT(ifp, if_list)) {
        s = _sce_pspnet_spllock();
        _sce_pspnet_if_down(ifp);
        ifa = TAILQ_FIRST(&ifp->if_addrlist);
        while (ifa != NULL) {
            family = ifa->ifa_addr->sa_family;
            if (family == AF_LINK) {
                D_0000B380(ifa);
                ifa = TAILQ_NEXT(ifa, ifa_list);
                continue;
            }
            D_0000B384(ifp, family);
            ifa = TAILQ_FIRST(&ifp->if_addrlist);
        }
        D_0000B388(ifp);
        D_0000B38C(ifp);
        _sce_pspnet_splunlock(s);
    }
    D_0000B374 = NULL;
    D_0000B378 = NULL;
    D_0000B37C = NULL;
    D_0000B380 = NULL;
    D_0000B384 = NULL;
    D_0000B388 = NULL;
    D_0000B38C = NULL;
    D_0000B390 = NULL;
    D_0000B394 = NULL;
    D_0000B398 = NULL;
    D_0000B39C = NULL;
    D_0000B3A0 = NULL;
    D_0000B3A4 = NULL;
    return 0;
}

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

#if FW_VERSION < 201
struct ifnet *_sce_pspnet_ifplookup_lladdr(const void *lladdr) {
    struct ifnet *ifp;

    for (ifp = TAILQ_FIRST(&D_0000BE54); ifp != NULL; ifp = TAILQ_NEXT(ifp, if_list)) {
        if (sceNetMemcmp(LLADDR(ifp->if_sadl), lladdr, 6) == 0)
            break;
    }
    return ifp;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_ifplookup_lladdr);
#endif

s32 _sce_pspnet_start_of_inet_module_in_if_ethersubr_core(s32 (*f0)(), s32 (*f1)(), s32 (*f2)(), s32 (*f3)()) {
    D_0000B3C0 = f0;
    D_0000B3C4 = f1;
    D_0000B3C8 = f2;
    D_0000B3CC = f3;
    D_0000B3D4 = 1;
    return 0;
}

s32 _sce_pspnet_stop_of_inet_module_in_if_ethersubr_core(void) {
    D_0000B3D4 = 0;
    D_0000B3C0 = NULL;
    D_0000B3C4 = NULL;
    D_0000B3C8 = NULL;
    D_0000B3CC = NULL;
    return 0;
}

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

s32 func_00007020(void *a0, void *a1, void *a2, void *a3) {
    if (D_0000B3D4 > 0)
        return D_0000B3C0(a0, a1, a2, a3);
    return 0;
}

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
s32 func_00007738(s32 poolSize) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceNetIfhandle_lib_0C391E9F(poolSize);
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

s32 func_00007678(s32 poolSize) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceNetIfhandle_lib_0C391E9F(poolSize);
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

u32 sceNetRand(void) {
    s32 i;

    if (++D_0000BC08 >= 521) {
        for (i = 0; i < 32; i++)
            D_0000B3E4[i] ^= D_0000B3E4[i + 489];
        for (i = 32; i < 521; i++)
            D_0000B3E4[i] ^= D_0000B3E4[i - 32];
        D_0000BC08 = 0;
    }
    return D_0000B3E4[D_0000BC08];
}

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
s64 sceNetGetSystemClockUsec(void) {
    SceKernelSysClock clk;
    u32 sec, usec;

    sceKernelGetSystemTime(&clk);
    sceKernelSysClock2USec(&clk, &sec, &usec);
    return (s32)(sec * 1000000 + usec);
}
#endif

#if FW_VERSION >= 282
s32 func_0000791C(void) {
    return 0;
}

s32 func_00007924(void) {
    return 0;
}
#endif

u32 sceNetGetSystemClockSec(void) {
    SceKernelSysClock clk;
    u32 sec, usec;

    sceKernelGetSystemTime(&clk);
    sceKernelSysClock2USec(&clk, &sec, &usec);
    return sec;
}

#if FW_VERSION < 271
s32 func_00007A68(char c) {
    s32 r;

    if ((u8)(c - '0') < 10)
        r = c - '0';
    else if (c >= 'A' && c <= 'Z')
        r = c - 'A' + 10;
    else if (c >= 'a' && c <= 'z')
        r = c - 'a' + 10;
    else
        r = 9999999;
    return r;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet", func_00007A68);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pspnet", D_00009D5C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet", func_0000795C);
#endif

#if FW_VERSION < 201
void sceNetEtherNtostr(const u8 *mac, char *buf) {
    sceNetSprintf(buf, "%02x:%02x:%02x:%02x:%02x:%02x", mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
}
#endif

#if (FW_VERSION >= 201 && FW_VERSION < 282) || FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet", sceNetEtherNtostr);
#endif

#if FW_VERSION == 282
void sceNetEtherNtostr(const u8 *mac, char *buf) {
    if (((mac == NULL) | (buf == NULL)) != 0) {

    } else {
        sceNetSprintf(buf, "%02x:%02x:%02x:%02x:%02x:%02x", mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
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

void *sceNetMemchr(const void *s, s32 c, s32 n) {
    const u8 *p;
    u8 ch = c;

    if (s != NULL) {
        for (p = s; n > 0; n--, p++) {
            if (*p == ch)
                return (void *)p;
        }
    }
    return NULL;
}

void *sceNetMemmove(void *dst, const void *src, s32 n) {
    u8 *d;
    const u8 *s;

    d = dst;
    s = src;
    if (dst == NULL)
        return NULL;
    if (d >= s) {
        for (n--; n >= 0; n--)
            d[n] = s[n];
    } else {
        while (n > 0) {
            *d++ = *s++;
            n--;
        }
    }
    return dst;
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

void *sceNetMemset(void *s, s32 c, s32 n) {
    u8 *p;

    if (s != NULL) {
        c &= 0xFF;
        for (p = s; n > 0; n--)
            *p++ = c;
    }
    return s;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet", func_00007CA4);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet", func_00007D20);
#endif

#if FW_VERSION < 201
void sceNetBcopy(const void *src, void *dst, s32 n) {
    sceNetMemmove(dst, src, n);
}

void sceNetBzero(void *s, s32 n) {
    u8 *p;

    if (s != NULL) {
        for (p = s; n > 0; n--)
            *p++ = 0;
    }
}

s32 sceNetStrcmp(const char *s1, const char *s2) {
    if (s1 == NULL || s2 == NULL) {
        if (s1 == s2)
            return 0;
        return (s1 == NULL) ? -1 : 1;
    }
    while (*s1 == *s2++) {
        if (*s1++ == 0)
            return 0;
    }
    return *s1 - *(s2 - 1);
}

char *sceNetIndex(const char *s, s32 c) {
    char ch = c;

    if (s == NULL)
        return NULL;
    do {
        if (*s == ch)
            return (char *)s;
    } while (*s++ != 0);
    return NULL;
}

char *sceNetStrrchr(const char *s, s32 c) {
    const char *p;
    char ch = c;

    p = s;
    if (s == NULL)
        return NULL;
    while (*p++ != 0)
        ;
    p--;
    do {
        if (*p == ch)
            return (char *)p;
    } while (s < p--);
    return NULL;
}

s32 sceNetStrncmp(const char *s1, const char *s2, s32 n) {
    if (s1 == NULL || s2 == NULL) {
        if (s1 == s2)
            return 0;
        return (s1 == NULL) ? -1 : 1;
    }
    n--;
    while (n >= 0 && *s1 == *s2++) {
        if (*s1++ == 0)
            return 0;
        n--;
    }
    return (n < 0) ? 0 : *s1 - *(s2 - 1);
}

char *sceNetStrncpy(char *dst, const char *src, s32 n) {
    char *d;
    s32 i;

    d = dst;
    if (dst == NULL || src == NULL)
        return NULL;
    for (i = 0; i < n; i++) {
        if ((*d++ = *src++) == 0) {
            for (i++; i < n; i++)
                *d++ = 0;
            return dst;
        }
    }
    return dst;
}

char *sceNetStrchr(const char *s, s32 c) {
    char ch = c;

    if (s == NULL)
        return NULL;
    do {
        if (*s == ch)
            return (char *)s;
    } while (*s++ != 0);
    return NULL;
}

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

s32 sceNetStrlen(const char *s) {
    s32 n;

    n = 0;
    if (s == NULL)
        return 0;
    while (*s++ != 0)
        n++;
    return n;
}

s32 sceNetSprintf(char *buf, const char *fmt, ...) {
    va_list ap;
    char *p;
    s32 ret;

    p = buf;
    va_start(ap, fmt);
    ret = func_000080A0(func_000087C8, &p, fmt, ap);
    va_end(ap);
    return ret;
}

INCLUDE_ASM("nonmatchings/pspnet", func_000080A0);

void func_000087C8(char **pp, s32 c) {
    if (c < 256) {
        *(*pp)++ = c;
    } else {
        **pp = 0;
    }
}
#endif

char func_00007B50(char c) {
    s32 t = D_0000A88C[c + 1];

    if (t & 2)
        c -= 0x20;
    return c;
}

#if FW_VERSION >= 201
char sceNetTolower(char c) {
    s32 t = D_0000A88C[c + 1];

    if (t & 1)
        c += 0x20;
    return c;
}

char sceNetLook_ctype_table(s32 c) {
    return D_0000A88C[c + 1];
}
#else
char sceNetTolower(char c) {
    s32 t = D_0000A88C[c + 1];

    if (t & 1)
        c += 0x20;
    return c;
}

char sceNetLook_ctype_table(s32 c) {
    return D_0000A88C[c + 1];
}
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

void *sceNetMemset(void *s, s32 c, s32 n) {
    u8 *p;

    if (s != NULL) {
        c &= 0xFF;
        for (p = s; n > 0; n--)
            *p++ = c;
    }
    return s;
}

void *sceNetMemchr(const void *s, s32 c, s32 n) {
    const u8 *p;
    u8 ch = c;

    if (s != NULL) {
        for (p = s; n > 0; n--, p++) {
            if (*p == ch)
                return (void *)p;
        }
    }
    return NULL;
}

void *sceNetMemmove(void *dst, const void *src, s32 n) {
    u8 *d;
    const u8 *s;

    d = dst;
    s = src;
    if (dst == NULL)
        return NULL;
    if (d >= s) {
        for (n--; n >= 0; n--)
            d[n] = s[n];
    } else {
        while (n > 0) {
            *d++ = *s++;
            n--;
        }
    }
    return dst;
}

INCLUDE_ASM("nonmatchings/pspnet", sceNetBcmp);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBcopy);

void sceNetBzero(void *s, s32 n) {
    u8 *p;

    if (s != NULL) {
        for (p = s; n > 0; n--)
            *p++ = 0;
    }
}

s32 sceNetSprintf(char *buf, const char *fmt, ...) {
    va_list ap;
    char *p;
    s32 ret;

    p = buf;
    va_start(ap, fmt);
    ret = func_00007E3C(func_00008598, &p, fmt, ap);
    va_end(ap);
    return ret;
}

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

void *sceNetMemset(void *s, s32 c, s32 n) {
    u8 *p;

    if (s != NULL) {
        c &= 0xFF;
        for (p = s; n > 0; n--)
            *p++ = c;
    }
    return s;
}

void *sceNetMemchr(const void *s, s32 c, s32 n) {
    const u8 *p;
    u8 ch = c;

    if (s != NULL) {
        for (p = s; n > 0; n--, p++) {
            if (*p == ch)
                return (void *)p;
        }
    }
    return NULL;
}

void *sceNetMemmove(void *dst, const void *src, s32 n) {
    u8 *d;
    const u8 *s;

    d = dst;
    s = src;
    if (dst == NULL)
        return NULL;
    if (d >= s) {
        for (n--; n >= 0; n--)
            d[n] = s[n];
    } else {
        while (n > 0) {
            *d++ = *s++;
            n--;
        }
    }
    return dst;
}

INCLUDE_ASM("nonmatchings/pspnet", sceNetBcmp);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBcopy);

void sceNetBzero(void *s, s32 n) {
    u8 *p;

    if (s != NULL) {
        for (p = s; n > 0; n--)
            *p++ = 0;
    }
}

s32 sceNetSprintf(char *buf, const char *fmt, ...) {
    va_list ap;
    char *p;
    s32 ret;

    p = buf;
    va_start(ap, fmt);
    ret = func_00007E50(func_00008594, &p, fmt, ap);
    va_end(ap);
    return ret;
}

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
s32 sceNetStrcmp(const char *s1, const char *s2) {
    if (s1 == NULL || s2 == NULL) {
        if (s1 == s2)
            return 0;
        return (s1 == NULL) ? -1 : 1;
    }
    while (*s1 == *s2++) {
        if (*s1++ == 0)
            return 0;
    }
    return *s1 - *(s2 - 1);
}

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

s32 sceNetStrlen(const char *s) {
    s32 n;

    n = 0;
    if (s == NULL)
        return 0;
    while (*s++ != 0)
        n++;
    return n;
}

s32 sceNetStrncmp(const char *s1, const char *s2, s32 n) {
    if (s1 == NULL || s2 == NULL) {
        if (s1 == s2)
            return 0;
        return (s1 == NULL) ? -1 : 1;
    }
    n--;
    while (n >= 0 && *s1 == *s2++) {
        if (*s1++ == 0)
            return 0;
        n--;
    }
    return (n < 0) ? 0 : *s1 - *(s2 - 1);
}

char *sceNetStrncpy(char *dst, const char *src, s32 n) {
    char *d;
    s32 i;

    d = dst;
    if (dst == NULL || src == NULL)
        return NULL;
    for (i = 0; i < n; i++) {
        if ((*d++ = *src++) == 0) {
            for (i++; i < n; i++)
                *d++ = 0;
            return dst;
        }
    }
    return dst;
}

char *sceNetStrchr(const char *s, s32 c) {
    char ch = c;

    if (s == NULL)
        return NULL;
    do {
        if (*s == ch)
            return (char *)s;
    } while (*s++ != 0);
    return NULL;
}

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrcasecmp);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrncasecmp);

INCLUDE_ASM("nonmatchings/pspnet", sceNetStrcat);

char *sceNetStrrchr(const char *s, s32 c) {
    const char *p;
    char ch = c;

    p = s;
    if (s == NULL)
        return NULL;
    while (*p++ != 0)
        ;
    p--;
    do {
        if (*p == ch)
            return (char *)p;
    } while (s < p--);
    return NULL;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet", __udivdi3);

INCLUDE_ASM("nonmatchings/pspnet", __umoddi3);

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
