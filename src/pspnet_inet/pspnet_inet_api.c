/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

#if FW_VERSION < 201
s32 sce_alignbytes(void) {
    return 3;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00005C9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetSocket);
#endif

#if FW_VERSION >= 282
s32 func_00005B8C(void) {
    return 3;
}

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00005B94);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetBind);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetAccept);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetConnect);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetSend);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetSendto);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetSendmsg);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00006568);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetRecv);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetRecvfrom);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetRecvmsg);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00006AB0);

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
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetSetsockopt);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetGetsockopt);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetGetsockname);

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
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetGetpeername);
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
    sceNetBcopy(buf, mtod(m, u8 *), buflen);
    *mp = m;
    if (type == MT_SONAME) {
        sa = mtod(m, struct sockaddr *);
        sa->sa_len = buflen;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetSelect);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00007914);

#if FW_VERSION < 282
void func_000076C4(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 0);
}

void func_000076E0(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 1);
}
#else
void func_00007A88(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 0);
}

void func_00007AA4(s32 arg0, s32 arg1, s32 arg2) {
    func_00008704(arg0, arg1, arg2, 1);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetPoll);

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

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00007E78);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", _sce_pspnet_ioctl_wait);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInet_lib_B3FF98EB);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetSocket);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetListen);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetShutdown);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_000085D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_000084B4);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetClose);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetCloseWithRST);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_api", sceNetInetSocketAbort);
#endif

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00008704);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00008874);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sysctl_int);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", sysctl_rdint);

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
        sceNetBcopy(sp, oldp, len);
        return 0;
    }
    *oldlenp = len;
    return 0;
}
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

struct ifaddr *ifaof_ifpforaddr(struct sockaddr *addr, struct ifnet *ifp) {
    struct ifaddr *ifa;
    char *cp, *cp2, *cp3;
    char *cplim;
    struct ifaddr *ifa_maybe = 0;
    u32 af = addr->sa_family;

    if (ifp->if_output == _sce_pspnet_if_nulloutput)
        return (NULL);

    if (af >= 31)
        return (NULL);

    for (ifa = ifp->if_addrlist.tqh_first; ifa != 0; ifa = ifa->ifa_list.tqe_next) {
        if (ifa->ifa_addr->sa_family != af)
            continue;
        ifa_maybe = ifa;
        if (ifa->ifa_netmask == 0) {
            if (func_0002C978(addr, ifa->ifa_addr, addr->sa_len) == 0 ||
                (ifa->ifa_dstaddr && func_0002C978(addr, ifa->ifa_dstaddr, addr->sa_len) == 0))
                return (ifa);
            continue;
        }
        cp = addr->sa_data;
        cp2 = ifa->ifa_addr->sa_data;
        cp3 = ifa->ifa_netmask->sa_data;
        cplim = ifa->ifa_netmask->sa_len + (char *)ifa->ifa_netmask;
        for (; cp3 < cplim; cp3++)
            if ((*cp++ ^ *cp2++) & *cp3)
                break;
        if (cp3 == cplim)
            return (ifa);
    }
    return (ifa_maybe);
}

s32 if_rtdel(struct rtentry *rt, void *arg) {
    if (rt->rt_ifp == arg) {
        rtrequest(2, rt->rt_nodes[0].rn_key, rt->rt_gateway, rt->rt_nodes[0].rn_mask, rt->rt_flags, NULL);
    }
    return 0;
}

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

INCLUDE_ASM("nonmatchings/pspnet_inet_api", ifa_ifwithladdr);

#if FW_VERSION < 282
void func_000093F0(s32 arg0) {
    func_0000E448(arg0, 0);
}

void func_0000940C(s32 arg0) {
    rtinit(arg0, 2, 0);
}
#else
void func_00009570(s32 arg0) {
    func_0000E4E4(arg0, 0);
}

void func_0000958C(s32 arg0) {
    rtinit(arg0, 2, 0);
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
void func_000095AC(struct ifnet *ifp, s32 family) {
    struct socket so;
    struct domain *dp;
    struct protosw *pr;

    sceNetMemset(&so, 0, sizeof(so));
    dp = pffinddomain(family);
    for (pr = dp->dom_protosw; pr < dp->dom_protoswNPROTOSW; pr++) {
        so.so_proto = pr;
        if (pr->pr_usrreq != NULL)
            (void)(*pr->pr_usrreq)(&so, 22, NULL, NULL, (struct mbuf *)ifp);
    }
}
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

#if FW_VERSION < 282
void func_00009548(s32 arg0) {
    func_0000E448(arg0, 1);
}

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

void func_000095A4(s32 arg0) {
    func_0000E3F0(arg0);
}

void func_000095C0(s32 arg0) {
    func_0000E3F0(arg0);
}

s32 func_000095DC(void) {
    return 0;
}
#else
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
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_0000963C);
#endif

#if FW_VERSION < 201
void func_0000963C(void) {
    _sce_pspnet_start_of_inet_module_in_if_core(&link_rtrequest, func_000097BC, func_000093F0, func_0000940C, &func_000095AC, &func_00009650, func_00009548, func_00009564, func_000095A4, func_000095C0, func_000095DC, &func_00009764, &func_00009788);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_000096D0);
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
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_000097BC);
#endif

#if FW_VERSION < 201
void func_000097BC(void) {

}
#endif

#if FW_VERSION >= 282
void func_0000993C(void) {
}
#endif

#if FW_VERSION < 201
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
INCLUDE_ASM("nonmatchings/pspnet_inet_api", ether_multiaddr);
#endif

void func_00009A14(void *arg0, void *arg1, u16 arg2, void *arg3) {
    if (D_0002C520 > 0) {
        D_0002C51C(arg1, arg2, arg3);
    }
}

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00009A58);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00009968);
#endif

#if FW_VERSION < 201
s32 func_00009968(s32 arg0) {
    D_0002C51C = (SceNetInetHook)arg0;
    D_0002C520 = 1;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00009984);
#endif

#if FW_VERSION < 201
s32 func_00009984(void) {
    D_0002C520 = 0;
    D_0002C51C = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_0000999C);
#endif

#if FW_VERSION < 201
void func_0000999C(void) {
    _sce_pspnet_start_of_inet_module_in_if_ethersubr_core(&func_00009B84, &func_00009A14, &func_00009A58, &ether_multiaddr);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_000099D4);
#endif

#if FW_VERSION < 201
s32 func_000099D4(void) {
    return _sce_pspnet_stop_of_inet_module_in_if_ethersubr_core();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
struct ifqueue *sceNetInet_lib_D7928A6D(void) {
    return &ipintrq;
}
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

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_00009B84);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_0000A144);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_0000A470);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_0000A61C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_0000A804);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_0000AE9C);
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_0000A960);

INCLUDE_ASM("nonmatchings/pspnet_inet_api", func_0000AFE0);
#endif

s32 rn_walktree(struct radix_node_head *h, s32 (*f)(struct radix_node *, void *), void *w) {
    s32 error;
    struct radix_node *base, *next;
    struct radix_node *rn = h->rnh_treetop;

    while (rn->rn_b >= 0)
        rn = rn->rn_l;
    for (;;) {
        base = rn;
        while (rn->rn_p->rn_r == rn && (rn->rn_flags & RNF_ROOT) == 0)
            rn = rn->rn_p;
        for (rn = rn->rn_p->rn_r; rn->rn_b >= 0;)
            rn = rn->rn_l;
        next = rn;
        while ((rn = base) != NULL) {
            base = rn->rn_dupedkey;
            if (!(rn->rn_flags & RNF_ROOT) && (error = (*f)(rn, w)))
                return (error);
        }
        rn = next;
        if (rn->rn_flags & RNF_ROOT)
            return (0);
    }
}

struct radix_node *rn_search(void *v_arg, struct radix_node *head) {
    struct radix_node *x;
    char *v;

    for (x = head, v = v_arg; x->rn_b >= 0;) {
        if (x->rn_bmask & v[x->rn_off])
            x = x->rn_r;
        else
            x = x->rn_l;
    }
    return (x);
}

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

s32 rn_refines(void *m_arg, void *n_arg) {
    char *m = m_arg, *n = n_arg;
    char *lim, *lim2 = lim = n + *(u8 *)n;
    s32 longer = (*(u8 *)n++) - (s32)(*(u8 *)m++);
    s32 masks_are_equal = 1;

    if (longer > 0)
        lim -= longer;
    while (n < lim) {
        if (*n & ~(*m))
            return 0;
        if (*n++ != *m++)
            masks_are_equal = 0;
    }
    while (n < lim2)
        if (*n++)
            return 0;
    if (masks_are_equal && (longer < 0))
        for (lim2 = m - longer; m < lim2;)
            if (*m++)
                return 1;
    return (!masks_are_equal);
}

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

INCLUDE_ASM("nonmatchings/pspnet_inet_api", rn_inithead);

#if FW_VERSION < 201
void rn_init(void) {
    char *cp, *cplim;
    struct domain *dom;

    max_keylen = 0;
    for (dom = domains; dom; dom = dom->dom_next)
        if (dom->dom_maxrtkey > max_keylen)
            max_keylen = dom->dom_maxrtkey;
    D_0002F2F8 = 0;
    D_0002EB74 = 0;
    mask_rnhead = 0;
    if (max_keylen == 0)
        return;
    rn_zeros = sceNetMallocInternal(3 * max_keylen);
    func_0002C94C(rn_zeros, 0, 3 * max_keylen);
    rn_ones = cp = rn_zeros + max_keylen;
    addmask_key = cplim = rn_ones + max_keylen;
    while (cp < cplim)
        *cp++ = -1;
    rn_inithead((void **)&mask_rnhead, 0);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_inet_api", rn_init);
#endif
