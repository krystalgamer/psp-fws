/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInit);

s32 sceNetInetTerm(void) {
    _sce_pspnet_stop_of_inet_module_in_netintr();
    func_000099D4();
    func_000096D0();
    _sce_pspnet_stop_of_inet_module_in_ifhandle_ether();
    func_00001D78();
    func_00001FA4();
    return 0;
}

s32 sceNetInetGetErrno(void) {
    return _sce_pspnet_get_thread_errno();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigGetIfaddr);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigSetIfaddr);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigDelIfaddr);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigGetIfaddr);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigFlushRoute);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigGetRouteInfo);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigAddArp);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigDelArp);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigFlushArp);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigGetArpInfo);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigAddRoute);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigAddMRoute);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigDelRoute);

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigDelMRoute);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigSetDefaultRoute);

#if FW_VERSION < 201
s32 sceNetConfigDelDefaultRoute(void) {
    struct sockaddr_in dst;
    struct sockaddr_in mask;

    __builtin_memset(&dst, 0, sizeof(dst));
    __builtin_memset(&mask, 0, sizeof(mask));
    mask.sin_family = AF_INET;
    dst.sin_family = AF_INET;
    mask.sin_len = sizeof(mask);
    dst.sin_len = sizeof(dst);
    return func_00001334(2, &dst, NULL, &mask, 0x802);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigDelDefaultRoute);
#endif

#if FW_VERSION < 271
s32 sceNetConfigGetDefaultRoute(struct in_addr *gw) {
    SceNetConfigRouteInfo info;
    s32 len;
    s32 ret;

    len = 0x24;
    ret = sceNetConfigGetRouteInfo(&len, &info);
    if (ret < 0) {
        goto end;
    }
    if (info.dst != 0) {
        ret = 0x80410207;
        goto end;
    }
    gw->s_addr = info.gateway;
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigGetDefaultRoute);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001584);
#endif

#if FW_VERSION < 201
void func_00001584(void) {
    D_0002EB40 = 0;
    D_0002EB44 = 0;
}
#endif

#if FW_VERSION >= 282
void func_00001320(void) {
    D_0002C4F0 = 0;
    D_0002C4F4 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001334);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000014DC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001624);

#if FW_VERSION < 151
s32 sceNetConfigGetDNS(SceNetBytes4 *primary, SceNetBytes4 *secondary) {
    if (primary != NULL) {
        *primary = D_0002EB48;
    }
    if (secondary != NULL) {
        *secondary = D_0002EB4C;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigGetDNS);
#endif

#if FW_VERSION < 151
s32 sceNetConfigSetDNS(SceNetBytes4 *primary, SceNetBytes4 *secondary) {
    if (primary != NULL) {
        D_0002EB48 = *primary;
    }
    if (secondary != NULL) {
        D_0002EB4C = *secondary;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigSetDNS);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetTcpcbstat);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetUdpcbstat);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001D50);
#endif

#if FW_VERSION < 201
void func_00001D50(void) {
    _sce_pspnet_start_of_inet_module_in_sched(&func_00001BE4, func_00001DD8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001D78);
#endif

#if FW_VERSION < 201
s32 func_00001D78(void) {
    return _sce_pspnet_stop_of_inet_module_in_sched();
}
#endif

#if FW_VERSION >= 282
void func_00001BA0(void) {
    _sce_pspnet_start_of_inet_module_in_sched(&func_00001BE4, func_00001C28);
}

void func_00001BC8(void) {
    _sce_pspnet_stop_of_inet_module_in_sched();
}
#endif

#if FW_VERSION < 271
void func_00001BE4(struct SceNetInetWaiter *w) {
    struct socket *so;
    for (so = w->sockets; so != NULL; so = so->so_selnext) {
        if (so->so_state & 0x800) {
            so->so_state &= ~0x800;
            w->flags |= 2;
        }
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001BE4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001DD8);
#endif

#if FW_VERSION < 201
void func_00001DD8(struct socket *so) {
    struct SceNetInetWaiter *w = so->so_waiter;
    if (w == NULL || w->unk20 == 0) {
        so->so_state |= 0x800;
    } else {
        w->unk20 = 0;
        w->flags |= 2;
        sceKernelSignalSema(w->sema, 1);
    }
}
#endif

#if FW_VERSION >= 282
void func_00001C28(struct socket *so) {
    struct SceNetInetWaiter *w = so->so_waiter;
    if (w == NULL || w->unk20 == 0) {
        so->so_state |= 0x800;
    } else {
        w->unk20 = 0;
        w->flags |= 2;
        sceKernelSignalSema(w->sema, 1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00001C80);

#if FW_VERSION < 282
void func_00001FA4(void) {
}
#else
void func_00001DF4(void) {
}
#endif

struct domain *func_00001DFC(s32 family) {
    struct domain *dp;
    for (dp = D_0002C500; dp != NULL; dp = dp->dom_next) {
        if (dp->dom_family == family) {
            break;
        }
    }
    return dp;
}

struct protosw *func_00001E2C(s32 family, s32 type) {
    struct domain *dp;
    struct protosw *pr;

    for (dp = D_0002C500; dp != NULL; dp = dp->dom_next) {
        if (dp->dom_family == family) {
            break;
        }
    }
    if (dp == NULL) {
        return NULL;
    }
    for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
        if (pr->pr_type && pr->pr_type == type) {
            return pr;
        }
    }
    return NULL;
}

struct protosw *func_00001EA8(s32 family, s32 protocol, s32 type) {
    struct domain *dp;
    struct protosw *pr;
    struct protosw *maybe = NULL;

    if (family == 0) {
        return NULL;
    }
    for (dp = D_0002C500; dp != NULL; dp = dp->dom_next) {
        if (dp->dom_family == family) {
            break;
        }
    }
    if (dp == NULL) {
        return NULL;
    }
    for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
        if ((pr->pr_protocol == protocol) && (pr->pr_type == type)) {
            return pr;
        }
        if (type == 3 && pr->pr_type == 3 && pr->pr_protocol == 0 && maybe == NULL) {
            maybe = pr;
        }
    }
    return maybe;
}

s32 func_00001F64(s32 *name, u32 namelen, void *oldp, u32 *oldlenp, void *newp, u32 newlen) {
    struct domain *dp;
    struct protosw *pr;
    s32 family, protocol;

    if (namelen < 2) {
        return 21; /* EISDIR */
    }
    family = name[0];
    if (family == 0) {
        return 0;
    }
    for (dp = D_0002C500; dp != NULL; dp = dp->dom_next) {
        if (dp->dom_family == family) {
            break;
        }
    }
    if (dp == NULL) {
        return 109; /* ENOPROTOOPT */
    }
    if (namelen < 3) {
        return 21;
    }
    protocol = name[1];
    for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
        if (pr->pr_protocol == protocol && pr->pr_sysctl) {
            return pr->pr_sysctl(name + 2, namelen - 2, oldp, oldlenp, newp, newlen);
        }
    }
    return 109;
}

void func_00002028(s32 cmd, struct sockaddr *sa) {
    struct domain *dp;
    struct protosw *pr;

    for (dp = D_0002C500; dp != NULL; dp = dp->dom_next) {
        for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
            if (pr->pr_ctlinput) {
                pr->pr_ctlinput(cmd, sa, NULL);
            }
        }
    }
}

void func_000020C4(void *arg) {
    struct domain *dp;
    struct protosw *pr;

    D_0002CC4C++;
    for (dp = D_0002C500; dp != NULL; dp = dp->dom_next) {
        for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
            if (pr->pr_slowtimo) {
                pr->pr_slowtimo();
            }
        }
    }
    _sce_pspnet_callout_reset(D_0002CC74, 100 / 2, func_000020C4, NULL);
}

void func_00002168(void *arg) {
    struct domain *dp;
    struct protosw *pr;

    D_0002CC98++;
    for (dp = D_0002C500; dp != NULL; dp = dp->dom_next) {
        for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
            if (pr->pr_fasttimo) {
                pr->pr_fasttimo();
            }
        }
    }
    _sce_pspnet_callout_reset(D_0002CC50, 100 / 5, func_00002168, NULL);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000220C);

void func_000023A8(struct socket *so) {
    if (so->so_pcb || (so->so_state & SS_NOFDREF) == 0) {
        return;
    }
    if (so->so_head) {
        if (!func_00004838(so, 0)) {
            return;
        }
    }
    func_00004A3C(&so->so_snd);
    func_000038BC(so);
    if (so->so_list.tqe_next != NULL) {
        so->so_list.tqe_next->so_list.tqe_prev = so->so_list.tqe_prev;
    } else {
        D_0002CC9C.tqh_last = so->so_list.tqe_prev;
    }
    *so->so_list.tqe_prev = so->so_list.tqe_next;
    sceNetFreeInternal(so);
}

s32 func_0000243C(struct socket *so) {
    struct socket *so2;
    s32 s = _sce_pspnet_spllock();
    s32 error = 0;

    if (so->so_options & 0x2) { /* SO_ACCEPTCONN */
        while ((so2 = so->so_q0.tqh_first) != NULL) {
            (void)func_00004838(so2, 0);
            (void)func_000025CC(so2);
        }
        while ((so2 = so->so_q.tqh_first) != NULL) {
            (void)func_00004838(so2, 1);
            (void)func_000025CC(so2);
        }
    }
    if (so->so_pcb == NULL) {
        goto discard;
    }
    if (so->so_state & SS_ISCONNECTED) {
        if ((so->so_state & SS_ISDISCONNECTING) == 0) {
            error = func_000025FC(so);
            if (error) {
                goto drop;
            }
        }
        if (so->so_options & 0x80) { /* SO_LINGER */
            if ((so->so_state & SS_ISDISCONNECTING) && (so->so_state & SS_NBIO)) {
                goto drop;
            }
            while (so->so_state & SS_ISCONNECTED) {
                error = _sce_pspnet_tsleep(&so->so_timeo, so->so_linger);
                if (error) {
                    break;
                }
            }
        }
    }
drop:
    if (so->so_pcb) {
        s32 error2 = so->so_proto->pr_usrreq(so, PRU_DETACH, NULL, NULL, NULL);
        if (error == 0) {
            error = error2;
        }
    }
discard:
    so->so_fd = -1;
    so->so_state |= SS_NOFDREF;
    func_000023A8(so);
    _sce_pspnet_splunlock(s);
    return error;
}

s32 func_000025CC(struct socket *so) {
    return so->so_proto->pr_usrreq(so, PRU_ABORT, NULL, NULL, NULL);
}

s32 func_000025FC(struct socket *so) {
    s32 s = _sce_pspnet_spllock();
    s32 error;

    if ((so->so_state & SS_ISCONNECTED) == 0) {
        error = 128; /* ENOTCONN */
        goto bad;
    }
    if (so->so_state & SS_ISDISCONNECTING) {
        error = 120; /* EALREADY */
        goto bad;
    }
    error = so->so_proto->pr_usrreq(so, PRU_DISCONNECT, NULL, NULL, NULL);
bad:
    _sce_pspnet_splunlock(s);
    return error;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002844);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002E98);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002684);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002CAC);
#endif

#if FW_VERSION < 201
void func_000038BC(struct socket *so) {
    struct sockbuf *sb = &so->so_rcv;
    struct protosw *pr = so->so_proto;
    s32 s;
    struct sockbuf asb;

    sb->sb_flags |= SB_NOINTR;
    (void)sblock(sb, M_WAITOK);
    s = _sce_pspnet_spllock();
    func_00005AB8(so);
    sbunlock(sb);
    asb = *sb;
    __builtin_memset(sb, 0, sizeof(*sb));
    _sce_pspnet_splunlock(s);
    if (pr->pr_flags & PR_RIGHTS && pr->pr_domain->dom_dispose) {
        pr->pr_domain->dom_dispose(asb.sb_mb);
    }
    func_00004A3C(&asb);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000038BC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00003A00);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00003D28);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00003F68);

#if FW_VERSION < 282
void func_000042F4(void) {
    D_0002E480 = 0x80;
    D_0002EB54 = 0;
    D_0002CC9C.tqh_first = NULL;
    D_0002CC9C.tqh_last = &D_0002CC9C.tqh_first;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000431C);
#endif

#if FW_VERSION < 201
s32 func_0000431C(struct socket *so, struct mbuf *nam) {
    s32 s = _sce_pspnet_spllock();
    s32 error = so->so_proto->pr_usrreq(so, PRU_BIND, NULL, nam, NULL);
    _sce_pspnet_splunlock(s);
    return error;
}
#endif

#if FW_VERSION >= 282
void func_000040FC(void) {
    D_0002BEC0 = 0x80;
    D_0002C504 = 0;
    D_0002CC9C.tqh_first = NULL;
    D_0002CC9C.tqh_last = &D_0002CC9C.tqh_first;
}

s32 func_00004124(struct socket *so, struct mbuf *nam) {
    s32 s = _sce_pspnet_spllock();
    s32 error = so->so_proto->pr_usrreq(so, PRU_BIND, NULL, nam, NULL);
    _sce_pspnet_splunlock(s);
    return error;
}
#else
s32 func_00004190(struct socket *so, s32 backlog) {
    s32 s = _sce_pspnet_spllock();
    s32 error;

    error = so->so_proto->pr_usrreq(so, PRU_LISTEN, NULL, NULL, NULL);
    if (error) {
        _sce_pspnet_splunlock(s);
        return error;
    }
    if (so->so_q.tqh_first == NULL) {
        so->so_options |= 0x2; /* SO_ACCEPTCONN */
    }
    if (backlog < 0) {
        backlog = 0;
    }
    so->so_qlimit = min(backlog, D_0002E480);
    _sce_pspnet_splunlock(s);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004190);
#endif

#if FW_VERSION < 271
s32 func_00004248(struct socket *so, struct mbuf *nam) {
    s32 s = _sce_pspnet_spllock();
    s32 error;

    so->so_state &= ~SS_NOFDREF;
    if ((so->so_state & SS_ISDISCONNECTED) == 0) {
        error = so->so_proto->pr_usrreq(so, PRU_ACCEPT, NULL, nam, NULL);
    } else {
        error = 113; /* ECONNABORTED */
    }
    _sce_pspnet_splunlock(s);
    return error;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004248);
#endif

s32 func_000042D4(struct socket *so, struct mbuf *nam) {
    s32 s;
    s32 error;

    if (so->so_options & 0x2) { /* SO_ACCEPTCONN */
        return 95; /* EOPNOTSUPP */
    }
    s = _sce_pspnet_spllock();
    if (so->so_state & (SS_ISCONNECTED | SS_ISCONNECTING) &&
        ((so->so_proto->pr_flags & PR_CONNREQUIRED) || (error = func_000025FC(so)))) {
        error = 127; /* EISCONN */
    } else {
        error = so->so_proto->pr_usrreq(so, PRU_CONNECT, NULL, nam, NULL);
    }
    _sce_pspnet_splunlock(s);
    return error;
}

s32 soconnect2(struct socket *so1, struct socket *so2) {
    s32 s = _sce_pspnet_spllock();
    s32 error;

    error = so1->so_proto->pr_usrreq(so1, 17 /* PRU_CONNECT2 */, NULL, (struct mbuf *)so2, NULL);
    _sce_pspnet_splunlock(s);
    return error;
}

s32 func_00004404(struct socket *so, s32 how) {
    struct protosw *pr = so->so_proto;

    if (!(how == 0 || how == 1 || how == 2)) {
        return 22; /* EINVAL */
    }
    if (how == 0 || how == 2) {
        func_000038BC(so);
    }
    if (how == 1 || how == 2) {
        return pr->pr_usrreq(so, PRU_SHUTDOWN, NULL, NULL, NULL);
    }
    return 0;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000046A8);
#endif

#if FW_VERSION < 201
void func_000046A8(struct socket *so) {
    _sce_pspnet_selwakeup(&so->so_rcv.sb_sel);
}
#endif

#if FW_VERSION >= 282
void func_000044AC(struct socket *so) {
    _sce_pspnet_selwakeup(&so->so_rcv.sb_sel);
}
#endif

#if FW_VERSION < 271
s32 func_000044C8(struct socket *so, u32 cmd, void *data) {
    if (((cmd >> 8) & 0xFF) == 'i') {
        return _sce_pspnet_ifioctl(so, cmd, data, 1);
    }
    if (((cmd >> 8) & 0xFF) == 'r') {
        return func_0000D128(cmd, data);
    }
    return so->so_proto->pr_usrreq(so, PRU_CONTROL, (struct mbuf *)cmd, (struct mbuf *)data, NULL);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000044C8);
#endif

void func_0000453C(struct socket *so) {
    struct socket *head = so->so_head;

    so->so_state &= ~(SS_ISCONNECTING | SS_ISDISCONNECTING | SS_ISCONFIRMING);
    so->so_state |= SS_ISCONNECTED;
    if (head && func_00004838(so, 0)) {
        func_000047DC(head, so, 1);
        sorwakeup(head);
        _sce_pspnet_wakeup(&head->so_timeo);
    } else {
        _sce_pspnet_wakeup(&so->so_timeo);
        sorwakeup(so);
        sowwakeup(so);
    }
}

#if FW_VERSION < 201
struct socket *func_00004620(struct socket *head, s32 connstatus) {
    struct socket *so;
    s32 soqueue = connstatus ? 1 : 0;

    if (head->so_qlen + head->so_q0len > 3 * head->so_qlimit / 2) {
        return NULL;
    }
    so = sceNetMallocInternal(sizeof(*so));
    if (so == NULL) {
        return NULL;
    }
    func_0002C94C(so, 0, sizeof(*so));
    so->so_type = head->so_type;
    so->so_options = head->so_options & ~0x2;
    so->so_linger = head->so_linger;
    so->so_state = head->so_state | SS_NOFDREF;
    so->so_proto = head->so_proto;
    so->so_timeo = head->so_timeo;
    so->so_send = head->so_send;
    so->so_receive = head->so_receive;
    so->so_fd = -1;
    (void)func_00004944(so, head->so_snd.sb_hiwat, head->so_rcv.sb_hiwat);
    func_000047DC(head, so, soqueue);
    if (so->so_proto->pr_usrreq(so, PRU_ATTACH, NULL, NULL, NULL)) {
        (void)func_00004838(so, soqueue);
        sceNetFreeInternal(so);
        return NULL;
    }
    if (connstatus) {
        sorwakeup(head);
        _sce_pspnet_wakeup(&head->so_timeo);
        so->so_state |= connstatus;
    }
    so->so_list.tqe_next = NULL;
    so->so_list.tqe_prev = D_0002CC9C.tqh_last;
    *D_0002CC9C.tqh_last = so;
    D_0002CC9C.tqh_last = &so->so_list.tqe_next;
    return so;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004620);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000047DC);
#else
void func_000047DC(struct socket *head, struct socket *so, s32 q) {
    struct soqhead *qh;
    so->so_head = head;
    if (q == 0) {
        so->so_onq = &head->so_q0;
        head->so_q0len++;
    } else {
        so->so_onq = &head->so_q;
        head->so_qlen++;
    }
    qh = so->so_onq;
    so->so_qe.tqe_next = NULL;
    so->so_qe.tqe_prev = qh->tqh_last;
    *qh->tqh_last = so;
    qh->tqh_last = &so->so_qe.tqe_next;
}
#endif

s32 func_00004838(struct socket *so, s32 q) {
    struct socket *head = so->so_head;
    if (q == 0) {
        if (so->so_onq != &head->so_q0) {
            return 0;
        }
        head->so_q0len--;
    } else {
        if (so->so_onq != &head->so_q) {
            return 0;
        }
        head->so_qlen--;
    }
    if (so->so_qe.tqe_next != NULL) {
        so->so_qe.tqe_next->so_qe.tqe_prev = so->so_qe.tqe_prev;
    } else {
        so->so_onq->tqh_last = so->so_qe.tqe_prev;
    }
    *so->so_qe.tqe_prev = so->so_qe.tqe_next;
    so->so_onq = NULL;
    so->so_head = NULL;
    return 1;
}

#if FW_VERSION < 271
void func_000048B8(struct socket *so, struct sockbuf *sb) {
    _sce_pspnet_selwakeup(&sb->sb_sel);
    sb->sb_flags &= ~SB_SEL;
    if (sb->sb_flags & SB_WAIT) {
        sb->sb_flags &= ~SB_WAIT;
        _sce_pspnet_wakeup(&sb->sb_cc);
    }
    if (sb->sb_flags & SB_UPCALL) {
        so->so_upcall(so, so->so_upcallarg, 1);
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000048B8);
#endif

s32 func_00004944(struct socket *so, u32 sndcc, u32 rcvcc) {
    if (func_000049EC(&so->so_snd, sndcc) == 0) {
        goto bad;
    }
    if (func_000049EC(&so->so_rcv, rcvcc) == 0) {
        goto bad2;
    }
    if (so->so_rcv.sb_lowat == 0) {
        so->so_rcv.sb_lowat = 1;
    }
    if (so->so_snd.sb_lowat == 0) {
        so->so_snd.sb_lowat = MCLBYTES;
    }
    if (so->so_snd.sb_lowat > so->so_snd.sb_hiwat) {
        so->so_snd.sb_lowat = so->so_snd.sb_hiwat;
    }
    return 0;
bad2:
    func_00004A3C(&so->so_snd);
bad:
    return 105; /* ENOBUFS */
}

s32 func_000049EC(struct sockbuf *sb, u32 cc) {
    if (cc == 0 || cc > 0x40000 * 2048 / (MSIZE + 2048)) {
        return 0;
    }
    sb->sb_hiwat = cc;
    sb->sb_mbmax = min(cc * 2, 0x40000);
    if (sb->sb_lowat > sb->sb_hiwat) {
        sb->sb_lowat = sb->sb_hiwat;
    }
    return 1;
}

void func_00004A3C(struct sockbuf *sb) {
    func_00005008(sb);
    sb->sb_hiwat = sb->sb_mbmax = 0;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004A68);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004B40);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004E28);

void func_00005008(struct sockbuf *sb) {
    while (sb->sb_mbcnt != 0) {
        func_00005050(sb, sb->sb_cc);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005050);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005308);

#if FW_VERSION < 201
struct mbuf *func_00005440(void *p, s32 size, s32 type, s32 level) {
    struct cmsghdr *cp;
    struct mbuf *m;

    if (CMSG_SPACE(size) > MCLBYTES) {
        return NULL;
    }
    if ((m = sceNetMGet(M_DONTWAIT, MT_CONTROL)) == NULL) {
        return NULL;
    }
    if (CMSG_SPACE(size) > MLEN) {
        MCLGET(m, M_DONTWAIT);
        if ((m->m_flags & M_EXT) == 0) {
            sceNetMFree(m);
            return NULL;
        }
    }
    cp = mtod(m, struct cmsghdr *);
    func_0002C918(CMSG_DATA(cp), p, size);
    m->m_len = CMSG_SPACE(size);
    cp->cmsg_len = CMSG_LEN(size);
    cp->cmsg_level = level;
    cp->cmsg_type = type;
    return m;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005440);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000562C);

struct socket *func_00005700(s32 s) {
    struct socket *so;
    s32 x;
    if ((u32)(s - 1) >= 0xFF) {
        return NULL;
    }
    x = _sce_pspnet_spllock();
    for (so = D_0002CC9C.tqh_first; so != NULL; so = so->so_list.tqe_next) {
        if (so->so_fd == s) {
            break;
        }
    }
    _sce_pspnet_splunlock(x);
    return so;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005964);
#endif

#if FW_VERSION < 201
void func_00005964(struct socket *so) {
    so->so_state &= ~(SS_ISCONNECTED | SS_ISDISCONNECTING);
    so->so_state |= SS_ISCONNECTING;
}
#endif

#if FW_VERSION >= 282
void func_00005778(struct socket *so) {
    so->so_state &= ~(SS_ISCONNECTED | SS_ISDISCONNECTING);
    so->so_state |= SS_ISCONNECTING;
}
#endif

#if FW_VERSION < 271
void func_0000578C(struct socket *so) {
    so->so_state &= ~SS_ISCONNECTING;
    so->so_state |= (SS_ISDISCONNECTING | SS_CANTRCVMORE | SS_CANTSENDMORE);
    _sce_pspnet_wakeup(&so->so_timeo);
    if (so->so_snd.sb_flags & SB_NOTIFY) {
        func_000048B8(so, &so->so_snd);
    }
    if (so->so_rcv.sb_flags & SB_NOTIFY) {
        func_000048B8(so, &so->so_rcv);
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000578C);
#endif

#if FW_VERSION < 271
void func_0000580C(struct socket *so) {
    so->so_state &= ~(SS_ISCONNECTING | SS_ISCONNECTED | SS_ISDISCONNECTING);
    so->so_state |= (SS_CANTRCVMORE | SS_CANTSENDMORE | SS_ISDISCONNECTED);
    _sce_pspnet_wakeup(&so->so_timeo);
    if (so->so_snd.sb_flags & SB_NOTIFY) {
        func_000048B8(so, &so->so_snd);
    }
    if (so->so_rcv.sb_flags & SB_NOTIFY) {
        func_000048B8(so, &so->so_rcv);
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000580C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005A78);
#endif

#if FW_VERSION < 201
void func_00005A78(struct socket *so) {
    so->so_state |= SS_CANTSENDMORE;
    if (so->so_snd.sb_flags & SB_NOTIFY) {
        func_000048B8(so, &so->so_snd);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005AB8);
#endif

#if FW_VERSION < 201
void func_00005AB8(struct socket *so) {
    so->so_state |= SS_CANTRCVMORE;
    if (so->so_rcv.sb_flags & SB_NOTIFY) {
        func_000048B8(so, &so->so_rcv);
    }
}
#endif

#if FW_VERSION >= 282
void func_0000588C(struct socket *so) {
    so->so_state |= SS_CANTSENDMORE;
    if (so->so_snd.sb_flags & SB_NOTIFY) {
        func_000048B8(so, &so->so_snd);
    }
}

void func_000058CC(struct socket *so) {
    so->so_state |= SS_CANTRCVMORE;
    if (so->so_rcv.sb_flags & SB_NOTIFY) {
        func_000048B8(so, &so->so_rcv);
    }
}
#endif

s32 func_0000590C(struct sockbuf *sb) {
    sb->sb_flags |= SB_WAIT;
    return _sce_pspnet_tsleep(sb, sb->sb_timeo);
}

s32 func_00005934(struct sockbuf *sb) {
    s32 error;
    while (sb->sb_flags & SB_LOCK) {
        sb->sb_flags |= SB_WANT;
        error = _sce_pspnet_tsleep(&sb->sb_flags, 0);
        if (error != 0) {
            return error;
        }
    }
    sb->sb_flags |= SB_LOCK;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000059AC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005D70);
#endif

#if FW_VERSION < 201
s32 func_00005D70(void) {
    return 3;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005C9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSocket);
#endif

#if FW_VERSION >= 282
s32 func_00005B8C(void) {
    return 3;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00005B94);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetBind);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetAccept);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetConnect);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSend);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSendto);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSendmsg);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00006568);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetRecv);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetRecvfrom);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetRecvmsg);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00006AB0);

#if FW_VERSION < 201
s32 sceNetInetSetsockopt(s32 s, s32 level, s32 name, const void *val, u32 valsize) {
    struct SceNetInetWaiter *w;
    struct socket *so;
    struct mbuf *m = NULL;
    s32 error;

    w = _sce_pspnet_thread_enter();
    if (w == NULL) {
        return -1;
    }
    so = func_00005700(s);
    error = 9; /* EBADF */
    if (so != NULL) {
        SO_WAITER_ATTACH(w, so);
        if (valsize > MLEN) {
            error = 22; /* EINVAL */
            goto out;
        }
        if (val) {
            m = sceNetMGet(M_WAITOK, MT_SOOPTS);
            if (m == NULL) {
                error = 12; /* ENOMEM */
                goto out;
            }
            func_0002C9B8(val, mtod(m, u8 *), valsize);
            m->m_len = valsize;
        }
        error = func_00003A00(so, level, name, m);
    out:
        SO_WAITER_DETACH(w, so);
    }
    return _sce_pspnet_thread_leave(w, error);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSetsockopt);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetsockopt);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetsockname);

#if FW_VERSION < 201
s32 sceNetInetGetpeername(s32 s, struct sockaddr *asa, u32 *alen) {
    struct SceNetInetWaiter *w;
    struct socket *so;
    struct mbuf *m;
    u32 len;
    s32 error;

    w = _sce_pspnet_thread_enter();
    if (w == NULL) {
        return -1;
    }
    so = func_00005700(s);
    error = 9; /* EBADF */
    if (so != NULL) {
        SO_WAITER_ATTACH(w, so);
        if ((so->so_state & (SS_ISCONNECTED | SS_ISCONFIRMING)) == 0) {
            error = 128; /* ENOTCONN */
            goto out;
        }
        len = *alen;
        m = sceNetMGetclr(M_WAITOK, MT_SONAME);
        if (m == NULL) {
            error = 12; /* ENOMEM */
            goto out;
        }
        error = so->so_proto->pr_usrreq(so, 16 /* PRU_PEERADDR */, NULL, m, NULL);
        if (error) {
            goto bad;
        }
        if (len > m->m_len) {
            len = m->m_len;
        }
        func_0002C9B8(mtod(m, u8 *), asa, len);
        *alen = len;
    bad:
        sceNetMFreem(m);
    out:
        SO_WAITER_DETACH(w, so);
    }
    return _sce_pspnet_thread_leave(w, error);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetpeername);
#endif

#if FW_VERSION < 201
s32 func_00007490(struct mbuf **mp, const void *buf, u32 buflen, s32 type) {
    struct sockaddr *sa;
    struct mbuf *m;

    if (type == MT_SONAME && buflen > 255) {
        return 22; /* EINVAL */
    }
    m = sceNetMGet(M_WAITOK, type);
    if (m == NULL) {
        return 12; /* ENOMEM */
    }
    if (buflen > MLEN) {
        MEXTMALLOC(m, buflen, M_WAITOK);
        if ((m->m_flags & M_EXT) == 0) {
            sceNetMFree(m);
            return 12;
        }
    }
    m->m_len = buflen;
    func_0002C9B8(buf, mtod(m, u8 *), buflen);
    *mp = m;
    if (type == MT_SONAME) {
        sa = mtod(m, struct sockaddr *);
        sa->sa_len = buflen;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00007490);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSelect);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00007914);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000076C4);
#endif

#if FW_VERSION < 201
void func_000076C4(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000076E0);
#endif

#if FW_VERSION < 201
void func_000076E0(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 1);
}
#endif

#if FW_VERSION >= 282
void func_00007A88(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 0);
}

void func_00007AA4(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 1);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetPoll);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00007D50);

void func_00007E00(struct SceNetInetWaiter *w, struct SceNetInetPollfd *fds, s32 n) {
    struct socket *so;
    s32 i;
    for (i = 0; i < n; i++, fds++) {
        so = func_00005700(fds->fd);
        if (so != NULL && so->so_waiter == NULL) {
            so->so_waiter = w;
            so->so_selnext = w->sockets;
            w->sockets = so;
        }
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00007E78);

INCLUDE_ASM("nonmatchings/pspnet_inet", _sce_pspnet_ioctl_wait);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_B3FF98EB);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSocket);
#else
s32 sceNetInetBind(s32 s, const struct sockaddr *name, s32 namelen) {
    struct SceNetInetWaiter *w;
    struct socket *so;
    struct mbuf *nam;
    s32 error;

    w = _sce_pspnet_thread_enter();
    if (w == NULL) {
        return -1;
    }
    so = func_00005700(s);
    error = 9; /* EBADF */
    if (so != NULL) {
        SO_WAITER_ATTACH(w, so);
        error = func_00007490(&nam, name, namelen, MT_SONAME);
        if (error) {
            goto bad;
        }
        error = func_0000431C(so, nam);
        sceNetMFreem(nam);
    bad:
        SO_WAITER_DETACH(w, so);
    }
    return _sce_pspnet_thread_leave(w, error);
}

s32 sceNetInetListen(s32 s, s32 backlog) {
    struct SceNetInetWaiter *w;
    struct socket *so;
    s32 error;

    w = _sce_pspnet_thread_enter();
    if (w == NULL) {
        return -1;
    }
    so = func_00005700(s);
    error = 9; /* EBADF */
    if (so != NULL) {
        SO_WAITER_ATTACH(w, so);
        error = func_00004190(so, backlog);
        SO_WAITER_DETACH(w, so);
    }
    return _sce_pspnet_thread_leave(w, error);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetListen);
#else
s32 sceNetInetSend(s32 s, const void *buf, u32 len, s32 flags) {
    struct SceNetInetWaiter *w;
    struct msghdr msg;
    struct iovec aiov;
    s32 retsize;

    w = _sce_pspnet_thread_enter();
    if (w == NULL) {
        return -1;
    }
    msg.msg_name = NULL;
    msg.msg_namelen = 0;
    msg.msg_iov = &aiov;
    msg.msg_iovlen = 1;
    aiov.iov_base = (void *)buf;
    aiov.iov_len = len;
    msg.msg_control = NULL;
    if (_sce_pspnet_thread_leave(w, func_00006568(w, s, &msg, flags, &retsize)) < 0) {
        return -1;
    }
    return retsize;
}

s32 sceNetInetSendto(s32 s, const void *buf, u32 len, s32 flags, const struct sockaddr *to, u32 tolen) {
    struct SceNetInetWaiter *w;
    struct msghdr msg;
    struct iovec aiov;
    s32 retsize;

    w = _sce_pspnet_thread_enter();
    if (w == NULL) {
        return -1;
    }
    msg.msg_name = (void *)to;
    msg.msg_namelen = tolen;
    msg.msg_iov = &aiov;
    msg.msg_iovlen = 1;
    aiov.iov_base = (void *)buf;
    aiov.iov_len = len;
    msg.msg_control = NULL;
    if (_sce_pspnet_thread_leave(w, func_00006568(w, s, &msg, flags, &retsize)) < 0) {
        return -1;
    }
    return retsize;
}

s32 sceNetInetRecv(s32 s, void *buf, u32 len, s32 flags) {
    struct SceNetInetWaiter *w;
    struct msghdr msg;
    struct iovec aiov;
    s32 retsize;

    w = _sce_pspnet_thread_enter();
    if (w == NULL) {
        return -1;
    }
    msg.msg_name = NULL;
    msg.msg_namelen = 0;
    msg.msg_iov = &aiov;
    msg.msg_iovlen = 1;
    aiov.iov_base = buf;
    aiov.iov_len = len;
    msg.msg_control = NULL;
    msg.msg_flags = flags;
    if (_sce_pspnet_thread_leave(w, func_00006AB0(w, s, &msg, NULL, &retsize)) < 0) {
        return -1;
    }
    return retsize;
}

s32 sceNetInetRecvfrom(s32 s, void *buf, u32 len, s32 flags, struct sockaddr *from, u32 *fromlenaddr) {
    struct SceNetInetWaiter *w;
    struct msghdr msg;
    struct iovec aiov;
    s32 retsize;

    w = _sce_pspnet_thread_enter();
    if (w == NULL) {
        return -1;
    }
    if (fromlenaddr) {
        msg.msg_namelen = *fromlenaddr;
    } else {
        msg.msg_namelen = 0;
    }
    msg.msg_name = from;
    msg.msg_iov = &aiov;
    msg.msg_iovlen = 1;
    aiov.iov_base = buf;
    aiov.iov_len = len;
    msg.msg_control = NULL;
    msg.msg_flags = flags;
    if (_sce_pspnet_thread_leave(w, func_00006AB0(w, s, &msg, fromlenaddr, &retsize)) < 0) {
        return -1;
    }
    return retsize;
}

s32 sceNetInetShutdown(s32 s, s32 how) {
    struct SceNetInetWaiter *w;
    struct socket *so;
    s32 error;

    w = _sce_pspnet_thread_enter();
    if (w == NULL) {
        return -1;
    }
    so = func_00005700(s);
    error = 9; /* EBADF */
    if (so != NULL) {
        SO_WAITER_ATTACH(w, so);
        error = func_00004404(so, how);
        SO_WAITER_DETACH(w, so);
    }
    return _sce_pspnet_thread_leave(w, error);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetShutdown);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000085D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000084B4);
#endif

#if FW_VERSION < 201
s32 sceNetInetClose(s32 s) {
    struct SceNetInetWaiter *t;
    struct socket *so;
    s32 error;

    t = _sce_pspnet_thread_enter();
    if (t == NULL) {
        return -1;
    }
    so = func_00005700(s);
    error = 9;
    if (so != NULL) {
        error = func_0000243C(so);
    }
    return _sce_pspnet_thread_leave(t, error);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetClose);
#endif

#if FW_VERSION < 201
s32 sceNetInetCloseWithRST(s32 s) {
    struct SceNetInetWaiter *t;
    struct socket *so;
    s32 error;

    t = _sce_pspnet_thread_enter();
    if (t == NULL) {
        return -1;
    }
    so = func_00005700(s);
    error = 9;
    if (so != NULL) {
        func_000025CC(so);
        error = func_0000243C(so);
    }
    return _sce_pspnet_thread_leave(t, error);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetCloseWithRST);
#endif

#if FW_VERSION < 201
s32 sceNetInetSocketAbort(s32 s) {
    s32 error = 0;
    struct SceNetInetWaiter *t;
    s32 x;
    struct socket *so;

    t = _sce_pspnet_thread_enter();
    if (t == NULL) {
        return -1;
    }
    x = _sce_pspnet_spllock();
    so = func_00005700(s);
    if (so != NULL) {
        _sce_pspnet_inet_sabort(so);
    } else {
        error = 9;
    }
    _sce_pspnet_splunlock(x);
    return _sce_pspnet_thread_leave(t, error);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetSocketAbort);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008704);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008874);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008970);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008A2C);

#if FW_VERSION < 201
s32 func_00008D34(void *oldp, u32 *oldlenp, void *newp, const void *sp, u32 len) {
    if (newp != NULL) {
        return 1;
    }
    if (oldlenp == NULL) {
        return 0;
    }
    if (oldp != NULL) {
        if (*oldlenp < len) {
            return 12;
        }
        *oldlenp = len;
        func_0002C9B8(sp, oldp, len);
        return 0;
    }
    *oldlenp = len;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008D34);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008D98);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008E40);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00008FC8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000090FC);
#else
s32 func_000090FC(struct rtentry *rt, void *arg) {
    if (rt->rt_ifp == arg) {
        func_0000BEE0(2, rt->rt_nodes[0].rn_key, rt->rt_gateway, rt->rt_nodes[0].rn_mask, rt->rt_flags, NULL);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009144);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009240);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000931C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000093F0);
#endif

#if FW_VERSION < 201
void func_000093F0(s32 arg0) {
    func_0000E448(arg0, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000940C);
#endif

#if FW_VERSION < 201
void func_0000940C(s32 arg0) {
    func_0000C998(arg0, 2, 0);
}
#endif

#if FW_VERSION >= 282
void func_00009570(s32 arg0) {
    func_0000E4E4(arg0, 0);
}

void func_0000958C(s32 arg0) {
    func_0000C998(arg0, 2, 0);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000095AC);

void func_00009650(struct ifnet *ifp) {
    s32 i;
    struct radix_node_head *rnh;
    for (i = 0; i < 32; i++) {
        rnh = D_0002CCB8[i];
        if (rnh != NULL) {
            rnh->rnh_walktree(rnh, func_000090FC, ifp);
        }
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009548);
#endif

#if FW_VERSION < 201
void func_00009548(s32 arg0) {
    func_0000E448(arg0, 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009564);
#endif

#if FW_VERSION < 201
void func_00009564(void *arg0) {
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0xC);
    if (var_s0 != NULL) {
        do {
            func_00002028(0, M2C_FIELD(var_s0, s32 *, 0));
            var_s0 = M2C_FIELD(var_s0, void **, 0x10);
        } while (var_s0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000095A4);
#endif

#if FW_VERSION < 201
void func_000095A4(s32 arg0) {
    func_0000E3F0(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000095C0);
#endif

#if FW_VERSION < 201
void func_000095C0(s32 arg0) {
    func_0000E3F0(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000095DC);
#endif

#if FW_VERSION < 201
s32 func_000095DC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
void func_000096C8(s32 arg0) {
    func_0000E4E4(arg0, 1);
}

void func_000096E4(struct Unk_func_000096E4_0 *arg0) {
    struct Unk_func_000096E4_var_s0 *var_s0;

    var_s0 = arg0->unkC;
    if (var_s0 != NULL) {
        do {
            func_00002028(0, var_s0->unk0);
            var_s0 = var_s0->unk10;
        } while (var_s0 != NULL);
    }
}

void func_00009724(s32 arg0) {
    func_0000E3F0(arg0);
}

void func_00009740(s32 arg0) {
    func_0000E3F0(arg0);
}

s32 func_0000975C(void) {
    return 0;
}
#endif

s32 func_00009764(void *arg0, s32 *arg1) {
    if (*(s32 *)((u8 *)arg0 + 0x10) == 0) {
        *arg1 = 1;
        return 0x5F;
    }
    return 0;
}

s32 func_00009788(struct socket *so, s32 cmd, void *data, void *ifp) {
    return so->so_proto->pr_usrreq(so, PRU_CONTROL, (struct mbuf *)cmd, (struct mbuf *)data, (struct mbuf *)ifp);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000963C);
#endif

#if FW_VERSION < 201
void func_0000963C(void) {
    _sce_pspnet_start_of_inet_module_in_if_core(&func_0000986C, func_000097BC, func_000093F0, func_0000940C, &func_000095AC, &func_00009650, func_00009548, func_00009564, func_000095A4, func_000095C0, func_000095DC, &func_00009764, &func_00009788);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000096D0);
#endif

#if FW_VERSION < 201
s32 func_000096D0(void) {
    return _sce_pspnet_stop_of_inet_module_in_if_core();
}
#endif

#if FW_VERSION >= 282
void func_000097BC(void) {
    _sce_pspnet_start_of_inet_module_in_if_core(&func_0000986C, func_0000993C, func_00009570, func_0000958C, &func_000095AC, &func_00009650, func_000096C8, func_000096E4, func_00009724, func_00009740, func_0000975C, &func_00009764, &func_00009788);
}

void func_00009850(void) {
    _sce_pspnet_stop_of_inet_module_in_if_core();
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000986C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000097BC);
#endif

#if FW_VERSION < 201
void func_000097BC(void) {

}
#endif

#if FW_VERSION >= 282
void func_0000993C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009944);

void func_00009A14(void *arg0, void *arg1, u16 arg2, void *arg3) {
    if (D_0002C520 > 0) {
        D_0002C51C(arg1, arg2, arg3);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009A58);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009968);
#endif

#if FW_VERSION < 201
s32 func_00009968(s32 arg0) {
    D_0002C51C = (SceNetInetHook)arg0;
    D_0002C520 = 1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009984);
#endif

#if FW_VERSION < 201
s32 func_00009984(void) {
    D_0002C520 = 0;
    D_0002C51C = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000999C);
#endif

#if FW_VERSION < 201
void func_0000999C(void) {
    _sce_pspnet_start_of_inet_module_in_if_ethersubr_core(&func_00009B84, &func_00009A14, &func_00009A58, &func_00009944);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000099D4);
#endif

#if FW_VERSION < 201
s32 func_000099D4(void) {
    return _sce_pspnet_stop_of_inet_module_in_if_ethersubr_core();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_D7928A6D);
#endif

#if FW_VERSION >= 282
s32 func_00009AF0(s32 arg0) {
    D_0002C51C = (SceNetInetHook)arg0;
    D_0002C520 = 1;
    return 0;
}

s32 func_00009B0C(void) {
    D_0002C520 = 0;
    D_0002C51C = 0;
    return 0;
}

void func_00009B24(void) {
    _sce_pspnet_start_of_inet_module_in_if_ethersubr_core(&func_00009B84, &func_00009A14, &func_00009A58, &func_00009944);
}

void func_00009B5C(void) {
    _sce_pspnet_stop_of_inet_module_in_if_ethersubr_core();
}
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
struct ifqueue *sceNetInet_lib_D7928A6D(void) {
    return &D_0002D930;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00009B84);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000A144);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000A470);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000A61C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000A804);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000AE9C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000A960);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000AFE0);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B41C);

struct radix_node *func_0000B580(void *v_arg, struct radix_node *head, void *m_arg) {
    struct radix_node *x;
    char *v = v_arg, *m = m_arg;

    for (x = head; x->rn_b >= 0;) {
        if ((x->rn_bmask & m[x->rn_off]) && (x->rn_bmask & v[x->rn_off])) {
            x = x->rn_r;
        } else {
            x = x->rn_l;
        }
    }
    return x;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B5E0);

struct radix_node *func_0000B6C0(void *v_arg, void *m_arg, struct radix_node_head *head) {
    struct radix_node *x;
    char *netmask = NULL;

    if (m_arg) {
        if ((x = func_0000A61C(m_arg, 1, head->rnh_treetop->rn_off)) == NULL) {
            return NULL;
        }
        netmask = x->rn_key;
    }
    x = func_0000A144(v_arg, head);
    if (x && netmask) {
        while (x && x->rn_mask != netmask) {
            x = x->rn_dupedkey;
        }
    }
    return x;
}

struct radix_node *func_0000B774(void *v, s32 b, struct radix_node nodes[2]) {
    struct radix_node *tt = nodes, *t = tt + 1;
    t->rn_b = b;
    t->rn_bmask = 0x80 >> (b & 7);
    t->rn_l = tt;
    t->rn_off = b >> 3;
    tt->rn_b = -1;
    tt->rn_key = v;
    tt->rn_p = t;
    tt->rn_flags = t->rn_flags = RNF_ACTIVE;
    return t;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B7BC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000B91C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000BA10);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000BB7C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000BE00);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000BEE0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000C6D4);

#if FW_VERSION < 201
void func_0000C818(struct sockaddr *src, struct sockaddr *dst, struct sockaddr *netmask) {
    u8 *cp1 = (u8 *)src;
    u8 *cp2 = (u8 *)dst;
    u8 *cp3 = (u8 *)netmask;
    u8 *cplim = cp2 + *cp3;
    u8 *cplim2 = cp2 + *cp1;

    *cp2++ = *cp1++;
    *cp2++ = *cp1++;
    cp3 += 2;
    if (cplim > cplim2) {
        cplim = cplim2;
    }
    while (cp2 < cplim) {
        *cp2++ = *cp1++ & *cp3++;
    }
    if (cp2 < cplim2) {
        func_0002C94C(cp2, 0, (u32)(cplim2 - cp2));
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000C818);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000C8F8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000C998);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CC00);

void func_0000CCE8(struct rtentry *rt) {
    struct rttimer *r;
    while ((r = rt->rt_timer) != NULL) {
        if (r->rtt_link.le_next != NULL) {
            r->rtt_link.le_next->rtt_link.le_prev = r->rtt_link.le_prev;
        }
        *r->rtt_link.le_prev = r->rtt_link.le_next;
        if (r->rtt_next.tqe_next != NULL) {
            r->rtt_next.tqe_next->rtt_next.tqe_prev = r->rtt_next.tqe_prev;
        } else {
            r->rtt_queue->rtq_head.tqh_last = r->rtt_next.tqe_prev;
        }
        *r->rtt_next.tqe_prev = r->rtt_next.tqe_next;
        sceNetFreeInternal(r);
    }
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CC8C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CD64);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CE98);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D170);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CF68);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D048);
#endif

void func_0000D104(struct route *ro) {
    if (ro->ro_rt != NULL && ro->ro_rt->rt_ifp != NULL && (ro->ro_rt->rt_flags & RTF_UP)) {
        return;
    }
    ro->ro_rt = func_0000BA10(&ro->ro_dst, 1);
}

void func_0000D15C(struct rtentry *rt) {
    struct ifaddr *ifa;

    rt->rt_refcnt--;
    if (rt->rt_refcnt <= 0 && (rt->rt_flags & RTF_UP) == 0) {
        D_0002CCB0--;
        if (rt->rt_refcnt < 0) {
            return;
        }
        func_0000CCE8(rt);
        ifa = rt->rt_ifa;
        if (--ifa->ifa_refcnt == 0) {
            _sce_pspnet_ifafree(ifa);
        }
        sceNetFreeInternal(rt->rt_nodes[0].rn_key);
        sceNetFreeInternal(rt);
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D128);
#endif

#if FW_VERSION < 201
s32 func_0000D128(u32 cmd, void *data) {
    return 0x5F;
}
#endif

#if FW_VERSION >= 282
s32 func_0000D1F4(void) {
    return 0x5F;
}
#endif

void func_0000D1FC(void) {
    D_0002CCB4 = 0;
    _sce_pspnet_callout_init(&D_0002CD38);
    _sce_pspnet_callout_reset(&D_0002CD38, 100, func_0000CE98, NULL);
    D_0002C534 = 1;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D37C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D188);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D25C);
#endif

#if FW_VERSION < 201
void func_0000D25C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D264);
#endif

#if FW_VERSION < 201
s32 func_0000D264(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0x34) & 0x2000) && (M2C_FIELD(arg0, s32 *, 0x80) == arg1)) {
        func_0000D378((s32) arg0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D254);

void func_0000D330(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}

s32 func_0000D338(struct Unk_func_0000D338_0 *arg0, s32 arg1) {
    if ((arg0->unk34 & 0x2000) && (arg0->unk80 == arg1)) {
        func_0000D378((s32) arg0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D378);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D484);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B4EC);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B4F0);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B508);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B518);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B530);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B540);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B550);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B55C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B68C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B69C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B77C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B78C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B798);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B7DC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000D6D0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000DD34);
#endif

#if FW_VERSION < 201
void func_0000DD34(s32 arg0, void *arg1, void *arg2) {
    if (arg0 & 8) {
        M2C_FIELD(arg2, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    }
    if (arg0 & 0x10) {
        M2C_FIELD(arg2, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    }
    if (arg0 & 0x20) {
        M2C_FIELD(arg2, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    }
    if (arg0 & 0x40) {
        M2C_FIELD(arg2, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    }
    if (arg0 & 0x80) {
        M2C_FIELD(arg2, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    }
    if (arg0 & 2) {
        M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    }
    if (arg0 & 1) {
        M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    }
    if (arg0 & 4) {
        M2C_FIELD(arg2, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000DF80);
#endif

#if FW_VERSION < 201
#define ROUNDUP(a) ((a) > 0 ? (1 + (((a) - 1) | (sizeof(s32) - 1))) : sizeof(s32))
#define ADVANCE(x, n) (x += ROUNDUP((n)->sa_len))

void func_0000DDC0(u8 *cp, u8 *cplim, struct rt_addrinfo *rtinfo) {
    struct sockaddr *sa;
    s32 i;

    __builtin_memset(rtinfo->rti_info, 0, sizeof(rtinfo->rti_info));
    for (i = 0; (i < RTAX_MAX) && (cp < cplim); i++) {
        if ((rtinfo->rti_addrs & (1 << i)) == 0) {
            continue;
        }
        rtinfo->rti_info[i] = sa = (struct sockaddr *)cp;
        ADVANCE(cp, sa);
    }
}
#endif

#if FW_VERSION >= 282
void func_0000DDCC(s32 arg0, struct Unk_func_0000DDCC_1 *arg1, struct Unk_func_0000DDCC_2 *arg2) {
    if (arg0 & 8) {
        arg2->unk10 = (s32) arg1->unk10;
    }
    if (arg0 & 0x10) {
        arg2->unk14 = (s32) arg1->unk14;
    }
    if (arg0 & 0x20) {
        arg2->unk18 = (s32) arg1->unk18;
    }
    if (arg0 & 0x40) {
        arg2->unk1C = (s32) arg1->unk1C;
    }
    if (arg0 & 0x80) {
        arg2->unk20 = (s32) arg1->unk20;
    }
    if (arg0 & 2) {
        arg2->unk8 = (s32) arg1->unk8;
    }
    if (arg0 & 1) {
        arg2->unk4 = (s32) arg1->unk4;
    }
    if (arg0 & 4) {
        arg2->unkC = (s32) arg1->unkC;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000DE58);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000DF08);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E0EC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E318);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E3F0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E448);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E4E4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E5A4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E704);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000E928);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000EACC);

s32 func_0000ED18(struct socket *so, s32 proto) {
    struct rawcb *rp = (struct rawcb *)so->so_pcb;
    s32 error;

    if (rp == NULL) {
        return 105; /* ENOBUFS */
    }
    if ((error = func_00004944(so, D_0002BF78, D_0002BF7C)) != 0) {
        return error;
    }
    rp->rcb_socket = so;
    rp->rcb_proto.sp_family = so->so_proto->pr_domain->dom_family;
    rp->rcb_proto.sp_protocol = proto;
    if ((rp->rcb_list.le_next = D_0002CD80.lh_first) != NULL) {
        D_0002CD80.lh_first->rcb_list.le_prev = &rp->rcb_list.le_next;
    }
    D_0002CD80.lh_first = rp;
    rp->rcb_list.le_prev = &D_0002CD80.lh_first;
    return 0;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000ED48);
#endif

#if FW_VERSION < 201
void func_0000ED48(void *arg0) {
    void *temp_a0;
    void *temp_v1;

    temp_a0 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_a0, s32 *, 0xC) = 0;
    func_000023A8((s32) temp_a0);
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    *M2C_FIELD(arg0, void ***, 4) = temp_v1;
    sceNetFreeInternal(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000ED94);
#endif

#if FW_VERSION < 201
void func_0000ED94(void *arg0) {
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, void **, 8);
    if (!(M2C_FIELD(temp_v1, u16 *, 8) & 1)) {

    } else {
        M2C_FIELD(temp_v1, s32 *, 0xC) = 0;
        func_000023A8((s32) temp_v1);
        temp_v1_2 = M2C_FIELD(arg0, void **, 0);
        if (temp_v1_2 != NULL) {
            M2C_FIELD(temp_v1_2, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
        }
        *M2C_FIELD(arg0, void ***, 4) = temp_v1_2;
        sceNetFreeInternal(arg0);
    }
}
#endif

#if FW_VERSION >= 282
void func_0000EDB8(struct Unk_func_0000EDB8_0 *arg0) {
    struct Unk_func_0000EDB8_temp_a0 *temp_a0;
    struct Unk_func_0000EDB8_temp_v1 *temp_v1;

    temp_a0 = arg0->unk8;
    temp_a0->unkC = 0;
    func_000023A8((s32) temp_a0);
    temp_v1 = arg0->unk0;
    if (temp_v1 != NULL) {
        temp_v1->unk4 = (void **) arg0->unk4;
    }
    *arg0->unk4 = temp_v1;
    sceNetFreeInternal(arg0);
}

void func_0000EE04(struct Unk_func_0000EE04_0 *arg0) {
    struct Unk_func_0000EE04_temp_v1 *temp_v1;
    struct Unk_func_0000EE04_temp_v1_2 *temp_v1_2;

    temp_v1 = arg0->unk8;
    if (!(temp_v1->unk8 & 1)) {

    } else {
        temp_v1->unkC = 0;
        func_000023A8((s32) temp_v1);
        temp_v1_2 = arg0->unk0;
        if (temp_v1_2 != NULL) {
            temp_v1_2->unk4 = (void **) arg0->unk4;
        }
        *arg0->unk4 = temp_v1_2;
        sceNetFreeInternal(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000EE68);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B6FC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F040);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F1F8);
#endif

#if FW_VERSION < 201
void func_0000F1F8(void) {
    D_0002CD80.lh_first = NULL;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F204);
#endif

#if FW_VERSION < 201
s32 func_0000F204(void) {
    return 0;
}

void func_0000F20C(struct rawcb *rp, struct mbuf *nam) {
    nam->m_len = rp->rcb_laddr->sa_len;
    func_0002C9B8(rp->rcb_laddr, mtod(nam, u8 *), nam->m_len);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F20C);
#endif

#if FW_VERSION < 201
void func_0000F238(struct rawcb *rp, struct mbuf *nam) {
    nam->m_len = rp->rcb_faddr->sa_len;
    func_0002C9B8(rp->rcb_faddr, mtod(nam, u8 *), nam->m_len);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F238);
#endif

#if FW_VERSION >= 282
void func_0000F268(void) {
    D_0002CD80.lh_first = NULL;
}

s32 func_0000F274(void) {
    return 0;
}

void func_0000F27C(struct Unk_func_0000F27C_0 *arg0, struct Unk_func_0000F27C_1 *arg1) {
    u8 *temp_a0;
    u8 temp_a2;

    temp_a0 = arg0->unk10;
    temp_a2 = *temp_a0;
    arg1->unkC = (s32) temp_a2;
    sceNetBcopy(temp_a0, arg1->unk8, temp_a2);
}

void func_0000F2A8(struct Unk_func_0000F2A8_0 *arg0, struct Unk_func_0000F2A8_1 *arg1) {
    u8 *temp_a0;
    u8 temp_a2;

    temp_a0 = arg0->unkC;
    temp_a2 = *temp_a0;
    arg1->unkC = (s32) temp_a2;
    sceNetBcopy(temp_a0, arg1->unk8, temp_a2);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F2D4);

s32 func_0000F61C(struct ifnet *ifp, u32 cmd, void *data) {
    s32 error = 0;
    switch (cmd) {
    case 0x8020690C: /* SIOCSIFADDR */
        ifp->if_flags |= 1; /* IFF_UP */
        if (data != NULL) {
            ((struct ifaddr *)data)->ifa_rtrequest = func_0000F71C;
        }
        break;
    case 0x80206931: /* SIOCADDMULTI */
    case 0x80206932: /* SIOCDELMULTI */
        if (data == NULL) {
            error = 106; /* EAFNOSUPPORT */
            break;
        }
        switch (((struct sockaddr *)((u8 *)data + 0x10))->sa_family) {
        case AF_INET:
            break;
        default:
            error = 106;
            break;
        }
        break;
    default:
        error = 22; /* EINVAL */
        break;
    }
    return error;
}

#if FW_VERSION < 201
void func_0000F690(void) {
    struct ifnet *ifp = &D_0002F3D8;

    func_0002CCAC(ifp->if_xname, "lo%d", 0);
    ifp->if_softc = NULL; //P
    ifp->if_mtu = 0x81BC; //P
    ifp->if_flags = IFF_LOOPBACK | IFF_MULTICAST; //P
    ifp->if_ioctl = func_0000F61C; //P
    ifp->if_output = func_0000F2D4; //P
    ifp->if_type = IFT_LOOP; //P
    ifp->if_hdrlen = 0; //P
    ifp->if_addrlen = 0; //P
    _sce_pspnet_if_attach(ifp);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F690);
#endif

void func_0000F71C(s32 cmd, struct rtentry *rt) {
    if (rt != NULL) {
        rt->rt_rmx.rmx_mtu = 0x81BC; /* LOMTU */
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F730);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000FA70);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000FBD0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000FDC0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000FED8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001044C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010528);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010668);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000106E0);
#endif

#if FW_VERSION < 201
s32 func_000106E0(void) {
    return 0x5F;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010378);
#endif

#if FW_VERSION < 151
void func_000106E8(struct ifnet *ifp, struct ifaddr *ifa) {
    struct in_addr *ip;

    ip = &((struct in_ifaddr *)ifa)->ia_addr.sin_addr;
    if (ip->s_addr != __builtin_allegrex_wsbw(0)) {
        func_0000FA70(ifp, ip, ip, LLADDR(ifp->if_sadl));
    }
    ifa->ifa_rtrequest = func_0000F730;
    ifa->ifa_flags |= RTF_CLONING;
}
#endif

#if FW_VERSION >= 282
s32 func_00010700(void) {
    return 0x5F;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010708);
#endif

#if FW_VERSION < 250
void func_00010770(struct mbuf *m) {
    struct arphdr *ar;

    if (m->m_len >= sizeof(struct arphdr)) {
        ar = mtod(m, struct arphdr *);
        if (m->m_len >= sizeof(struct arphdr) + 2 * (ar->ar_hln + ar->ar_pln)) {
            switch ((u16)__builtin_allegrex_wsbh(ar->ar_pro)) {
            case ETHERTYPE_IP:
            case ETHERTYPE_IPTRAILERS:
                func_00010528(m);
                return;
            }
        }
    }
    sceNetMFreem(m);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010770);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000107F8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010930);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010A28);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010CCC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010D50);
#endif

#if FW_VERSION < 201
void func_00010B98(void) {
    D_0002BF8C.ifq_maxlen = IFQ_MAXLEN;
    D_0002F510 = 0;
    D_0002F50C = 0;
    D_0002F500 = 0;
    D_0002CEB8 = 0;
    D_0002EB88 = 0;
    D_0002BF8C.ifq_head = NULL;
    D_0002CEB4 = 0;
    D_0002EB8C = 0;
    D_0002EB90 = 0;
    D_0002EB94 = 0;
    D_0002BF8C.ifq_len = 0;
    D_0002BF8C.ifq_drops = 0;
    D_0002BF8C.ifq_tail = NULL;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010874);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010C04);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010B84);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010C08);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011678);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011968);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001184C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011820);
#endif

#if FW_VERSION < 271
void func_00011D04(u8 *arg0, u8 *arg1) {
    if (*(s32 *)(arg1 + 0x2C) & 1) {
        if (*(u16 *)(arg0 + 0x30) & 0x18) {
            func_0000C998((s32)arg1, 2, 4);
        } else {
            func_0000C998((s32)arg1, 2, 0);
        }
        *(s32 *)(arg1 + 0x2C) &= ~1;
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011D04);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000119FC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011DC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00011D6C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012230);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012354);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012108);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000124E4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012478);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012684);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000123FC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012490);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012818);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000128EC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012758);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000127EC);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B754);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012550);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000129D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000128AC);
#endif

void func_0001292C(void) {
    struct in_ifaddr *ia;
    struct ifnet *ifp;
    u32 maxmtu = 0;

    for (ia = D_0002D928.tqh_first; ia != NULL; ia = ia->ia_list.tqe_next) {
        if ((ifp = ia->ia_ifp) == NULL) {
            continue;
        }
        if ((ifp->if_flags & (IFF_UP | IFF_LOOPBACK)) != IFF_UP) {
            continue;
        }
        if (ifp->if_mtu > maxmtu) {
            maxmtu = ifp->if_mtu;
        }
    }
    if (maxmtu) {
        D_0002CEEC = maxmtu;
    }
}

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012A08);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000129AC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012AC4);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012730);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012BE8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012B9C);
#endif

void func_00012CDC(void) {
    D_0002C01C = 1;
    D_0002C020 = 1;
    D_0002CEEC = 0;
    D_0002C024.tqh_first = NULL;
    D_0002C024.tqh_last = &D_0002C024.tqh_first;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012D50);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012D84);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000130B8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012EC0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013114);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000133CC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013640);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012D0C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000130B8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013338);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001358C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000137AC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000138B4);
#else
void func_000138B4(struct Unk_func_000138B4_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk20;
    if (temp_v1 != 0) {
        func_0000D15C(temp_v1);
        arg0->unk20 = 0;
    }
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013478);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013530);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001361C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000139A4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013A88);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013BC0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000138F0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000139A8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013A94);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013BAC);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001384C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013E54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013ED4);
#endif

#if FW_VERSION < 201
void func_00013ED4(struct Unk_func_00013ED4_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    arg0->unk0 = arg0;
    arg0->unk4 = arg0;
    arg0->unk8 = _sce_pspnet_hashinit(arg1, arg0->pad10);
    temp_v0 = _sce_pspnet_hashinit(arg2, &arg0->pad10[4]);
    arg0->unk1A = 0x3FF;
    arg0->unkC = temp_v0;
    arg0->unk18 = (u16) D_0002E5EC + (sceNetRand() % (u32) ((D_0002E5F0 - D_0002E5EC) + 1));
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013CC4);

void func_00013ED4(struct Unk_func_00013ED4_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    arg0->unk0 = arg0;
    arg0->unk4 = arg0;
    arg0->unk8 = _sce_pspnet_hashinit(arg1, (u8 *)arg0 + 0x10);
    temp_v0 = _sce_pspnet_hashinit(arg2, (u8 *)arg0 + 0x14);
    arg0->unk1A = 0x3FF;
    arg0->unkC = temp_v0;
    arg0->unk18 = (s16) ((u16) D_0002C02C + (sceNetRand() % (u32) ((D_0002C030 - D_0002C02C) + 1)));
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013F68);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014018);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014120);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014260);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000142CC);
#endif

#if FW_VERSION < 201
void func_000143A8(struct inpcb *inp, struct mbuf *nam) {
    struct sockaddr_in *sin;

    nam->m_len = sizeof(*sin);
    sin = mtod(nam, struct sockaddr_in *);
    __builtin_memset(sin, 0, sizeof(*sin));
    sin->sin_family = AF_INET;
    sin->sin_len = sizeof(*sin);
    sin->sin_port = inp->inp_lport;
    sin->sin_addr = inp->inp_laddr;
}

void func_000143FC(struct inpcb *inp, struct mbuf *nam) {
    struct sockaddr_in *sin;

    nam->m_len = sizeof(*sin);
    sin = mtod(nam, struct sockaddr_in *);
    __builtin_memset(sin, 0, sizeof(*sin));
    sin->sin_family = AF_INET;
    sin->sin_len = sizeof(*sin);
    sin->sin_port = inp->inp_fport;
    sin->sin_addr = inp->inp_faddr;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013E20);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00013F3C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014450);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014614);
#endif

#if FW_VERSION < 201
void func_00014710(struct inpcb *inp) {
    struct rtentry *rt;
    struct rt_addrinfo info;

    if ((rt = inp->inp_route.ro_rt)) {
        inp->inp_route.ro_rt = NULL;
        __builtin_memset(&info, 0, sizeof(info));
        info.rti_info[0] = &inp->inp_route.ro_dst;
        info.rti_info[1] = rt->rt_gateway;
        info.rti_info[2] = (struct sockaddr *)rt->rt_nodes[0].rn_mask;
        func_0000E318(5, &info, rt->rt_flags, 0);
        if (rt->rt_flags & RTF_DYNAMIC) {
            (void)func_0000BEE0(RTM_DELETE, rt->rt_nodes[0].rn_key, rt->rt_gateway, rt->rt_nodes[0].rn_mask, rt->rt_flags, NULL);
        } else {
            func_0000D15C(rt);
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014710);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000141EC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014258);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000142C4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000143E0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014480);
#endif

struct rtentry *func_00014524(struct inpcb *inp) {
    struct route *ro = &inp->inp_route;

    if (ro->ro_rt == NULL && inp->inp_faddr.s_addr != __builtin_allegrex_wsbw(0)) {
        ro->ro_dst.sa_family = AF_INET;
        ro->ro_dst.sa_len = sizeof(struct sockaddr_in);
        ((struct sockaddr_in *)&ro->ro_dst)->sin_addr = inp->inp_faddr;
        func_0000D104(ro);
    }
    return ro->ro_rt;
}

#if FW_VERSION < 201
void func_00014588(void) {
    D_0002C1D4 = 0x125;
    D_0002E798 = 0x280F;
    D_0002E79C = 0x69;
    func_0002C94C(D_0002CFF8, 0, 0x928);
    D_0002C1E0 = 1;
    D_0002E7A4 = 100;
    D_0002C1E8 = 100;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014588);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014668);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00014890);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000145F4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001486C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000150C8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015654);
#endif

#if FW_VERSION < 201
void func_00015654(struct Unk_func_00015654_0 *arg0) {
    struct Unk_func_00015654_temp_v1 *temp_s1;
    struct Unk_func_00015654_temp_v1 *temp_v1;
    struct Unk_func_00015654_temp_v1_2 *temp_v1_2;
    struct Unk_func_00015654_var_s0 *temp_a0;
    struct Unk_func_00015654_var_s0 *var_s0;
    void **temp_a1;

    var_s0 = arg0->unkC;
    if (var_s0 != NULL) {
        do {
            temp_s1 = var_s0->unk0;
            sceNetMFreem(var_s0->unkC);
            temp_v1 = var_s0->unk0;
            temp_a0 = var_s0;
            if (temp_v1 != NULL) {
                temp_v1->unk4 = var_s0->unk4;
            }
            temp_a1 = var_s0->unk4;
            var_s0 = (struct Unk_func_00015654_var_s0 *) temp_s1;
            *temp_a1 = temp_v1;
            sceNetFreeInternal(temp_a0);
        } while (temp_s1 != NULL);
    }
    temp_v1_2 = arg0->unk0;
    if (temp_v1_2 != NULL) {
        temp_v1_2->unk4 = arg0->unk4;
    }
    *arg0->unk4 = temp_v1_2;
    sceNetFreeInternal(arg0);
    D_0002C57C -= 1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015278);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015764);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015ADC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016030);
#endif

#if FW_VERSION >= 282
void func_00015654(struct Unk_func_00015654_0 *arg0) {
    void **temp_a1;
    void *temp_a0;
    void *temp_s1;
    struct Unk_func_00015654_temp_v1 *temp_v1;
    struct Unk_func_00015654_temp_v1_2 *temp_v1_2;
    struct Unk_func_00015654_var_s0 *var_s0;

    var_s0 = arg0->unkC;
    if (var_s0 != NULL) {
        do {
            temp_s1 = var_s0->unk0;
            sceNetMFreem(var_s0->unkC);
            temp_v1 = var_s0->unk0;
            temp_a0 = var_s0;
            if (temp_v1 != NULL) {
                temp_v1->unk4 = (void **) var_s0->unk4;
            }
            temp_a1 = var_s0->unk4;
            var_s0 = temp_s1;
            *temp_a1 = temp_v1;
            sceNetFreeInternal(temp_a0);
        } while (temp_s1 != NULL);
    }
    temp_v1_2 = arg0->unk0;
    if (temp_v1_2 != NULL) {
        temp_v1_2->unk4 = (void **) arg0->unk4;
    }
    *arg0->unk4 = temp_v1_2;
    sceNetFreeInternal(arg0);
    D_0002C57C -= 1;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000156F8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015BD8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015C8C);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015888);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000161A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00015CFC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000160E4);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B764);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000161F0);

void func_000165BC(void) {
    struct mbuf *m;
    s32 s;

    for (;;) {
        s = _sce_pspnet_spllock();
        IF_DEQUEUE(&D_0002D930, m);
        _sce_pspnet_splunlock(s);
        if (m == NULL) {
            return;
        }
        func_0001486C(m);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016644);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016788);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016830);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016D78);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00016938);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000169EC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000175DC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000177A4);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001788C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00017F60);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00017BF0);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001794C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018480);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00017DA0);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018328);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018478);

#if FW_VERSION < 250
s32 func_00018594(void *arg0) {
    void *p = *(void **)((u8 *)arg0 + 0x4C);
    if (p != NULL && *(s32 *)((u8 *)p + 0xC) != 0) {
        return *(s32 *)((u8 *)p + 0xC);
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018594);
#endif

void func_000185BC(struct ip_moptions *imo) {
    s32 i;
    if (imo != NULL) {
        for (i = 0; i < imo->imo_num_memberships; i++) {
            func_00012684(imo->imo_membership[i]);
        }
        sceNetFreeInternal(imo);
    }
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018E1C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018B28);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018640);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018BE8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000192B8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000198F4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018628);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00018A90);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00019034);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000195B8);

u32 func_00019668(void) {
    struct timeval atv;
    u32 t;
    _sce_pspnet_microtime(&atv);
    t = (atv.tv_sec % (24 * 60 * 60)) * 1000 + atv.tv_usec / 1000;
    return __builtin_allegrex_wsbw(t);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000196DC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000197D4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A410);
#endif

#if FW_VERSION < 201
s32 func_0001A410(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00019A98(void) {
    return 0;
}
#endif

void func_00019AA0(void *key) {
    struct SceNetInetKeyNode *p;
    for (p = D_0002C5B8.lh_first; p != NULL; p = p->next) {
        if (p->key == key) {
            return;
        }
    }
    p = sceNetMallocInternal(sizeof(*p));
    if (p != NULL) {
        p->key = key;
        if ((p->next = (&D_0002C5B8)->lh_first) != NULL) {
            (&D_0002C5B8)->lh_first->prev = &p->next;
        }
        (&D_0002C5B8)->lh_first = p;
        p->prev = &(&D_0002C5B8)->lh_first;
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00019BCC);
#endif

#if FW_VERSION < 201
void func_0001A49C(void) {
    D_0002C270 = 8;
    D_0002C5B4 = 0;
    func_0002C94C(D_0002DA50, 0, 0x170);
    __builtin_memset(&D_0002E834, 0, sizeof(D_0002E834));
    D_0002E834.sin_len = sizeof(struct sockaddr_in);
    D_0002E834.sin_family = AF_INET;
    __builtin_memset(&D_0002E844, 0, sizeof(D_0002E844));
    D_0002E844.sin_len = sizeof(struct sockaddr_in);
    D_0002E844.sin_family = AF_INET;
    __builtin_memset(&D_0002E854, 0, sizeof(D_0002E854));
    D_0002E854.sin_len = sizeof(struct sockaddr_in);
    D_0002E854.sin_family = AF_INET;
    D_0002C5B8.lh_first = NULL;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A548);
#endif

#if FW_VERSION < 201
void func_0001A548(struct rtentry *rt) {
    s32 flags = rt->rt_flags;
    if ((flags & (RTF_HOST | RTF_DYNAMIC)) != (RTF_HOST | RTF_DYNAMIC)) {
        if (!(rt->rt_rmx.rmx_locks & RTV_MTU)) {
            rt->rt_rmx.rmx_mtu = 0;
        }
    } else {
        func_0000BEE0(RTM_DELETE, rt->rt_nodes[0].rn_key, rt->rt_gateway, rt->rt_nodes[0].rn_mask, flags, NULL);
    }
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000197EC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A5A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00019B24);

void func_00019C00(struct rtentry *rt) {
    s32 flags = rt->rt_flags;
    if ((flags & (RTF_HOST | RTF_DYNAMIC)) != (RTF_HOST | RTF_DYNAMIC)) {
        if (!(rt->rt_rmx.rmx_locks & RTV_MTU)) {
            rt->rt_rmx.rmx_mtu = 0;
        }
    } else {
        func_0000BEE0(RTM_DELETE, rt->rt_nodes[0].rn_key, rt->rt_gateway, rt->rt_nodes[0].rn_mask, flags, NULL);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00019C5C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A5C8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A714);

#if FW_VERSION < 201
void func_0001B398(void) {
    func_0002C94C(&D_00030218, 0, 0x48);
    D_0002DBC0 = 0;
    D_0002C5BC = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B398);
#endif

#if FW_VERSION >= 282
void func_0001A8AC(void) {
    sceNetMemset(&D_0002DBC8, 0, 0x48);
    D_0002DBC0 = 0;
    D_0002C5BC = 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001A8E4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B50C);
#endif

#if FW_VERSION < 201
void func_0001B50C(void *arg0) {
    s32 temp_a3;
    s32 temp_v1_2;
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x1C);
    if ((temp_v1 != 0) && (temp_a3 = __builtin_allegrex_wsbw(-0x100), temp_v1_2 = __builtin_allegrex_wsbw(0xE0000000), ((temp_v1 < 3U) != 0))) {
        if (((M2C_FIELD(arg0, s32 *, 0) & temp_a3) != temp_v1_2) && !(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) & 8) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 4) != 1)) {
            func_0001A714((s32) arg0, 0x17);
        }
    }
}
#endif

#if FW_VERSION >= 282
void func_0001AA20(struct Unk_func_0001AA20_0 *arg0) {
    s32 temp_a3;
    s32 temp_v1_2;
    u32 temp_v1;

    temp_v1 = arg0->unk1C;
    if ((temp_v1 != 0) && (temp_a3 = __builtin_allegrex_wsbw(-0x100), temp_v1_2 = __builtin_allegrex_wsbw(0xE0000000), ((temp_v1 < 3U) != 0))) {
        if (((arg0->unk0 & temp_a3) != temp_v1_2) && !(arg0->unk4->unk30 & 8) && (arg0->unk20->unk4 != 1)) {
            func_0001A714((s32) arg0, 0x17);
        }
    }
}
#endif

void func_0001AA90(void) {
    s32 s = _sce_pspnet_spllock();
    s32 *p;
    for (p = D_0002C5BC; p != NULL; p = (s32 *)p[3]) {
        if (p[1] == 1) {
            if (++p[2] >= 0x21C) {
                p[1] = 2;
            }
        }
    }
    _sce_pspnet_splunlock(s);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001ABA4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B5E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001AAFC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001AE68);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B094);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B1B0);

void func_0001B5C0(void) {
    D_0002C30C = 0x2000;
    D_0002C310 = 0x2000;
    func_00013ED4(&D_0002DC10, 1, 1);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B5FC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B6BC);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B2E4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B820);
#endif

#if FW_VERSION < 151
void func_0001C2E0(u8 *arg0) {
    *(SceNetBytes4 *)(arg0 + 0x48) = D_0002F544;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C30C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C60C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B754);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001B770);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001BA74);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001BC98);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001BEDC);

#if FW_VERSION < 201
void func_0001CE38(void) {
    D_0002C31C = 0x2400;
    D_0002C320 = 0xA280;
    D_0002C314 = 1;
    func_0002C94C(&D_0002DC30, 0, 0x48);
    func_00013ED4(&D_000302C8, D_0002E8D8, D_0002E8D8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001CE38);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001BE04);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001CE9C);
#endif

#if FW_VERSION >= 282
void func_0001C208(void) {
    D_0002C31C = 0x2400;
    D_0002C320 = 0xA280;
    D_0002C314 = 1;
    sceNetMemset(&D_0002DC30, 0, 0x48);
    func_00013ED4(&D_0002DC78, D_0002C318, D_0002C318);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C26C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C374);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C448);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001D1E4);
#endif

#if FW_VERSION < 201
void func_0001D1E4(void *arg0, s16 arg1) {
    void *var_a2;

    var_a2 = M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(var_a2, s16 *, 0x3C) = arg1;
    if (M2C_FIELD(var_a2, u16 *, 0x64) & 0x3C) {
        func_000048B8((s32) var_a2, (s32) (var_a2 + 0x44));
        var_a2 = M2C_FIELD(arg0, void **, 0x1C);
    }
    if (!(M2C_FIELD(var_a2, u16 *, 0x8C) & 0x3C)) {

    } else {
        func_000048B8((s32) var_a2, (s32) (var_a2 + 0x6C));
    }
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C188);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001CC7C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C764);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001D258);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001D85C);
#endif

#if FW_VERSION >= 282
void func_0001C57C(struct Unk_func_0001C57C_0 *arg0, s16 arg1) {
    struct Unk_func_0001C57C_var_a2 *var_a2;

    var_a2 = arg0->unk1C;
    var_a2->unk3C = arg1;
    if (var_a2->unk64 & 0x3C) {
        func_000048B8((s32) var_a2, (s32) ((u8 *)var_a2 + 0x44));
        var_a2 = arg0->unk1C;
    }
    if (!(var_a2->unk8C & 0x3C)) {

    } else {
        func_000048B8((s32) var_a2, (s32) ((u8 *)var_a2 + 0x6C));
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001C5F0);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001CBCC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F088);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F30C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F3B0);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F0A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F674);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F178);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020A20);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020B74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F4CC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001F5A0);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001FA38);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001FE88);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001FBBC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020260);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000204E4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020788);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000215D8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00021D08);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00021FCC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000222B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000227D4);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0001FFF0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020690);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020914);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00020BB8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00021070);
#endif

void func_00021458(void) {
    s32 i;
    D_0002DD04 = 0;
    for (i = 0; i < D_0002C1D4; i++) {
        D_0002CFF8[i].tqh_first = NULL;
    }
    for (i = 0; i < 13; i++) {
        D_0002DC98[i].tqh_first = NULL;
        D_0002DC98[i].tqh_last = (void **)&D_0002DC98[i];
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000214B0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000215C4);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00021FF0);
#endif

#if FW_VERSION < 151
void func_00023BE4(struct tcpcb *tp) {
    s32 t = ((tp->t_srtt >> 2) + tp->t_rttvar) >> (1 + 2);
    s32 nticks;

    if (t < tp->t_rttmin) {
        t = tp->t_rttmin;
    }
    nticks = t * D_0002E928[tp->t_rxtshift];
    if (nticks < TCPTV_PERSMIN) {
        nticks = TCPTV_PERSMIN;
    } else if (nticks > TCPTV_PERSMAX) {
        nticks = TCPTV_PERSMAX;
    }
    tp->t_timer[TCPT_PERSIST] = D_0002CC4C + nticks;
    if (tp->t_rxtshift < TCP_MAXRXTSHIFT) {
        tp->t_rxtshift++;
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023C74);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000223CC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00022450);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000225DC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023F58);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00022714);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000228BC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00022E84);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023030);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024B7C);
#endif

#if FW_VERSION < 201
s32 func_00024B7C(void *arg0) {
    s32 var_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;

    var_v0 = 0;
    var_s0 = M2C_FIELD(arg0, void **, 4);
    if (var_s0 != NULL) {
        do {
            temp_v1 = M2C_FIELD(var_s0, void **, 0);
            if (temp_v1 != NULL) {
                M2C_FIELD(temp_v1, void ***, 4) = (void **) M2C_FIELD(var_s0, void ***, 4);
            }
            *M2C_FIELD(var_s0, void ***, 4) = temp_v1;
            temp_v1_2 = M2C_FIELD(var_s0, void **, 0x14);
            if (temp_v1_2 != NULL) {
                M2C_FIELD(temp_v1_2, void ***, 0x18) = (void **) M2C_FIELD(var_s0, void ***, 0x18);
            }
            *M2C_FIELD(var_s0, void ***, 0x18) = temp_v1_2;
            sceNetMFreem(M2C_FIELD(var_s0, s32 *, 0xC));
            sceNetFreeInternal(var_s0);
            var_s0 = M2C_FIELD(arg0, void **, 4);
            var_v0 = 1;
        } while (var_s0 != NULL);
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00022F68);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000231F8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024C00);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024F3C);
#endif

#if FW_VERSION >= 282
s32 func_000232C0(struct Unk_func_000232C0_0 *arg0) {
    s32 var_v0;
    struct Unk_func_000232C0_temp_v1 *temp_v1;
    struct Unk_func_000232C0_temp_v1_2 *temp_v1_2;
    struct Unk_func_000232C0_var_s0 *var_s0;

    var_v0 = 0;
    var_s0 = arg0->unk4;
    if (var_s0 != NULL) {
        do {
            temp_v1 = var_s0->unk0;
            if (temp_v1 != NULL) {
                temp_v1->unk4 = (void **) var_s0->unk4;
            }
            *var_s0->unk4 = temp_v1;
            temp_v1_2 = var_s0->unk14;
            if (temp_v1_2 != NULL) {
                temp_v1_2->unk18 = (void **) var_s0->unk18;
            }
            *var_s0->unk18 = temp_v1_2;
            sceNetMFreem(var_s0->unkC);
            sceNetFreeInternal(var_s0);
            var_s0 = arg0->unk4;
            var_v0 = 1;
        } while (var_s0 != NULL);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023344);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000235D0);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023704);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000251A4);
#endif

#if FW_VERSION < 151
s32 func_000251A4(void *arg0) {
    return -((M2C_FIELD(arg0, u16 *, 0x28) & 0x188) == 0x180) & 0xC;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_000251A4(void *arg0) {
    return (((M2C_FIELD(arg0, u16 *, 0x28) & 0x188) ^ 0x180) != 0) ? 0 : 0xC;
}
#endif

#if FW_VERSION >= 282
s32 func_00023828(struct Unk_func_00023828_0 *arg0) {
    return (((arg0->unk2A & 0x188) ^ 0x180) != 0) ? 0 : 0xC;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023840);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023908);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000239E4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002544C);
#endif

#if FW_VERSION < 201
void func_0002544C(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, s32 *, 0x78) = (s32) M2C_FIELD(temp_v1, u16 *, 0x24);
    }
}
#endif

#if FW_VERSION < 151
void func_00025468(SceNetBytes4 addr) {
    func_00014614(&D_0002DD10, addr, 0x7A, func_00023B08);
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025468);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002373C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023CD0);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002380C);
#endif

#if FW_VERSION >= 282
void func_00023AB8(struct Unk_func_00023AB8_0 *arg0) {
    struct Unk_func_00023AB8_temp_v1 *temp_v1;

    temp_v1 = arg0->unk10;
    if (temp_v1 != NULL) {
        temp_v1->unk78 = (s32) temp_v1->unk26;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023AD4);
#endif

#if FW_VERSION < 151 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023B08);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002559C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023BD8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023C5C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023D1C);
#else
u32 func_000256DC(struct tcpcb *tp, u32 len, u32 addin) {
    u32 tcp_iss;

    tcp_iss = sceNetRand();
    if (addin != 0) {
        tcp_iss &= 0xFFFFFF;
        tcp_iss += addin + 0x1000000;
    } else {
        tcp_iss &= 0xFFFFFF;
        tcp_iss += D_0002C5D4;
        D_0002C5D4 += 0x1000000;
    }
    if (D_0002EC20) {
        if (tcp_iss >= 0x80000000) {
            tcp_iss &= 0x7FFFFFFF;
        }
    }
    return tcp_iss;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023D98);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025940);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00023F70);
#endif

#if FW_VERSION < 250
void func_00024430(void) {
    s32 s = _sce_pspnet_spllock();
    u8 *p, *next;
    for (p = D_000305A4; p != NULL; p = next) {
        next = *(u8 **)(p + 0x38);
        *(u16 *)(p + 0x28) |= 1;
        func_000215C4(p);
    }
    _sce_pspnet_splunlock(s);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024430);
#endif

void func_00024490(u8 *arg0) {
    s32 i;
    u32 *p = (u32 *)(arg0 + 8);
    for (i = 3; i >= 0; i--) {
        *p++ = 0;
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025E94);
#endif

#if FW_VERSION < 201
void func_00025E94(void) {
    D_0002E918 = 0x3840;
    D_0002E95C = 0x1FF;
    D_0002C35C = 0x96;
    D_0002C360 = 8;
    D_0002E924 = 0x3840;
    D_0002DF50 = 0;
    D_0002C5D8 = 0;
}
#endif

#if FW_VERSION >= 282
void func_000244B0(void) {
    D_0002C358 = 0x3840;
    D_0002C39C = 0x1FF;
    D_0002C35C = 0x96;
    D_0002C360 = 8;
    D_0002C364 = 0x3840;
    D_0002DF50 = 0;
    D_0002C5D8 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000244FC);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024B04);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000263E0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000249FC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024C58);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024D44);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024DF8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024EC4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", _sce_pspnet_pppoe_init);

s32 _sce_pspnet_pppoe_term(void) {
    s32 temp_s0;

    temp_s0 = _sce_pspnet_spllock();
    func_00009984();
    _sce_pspnet_stop_of_pppoe_module_in_netintr();
    func_00028D50();
    _sce_pspnet_splunlock(temp_s0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00024FB0);

void func_000252BC(struct sppp *sp) {
    struct mbuf *m;

    for (;;) {
        IF_DEQUEUE(&sp->pp_fastq, m);
        if (m == NULL) {
            break;
        }
        sceNetMFreem(m);
    }
    for (;;) {
        IF_DEQUEUE(&sp->pp_cpq, m);
        if (m == NULL) {
            break;
        }
        sceNetMFreem(m);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002534C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000253FC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025638);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB0C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB10);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB20);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB24);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB4C);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB54);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB90);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BB94);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BBCC);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BBD0);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002BBD8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002590C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002DFB4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027304);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025870);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025F18);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00025FCC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000263D0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026500);

s32 func_000266E4(struct sppp *sp) {
    s32 i, mask;
    for (i = 0, mask = 1; i < IDX_COUNT; i++, mask <<= 1) {
        if ((sp->lcp_protos & mask) && (D_0002C4E0[i]->flags & CP_NCP)) {
            return 1;
        }
    }
    return 0;
}

void func_00026734(struct sppp *sp) {
    if (sp->pp_phase < SPPP_PHASE_NETWORK) {
        return;
    }
    if (func_000266E4(sp)) {
        return;
    }
    D_0002BB24(sp);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026788);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026A94);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026C04);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026D7C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026F58);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00026FF4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027260);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000273BC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002757C);

s32 func_0002766C(const u8 *s, s32 max) {
    s32 n;
    for (n = 0; n < max && *s != 0; n++) {
        s++;
    }
    return n;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000276A4);

void func_000277E0(struct sppp *sp) {
    s32 i;
    _sce_pspnet_callout_stop(&D_0002C5DC);
    for (i = 0; i < IDX_COUNT; i++) {
        _sce_pspnet_callout_stop(sp->ch[i]);
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029330);
#endif

#if FW_VERSION < 151
s32 func_00029330(void *arg0) {
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    temp_a0 = _sce_pspnet_spllock();
    if ((M2C_FIELD(arg0, s32 *, 0x130) == 0) && (M2C_FIELD(arg0, s32 *, 0xD4) == 0)) {
        var_s1 = 1;
    }
    _sce_pspnet_splunlock(temp_a0);
    return var_s1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_00029330(void *arg0) {
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    temp_a0 = _sce_pspnet_spllock();
    if (M2C_FIELD(arg0, s32 *, 0x130) == 0) {
        var_s1 = M2C_FIELD(arg0, s32 *, 0xD4) == 0;
    }
    _sce_pspnet_splunlock(temp_a0);
    return var_s1;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029384);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027C20);
#endif

#if FW_VERSION < 201
void func_00027C20(void) {

}
#endif

#if FW_VERSION >= 282
s32 func_00027830(struct Unk_func_00027830_0 *arg0) {
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    temp_a0 = _sce_pspnet_spllock();
    if (arg0->unk130 == 0) {
        var_s1 = arg0->unkD4 == 0;
    }
    _sce_pspnet_splunlock(temp_a0);
    return var_s1;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027880);

void func_00027C20(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027C28);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027CD8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027DB4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027E8C);

void func_00027FA0(void *arg0) {
    func_00028B84(&D_0002BB10, arg0);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00027FC4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028080);

void func_00028124(struct sppp *sp) {
    sp->pp_phase = SPPP_PHASE_ESTABLISH;
    sp->unk174 = (sp->unk174 > 1) ? sp->unk174 : 1;
    if (sp->pp_tls != NULL) {
        sp->pp_tls(sp);
    }
}

void func_00028164(struct sppp *sp) {
    sp->pp_phase = SPPP_PHASE_DEAD;
    if (sp->pp_tlf != NULL) {
        sp->pp_tlf(sp);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028194);

void func_00028290(struct sppp *sp) {
    const struct cp *cp = &D_0002BB54;

    switch (sp->state[cp->protoidx]) {
    case STATE_INITIAL:
        func_00025F18(cp, sp, STATE_CLOSED);
        break;
    case STATE_STARTING:
        sp->rst_counter[cp->protoidx] = sp->lcp_max_configure;
        cp->scr(sp);
        func_00025F18(cp, sp, STATE_REQ_SENT);
        break;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028318);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000283B8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000284B4);

void func_00028608(void *arg0) {
    func_00028B84(&D_0002BB54, arg0);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002862C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000286C8);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028758);
#else
void func_00028758(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x270) = (s32) (M2C_FIELD(arg0, s32 *, 0x270) & ~0x10);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028768);
#endif

#if FW_VERSION < 201
void func_00028768(struct Unk_func_00028768_0 *arg0) {
    arg0->unk254 |= 2;
}
#endif

#if FW_VERSION >= 282
void func_00028768(struct Unk_func_00028768_0 *arg0) {
    arg0->unk254 = (s32) (arg0->unk254 | 2);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028778);
#else
void func_00028778(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) & ~2);
}
#endif

#if FW_VERSION == 100
void func_00028788(struct sppp *sp) {
    if (sp->myauth_proto == PPP_PAP) {
        D_0002BBCC(sp);
        _sce_pspnet_callout_reset(sp->ch[IDX_PAP], sp->unk394, func_00028854, sp);
        sp->rst_counter[IDX_PAP] = sp->unk398;
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028788);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000287F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000287F4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x188) != 2) {
        func_00025F18(&D_0002BB94, arg0, STATE_CLOSED);
    }
    _sce_pspnet_callout_stop(arg0 + 0x1FC);
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) & ~4);
}
#endif

#if FW_VERSION == 100
void func_000287F4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x188) != 2) {
        func_00025F18(&D_0002BB94, arg0, STATE_CLOSED);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002884C);
#endif

#if FW_VERSION < 201
void func_0002884C(void) {

}
#endif

#if FW_VERSION >= 282
void func_0002884C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028854);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000288E4);
#endif

#if FW_VERSION < 201
void func_000288E4(void) {

}
#endif

#if FW_VERSION >= 282
void func_000288E4(void) {
}
#endif

#if FW_VERSION < 271
void func_000288EC(struct sppp *sp) {
    _sce_pspnet_callout_stop(sp->ch[IDX_PAP]);
    sp->lcp_protos &= ~(1 << IDX_PAP);
    D_0002BB24(sp);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000288EC);
#endif

void func_00028930(struct sppp *sp) {
    u8 idlen, pwdlen;

    pwdlen = sp->myauth_secret_len;
    idlen = sp->myauth_name_len;
    sp->confid[IDX_PAP] = ++sp->pp_seq;
    func_00026FF4(&D_0002BB94, sp, 1, sp->confid[IDX_PAP],
                  sizeof(idlen), &idlen, (u32)idlen, sp->myauth_name,
                  sizeof(pwdlen), &pwdlen, (u32)pwdlen, sp->myauth_secret, 0);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A538);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002A538(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) | 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A548);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002A548(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18C) != 2) {
        func_00025F18(&D_0002BBD8, arg0, STATE_CLOSED);
    }
    _sce_pspnet_callout_stop(arg0 + 0x220);
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) & ~8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A4DC);
#endif

#if FW_VERSION < 201
void func_0002A4DC(void) {

}
#endif

#if FW_VERSION >= 282
void func_000289B0(struct Unk_func_000289B0_0 *arg0) {
    arg0->unk254 = (s32) (arg0->unk254 | 8);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000289C0);
#endif

#if FW_VERSION == 100
void func_000289C0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18C) != 2) {
        func_00025F18(&D_0002BBD8, arg0, STATE_CLOSED);
    }
}

void func_0002A51C(void) {

}
#endif

#if FW_VERSION >= 282
void func_00028A18(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028A20);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A62C);
#endif

#if FW_VERSION < 201
void func_0002A62C(void) {

}
#endif

#if FW_VERSION >= 282
void func_00028B30(void) {
}
#endif

#if FW_VERSION < 271
void func_00028B38(struct sppp *sp) {
    _sce_pspnet_callout_stop(sp->ch[IDX_CHAP]);
    sp->lcp_protos &= ~(1 << IDX_CHAP);
    D_0002BB24(sp);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028B38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A67C);
#endif

#if FW_VERSION < 201
void func_0002A67C(void) {

}
#endif

#if FW_VERSION >= 282
void func_00028B7C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028B84);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028D50);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028E80);

s32 func_00028FA0(void *arg0) {
    return func_00029C28(arg0, 0);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00028FBC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029108);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029280);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000293A4);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029460);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000297CC);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000298B8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002B24C);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002B350);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000296F8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000297E4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000299E4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029B94);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002B640);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029C28);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029F28);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002BD24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002BDB4);
#endif

#if FW_VERSION < 201
void func_0002BDB4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4BC) < 3) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x4BC) = 4;
        _sce_pspnet_callout_reset(arg0 + 0x4D8, 2, &func_00029280, arg0);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002BE00);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029AC0);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00029C28);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A1B0);

void func_0002A244(struct Unk_func_0002A244_0 *arg0) {
    if (arg0->unk4BC < 3) {

    } else {
        arg0->unk4BC = 4;
        _sce_pspnet_callout_reset((u8 *)arg0 + 0x4D8, 2, &func_00029280, arg0);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A290);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002A570);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", _sce_pspnet_pppoe_init);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", _sce_pspnet_pppoe_term);
#endif

#if FW_VERSION >= 282
s32 _sce_pspnet_pppoe_term(void) {
    s32 temp_s0;

    temp_s0 = _sce_pspnet_spllock();
    func_00009B0C();
    _sce_pspnet_stop_of_pppoe_module_in_netintr();
    func_00028D50();
    _sce_pspnet_splunlock(temp_s0);
    return 0;
}
#endif

#if FW_VERSION < 201
char *sceNetInet_lib_2595064C(struct in_addr in) {
    __builtin_strcpy(D_0002F288, "[inet_ntoa error]");
    sceNetInetInetNtop(AF_INET, &in, D_0002F288, sizeof(D_0002F288));
    return D_0002F288;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInet_lib_2595064C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInetNtop);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInetPton);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInetAddr);
#endif

#if FW_VERSION < 151
s32 sceNetInetInetAddr(s32 arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = -1;
    if (func_0002C4CC(arg0, &sp0, 0) != 0) {
        var_v1 = sp0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 sceNetInetInetAddr(s32 arg0) {
    void *sp0;
    return (func_0002C4CC(arg0, &sp0, 0) != 0) ? sp0 : -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInetAton);
#endif

#if FW_VERSION < 201
void sceNetInetInetAton(s32 arg0, s32 arg1) {
    func_0002C4CC(arg0, arg1, 0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C4CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInit);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetTerm);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

char func_0002C7B4(char c) {
    s32 t = D_0002EAB0[c + 1];
    if (t & 2) {
        c -= 0x20;
    }
    return c;
}

char func_0002C7E0(char c) {
    s32 t = D_0002EAB0[c + 1];
    if (t & 1) {
        c += 0x20;
    }
    return c;
}

s32 func_0002C80C(s32 c) {
    return D_0002EAB0[c + 1];
}
#endif

#if FW_VERSION < 151 || FW_VERSION == 152
s32 *func_0002C820(void) {
    return &D_0002EAB1;
}
#endif

#if FW_VERSION == 151
M2C_UNK *func_0002C820(void) {
    return &D_0002EAB1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C82C);

void *func_0002C864(void *dst, const void *src, s32 n) {
    u8 *d = dst;
    const u8 *s = src;
    if (dst == NULL) {
        return NULL;
    }
    //V{
    if (d >= s) {
        for (n--; n >= 0; n--) {
            d[n] = s[n];
        }
    } else {
        while (n > 0) {
            n--;
            *d++ = *s++;
        }
    }
    return dst;
    //V|
    if (d < s) {
        while (n > 0) {
            n--;
            *d++ = *s++;
        }
        return dst;
    }
    for (n--; n >= 0; n--) {
        d[n] = s[n];
    }
    return dst;
    //V|
    if (d >= s) {
        for (n--; n >= 0; n--) {
            d[n] = s[n];
        }
        return dst;
    }
    while (n > 0) {
        n--;
        *d++ = *s++;
    }
    return dst;
    //V}
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002AAC8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C8D8);
#endif

#if FW_VERSION < 201
u8 *func_0002C918(u8 *arg0, const u8 *arg1, s32 arg2) {
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

void *func_0002C94C(void *p, s32 c, s32 n) {
    u8 *q;
    if (p != NULL) {
        u8 ch = c;
        q = p;
        while (n > 0) {
            n--;
            *q++ = ch;
        }
    }
    return p;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C978);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002C9B8);
#endif

#if FW_VERSION < 201
void func_0002C9B8(const void *src, void *dst, s32 len) {
    func_0002C864(dst, src, len);
}

void func_0002C9DC(u8 *p, s32 n) {
    if (p != NULL) {
        while (n > 0) {
            n--;
            *p++ = 0;
        }
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CA04);

char *func_0002CAB4(char *s, char c) {
    char *p = s;
    if (s == NULL) {
        return NULL;
    }
    while (*p++ != 0) {
    }
    p--;
    do {
        if (*p == c) {
            return p;
        }
    } while (s < p--);
    return NULL;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002ACFC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CAFC);
#endif

#if FW_VERSION < 201
char *func_0002CB94(char *dst, const char *src, s32 n) {
    char *d = dst;
    s32 i;
    if (dst == NULL || src == NULL) {
        return NULL;
    }
    for (i = 0; i < n; i++) {
        if ((*d++ = *src++) == 0) {
            for (i++; i < n; i++) {
                *d++ = 0;
            }
            return dst;
        }
    }
    return dst;
}

char *func_0002CC10(char *s, char c) {
    if (s == NULL) {
        return NULL;
    }
    do {
        if (*s == c) {
            return s;
        }
    } while (*s++ != 0);
    return NULL;
}

u8 *func_0002CC40(u8 *arg0, u8 *arg1) {
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

s32 func_0002CC78(const char *s) {
    s32 n = 0;
    if (s == NULL) {
        return 0;
    }
    while (*s++ != 0) {
        n++;
    }
    return n;
}

s32 func_0002CCAC(char *buf, const char *fmt, ...) {
    __builtin_va_list ap;
    char *p[4];
    s32 ret;
    p[0] = buf;
    __builtin_va_start(ap, fmt);
    ret = func_0002CCF8(func_0002D420, p, fmt, ap);
    __builtin_va_end(ap);
    return ret;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002CCF8);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002D420);

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002E290);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002C5D8_v152);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002C498);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002E298);
#endif

#if FW_VERSION >= 282
s32 sceNetInetInetAddr(s32 arg0) {
    void *sp0;
    return (func_0002AA4C(arg0, &sp0, 0) != 0) ? sp0 : -1;
}

void sceNetInetInetAton(s32 arg0, s32 arg1) {
    func_0002AA4C(arg0, arg1, 0);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0002AA4C);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetInit);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetTerm);

void func_0002AF14(void) {
    _sce_pspnet_get_thread_errno();
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetErrno);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetPspError);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetAddArp);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetDelArp);

INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetInetGetArpInfo);
#endif
