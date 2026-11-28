/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

#if FW_VERSION < 271
#define ADDCARRY(x)  (x > 65535 ? x -= 65535 : x)
#define REDUCE {l_util.l = sum; sum = l_util.s[0] + l_util.s[1]; ADDCARRY(sum);}

s32 in_cksum(struct mbuf *m, s32 len)
{
	u16 *w;
	int sum = 0;
	int mlen = 0;
	int byte_swapped = 0;

	union {
		u8  c[2];
		u16 s;
	} s_util;
	union {
		u16 s[2];
		u32 l;
	} l_util;

	for (;m && len; m = m->m_next) {
		if (m->m_len == 0)
			continue;
		w = mtod(m, u16 *);
		if (mlen == -1) {
			/*
			 * The first byte of this mbuf is the continuation
			 * of a word spanning between this mbuf and the
			 * last mbuf.
			 *
			 * s_util.c[0] is already saved when scanning previous 
			 * mbuf.
			 */
			s_util.c[1] = *(u8 *)w;
			sum += s_util.s;
			w = (u16 *)((u8 *)w + 1);
			mlen = m->m_len - 1;
			len--;
		} else
			mlen = m->m_len;
		if (len < mlen)
			mlen = len;
		len -= mlen;
		/*
		 * Force to even boundary.
		 */
		if ((1 & (s32)w) && (mlen > 0)) {
			REDUCE;
			sum <<= 8;
			s_util.c[0] = *(u8 *)w;
			w = (u16 *)((s8 *)w + 1);
			mlen--;
			byte_swapped = 1;
		}
		/*
		 * Unroll the loop to make overhead from
		 * branches &c small.
		 */
		while ((mlen -= 32) >= 0) {
			sum += w[0]; sum += w[1]; sum += w[2]; sum += w[3];
			sum += w[4]; sum += w[5]; sum += w[6]; sum += w[7];
			sum += w[8]; sum += w[9]; sum += w[10]; sum += w[11];
			sum += w[12]; sum += w[13]; sum += w[14]; sum += w[15];
			w += 16;
		}
		mlen += 32;
		while ((mlen -= 8) >= 0) {
			sum += w[0]; sum += w[1]; sum += w[2]; sum += w[3];
			w += 4;
		}
		mlen += 8;
		if (mlen == 0 && byte_swapped == 0)
			continue;
		REDUCE;
		while ((mlen -= 2) >= 0) {
			sum += *w++;
		}
		if (byte_swapped) {
			REDUCE;
			sum <<= 8;
			byte_swapped = 0;
			if (mlen == -1) {
				s_util.c[1] = *(u8 *)w;
				sum += s_util.s;
				mlen = 0;
			} else
				mlen = -1;
		} else if (mlen == -1)
			s_util.c[0] = *(u8 *)w;
	}

	if (mlen == -1) {
		/* The last mbuf has odd # of bytes. Follow the
		   standard (the odd byte may be shifted left by 8 bits
		   or not as determined by endian-ness of the machine) */
		s_util.c[1] = 0;
		sum += s_util.s;
	}
	REDUCE;
	return (~sum & 0xffff);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", in_cksum);
#endif

#if FW_VERSION < 282
s32 in_pcbbind(void *v, struct mbuf *nam) {
    struct inpcb *inp = v;
    struct socket *so = inp->inp_socket;
    struct inpcbtable *table = inp->inp_table;
    struct sockaddr_in *sin;
    u16 lport = 0;
    s32 wild = 0, reuseport = (so->so_options & 0x200); /* SO_REUSEPORT */

    if (in_ifaddrhead.tqh_first == 0) {
        return 125; /* EADDRNOTAVAIL */
    }
    if (inp->inp_lport || inp->inp_laddr.s_addr != __builtin_allegrex_wsbw(0)) {
        return 22; /* EINVAL */
    }
    if ((so->so_options & (0x4 | 0x200)) == 0) {
        wild = 1;
    }
    if (nam == 0) {
        goto noname;
    }
    sin = mtod(nam, struct sockaddr_in *);
    if (nam->m_len != sizeof(*sin)) {
        return 22;
    }
    lport = sin->sin_port;
    if (IN_MULTICAST(sin->sin_addr.s_addr)) {
        if (so->so_options & 0x4) {
            reuseport = 0x4 | 0x200;
        }
    } else if (sin->sin_addr.s_addr != __builtin_allegrex_wsbw(0)) {
        sin->sin_port = 0;
        if (ifa_ifwithaddr((struct sockaddr *)sin) == 0) {
            return 125;
        }
    }
    if (lport) {
        struct inpcb *t;

        t = in_pcblookup_port(table, sin->sin_addr, lport, wild);
        if (t && (reuseport & t->inp_socket->so_options) == 0) {
            return 112; /* EADDRINUSE */
        }
    }
    inp->inp_laddr = sin->sin_addr;

noname:
    if (lport == 0) {
        s32 cnt;
        u16 min, max;
        u16 *lastport;

        if (inp->inp_flags & 0x20) { /* INP_LOWPORT */
            min = D_0002E5F4;
            max = D_0002E5F8;
            lastport = &table->inpt_lastlow;
        } else {
            min = D_0002E5EC;
            max = D_0002E5F0;
            lastport = &table->inpt_lastport;
        }
        if (min > max) {
            u16 swp;

            swp = min;
            min = max;
            max = swp;
        }
        lport = *lastport - 1;
        for (cnt = max - min + 1; cnt; cnt--, lport--) {
            if (lport < min || lport > max) {
                lport = max;
            }
            if (!in_pcblookup_port(table, inp->inp_laddr, (u16)__builtin_allegrex_wsbh(lport), 1)) {
                goto found;
            }
        }
        if (inp->inp_laddr.s_addr != __builtin_allegrex_wsbw(0)) {
            inp->inp_laddr.s_addr = __builtin_allegrex_wsbw(0);
        }
        return 11; /* EAGAIN */
    found:
        inp->inp_flags |= 0x40; /* INP_ANONPORT */
        *lastport = lport;
        lport = __builtin_allegrex_wsbh(lport);
    }
    inp->inp_lport = lport;
    in_pcbstate(inp, INP_BOUND);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", in_pcbconnect);
#endif

#if FW_VERSION < 150
s32 in_pcbconnect(void *v, struct mbuf *nam) {
    struct inpcb *inp = v;
    struct in_ifaddr *ia;
    struct sockaddr_in *ifaddr = NULL;
    struct sockaddr_in *sin = mtod(nam, struct sockaddr_in *);
    s32 error;

    if (nam->m_len != sizeof(*sin)) {
        return 22; /* EINVAL */
    }
    if (sin->sin_family != AF_INET) {
        return 106; /* EAFNOSUPPORT */
    }
    if (sin->sin_port == 0) {
        return 125; /* EADDRNOTAVAIL */
    }
    if (in_ifaddrhead.tqh_first != 0) {
        if (sin->sin_addr.s_addr == __builtin_allegrex_wsbw(0)) {
            sin->sin_addr = in_ifaddrhead.tqh_first->ia_addr.sin_addr;
        } else if (sin->sin_addr.s_addr == __builtin_allegrex_wsbw(0xFFFFFFFF)) {
            for (ia = in_ifaddrhead.tqh_first; ia != NULL; ia = ia->ia_list.tqe_next) {
                if (ia->ia_ifp->if_flags & 0x2) { /* IFF_BROADCAST */
                    sin->sin_addr = ia->ia_broadaddr.sin_addr;
                    break;
                }
            }
        }
    }
    if (inp->inp_laddr.s_addr == __builtin_allegrex_wsbw(0)) {
        s32 error;
        ifaddr = in_selectsrc(sin, &inp->inp_route, inp->inp_socket->so_options, inp->inp_moptions, &error);
        if (ifaddr == NULL) {
            if (error == 0) {
                error = 125;
            }
            return error;
        }
    }
    if (in_pcblookup_connect(inp->inp_table, sin->sin_addr, sin->sin_port,
                             inp->inp_laddr.s_addr != __builtin_allegrex_wsbw(0) ? inp->inp_laddr : ifaddr->sin_addr,
                             inp->inp_lport) != 0) {
        return 112; /* EADDRINUSE */
    }
    if (inp->inp_laddr.s_addr == __builtin_allegrex_wsbw(0)) {
        if (inp->inp_lport == 0) {
            error = in_pcbbind(inp, NULL);
            if (error == 11) {
                return error;
            }
        }
        inp->inp_laddr = ifaddr->sin_addr;
    }
    inp->inp_faddr = sin->sin_addr;
    inp->inp_fport = sin->sin_port;
    in_pcbstate(inp, INP_CONNECTED);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00012D0C);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", in_cksum);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00013338);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_0001358C);
#endif

void in_pcbpurgeif(struct inpcbtable *table, struct ifnet *ifp) {
    struct inpcb *inp, *ninp;
    struct ip_moptions *imo;
    s32 i, gap;

    for (inp = table->inpt_queue.cqh_first;
         inp != (void *)&table->inpt_queue;
         inp = ninp) {
        ninp = inp->inp_queue.cqe_next;
        if (inp->inp_route.ro_rt != NULL &&
            inp->inp_route.ro_rt->rt_ifp == ifp)
            in_rtchange(inp, 0);
        imo = inp->inp_moptions;
        if (imo != NULL) {
            if (imo->imo_multicast_ifp == ifp)
                imo->imo_multicast_ifp = NULL;
            for (i = 0, gap = 0; i < imo->imo_num_memberships; i++) {
                if (imo->imo_membership[i]->inm_ifp == ifp) {
                    in_delmulti(imo->imo_membership[i]);
                    gap++;
                } else if (gap != 0)
                    imo->imo_membership[i - gap] = imo->imo_membership[i];
            }
            imo->imo_num_memberships -= gap;
        }
    }
}

void in_rtchange(struct inpcb *inp, s32 errno) {
    if (inp->inp_route.ro_rt) {
        rtfree(inp->inp_route.ro_rt);
        inp->inp_route.ro_rt = NULL;
    }
}

#if FW_VERSION < 282
struct inpcb *in_pcblookup_port(struct inpcbtable *table, struct in_addr laddr, u32 lport_arg, s32 lookup_wildcard) {
    struct inpcb *inp, *match = NULL;
    s32 matchwild = 3, wildcard;
    u16 lport = lport_arg;

    for (inp = table->inpt_queue.cqh_first; inp != (struct inpcb *)&table->inpt_queue; inp = inp->inp_queue.cqe_next) {
        if (inp->inp_lport != lport) {
            continue;
        }
        wildcard = 0;
        if (inp->inp_faddr.s_addr != __builtin_allegrex_wsbw(0)) {
            wildcard++;
        }
        if (inp->inp_laddr.s_addr == __builtin_allegrex_wsbw(0)) {
            if (laddr.s_addr != __builtin_allegrex_wsbw(0)) {
                wildcard++;
            }
        } else {
            if (laddr.s_addr == __builtin_allegrex_wsbw(0)) {
                wildcard++;
            } else {
                if (inp->inp_laddr.s_addr != laddr.s_addr) {
                    continue;
                }
            }
        }
        if (wildcard && !lookup_wildcard) {
            continue;
        }
        if (wildcard < matchwild) {
            match = inp;
            matchwild = wildcard;
            if (matchwild == 0) {
                break;
            }
        }
    }
    return match;
}

struct inpcb *in_pcblookup_connect(struct inpcbtable *table, struct in_addr faddr, u32 fport_arg, struct in_addr laddr, u32 lport_arg) {
    struct inpcbhead *head;
    struct inpcb *inp;
    u16 fport = fport_arg, lport = lport_arg;

    head = INPCBHASH_CONNECT(table, faddr, fport, laddr, lport);
    for (inp = head->lh_first; inp != NULL; inp = inp->inp_hash.le_next) {
        if (inp->inp_faddr.s_addr == faddr.s_addr &&
            inp->inp_fport == fport &&
            inp->inp_lport == lport &&
            inp->inp_laddr.s_addr == laddr.s_addr) {
            goto out;
        }
    }
    return NULL;

out:
    if (inp != head->lh_first) {
        LIST_REMOVE(inp, inp_hash);
        LIST_INSERT_HEAD(head, inp, inp_hash);
    }
    return inp;
}

struct inpcb *in_pcblookup_bind(struct inpcbtable *table, struct in_addr laddr, u32 lport_arg) {
    struct inpcbhead *head;
    struct inpcb *inp;
    u16 lport = lport_arg;

    head = INPCBHASH_BIND(table, laddr, lport);
    for (inp = head->lh_first; inp != NULL; inp = inp->inp_hash.le_next) {
        if (inp->inp_lport == lport && inp->inp_laddr.s_addr == laddr.s_addr) {
            goto out;
        }
    }
    head = INPCBHASH_BIND(table, zeroin_addr, lport);
    for (inp = head->lh_first; inp != NULL; inp = inp->inp_hash.le_next) {
        if (inp->inp_lport == lport && inp->inp_laddr.s_addr == zeroin_addr.s_addr) {
            goto out;
        }
    }
    return NULL;

out:
    if (inp != head->lh_first) {
        LIST_REMOVE(inp, inp_hash);
        LIST_INSERT_HEAD(head, inp, inp_hash);
    }
    return inp;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000138F0);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000139A8);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00013A94);
#endif

void in_pcbstate(struct inpcb *inp, s32 state) {
    if (inp->inp_state > INP_ATTACHED) {
        LIST_REMOVE(inp, inp_hash);
    }
    switch (state) {
    case INP_BOUND:
        LIST_INSERT_HEAD(INPCBHASH_BIND(inp->inp_table, inp->inp_laddr, inp->inp_lport), inp, inp_hash);
        break;
    case INP_CONNECTED:
        LIST_INSERT_HEAD(INPCBHASH_CONNECT(inp->inp_table, inp->inp_faddr, inp->inp_fport, inp->inp_laddr, inp->inp_lport), inp, inp_hash);
        break;
    }
    inp->inp_state = state;
}

#if FW_VERSION < 282
struct sockaddr_in *in_selectsrc(struct sockaddr_in *sin, struct route *ro, s32 soopts, struct ip_moptions *mopts, s32 *errorp) {
    struct in_ifaddr *ia;

    ia = NULL;
    if (ro->ro_rt &&
        (((struct sockaddr_in *)&ro->ro_dst)->sin_addr.s_addr != sin->sin_addr.s_addr || soopts & 0x10)) {
        RTFREE(ro->ro_rt);
        ro->ro_rt = NULL;
    }
    if ((soopts & 0x10) == 0 && (ro->ro_rt == NULL || ro->ro_rt->rt_ifp == NULL)) {
        ro->ro_dst.sa_family = AF_INET;
        ro->ro_dst.sa_len = sizeof(struct sockaddr_in);
        ((struct sockaddr_in *)&ro->ro_dst)->sin_addr = sin->sin_addr;
        rtalloc(ro);
    }
    if (ro->ro_rt && !(ro->ro_rt->rt_ifp->if_flags & IFF_LOOPBACK)) {
        ia = (struct in_ifaddr *)ro->ro_rt->rt_ifa;
    }
    if (ia == NULL) {
        u16 fport = sin->sin_port;

        sin->sin_port = 0;
        ia = (struct in_ifaddr *)ifa_ifwithladdr((struct sockaddr *)sin);
        sin->sin_port = fport;
        if (ia == 0) {
            for (ia = in_ifaddrhead.tqh_first; ia != NULL; ia = ia->ia_list.tqe_next) {
                if (!(ia->ia_ifp->if_flags & IFF_LOOPBACK)) {
                    break;
                }
            }
        }
        if (ia == NULL) {
            *errorp = 125;
            return NULL;
        }
    }
    if (IN_MULTICAST(sin->sin_addr.s_addr) && mopts != NULL) {
        struct ip_moptions *imo;
        struct ifnet *ifp;

        imo = mopts;
        if (imo->imo_multicast_ifp != NULL) {
            ifp = imo->imo_multicast_ifp;
            IFP_TO_IA(ifp, ia);
            if (ia == 0) {
                *errorp = 125;
                return NULL;
            }
        }
    }
    return &ia->ia_addr;
}

void in_pcbinit(struct inpcbtable *table, s32 bindhashsize, s32 connecthashsize) {
    table->inpt_queue.cqh_first = (struct inpcb *)table;
    table->inpt_queue.cqh_last = (struct inpcb *)table;
    table->inpt_bindhashtbl = _sce_pspnet_hashinit(bindhashsize, &table->inpt_bindhash);
    table->inpt_connecthashtbl = _sce_pspnet_hashinit(connecthashsize, &table->inpt_connecthash);
    table->inpt_lastlow = 0x3FF; /* IPPORT_RESERVEDMAX */
    table->inpt_lastport = (u16)D_0002E5EC + (sceNetRand() % (u32)((D_0002E5F0 - D_0002E5EC) + 1));
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00013CC4);

void in_pcbinit(struct inpcbtable *table, s32 bindhashsize, s32 connecthashsize) {
    table->inpt_queue.cqh_first = (struct inpcb *)table;
    table->inpt_queue.cqh_last = (struct inpcb *)table;
    table->inpt_bindhashtbl = _sce_pspnet_hashinit(bindhashsize, &table->inpt_bindhash);
    table->inpt_connecthashtbl = _sce_pspnet_hashinit(connecthashsize, &table->inpt_connecthash);
    table->inpt_lastlow = 0x3FF; /* IPPORT_RESERVEDMAX */
    table->inpt_lastport = (u16)D_0002C02C + (sceNetRand() % (u32)((D_0002C030 - D_0002C02C) + 1));
}
#endif

#if FW_VERSION < 201
s32 in_pcballoc(struct socket *so, void *v) {
    struct inpcbtable *table = v;
    struct inpcb *inp;
    s32 s;

    inp = sceNetMallocInternal(sizeof(*inp));
    if (inp == NULL) {
        return 105; /* ENOBUFS */
    }
    func_0002C94C(inp, 0, sizeof(*inp));
    inp->inp_table = table;
    inp->inp_socket = so;
    inp->inp_errormtu = -1;
    so->so_pcb = inp;
    s = _sce_pspnet_spllock();
    CIRCLEQ_INSERT_HEAD(&table->inpt_queue, inp, inp_queue);
    in_pcbstate(inp, INP_ATTACHED);
    _sce_pspnet_splunlock(s);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", in_pcballoc);
#endif

void in_pcbdisconnect(void *v) {
    struct inpcb *inp = v;

    inp->inp_faddr = zeroin_addr;
    inp->inp_fport = 0;
    in_pcbstate(inp, INP_BOUND);
    if (inp->inp_socket->so_state & SS_NOFDREF) {
        struct socket *so = inp->inp_socket;
        s32 s;

        so->so_pcb = NULL;
        sofree(so);
        if (inp->inp_options) {
            (void)sceNetMFree(inp->inp_options);
        }
        if (inp->inp_route.ro_rt) {
            rtfree(inp->inp_route.ro_rt);
        }
        ip_freemoptions(inp->inp_moptions);
        s = _sce_pspnet_spllock();
        in_pcbstate(inp, INP_ATTACHED);
        CIRCLEQ_REMOVE(&inp->inp_table->inpt_queue, inp, inp_queue);
        _sce_pspnet_splunlock(s);
        sceNetFreeInternal(inp);
    }
}

void in_pcbdetach(void *v) {
    struct inpcb *inp = v;
    struct socket *so = inp->inp_socket;
    s32 s;

    so->so_pcb = NULL;
    sofree(so);
    if (inp->inp_options) {
        (void)sceNetMFree(inp->inp_options);
    }
    if (inp->inp_route.ro_rt) {
        rtfree(inp->inp_route.ro_rt);
    }
    ip_freemoptions(inp->inp_moptions);
    s = _sce_pspnet_spllock();
    in_pcbstate(inp, INP_ATTACHED);
    CIRCLEQ_REMOVE(&inp->inp_table->inpt_queue, inp, inp_queue);
    _sce_pspnet_splunlock(s);
    sceNetFreeInternal(inp);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00014260);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000142CC);
#endif

#if FW_VERSION < 201
void in_setsockaddr(struct inpcb *inp, struct mbuf *nam) {
    struct sockaddr_in *sin;

    nam->m_len = sizeof(*sin);
    sin = mtod(nam, struct sockaddr_in *);
    __builtin_memset(sin, 0, sizeof(*sin));
    sin->sin_family = AF_INET;
    sin->sin_len = sizeof(*sin);
    sin->sin_port = inp->inp_lport;
    sin->sin_addr = inp->inp_laddr;
}

void in_setpeeraddr(struct inpcb *inp, struct mbuf *nam) {
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

#if FW_VERSION < 282
s32 in_pcbnotify(struct inpcbtable *table, struct in_addr faddr, u32 fport_arg, struct in_addr laddr, u32 lport_arg,
                  s32 errno, void (*notify)(struct inpcb *, s32)) {
    struct inpcbhead *head;
    struct inpcb *inp, *ninp;
    u16 fport = fport_arg, lport = lport_arg;
    s32 nmatch;

    if (faddr.s_addr == __builtin_allegrex_wsbw(0) || notify == NULL) {
        return 0;
    }
    nmatch = 0;
    head = INPCBHASH_CONNECT(table, faddr, fport, laddr, lport);
    for (inp = head->lh_first; inp != NULL; inp = ninp) {
        ninp = inp->inp_hash.le_next;
        if (inp->inp_faddr.s_addr == faddr.s_addr && inp->inp_fport == fport &&
            inp->inp_lport == lport && inp->inp_laddr.s_addr == laddr.s_addr) {
            (*notify)(inp, errno);
            nmatch++;
        }
    }
    return nmatch;
}

void in_pcbnotifyall(struct inpcbtable *table, struct in_addr faddr, s32 errno, void (*notify)(struct inpcb *, s32)) {
    struct inpcb *inp, *ninp;

    if (faddr.s_addr == __builtin_allegrex_wsbw(0) || notify == NULL) {
        return;
    }
    for (inp = table->inpt_queue.cqh_first; inp != (struct inpcb *)&table->inpt_queue; inp = ninp) {
        ninp = inp->inp_queue.cqe_next;
        if (inp->inp_faddr.s_addr == faddr.s_addr) {
            (*notify)(inp, errno);
        }
    }
}
#endif

#if FW_VERSION < 201
void in_losing(struct inpcb *inp) {
    struct rtentry *rt;
    struct rt_addrinfo info;

    if ((rt = inp->inp_route.ro_rt)) {
        inp->inp_route.ro_rt = NULL;
        __builtin_memset(&info, 0, sizeof(info));
        info.rti_info[0] = &inp->inp_route.ro_dst;
        info.rti_info[1] = rt->rt_gateway;
        info.rti_info[2] = (struct sockaddr *)rt->rt_nodes[0].rn_mask;
        rt_missmsg(5, &info, rt->rt_flags, 0);
        if (rt->rt_flags & RTF_DYNAMIC) {
            (void)rtrequest(RTM_DELETE, rt->rt_nodes[0].rn_key, rt->rt_gateway, rt->rt_nodes[0].rn_mask, rt->rt_flags, NULL);
        } else {
            rtfree(rt);
        }
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", in_losing);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000141EC);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00014258);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000142C4);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000143E0);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00014480);
#endif

struct rtentry *in_pcbrtentry(struct inpcb *inp) {
    struct route *ro = &inp->inp_route;

    if (ro->ro_rt == NULL && inp->inp_faddr.s_addr != __builtin_allegrex_wsbw(0)) {
        ro->ro_dst.sa_family = AF_INET;
        ro->ro_dst.sa_len = sizeof(struct sockaddr_in);
        ((struct sockaddr_in *)&ro->ro_dst)->sin_addr = inp->inp_faddr;
        rtalloc(ro);
    }
    return ro->ro_rt;
}

#if FW_VERSION < 201
void func_00014588(void) {
    tcp_syn_cache_size = 0x125;
    tcp_syn_cache_limit = 0x280F;
    tcp_syn_bucket_limit = 0x69;
    func_0002C94C(tcp_syn_cache, 0, 0x928);
    tcp_syn_cache_interval = 1;
    D_0002E7A4 = 100;
    D_0002C1E8 = 100;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00014588(void) {
    tcp_syn_cache_size = 0x125;
    D_0002C228 = 0x280F;
    D_0002C22C = 0x69;
    sceNetMemset(tcp_syn_cache, 0, 0x928);
    tcp_syn_cache_interval = 1;
    D_0002C234 = 100;
    D_0002C1E8 = 100;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00014588);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00014668);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_init);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000145F4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_input);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000150C8);

#if FW_VERSION < 282
void ip_freef(struct Unk_func_00015654_0 *arg0) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00015278);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_rtaddr);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00015ADC);

struct in_ifaddr *ip_rtaddr(struct in_addr dst) {
    struct sockaddr_in *sin;

    sin = (struct sockaddr_in *)&D_0002FF98.ro_dst;
    if (D_0002FF98.ro_rt == 0 || dst.s_addr != sin->sin_addr.s_addr) {
        if (D_0002FF98.ro_rt) {
            RTFREE(D_0002FF98.ro_rt);
            D_0002FF98.ro_rt = 0;
        }
        sin->sin_family = AF_INET;
        sin->sin_len = sizeof(*sin);
        sin->sin_addr = dst;
        rtalloc(&D_0002FF98);
    }
    if (D_0002FF98.ro_rt == 0) {
        return NULL;
    }
    return (struct in_ifaddr *)D_0002FF98.ro_rt->rt_ifa;
}
#endif

#if FW_VERSION >= 282
void ip_freef(struct Unk_func_00015654_0 *arg0) {
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

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000156F8);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00015BD8);
#endif

#if FW_VERSION < 201
void save_rte(u8 *option, struct in_addr dst) {
    u32 olen;

    olen = option[1];
    if (olen > sizeof(ip_srcrt) - (1 + sizeof(dst)))
        return;
    func_0002C9B8(option, ip_srcrt.srcopt, olen);
    ip_nhops = (olen - 2 - 1) / sizeof(struct in_addr);
    ip_srcrt.dst = dst;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", save_rte);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00015888);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000161A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00015CFC);
#endif

void ip_savecontrol(struct inpcb *inp, struct mbuf **mp, struct ip *ip, struct mbuf *m) {
    if (inp->inp_socket->so_options & 0x400) { /* SO_TIMESTAMP */
        struct timeval tv;

        _sce_pspnet_microtime(&tv);
        *mp = sbcreatecontrol(&tv, sizeof(tv), 2 /* SCM_TIMESTAMP */, 0xFFFF /* SOL_SOCKET */);
        if (*mp) {
            mp = &(*mp)->m_next;
        }
    }
    if (inp->inp_flags & 0x4) { /* INP_RECVDSTADDR */
        *mp = sbcreatecontrol(&ip->ip_dst, sizeof(struct in_addr), 7 /* IP_RECVDSTADDR */, 0 /* IPPROTO_IP */);
        if (*mp) {
            mp = &(*mp)->m_next;
        }
    }
    if (inp->inp_flags & 0x80) { /* INP_RECVIF */
        struct sockaddr_dl sdl;

        sdl.sdl_len = 8; /* offsetof(struct sockaddr_dl, sdl_data[0]) */
        sdl.sdl_family = 18; /* AF_LINK */
        sdl.sdl_index = m->m_pkthdr.rcvif ? m->m_pkthdr.rcvif->if_index : 0;
        sdl.sdl_nlen = sdl.sdl_alen = sdl.sdl_slen = 0;
        *mp = sbcreatecontrol(&sdl, sdl.sdl_len, 20 /* IP_RECVIF */, 0 /* IPPROTO_IP */);
        if (*mp) {
            mp = &(*mp)->m_next;
        }
    }
}

INCLUDE_RODATA("nonmatchings/pspnet_inet_in_cksum2", D_0002B764);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000161F0);

void ipintr(void) {
    struct mbuf *m;
    s32 s;

    for (;;) {
        s = _sce_pspnet_spllock();
        IF_DEQUEUE(&ipintrq, m);
        _sce_pspnet_splunlock(s);
        if (m == NULL) {
            return;
        }
        ip_input(m);
    }
}

void ip_slowtimo(void) {
    struct ipq *fp, *nfp;
    s32 s = _sce_pspnet_spllock();

    ipq_lock_try();
    for (fp = D_0002DA48.lh_first; fp != NULL; fp = nfp) {
        nfp = fp->ipq_q.le_next;
        if (--fp->ipq_ttl == 0) {
            D_0002D960.ips_fragtimeout++;
            ip_freef(fp);
        }
    }
    if (D_0002C208 < 0) {
        ;
    } else {
        while (D_0002C57C > D_0002C208 && D_0002DA48.lh_first) {
            ip_freef(D_0002DA48.lh_first);
        }
    }
    ipq_unlock();
    _sce_pspnet_splunlock(s);
}

void ip_drain(void) {
    if (ipq_lock_try() == 0) {
        return;
    }
    while (D_0002DA48.lh_first != NULL) {
        D_0002D960.ips_fragdropped++;
        ip_freef(D_0002DA48.lh_first);
    }
    ipq_unlock();
}

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00016830);
#endif

#if FW_VERSION < 201
struct mbuf *ip_srcroute(void) {
    struct in_addr *p, *q;
    struct mbuf *m;

    if (ip_nhops == 0)
        return ((struct mbuf *)0);
    m = sceNetMGet(1, 4);
    if (m == 0)
        return ((struct mbuf *)0);

#define OPTSIZ (sizeof(ip_srcrt.nop) + sizeof(ip_srcrt.srcopt))
    m->m_len = ip_nhops * sizeof(struct in_addr) + sizeof(struct in_addr) + OPTSIZ;
    p = &ip_srcrt.route[ip_nhops - 1];
    *(mtod(m, struct in_addr *)) = *p--;
    ip_srcrt.nop = 1;
    ip_srcrt.srcopt[2] = 4;
    func_0002C9B8((char *)&ip_srcrt.nop, mtod(m, char *) + sizeof(struct in_addr), OPTSIZ);
    q = (struct in_addr *)(mtod(m, char *) + sizeof(struct in_addr) + OPTSIZ);
#undef OPTSIZ
    while (p >= ip_srcrt.route) {
        *q++ = *p--;
    }
    *q = ip_srcrt.dst;
    return (m);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_srcroute);
#endif

#if FW_VERSION < 201
void ip_stripoptions(struct mbuf *m, struct mbuf *mopt) {
    s32 i;
    struct ip *ip = mtod(m, struct ip *);
    u8 *opts;
    s32 olen;

    olen = ((ip->ip_hl_v & 0xF) << 2) - sizeof(struct ip);
    opts = (u8 *)(ip + 1);
    i = m->m_len - (sizeof(struct ip) + olen);
    func_0002C9B8(opts + olen, opts, (u32)i);
    m->m_len -= olen;
    if (m->m_flags & M_PKTHDR) {
        m->m_pkthdr.len -= olen;
    }
    ip->ip_len -= olen;
    ip->ip_hl_v = (ip->ip_hl_v & 0xF0) | (sizeof(struct ip) >> 2);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_stripoptions);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_output);

#if FW_VERSION < 201
struct mbuf *ip_insertoptions(struct mbuf *m, struct mbuf *opt, s32 *phlen) {
    struct ipoption *p = mtod(opt, struct ipoption *);
    struct mbuf *n;
    struct ip *ip = mtod(m, struct ip *);
    u32 optlen;
    s32 max_linkhdr;

    optlen = opt->m_len - sizeof(p->ipopt_dst);
    if (optlen + (u16)ip->ip_len > 0xFFFF)
        return (m);
    if (p->ipopt_dst.s_addr != __builtin_allegrex_wsbw(0))
        ip->ip_dst = p->ipopt_dst;
    if (m->m_flags & M_EXT || m->m_data - optlen < (u8 *)&m->m_ext) {
        n = sceNetMallocInternal(MSIZE);
        if (n == 0)
            return (m);
        n->m_type = MT_HEADER;
        n->m_flags = M_PKTHDR;
        n->m_data = (u8 *)&n->m_ext;
        n->m_nextpkt = NULL;
        n->m_pkthdr.aux = NULL;
        n->m_pkthdr.len = m->m_pkthdr.len + optlen;
        m->m_len -= sizeof(struct ip);
        m->m_data += sizeof(struct ip);
        n->m_next = m;
        m = n;
        m->m_len = optlen + sizeof(struct ip);
        sceNetIfhandle_lib_5FB31C72(&max_linkhdr, NULL, NULL, NULL);
        m->m_data += max_linkhdr;
        func_0002C9B8((char *)ip, mtod(m, char *), sizeof(struct ip));
    } else {
        m->m_data -= optlen;
        m->m_len += optlen;
        m->m_pkthdr.len += optlen;
        func_0002C864(mtod(m, char *), ip, sizeof(struct ip));
    }
    ip = mtod(m, struct ip *);
    func_0002C9B8((char *)p->ipopt_list, (char *)(ip + 1), (u32)optlen);
    *phlen = sizeof(struct ip) + optlen;
    ip->ip_len += optlen;
    return (m);
}
#else
struct mbuf *ip_insertoptions(struct mbuf *m, struct mbuf *opt, s32 *phlen) {
    struct ipoption *p = mtod(opt, struct ipoption *);
    struct mbuf *n;
    struct ip *ip = mtod(m, struct ip *);
    u32 optlen;
    s32 max_linkhdr;

    optlen = opt->m_len - sizeof(p->ipopt_dst);
    if (optlen + (u16)ip->ip_len > 0xFFFF)
        return (m);
    if (p->ipopt_dst.s_addr != __builtin_allegrex_wsbw(0))
        ip->ip_dst = p->ipopt_dst;
    if (m->m_flags & M_EXT || m->m_data - optlen < (u8 *)&m->m_ext) {
        n = sceNetMallocInternal(MSIZE);
        if (n == 0)
            return (m);
        n->m_type = MT_HEADER;
        n->m_flags = M_PKTHDR;
        n->m_data = (u8 *)&n->m_ext;
        n->m_nextpkt = NULL;
        n->m_pkthdr.aux = NULL;
        n->m_pkthdr.len = m->m_pkthdr.len + optlen;
        m->m_len -= sizeof(struct ip);
        m->m_data += sizeof(struct ip);
        n->m_next = m;
        m = n;
        m->m_len = optlen + sizeof(struct ip);
        sceNetIfhandle_lib_5FB31C72(&max_linkhdr, NULL, NULL, NULL);
        m->m_data += max_linkhdr;
        sceNetBcopy((char *)ip, mtod(m, char *), sizeof(struct ip));
    } else {
        m->m_data -= optlen;
        m->m_len += optlen;
        m->m_pkthdr.len += optlen;
        sceNetMemmove(mtod(m, char *), ip, sizeof(struct ip));
    }
    ip = mtod(m, struct ip *);
    sceNetBcopy((char *)p->ipopt_list, (char *)(ip + 1), (u32)optlen);
    *phlen = sizeof(struct ip) + optlen;
    ip->ip_len += optlen;
    return (m);
}
#endif

#if FW_VERSION < 201
s32 ip_optcopy(struct ip *ip, struct ip *jp) {
    u8 *cp, *dp;
    s32 opt, optlen, cnt;

    cp = (u8 *)(ip + 1);
    dp = (u8 *)(jp + 1);
    cnt = ((ip->ip_hl_v & 0xF) << 2) - sizeof(struct ip);
    for (; cnt > 0; cnt -= optlen, cp += optlen) {
        opt = cp[0];
        if (opt == 0) { /* IPOPT_EOL */
            break;
        }
        if (opt == 1) { /* IPOPT_NOP */
            *dp++ = 1;
            optlen = 1;
            continue;
        }
        optlen = cp[1];
        if (optlen > cnt) {
            optlen = cnt;
        }
        if (opt & 0x80) { /* IPOPT_COPIED */
            func_0002C9B8(cp, dp, (u32)optlen);
            dp += optlen;
        }
    }
    for (optlen = dp - (u8 *)(jp + 1); optlen & 0x3; optlen++) {
        *dp++ = 0;
    }
    return optlen;
}
#else
s32 ip_optcopy(struct ip *ip, struct ip *jp) {
    u8 *cp, *dp;
    s32 opt, optlen, cnt;

    cp = (u8 *)(ip + 1);
    dp = (u8 *)(jp + 1);
    cnt = ((ip->ip_hl_v & 0xF) << 2) - sizeof(struct ip);
    for (; cnt > 0; cnt -= optlen, cp += optlen) {
        opt = cp[0];
        if (opt == 0) { /* IPOPT_EOL */
            break;
        }
        if (opt == 1) { /* IPOPT_NOP */
            *dp++ = 1;
            optlen = 1;
            continue;
        }
        optlen = cp[1];
        if (optlen > cnt) {
            optlen = cnt;
        }
        if (opt & 0x80) { /* IPOPT_COPIED */
            sceNetBcopy(cp, dp, (u32)optlen);
            dp += optlen;
        }
    }
    for (optlen = dp - (u8 *)(jp + 1); optlen & 0x3; optlen++) {
        *dp++ = 0;
    }
    return optlen;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_0001788C);
#endif

#if FW_VERSION < 201
s32 ip_ctloutput(s32 op, struct socket *so, s32 level, s32 optname, struct mbuf **mp) {
    struct inpcb *inp = (struct inpcb *)so->so_pcb;
    struct mbuf *m = *mp;
    s32 optval = 0;
    s32 error = 0;

    if (level != 0) {
        error = 0x16;
        if (op == 1 && *mp)
            (void)sceNetMFree(*mp);
    } else switch (op) {
    case 1:
        switch (optname) {
        case 1:
            return (ip_pcbopts(&inp->inp_options, m));
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 20:
            if (m == NULL || m->m_len != sizeof(s32))
                error = 0x16;
            else {
                optval = *mtod(m, s32 *);
                switch (optname) {
                case 3:
                    inp->inp_ip.ip_tos = optval;
                    break;
                case 4:
                    inp->inp_ip.ip_ttl = optval;
                    break;
#define OPTSET(bit) \
    if (optval) \
        inp->inp_flags |= bit; \
    else \
        inp->inp_flags &= ~bit;
                case 5:
                    OPTSET(0x1);
                    break;
                case 6:
                    OPTSET(0x2);
                    break;
                case 7:
                    OPTSET(0x4);
                    break;
                case 20:
                    OPTSET(0x80);
                    break;
                }
            }
            break;
#undef OPTSET
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            error = ip_setmoptions(optname, &inp->inp_moptions, m);
            break;
        case 19:
            if (m == 0 || m->m_len != sizeof(s32))
                error = 0x16;
            else {
                optval = *mtod(m, s32 *);
                switch (optval) {
                case 0:
                case 1:
                    inp->inp_flags &= ~(0x20);
                    break;
                case 2:
                    inp->inp_flags |= 0x20;
                    break;
                default:
                    error = 0x16;
                    break;
                }
            }
            break;
        default:
            error = 0x6D;
            break;
        }
        if (m)
            (void)sceNetMFree(m);
        break;
    case 0:
        switch (optname) {
        case 1:
        case 8:
            *mp = m = sceNetMGet(0, 4);
            if (m == NULL) {
                error = 0x69;
                break;
            }
            if (inp->inp_options) {
                m->m_len = inp->inp_options->m_len;
                func_0002C9B8(mtod(inp->inp_options, char *), mtod(m, char *), (u32)m->m_len);
            } else
                m->m_len = 0;
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 20:
        case 21:
            *mp = m = sceNetMGet(0, 4);
            if (m == NULL) {
                error = 0x69;
                break;
            }
            m->m_len = sizeof(s32);
            switch (optname) {
            case 3:
                optval = inp->inp_ip.ip_tos;
                break;
            case 4:
                optval = inp->inp_ip.ip_ttl;
                break;
            case 21:
                optval = inp->inp_errormtu;
                break;
#define OPTBIT(bit) (inp->inp_flags & bit ? 1 : 0)
            case 5:
                optval = OPTBIT(0x1);
                break;
            case 6:
                optval = OPTBIT(0x2);
                break;
            case 7:
                optval = OPTBIT(0x4);
                break;
            case 20:
                optval = OPTBIT(0x80);
                break;
            }
            *mtod(m, s32 *) = optval;
            break;
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            error = ip_getmoptions(optname, inp->inp_moptions, mp);
            break;
        case 19:
            *mp = m = sceNetMGet(0, 4);
            if (m == NULL) {
                error = 0x69;
                break;
            }
            m->m_len = sizeof(s32);
            if (inp->inp_flags & 0x20)
                optval = 2;
            else
                optval = 0;
            *mtod(m, s32 *) = optval;
            break;
        default:
            error = 0x6D;
            break;
        }
        break;
    }
    return (error);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_ctloutput);
#endif

#if FW_VERSION < 201
s32 ip_pcbopts(struct mbuf **pcbopt, struct mbuf *m) {
    s32 cnt, optlen;
    u8 *cp;
    u8 opt;

    if (*pcbopt)
        (void)sceNetMFree(*pcbopt);
    *pcbopt = 0;
    if (m == (struct mbuf *)0 || m->m_len == 0) {
        if (m)
            (void)sceNetMFree(m);
        return (0);
    }
    if (m->m_len % sizeof(s32))
        goto bad;
    if (m->m_data + m->m_len + sizeof(struct in_addr) >= (u8 *)&m->m_pkthdr + MLEN)
        goto bad;
    cnt = m->m_len;
    m->m_len += sizeof(struct in_addr);
    cp = mtod(m, u8 *) + sizeof(struct in_addr);
    func_0002C864(cp, mtod(m, u8 *), (u32)cnt);
    __builtin_memset(mtod(m, u8 *), 0, sizeof(struct in_addr));

    for (; cnt > 0; cnt -= optlen, cp += optlen) {
        opt = cp[0];
        if (opt == 0)
            break;
        if (opt == 1)
            optlen = 1;
        else {
            if (cnt < 1 + sizeof(*cp))
                goto bad;
            optlen = cp[1];
            if (optlen < 1 + sizeof(*cp) || optlen > cnt)
                goto bad;
        }
        switch (opt) {
        default:
            break;
        case 0x83:
        case 0x89:
            if (optlen < 4 - 1 + sizeof(struct in_addr))
                goto bad;
            m->m_len -= sizeof(struct in_addr);
            cnt -= sizeof(struct in_addr);
            optlen -= sizeof(struct in_addr);
            cp[1] = optlen;
            func_0002C9B8((char *)&cp[2 + 1], mtod(m, char *), sizeof(struct in_addr));
            func_0002C864(&cp[2 + 1], (char *)(&cp[2 + 1] + sizeof(struct in_addr)),
                          (u32)cnt + sizeof(struct in_addr));
            break;
        }
    }
    if (m->m_len > 40 + sizeof(struct in_addr))
        goto bad;
    *pcbopt = m;
    return (0);

bad:
    (void)sceNetMFree(m);
    return (0x16);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_pcbopts);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 ip_setmoptions(s32 optname, struct ip_moptions **imop, struct mbuf *m) {
    s32 error = 0;
    u8 loop;
    s32 i;
    struct in_addr addr;
    struct ip_mreq *mreq;
    struct ifnet *ifp;
    struct ip_moptions *imo = *imop;
    struct route ro;
    struct sockaddr_in *dst;

    if (imo == NULL) {
        imo = (struct ip_moptions *)sceNetMallocInternal(sizeof(*imo));
        if (imo == NULL)
            return (0x69);
        *imop = imo;
        imo->imo_multicast_ifp = NULL;
        imo->imo_multicast_ttl = 1;
        imo->imo_multicast_loop = 1;
        imo->imo_num_memberships = 0;
    }

    switch (optname) {
    case 9:
        if (m == NULL || m->m_len != sizeof(struct in_addr)) {
            error = 0x16;
            break;
        }
        addr = *(mtod(m, struct in_addr *));
        if (addr.s_addr == __builtin_allegrex_wsbw(0)) {
            imo->imo_multicast_ifp = NULL;
            break;
        }
        INADDR_TO_IFP(addr, ifp);
        if (ifp == NULL || (ifp->if_flags & IFF_MULTICAST) == 0) {
            error = 0x7D;
            break;
        }
        imo->imo_multicast_ifp = ifp;
        break;
    case 10:
        if (m == NULL || m->m_len != 1) {
            error = 0x16;
            break;
        }
        imo->imo_multicast_ttl = *(mtod(m, u8 *));
        break;
    case 11:
        if (m == NULL || m->m_len != 1 ||
            (loop = *(mtod(m, u8 *))) > 1) {
            error = 0x16;
            break;
        }
        imo->imo_multicast_loop = loop;
        break;
    case 12:
        if (m == NULL || m->m_len != sizeof(struct ip_mreq)) {
            error = 0x16;
            break;
        }
        mreq = mtod(m, struct ip_mreq *);
        if (!IN_MULTICAST(mreq->imr_multiaddr.s_addr)) {
            error = 0x16;
            break;
        }
        if (mreq->imr_interface.s_addr == __builtin_allegrex_wsbw(0)) {
            __builtin_memset((char *)&ro, 0, sizeof(ro));
            ro.ro_rt = NULL;
            dst = (struct sockaddr_in *)&ro.ro_dst;
            dst->sin_len = sizeof(*dst);
            dst->sin_family = AF_INET;
            dst->sin_addr = mreq->imr_multiaddr;
            rtalloc(&ro);
            if (ro.ro_rt == NULL) {
                error = 0x7D;
                break;
            }
            ifp = ro.ro_rt->rt_ifp;
            rtfree(ro.ro_rt);
        } else {
            INADDR_TO_IFP(mreq->imr_interface, ifp);
        }
        if (ifp == NULL || (ifp->if_flags & IFF_MULTICAST) == 0) {
            error = 0x7D;
            break;
        }
        for (i = 0; i < imo->imo_num_memberships; ++i) {
            if (imo->imo_membership[i]->inm_ifp == ifp &&
                imo->imo_membership[i]->inm_addr.s_addr == mreq->imr_multiaddr.s_addr)
                break;
        }
        if (i < imo->imo_num_memberships) {
            error = 0x70;
            break;
        }
        if (i == 20) {
            error = 0x81;
            break;
        }
        if ((imo->imo_membership[i] = func_00012108(&mreq->imr_multiaddr, ifp)) == NULL) {
            error = 0x69;
            break;
        }
        ++imo->imo_num_memberships;
        break;
    case 13:
        if (m == NULL || m->m_len != sizeof(struct ip_mreq)) {
            error = 0x16;
            break;
        }
        mreq = mtod(m, struct ip_mreq *);
        if (!IN_MULTICAST(mreq->imr_multiaddr.s_addr)) {
            error = 0x16;
            break;
        }
        if (mreq->imr_interface.s_addr == __builtin_allegrex_wsbw(0))
            ifp = NULL;
        else {
            INADDR_TO_IFP(mreq->imr_interface, ifp);
            if (ifp == NULL) {
                error = 0x7D;
                break;
            }
        }
        for (i = 0; i < imo->imo_num_memberships; ++i) {
            if ((ifp == NULL || imo->imo_membership[i]->inm_ifp == ifp) &&
                imo->imo_membership[i]->inm_addr.s_addr == mreq->imr_multiaddr.s_addr)
                break;
        }
        if (i == imo->imo_num_memberships) {
            error = 0x7D;
            break;
        }
        in_delmulti(imo->imo_membership[i]);
        for (++i; i < imo->imo_num_memberships; ++i)
            imo->imo_membership[i - 1] = imo->imo_membership[i];
        --imo->imo_num_memberships;
        break;
    default:
        error = 0x5F;
        break;
    }

    if (imo->imo_multicast_ifp == NULL &&
        imo->imo_multicast_ttl == 1 &&
        imo->imo_multicast_loop == 1 &&
        imo->imo_num_memberships == 0) {
        sceNetFreeInternal(*imop);
        *imop = NULL;
    }
    return (error);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_setmoptions);
#endif

#if FW_VERSION < 151
s32 ip_setmoptions(s32 optname, struct ip_moptions **imop, struct mbuf *m) {
    s32 error = 0;
    u8 loop;
    s32 i;
    struct in_addr addr;
    struct ip_mreq *mreq;
    struct ifnet *ifp;
    struct ip_moptions *imo = *imop;
    struct route ro;
    struct sockaddr_in *dst;

    if (imo == NULL) {
        imo = (struct ip_moptions *)sceNetMallocInternal(sizeof(*imo));
        if (imo == NULL)
            return (0x69);
        *imop = imo;
        imo->imo_multicast_ifp = NULL;
        imo->imo_multicast_ttl = 1;
        imo->imo_multicast_loop = 1;
        imo->imo_num_memberships = 0;
    }

    switch (optname) {
    case 9:
        if (m == NULL || m->m_len != sizeof(struct in_addr)) {
            error = 0x16;
            break;
        }
        addr = *(mtod(m, struct in_addr *));
        if (addr.s_addr == __builtin_allegrex_wsbw(0)) {
            imo->imo_multicast_ifp = NULL;
            break;
        }
        INADDR_TO_IFP(addr, ifp);
        if (ifp == NULL || (ifp->if_flags & IFF_MULTICAST) == 0) {
            error = 0x7D;
            break;
        }
        imo->imo_multicast_ifp = ifp;
        break;
    case 10:
        if (m == NULL || m->m_len != 1) {
            error = 0x16;
            break;
        }
        imo->imo_multicast_ttl = *(mtod(m, u8 *));
        break;
    case 11:
        if (m == NULL || m->m_len != 1 ||
            (loop = *(mtod(m, u8 *))) > 1) {
            error = 0x16;
            break;
        }
        imo->imo_multicast_loop = loop;
        break;
    case 12:
        if (m == NULL || m->m_len != sizeof(struct ip_mreq)) {
            error = 0x16;
            break;
        }
        mreq = mtod(m, struct ip_mreq *);
        if (!IN_MULTICAST(mreq->imr_multiaddr.s_addr)) {
            error = 0x16;
            break;
        }
        if (mreq->imr_interface.s_addr == __builtin_allegrex_wsbw(0)) {
            __builtin_memset((char *)&ro, 0, sizeof(ro));
            ro.ro_rt = NULL;
            dst = (struct sockaddr_in *)&ro.ro_dst;
            dst->sin_len = sizeof(*dst);
            dst->sin_family = AF_INET;
            dst->sin_addr = mreq->imr_multiaddr;
            rtalloc(&ro);
            if (ro.ro_rt == NULL) {
                error = 0x7D;
                break;
            }
            ifp = ro.ro_rt->rt_ifp;
            rtfree(ro.ro_rt);
        } else {
            INADDR_TO_IFP(mreq->imr_interface, ifp);
        }
        if (ifp == NULL || (ifp->if_flags & IFF_MULTICAST) == 0) {
            error = 0x7D;
            break;
        }
        for (i = 0; i < imo->imo_num_memberships; ++i) {
            if (imo->imo_membership[i]->inm_ifp == ifp &&
                imo->imo_membership[i]->inm_addr.s_addr == mreq->imr_multiaddr.s_addr)
                break;
        }
        if (i < imo->imo_num_memberships) {
            error = 0x70;
            break;
        }
        if (i == 20) {
            error = 0x81;
            break;
        }
        if ((imo->imo_membership[i] = in_addmulti(&mreq->imr_multiaddr, ifp)) == NULL) {
            error = 0x69;
            break;
        }
        ++imo->imo_num_memberships;
        break;
    case 13:
        if (m == NULL || m->m_len != sizeof(struct ip_mreq)) {
            error = 0x16;
            break;
        }
        mreq = mtod(m, struct ip_mreq *);
        if (!IN_MULTICAST(mreq->imr_multiaddr.s_addr)) {
            error = 0x16;
            break;
        }
        if (mreq->imr_interface.s_addr == __builtin_allegrex_wsbw(0))
            ifp = NULL;
        else {
            INADDR_TO_IFP(mreq->imr_interface, ifp);
            if (ifp == NULL) {
                error = 0x7D;
                break;
            }
        }
        for (i = 0; i < imo->imo_num_memberships; ++i) {
            if ((ifp == NULL || imo->imo_membership[i]->inm_ifp == ifp) &&
                imo->imo_membership[i]->inm_addr.s_addr == mreq->imr_multiaddr.s_addr)
                break;
        }
        if (i == imo->imo_num_memberships) {
            error = 0x7D;
            break;
        }
        in_delmulti(imo->imo_membership[i]);
        for (++i; i < imo->imo_num_memberships; ++i)
            imo->imo_membership[i - 1] = imo->imo_membership[i];
        --imo->imo_num_memberships;
        break;
    default:
        error = 0x5F;
        break;
    }

    if (imo->imo_multicast_ifp == NULL &&
        imo->imo_multicast_ttl == 1 &&
        imo->imo_multicast_loop == 1 &&
        imo->imo_num_memberships == 0) {
        sceNetFreeInternal(*imop);
        *imop = NULL;
    }
    return (error);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00017DA0);
#endif

s32 ip_getmoptions(s32 optname, struct ip_moptions *imo, struct mbuf **mp) {
    u8 *ttl;
    u8 *loop;
    struct in_addr *addr;
    struct in_ifaddr *ia;

    *mp = sceNetMGet(0, 4);
    if (*mp == NULL)
        return (0x69);

    switch (optname) {
    case 9:
        addr = mtod(*mp, struct in_addr *);
        (*mp)->m_len = sizeof(struct in_addr);
        if (imo == NULL || imo->imo_multicast_ifp == NULL)
            *addr = zeroin_addr;
        else {
            IFP_TO_IA(imo->imo_multicast_ifp, ia);
            *addr = ia ? ia->ia_addr.sin_addr : zeroin_addr;
        }
        return (0);
    case 10:
        ttl = mtod(*mp, u8 *);
        (*mp)->m_len = 1;
        *ttl = imo ? imo->imo_multicast_ttl : 1;
        return (0);
    case 11:
        loop = mtod(*mp, u8 *);
        (*mp)->m_len = 1;
        *loop = imo ? imo->imo_multicast_loop : 1;
        return (0);
    default:
        return (0x5F);
    }
}

#if FW_VERSION < 250
void ip_mloopback(struct ifnet *ifp, struct mbuf *m, struct sockaddr_in *dst) {
    struct ip *ip;
    struct mbuf *copym;

    copym = sceNetMCopym(m, 0, 1000000000, 1);
    if (copym != NULL && (copym->m_flags & M_EXT || copym->m_len < sizeof(struct ip)))
        copym = sceNetMPullup(copym, sizeof(struct ip));
    if (copym != NULL) {
        ip = mtod(copym, struct ip *);
        ip->ip_len = (u16)__builtin_allegrex_wsbh(ip->ip_len);
        ip->ip_off = (u16)__builtin_allegrex_wsbh(ip->ip_off);
        ip->ip_sum = 0;
        ip->ip_sum = in_cksum(copym, (ip->ip_hl_v & 0xF) << 2);
        (void)looutput(ifp, copym, (struct sockaddr *)dst, NULL);
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_mloopback);
#endif

#if FW_VERSION < 250
s32 ip_optlen(void *arg0) {
    void *p = *(void **)((u8 *)arg0 + 0x4C);
    if (p != NULL && *(s32 *)((u8 *)p + 0xC) != 0) {
        return *(s32 *)((u8 *)p + 0xC);
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", ip_optlen);
#endif

void ip_freemoptions(struct ip_moptions *imo) {
    s32 i;
    if (imo != NULL) {
        for (i = 0; i < imo->imo_num_memberships; i++) {
            in_delmulti(imo->imo_membership[i]);
        }
        sceNetFreeInternal(imo);
    }
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", icmp_error);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00018B28);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00018640);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00018BE8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000192B8);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000198F4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00018628);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00018A90);

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00019034);
#endif

void icmp_send(struct mbuf *m, struct mbuf *opts) {
    struct ip *ip = mtod(m, struct ip *);
    s32 hlen;
    struct icmp *icp;

    hlen = (ip->ip_hl_v & 0xF) << 2;
    m->m_data += hlen;
    m->m_len -= hlen;
    icp = mtod(m, struct icmp *);
    icp->icmp_cksum = 0;
    icp->icmp_cksum = in_cksum(m, ip->ip_len - hlen);
    m->m_data -= hlen;
    m->m_len += hlen;
    (void)ip_output(m, opts, NULL, 0, NULL);
}

u32 iptime(void) {
    struct timeval atv;
    u32 t;
    _sce_pspnet_microtime(&atv);
    t = (atv.tv_sec % (24 * 60 * 60)) * 1000 + atv.tv_usec / 1000;
    return __builtin_allegrex_wsbw(t);
}

s32 icmp_sysctl(s32 *name, u32 namelen, void *oldp, u32 *oldlenp, void *newp, u32 newlen) {
    s32 arg, error;

    if (namelen != 1) {
        return 20; /* ENOTDIR */
    }
    switch (name[0]) {
    case 1: /* ICMPCTL_MASKREPL */
        error = sysctl_int(oldp, oldlenp, newp, newlen, &D_0002C5B4);
        break;
    case 3: /* ICMPCTL_RETURNDATABYTES */
        arg = D_0002C270;
        error = sysctl_int(oldp, oldlenp, newp, newlen, &arg);
        if (error) {
            break;
        }
        if ((arg >= 8) || (arg <= 512)) {
            D_0002C270 = arg;
        } else {
            error = 22;
        }
        break;
    case 4: /* ICMPCTL_ERRPPSLIMIT */
        error = sysctl_int(oldp, oldlenp, newp, newlen, &D_0002C1E8);
        break;
    case 5: /* SCE: icmpstat */
        error = sysctl_rdstruct(oldp, oldlenp, newp, D_0002DA50, 0x170);
        break;
    default:
        error = 109; /* ENOPROTOOPT */
        break;
    }
    return error;
}

#if FW_VERSION < 151
void icmp_mtudisc(struct icmp *icp, struct in_addr faddr) {
    struct SceNetInetKeyNode *mc;
    struct sockaddr *dst = (struct sockaddr *)&D_0002E834;
    struct rtentry *rt;
    u32 mtu = (u16)__builtin_allegrex_wsbh(icp->icmp_nextmtu);
    s32 error;

    rt = rtalloc1(dst, 1);
    if (rt == 0)
        return;

    if ((rt->rt_flags & RTF_HOST) == 0) {
        struct rtentry *nrt;

        error = rtrequest(1, dst, (struct sockaddr *)rt->rt_gateway, (struct sockaddr *)0,
                          RTF_GATEWAY | RTF_HOST | RTF_DYNAMIC, &nrt);
        if (error) {
            rtfree(rt);
            rtfree(nrt);
            return;
        }
        nrt->rt_rmx = rt->rt_rmx;
        rtfree(rt);
        rt = nrt;
    }
    error = rt_timer_add(rt, icmp_mtudisc_timeout, ip_mtudisc_timeout_q);
    if (error) {
        rtfree(rt);
        return;
    }

    if (mtu == 0) {
        s32 i = 0;

        mtu = icp->icmp_ip.ip_len;
        if (rt->rt_rmx.rmx_mtu < mtu && rt->rt_rmx.rmx_mtu != 0)
            mtu -= ((icp->icmp_ip.ip_hl_v & 0xF) << 2);
        if (mtu == 0) {
            mtu = rt->rt_rmx.rmx_mtu;
            if (mtu == 0)
                mtu = rt->rt_ifp->if_mtu;
        }
        for (i = 0; i < 14U; i++)
            if (mtu > D_0002E864[i]) {
                mtu = D_0002E864[i];
                break;
            }
    }

    if ((rt->rt_rmx.rmx_locks & 0x1) == 0) {
        if (mtu < 296 || mtu > rt->rt_ifp->if_mtu)
            rt->rt_rmx.rmx_locks |= 0x1;
        else if (rt->rt_rmx.rmx_mtu > mtu || rt->rt_rmx.rmx_mtu == 0)
            rt->rt_rmx.rmx_mtu = mtu;
    }

    if (rt)
        rtfree(rt);

    for (mc = D_0002C5B8.lh_first; mc != NULL; mc = mc->next)
        (*(void (*)(struct in_addr))mc->key)(faddr);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", icmp_mtudisc);
#endif

#if FW_VERSION < 151
s32 ip_next_mtu(s32 mtu, s32 dir) {
    s32 i;

    for (i = 0; i < 12U; i++)
        if (mtu >= mtu_table[i])
            break;

    if (dir < 0) {
        if (i == 0) {
            return 0;
        } else {
            return mtu_table[i - 1];
        }
    } else {
        if (mtu_table[i] == 0) {
            return 0;
        } else if (mtu > mtu_table[i]) {
            return mtu_table[i];
        } else {
            return mtu_table[i + 1];
        }
    }
}
#endif

#if FW_VERSION < 282
s32 func_0001A410(void) {
    return 0;
}
#else
s32 func_00019A98(void) {
    return 0;
}
#endif

void icmp_mtudisc_callback_register(void *key) {
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
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00019BCC);
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

#if FW_VERSION < 282
void icmp_mtudisc_timeout(struct rtentry *rt) {
    s32 flags = rt->rt_flags;
    if ((flags & (RTF_HOST | RTF_DYNAMIC)) != (RTF_HOST | RTF_DYNAMIC)) {
        if (!(rt->rt_rmx.rmx_locks & RTV_MTU)) {
            rt->rt_rmx.rmx_mtu = 0;
        }
    } else {
        rtrequest(RTM_DELETE, rt->rt_nodes[0].rn_key, rt->rt_gateway, rt->rt_nodes[0].rn_mask, flags, NULL);
    }
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_000197EC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_0001A5A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00019B24);

void func_00019C00(struct rtentry *rt) {
    s32 flags = rt->rt_flags;
    if ((flags & (RTF_HOST | RTF_DYNAMIC)) != (RTF_HOST | RTF_DYNAMIC)) {
        if (!(rt->rt_rmx.rmx_locks & RTV_MTU)) {
            rt->rt_rmx.rmx_mtu = 0;
        }
    } else {
        rtrequest(RTM_DELETE, rt->rt_nodes[0].rn_key, rt->rt_gateway, rt->rt_nodes[0].rn_mask, flags, NULL);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_00019C5C);
#endif

void igmp_fasttimo(void) {
    struct in_multi *inm;
    struct in_multistep step;
    s32 s;

    if (!igmp_timers_are_running)
        return;
    s = _sce_pspnet_spllock();
    igmp_timers_are_running = 0;
    IN_FIRST_MULTI(step, inm);
    while (inm != NULL) {
        if (inm->inm_timer == 0) {
        } else if (--inm->inm_timer == 0) {
            if (inm->inm_state == 1) {
                if (inm->inm_rti->rti_type == 1)
                    igmp_sendpkt(inm, 0x12);
                else
                    igmp_sendpkt(inm, 0x16);
                inm->inm_state = 2;
            }
        } else {
            igmp_timers_are_running = 1;
        }
        IN_NEXT_MULTI(step, inm);
    }
    _sce_pspnet_splunlock(s);
}

void igmp_sendpkt(struct in_multi *inm, s32 type) {
    struct mbuf *m;
    struct igmp *igmp;
    struct ip *ip;
    struct ip_moptions imo;
    s32 max_linkhdr;

    m = sceNetMallocInternal(MSIZE);
    if (m == NULL)
        return;
    m->m_type = MT_HEADER;
    m->m_flags = M_PKTHDR;
    m->m_data = (u8 *)&m->m_ext;
    m->m_next = NULL;
    m->m_nextpkt = NULL;
    m->m_pkthdr.aux = NULL;
    sceNetIfhandle_lib_5FB31C72(&max_linkhdr, NULL, NULL, NULL);
    m->m_data += max_linkhdr;
    m->m_len = sizeof(struct ip) + 8;
    m->m_pkthdr.len = sizeof(struct ip) + 8;
    ip = mtod(m, struct ip *);
    ip->ip_tos = 0;
    ip->ip_len = sizeof(struct ip) + 8;
    ip->ip_off = 0;
    ip->ip_p = 2;
    ip->ip_src = zeroin_addr;
    ip->ip_dst = inm->inm_addr;

    m->m_data += sizeof(struct ip);
    m->m_len -= sizeof(struct ip);
    igmp = mtod(m, struct igmp *);
    igmp->igmp_type = type;
    igmp->igmp_code = 0;
    igmp->igmp_group = inm->inm_addr;
    igmp->igmp_cksum = 0;
    igmp->igmp_cksum = in_cksum(m, 8);
    m->m_data -= sizeof(struct ip);
    m->m_len += sizeof(struct ip);

    imo.imo_multicast_ifp = inm->inm_ifp;
    imo.imo_multicast_ttl = 1;
    imo.imo_multicast_loop = 0;
    ip_output(m, (struct mbuf *)0, (struct route *)0, 0, &imo);
    ++igmp_stat.igps_snd_reports;
}

#if FW_VERSION < 201
void func_0001B398(void) {
    func_0002C94C(&igmp_stat, 0, 0x48);
    igmp_timers_are_running = 0;
    rti_head = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0001B398(void) {
    sceNetMemset(&igmp_stat, 0, 0x48);
    igmp_timers_are_running = 0;
    rti_head = 0;
}
#endif

#if FW_VERSION >= 282
void func_0001A8AC(void) {
    sceNetMemset(&igmp_stat, 0, 0x48);
    igmp_timers_are_running = 0;
    rti_head = 0;
}
#endif

void igmp_joingroup(struct in_multi *inm) {
    s32 s = _sce_pspnet_spllock();

    inm->inm_state = 2;
    if ((inm->inm_addr.s_addr & __builtin_allegrex_wsbw(0xffffff00)) != __builtin_allegrex_wsbw(0xe0000000) &&
        (inm->inm_ifp->if_flags & IFF_LOOPBACK) == 0) {
        igmp_sendpkt(inm, rti_fill(inm));
        inm->inm_state = 1;
        inm->inm_timer = sceNetRand() % (10 * 5) + 1;
        igmp_timers_are_running = 1;
    } else
        inm->inm_timer = 0;
    _sce_pspnet_splunlock(s);
}

#if FW_VERSION < 282
void igmp_leavegroup(void *arg0) {
    s32 temp_a3;
    s32 temp_v1_2;
    u32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0x1C);
    if ((temp_v1 != 0) && (temp_a3 = __builtin_allegrex_wsbw(-0x100), temp_v1_2 = __builtin_allegrex_wsbw(0xE0000000), ((temp_v1 < 3U) != 0))) {
        if (((M2C_FIELD(arg0, s32 *, 0) & temp_a3) != temp_v1_2) && !(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) & 8) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 4) != 1)) {
            igmp_sendpkt((struct in_multi *)arg0, 0x17);
        }
    }
}
#else
void func_0001AA20(struct Unk_func_0001AA20_0 *arg0) {
    s32 temp_a3;
    s32 temp_v1_2;
    u32 temp_v1;

    temp_v1 = arg0->unk1C;
    if ((temp_v1 != 0) && (temp_a3 = __builtin_allegrex_wsbw(-0x100), temp_v1_2 = __builtin_allegrex_wsbw(0xE0000000), ((temp_v1 < 3U) != 0))) {
        if (((arg0->unk0 & temp_a3) != temp_v1_2) && !(arg0->unk4->unk30 & 8) && (arg0->unk20->unk4 != 1)) {
            igmp_sendpkt((struct in_multi *)arg0, 0x17);
        }
    }
}
#endif

void igmp_slowtimo(void) {
    s32 s = _sce_pspnet_spllock();
    struct router_info *rti;
    for (rti = rti_head; rti != NULL; rti = rti->rti_next) {
        if (rti->rti_type == 1) {
            if (++rti->rti_age >= 0x21C) {
                rti->rti_type = 2;
            }
        }
    }
    _sce_pspnet_splunlock(s);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_0001ABA4);
#endif

#if FW_VERSION < 201
void rip_input(struct mbuf *m, ...) {
    s32 off, proto;
    struct ip *ip = mtod(m, struct ip *);
    struct inpcb *inp;
    struct inpcb *last = 0;
    struct mbuf *opts = 0;
    struct sockaddr_in ripsrc;
    __builtin_va_list ap;

    __builtin_va_start(ap, m);
    off = __builtin_va_arg(ap, s32);
    proto = __builtin_va_arg(ap, s32);
    __builtin_va_end(ap);

    ripsrc.sin_family = AF_INET;
    ripsrc.sin_len = sizeof(struct sockaddr_in);
    ripsrc.sin_addr = ip->ip_src;
    ripsrc.sin_port = 0;
    __builtin_memset((char *)ripsrc.sin_zero, 0, sizeof(ripsrc.sin_zero));

    ip->ip_len -= (ip->ip_hl_v & 0xF) << 2;

    for (inp = rawcbtable.inpt_queue.cqh_first;
         inp != (struct inpcb *)&rawcbtable.inpt_queue;
         inp = inp->inp_queue.cqe_next) {
        if (inp->inp_ip.ip_p && inp->inp_ip.ip_p != proto)
            continue;
        if (inp->inp_laddr.s_addr != __builtin_allegrex_wsbw(0) &&
            inp->inp_laddr.s_addr != ip->ip_dst.s_addr)
            continue;
        if (inp->inp_faddr.s_addr != __builtin_allegrex_wsbw(0) &&
            inp->inp_faddr.s_addr != ip->ip_src.s_addr)
            continue;
        if (last) {
            struct mbuf *n;

            if ((n = sceNetMCopym(m, 0, 1000000000, 1)) != NULL) {
                if (last->inp_flags & 0x87 ||
                    last->inp_socket->so_options & 0x400)
                    ip_savecontrol(last, &opts, ip, n);
                if (sbappendaddr(&last->inp_socket->so_rcv,
                                 (struct sockaddr *)&ripsrc, n, opts) == 0) {
                    sceNetMFreem(n);
                    if (opts)
                        sceNetMFreem(opts);
                } else
                    sorwakeup(last->inp_socket);
                opts = NULL;
            }
        }
        last = inp;
    }
    if (last) {
        if (last->inp_flags & 0x87 ||
            last->inp_socket->so_options & 0x400)
            ip_savecontrol(last, &opts, ip, m);
        if (sbappendaddr(&last->inp_socket->so_rcv,
                         (struct sockaddr *)&ripsrc, m, opts) == 0) {
            sceNetMFreem(m);
            if (opts)
                sceNetMFreem(opts);
        } else
            sorwakeup(last->inp_socket);
    } else {
        if (inetsw[ip_protox[ip->ip_p]].pr_input == (void *)rip_input) {
            icmp_error(m, 3, 2, 0, 0);
            D_0002D960.ips_noproto++;
            D_0002D960.ips_delivered--;
        } else
            sceNetMFreem(m);
    }
    return;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_0001AAFC);
#endif

s32 rip_output(struct mbuf *m, ...) {
    struct inpcb *inp;
    struct ip *ip;
    struct mbuf *opts;
    s32 flags;
    __builtin_va_list ap;

    __builtin_va_start(ap, m);
    inp = __builtin_va_arg(ap, struct inpcb *);
    __builtin_va_end(ap);

    flags = (inp->inp_socket->so_options & 0x10) | 0x20 | 0x4;

    if ((inp->inp_flags & 0x8) == 0) {
        if ((m->m_pkthdr.len + sizeof(struct ip)) > 0xFFFF) {
            sceNetMFreem(m);
            return (0x7A);
        }
        M_PREPEND(m, sizeof(struct ip), 0);
        ip = mtod(m, struct ip *);
        ip->ip_tos = 0;
        ip->ip_off = 0;
        ip->ip_p = inp->inp_ip.ip_p;
        ip->ip_len = m->m_pkthdr.len;
        ip->ip_src = inp->inp_laddr;
        ip->ip_dst = inp->inp_faddr;
        ip->ip_ttl = 255;
        opts = inp->inp_options;
    } else {
        if (m->m_pkthdr.len > 0xFFFF) {
            sceNetMFreem(m);
            return (0x7A);
        }
        ip = mtod(m, struct ip *);
        if (m->m_pkthdr.len != ip->ip_len) {
            sceNetMFreem(m);
            return (0x16);
        }
        if (ip->ip_id == 0)
            ip->ip_id = (u16)__builtin_allegrex_wsbh(ip_id_seq++);
        opts = NULL;
        flags |= 0x2;
        D_0002D960.ips_rawout++;
    }
    return (ip_output(m, opts, &inp->inp_route, flags, inp->inp_moptions, &inp->inp_errormtu));
}

#if FW_VERSION < 250
s32 rip_ctloutput(s32 op, struct socket *so, s32 level, s32 optname, struct mbuf **m) {
    struct inpcb *inp = (struct inpcb *)so->so_pcb;
    s32 error = 0;

    if (level != 0) {
        error = 0x6D;
        if (op == 1 && *m != 0)
            (void)sceNetMFree(*m);
    } else switch (op) {
    case 1:
        switch (optname) {
        case 2:
            if (*m == 0 || (*m)->m_len < sizeof(s32))
                error = 0x16;
            else {
                if (*mtod(*m, s32 *))
                    inp->inp_flags |= 0x8;
                else
                    inp->inp_flags &= ~0x8;
            }
            if (*m != 0)
                (void)sceNetMFree(*m);
            break;
        default:
            error = ip_ctloutput(op, so, level, optname, m);
            break;
        }
        break;
    case 0:
        switch (optname) {
        case 2:
            *m = sceNetMGet(0, 10);
            if (*m == NULL) {
                error = 0x69;
                break;
            }
            (*m)->m_len = sizeof(s32);
            *mtod(*m, s32 *) = (inp->inp_flags & 0x8) ? 1 : 0;
            break;
        default:
            error = ip_ctloutput(op, so, level, optname, m);
            break;
        }
        break;
    }
    return (error);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", rip_ctloutput);
#endif

#if FW_VERSION < 151
__inline s32 rip_bind(struct inpcb *inp, struct mbuf *nam) {
    struct sockaddr_in *addr = mtod(nam, struct sockaddr_in *);
    TAILQ_HEAD(, ifnet) ifnet;

    _sce_pspnet_get_if_core_variables(NULL, NULL, NULL, (struct ifnet **)&ifnet);
    if (nam->m_len != sizeof(*addr))
        return (0x16);
    if (ifnet.tqh_first == 0)
        return (0x7D);
    if (addr->sin_family != AF_INET && addr->sin_family != 3)
        return (0x6A);
    if (addr->sin_addr.s_addr != __builtin_allegrex_wsbw(0) &&
        ifa_ifwithaddr((struct sockaddr *)addr) == 0)
        return (0x7D);
    inp->inp_laddr = addr->sin_addr;
    return (0);
}

__inline s32 rip_connect(struct inpcb *inp, struct mbuf *nam) {
    struct sockaddr_in *addr = mtod(nam, struct sockaddr_in *);
    TAILQ_HEAD(, ifnet) ifnet;

    _sce_pspnet_get_if_core_variables(NULL, NULL, NULL, (struct ifnet **)&ifnet);
    if (nam->m_len != sizeof(*addr))
        return (0x16);
    if (ifnet.tqh_first == 0)
        return (0x7D);
    if (addr->sin_family != AF_INET && addr->sin_family != 3)
        return (0x6A);
    inp->inp_faddr = addr->sin_addr;
    return (0);
}

__inline void rip_disconnect(struct inpcb *inp) {
    inp->inp_faddr = zeroin_addr;
}

s32 rip_usrreq(struct socket *so, s32 req, struct mbuf *m, struct mbuf *nam, struct mbuf *control) {
    struct inpcb *inp;
    s32 s;
    s32 error = 0;

    if (req == 11)
        return (in_control(so, (s32)m, (void *)nam, (struct ifnet *)control));
    if (req == 22) {
        in_purgeif((struct ifnet *)control);
        in_pcbpurgeif(&rawcbtable, (struct ifnet *)control);
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
            error = soreserve(so, rip_sendspace, rip_recvspace);
            if (error)
                break;
        }
        error = in_pcballoc(so, &rawcbtable);
        if (error)
            break;
        inp = (struct inpcb *)so->so_pcb;
        inp->inp_ip.ip_p = (s32)nam;
        break;
    case 10:
        soisdisconnected(so);
    case 1:
        in_pcbdetach(inp);
        break;
    case 2:
        error = rip_bind(inp, nam);
        break;
    case 3:
        error = 0x5F;
        break;
    case 4:
        error = rip_connect(inp, nam);
        if (error)
            break;
        soisconnected(so);
        break;
    case 17:
        error = 0x5F;
        break;
    case 6:
        soisdisconnected(so);
        rip_disconnect(inp);
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
            if (nam) {
                if ((so->so_state & SS_ISCONNECTED) != 0) {
                    error = 0x7F;
                    goto die;
                }
                error = rip_connect(inp, nam);
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
            error = rip_output(m, inp);
            if (nam)
                rip_disconnect(inp);
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
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", rip_usrreq);
#endif

void rip_init(void) {
    rip_sendspace = 0x2000;
    rip_recvspace = 0x2000;
    in_pcbinit(&rawcbtable, 1, 1);
}

#if FW_VERSION >= 151
s32 rip_bind(struct inpcb *inp, struct mbuf *nam) {
    struct sockaddr_in *addr = mtod(nam, struct sockaddr_in *);
    TAILQ_HEAD(, ifnet) ifnet;

    _sce_pspnet_get_if_core_variables(NULL, NULL, NULL, (struct ifnet **)&ifnet);
    if (nam->m_len != sizeof(*addr))
        return (0x16);
    if (ifnet.tqh_first == 0)
        return (0x7D);
    if (addr->sin_family != AF_INET && addr->sin_family != 3)
        return (0x6A);
    if (addr->sin_addr.s_addr != __builtin_allegrex_wsbw(0) &&
        ifa_ifwithaddr((struct sockaddr *)addr) == 0)
        return (0x7D);
    inp->inp_laddr = addr->sin_addr;
    return (0);
}

s32 rip_connect(struct inpcb *inp, struct mbuf *nam) {
    struct sockaddr_in *addr = mtod(nam, struct sockaddr_in *);
    TAILQ_HEAD(, ifnet) ifnet;

    _sce_pspnet_get_if_core_variables(NULL, NULL, NULL, (struct ifnet **)&ifnet);
    if (nam->m_len != sizeof(*addr))
        return (0x16);
    if (ifnet.tqh_first == 0)
        return (0x7D);
    if (addr->sin_family != AF_INET && addr->sin_family != 3)
        return (0x6A);
    inp->inp_faddr = addr->sin_addr;
    return (0);
}

#if FW_VERSION < 201

void rip_disconnect(struct inpcb *inp) {
    inp->inp_faddr = zeroin_addr;
}

#endif
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void rip_disconnect(struct inpcb *inp) {
    inp->inp_faddr = zeroin_addr;
}

INCLUDE_ASM("nonmatchings/pspnet_inet_in_cksum2", func_0001B820);
#endif
