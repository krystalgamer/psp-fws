/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00023C74);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000223CC);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00022450);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000225DC);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_template);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00022714);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000228BC);

#if FW_VERSION < 201
struct tcpcb *tcp_newtcpcb(s32 family, void *aux) {
    struct tcpcb *tp;

    switch (family) {
    case AF_INET:
        break;
    default:
        return NULL;
    }
    tp = sceNetMallocInternal(sizeof(struct tcpcb));
    if (tp == NULL) {
        return NULL;
    }
    func_0002C94C(tp, 0, sizeof(struct tcpcb));
    tp->segq = NULL;
    tp->timeq = NULL;
    tp->t_family = family;
    tp->t_peermss = D_0002E8F8;
    tp->t_ourmss = D_0002E8F8;
    tp->t_segsz = D_0002E8F8;
    tp->t_sc = NULL;
    tp->t_flags = 0;
    if (D_0002E900 && D_0002E908) {
        tp->t_flags |= 0x20; /* TF_REQ_SCALE */
    }
    if (D_0002E900 && D_0002E90C) {
        tp->t_flags |= 0x80; /* TF_REQ_TSTMP */
    }
    if (D_0002E904 == 2) {
        tp->t_flags |= 0x800; /* TF_WILL_SACK */
    } else if (D_0002E904 == 1) {
        tp->t_flags |= 0x800 | 0x2000; /* TF_WILL_SACK | TF_IGNR_RXSACK */
    }
    tp->t_flags |= 0x1000; /* TF_CANT_TXSACK */
    switch (family) {
    case AF_INET:
        tp->t_inpcb = (struct inpcb *)aux;
        tp->t_mtudisc = D_0002E7BC;
        break;
    }
    tp->t_srtt = 0;
    tp->t_rttvar = D_0002E8FC * 2 << (2 + 2 - 1);
    tp->t_rttmin = 2;
    tp->t_rxtcur = ((tp->t_srtt >> 3) + tp->t_rttvar) >> 2;
    if (tp->t_rxtcur < 2) {
        tp->t_rxtcur = 2;
    } else if (tp->t_rxtcur > 128) {
        tp->t_rxtcur = 128;
    }
    tp->snd_cwnd = 65535 << 14;
    tp->snd_ssthresh = 65535 << 14;
    if (family == AF_INET) {
        struct inpcb *inp = (struct inpcb *)aux;
        inp->inp_ip.ip_ttl = D_0002E7B0;
        inp->inp_ppcb = tp;
    }
    return tp;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_newtcpcb);
#endif

#if FW_VERSION < 151
struct tcpcb *tcp_close(struct tcpcb *tp) {
    struct inpcb *inp;
    struct socket *so;
    struct rtentry *rt;
    struct route *ro;
    s32 s;

    inp = tp->t_inpcb;
    so = NULL;
    ro = NULL;
    if (inp) {
        so = inp->inp_socket;
        ro = &inp->inp_route;
    }
    if ((s32)(tp->iss + so->so_snd.sb_hiwat * 16 - tp->snd_max) < 0 &&
        ro && (rt = ro->ro_rt) &&
        ((struct sockaddr_in *)rt->rt_nodes[0].rn_key)->sin_addr.s_addr != __builtin_allegrex_wsbw(0)) {
        u32 i = 0;

        if ((rt->rt_rmx.rmx_locks & RTV_RTT) == 0) {
            i = tp->t_srtt * ((1000000 / 2) >> (3 + 2));
            if (rt->rt_rmx.rmx_rtt && i) {
                rt->rt_rmx.rmx_rtt = (rt->rt_rmx.rmx_rtt + i) / 2;
            } else {
                rt->rt_rmx.rmx_rtt = i;
            }
        }
        if ((rt->rt_rmx.rmx_locks & RTV_RTTVAR) == 0) {
            i = tp->t_rttvar * ((1000000 / 2) >> (2 + 2));
            if (rt->rt_rmx.rmx_rttvar && i) {
                rt->rt_rmx.rmx_rttvar = (rt->rt_rmx.rmx_rttvar + i) / 2;
            } else {
                rt->rt_rmx.rmx_rttvar = i;
            }
        }
        if (((rt->rt_rmx.rmx_locks & RTV_SSTHRESH) == 0 &&
             (i = tp->snd_ssthresh) && rt->rt_rmx.rmx_ssthresh) ||
            i < (rt->rt_rmx.rmx_sendpipe / 2)) {
            i = (i + tp->t_segsz / 2) / tp->t_segsz;
            if (i < 2) {
                i = 2;
            }
            i *= (u32)(tp->t_segsz + 0x28 /* sizeof(struct tcpiphdr) */);
            if (rt->rt_rmx.rmx_ssthresh) {
                rt->rt_rmx.rmx_ssthresh = (rt->rt_rmx.rmx_ssthresh + i) / 2;
            } else {
                rt->rt_rmx.rmx_ssthresh = i;
            }
        }
    }
    s = _sce_pspnet_spllock();
    if ((tp->t_flags & 0x4000) == 0) { /* TF_REASSEMBLING */
        tp->t_flags |= 0x4000;
    }
    _sce_pspnet_splunlock(s);
    (void)tcp_freeq(tp);
    s = _sce_pspnet_spllock();
    tp->t_flags &= ~0x4000;
    _sce_pspnet_splunlock(s);
    if (tp->t_flags & 0x2) { /* TF_DELACK */
        tp->t_flags &= ~0x2;
        LIST_REMOVE(tp, t_delack);
    }
    syn_cache_cleanup(tp);
    if (tp->t_template) {
        sceNetMFree(tp->t_template);
        tp->t_template = NULL;
    }
    sceNetFreeInternal(tp);
    if (inp) {
        inp->inp_ppcb = NULL;
        soisdisconnected(so);
        in_pcbdetach(inp);
    }
    tcp_stat.tcps_closed++;
    return NULL;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_close);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_freeq);
#endif

#if FW_VERSION < 201
s32 tcp_freeq(struct tcpcb *tp) {
    struct ipqent *qe;
    s32 rv = 0;

    while ((qe = tp->segq) != NULL) {
        LIST_REMOVE(qe, ipqe_q);
        LIST_REMOVE(qe, ipqe_timeq);
        sceNetMFreem(qe->ipqe_m);
        sceNetFreeInternal(qe);
        rv = 1;
    }
    return rv;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00022F68);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_mss_from_peer);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00024C00);
#endif

#if FW_VERSION < 250
void tcp_mss_from_peer(struct tcpcb *tp, s32 offer) {
    struct socket *so;
    struct rtentry *rt;
    u32 bufsize;
    s32 mss;

    so = NULL;
    rt = NULL;
    if (tp->t_inpcb) {
        so = tp->t_inpcb->inp_socket;
        rt = in_pcbrtentry(tp->t_inpcb);
    }
    mss = D_0002E8F8;
    if (offer) {
        mss = offer;
    }
    mss = max(mss, 32);
    tp->t_peermss = mss;
    mss -= tcp_optlen(tp);
    if (tp->t_inpcb) {
        mss -= ip_optlen(tp->t_inpcb);
    }
    if (rt != NULL && rt->rt_rmx.rmx_sendpipe != 0) {
        bufsize = rt->rt_rmx.rmx_sendpipe;
    } else {
        bufsize = so->so_snd.sb_hiwat;
    }
    if (bufsize < mss) {
        mss = bufsize;
    } else {
        bufsize = roundup(bufsize, mss);
        if (bufsize > 0x40000) {
            bufsize = 0x40000;
        }
        (void)sbreserve(&so->so_snd, bufsize);
    }
    tp->t_segsz = mss;
    if (rt != NULL && rt->rt_rmx.rmx_ssthresh) {
        tp->snd_ssthresh = max(2 * mss, rt->rt_rmx.rmx_ssthresh);
    }
}
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

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00023344);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000235D0);
#endif

void tcp_rmx_rtt(struct tcpcb *tp) {
    struct rtentry *rt = NULL;
    s32 rtt;

    if (tp->t_inpcb) {
        rt = in_pcbrtentry(tp->t_inpcb);
    }
    if (rt == NULL) {
        return;
    }
    if (tp->t_srtt == 0 && (rtt = rt->rt_rmx.rmx_rtt)) {
        if (rt->rt_rmx.rmx_locks & RTV_RTT) {
            TCPT_RANGESET(tp->t_rttmin, rtt / (1000000 / 2), 2, 128);
        }
        tp->t_srtt = rtt / ((1000000 / 2) >> (3 + 2));
        if (rt->rt_rmx.rmx_rttvar) {
            tp->t_rttvar = rt->rt_rmx.rmx_rttvar / ((1000000 / 2) >> (2 + 2));
        } else {
            tp->t_rttvar = tp->t_srtt >> (3 - 2);
        }
        TCPT_RANGESET(tp->t_rxtcur, ((tp->t_srtt >> 2) + tp->t_rttvar) >> (1 + 2), tp->t_rttmin, 128);
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_optlen);
#endif

#if FW_VERSION < 151
s32 tcp_optlen(void *arg0) {
    return -((M2C_FIELD(arg0, u16 *, 0x28) & 0x188) == 0x180) & 0xC;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 tcp_optlen(void *arg0) {
    return (((M2C_FIELD(arg0, u16 *, 0x28) & 0x188) ^ 0x180) != 0) ? 0 : 0xC;
}
#endif

#if FW_VERSION >= 282
s32 func_00023828(struct Unk_func_00023828_0 *arg0) {
    return (((arg0->unk2A & 0x188) ^ 0x180) != 0) ? 0 : 0xC;
}
#else
struct tcpcb *tcp_drop(struct tcpcb *tp, s32 errno) {
    struct socket *so;

    if (tp->t_inpcb) {
        so = tp->t_inpcb->inp_socket;
    } else {
        return NULL;
    }
    if (TCPS_HAVERCVDSYN(tp->t_state)) {
        tp->t_state = TCPS_CLOSED;
        (void)tcp_output(tp);
        tcp_stat.tcps_drops++;
    } else {
        tcp_stat.tcps_conndrops++;
    }
    if (errno == 116 /* ETIMEDOUT */ && tp->t_softerror) {
        errno = tp->t_softerror;
    }
    so->so_error = errno;
    return tcp_close(tp);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_drop);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_drain);

void tcp_notify(struct inpcb *inp, s32 error) {
    struct tcpcb *tp = (struct tcpcb *)inp->inp_ppcb;
    struct socket *so = inp->inp_socket;

    if (tp->t_state == TCPS_ESTABLISHED &&
        (error == 118 /* EHOSTUNREACH */ || error == 114 /* ENETUNREACH */ || error == 117 /* EHOSTDOWN */)) {
        return;
    } else if (TCPS_HAVEESTABLISHED(tp->t_state) == 0 && tp->t_rxtshift > 3 && tp->t_softerror) {
        so->so_error = error;
    } else {
        tp->t_softerror = error;
    }
    _sce_pspnet_wakeup(&so->so_timeo);
    sorwakeup(so);
    sowwakeup(so);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002544C);
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

#if FW_VERSION < 282
void tcp_mtudisc_callback(struct in_addr addr) {
    in_pcbnotifyall(&tcbtable, addr, 0x7A, tcp_mtudisc);
}

void tcp_mtudisc(struct inpcb *inp, s32 errno) {
    struct tcpcb *tp = (struct tcpcb *)inp->inp_ppcb;
    struct rtentry *rt = in_pcbrtentry(inp);

    if (tp != 0) {
        if (rt != 0) {
            if ((rt->rt_flags & RTF_HOST) == 0) {
                in_rtchange(inp, errno);
                if ((rt = in_pcbrtentry(inp)) == 0) {
                    return;
                }
            }
            if (rt->rt_rmx.rmx_mtu != 0) {
                tp->snd_cwnd = TCP_INITIAL_WINDOW(D_0002E910, rt->rt_rmx.rmx_mtu);
            }
        }
        tp->snd_nxt = tp->snd_una;
        tcp_output(tp);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00023CD0);
#endif

#if FW_VERSION < 250
u32 tcp_mss_to_advertise(struct ifnet *ifp, s32 af) {
    u32 mss = 0;
    u32 hdrsiz;

    if (ifp != NULL)
        mss = ifp->if_mtu;
    if (tcp_mss_ifmtu == 0)
        mss = max(in_maxmtu, mss);
    switch (af) {
    case AF_INET:
        hdrsiz = sizeof(struct ip);
        break;
    default:
        hdrsiz = 0;
        break;
    }
    hdrsiz += sizeof(struct tcphdr);
    if (mss > hdrsiz)
        mss -= hdrsiz;
    mss = max((u32)D_0002E8F8, mss);
    return (mss);
}
#endif

#if FW_VERSION >= 282
void func_00023AB8(struct Unk_func_00023AB8_0 *arg0) {
    struct Unk_func_00023AB8_temp_v1 *temp_v1;

    temp_v1 = arg0->unk10;
    if (temp_v1 != NULL) {
        temp_v1->unk78 = (s32) temp_v1->unk26;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00023AD4);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_mtudisc);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00023BD8);
#else
void tcp_established(struct tcpcb *tp) {
    struct socket *so;
    struct rtentry *rt;
    u32 bufsize;

    so = NULL;
    rt = NULL;
    if (tp->t_inpcb) {
        so = tp->t_inpcb->inp_socket;
        rt = in_pcbrtentry(tp->t_inpcb);
    }
    tp->t_state = TCPS_ESTABLISHED;
    tp->t_timer[TCPT_KEEP] = pfslowtimo_now + D_0002E918;
    if (rt != NULL && rt->rt_rmx.rmx_recvpipe != 0) {
        bufsize = rt->rt_rmx.rmx_recvpipe;
    } else {
        bufsize = so->so_rcv.sb_hiwat;
    }
    if (bufsize > tp->t_ourmss) {
        bufsize = roundup(bufsize, tp->t_ourmss);
        if (bufsize > 0x40000) {
            bufsize = 0x40000;
        }
        (void)sbreserve(&so->so_rcv, bufsize);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_established);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00023D1C);
#else
u32 tcp_new_iss(struct tcpcb *tp, u32 len, u32 addin) {
    u32 tcp_iss;

    tcp_iss = sceNetRand();
    if (addin != 0) {
        tcp_iss &= 0xFFFFFF;
        tcp_iss += addin + 0x1000000;
    } else {
        tcp_iss &= 0xFFFFFF;
        tcp_iss += tcp_iss_seq;
        tcp_iss_seq += 0x1000000;
    }
    if (tcp_compat_42) {
        if (tcp_iss >= 0x80000000) {
            tcp_iss &= 0x7FFFFFFF;
        }
    }
    return tcp_iss;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00023D98);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_timers);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00023F70);
#endif

#if FW_VERSION < 250
void tcp_fasttimo(void) {
    s32 s = _sce_pspnet_spllock();
    struct tcpcb *tp, *next;
    for (tp = tcp_delacks; tp != NULL; tp = next) {
        next = tp->t_delack.le_next;
        tp->t_flags |= 0x1; /* TF_ACKNOW */
        tcp_output(tp);
    }
    _sce_pspnet_splunlock(s);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_fasttimo);
#endif

void tcp_canceltimers(u8 *arg0) {
    s32 i;
    u32 *p = (u32 *)(arg0 + 8);
    for (i = 3; i >= 0; i--) {
        *p++ = 0;
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00025E94);
#endif

#if FW_VERSION < 201
void func_00025E94(void) {
    D_0002E918 = 0x3840;
    D_0002E95C = 0x1FF;
    D_0002C35C = 0x96;
    D_0002C360 = 8;
    D_0002E924 = 0x3840;
    tcp_maxidle = 0;
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
    tcp_maxidle = 0;
    D_0002C5D8 = 0;
}
#endif

#if FW_VERSION < 151
s32 tcp_usrreq(struct socket *so, s32 req, struct mbuf *m, struct mbuf *nam, struct mbuf *control) {
    struct inpcb *inp;
    struct tcpcb *tp = NULL;
    s32 s;
    s32 error = 0;
    s32 family;

    family = so->so_proto->pr_domain->dom_family;
    if (req == 11) {
        switch (family) {
        case AF_INET:
            return (in_control(so, (s32)m, (void *)nam, (struct ifnet *)control));
        default:
            return 0x6A;
        }
    }
    if (req == 22) {
        switch (family) {
        case AF_INET:
            in_purgeif((struct ifnet *)control);
            in_pcbpurgeif(&tcbtable, (struct ifnet *)control);
            break;
        default:
            return (0x6A);
        }
        return (0);
    }
    s = _sce_pspnet_spllock();
    switch (family) {
    case AF_INET:
        inp = (struct inpcb *)so->so_pcb;
        break;
    default:
        _sce_pspnet_splunlock(s);
        return 0x6A;
    }
    if (inp == 0 && req != 0) {
        error = 0x16;
        goto release;
    }
    if (inp)
        tp = (struct tcpcb *)inp->inp_ppcb;

    switch (req) {
    case 0:
        if (inp != 0) {
            error = 0x7F;
            break;
        }
        error = tcp_attach(so);
        if (error)
            break;
        if ((so->so_options & 0x80) && so->so_linger == 0)
            so->so_linger = 120;
        break;
    case 1:
        tp = tcp_disconnect(tp);
        break;
    case 2:
        switch (family) {
        case AF_INET:
            error = in_pcbbind(inp, nam);
            break;
        }
        break;
    case 3:
        if (inp && inp->inp_lport == 0) {
            error = in_pcbbind(inp, (struct mbuf *)0);
            if (error)
                break;
        }
        tp->t_state = 1;
        break;
    case 4:
        if (inp) {
            if (inp->inp_lport == 0) {
                error = in_pcbbind(inp, (struct mbuf *)0);
                if (error)
                    break;
            }
            error = in_pcbconnect(inp, nam);
        }
        if (error)
            break;
        tp->t_template = tcp_template(tp);
        if (tp->t_template == 0) {
            if (inp)
                in_pcbdisconnect(inp);
            error = 0x69;
            break;
        }
        while (tp->request_r_scale < 14 &&
               (0xFFFF << tp->request_r_scale) < so->so_rcv.sb_hiwat)
            tp->request_r_scale++;
        soisconnecting(so);
        tcp_stat.tcps_connattempt++;
        tp->t_state = 2;
        tp->t_timer[2] = pfslowtimo_now + 150;
        tp->iss = tcp_new_iss(tp, sizeof(struct tcpcb), 0);
        tp->snd_una = tp->snd_nxt = tp->snd_max = tp->snd_up = tp->snd_recover = tp->iss;
        error = tcp_output(tp);
        break;
    case 17:
        error = 0x5F;
        break;
    case 6:
        tp = tcp_disconnect(tp);
        break;
    case 5:
        if (inp)
            in_setpeeraddr(inp, nam);
        break;
    case 7:
        socantsendmore(so);
        tp = tcp_usrclosed(tp);
        if (tp)
            error = tcp_output(tp);
        break;
    case 8:
        (void)tcp_output(tp);
        break;
    case 9:
        if (control && control->m_len) {
            sceNetMFreem(control);
            sceNetMFreem(m);
            error = 0x16;
            break;
        }
        sbappend(&so->so_snd, m);
        error = tcp_output(tp);
        break;
    case 10:
        tp = tcp_drop(tp, 0x71);
        break;
    case 12:
        _sce_pspnet_splunlock(s);
        return (0);
    case 13:
        if (control && control->m_len) {
            sceNetMFreem(control);
            sceNetMFreem(m);
            error = 0x16;
            break;
        }
        if ((so->so_oobmark == 0 &&
             (so->so_state & SS_RCVATMARK) == 0) ||
            so->so_options & 0x100 ||
            tp->t_oobflags & 0x2) {
            error = 0x16;
            break;
        }
        if ((tp->t_oobflags & 0x1) == 0) {
            error = 0xB;
            break;
        }
        m->m_len = 1;
        *mtod(m, char *) = tp->t_iobc;
        if (((s32)nam & 0x2) == 0)
            tp->t_oobflags ^= (0x1 | 0x2);
        break;
    case 14:
        if (sbspace(&so->so_snd) < -512) {
            sceNetMFreem(m);
            error = 0x69;
            break;
        }
        sbappend(&so->so_snd, m);
        tp->snd_up = tp->snd_una + so->so_snd.sb_cc;
        tp->t_force = 1;
        error = tcp_output(tp);
        tp->t_force = 0;
        break;
    case 15:
        if (inp)
            in_setsockaddr(inp, nam);
        break;
    case 16:
        if (inp)
            in_setpeeraddr(inp, nam);
        break;
    case 19:
        tp = tcp_timers(tp, (s32)nam);
        break;
    default:
        break;
    }

release:
    _sce_pspnet_splunlock(s);
    return (error);
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 tcp_usrreq(struct socket *so, s32 req, struct mbuf *m, struct mbuf *nam, struct mbuf *control) {
    struct inpcb *inp;
    struct tcpcb *tp = NULL;
    s32 s;
    s32 error = 0;
    s32 family;

    family = so->so_proto->pr_domain->dom_family;
    if (req == 11) {
        switch (family) {
        case AF_INET:
            return (func_00010874(so, (s32)m, (void *)nam, (struct ifnet *)control));
        default:
            return 0x6A;
        }
    }
    if (req == 22) {
        switch (family) {
        case AF_INET:
            in_purgeif((struct ifnet *)control);
            in_pcbpurgeif(&tcbtable, (struct ifnet *)control);
            break;
        default:
            return (0x6A);
        }
        return (0);
    }
    s = _sce_pspnet_spllock();
    switch (family) {
    case AF_INET:
        inp = (struct inpcb *)so->so_pcb;
        break;
    default:
        _sce_pspnet_splunlock(s);
        return 0x6A;
    }
    if (inp == 0 && req != 0) {
        error = 0x16;
        goto release;
    }
    if (inp)
        tp = (struct tcpcb *)inp->inp_ppcb;

    switch (req) {
    case 0:
        if (inp != 0) {
            error = 0x7F;
            break;
        }
        error = tcp_attach(so);
        if (error)
            break;
        if ((so->so_options & 0x80) && so->so_linger == 0)
            so->so_linger = 120;
        break;
    case 1:
        tp = tcp_disconnect(tp);
        break;
    case 2:
        switch (family) {
        case AF_INET:
            error = in_pcbbind(inp, nam);
            break;
        }
        break;
    case 3:
        if (inp && inp->inp_lport == 0) {
            error = in_pcbbind(inp, (struct mbuf *)0);
            if (error)
                break;
        }
        tp->t_state = 1;
        break;
    case 4:
        if (inp) {
            if (inp->inp_lport == 0) {
                error = in_pcbbind(inp, (struct mbuf *)0);
                if (error)
                    break;
            }
            error = func_00013114(inp, nam);
        }
        if (error)
            break;
        tp->t_template = tcp_template(tp);
        if (tp->t_template == 0) {
            if (inp)
                in_pcbdisconnect(inp);
            error = 0x69;
            break;
        }
        while (tp->request_r_scale < 14 &&
               (0xFFFF << tp->request_r_scale) < so->so_rcv.sb_hiwat)
            tp->request_r_scale++;
        soisconnecting(so);
        tcp_stat.tcps_connattempt++;
        tp->t_state = 2;
        tp->t_timer[2] = pfslowtimo_now + 150;
        tp->iss = tcp_new_iss(tp, sizeof(struct tcpcb), 0);
        tp->snd_una = tp->snd_nxt = tp->snd_max = tp->snd_up = tp->snd_recover = tp->iss;
        error = tcp_output(tp);
        break;
    case 17:
        error = 0x5F;
        break;
    case 6:
        tp = tcp_disconnect(tp);
        break;
    case 5:
        if (inp)
            in_setpeeraddr(inp, nam);
        break;
    case 7:
        socantsendmore(so);
        tp = tcp_usrclosed(tp);
        if (tp)
            error = tcp_output(tp);
        break;
    case 8:
        (void)tcp_output(tp);
        break;
    case 9:
        if (control && control->m_len) {
            sceNetMFreem(control);
            sceNetMFreem(m);
            error = 0x16;
            break;
        }
        sbappend(&so->so_snd, m);
        error = tcp_output(tp);
        break;
    case 10:
        tp = tcp_drop(tp, 0x71);
        break;
    case 12:
        _sce_pspnet_splunlock(s);
        return (0);
    case 13:
        if (control && control->m_len) {
            sceNetMFreem(control);
            sceNetMFreem(m);
            error = 0x16;
            break;
        }
        if ((so->so_oobmark == 0 &&
             (so->so_state & SS_RCVATMARK) == 0) ||
            so->so_options & 0x100 ||
            tp->t_oobflags & 0x2) {
            error = 0x16;
            break;
        }
        if ((tp->t_oobflags & 0x1) == 0) {
            error = 0xB;
            break;
        }
        m->m_len = 1;
        *mtod(m, char *) = tp->t_iobc;
        if (((s32)nam & 0x2) == 0)
            tp->t_oobflags ^= (0x1 | 0x2);
        break;
    case 14:
        if (sbspace(&so->so_snd) < -512) {
            sceNetMFreem(m);
            error = 0x69;
            break;
        }
        sbappend(&so->so_snd, m);
        tp->snd_up = tp->snd_una + so->so_snd.sb_cc;
        tp->t_force = 1;
        error = tcp_output(tp);
        tp->t_force = 0;
        break;
    case 15:
        if (inp)
            in_setsockaddr(inp, nam);
        break;
    case 16:
        if (inp)
            in_setpeeraddr(inp, nam);
        break;
    case 19:
        tp = tcp_timers(tp, (s32)nam);
        break;
    default:
        break;
    }

release:
    _sce_pspnet_splunlock(s);
    return (error);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_usrreq);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00024B04);
#endif

#if FW_VERSION < 250
s32 tcp_ctloutput(s32 op, struct socket *so, s32 level, s32 optname, struct mbuf **mp) {
    s32 error = 0, s;
    struct inpcb *inp;
    struct tcpcb *tp;
    struct mbuf *m;
    s32 i;
    s32 family;

    family = so->so_proto->pr_domain->dom_family;
    s = _sce_pspnet_spllock();
    switch (family) {
    case AF_INET:
        inp = (struct inpcb *)so->so_pcb;
        break;
    default:
        _sce_pspnet_splunlock(s);
        return 0x6A;
    }
    if (inp == NULL) {
        _sce_pspnet_splunlock(s);
        if (op == 1 && *mp)
            (void)sceNetMFree(*mp);
        return (0x68);
    }
    if (level != 6) {
        switch (family) {
        case AF_INET:
            error = ip_ctloutput(op, so, level, optname, mp);
            break;
        }
        _sce_pspnet_splunlock(s);
        return (error);
    }
    if (inp)
        tp = (struct tcpcb *)inp->inp_ppcb;
    else
        tp = NULL;

    switch (op) {
    case 1:
        m = *mp;
        switch (optname) {
        case 1:
            if (m == NULL || m->m_len < sizeof(s32))
                error = 0x16;
            else if (*mtod(m, s32 *))
                tp->t_flags |= 0x4;
            else
                tp->t_flags &= ~0x4;
            break;
        case 2:
            if (m && (i = *mtod(m, s32 *)) > 0 && i <= tp->t_peermss)
                tp->t_peermss = i;
            else
                error = 0x16;
            break;
        default:
            error = 0x6D;
            break;
        }
        if (m)
            (void)sceNetMFree(m);
        break;
    case 0:
        *mp = m = sceNetMGet(0, 4);
        if (m == NULL) {
            error = 0x69;
            break;
        }
        m->m_len = sizeof(s32);
        switch (optname) {
        case 1:
            *mtod(m, s32 *) = tp->t_flags & 0x4;
            break;
        case 2:
            *mtod(m, s32 *) = tp->t_peermss;
            break;
        default:
            error = 0x6D;
            break;
        }
        break;
    }
    _sce_pspnet_splunlock(s);
    return (error);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000249FC);
#endif

#if FW_VERSION < 271
s32 tcp_attach(struct socket *so) {
    struct tcpcb *tp;
    struct inpcb *inp;
    s32 error;
    s32 family;

    family = so->so_proto->pr_domain->dom_family;
    if (so->so_snd.sb_hiwat == 0 || so->so_rcv.sb_hiwat == 0) {
        error = soreserve(so, tcp_sendspace, tcp_recvspace);
        if (error)
            return (error);
    }
    if (family != AF_INET)
        return (0x6A);
    error = in_pcballoc(so, &tcbtable);
    if (error)
        return (error);
    inp = (struct inpcb *)so->so_pcb;
    if (inp)
        tp = tcp_newtcpcb(family, (void *)inp);
    else
        tp = NULL;
    if (tp == 0) {
        s32 nofd = so->so_state & 0x1;
        so->so_state &= ~0x1;
        if (inp)
            in_pcbdetach(inp);
        so->so_state |= nofd;
        return (0x69);
    }
    tp->t_state = 0;
    return (0);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_attach);
#endif

struct tcpcb *tcp_disconnect(struct tcpcb *tp) {
    struct socket *so;

    if (tp->t_inpcb)
        so = tp->t_inpcb->inp_socket;
    else
        so = NULL;

    if (tp->t_state < 4)
        tp = tcp_close(tp);
    else if ((so->so_options & 0x80) && so->so_linger == 0)
        tp = tcp_drop(tp, 0);
    else {
        soisdisconnecting(so);
        sbflush(&so->so_rcv);
        tp = tcp_usrclosed(tp);
        if (tp)
            (void)tcp_output(tp);
    }
    return (tp);
}

struct tcpcb *tcp_usrclosed(struct tcpcb *tp) {
    switch (tp->t_state) {
    case 0:
    case 1:
    case 2:
        tp->t_state = 0;
        tp = tcp_close(tp);
        break;
    case 3:
    case 4:
        tp->t_state = 6;
        break;
    case 5:
        tp->t_state = 8;
        break;
    }
    if (tp && tp->t_state >= 9) {
        struct socket *so;

        if (tp->t_inpcb)
            so = tp->t_inpcb->inp_socket;
        else
            so = NULL;
        soisdisconnected(so);
        if ((tp->t_state == 9) && (tcp_maxidle > 0))
            tp->t_timer[3] = pfslowtimo_now + tcp_maxidle;
    }
    return (tp);
}

#if FW_VERSION < 250
s32 tcp_sysctl(s32 *name, u32 namelen, void *oldp, u32 *oldlenp, void *newp, u32 newlen) {
    if (namelen != 1)
        return (0x14);

    if (name[0] < 0x1AU && tcp_ctlvars[name[0]].valid) {
        if (tcp_ctlvars[name[0]].rdonly)
            return (sysctl_rdint(oldp, oldlenp, newp, tcp_ctlvars[name[0]].num));
        else
            return (sysctl_int(oldp, oldlenp, newp, newlen, tcp_ctlvars[name[0]].var));
    }
    switch (name[0]) {
    case 0x19:
        return (sysctl_rdstruct(oldp, oldlenp, newp, &tcp_stat, sizeof(tcp_stat)));
    default:
        return (0x6D);
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", tcp_sysctl);
#endif

#if FW_VERSION < 271
void func_00026930(void) {
    tcp_sendspace = 0x4000;
    tcp_recvspace = 0x4000;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", _sce_pspnet_pppoe_init);

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

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00024FB0);

void sppp_flush(struct sppp *sp) {
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

struct mbuf *sppp_dequeue(struct sppp *sp) {
    struct mbuf *m;
    s32 s;

    s = _sce_pspnet_spllock();
    IF_DEQUEUE(&sp->pp_cpq, m);
    if (m == NULL && sppp_ncp_check(sp)) {
        IF_DEQUEUE(&sp->pp_fastq, m);
    }
    _sce_pspnet_splunlock(s);
    return m;
}

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000253FC);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00025638);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002BB0C);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", lcp);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002BB20);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002BB24);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002BB4C);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", ipcp);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002BB90);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", pap);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002BBCC);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002BBD0);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", chap);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002590C);
#endif

#if FW_VERSION < 103
INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002DFB4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00027304);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00025870);
#endif

void sppp_cp_change_state(const struct cp *cp, struct sppp *sp, s32 newstate) {
    sp->state[cp->protoidx] = newstate;
    _sce_pspnet_callout_stop(sp->ch[cp->protoidx]);
    switch (newstate) {
    case STATE_INITIAL:
    case STATE_STARTING:
    case STATE_CLOSED:
    case STATE_STOPPED:
    case STATE_OPENED:
        break;
    case STATE_CLOSING:
    case STATE_STOPPING:
    case STATE_REQ_SENT:
    case STATE_ACK_RCVD:
    case STATE_ACK_SENT:
        _sce_pspnet_callout_reset(sp->ch[cp->protoidx], sp->lcp_timeout, cp->TO, sp);
        break;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00025FCC);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000263D0);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00026500);

s32 sppp_ncp_check(struct sppp *sp) {
    s32 i, mask;
    for (i = 0, mask = 1; i < IDX_COUNT; i++, mask <<= 1) {
        if ((sp->lcp_protos & mask) && (cps[i]->flags & CP_NCP)) {
            return 1;
        }
    }
    return 0;
}

void sppp_lcp_check_and_close(struct sppp *sp) {
    if (sp->pp_phase < SPPP_PHASE_NETWORK) {
        return;
    }
    if (sppp_ncp_check(sp)) {
        return;
    }
    D_0002BB24(sp);
}

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00026788);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00026A94);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00026C04);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00026D7C);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00026F58);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00026FF4);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00027260);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000273BC);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002757C);

s32 func_0002766C(const u8 *s, s32 max) {
    s32 n;
    for (n = 0; n < max && *s != 0; n++) {
        s++;
    }
    return n;
}

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000276A4);

void func_000277E0(struct sppp *sp) {
    s32 i;
    _sce_pspnet_callout_stop(&D_0002C5DC);
    for (i = 0; i < IDX_COUNT; i++) {
        _sce_pspnet_callout_stop(sp->ch[i]);
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00029330);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00029384);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00027C20);
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

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00027880);

void func_00027C20(void) {
}
#endif

void sppp_lcp_up(struct sppp *sp) {
    const struct cp *cp;

    if (sp->state[IDX_LCP] == STATE_INITIAL) {
        ((struct ifnet *)sp)->if_flags |= 0x40; /* IFF_RUNNING */
        lcp.Open(sp);
    }
    cp = &lcp;
    switch (sp->state[cp->protoidx]) {
    case STATE_INITIAL:
        sppp_cp_change_state(cp, sp, STATE_CLOSED);
        break;
    case STATE_STARTING:
        sp->rst_counter[cp->protoidx] = sp->lcp_max_configure;
        cp->scr(sp);
        sppp_cp_change_state(cp, sp, STATE_REQ_SENT);
        break;
    }
}

#if FW_VERSION < 271
void sppp_lcp_down(struct sppp *sp) {
    const struct cp *cp = &lcp;

    switch (sp->state[cp->protoidx]) {
    case STATE_CLOSED:
    case STATE_CLOSING:
        sppp_cp_change_state(cp, sp, STATE_INITIAL);
        break;
    case STATE_STOPPED:
        (cp->tls)(sp);
        /* fall through */
    case STATE_STOPPING:
    case STATE_REQ_SENT:
    case STATE_ACK_RCVD:
    case STATE_ACK_SENT:
        sppp_cp_change_state(cp, sp, STATE_STARTING);
        break;
    case STATE_OPENED:
        (cp->tld)(sp);
        sppp_cp_change_state(cp, sp, STATE_STARTING);
        break;
    }
    _sce_pspnet_if_down((struct ifnet *)sp);
    if (sp->state[IDX_LCP] != STATE_INITIAL) {
        lcp.Close(sp);
    } else {
        lcp.tlf(sp);
    }
    ((struct ifnet *)sp)->if_flags &= ~0x40; /* IFF_RUNNING */
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sppp_lcp_down);
#endif

#if FW_VERSION < 271
void sppp_lcp_open(struct sppp *sp) {
    const struct cp *cp = &lcp;

    sp->pp_flags &= ~0x10; /* PP_NEEDAUTH */
    switch (sp->state[cp->protoidx]) {
    case STATE_INITIAL:
        (cp->tls)(sp);
        sppp_cp_change_state(cp, sp, STATE_STARTING);
        break;
    case STATE_STARTING:
        break;
    case STATE_CLOSED:
        sp->rst_counter[cp->protoidx] = sp->lcp_max_configure;
        (cp->scr)(sp);
        sppp_cp_change_state(cp, sp, STATE_REQ_SENT);
        break;
    case STATE_STOPPED:
    case STATE_STOPPING:
    case STATE_REQ_SENT:
    case STATE_ACK_RCVD:
    case STATE_ACK_SENT:
    case STATE_OPENED:
        break;
    case STATE_CLOSING:
        sppp_cp_change_state(cp, sp, STATE_STOPPING);
        break;
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sppp_lcp_open);
#endif

void sppp_lcp_close(struct sppp *sp) {
    const struct cp *cp = &lcp;

    switch (sp->state[cp->protoidx]) {
    case STATE_INITIAL:
    case STATE_CLOSED:
    case STATE_CLOSING:
        break;
    case STATE_STARTING:
        (cp->tlf)(sp);
        sppp_cp_change_state(cp, sp, STATE_INITIAL);
        break;
    case STATE_STOPPED:
        sppp_cp_change_state(cp, sp, STATE_CLOSED);
        break;
    case STATE_STOPPING:
        sppp_cp_change_state(cp, sp, STATE_CLOSING);
        break;
    case STATE_OPENED:
        (cp->tld)(sp);
        /* fall through */
    case STATE_REQ_SENT:
    case STATE_ACK_RCVD:
    case STATE_ACK_SENT:
        sp->rst_counter[cp->protoidx] = sp->lcp_max_terminate;
        func_00025638(sp, cp->proto, 5 /* TERM_REQ */, ++sp->pp_seq[cp->protoidx], 0, 0);
        sppp_cp_change_state(cp, sp, STATE_CLOSING);
        break;
    }
}

void sppp_lcp_TO(void *arg0) {
    sppp_to_event(&lcp, arg0);
}

#if FW_VERSION < 271
void sppp_lcp_RCN_rej(struct sppp *sp, u8 *h, s32 len) {
    u8 *buf, *p;

    len -= 4;
    buf = sceNetMallocInternal(len);
    if (!buf) {
        return;
    }
    p = h + 4;
    for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
        switch (*p) {
        case 5: /* LCP_OPT_MAGIC */
            sp->lcp_opts &= ~(1 << 5);
            sp->lcp_magic = 0;
            break;
        case 1: /* LCP_OPT_MRU */
            sp->lcp_opts &= ~(1 << 1);
            break;
        }
    }
    sceNetFreeInternal(buf);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sppp_lcp_RCN_rej);
#endif

void sppp_lcp_tld(struct sppp *sp) {
    s32 i;
    u32 mask;

    sp->pp_phase = SPPP_PHASE_TERMINATE;
    for (i = 0, mask = 1; i < IDX_COUNT; i++, mask <<= 1) {
        if ((sp->lcp_protos & mask) && ((cps[i])->flags & CP_LCP) == 0) {
            (cps[i])->Down(sp);
            (cps[i])->Close(sp);
        }
    }
}

void sppp_lcp_tls(struct sppp *sp) {
    sp->pp_phase = SPPP_PHASE_ESTABLISH;
    sp->unk174 = (sp->unk174 > 1) ? sp->unk174 : 1;
    if (sp->pp_tls != NULL) {
        sp->pp_tls(sp);
    }
}

void sppp_lcp_tlf(struct sppp *sp) {
    sp->pp_phase = SPPP_PHASE_DEAD;
    if (sp->pp_tlf != NULL) {
        sp->pp_tlf(sp);
    }
}

void sppp_lcp_scr(struct sppp *sp) {
    char opt[6 /* magicnum */ + 4 /* mru */ + 5 /* chap */];
    s32 i = 0;

    if (sp->lcp_opts & (1 << 5)) { /* LCP_OPT_MAGIC */
        if (!sp->lcp_magic) {
            sp->lcp_magic = sceNetRand();
        }
        opt[i++] = 5;
        opt[i++] = 6;
        opt[i++] = sp->lcp_magic >> 24;
        opt[i++] = sp->lcp_magic >> 16;
        opt[i++] = sp->lcp_magic >> 8;
        opt[i++] = sp->lcp_magic;
    }
    if (sp->lcp_opts & (1 << 1)) { /* LCP_OPT_MRU */
        opt[i++] = 1;
        opt[i++] = 4;
        opt[i++] = sp->lcp_mru >> 8;
        opt[i++] = sp->lcp_mru;
    }
    sp->confid[IDX_LCP] = ++sp->pp_seq[IDX_LCP];
    func_00025638(sp, 0xC021 /* PPP_LCP */, 1 /* CONF_REQ */, sp->confid[IDX_LCP], i, &opt);
}

void sppp_ipcp_up(struct sppp *sp) {
    const struct cp *cp = &ipcp;

    switch (sp->state[cp->protoidx]) {
    case STATE_INITIAL:
        sppp_cp_change_state(cp, sp, STATE_CLOSED);
        break;
    case STATE_STARTING:
        sp->rst_counter[cp->protoidx] = sp->lcp_max_configure;
        cp->scr(sp);
        sppp_cp_change_state(cp, sp, STATE_REQ_SENT);
        break;
    }
}

void sppp_ipcp_down(struct sppp *sp) {
    const struct cp *cp = &ipcp;

    switch (sp->state[cp->protoidx]) {
    case STATE_CLOSED:
    case STATE_CLOSING:
        sppp_cp_change_state(cp, sp, STATE_INITIAL);
        break;
    case STATE_STOPPED:
        (cp->tls)(sp);
        /* fall through */
    case STATE_STOPPING:
    case STATE_REQ_SENT:
    case STATE_ACK_RCVD:
    case STATE_ACK_SENT:
        sppp_cp_change_state(cp, sp, STATE_STARTING);
        break;
    case STATE_OPENED:
        (cp->tld)(sp);
        sppp_cp_change_state(cp, sp, STATE_STARTING);
        break;
    }
}

void sppp_ipcp_open(struct sppp *sp) {
    const struct cp *cp = &ipcp;

    sp->ipcp_flags = 0;
    sp->ipcp_opts |= (1 << 3);
    sp->ipcp_opts |= (1 << 29);
    sp->ipcp_opts |= (1 << 31);
    sp->unk274 = 0;
    sp->unk278 = 0;
    sp->unk178 = 0;
    sp->unk17C = 0;
    switch (sp->state[cp->protoidx]) {
    case STATE_INITIAL:
        (cp->tls)(sp);
        sppp_cp_change_state(cp, sp, STATE_STARTING);
        break;
    case STATE_STARTING:
        break;
    case STATE_CLOSED:
        sp->rst_counter[cp->protoidx] = sp->lcp_max_configure;
        (cp->scr)(sp);
        sppp_cp_change_state(cp, sp, STATE_REQ_SENT);
        break;
    case STATE_STOPPED:
    case STATE_STOPPING:
    case STATE_REQ_SENT:
    case STATE_ACK_RCVD:
    case STATE_ACK_SENT:
    case STATE_OPENED:
        break;
    case STATE_CLOSING:
        sppp_cp_change_state(cp, sp, STATE_STOPPING);
        break;
    }
}

#if FW_VERSION < 151
void sppp_ipcp_close(struct sppp *sp) {
    const struct cp *cp = &ipcp;

    switch (sp->state[cp->protoidx]) {
    case STATE_INITIAL:
    case STATE_CLOSED:
    case STATE_CLOSING:
        break;
    case STATE_STARTING:
        (cp->tlf)(sp);
        sppp_cp_change_state(cp, sp, STATE_INITIAL);
        break;
    case STATE_STOPPED:
        sppp_cp_change_state(cp, sp, STATE_CLOSED);
        break;
    case STATE_STOPPING:
        sppp_cp_change_state(cp, sp, STATE_CLOSING);
        break;
    case STATE_OPENED:
        (cp->tld)(sp);
        /* fall through */
    case STATE_REQ_SENT:
    case STATE_ACK_RCVD:
    case STATE_ACK_SENT:
        sp->rst_counter[cp->protoidx] = sp->lcp_max_terminate;
        func_00025638(sp, cp->proto, 5 /* TERM_REQ */, ++sp->pp_seq[cp->protoidx], 0, 0);
        sppp_cp_change_state(cp, sp, STATE_CLOSING);
        break;
    }
    if (sp->pp_saved_mtu) {
        ((struct ifnet *)sp)->if_mtu = sp->pp_saved_mtu;
        sp->pp_saved_mtu = 0;
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sppp_ipcp_close);
#endif

void sppp_ipcp_TO(void *arg0) {
    sppp_to_event(&ipcp, arg0);
}

#if FW_VERSION < 271
void sppp_ipcp_RCN_rej(struct sppp *sp, u8 *h, s32 len) {
    u8 *p;

    len -= 4;
    p = h + 4;
    for (; len > 1 && p[1]; len -= p[1], p += p[1]) {
        switch (*p) {
        case 3: /* IPCP_OPT_ADDRESS */
            sp->ipcp_opts &= ~(1 << 3);
            break;
        case 0x81: /* primary DNS */
            sp->ipcp_opts &= ~(1 << 29);
            break;
        case 0x83: /* secondary DNS */
            sp->ipcp_opts &= ~(1u << 31);
            break;
        }
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sppp_ipcp_RCN_rej);
#endif

void sppp_ipcp_tlu(struct sppp *sp) {
    struct ifnet *ifp = (struct ifnet *)sp;

    sp->unk174 = 2;
    sp->ipcp_flags |= 0x10;
    if (ifp->if_mtu > sp->lcp_their_mru) {
        sp->pp_saved_mtu = ifp->if_mtu;
        ifp->if_mtu = sp->lcp_their_mru;
    }
    if (sp->pp_con) {
        sp->pp_con(sp);
    }
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00028758);
#else
void func_00028758(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x270) = (s32) (M2C_FIELD(arg0, s32 *, 0x270) & ~0x10);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00028768);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00028778);
#else
void func_00028778(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) & ~2);
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A2DC);
#endif

#if FW_VERSION < 103
void sppp_pap_open(struct sppp *sp) {
    if (sp->myauth_proto == PPP_PAP) {
        D_0002BBCC(sp);
        _sce_pspnet_callout_reset(sp->ch[IDX_PAP], sp->unk394, sppp_pap_TO, sp);
        sp->rst_counter[IDX_PAP] = sp->unk398;
    }
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sppp_pap_open);
#endif

#if FW_VERSION == 103 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000287F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000287F4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x188) != 2) {
        sppp_cp_change_state(&pap, arg0, STATE_CLOSED);
    }
    _sce_pspnet_callout_stop(arg0 + 0x1FC);
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) & ~4);
}
#endif

#if FW_VERSION < 103
void func_000287F4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x188) != 2) {
        sppp_cp_change_state(&pap, arg0, STATE_CLOSED);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002884C);
#endif

#if FW_VERSION < 201
void func_0002884C(void) {

}
#endif

#if FW_VERSION >= 282
void func_0002884C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sppp_pap_TO);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000288E4);
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
void sppp_pap_tld(struct sppp *sp) {
    _sce_pspnet_callout_stop(sp->ch[IDX_PAP]);
    sp->lcp_protos &= ~(1 << IDX_PAP);
    D_0002BB24(sp);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sppp_pap_tld);
#endif

void sppp_pap_scr(struct sppp *sp) {
    u8 idlen, pwdlen;

    pwdlen = sp->myauth_secret_len;
    idlen = sp->myauth_name_len;
    sp->confid[IDX_PAP] = ++sp->pp_seq[IDX_PAP];
    func_00026FF4(&pap, sp, 1, sp->confid[IDX_PAP],
                  sizeof(idlen), &idlen, (u32)idlen, sp->myauth_name,
                  sizeof(pwdlen), &pwdlen, (u32)pwdlen, sp->myauth_secret, 0);
}

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A50C);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A51C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A538);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002A538(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) | 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A548);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0002A548(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18C) != 2) {
        sppp_cp_change_state(&chap, arg0, STATE_CLOSED);
    }
    _sce_pspnet_callout_stop(arg0 + 0x220);
    M2C_FIELD(arg0, s32 *, 0x254) = (s32) (M2C_FIELD(arg0, s32 *, 0x254) & ~8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A4DC);
#endif

#if FW_VERSION < 201
void func_0002A4DC(void) {

}
#endif

#if FW_VERSION >= 282
void func_000289B0(struct Unk_func_000289B0_0 *arg0) {
    arg0->unk254 = (s32) (arg0->unk254 | 8);
}

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000289C0);
#endif

#if FW_VERSION < 103
void func_000289C0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18C) != 2) {
        sppp_cp_change_state(&chap, arg0, STATE_CLOSED);
    }
}

void func_0002A51C(void) {

}
#endif

#if FW_VERSION >= 282
void func_00028A18(void) {
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00028A20);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A62C);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00028B38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A67C);
#endif

#if FW_VERSION < 201
void func_0002A67C(void) {

}
#endif

#if FW_VERSION >= 282
void func_00028B7C(void) {
}
#endif

void sppp_to_event(const struct cp *cp, struct sppp *sp) {
    s32 s;

    s = _sce_pspnet_spllock();
    if (--sp->rst_counter[cp->protoidx] < 0) {
        switch (sp->state[cp->protoidx]) {
        case STATE_CLOSING:
            (cp->tlf)(sp);
            sppp_cp_change_state(cp, sp, STATE_CLOSED);
            sppp_lcp_check_and_close(sp);
            break;
        case STATE_STOPPING:
            (cp->tlf)(sp);
            sppp_cp_change_state(cp, sp, STATE_STOPPED);
            sppp_lcp_check_and_close(sp);
            break;
        case STATE_REQ_SENT:
        case STATE_ACK_RCVD:
        case STATE_ACK_SENT:
            (cp->tlf)(sp);
            sppp_cp_change_state(cp, sp, STATE_STOPPED);
            sppp_lcp_check_and_close(sp);
            break;
        }
    } else {
        switch (sp->state[cp->protoidx]) {
        case STATE_CLOSING:
        case STATE_STOPPING:
            func_00025638(sp, cp->proto, 5 /* TERM_REQ */, ++sp->pp_seq[cp->protoidx], 0, 0);
            _sce_pspnet_callout_reset(sp->ch[cp->protoidx], sp->lcp_timeout, cp->TO, sp);
            break;
        case STATE_REQ_SENT:
        case STATE_ACK_RCVD:
            (cp->scr)(sp);
            sppp_cp_change_state(cp, sp, STATE_REQ_SENT);
            break;
        case STATE_ACK_SENT:
            (cp->scr)(sp);
            _sce_pspnet_callout_reset(sp->ch[cp->protoidx], sp->lcp_timeout, cp->TO, sp);
            break;
        }
    }
    _sce_pspnet_splunlock(s);
}

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00028D50);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00028E80);

s32 func_00028FA0(void *arg0) {
    return func_00029C28(arg0, 0);
}

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00028FBC);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00029108);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00029280);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000293A4);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00029460);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000297CC);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000298B8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002B24C);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002B350);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000296F8);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000297E4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_000299E4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00029B94);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002B640);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00029C28);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00029F28);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002BD24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002BDB4);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002BE00);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00029AC0);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_00029C28);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A1B0);

void func_0002A244(struct Unk_func_0002A244_0 *arg0) {
    if (arg0->unk4BC < 3) {

    } else {
        arg0->unk4BC = 4;
        _sce_pspnet_callout_reset((u8 *)arg0 + 0x4D8, 2, &func_00029280, arg0);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A290);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002A570);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", _sce_pspnet_pppoe_init);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", _sce_pspnet_pppoe_term);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInet_lib_2595064C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetInetNtop);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetInetPton);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetInetAddr);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetInetAton);
#endif

#if FW_VERSION < 201
void sceNetInetInetAton(s32 arg0, s32 arg1) {
    func_0002C4CC(arg0, arg1, 0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002C4CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetInit);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetTerm);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002C82C);

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
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002AAC8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002C8D8);
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

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002C978);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002C9B8);
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

s32 func_0002CA04(const char *s1, const char *s2) {
    if (s1 == NULL || s2 == NULL) {
        if (s1 == s2)
            return 0;
        return (s1 == NULL) ? -1 : 1;
    }
    while (*s1 == *s2++) {
        if (*s1++ == '\0')
            return 0;
    }
    return *s1 - *(s2 - 1);
}

char *func_0002CA84(const char *s, s32 c) {
    char ch = c;
    if (s == NULL) {
        return NULL;
    }
    do {
        if (*s == ch) {
            return (char *)s;
        }
    } while (*s++ != '\0');
    return NULL;
}

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
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002ACFC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002CAFC);
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

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002CCF8);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002D420);

INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002E290);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002E2F8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002C5D8_v152);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002C498);
#endif

#if FW_VERSION < 103 || FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pspnet_inet_tcp_subr", D_0002E298);
#endif

#if FW_VERSION >= 282
s32 sceNetInetInetAddr(s32 arg0) {
    void *sp0;
    return (func_0002AA4C(arg0, &sp0, 0) != 0) ? sp0 : -1;
}

void sceNetInetInetAton(s32 arg0, s32 arg1) {
    func_0002AA4C(arg0, arg1, 0);
}

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", func_0002AA4C);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetInit);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetTerm);

void func_0002AF14(void) {
    _sce_pspnet_get_thread_errno();
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetGetErrno);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetGetPspError);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetAddArp);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetDelArp);

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_subr", sceNetInetGetArpInfo);
#endif
