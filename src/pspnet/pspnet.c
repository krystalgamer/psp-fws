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
#endif

#if FW_VERSION == 100
s32 sceNetTerm(void) {
    func_00001B7C();
    func_00002300();
    func_00003028();
    func_0000348C();
    func_00002C34();
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
INCLUDE_ASM("nonmatchings/pspnet", func_000016BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet", func_00001980);
#endif

INCLUDE_ASM("nonmatchings/pspnet", func_00001CE0);

#if FW_VERSION < 282
void _sce_pspnet_schednetintr(s32 arg0) {
    D_0000AC38 |= 1 << arg0;
}

void _sce_pspnet_schednetintr_with_evf(s32 arg0) {
    D_0000AC38 |= 1 << arg0;
    sceKernelSetEventFlag(D_0000A0D0, 0x10U);
}

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
        func_00007CF4(ti, 0, sizeof(struct SceNetThreadInfo));
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
        func_00007CF4(ti, 0, sizeof(struct SceNetThreadInfo));
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
s32 func_00001F0C(void) {
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
void func_00002300(void) {
    if (D_0000A868 >= 0)
        sceKernelDeleteSema(D_0000A868);
    D_0000A868 = -1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet", func_00002300);
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

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfOpen);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfClose);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfRead);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfWrite);

INCLUDE_ASM("nonmatchings/pspnet", sceNetBpfIoctl);

void func_00002C34(void) {
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
    c->c_alarm = sceKernelSetAlarm(usec, func_000030A8, c);
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
s32 func_00002E8C(s32 prio, s32 stackSize) {
    s32 ret;

    TAILQ_INIT(&D_0000AF4C);
    TAILQ_INIT(&D_0000AF54);
    D_0000A86C = sceKernelCreateSema("SceNetCalloutQueue", 0, 0, 1, NULL);
    if (D_0000A86C < 0)
        return D_0000A86C;
    D_0000A870 = sceKernelCreateThread("SceNetCallout", func_00002FD8, prio, stackSize, 0, NULL);
    if (D_0000A870 < 0)
        return D_0000A870;
    ret = sceKernelStartThread(D_0000A870, 0, NULL);
    if (ret >= 0)
        ret = 0;
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet", func_00002E8C);
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

INCLUDE_ASM("nonmatchings/pspnet", func_00002FD8);

u32 func_000030A8(void *common) {
    struct callout *c = common;

    TAILQ_INSERT_TAIL(&D_0000AF4C, c, c_qlink);
    TAILQ_REMOVE(&D_0000AF54, c, c_link);
    sceKernelSignalSema(D_0000A86C, 1);
    return 0;
}

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

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_wakeup);

INCLUDE_ASM("nonmatchings/pspnet", _sce_pspnet_tiwakeup);

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
void _sce_pspnet_hashdone(void *hashtbl) {
    sceNetFreeInternal(hashtbl);
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
void _sce_pspnet_ifafree(void *ifa) {
    sceNetFreeInternal(ifa);
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

void *func_00007BD4(const void *s, s32 c, s32 n) {
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

void *func_00007C0C(void *dst, const void *src, s32 n) {
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

void *func_00007CF4(void *s, s32 c, s32 n) {
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
void func_00007D60(const void *src, void *dst, s32 n) {
    func_00007C0C(dst, src, n);
}

void func_00007D84(void *s, s32 n) {
    u8 *p;

    if (s != NULL) {
        for (p = s; n > 0; n--)
            *p++ = 0;
    }
}

s32 func_00007DAC(const char *s1, const char *s2) {
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

char *func_00007E2C(const char *s, s32 c) {
    char ch = c;

    if (s == NULL)
        return NULL;
    do {
        if (*s == ch)
            return (char *)s;
    } while (*s++ != 0);
    return NULL;
}

char *func_00007E5C(const char *s, s32 c) {
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

s32 func_00007EA4(const char *s1, const char *s2, s32 n) {
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

char *func_00007F3C(char *dst, const char *src, s32 n) {
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

char *func_00007FB8(const char *s, s32 c) {
    char ch = c;

    if (s == NULL)
        return NULL;
    do {
        if (*s == ch)
            return (char *)s;
    } while (*s++ != 0);
    return NULL;
}

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

s32 func_00008020(const char *s) {
    s32 n;

    n = 0;
    if (s == NULL)
        return 0;
    while (*s++ != 0)
        n++;
    return n;
}

INCLUDE_ASM("nonmatchings/pspnet", func_00008054);

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
char func_0000881C(char c) {
    s32 t = D_0000A88C[c + 1];

    if (t & 1)
        c += 0x20;
    return c;
}

char func_00008848(s32 c) {
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
