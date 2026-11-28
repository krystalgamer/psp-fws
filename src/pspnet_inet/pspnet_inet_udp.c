/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001C30C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001C60C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001B754);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001B770);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001BA74);
#endif

#if FW_VERSION < 201
s32 udp_output(struct mbuf *m, ...) {
    struct inpcb *inp;
    struct udpiphdr *ui;
    s32 len = m->m_pkthdr.len;
    s32 error = 0;
    __builtin_va_list ap;

    __builtin_va_start(ap, m);
    inp = __builtin_va_arg(ap, struct inpcb *);
    __builtin_va_end(ap);

    M_PREPEND(m, sizeof(struct udpiphdr), 1);
    if (m == 0) {
        error = 0x69;
        goto release;
    }
    if ((len + sizeof(struct udpiphdr)) > 0xFFFF) {
        error = 0x7A;
        goto release;
    }
    ui = mtod(m, struct udpiphdr *);
    __builtin_memset(ui->ui_x1, 0, sizeof ui->ui_x1);
    ui->ui_pr = 17;
    ui->ui_len = (u16)__builtin_allegrex_wsbh((u16)(len + sizeof(struct udphdr)));
    ui->ui_src = inp->inp_laddr;
    ui->ui_dst = inp->inp_faddr;
    ui->ui_sport = inp->inp_lport;
    ui->ui_dport = inp->inp_fport;
    ui->ui_ulen = ui->ui_len;
    ui->ui_sum = 0;
    if (udpcksum) {
        if ((ui->ui_sum = in_cksum(m, sizeof(struct udpiphdr) + len)) == 0)
            ui->ui_sum = 0xffff;
    }
    ((struct ip *)ui)->ip_len = sizeof(struct udpiphdr) + len;
    ((struct ip *)ui)->ip_ttl = inp->inp_ip.ip_ttl;
    ((struct ip *)ui)->ip_tos = inp->inp_ip.ip_tos;
    udp_stat.udps_opackets++;

    return (ip_output(m, inp->inp_options, &inp->inp_route,
                      inp->inp_socket->so_options & (0x10 | 0x20), inp->inp_moptions));

release:
    sceNetMFreem(m);
    return (error);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", udp_output);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001BEDC);

#if FW_VERSION < 201
void udp_init(void) {
    D_0002C31C = 0x2400;
    D_0002C320 = 0xA280;
    udpcksum = 1;
    func_0002C94C(&udp_stat, 0, 0x48);
    in_pcbinit(&udbtable, D_0002E8D8, D_0002E8D8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", udp_init);
#endif

#if FW_VERSION < 151 || FW_VERSION == 152
void *udp_ctlinput(s32 cmd, struct sockaddr *sa, void *v) {
    struct ip *ip = v;
    struct tcphdr *th;
    void (*notify)() = udp_notify;
    s32 errno;

    if (sa->sa_family != AF_INET || sa->sa_len != sizeof(struct sockaddr_in)) {
        return NULL;
    }
    if ((u32)cmd >= PRC_NCMDS) {
        return NULL;
    }
    errno = inetctlerrmap[cmd];
    if (PRC_IS_REDIRECT(cmd)) {
        notify = in_rtchange, ip = 0;
    } else if (cmd == PRC_HOSTDEAD) {
        ip = 0;
    } else if (errno == 0) {
        return NULL;
    }
    if (ip) {
        th = (struct tcphdr *)((u8 *)ip + ((ip->ip_hl_v & 0xF) << 2));
        in_pcbnotify(&udbtable, ((struct sockaddr_in *)sa)->sin_addr, th->th_dport, ip->ip_src, th->th_sport, errno, notify);
    } else {
        in_pcbnotifyall(&udbtable, ((struct sockaddr_in *)sa)->sin_addr, errno, notify);
    }
    return NULL;
}
#endif

#if FW_VERSION == 151 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", udp_ctlinput);
#endif

#if FW_VERSION >= 282
void func_0001C208(void) {
    D_0002C31C = 0x2400;
    D_0002C320 = 0xA280;
    udpcksum = 1;
    sceNetMemset(&udp_stat, 0, 0x48);
    in_pcbinit(&D_0002DC78, D_0002C318, D_0002C318);
}

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001C26C);
#endif

s32 udp_sysctl(s32 *name, u32 namelen, void *oldp, u32 *oldlenp, void *newp, u32 newlen) {
    if (namelen != 1) {
        return 20; /* ENOTDIR */
    }
    switch (name[0]) {
    case 1: /* UDPCTL_CHECKSUM */
        return sysctl_int(oldp, oldlenp, newp, newlen, &udpcksum);
    case 2: /* UDPCTL_SENDSPACE */
        return sysctl_int(oldp, oldlenp, newp, newlen, &D_0002C31C);
    case 3: /* UDPCTL_RECVSPACE */
        return sysctl_int(oldp, oldlenp, newp, newlen, &D_0002C320);
    case 4: /* SCE: udpstat */
        return sysctl_rdstruct(oldp, oldlenp, newp, &udp_stat, 0x48);
    default:
        return 109; /* ENOPROTOOPT */
    }
}

void udp4_sendup(struct mbuf *m, s32 off, struct sockaddr *src, struct socket *so) {
    struct mbuf *opts = NULL;
    struct mbuf *n;
    struct inpcb *inp = NULL;

    if (!so)
        return;
    switch (so->so_proto->pr_domain->dom_family) {
    case AF_INET:
        inp = (struct inpcb *)so->so_pcb;
        break;
    default:
        return;
    }

    if ((n = sceNetMCopym(m, 0, 1000000000, 1)) != NULL) {
        if (inp && (inp->inp_flags & 0x87 || so->so_options & 0x400)) {
            struct ip *ip = mtod(n, struct ip *);
            ip_savecontrol(inp, &opts, ip, n);
        }

        sceNetMAdj(n, off);
        if (sbappendaddr(&so->so_rcv, src, n, opts) == 0) {
            sceNetMFreem(n);
            if (opts)
                sceNetMFreem(opts);
        } else
            sorwakeup(so);
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", udp_notify);
#endif

#if FW_VERSION < 201
void udp_notify(void *arg0, s16 arg1) {
    void *var_a2;

    var_a2 = M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(var_a2, s16 *, 0x3C) = arg1;
    if (M2C_FIELD(var_a2, u16 *, 0x64) & 0x3C) {
        sowakeup((s32) var_a2, (s32) (var_a2 + 0x44));
        var_a2 = M2C_FIELD(arg0, void **, 0x1C);
    }
    if (!(M2C_FIELD(var_a2, u16 *, 0x8C) & 0x3C)) {

    } else {
        sowakeup((s32) var_a2, (s32) (var_a2 + 0x6C));
    }
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001C188);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001CC7C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001C764);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001D258);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001D85C);
#endif

#if FW_VERSION >= 282
void func_0001C57C(struct Unk_func_0001C57C_0 *arg0, s16 arg1) {
    struct Unk_func_0001C57C_var_a2 *var_a2;

    var_a2 = arg0->unk1C;
    var_a2->unk3C = arg1;
    if (var_a2->unk64 & 0x3C) {
        sowakeup((s32) var_a2, (s32) ((u8 *)var_a2 + 0x44));
        var_a2 = arg0->unk1C;
    }
    if (!(var_a2->unk8C & 0x3C)) {

    } else {
        sowakeup((s32) var_a2, (s32) ((u8 *)var_a2 + 0x6C));
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001C5F0);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001CBCC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001F088);

#if FW_VERSION < 201
void tcp_pulloutofband(struct socket *so, struct tcphdr *th, struct mbuf *m, s32 off) {
    s32 cnt = off + th->th_urp - 1;

    while (cnt >= 0) {
        if (m->m_len > cnt) {
            char *cp = mtod(m, char *) + cnt;
            struct tcpcb *tp = (struct tcpcb *)((struct inpcb *)so->so_pcb)->inp_ppcb;

            tp->t_iobc = *cp;
            tp->t_oobflags |= 0x1;
            func_0002C9B8(cp + 1, cp, (u32)(m->m_len - cnt - 1));
            m->m_len--;
            return;
        }
        cnt -= m->m_len;
        m = m->m_next;
        if (m == 0)
            break;
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", tcp_pulloutofband);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001F3B0);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001F0A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001F674);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001F178);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020A20);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020B74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001F4CC);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001F5A0);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", syn_cache_timer);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", syn_cache_cleanup);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001FBBC);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020260);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_000204E4);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020788);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_000215D8);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00021D08);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00021FCC);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_000222B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_000227D4);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001FFF0);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020690);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020914);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020BB8);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00021070);
#endif

void syn_cache_init(void) {
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

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_000214B0);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", tcp_output);

#if FW_VERSION < 282
void tcp_setpersist(struct tcpcb *tp) {
    s32 t = ((tp->t_srtt >> 2) + tp->t_rttvar) >> (1 + 2);
    s32 nticks;

    if (t < tp->t_rttmin) {
        t = tp->t_rttmin;
    }
    nticks = t * tcp_backoff[tp->t_rxtshift];
    if (nticks < TCPTV_PERSMIN) {
        nticks = TCPTV_PERSMIN;
    } else if (nticks > TCPTV_PERSMAX) {
        nticks = TCPTV_PERSMAX;
    }
    tp->t_timer[TCPT_PERSIST] = pfslowtimo_now + nticks;
    if (tp->t_rxtshift < TCP_MAXRXTSHIFT) {
        tp->t_rxtshift++;
    }
}
#endif
