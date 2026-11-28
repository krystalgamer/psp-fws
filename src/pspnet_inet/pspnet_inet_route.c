/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

#if FW_VERSION < 201
__inline void rtalloc(struct route *ro) {
    if (ro->ro_rt != NULL && ro->ro_rt->rt_ifp != NULL && (ro->ro_rt->rt_flags & RTF_UP)) {
        return;
    }
    ro->ro_rt = rtalloc1(&ro->ro_dst, 1);
}

__inline void rtfree(struct rtentry *rt) {
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

__inline s32 rtioctl(u32 cmd, void *data) {
    return 0x5F;
}

struct rtentry *rtalloc1(struct sockaddr *dst, s32 report) {
    struct radix_node_head *rnh = rt_tables[dst->sa_family];
    struct rtentry *rt;
    struct radix_node *rn;
    struct rtentry *newrt = 0;
    struct rt_addrinfo info;
    s32 s = _sce_pspnet_spllock(), err = 0, msgtype = 7;

    if (rnh && (rn = rnh->rnh_matchaddr((void *)dst, rnh)) &&
        ((rn->rn_flags & 0x2) == 0)) {
        newrt = rt = (struct rtentry *)rn;
        if (report && (rt->rt_flags & 0x100)) {
            err = rtrequest(11, dst, (struct sockaddr *)0, (struct sockaddr *)0, 0, &newrt);
            if (err) {
                newrt = rt;
                rt->rt_refcnt++;
                goto miss;
            }
            if ((rt = newrt) && (rt->rt_flags & 0x200)) {
                msgtype = 11;
                goto miss;
            }
        } else
            rt->rt_refcnt++;
    } else {
        rt_stat.rts_unreach++;
    miss:
        if (report) {
            __builtin_memset((char *)&info, 0, sizeof(info));
            info.rti_info[0] = dst;
            rt_missmsg(msgtype, &info, 0, err);
        }
    }
    _sce_pspnet_splunlock(s);
    return (newrt);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_route", rtalloc1);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_route", rtredirect);

struct ifaddr *ifa_ifwithroute(s32 flags, struct sockaddr *dst, struct sockaddr *gateway) {
    struct ifaddr *ifa;

    if ((flags & 0x2) == 0) {
        ifa = 0;
        if (flags & 0x4)
            ifa = ifa_ifwithdstaddr(dst);
        if (ifa == 0)
            ifa = ifa_ifwithaddr(gateway);
    } else {
        ifa = ifa_ifwithdstaddr(gateway);
    }
    if (ifa == 0)
        ifa = ifa_ifwithnet(gateway);
    if (ifa == 0) {
        struct rtentry *rt = rtalloc1(dst, 0);
        if (rt == 0)
            return (0);
        rt->rt_refcnt--;
        if ((ifa = rt->rt_ifa) == 0)
            return (0);
    }
    if (ifa->ifa_addr->sa_family != dst->sa_family) {
        struct ifaddr *oifa = ifa;
        ifa = ifaof_ifpforaddr(dst, ifa->ifa_ifp);
        if (ifa == 0)
            ifa = oifa;
    }
    return (ifa);
}

INCLUDE_ASM("nonmatchings/pspnet_inet_route", rtrequest);

#if FW_VERSION < 201
s32 rt_setgate(struct rtentry *rt0, struct sockaddr *dst, struct sockaddr *gate) {
    char *new, *old;
    s32 dlen = ROUNDUP(dst->sa_len), glen = ROUNDUP(gate->sa_len);
    struct rtentry *rt = rt0;

    if (rt->rt_gateway == 0 || glen > ROUNDUP(rt->rt_gateway->sa_len)) {
        old = (char *)rt_key(rt);
        new = sceNetMallocInternal(dlen + glen);
        if (new == 0)
            return 1;
        func_0002C94C(new, 0, dlen + glen);
        rt->rt_nodes->rn_key = new;
    } else {
        new = rt->rt_nodes->rn_key;
        old = 0;
    }
    func_0002C9B8(gate, (rt->rt_gateway = (struct sockaddr *)(new + dlen)), glen);
    if (old) {
        func_0002C9B8(dst, new, dlen);
        sceNetFreeInternal(old);
    }
    if (rt->rt_gwroute) {
        rt = rt->rt_gwroute;
        RTFREE(rt);
        rt = rt0;
        rt->rt_gwroute = 0;
    }
    if (rt->rt_flags & 0x2) {
        rt->rt_gwroute = rtalloc1(gate, 1);
        if (rt->rt_gwroute && !(rt->rt_rmx.rmx_locks & 0x1) &&
            (rt->rt_rmx.rmx_mtu == 0 || rt->rt_rmx.rmx_mtu > rt->rt_gwroute->rt_rmx.rmx_mtu)) {
            rt->rt_rmx.rmx_mtu = rt->rt_gwroute->rt_rmx.rmx_mtu;
        }
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_route", rt_setgate);
#endif

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
INCLUDE_ASM("nonmatchings/pspnet_inet_route", rt_maskedcopy);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000C8F8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000C998);

INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000CC00);

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
INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000CC8C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000CD64);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000CE98);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000D170);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000CF68);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000D048);
#endif

#if FW_VERSION >= 201
void rtalloc(struct route *ro) {
    if (ro->ro_rt != NULL && ro->ro_rt->rt_ifp != NULL && (ro->ro_rt->rt_flags & RTF_UP)) {
        return;
    }
    ro->ro_rt = rtalloc1(&ro->ro_dst, 1);
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
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_route", rtioctl);
#endif

#if FW_VERSION >= 282
s32 func_0000D1F4(void) {
    return 0x5F;
}
#endif
