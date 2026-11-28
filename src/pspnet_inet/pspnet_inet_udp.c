/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

#if FW_VERSION < 201
void udp_input(struct mbuf *m, ...) {
    __builtin_va_list ap;
    struct sockaddr_in src, dst;
    struct ip *ip;
    struct udphdr *uh;
    s32 iphlen, proto;
    s32 len;
    s32 n;

    __builtin_va_start(ap, m);
    iphlen = __builtin_va_arg(ap, s32);
    proto = __builtin_va_arg(ap, s32);
    __builtin_va_end(ap);

    udp_stat.udps_ipackets++;

    if (iphlen > sizeof(struct ip)) {
        ip_stripoptions(m, (struct mbuf *)0);
        iphlen = sizeof(struct ip);
    }

    ip = mtod(m, struct ip *);
    if (m->m_len < iphlen + sizeof(struct udphdr)) {
        if ((m = sceNetMPullup(m, iphlen + sizeof(struct udphdr))) == 0) {
            udp_stat.udps_hdrops++;
            return;
        }
        ip = mtod(m, struct ip *);
    }
    uh = (struct udphdr *)((char *)ip + iphlen);

    if (uh->uh_dport == 0)
        goto bad;

    len = (u16)__builtin_allegrex_wsbh((u16)uh->uh_ulen);
    if (ip->ip_len != iphlen + len) {
        if (ip->ip_len < iphlen + len || len < sizeof(struct udphdr)) {
            udp_stat.udps_badlen++;
            goto bad;
        }
        sceNetMAdj(m, iphlen + len - ip->ip_len);
    }

    if (uh->uh_sum) {
        if (in4_cksum(m, 17, iphlen, len) != 0) {
            udp_stat.udps_badsum++;
            sceNetMFreem(m);
            return;
        }
    }

    __builtin_memset(&src, 0, sizeof(src));
    src.sin_family = AF_INET;
    src.sin_len = sizeof(struct sockaddr_in);
    func_0002C9B8(&ip->ip_src, &src.sin_addr, sizeof(src.sin_addr));
    src.sin_port = uh->uh_sport;
    __builtin_memset(&dst, 0, sizeof(dst));
    dst.sin_family = AF_INET;
    dst.sin_len = sizeof(struct sockaddr_in);
    func_0002C9B8(&ip->ip_dst, &dst.sin_addr, sizeof(dst.sin_addr));
    dst.sin_port = uh->uh_dport;

    n = udp4_realinput(&src, &dst, m, iphlen);

    if (n == 0) {
        if (m->m_flags & (0x100 | 0x200)) {
            udp_stat.udps_noportbcast++;
            goto bad;
        }
        udp_stat.udps_noport++;
        icmp_error(m, 3, 3, 0, 0);
        m = NULL;
    }

bad:
    if (m)
        sceNetMFreem(m);
}
#endif

#if FW_VERSION < 151
s32 udp4_realinput(struct sockaddr_in *src, struct sockaddr_in *dst, struct mbuf *m, s32 off) {
    u16 *sport, *dport;
    s32 rcvcnt;
    struct in_addr *src4, *dst4;
    struct inpcb *inp;

    rcvcnt = 0;
    off += sizeof(struct udphdr);

    if (src->sin_family != AF_INET || dst->sin_family != AF_INET)
        goto bad;

    src4 = &src->sin_addr;
    sport = &src->sin_port;
    dst4 = &dst->sin_addr;
    dport = &dst->sin_port;

    if (IN_MULTICAST(dst4->s_addr) || in_broadcast(*dst4, m->m_pkthdr.rcvif)) {
        struct inpcb *last;

        for (inp = udbtable.inpt_queue.cqh_first;
             inp != (struct inpcb *)&udbtable.inpt_queue;
             inp = inp->inp_queue.cqe_next) {
            if (inp->inp_lport != *dport)
                continue;
            if (inp->inp_laddr.s_addr != __builtin_allegrex_wsbw(0)) {
                if (inp->inp_laddr.s_addr != dst4->s_addr)
                    continue;
            }
            if (inp->inp_faddr.s_addr != __builtin_allegrex_wsbw(0)) {
                if (inp->inp_faddr.s_addr != src4->s_addr ||
                    inp->inp_fport != *sport)
                    continue;
            }

            last = inp;
            udp4_sendup(m, off, (struct sockaddr *)src, inp->inp_socket);
            rcvcnt++;

            if ((inp->inp_socket->so_options & (0x200 | 0x4)) == 0)
                break;
        }
    } else {
        inp = in_pcblookup_connect(&udbtable, *src4, *sport, *dst4, *dport);
        if (inp == 0) {
            ++udp_stat.udps_pcbhashmiss;
            inp = in_pcblookup_bind(&udbtable, *dst4, *dport);
            if (inp == 0) {
                return rcvcnt;
            }
        }

        udp4_sendup(m, off, (struct sockaddr *)src, inp->inp_socket);
        rcvcnt++;
    }

bad:
    return rcvcnt;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 udp4_realinput(struct sockaddr_in *src, struct sockaddr_in *dst, struct mbuf *m, s32 off) {
    u16 *sport, *dport;
    s32 rcvcnt;
    struct in_addr *src4, *dst4;
    struct inpcb *inp;

    rcvcnt = 0;
    off += sizeof(struct udphdr);

    if (src->sin_family != AF_INET || dst->sin_family != AF_INET)
        goto bad;

    src4 = &src->sin_addr;
    sport = &src->sin_port;
    dst4 = &dst->sin_addr;
    dport = &dst->sin_port;

    if (IN_MULTICAST(dst4->s_addr) || func_00012730(*dst4, m->m_pkthdr.rcvif)) {
        struct inpcb *last;

        for (inp = udbtable.inpt_queue.cqh_first;
             inp != (struct inpcb *)&udbtable.inpt_queue;
             inp = inp->inp_queue.cqe_next) {
            if (inp->inp_lport != *dport)
                continue;
            if (inp->inp_laddr.s_addr != __builtin_allegrex_wsbw(0)) {
                if (inp->inp_laddr.s_addr != dst4->s_addr)
                    continue;
            }
            if (inp->inp_faddr.s_addr != __builtin_allegrex_wsbw(0)) {
                if (inp->inp_faddr.s_addr != src4->s_addr ||
                    inp->inp_fport != *sport)
                    continue;
            }

            last = inp;
            udp4_sendup(m, off, (struct sockaddr *)src, inp->inp_socket);
            rcvcnt++;

            if ((inp->inp_socket->so_options & (0x200 | 0x4)) == 0)
                break;
        }
    } else {
        inp = in_pcblookup_connect(&udbtable, *src4, *sport, *dst4, *dport);
        if (inp == 0) {
            ++udp_stat.udps_pcbhashmiss;
            inp = in_pcblookup_bind(&udbtable, *dst4, *dport);
            if (inp == 0) {
                return rcvcnt;
            }
        }

        udp4_sendup(m, off, (struct sockaddr *)src, inp->inp_socket);
        rcvcnt++;
    }

bad:
    return rcvcnt;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", udp4_realinput);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION < 151
s32 udp_usrreq(struct socket *so, s32 req, struct mbuf *m, struct mbuf *nam, struct mbuf *control) {
    struct inpcb *inp;
    s32 s;
    s32 error = 0;

    if (req == 11)
        return (in_control(so, (s32)m, (void *)nam, (struct ifnet *)control));
    if (req == 22) {
        in_purgeif((struct ifnet *)control);
        in_pcbpurgeif(&udbtable, (struct ifnet *)control);
        return (0);
    }
    s = _sce_pspnet_spllock();
    inp = (struct inpcb *)so->so_pcb;
    if (inp == 0 && req != 0) {
        error = 0x16;
        goto release;
    }
    switch (req) {
    case 0:
        if (inp != 0) {
            error = 0x7F;
            break;
        }
        if (so->so_snd.sb_hiwat == 0 || so->so_rcv.sb_hiwat == 0) {
            error = soreserve(so, udp_sendspace, udp_recvspace);
            if (error)
                break;
        }
        error = in_pcballoc(so, &udbtable);
        if (error)
            break;
        inp = (struct inpcb *)so->so_pcb;
        inp->inp_ip.ip_ttl = D_0002E7B0;
        break;
    case 10:
        soisdisconnected(so);
    case 1:
        in_pcbdetach(inp);
        break;
    case 2:
        error = in_pcbbind(inp, nam);
        break;
    case 3:
        error = 0x5F;
        break;
    case 4:
        error = in_pcbconnect(inp, nam);
        if (error)
            break;
        soisconnected(so);
        break;
    case 17:
        error = 0x5F;
        break;
    case 6:
        so->so_state &= ~SS_ISCONNECTED;
        in_pcbdisconnect(inp);
        inp->inp_laddr = zeroin_addr;
        in_pcbstate(inp, 1);
        break;
    case 7:
        socantsendmore(so);
        break;
    case 8:
        error = 0x5F;
        break;
    case 9:
        if (control && control->m_len) {
            sceNetMFreem(control);
            sceNetMFreem(m);
            error = 0x16;
            break;
        }
        {
            struct in_addr laddr;

            if (nam) {
                laddr = inp->inp_laddr;
                if ((so->so_state & SS_ISCONNECTED) != 0) {
                    error = 0x7F;
                    goto die;
                }
                error = in_pcbconnect(inp, nam);
                if (error) {
                die:
                    sceNetMFreem(m);
                    break;
                }
            } else {
                if ((so->so_state & SS_ISCONNECTED) == 0) {
                    error = 0x80;
                    goto die;
                }
            }
            error = udp_output(m, inp);
            if (nam) {
                in_pcbdisconnect(inp);
                inp->inp_laddr = laddr;
                in_pcbstate(inp, 1);
            }
        }
        break;
    case 12:
        _sce_pspnet_splunlock(s);
        return (0);
    case 13:
        error = 0x5F;
        break;
    case 14:
        sceNetMFreem(control);
        sceNetMFreem(m);
        error = 0x5F;
        break;
    case 15:
        in_setsockaddr(inp, nam);
        break;
    case 16:
        in_setpeeraddr(inp, nam);
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
s32 udp_usrreq(struct socket *so, s32 req, struct mbuf *m, struct mbuf *nam, struct mbuf *control) {
    struct inpcb *inp;
    s32 s;
    s32 error = 0;

    if (req == 11)
        return (func_00010874(so, (s32)m, (void *)nam, (struct ifnet *)control));
    if (req == 22) {
        in_purgeif((struct ifnet *)control);
        in_pcbpurgeif(&udbtable, (struct ifnet *)control);
        return (0);
    }
    s = _sce_pspnet_spllock();
    inp = (struct inpcb *)so->so_pcb;
    if (inp == 0 && req != 0) {
        error = 0x16;
        goto release;
    }
    switch (req) {
    case 0:
        if (inp != 0) {
            error = 0x7F;
            break;
        }
        if (so->so_snd.sb_hiwat == 0 || so->so_rcv.sb_hiwat == 0) {
            error = soreserve(so, udp_sendspace, udp_recvspace);
            if (error)
                break;
        }
        error = in_pcballoc(so, &udbtable);
        if (error)
            break;
        inp = (struct inpcb *)so->so_pcb;
        inp->inp_ip.ip_ttl = D_0002E7B0;
        break;
    case 10:
        soisdisconnected(so);
    case 1:
        in_pcbdetach(inp);
        break;
    case 2:
        error = in_pcbbind(inp, nam);
        break;
    case 3:
        error = 0x5F;
        break;
    case 4:
        error = func_00013114(inp, nam);
        if (error)
            break;
        soisconnected(so);
        break;
    case 17:
        error = 0x5F;
        break;
    case 6:
        so->so_state &= ~SS_ISCONNECTED;
        in_pcbdisconnect(inp);
        inp->inp_laddr = zeroin_addr;
        in_pcbstate(inp, 1);
        break;
    case 7:
        socantsendmore(so);
        break;
    case 8:
        error = 0x5F;
        break;
    case 9:
        if (control && control->m_len) {
            sceNetMFreem(control);
            sceNetMFreem(m);
            error = 0x16;
            break;
        }
        {
            struct in_addr laddr;

            if (nam) {
                laddr = inp->inp_laddr;
                if ((so->so_state & SS_ISCONNECTED) != 0) {
                    error = 0x7F;
                    goto die;
                }
                error = func_00013114(inp, nam);
                if (error) {
                die:
                    sceNetMFreem(m);
                    break;
                }
            } else {
                if ((so->so_state & SS_ISCONNECTED) == 0) {
                    error = 0x80;
                    goto die;
                }
            }
            error = udp_output(m, inp);
            if (nam) {
                in_pcbdisconnect(inp);
                inp->inp_laddr = laddr;
                in_pcbstate(inp, 1);
            }
        }
        break;
    case 12:
        _sce_pspnet_splunlock(s);
        return (0);
    case 13:
        error = 0x5F;
        break;
    case 14:
        sceNetMFreem(control);
        sceNetMFreem(m);
        error = 0x5F;
        break;
    case 15:
        in_setsockaddr(inp, nam);
        break;
    case 16:
        in_setpeeraddr(inp, nam);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", udp_usrreq);
#else
void udp_init(void) {
    udp_sendspace = 0x2400;
    udp_recvspace = 0xA280;
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
    udp_sendspace = 0x2400;
    udp_recvspace = 0xA280;
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
        return sysctl_int(oldp, oldlenp, newp, newlen, &udp_sendspace);
    case 3: /* UDPCTL_RECVSPACE */
        return sysctl_int(oldp, oldlenp, newp, newlen, &udp_recvspace);
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

void syn_cache_insert(struct syn_cache *sc, struct tcpcb *tp)
{
	struct syn_cache_head *scp;
	struct syn_cache *sc2;
	int s, i;

	if (syn_cache_count == 0) {
		struct timeval tv;
		_sce_pspnet_microtime(&tv);
		syn_hash1 = sceNetRand() ^ (u32)&sc;
		syn_hash2 = sceNetRand() ^ tv.tv_usec;
	}

	SYN_HASHALL(sc->sc_hash, &sc->sc_src, &sc->sc_dst);
	sc->sc_bucketidx = sc->sc_hash % tcp_syn_cache_size;
	scp = &tcp_syn_cache[sc->sc_bucketidx];

	s = _sce_pspnet_spllock();
	if (scp->sch_length >= tcp_syn_bucket_limit) {
		tcp_stat.tcps_sc_bucketoverflow++;
		for (i = TCP_MAXRXTSHIFT; i >= 0; i--) {
			for (sc2 = TAILQ_FIRST(&tcp_syn_cache_timeq[i]);
			     sc2 != NULL;
			     sc2 = TAILQ_NEXT(sc2, sc_timeq)) {
				if (sc2->sc_bucketidx == sc->sc_bucketidx) {
					SYN_CACHE_RM(sc2);
					SYN_CACHE_PUT(sc2);
					goto insert;
				}
			}
		}
	} else if (syn_cache_count >= tcp_syn_cache_limit) {
		tcp_stat.tcps_sc_overflowed++;
		for (i = TCP_MAXRXTSHIFT; i >= 0; i--) {
			sc2 = TAILQ_FIRST(&tcp_syn_cache_timeq[i]);
			if (sc2 == NULL)
				continue;
			SYN_CACHE_RM(sc2);
			SYN_CACHE_PUT(sc2);
			goto insert;
		}
	}

 insert:
	sc->sc_rxttot = 0;
	sc->sc_rxtshift = 0;
	SYN_CACHE_TIMER_ARM(sc);
	TAILQ_INSERT_TAIL(&tcp_syn_cache_timeq[sc->sc_rxtshift], sc, sc_timeq);

	LIST_INSERT_HEAD(&tp->t_sc, sc, sc_tpq);

	LIST_INSERT_HEAD(&scp->sch_bucket, sc, sc_bucketq);
	scp->sch_length++;
	syn_cache_count++;

	tcp_stat.tcps_sc_added++;
	_sce_pspnet_splunlock(s);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001F4CC);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001F5A0);
#endif

#if FW_VERSION < 201
void syn_cache_timer(void)
{
	struct syn_cache *sc, *nsc;
	int i, s;

	s = _sce_pspnet_spllock();

	for (i = 0; i < TCP_MAXRXTSHIFT; i++) {
		for (sc = TAILQ_FIRST(&tcp_syn_cache_timeq[i]);
		     sc != NULL && PRT_SLOW_ISEXPIRED(sc->sc_rexmt);
		     sc = nsc) {
			nsc = TAILQ_NEXT(sc, sc_timeq);

			sc->sc_rxttot += sc->sc_rxtcur;
			if (sc->sc_rxttot >= TCPTV_KEEP_INIT) {
				tcp_stat.tcps_sc_timed_out++;
				SYN_CACHE_RM(sc);
				SYN_CACHE_PUT(sc);
				continue;
			}

			tcp_stat.tcps_sc_retransmitted++;
			(void) syn_cache_respond(sc, NULL);

			TAILQ_REMOVE(&tcp_syn_cache_timeq[i], sc, sc_timeq);
			sc->sc_rxtshift = i + 1;
			SYN_CACHE_TIMER_ARM(sc);
			TAILQ_INSERT_TAIL(&tcp_syn_cache_timeq[sc->sc_rxtshift],
			    sc, sc_timeq);
		}
	}

	for (sc = TAILQ_FIRST(&tcp_syn_cache_timeq[TCP_MAXRXTSHIFT]);
	     sc != NULL && PRT_SLOW_ISEXPIRED(sc->sc_rexmt);
	     sc = nsc) {
		nsc = TAILQ_NEXT(sc, sc_timeq);
		tcp_stat.tcps_sc_timed_out++;
		SYN_CACHE_RM(sc);
		SYN_CACHE_PUT(sc);
	}
	_sce_pspnet_splunlock(s);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", syn_cache_timer);
#endif

void syn_cache_cleanup(struct tcpcb *tp)
{
	struct syn_cache *sc, *nsc;
	int s;

	s = _sce_pspnet_spllock();

	for (sc = LIST_FIRST(&tp->t_sc); sc != NULL; sc = nsc) {
		nsc = LIST_NEXT(sc, sc_tpq);
		SYN_CACHE_RM(sc);
		SYN_CACHE_PUT(sc);
	}
	LIST_INIT(&tp->t_sc);

	_sce_pspnet_splunlock(s);
}

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001FBBC);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020260);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_000204E4);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020788);
#endif

#if FW_VERSION < 151
__inline struct syn_cache *syn_cache_lookup(struct sockaddr *src, struct sockaddr *dst, struct syn_cache_head **headp)
{
	struct syn_cache *sc;
	struct syn_cache_head *scp;
	u32 hash;
	int s;

	SYN_HASHALL(hash, src, dst);

	scp = &tcp_syn_cache[hash % tcp_syn_cache_size];
	*headp = scp;
	s = _sce_pspnet_spllock();
	for (sc = LIST_FIRST(&scp->sch_bucket); sc != NULL;
	     sc = LIST_NEXT(sc, sc_bucketq)) {
		if (sc->sc_hash != hash)
			continue;
		if (!func_0002C978(&sc->sc_src, src, src->sa_len) &&
		    !func_0002C978(&sc->sc_dst, dst, dst->sa_len)) {
			_sce_pspnet_splunlock(s);
			return (sc);
		}
	}
	_sce_pspnet_splunlock(s);
	return (NULL);
}

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_000215D8);

void syn_cache_reset(struct sockaddr *src, struct sockaddr *dst, struct tcphdr *th)
{
	struct syn_cache *sc;
	struct syn_cache_head *scp;
	int s = _sce_pspnet_spllock();

	if ((sc = syn_cache_lookup(src, dst, &scp)) == NULL) {
		_sce_pspnet_splunlock(s);
		return;
	}
	if (SEQ_LT(th->th_seq, sc->sc_irs) ||
	    SEQ_GT(th->th_seq, sc->sc_irs+1)) {
		_sce_pspnet_splunlock(s);
		return;
	}
	SYN_CACHE_RM(sc);
	_sce_pspnet_splunlock(s);
	tcp_stat.tcps_sc_reset++;
	SYN_CACHE_PUT(sc);
}

void syn_cache_unreach(struct sockaddr *src, struct sockaddr *dst, struct tcphdr *th)
{
	struct syn_cache *sc;
	struct syn_cache_head *scp;
	int s;

	s = _sce_pspnet_spllock();
	if ((sc = syn_cache_lookup(src, dst, &scp)) == NULL) {
		_sce_pspnet_splunlock(s);
		return;
	}
	if (ntohl (th->th_seq) != sc->sc_iss) {
		_sce_pspnet_splunlock(s);
		return;
	}

	if ((sc->sc_flags & SCF_UNREACH) == 0 || sc->sc_rxtshift < 3) {
		sc->sc_flags |= SCF_UNREACH;
		_sce_pspnet_splunlock(s);
		return;
	}

	SYN_CACHE_RM(sc);
	_sce_pspnet_splunlock(s);
	tcp_stat.tcps_sc_unreach++;
	SYN_CACHE_PUT(sc);
}

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_000222B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", syn_cache_respond);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_0001FFF0);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020690);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020914);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00020BB8);

INCLUDE_ASM("nonmatchings/pspnet_inet_udp", func_00021070);
#endif

void syn_cache_init(void) {
    s32 i;
    syn_cache_count = 0;
    for (i = 0; i < tcp_syn_cache_size; i++) {
        LIST_INIT(&tcp_syn_cache[i].sch_bucket);
    }
    for (i = 0; i < 13; i++) {
        TAILQ_INIT(&tcp_syn_cache_timeq[i]);
    }
}

#if FW_VERSION >= 151
INCLUDE_ASM("nonmatchings/pspnet_inet_udp", syn_cache_lookup);
#endif
