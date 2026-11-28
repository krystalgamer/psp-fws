/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
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

#if FW_VERSION < 201
void rtredirect(struct sockaddr *dst, struct sockaddr *gateway, struct sockaddr *netmask, s32 flags,
                struct sockaddr *src, struct rtentry **rtp) {
    struct rtentry *rt;
    s32 error = 0;
    u16 *stat = 0;
    struct rt_addrinfo info;
    struct ifaddr *ifa;

    if ((ifa = ifa_ifwithnet(gateway)) == 0) {
        error = 0x72;
        goto out;
    }
    rt = rtalloc1(dst, 0);
#define equal(a1, a2) (func_0002C978((char *)(a1), (char *)(a2), (a1)->sa_len) == 0)
    if (!(flags & 0x40) && rt &&
        (!equal(src, rt->rt_gateway) || rt->rt_ifa != ifa))
        error = 0x16;
    else if (ifa_ifwithaddr(gateway))
        error = 0x76;
    if (error)
        goto done;
    if ((rt == 0) || (rt->rt_nodes[0].rn_mask && ((struct sockaddr *)rt->rt_nodes[0].rn_mask)->sa_len < 2))
        goto create;
    if (rt->rt_flags & 0x2) {
        if (((rt->rt_flags & 0x4) == 0) && (flags & 0x4)) {
        create:
            flags |= 0x2 | 0x10;
            error = rtrequest(1, dst, gateway, netmask, flags, (struct rtentry **)0);
            stat = &rt_stat.rts_dynamic;
        } else {
            rt->rt_flags |= 0x20;
            flags |= 0x20;
            stat = &rt_stat.rts_newgateway;
            rt_setgate(rt, rt_key(rt), gateway);
        }
    } else
        error = 0x76;
done:
    if (rt) {
        if (rtp && !error)
            *rtp = rt;
        else
            rtfree(rt);
    }
out:
    if (error)
        rt_stat.rts_badredirect++;
    else if (stat != NULL)
        (*stat)++;
    __builtin_memset((char *)&info, 0, sizeof(info));
    info.rti_info[0] = dst;
    info.rti_info[1] = gateway;
    info.rti_info[2] = netmask;
    info.rti_info[6] = src;
    rt_missmsg(6, &info, flags, error);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_route", rtredirect);
#endif

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

INCLUDE_ASM("nonmatchings/pspnet_inet_route", rtinit);

void rt_timer_queue_destroy(struct rttimer_queue *rtq, s32 destroy) {
    struct rttimer *r;

    while ((r = rtq->rtq_head.tqh_first) != NULL) {
        if (r->rtt_link.le_next != NULL)
            r->rtt_link.le_next->rtt_link.le_prev = r->rtt_link.le_prev;
        *r->rtt_link.le_prev = r->rtt_link.le_next;
        if (r->rtt_next.tqe_next != NULL)
            r->rtt_next.tqe_next->rtt_next.tqe_prev = r->rtt_next.tqe_prev;
        else
            rtq->rtq_head.tqh_last = r->rtt_next.tqe_prev;
        *r->rtt_next.tqe_prev = r->rtt_next.tqe_next;
        if (destroy) {
            if (r->rtt_func != NULL) {
                (*r->rtt_func)(r->rtt_rt, r);
            } else {
                rtrequest(2, (struct sockaddr *)rt_key(r->rtt_rt), 0, 0, 0, 0);
            }
        }
        sceNetFreeInternal(r);
    }
    if (rtq->rtq_link.le_next != NULL)
        rtq->rtq_link.le_next->rtq_link.le_prev = rtq->rtq_link.le_prev;
    *rtq->rtq_link.le_prev = rtq->rtq_link.le_next;
}

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

#if FW_VERSION < 201
s32 rt_timer_add(struct rtentry *rt, void (*func)(), struct rttimer_queue *queue) {
    struct rttimer *r;
    s32 current_time;

    current_time = sceNetGetSystemClockSec();

    for (r = rt->rt_timer; r != NULL; r = r->rtt_link.le_next) {
        if (r->rtt_func == func) {
            if (r->rtt_link.le_next != NULL)
                r->rtt_link.le_next->rtt_link.le_prev = r->rtt_link.le_prev;
            *r->rtt_link.le_prev = r->rtt_link.le_next;
            if (r->rtt_next.tqe_next != NULL)
                r->rtt_next.tqe_next->rtt_next.tqe_prev = r->rtt_next.tqe_prev;
            else
                r->rtt_queue->rtq_head.tqh_last = r->rtt_next.tqe_prev;
            *r->rtt_next.tqe_prev = r->rtt_next.tqe_next;
            sceNetFreeInternal(r);
            break;
        }
    }

    r = sceNetMallocInternal(sizeof(*r));
    if (r == NULL)
        return (0x69);
    __builtin_memset(r, 0, sizeof(*r));

    r->rtt_rt = rt;
    r->rtt_time = current_time;
    r->rtt_func = func;
    r->rtt_queue = queue;
    if ((r->rtt_link.le_next = rt->rt_timer) != NULL)
        rt->rt_timer->rtt_link.le_prev = &r->rtt_link.le_next;
    rt->rt_timer = r;
    r->rtt_link.le_prev = &rt->rt_timer;
    r->rtt_next.tqe_next = NULL;
    r->rtt_next.tqe_prev = queue->rtq_head.tqh_last;
    *queue->rtq_head.tqh_last = r;
    queue->rtq_head.tqh_last = &r->rtt_next.tqe_next;

    return (0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_route", rt_timer_add);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000CD64);
#endif

void rt_timer_timer(void *arg) {
    struct rttimer_queue *rtq;
    struct rttimer *r;
    s32 current_time;
    s32 s;

    current_time = sceNetGetSystemClockSec();
    s = _sce_pspnet_spllock();
    for (rtq = D_0002CCB4.lh_first; rtq != NULL; rtq = rtq->rtq_link.le_next) {
        while ((r = rtq->rtq_head.tqh_first) != NULL &&
               (r->rtt_time + rtq->rtq_timeout) < current_time) {
            if (r->rtt_link.le_next != NULL)
                r->rtt_link.le_next->rtt_link.le_prev = r->rtt_link.le_prev;
            *r->rtt_link.le_prev = r->rtt_link.le_next;
            if (r->rtt_next.tqe_next != NULL)
                r->rtt_next.tqe_next->rtt_next.tqe_prev = r->rtt_next.tqe_prev;
            else
                rtq->rtq_head.tqh_last = r->rtt_next.tqe_prev;
            *r->rtt_next.tqe_prev = r->rtt_next.tqe_next;
            if (r->rtt_func != NULL) {
                (*r->rtt_func)(r->rtt_rt, r);
            } else {
                rtrequest(2, (struct sockaddr *)rt_key(r->rtt_rt), 0, 0, 0, 0);
            }
            sceNetFreeInternal(r);
        }
    }
    _sce_pspnet_splunlock(s);
    _sce_pspnet_callout_reset(&D_0002CD38, 100, rt_timer_timer, NULL);
}

void rtable_init(void **table) {
    struct domain *dom;

    for (dom = domains; dom; dom = dom->dom_next)
        if (dom->dom_rtattach)
            dom->dom_rtattach(&table[dom->dom_family], dom->dom_rtoffset);
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_route", func_0000D170);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_route", route_init);
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
