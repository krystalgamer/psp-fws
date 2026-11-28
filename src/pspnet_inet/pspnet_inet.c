/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
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
    somaxconn = 0x80;
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
#endif

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
        return rtioctl(cmd, data);
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
    sceNetMemset(so, 0, sizeof(*so));
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

void sbinsertoob(struct sockbuf *sb, struct mbuf *m0) {
    struct mbuf *m, **mp;

    if (m0 == NULL) {
        return;
    }
    for (mp = &sb->sb_mb; (m = *mp) != NULL; mp = &((*mp)->m_nextpkt)) {
    again:
        switch (m->m_type) {
        case MT_OOBDATA:
            continue;
        case MT_CONTROL:
            if ((m = m->m_next) != NULL) {
                goto again;
            }
        }
        break;
    }
    sballoc(sb, m0);
    m0->m_nextpkt = *mp;
    *mp = m0;
    m = m0->m_next;
    m0->m_next = NULL;
    if (m && (m0->m_flags & M_EOR)) {
        m0->m_flags &= ~M_EOR;
        m->m_flags |= M_EOR;
    }
    sbcompress(sb, m, m0);
}

INCLUDE_ASM("nonmatchings/pspnet_inet", sbappendaddr);

INCLUDE_ASM("nonmatchings/pspnet_inet", sbcompress);

void sbflush(struct sockbuf *sb) {
    while (sb->sb_mbcnt != 0) {
        sbdrop(sb, sb->sb_cc);
    }
}

#if FW_VERSION < 201
void sbdrop(struct sockbuf *sb, s32 len) {
    struct mbuf *m, *mn;
    struct mbuf *next;

    next = (m = sb->sb_mb) ? m->m_nextpkt : 0;
    while (len > 0) {
        if (m == 0) {
            m = next;
            next = m->m_nextpkt;
            continue;
        }
        if (m->m_len > len) {
            m->m_len -= len;
            m->m_data += len;
            sb->sb_cc -= len;
            break;
        }
        len -= m->m_len;
        sbfree(sb, m);
        MFREE(m, mn);
        m = mn;
    }
    while (m && m->m_len == 0) {
        sbfree(sb, m);
        MFREE(m, mn);
        m = mn;
    }
    if (m) {
        sb->sb_mb = m;
        m->m_nextpkt = next;
    } else {
        sb->sb_mb = next;
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sbdrop);
#endif

void sbdroprecord(struct sockbuf *sb) {
    struct mbuf *m, *mn;

    m = sb->sb_mb;
    if (m) {
        sb->sb_mb = m->m_nextpkt;
        do {
            sbfree(sb, m);
            MFREE(m, mn);
        } while ((m = mn) != NULL);
    }
}

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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
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
    sceNetMemcpy(CMSG_DATA(cp), p, size);
    m->m_len = CMSG_SPACE(size);
    cp->cmsg_len = CMSG_LEN(size);
    cp->cmsg_level = level;
    cp->cmsg_type = type;
    return m;
}
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION < 282
void soisconnecting(struct socket *so) {
    so->so_state &= ~(SS_ISCONNECTED | SS_ISDISCONNECTING);
    so->so_state |= SS_ISCONNECTING;
}
#else
void func_00005778(struct socket *so) {
    so->so_state &= ~(SS_ISCONNECTED | SS_ISDISCONNECTING);
    so->so_state |= SS_ISCONNECTING;
}
#endif

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

#if FW_VERSION < 282
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

#if FW_VERSION < 201
__inline void sbappendrecord(struct sockbuf *sb, struct mbuf *m0) {
    struct mbuf *m;

    if (m0 == 0)
        return;
    m = sb->sb_mb;
    if (m)
        while (m->m_nextpkt)
            m = m->m_nextpkt;
    sballoc(sb, m0);
    if (m)
        m->m_nextpkt = m0;
    else
        sb->sb_mb = m0;
    m = m0->m_next;
    m0->m_next = 0;
    if (m && (m0->m_flags & M_EOR)) {
        m0->m_flags &= ~M_EOR;
        m->m_flags |= M_EOR;
    }
    sbcompress(sb, m, m0);
}

void sbappend(struct sockbuf *sb, struct mbuf *m) {
    struct mbuf *n;

    if (m == 0)
        return;
    if ((n = sb->sb_mb) != NULL) {
        while (n->m_nextpkt)
            n = n->m_nextpkt;
        do {
            if (n->m_flags & M_EOR) {
                sbappendrecord(sb, m);
                return;
            }
        } while (n->m_next && (n = n->m_next));
    }
    sbcompress(sb, m, n);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet", sbappend);

#if FW_VERSION < 271

INCLUDE_ASM("nonmatchings/pspnet_inet", sbappendrecord);

#endif
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sce_alignbytes(void) {
    return 3;
}
#endif
