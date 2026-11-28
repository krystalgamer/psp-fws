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

#if FW_VERSION < 201
s32 sceNetConfigGetDNS(SceNetBytes4 *primary, SceNetBytes4 *secondary) {
    if (primary != NULL) {
        *primary = dns_primary;
    }
    if (secondary != NULL) {
        *secondary = dns_secondary;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sceNetConfigGetDNS);
#endif

#if FW_VERSION < 201
s32 sceNetConfigSetDNS(SceNetBytes4 *primary, SceNetBytes4 *secondary) {
    if (primary != NULL) {
        dns_primary = *primary;
    }
    if (secondary != NULL) {
        dns_secondary = *secondary;
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

struct domain *pffinddomain(s32 family) {
    struct domain *dp;
    for (dp = domains; dp != NULL; dp = dp->dom_next) {
        if (dp->dom_family == family) {
            break;
        }
    }
    return dp;
}

struct protosw *pffindtype(s32 family, s32 type) {
    struct domain *dp;
    struct protosw *pr;

    for (dp = domains; dp != NULL; dp = dp->dom_next) {
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

struct protosw *pffindproto(s32 family, s32 protocol, s32 type) {
    struct domain *dp;
    struct protosw *pr;
    struct protosw *maybe = NULL;

    if (family == 0) {
        return NULL;
    }
    for (dp = domains; dp != NULL; dp = dp->dom_next) {
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

s32 net_sysctl(s32 *name, u32 namelen, void *oldp, u32 *oldlenp, void *newp, u32 newlen) {
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
    for (dp = domains; dp != NULL; dp = dp->dom_next) {
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

void pfctlinput(s32 cmd, struct sockaddr *sa) {
    struct domain *dp;
    struct protosw *pr;

    for (dp = domains; dp != NULL; dp = dp->dom_next) {
        for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
            if (pr->pr_ctlinput) {
                pr->pr_ctlinput(cmd, sa, NULL);
            }
        }
    }
}

void pfslowtimo(void *arg) {
    struct domain *dp;
    struct protosw *pr;

    pfslowtimo_now++;
    for (dp = domains; dp != NULL; dp = dp->dom_next) {
        for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
            if (pr->pr_slowtimo) {
                pr->pr_slowtimo();
            }
        }
    }
    _sce_pspnet_callout_reset(D_0002CC74, 100 / 2, pfslowtimo, NULL);
}

void pffasttimo(void *arg) {
    struct domain *dp;
    struct protosw *pr;

    pffasttimo_now++;
    for (dp = domains; dp != NULL; dp = dp->dom_next) {
        for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
            if (pr->pr_fasttimo) {
                pr->pr_fasttimo();
            }
        }
    }
    _sce_pspnet_callout_reset(D_0002CC50, 100 / 5, pffasttimo, NULL);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", socreate);

void sofree(struct socket *so) {
    if (so->so_pcb || (so->so_state & SS_NOFDREF) == 0) {
        return;
    }
    if (so->so_head) {
        if (!soqremque(so, 0)) {
            return;
        }
    }
    func_00004A3C(&so->so_snd);
    sorflush(so);
    if (so->so_list.tqe_next != NULL) {
        so->so_list.tqe_next->so_list.tqe_prev = so->so_list.tqe_prev;
    } else {
        so_list.tqh_last = so->so_list.tqe_prev;
    }
    *so->so_list.tqe_prev = so->so_list.tqe_next;
    sceNetFreeInternal(so);
}

s32 soclose(struct socket *so) {
    struct socket *so2;
    s32 s = _sce_pspnet_spllock();
    s32 error = 0;

    if (so->so_options & 0x2) { /* SO_ACCEPTCONN */
        while ((so2 = so->so_q0.tqh_first) != NULL) {
            (void)soqremque(so2, 0);
            (void)soabort(so2);
        }
        while ((so2 = so->so_q.tqh_first) != NULL) {
            (void)soqremque(so2, 1);
            (void)soabort(so2);
        }
    }
    if (so->so_pcb == NULL) {
        goto discard;
    }
    if (so->so_state & SS_ISCONNECTED) {
        if ((so->so_state & SS_ISDISCONNECTING) == 0) {
            error = sodisconnect(so);
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
    sofree(so);
    _sce_pspnet_splunlock(s);
    return error;
}

s32 soabort(struct socket *so) {
    return so->so_proto->pr_usrreq(so, PRU_ABORT, NULL, NULL, NULL);
}

s32 sodisconnect(struct socket *so) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet", sosend);

INCLUDE_ASM("nonmatchings/pspnet_inet", soreceive);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002684);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00002CAC);
#endif

#if FW_VERSION < 201
void sorflush(struct socket *so) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet", sorflush);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00003A00);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00003D28);

INCLUDE_ASM("nonmatchings/pspnet_inet", soo_poll);

#if FW_VERSION < 282
void func_000042F4(void) {
    somaxconn = 0x80;
    D_0002EB54 = 0;
    so_list.tqh_first = NULL;
    so_list.tqh_last = &so_list.tqh_first;
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
    so_list.tqh_first = NULL;
    so_list.tqh_last = &so_list.tqh_first;
}

s32 func_00004124(struct socket *so, struct mbuf *nam) {
    s32 s = _sce_pspnet_spllock();
    s32 error = so->so_proto->pr_usrreq(so, PRU_BIND, NULL, nam, NULL);
    _sce_pspnet_splunlock(s);
    return error;
}
#else
s32 solisten(struct socket *so, s32 backlog) {
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
    so->so_qlimit = min(backlog, somaxconn);
    _sce_pspnet_splunlock(s);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", solisten);
#endif

#if FW_VERSION < 271
s32 soaccept(struct socket *so, struct mbuf *nam) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet", soaccept);
#endif

s32 soconnect(struct socket *so, struct mbuf *nam) {
    s32 s;
    s32 error;

    if (so->so_options & 0x2) { /* SO_ACCEPTCONN */
        return 95; /* EOPNOTSUPP */
    }
    s = _sce_pspnet_spllock();
    if (so->so_state & (SS_ISCONNECTED | SS_ISCONNECTING) &&
        ((so->so_proto->pr_flags & PR_CONNREQUIRED) || (error = sodisconnect(so)))) {
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

s32 soshutdown(struct socket *so, s32 how) {
    struct protosw *pr = so->so_proto;

    if (!(how == 0 || how == 1 || how == 2)) {
        return 22; /* EINVAL */
    }
    if (how == 0 || how == 2) {
        sorflush(so);
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

void soisconnected(struct socket *so) {
    struct socket *head = so->so_head;

    so->so_state &= ~(SS_ISCONNECTING | SS_ISDISCONNECTING | SS_ISCONFIRMING);
    so->so_state |= SS_ISCONNECTED;
    if (head && soqremque(so, 0)) {
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
struct socket *sonewconn1(struct socket *head, s32 connstatus) {
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
    (void)soreserve(so, head->so_snd.sb_hiwat, head->so_rcv.sb_hiwat);
    func_000047DC(head, so, soqueue);
    if (so->so_proto->pr_usrreq(so, PRU_ATTACH, NULL, NULL, NULL)) {
        (void)soqremque(so, soqueue);
        sceNetFreeInternal(so);
        return NULL;
    }
    if (connstatus) {
        sorwakeup(head);
        _sce_pspnet_wakeup(&head->so_timeo);
        so->so_state |= connstatus;
    }
    so->so_list.tqe_next = NULL;
    so->so_list.tqe_prev = so_list.tqh_last;
    *so_list.tqh_last = so;
    so_list.tqh_last = &so->so_list.tqe_next;
    return so;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sonewconn1);
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

s32 soqremque(struct socket *so, s32 q) {
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
void sowakeup(struct socket *so, struct sockbuf *sb) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet", sowakeup);
#endif

s32 soreserve(struct socket *so, u32 sndcc, u32 rcvcc) {
    if (sbreserve(&so->so_snd, sndcc) == 0) {
        goto bad;
    }
    if (sbreserve(&so->so_rcv, rcvcc) == 0) {
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

s32 sbreserve(struct sockbuf *sb, u32 cc) {
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
    sbflush(sb);
    sb->sb_hiwat = sb->sb_mbmax = 0;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004A68);

INCLUDE_ASM("nonmatchings/pspnet_inet", sbappendaddr);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00004E28);

void sbflush(struct sockbuf *sb) {
    while (sb->sb_mbcnt != 0) {
        sbdrop(sb, sb->sb_cc);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet", sbdrop);

INCLUDE_ASM("nonmatchings/pspnet_inet", sbdroprecord);

#if FW_VERSION < 201
struct mbuf *sbcreatecontrol(void *p, s32 size, s32 type, s32 level) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet", sbcreatecontrol);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", falloc);

struct socket *getsock(s32 s) {
    struct socket *so;
    s32 x;
    if ((u32)(s - 1) >= 0xFF) {
        return NULL;
    }
    x = _sce_pspnet_spllock();
    for (so = so_list.tqh_first; so != NULL; so = so->so_list.tqe_next) {
        if (so->so_fd == s) {
            break;
        }
    }
    _sce_pspnet_splunlock(x);
    return so;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", soisconnecting);
#endif

#if FW_VERSION < 201
void soisconnecting(struct socket *so) {
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
void soisdisconnecting(struct socket *so) {
    so->so_state &= ~SS_ISCONNECTING;
    so->so_state |= (SS_ISDISCONNECTING | SS_CANTRCVMORE | SS_CANTSENDMORE);
    _sce_pspnet_wakeup(&so->so_timeo);
    if (so->so_snd.sb_flags & SB_NOTIFY) {
        sowakeup(so, &so->so_snd);
    }
    if (so->so_rcv.sb_flags & SB_NOTIFY) {
        sowakeup(so, &so->so_rcv);
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", soisdisconnecting);
#endif

#if FW_VERSION < 271
void soisdisconnected(struct socket *so) {
    so->so_state &= ~(SS_ISCONNECTING | SS_ISCONNECTED | SS_ISDISCONNECTING);
    so->so_state |= (SS_CANTRCVMORE | SS_CANTSENDMORE | SS_ISDISCONNECTED);
    _sce_pspnet_wakeup(&so->so_timeo);
    if (so->so_snd.sb_flags & SB_NOTIFY) {
        sowakeup(so, &so->so_snd);
    }
    if (so->so_rcv.sb_flags & SB_NOTIFY) {
        sowakeup(so, &so->so_rcv);
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", soisdisconnected);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", socantsendmore);
#endif

#if FW_VERSION < 201
void socantsendmore(struct socket *so) {
    so->so_state |= SS_CANTSENDMORE;
    if (so->so_snd.sb_flags & SB_NOTIFY) {
        sowakeup(so, &so->so_snd);
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
        sowakeup(so, &so->so_rcv);
    }
}
#endif

#if FW_VERSION >= 282
void func_0000588C(struct socket *so) {
    so->so_state |= SS_CANTSENDMORE;
    if (so->so_snd.sb_flags & SB_NOTIFY) {
        sowakeup(so, &so->so_snd);
    }
}

void func_000058CC(struct socket *so) {
    so->so_state |= SS_CANTRCVMORE;
    if (so->so_rcv.sb_flags & SB_NOTIFY) {
        sowakeup(so, &so->so_rcv);
    }
}
#endif

s32 func_0000590C(struct sockbuf *sb) {
    sb->sb_flags |= SB_WAIT;
    return _sce_pspnet_tsleep(sb, sb->sb_timeo);
}

s32 sb_lock(struct sockbuf *sb) {
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

INCLUDE_ASM("nonmatchings/pspnet_inet", sbappend);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", sce_alignbytes);
#endif

#if FW_VERSION < 201
s32 sce_alignbytes(void) {
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
    so = getsock(s);
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
    so = getsock(s);
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
s32 sockargs(struct mbuf **mp, const void *buf, u32 buflen, s32 type) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet", sockargs);
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

s32 pollscan(void *p, struct pollfd *fds, s32 nfd, s32 *retval) {
    s32 i;
    s32 n = 0;
    struct socket *so;

    for (i = 0; i < nfd; i++, fds++) {
        so = getsock(fds->fd);
        if (so == NULL) {
            fds->revents = POLLNVAL;
            n++;
        } else {
            fds->revents = soo_poll(so, fds->events | POLLERR | POLLHUP, p);
            if (fds->revents)
                n++;
        }
    }
    *retval = n;
    return 0;
}

void func_00007E00(struct SceNetInetWaiter *w, struct SceNetInetPollfd *fds, s32 n) {
    struct socket *so;
    s32 i;
    for (i = 0; i < n; i++, fds++) {
        so = getsock(fds->fd);
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
    so = getsock(s);
    error = 9; /* EBADF */
    if (so != NULL) {
        SO_WAITER_ATTACH(w, so);
        error = sockargs(&nam, name, namelen, MT_SONAME);
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
    so = getsock(s);
    error = 9; /* EBADF */
    if (so != NULL) {
        SO_WAITER_ATTACH(w, so);
        error = solisten(so, backlog);
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
    so = getsock(s);
    error = 9; /* EBADF */
    if (so != NULL) {
        SO_WAITER_ATTACH(w, so);
        error = soshutdown(so, how);
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
    so = getsock(s);
    error = 9;
    if (so != NULL) {
        error = soclose(so);
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
    so = getsock(s);
    error = 9;
    if (so != NULL) {
        soabort(so);
        error = soclose(so);
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
    so = getsock(s);
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

INCLUDE_ASM("nonmatchings/pspnet_inet", sysctl_int);

INCLUDE_ASM("nonmatchings/pspnet_inet", sysctl_rdint);

#if FW_VERSION < 201
s32 sysctl_rdstruct(void *oldp, u32 *oldlenp, void *newp, const void *sp, u32 len) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet", sysctl_rdstruct);
#endif

char *intoa(u32 addr) {
    char *cp;
    u32 byte;
    s32 n;

    addr = __builtin_allegrex_wsbw(addr);
    cp = D_0002C519;
    *--cp = '\0';
    n = 4;
    do {
        byte = addr & 0xff;
        *--cp = byte % 10 + '0';
        byte /= 10;
        if (byte > 0) {
            *--cp = byte % 10 + '0';
            byte /= 10;
            if (byte > 0)
                *--cp = byte + '0';
        }
        *--cp = '.';
        addr >>= 8;
    } while (--n > 0);
    return cp + 1;
}

struct ifaddr *ifa_ifwithnet(struct sockaddr *addr) {
    struct ifnet *ifp;
    struct ifaddr *ifa;
    struct sockaddr_dl *sdl;
    struct ifaddr *ifa_maybe = 0;
    u32 af = addr->sa_family;
    char *addr_data = addr->sa_data, *cplim;
    TAILQ_HEAD(, ifnet) ifnet;
    s32 if_index;
    struct ifnet **ifindex2ifnet;
    struct ifaddr **ifnet_addrs;

    _sce_pspnet_get_if_core_variables(&if_index, &ifindex2ifnet, &ifnet_addrs, (struct ifnet **)&ifnet);
    if (af == 18) {
        sdl = (struct sockaddr_dl *)addr;
        if (sdl->sdl_index && sdl->sdl_index <= if_index &&
            ifindex2ifnet[sdl->sdl_index]->if_output != _sce_pspnet_if_nulloutput)
            return (ifnet_addrs[sdl->sdl_index]);
    }
    for (ifp = ifnet.tqh_first; ifp != 0; ifp = ifp->if_list.tqe_next) {
        if (ifp->if_output == _sce_pspnet_if_nulloutput)
            continue;
        for (ifa = ifp->if_addrlist.tqh_first; ifa != 0; ifa = ifa->ifa_list.tqe_next) {
            char *cp, *cp2, *cp3;

            if (ifa->ifa_addr->sa_family != af || ifa->ifa_netmask == 0)
 next:          continue;
            cp = addr_data;
            cp2 = ifa->ifa_addr->sa_data;
            cp3 = ifa->ifa_netmask->sa_data;
            cplim = (char *)ifa->ifa_netmask + ifa->ifa_netmask->sa_len;
            while (cp3 < cplim) {
                if ((*cp++ ^ *cp2++) & *cp3++)
                    goto next;
            }
            if (ifa_maybe == 0 ||
                rn_refines((char *)ifa->ifa_netmask, (char *)ifa_maybe->ifa_netmask))
                ifa_maybe = ifa;
        }
    }
    return (ifa_maybe);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", ifaof_ifpforaddr);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", if_rtdel);
#else
s32 if_rtdel(struct rtentry *rt, void *arg) {
    if (rt->rt_ifp == arg) {
        func_0000BEE0(2, rt->rt_nodes[0].rn_key, rt->rt_gateway, rt->rt_nodes[0].rn_mask, rt->rt_flags, NULL);
    }
    return 0;
}
#endif

#if FW_VERSION < 201
struct ifaddr *ifa_ifwithaddr(struct sockaddr *addr) {
    struct ifnet *ifp;
    struct ifaddr *ifa;
    TAILQ_HEAD(, ifnet) ifnet;

    _sce_pspnet_get_if_core_variables(NULL, NULL, NULL, (struct ifnet **)&ifnet);
    for (ifp = ifnet.tqh_first; ifp != 0; ifp = ifp->if_list.tqe_next) {
        if (ifp->if_output == _sce_pspnet_if_nulloutput)
            continue;
        for (ifa = ifp->if_addrlist.tqh_first; ifa != 0; ifa = ifa->ifa_list.tqe_next) {
            if (ifa->ifa_addr->sa_family != addr->sa_family)
                continue;
            if (func_0002C978(addr, ifa->ifa_addr, addr->sa_len) == 0)
                return (ifa);
            if ((ifp->if_flags & 0x2) && ifa->ifa_dstaddr &&
                ifa->ifa_dstaddr->sa_len != 0 &&
                func_0002C978(ifa->ifa_dstaddr, addr, ifa->ifa_dstaddr->sa_len) == 0)
                return (ifa);
        }
    }
    return ((struct ifaddr *)0);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", ifa_ifwithaddr);
#endif

#if FW_VERSION < 201
struct ifaddr *ifa_ifwithdstaddr(struct sockaddr *addr) {
    struct ifnet *ifp;
    struct ifaddr *ifa;
    TAILQ_HEAD(, ifnet) ifnet;

    _sce_pspnet_get_if_core_variables(NULL, NULL, NULL, (struct ifnet **)&ifnet);
    for (ifp = ifnet.tqh_first; ifp != 0; ifp = ifp->if_list.tqe_next) {
        if (ifp->if_output == _sce_pspnet_if_nulloutput)
            continue;
        if (ifp->if_flags & 0x10)
            for (ifa = ifp->if_addrlist.tqh_first; ifa != 0; ifa = ifa->ifa_list.tqe_next) {
                if (ifa->ifa_addr->sa_family != addr->sa_family || ifa->ifa_dstaddr == NULL)
                    continue;
                if (func_0002C978(addr, ifa->ifa_dstaddr, addr->sa_len) == 0)
                    return (ifa);
            }
    }
    return (NULL);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", ifa_ifwithdstaddr);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", ifa_ifwithladdr);

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

#if FW_VERSION < 201
void func_000095AC(struct ifnet *ifp, s32 family) {
    struct socket so;
    struct domain *dp;
    struct protosw *pr;

    func_0002C94C(&so, 0, sizeof(so));
    dp = pffinddomain(family);
    for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
        so.so_proto = pr;
        if (pr->pr_usrreq != NULL)
            (void)(*pr->pr_usrreq)(&so, 22, NULL, NULL, (struct mbuf *)ifp);
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000095AC);
#endif

void func_00009650(struct ifnet *ifp) {
    s32 i;
    struct radix_node_head *rnh;
    for (i = 0; i < 32; i++) {
        rnh = rt_tables[i];
        if (rnh != NULL) {
            rnh->rnh_walktree(rnh, if_rtdel, ifp);
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
            pfctlinput(0, M2C_FIELD(var_s0, s32 *, 0));
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
            pfctlinput(0, var_s0->unk0);
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
    _sce_pspnet_start_of_inet_module_in_if_core(&link_rtrequest, func_000097BC, func_000093F0, func_0000940C, &func_000095AC, &func_00009650, func_00009548, func_00009564, func_000095A4, func_000095C0, func_000095DC, &func_00009764, &func_00009788);
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
    _sce_pspnet_start_of_inet_module_in_if_core(&link_rtrequest, func_0000993C, func_00009570, func_0000958C, &func_000095AC, &func_00009650, func_000096C8, func_000096E4, func_00009724, func_00009740, func_0000975C, &func_00009764, &func_00009788);
}

void func_00009850(void) {
    _sce_pspnet_stop_of_inet_module_in_if_core();
}
#endif

void link_rtrequest(s32 cmd, struct rtentry *rt, struct sockaddr *sa) {
    struct ifaddr *ifa;
    struct sockaddr *dst;
    struct ifnet *ifp;

    if ((cmd != 1) || ((ifa = rt->rt_ifa) == 0) ||
        ((ifp = ifa->ifa_ifp) == 0) || ((dst = rt_key(rt)) == 0))
        return;
    if ((ifa = ifaof_ifpforaddr(dst, ifp)) != NULL) {
        if (--rt->rt_ifa->ifa_refcnt == 0)
            _sce_pspnet_ifafree(rt->rt_ifa);
        rt->rt_ifa = ifa;
        ifa->ifa_refcnt++;
        if (ifa->ifa_rtrequest && ifa->ifa_rtrequest != (void *)_sce_pspnet_link_rtrequest)
            ifa->ifa_rtrequest(cmd, rt, sa);
    }
}

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

#if FW_VERSION < 151 || FW_VERSION == 152
s32 ether_multiaddr(struct sockaddr *sa, u8 *addrlo, u8 *addrhi) {
    struct sockaddr_in *sin;

    switch (sa->sa_family) {
    case AF_INET:
        sin = (struct sockaddr_in *)sa;
        if (sin->sin_addr.s_addr == __builtin_allegrex_wsbw(0)) {
            func_0002C9B8(ether_ipmulticast_min, addrlo, 6);
            func_0002C9B8(ether_ipmulticast_max, addrhi, 6);
        } else {
            addrlo[0] = 0x01;
            addrlo[1] = 0x00;
            addrlo[2] = 0x5e;
            addrlo[3] = ((u8 *)&sin->sin_addr)[1] & 0x7f;
            addrlo[4] = ((u8 *)&sin->sin_addr)[2];
            addrlo[5] = ((u8 *)&sin->sin_addr)[3];
            func_0002C9B8(addrlo, addrhi, 6);
        }
        break;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", ether_multiaddr);
#endif

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
    _sce_pspnet_start_of_inet_module_in_if_ethersubr_core(&func_00009B84, &func_00009A14, &func_00009A58, &ether_multiaddr);
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
    _sce_pspnet_start_of_inet_module_in_if_ethersubr_core(&func_00009B84, &func_00009A14, &func_00009A58, &ether_multiaddr);
}

void func_00009B5C(void) {
    _sce_pspnet_stop_of_inet_module_in_if_ethersubr_core();
}
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
struct ifqueue *sceNetInet_lib_D7928A6D(void) {
    return &ipintrq;
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

struct radix_node *rn_search_m(void *v_arg, struct radix_node *head, void *m_arg) {
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

INCLUDE_ASM("nonmatchings/pspnet_inet", rn_refines);

struct radix_node *rn_lookup(void *v_arg, void *m_arg, struct radix_node_head *head) {
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

struct radix_node *rn_newpair(void *v, s32 b, struct radix_node nodes[2]) {
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
void rt_maskedcopy(struct sockaddr *src, struct sockaddr *dst, struct sockaddr *netmask) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet", rt_maskedcopy);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000C8F8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000C998);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000CC00);

void rt_timer_remove_all(struct rtentry *rt) {
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

void rtalloc(struct route *ro) {
    if (ro->ro_rt != NULL && ro->ro_rt->rt_ifp != NULL && (ro->ro_rt->rt_flags & RTF_UP)) {
        return;
    }
    ro->ro_rt = func_0000BA10(&ro->ro_dst, 1);
}

void rtfree(struct rtentry *rt) {
    struct ifaddr *ifa;

    rt->rt_refcnt--;
    if (rt->rt_refcnt <= 0 && (rt->rt_flags & RTF_UP) == 0) {
        rttrash--;
        if (rt->rt_refcnt < 0) {
            return;
        }
        rt_timer_remove_all(rt);
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

void rt_xaddrs(u8 *cp, u8 *cplim, struct rt_addrinfo *rtinfo) {
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

s32 raw_attach(struct socket *so, s32 proto) {
    struct rawcb *rp = (struct rawcb *)so->so_pcb;
    s32 error;

    if (rp == NULL) {
        return 105; /* ENOBUFS */
    }
    if ((error = soreserve(so, raw_sendspace, raw_recvspace)) != 0) {
        return error;
    }
    rp->rcb_socket = so;
    rp->rcb_proto.sp_family = so->so_proto->pr_domain->dom_family;
    rp->rcb_proto.sp_protocol = proto;
    if ((rp->rcb_list.le_next = rawcb.lh_first) != NULL) {
        rawcb.lh_first->rcb_list.le_prev = &rp->rcb_list.le_next;
    }
    rawcb.lh_first = rp;
    rp->rcb_list.le_prev = &rawcb.lh_first;
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
    sofree((s32) temp_a0);
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
        sofree((s32) temp_v1);
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
    sofree((s32) temp_a0);
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
        sofree((s32) temp_v1);
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
    rawcb.lh_first = NULL;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_0000F204);
#endif

#if FW_VERSION < 201
s32 func_0000F204(void) {
    return 0;
}

void raw_setsockaddr(struct rawcb *rp, struct mbuf *nam) {
    nam->m_len = rp->rcb_laddr->sa_len;
    func_0002C9B8(rp->rcb_laddr, mtod(nam, u8 *), nam->m_len);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", raw_setsockaddr);
#endif

#if FW_VERSION < 201
void raw_setpeeraddr(struct rawcb *rp, struct mbuf *nam) {
    nam->m_len = rp->rcb_faddr->sa_len;
    func_0002C9B8(rp->rcb_faddr, mtod(nam, u8 *), nam->m_len);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", raw_setpeeraddr);
#endif

#if FW_VERSION >= 282
void func_0000F268(void) {
    rawcb.lh_first = NULL;
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

s32 loioctl(struct ifnet *ifp, u32 cmd, void *data) {
    s32 error = 0;
    switch (cmd) {
    case 0x8020690C: /* SIOCSIFADDR */
        ifp->if_flags |= 1; /* IFF_UP */
        if (data != NULL) {
            ((struct ifaddr *)data)->ifa_rtrequest = lortrequest;
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
void loopattach(void) {
    struct ifnet *ifp = &loif;

    func_0002CCAC(ifp->if_xname, "lo%d", 0);
    ifp->if_softc = NULL; //P
    ifp->if_mtu = 0x81BC; //P
    ifp->if_flags = IFF_LOOPBACK | IFF_MULTICAST; //P
    ifp->if_ioctl = loioctl; //P
    ifp->if_output = func_0000F2D4; //P
    ifp->if_type = IFT_LOOP; //P
    ifp->if_hdrlen = 0; //P
    ifp->if_addrlen = 0; //P
    _sce_pspnet_if_attach(ifp);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", loopattach);
#endif

void lortrequest(s32 cmd, struct rtentry *rt) {
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

void arp_drain(void) {
    struct llinfo_arp *la, *nla;
    struct mbuf *mold;

    if (arp_lock_try() == 0)
        return;
    for (la = llinfo_arp_head.lh_first; la != 0; la = nla) {
        nla = la->la_list.le_next;
        mold = la->la_hold;
        la->la_hold = 0;
        if (mold)
            sceNetMFreem(mold);
    }
    arp_unlock();
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000106E0);
#endif

#if FW_VERSION < 201
s32 func_000106E0(void) {
    return 0x5F;
}
#endif

#if FW_VERSION < 282
void arp_ifinit(struct ifnet *ifp, struct ifaddr *ifa) {
    struct in_addr *ip;

    ip = &((struct in_ifaddr *)ifa)->ia_addr.sin_addr;
    if (ip->s_addr != __builtin_allegrex_wsbw(0)) {
        func_0000FA70(ifp, ip, ip, LLADDR(ifp->if_sadl));
    }
    ifa->ifa_rtrequest = func_0000F730;
    ifa->ifa_flags |= RTF_CLONING;
}
#else
s32 func_00010700(void) {
    return 0x5F;
}

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010708);
#endif

#if FW_VERSION < 250
void arpintr(struct mbuf *m) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet", arpintr);
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
    arp_locked = 0;
    D_0002EB88 = 0;
    D_0002BF8C.ifq_head = NULL;
    llinfo_arp_head.lh_first = 0;
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
INCLUDE_ASM("nonmatchings/pspnet_inet", in_control);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010B84);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_00010C08);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", in_purgeaddr);

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

#if FW_VERSION >= 151 && FW_VERSION < 201
struct in_multi *func_00012108(struct in_addr *ap, struct ifnet *ifp) {
    struct in_multi *inm;
    struct ifreq ifr;
    struct in_ifaddr *ia;
    s32 s = _sce_pspnet_spllock();

    IFP_TO_IA(ifp, ia);
    if (ia == NULL)
        inm = NULL;
    else {
        for (inm = ia->ia_multiaddrs.lh_first; inm != NULL && inm->inm_addr.s_addr != ap->s_addr; inm = inm->inm_list.le_next)
            continue;
    }
    if (inm != NULL) {
        ++inm->inm_refcount;
    } else {
        inm = (struct in_multi *)sceNetMallocInternal(sizeof(*inm));
        if (inm == NULL) {
            _sce_pspnet_splunlock(s);
            return (NULL);
        }
        inm->inm_addr = *ap;
        inm->inm_ifp = ifp;
        inm->inm_refcount = 1;
        IFP_TO_IA(ifp, ia);
        if (ia == NULL) {
            sceNetFreeInternal(inm);
            _sce_pspnet_splunlock(s);
            return (NULL);
        }
        inm->inm_ia = ia;
        inm->inm_ia->ia_ifa.ifa_refcnt++;
        LIST_INSERT_HEAD(&ia->ia_multiaddrs, inm, inm_list);
        ((struct sockaddr_in *)&ifr.ifr_addr)->sin_len = sizeof(struct sockaddr_in);
        ((struct sockaddr_in *)&ifr.ifr_addr)->sin_family = AF_INET;
        ((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr = *ap;
        if ((ifp->if_ioctl == NULL) ||
            (*ifp->if_ioctl)(ifp, 0x80206931, (void *)&ifr) != 0) {
            LIST_REMOVE(inm, inm_list);
            sceNetFreeInternal(inm);
            _sce_pspnet_splunlock(s);
            return (NULL);
        }
        igmp_joingroup(inm);
    }
    _sce_pspnet_splunlock(s);
    return (inm);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012108);
#endif

#if FW_VERSION < 151
struct in_multi *in_addmulti(struct in_addr *ap, struct ifnet *ifp) {
    struct in_multi *inm;
    struct ifreq ifr;
    struct in_ifaddr *ia;
    s32 s = _sce_pspnet_spllock();

    IFP_TO_IA(ifp, ia);
    if (ia == NULL)
        inm = NULL;
    else {
        for (inm = ia->ia_multiaddrs.lh_first; inm != NULL && inm->inm_addr.s_addr != ap->s_addr; inm = inm->inm_list.le_next)
            continue;
    }
    if (inm != NULL) {
        ++inm->inm_refcount;
    } else {
        inm = (struct in_multi *)sceNetMallocInternal(sizeof(*inm));
        if (inm == NULL) {
            _sce_pspnet_splunlock(s);
            return (NULL);
        }
        inm->inm_addr = *ap;
        inm->inm_ifp = ifp;
        inm->inm_refcount = 1;
        IFP_TO_IA(ifp, ia);
        if (ia == NULL) {
            sceNetFreeInternal(inm);
            _sce_pspnet_splunlock(s);
            return (NULL);
        }
        inm->inm_ia = ia;
        inm->inm_ia->ia_ifa.ifa_refcnt++;
        LIST_INSERT_HEAD(&ia->ia_multiaddrs, inm, inm_list);
        ((struct sockaddr_in *)&ifr.ifr_addr)->sin_len = sizeof(struct sockaddr_in);
        ((struct sockaddr_in *)&ifr.ifr_addr)->sin_family = AF_INET;
        ((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr = *ap;
        if ((ifp->if_ioctl == NULL) ||
            (*ifp->if_ioctl)(ifp, 0x80206931, (void *)&ifr) != 0) {
            LIST_REMOVE(inm, inm_list);
            sceNetFreeInternal(inm);
            _sce_pspnet_splunlock(s);
            return (NULL);
        }
        igmp_joingroup(inm);
    }
    _sce_pspnet_splunlock(s);
    return (inm);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012478);
#endif

#if FW_VERSION < 201
void in_delmulti(struct in_multi *inm) {
    struct ifreq ifr;
    s32 s = _sce_pspnet_spllock();

    if (--inm->inm_refcount == 0) {
        igmp_leavegroup(inm);
        LIST_REMOVE(inm, inm_list);
        if (--inm->inm_ia->ia_ifa.ifa_refcnt == 0)
            _sce_pspnet_ifafree(&inm->inm_ia->ia_ifa);
        ((struct sockaddr_in *)&ifr.ifr_addr)->sin_family = AF_INET;
        ((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr = inm->inm_addr;
        (*inm->inm_ifp->if_ioctl)(inm->inm_ifp, 0x80206932, (void *)&ifr);
        sceNetFreeInternal(inm);
    }
    _sce_pspnet_splunlock(s);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", in_delmulti);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
s32 func_000123FC(struct in_addr in) {
    struct in_ifaddr *ia;

    if (D_0002C01C) {
        for (ia = in_ifaddrhead.tqh_first; ia != 0; ia = ia->ia_list.tqe_next) {
            if ((in.s_addr & ia->ia_netmask) == ia->ia_net) {
                return 1;
            }
        }
    } else {
        for (ia = in_ifaddrhead.tqh_first; ia != 0; ia = ia->ia_list.tqe_next) {
            if ((in.s_addr & ia->ia_subnetmask) == ia->ia_subnet) {
                return 1;
            }
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_00012490(struct in_addr in) {
    u32 net;

    if (((in.s_addr & __builtin_allegrex_wsbw(0xF0000000)) == __builtin_allegrex_wsbw(0xF0000000)) || IN_MULTICAST(in.s_addr)) {
        return 0;
    }
    if ((in.s_addr & __builtin_allegrex_wsbw(0x80000000)) == __builtin_allegrex_wsbw(0)) {
        net = in.s_addr & __builtin_allegrex_wsbw(0xFF000000);
        if (net == 0 || net == __builtin_allegrex_wsbw(127 << 24)) {
            return 0;
        }
    }
    return 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012490);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
#if FW_VERSION < 201

void in_socktrim(struct sockaddr_in *ap) {
    char *cplim = (char *)&ap->sin_addr;
    char *cp = (char *)(&ap->sin_addr + 1);

    ap->sin_len = 0;
    while (--cp >= cplim)
        if (*cp) {
            (ap)->sin_len = cp - (char *)(ap) + 1;
            break;
        }
}

#endif
#endif

#if FW_VERSION < 151
s32 in_localaddr(struct in_addr in) {
    struct in_ifaddr *ia;

    if (D_0002C01C) {
        for (ia = in_ifaddrhead.tqh_first; ia != 0; ia = ia->ia_list.tqe_next) {
            if ((in.s_addr & ia->ia_netmask) == ia->ia_net) {
                return 1;
            }
        }
    } else {
        for (ia = in_ifaddrhead.tqh_first; ia != 0; ia = ia->ia_list.tqe_next) {
            if ((in.s_addr & ia->ia_subnetmask) == ia->ia_subnet) {
                return 1;
            }
        }
    }
    return 0;
}

s32 in_canforward(struct in_addr in) {
    u32 net;

    if (((in.s_addr & __builtin_allegrex_wsbw(0xF0000000)) == __builtin_allegrex_wsbw(0xF0000000)) || IN_MULTICAST(in.s_addr)) {
        return 0;
    }
    if ((in.s_addr & __builtin_allegrex_wsbw(0x80000000)) == __builtin_allegrex_wsbw(0)) {
        net = in.s_addr & __builtin_allegrex_wsbw(0xFF000000);
        if (net == 0 || net == __builtin_allegrex_wsbw(127 << 24)) {
            return 0;
        }
    }
    return 1;
}

void in_socktrim(struct sockaddr_in *ap) {
    char *cplim = (char *)&ap->sin_addr;
    char *cp = (char *)(&ap->sin_addr + 1);

    ap->sin_len = 0;
    while (--cp >= cplim)
        if (*cp) {
            (ap)->sin_len = cp - (char *)(ap) + 1;
            break;
        }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012758);

INCLUDE_ASM("nonmatchings/pspnet_inet", func_000127EC);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_inet", D_0002B754);

#if FW_VERSION >= 151 && FW_VERSION < 201
char *func_00012550(struct in_addr ina) {
    ina.s_addr = __builtin_allegrex_wsbw(ina.s_addr);
    func_0002CCAC(D_0002CDB0, "%d.%d.%d.%d", ina.s_addr >> 24, (ina.s_addr >> 16) & 0xff,
                  (ina.s_addr >> 8) & 0xff, ina.s_addr & 0xff);
    return D_0002CDB0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012550);
#endif

#if FW_VERSION < 151
char *inet_ntoa(struct in_addr ina) {
    ina.s_addr = __builtin_allegrex_wsbw(ina.s_addr);
    func_0002CCAC(D_0002EBB0, "%d.%d.%d.%d", ina.s_addr >> 24, (ina.s_addr >> 16) & 0xff,
                  (ina.s_addr >> 8) & 0xff, ina.s_addr & 0xff);
    return D_0002EBB0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000128AC);
#endif

void in_setmaxmtu(void) {
    struct in_ifaddr *ia;
    struct ifnet *ifp;
    u32 maxmtu = 0;

    for (ia = in_ifaddrhead.tqh_first; ia != NULL; ia = ia->ia_list.tqe_next) {
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
        in_maxmtu = maxmtu;
    }
}

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012A08);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_000129AC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet", in_purgeif);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012730);
#endif

#if FW_VERSION < 151
s32 in_broadcast(struct in_addr in, struct ifnet *ifp) {
    struct ifaddr *ifa;

    if (in.s_addr == __builtin_allegrex_wsbw(0xFFFFFFFF) ||
        in.s_addr == __builtin_allegrex_wsbw(0))
        return 1;
    if ((ifp->if_flags & 0x2) == 0)
        return 0;
#define ia ((struct in_ifaddr *)ifa)
    for (ifa = ifp->if_addrlist.tqh_first; ifa; ifa = ifa->ifa_list.tqe_next)
        if (ifa->ifa_addr->sa_family == AF_INET &&
            in.s_addr != ia->ia_addr.sin_addr.s_addr &&
            (in.s_addr == ia->ia_broadaddr.sin_addr.s_addr ||
             in.s_addr == ia->ia_netbroadcast.s_addr ||
             (D_0002C020 &&
              (in.s_addr == ia->ia_subnet ||
               in.s_addr == ia->ia_net))))
            return 1;
    return 0;
#undef ia
}

void in_purgemkludge(struct ifnet *ifp) {
    struct in_ifaddr *ia;

    for (ia = in_mk.tqh_first; ia != NULL; ia = ia->ia_list.tqe_next) {
        if (ia->ia_ifp != ifp)
            continue;
        if (ia->ia_list.tqe_next != NULL)
            ia->ia_list.tqe_next->ia_list.tqe_prev = ia->ia_list.tqe_prev;
        else
            in_mk.tqh_last = ia->ia_list.tqe_prev;
        *ia->ia_list.tqe_prev = ia->ia_list.tqe_next;
        if (--ia->ia_ifa.ifa_refcnt == 0)
            _sce_pspnet_ifafree(&ia->ia_ifa);
        break;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet", func_00012B9C);
#endif
