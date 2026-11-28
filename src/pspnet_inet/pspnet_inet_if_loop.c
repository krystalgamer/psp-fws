/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", looutput);

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
    ifp->if_output = looutput; //P
    ifp->if_type = IFT_LOOP; //P
    ifp->if_hdrlen = 0; //P
    ifp->if_addrlen = 0; //P
    _sce_pspnet_if_attach(ifp);
}
#else
void loopattach(void) {
    struct ifnet *ifp = &loif;

    sceNetSprintf(ifp->if_xname, "lo%d", 0);
    ifp->if_softc = NULL; //P
    ifp->if_mtu = 0x81BC; //P
    ifp->if_flags = IFF_LOOPBACK | IFF_MULTICAST; //P
    ifp->if_ioctl = loioctl; //P
    ifp->if_output = looutput; //P
    ifp->if_type = IFT_LOOP; //P
    ifp->if_hdrlen = 0; //P
    ifp->if_addrlen = 0; //P
    _sce_pspnet_if_attach(ifp);
}
#endif

void lortrequest(s32 cmd, struct rtentry *rt) {
    if (rt != NULL) {
        rt->rt_rmx.rmx_mtu = 0x81BC; /* LOMTU */
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_0000F730);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_0000FA70);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_0000FBD0);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_0000FDC0);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_0000FED8);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_0001044C);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00010528);

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
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_000106E0);
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

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00010708);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", arpintr);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_000107F8);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00010930);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00010A28);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00010CCC);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00010D50);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00010874);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", in_control);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00010B84);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00010C08);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", in_purgeaddr);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00011968);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_0001184C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00011820);
#endif

#if FW_VERSION < 271
void func_00011D04(u8 *arg0, u8 *arg1) {
    if (*(s32 *)(arg1 + 0x2C) & 1) {
        if (*(u16 *)(arg0 + 0x30) & 0x18) {
            rtinit((s32)arg1, 2, 4);
        } else {
            rtinit((s32)arg1, 2, 0);
        }
        *(s32 *)(arg1 + 0x2C) &= ~1;
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00011D04);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_000119FC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00011DC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00011D6C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00012230);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00012354);

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
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00012108);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00012478);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", in_delmulti);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00012490);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00012758);

INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_000127EC);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_inet_if_loop", D_0002B754);

#if FW_VERSION >= 151 && FW_VERSION < 201
char *func_00012550(struct in_addr ina) {
    ina.s_addr = __builtin_allegrex_wsbw(ina.s_addr);
    func_0002CCAC(D_0002CDB0, "%d.%d.%d.%d", ina.s_addr >> 24, (ina.s_addr >> 16) & 0xff,
                  (ina.s_addr >> 8) & 0xff, ina.s_addr & 0xff);
    return D_0002CDB0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00012550);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_000128AC);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00012A08);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_000129AC);
#endif

#if FW_VERSION < 151
__inline void in_purgemkludge(struct ifnet *ifp) {
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

void in_purgeif(struct ifnet *ifp) {
    struct ifaddr *ifa, *nifa;

    for (ifa = ifp->if_addrlist.tqh_first; ifa != NULL; ifa = nifa) {
        nifa = ifa->ifa_list.tqe_next;
        if (ifa->ifa_addr->sa_family != AF_INET)
            continue;
        in_purgeaddr(ifa, ifp);
    }
    in_purgemkludge(ifp);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", in_purgeif);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00012730);
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
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_if_loop", func_00012B9C);
#endif
