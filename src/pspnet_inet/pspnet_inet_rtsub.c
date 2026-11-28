/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

void func_0000D1FC(void) {
    D_0002CCB4.lh_first = 0;
    _sce_pspnet_callout_init(&D_0002CD38);
    _sce_pspnet_callout_reset(&D_0002CD38, 100, rt_timer_timer, NULL);
    D_0002C534 = 1;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000D37C);
#endif

#if FW_VERSION < 201
struct rttimer_queue *func_0000D188(u32 timeout)
{
	struct rttimer_queue *rtq;

	/* rt_timer_init() (func_0000D1FC), expanded inline */
	if (D_0002C534 == 0) {
		D_0002CCB4.lh_first = 0;
		_sce_pspnet_callout_init(&D_0002CD38);
		_sce_pspnet_callout_reset(&D_0002CD38, 100, rt_timer_timer, NULL);
		D_0002C534 = 1;
	}

	rtq = sceNetMallocInternal(sizeof *rtq);
	if (rtq == NULL)
		return (NULL);
	__builtin_memset(rtq, 0, sizeof *rtq);

	rtq->rtq_timeout = timeout;
	TAILQ_INIT(&rtq->rtq_head);
	LIST_INSERT_HEAD(&D_0002CCB4, rtq, rtq_link);

	return (rtq);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000D25C);
#endif

#if FW_VERSION < 201
void func_0000D25C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000D264);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000D254);

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

INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000D378);

#if FW_VERSION < 201
static __inline void rt_adjustcount(int af, int cnt) {
	route_cb.any_count += cnt;
	switch (af) {
	case AF_INET:
		route_cb.ip_count += cnt;
		return;
	case AF_IPX:
		route_cb.ipx_count += cnt;
		return;
	case AF_NS:
		route_cb.ns_count += cnt;
		return;
	case AF_ISO:
		route_cb.iso_count += cnt;
		return;
	}
}

s32 func_0000D484(struct socket *so, s32 req, struct mbuf *m, struct mbuf *nam, struct mbuf *control)
{
	int error = 0;
	struct rawcb *rp = (struct rawcb *)so->so_pcb;
	int s;

	if (req == PRU_ATTACH) {
		rp = sceNetMallocInternal(sizeof(*rp));
		if ((so->so_pcb = rp) != NULL)
			func_0002C94C(so->so_pcb, 0, sizeof(*rp));

	}
	if (req == PRU_DETACH && rp)
		rt_adjustcount(rp->rcb_proto.sp_protocol, -1);
	s = _sce_pspnet_spllock();

	if (req == PRU_ATTACH) {
		error = raw_attach(so, (int)(long)nam);
	} else
		error = func_0000F040(so, req, m, nam, control);

	rp = (struct rawcb *)so->so_pcb;
	if (req == PRU_ATTACH && rp) {
		if (error) {
			sceNetFreeInternal(rp);
			_sce_pspnet_splunlock(s);
			return (error);
		}
		rt_adjustcount(rp->rcb_proto.sp_protocol, 1);
		rp->rcb_laddr = &route_src;
		rp->rcb_faddr = &route_dst;
		soisconnected(so);
		so->so_options |= SO_USELOOPBACK;
	}
	_sce_pspnet_splunlock(s);
	return (error);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000D484);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B4EC);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B4F0);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B508);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B518);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B530);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B540);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B550);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B55C);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B68C);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B69C);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B77C);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B78C);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B798);

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B7DC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000D6D0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000DD34);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000DF80);
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

INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000DE58);
#endif

#if FW_VERSION < 201
s32 func_0000DF08(s32 type, struct rt_addrinfo *rtinfo, char *cp, struct walkarg *w, s32 *lenp)
{
	int i;
	int len, dlen, second_time = 0;
	char * cp0;

	rtinfo->rti_addrs = 0;
again:
	switch (type) {

	case RTM_DELADDR:
	case RTM_NEWADDR:
		len = sizeof(struct ifa_msghdr);
		break;

	case RTM_IFINFO:
		len = sizeof(struct if_msghdr);
		break;

	default:
		len = sizeof(struct rt_msghdr);
	}
	if ((cp0 = cp) != NULL)
		cp += len;
	for (i = 0; i < RTAX_MAX; i++) {
		struct sockaddr *sa;

		if ((sa = rtinfo->rti_info[i]) == 0)
			continue;
		rtinfo->rti_addrs |= (1 << i);
		dlen = ROUNDUP(sa->sa_len);
		if (cp) {
			func_0002C9B8(sa, cp, (unsigned)dlen);
			cp += dlen;
		}
		len += dlen;
	}
	if (cp == 0 && w != NULL && !second_time) {
		struct walkarg *rw = w;

		rw->w_needed += len;
		if (rw->w_needed <= 0 && rw->w_where) {
			if (rw->w_tmemsize < len) {
				if (rw->w_tmem)
					sceNetFreeInternal(rw->w_tmem);
				rw->w_tmem = (char *)sceNetMallocInternal(len);
				if (rw->w_tmem)
					rw->w_tmemsize = len;
			}
			if (rw->w_tmem) {
				cp = rw->w_tmem;
				second_time = 1;
				goto again;
			} else {
				rw->w_tmemneeded = len;
				return (ENOBUFS);
			}
		}
	}
	if (cp) {
		struct rt_msghdr *rtm = (struct rt_msghdr *)cp0;

		rtm->rtm_version = RTM_VERSION;
		rtm->rtm_type = type;
		rtm->rtm_msglen = len;
	}
	if (lenp)
		*lenp = len;
	return (0);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000DF08);
#endif

#if FW_VERSION < 201
void func_0000E0EC(s32 cmd, struct ifaddr *ifa, s32 error, struct rtentry *rt)
{
	struct rt_addrinfo info;
	struct sockaddr *sa = NULL;
	int pass;
	struct mbuf *m = NULL;
	struct ifnet *ifp = ifa->ifa_ifp;

	if (route_cb.any_count == 0)
		return;
	for (pass = 1; pass < 3; pass++) {
		__builtin_memset(&info, 0, sizeof(info));
		if ((cmd == RTM_ADD && pass == 1) ||
		    (cmd == RTM_DELETE && pass == 2)) {
			struct ifa_msghdr ifam;
			int ncmd = cmd == RTM_ADD ? RTM_NEWADDR : RTM_DELADDR;

			info.rti_info[RTAX_IFA] = sa = ifa->ifa_addr;
			info.rti_info[RTAX_IFP] = ifp->if_addrlist.tqh_first->ifa_addr;
			info.rti_info[RTAX_NETMASK] = ifa->ifa_netmask;
			info.rti_info[RTAX_BRD] = ifa->ifa_dstaddr;
			__builtin_memset(&ifam, 0, sizeof(ifam));
			ifam.ifam_index = ifp->if_index;
			ifam.ifam_metric = ifa->ifa_metric;
			ifam.ifam_flags = ifa->ifa_flags;
			m = func_0000E5A4(ncmd, &info, (char *)&ifam, sizeof(ifam));
			if (m == NULL)
				continue;
			mtod(m, struct ifa_msghdr *)->ifam_addrs =
			    info.rti_addrs;
		}
		if ((cmd == RTM_ADD && pass == 2) ||
		    (cmd == RTM_DELETE && pass == 1)) {
			struct rt_msghdr rtm;

			if (rt == 0)
				continue;
			info.rti_info[RTAX_NETMASK] = rt_mask(rt);
			info.rti_info[RTAX_DST] = sa = rt_key(rt);
			info.rti_info[RTAX_GATEWAY] = rt->rt_gateway;
			func_0002C94C(&rtm, 0, sizeof(rtm));
			rtm.rtm_index = ifp->if_index;
			rtm.rtm_flags |= rt->rt_flags;
			rtm.rtm_errno = error;
			m = func_0000E5A4(cmd, &info, (char *)&rtm, sizeof(rtm));
			if (m == NULL)
				continue;
			mtod(m, struct rt_msghdr *)->rtm_addrs = info.rti_addrs;
		}
		route_proto.sp_protocol = sa ? sa->sa_family : 0;
		func_0000EE68(m, &route_proto, &route_src, &route_dst);
	}
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000E0EC);
#endif

#if FW_VERSION < 201
void rt_missmsg(s32 type, struct rt_addrinfo *rtinfo, s32 flags, s32 error)
{
	struct rt_msghdr rtm;
	struct mbuf *m;
	struct sockaddr *sa = rtinfo->rti_info[RTAX_DST];

	if (route_cb.any_count == 0)
		return;
	func_0002C94C(&rtm, 0, sizeof(rtm));
	rtm.rtm_flags = RTF_DONE | flags;
	rtm.rtm_errno = error;
	m = func_0000E5A4(type, rtinfo, (char *)&rtm, sizeof(rtm));
	if (m == 0)
		return;
	mtod(m, struct rt_msghdr *)->rtm_addrs = rtinfo->rti_addrs;
	route_proto.sp_protocol = sa ? sa->sa_family : 0;
	func_0000EE68(m, &route_proto, &route_src, &route_dst);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", rt_missmsg);
#endif

#if FW_VERSION < 201
void func_0000E3F0(struct ifnet *ifp)
{
	struct if_msghdr ifm;
	struct mbuf *m;
	struct rt_addrinfo info;

	if (route_cb.any_count == 0)
		return;
	__builtin_memset(&info, 0, sizeof(info));
	func_0002C94C(&ifm, 0, sizeof(ifm));
	ifm.ifm_index = ifp->if_index;
	ifm.ifm_flags = ifp->if_flags;
	ifm.ifm_data = ifp->if_data;
	ifm.ifm_addrs = 0;
	m = func_0000E5A4(RTM_IFINFO, &info, (char *)&ifm, sizeof(ifm));
	if (m == 0)
		return;
	route_proto.sp_protocol = 0;
	func_0000EE68(m, &route_proto, &route_src, &route_dst);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000E3F0);
#endif

#if FW_VERSION < 201
void func_0000E448(struct ifnet *ifp, s32 what)
{
	struct if_announcemsghdr ifan;
	struct mbuf *m;
	struct rt_addrinfo info;

	if (route_cb.any_count == 0)
		return;
	__builtin_memset(&info, 0, sizeof(info));
	__builtin_memset(&ifan, 0, sizeof(ifan));
	ifan.ifan_index = ifp->if_index;
	func_0002CC40((u8 *)ifan.ifan_name, (u8 *)ifp->if_xname);
	ifan.ifan_what = what;
	m = func_0000E5A4(RTM_IFANNOUNCE, &info, (char *)&ifan, sizeof(ifan));
	if (m == 0)
		return;
	route_proto.sp_protocol = 0;
	func_0000EE68(m, &route_proto, &route_src, &route_dst);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000E448);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000E4E4);
#endif

struct mbuf *func_0000E5A4(s32 type, struct rt_addrinfo *rtinfo, char *data, s32 datalen)
{
	struct rt_msghdr *rtm;
	struct mbuf *m;
	int i;
	struct sockaddr *sa;
	int len, dlen;

	m = sceNetMGethdr(M_DONTWAIT, MT_DATA);
	if (m == 0)
		return (m);
	switch (type) {

	case RTM_DELADDR:
	case RTM_NEWADDR:
		len = sizeof(struct ifa_msghdr);
		break;

	case RTM_IFINFO:
		len = sizeof(struct if_msghdr);
		break;

	case RTM_IFANNOUNCE:
		len = sizeof(struct if_announcemsghdr);
		break;

	default:
		len = sizeof(struct rt_msghdr);
	}
	if (len > MHLEN) {
		m->m_next = sceNetMGet(M_DONTWAIT, MT_DATA);
		if (m->m_next == NULL) {
			sceNetMFreem(m);
			return (NULL);
		}
		m->m_pkthdr.len = len;
		m->m_len = MHLEN;
		m->m_next->m_len = len - MHLEN;
	} else {
		m->m_pkthdr.len = m->m_len = len;
	}
	m->m_pkthdr.rcvif = 0;
	sceNetMCopyback(m, 0, datalen, data);
	rtm = mtod(m, struct rt_msghdr *);
	for (i = 0; i < RTAX_MAX; i++) {
		if ((sa = rtinfo->rti_info[i]) == NULL)
			continue;
		rtinfo->rti_addrs |= (1 << i);
		dlen = ROUNDUP(sa->sa_len);
		sceNetMCopyback(m, len, dlen, (char *)sa);
		len += dlen;
	}
	rtm->rtm_msglen = len;
	rtm->rtm_version = RTM_VERSION;
	rtm->rtm_type = type;
	return (m);
}

INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000E704);

#if FW_VERSION < 201
s32 func_0000E928(struct radix_node *rn, void *v)
{
	struct walkarg *w = v;
	struct rtentry *rt = (struct rtentry *)rn;
	int error = 0, size;
	struct rt_addrinfo info;

	if (w->w_op == NET_RT_FLAGS && !(rt->rt_flags & w->w_arg))
		return 0;
	__builtin_memset(&info, 0, sizeof(info));
	info.rti_info[RTAX_DST] = rt_key(rt);
	info.rti_info[RTAX_GATEWAY] = rt->rt_gateway;
	info.rti_info[RTAX_NETMASK] = rt_mask(rt);
	info.rti_info[RTAX_GENMASK] = rt->rt_genmask;
	if (rt->rt_ifp) {
		info.rti_info[RTAX_IFP] = rt->rt_ifp->if_addrlist.tqh_first->ifa_addr;
		info.rti_info[RTAX_IFA] = rt->rt_ifa->ifa_addr;
		if (rt->rt_ifp->if_flags & IFF_POINTOPOINT)
			info.rti_info[RTAX_BRD] = rt->rt_ifa->ifa_dstaddr;
	}
	if ((error = func_0000DF08(RTM_GET, &info, 0, w, &size)))
		return (error);
	if (w->w_where && w->w_tmem && w->w_needed <= 0) {
		struct rt_msghdr *rtm = (struct rt_msghdr *)w->w_tmem;

		rtm->rtm_flags = rt->rt_flags;
		rtm->rtm_use = rt->rt_use;
		rtm->rtm_rmx = rt->rt_rmx;
		rtm->rtm_index = rt->rt_ifp->if_index;
		rtm->rtm_errno = rtm->rtm_pid = rtm->rtm_seq = 0;
		rtm->rtm_addrs = info.rti_addrs;
		func_0002C9B8(rtm, w->w_where, size);
		w->w_where += size;
	}
	return (error);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000E928);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000EACC);

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
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000ED48);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000ED94);
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

void func_0000EE68(struct mbuf *m0, ...)
{
	struct rawcb *rp;
	struct mbuf *m = m0;
	int sockets = 0;
	struct socket *last;
	va_list ap;
	struct sockproto *proto;
	struct sockaddr *src, *dst;

	va_start(ap, m0);
	proto = va_arg(ap, struct sockproto *);
	src = va_arg(ap, struct sockaddr *);
	dst = va_arg(ap, struct sockaddr *);
	va_end(ap);

	last = 0;
	for (rp = rawcb.lh_first; rp != 0; rp = rp->rcb_list.le_next) {
		if (rp->rcb_proto.sp_family != proto->sp_family)
			continue;
		if (rp->rcb_proto.sp_protocol  &&
		    rp->rcb_proto.sp_protocol != proto->sp_protocol)
			continue;
#define	equal(a1, a2) \
  (func_0002C978((char *)(a1), (char *)(a2), a1->sa_len) == 0)
		if (rp->rcb_laddr && !equal(rp->rcb_laddr, dst))
			continue;
		if (rp->rcb_faddr && !equal(rp->rcb_faddr, src))
			continue;
		if (last) {
			struct mbuf *n;
			if ((n = sceNetMCopym(m, 0, (int)M_COPYALL, M_DONTWAIT)) != NULL) {
				if (sbappendaddr(&last->so_rcv, src,
				    n, (struct mbuf *)0) == 0)
					sceNetMFreem(n);
				else {
					sorwakeup(last);
					sockets++;
				}
			}
		}
		last = rp->rcb_socket;
	}
	if (last) {
		if (sbappendaddr(&last->so_rcv, src,
		    m, (struct mbuf *)0) == 0)
			sceNetMFreem(m);
		else {
			sorwakeup(last);
			sockets++;
		}
	} else
		sceNetMFreem(m);
}

INCLUDE_RODATA("nonmatchings/pspnet_inet_rtsub", D_0002B6FC);

INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000F040);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000F1F8);
#endif

#if FW_VERSION < 201
void func_0000F1F8(void) {
    rawcb.lh_first = NULL;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", func_0000F204);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", raw_setsockaddr);
#endif

#if FW_VERSION < 201
void raw_setpeeraddr(struct rawcb *rp, struct mbuf *nam) {
    nam->m_len = rp->rcb_faddr->sa_len;
    func_0002C9B8(rp->rcb_faddr, mtod(nam, u8 *), nam->m_len);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_rtsub", raw_setpeeraddr);
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
