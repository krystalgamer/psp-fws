/* compiler[282-352]: 1.9.2 */
/* cflags[271-352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhoc_decls.h"

#if FW_VERSION < 201
s32 sceNetAdhocInit(void) {
    s32 s;
    s32 ret;

    s = _sce_pspnet_spllock();
    ret = 0x80410713;
    if (g_adhocInit > 0)
        goto end;
    g_adhocIntrq.ifq_maxlen = 50;
    g_adhocIntrq.ifq_len = 0;
    g_adhocIntrq.ifq_head = NULL;
    g_adhocIntrq.ifq_drops = 0;
    g_adhocIntrq.ifq_tail = NULL;
    ret = func_00000DD0();
    if (ret < 0)
        goto end;
    ret = func_0000297C();
    if (ret < 0)
        goto err1;
    ret = func_000052D4();
    if (ret < 0)
        goto err2;
    ret = _sce_pspnet_start_of_adhoc_module_in_netintr(func_00000270, func_00000444);
    if (ret < 0)
        goto err3;
    ret = _sce_pspnet_start_of_adhoc_module_in_if_ethersubr_core(func_0000047C);
    if (ret < 0)
        goto err4;
    if (func_00006880() < 0)
        goto err5;
    g_adhocInit = 1;
    _sce_pspnet_splunlock(s);
    return 0;

err5:
    _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core();
err4:
    _sce_pspnet_stop_of_adhoc_module_in_netintr();
err3:
    func_00004964();
err2:
    func_000029E8();
err1:
    func_00000E18();
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocInit);
#endif

#if FW_VERSION < 201
s32 sceNetAdhocTerm(void) {
    s32 s;
    s32 ret;
    struct mbuf *m;

    ret = 0;
    s = _sce_pspnet_spllock();
    if (g_adhocInit == 0)
        goto end;
    if (func_00001044() != 0) {
        ret = 0x80410714;
        goto end;
    }
    func_00006F80();
    _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core();
    _sce_pspnet_stop_of_adhoc_module_in_netintr();
    func_00004964();
    func_000029E8();
    func_00000E18();
    while (g_adhocIntrq.ifq_head != NULL) {
        IF_DEQUEUE(&g_adhocIntrq, m);
        sceNetMFreem(m);
    }
    g_adhocInit = 0;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocTerm);
#endif

#if FW_VERSION < 201
void func_00000270(void) {
    struct mbuf *m;
    u8 type;

    for (;;) {
        IF_DEQUEUE(&g_adhocIntrq, m);
        if (m == NULL)
            break;
        if ((u32)m->m_pkthdr.len <= 0x30) {
            sceNetMFreem(m);
            continue;
        }
        if ((u32)m->m_len <= 0x30)
            sceNetMCopydata(m, 0x30, 1, &type);
        else
            type = m->m_data[0x30];
        switch (type) {
        case 1:
            func_000023C4(m);
            break;
        case 2:
            func_0000578C(m);
            break;
        default:
            sceNetMFreem(m);
            break;
        }
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000270);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000036C);

s32 func_0000047C(s32 a0, s32 a1, struct ifqueue **out) {
    *out = &g_adhocIntrq;
    return 0;
}

#if FW_VERSION < 282
void func_00000444(struct ifnet *ifp) {
    func_00002B90(ifp);
}
#else
void func_00000490(s32 arg0) {
    func_00002D2C(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPollSocket);

#if FW_VERSION < 282
s32 func_0000092C(SceNetAdhocPollEnt *ent, s32 count) {
    s32 i;
    s32 n;

    n = 0;
    for (i = 0; i < count; i++, ent++) {
        switch (ent->d->type) {
        case 2:
            ent->sd->revents = func_000050F8(ent->d, ent->sd->events);
            break;
        case 1:
            ent->sd->revents = func_00002C00(ent->d, ent->sd->events);
            break;
        }
        n += ent->sd->revents != 0;
    }
    return n;
}
#else
s32 func_00000974(SceNetAdhocPollEnt *ent, s32 count) {
    s32 i;
    s32 n;

    n = 0;
    for (i = 0; i < count; i++, ent++) {
        switch (ent->d->type) {
        case 2:
            ent->sd->revents = func_00005024(ent->d, ent->sd->events);
            break;
        case 1:
            ent->sd->revents = func_00002D94(ent->d, ent->sd->events);
            break;
        }
        n += ent->sd->revents != 0;
    }
    return n;
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocSetSocketAlert(s32 id, s32 flag) {
    s32 s;
    s32 ret;
    s32 n;
    SceNetAdhocDesc *d;

    ret = 0;
    s = _sce_pspnet_spllock();
    n = 0;
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    for (d = g_adhocDescList.first; d != NULL; d = d->next) {
        if (d->id == id)
            break;
    }
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    if (flag & 0x10) {
        if ((d->flags & 0x10) == 0) {
            d->flags |= 0x10;
            n++;
        }
    } else {
        d->flags &= ~0x10;
    }
    if (flag & 0x20) {
        if ((d->flags & 0x20) == 0) {
            d->flags |= 0x20;
            n++;
        }
    } else {
        d->flags &= ~0x20;
    }
    if (flag & 0x40) {
        if ((d->flags & 0x40) == 0) {
            d->flags |= 0x40;
            n++;
        }
    } else {
        d->flags &= ~0x40;
    }
    if (flag & 0x80) {
        if ((d->flags & 0x80) == 0) {
            d->flags |= 0x80;
            n++;
        }
    } else {
        d->flags &= ~0x80;
    }
    if (flag & 0x100) {
        if ((d->flags & 0x100) == 0) {
            d->flags |= 0x100;
            n++;
        }
    } else {
        d->flags &= ~0x100;
    }
    if (flag & 0x200) {
        if ((d->flags & 0x200) == 0) {
            d->flags |= 0x200;
            n++;
        }
    } else {
        d->flags &= ~0x200;
    }
    if (n != 0)
        _sce_pspnet_adhoc_sabort(d, flag);
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocSetSocketAlert);
#endif

#if FW_VERSION < 201
s32 sceNetAdhocGetSocketAlert(s32 id, s32 *flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    ret = 0;
    if (flag == NULL)
        return 0x80410711;
    s = _sce_pspnet_spllock();
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    for (d = g_adhocDescList.first; d != NULL; d = d->next) {
        if (d->id == id)
            break;
    }
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    *flag = 0;
    if (d->flags & 0x10)
        *flag = 0x10;
    if (d->flags & 0x20)
        *flag |= 0x20;
    if (d->flags & 0x40)
        *flag |= 0x40;
    if (d->flags & 0x80)
        *flag |= 0x80;
    if (d->flags & 0x100)
        *flag |= 0x100;
    if (d->flags & 0x200)
        *flag |= 0x200;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGetSocketAlert);
#endif

s32 func_00000DD0(void) {
    s32 ret;

    g_adhocDescList.first = NULL;
    g_adhocDescList.last = &g_adhocDescList.first;
    ret = _sce_pspnet_start_of_adhoc_module_in_sched(func_00001078);
    if (ret < 0)
        return ret;
    g_adhocLastId = 0;
    return 0;
}

void func_00000E18(void) {
    SceNetAdhocDesc *d;

    _sce_pspnet_stop_of_adhoc_module_in_sched();
    while ((d = g_adhocDescList.first) != NULL) {
        if (d->pcb == NULL) {
            if (d->next != NULL)
                d->next->prev = d->prev;
            else
                g_adhocDescList.last = d->prev;
            *d->prev = d->next;
            sceNetFreeInternal(d);
        }
    }
}

SceNetAdhocDesc *func_00000E90(u8 type, s32 id) {
    SceNetAdhocDesc *d;

    for (d = g_adhocDescList.first; d != NULL; d = d->next) {
        if ((type == 0 || d->type == type) && d->id == id)
            break;
    }
    return d;
}

#if FW_VERSION < 282
s32 func_00000E44(void) {
    s32 id;
    SceNetAdhocDesc *d;

    id = (g_adhocLastId == 255) ? 1 : g_adhocLastId + 1;
    for (; id != g_adhocLastId; id = (id == 255) ? 1 : id + 1) {
        for (d = g_adhocDescList.first; d != NULL; d = d->next) {
            if (d->id == id)
                break;
        }
        if (d == NULL) {
            g_adhocLastId = id;
            return id;
        }
    }
    return -1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000FB4);
#endif

#if FW_VERSION < 201
s32 func_00000ED0(u8 type, SceNetAdhocDesc **out) {
    SceNetAdhocDesc *d;

    d = sceNetMallocInternal(sizeof(SceNetAdhocDesc));
    if (d == NULL)
        return 0x80410001;
    __builtin_memset(d, 0, sizeof(SceNetAdhocDesc));
    d->type = type;
    d->next = NULL;
    d->prev = g_adhocDescList.last;
    *g_adhocDescList.last = d;
    g_adhocDescList.last = &d->next;
    d->id = -1;
    *out = d;
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000ED8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00000F60);
#endif

void func_00000FFC(SceNetAdhocDesc *d) {
    if (d->pcb != NULL)
        return;
    if (d->next != NULL)
        d->next->prev = d->prev;
    else
        g_adhocDescList.last = d->prev;
    *d->prev = d->next;
    sceNetFreeInternal(d);
}

s32 func_00001044(void) {
    SceNetAdhocDesc *d;

    for (d = g_adhocDescList.first; d != NULL; d = d->next) {
        if (d->waiters != NULL)
            return 1;
    }
    return 0;
}

void func_00001078(SceNetAdhocDesc *d, s32 events) {
    SceNetAdhocWaiter *w;

    for (w = d->waiters; w != NULL; w = w->next) {
        if (w->wchan != NULL) {
            if (((events & 0x210) && w->wchan == d->sndchan)
                || ((events & 0x1A0) && w->wchan == d->rcvchan)
                || ((events & 0x40) && w->wchan == d->selchan)) {
                w->wchan = NULL;
                sceKernelSignalSema(w->sema, 1);
            }
        }
    }
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPdpCreate);

#if FW_VERSION < 201
s32 sceNetAdhocPdpSend(s32 id, const SceNetEtherAddr *daddr, u16 dport, const void *data, s32 len, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    if (daddr == NULL)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return 0x80410002;
    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    d = func_00000E90(1, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00001530(d, daddr, dport, data, len, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00002CD4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
s32 sceNetAdhocPdpSend(s32 id, const SceNetEtherAddr *daddr, u16 dport, const void *data, s32 len, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7C0)
        return 0x80410005;
    if (daddr == NULL || (nonblock & ~1))
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(1, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_000016B4(d, daddr, dport, data, len, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00002CD4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceNetAdhocPdpSend(s32 id, const SceNetEtherAddr *daddr, u16 dport, const void *data, s32 len, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7C0)
        return 0x80410005;
    if (daddr == NULL || (nonblock & ~1))
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(1, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_000016B4(d, daddr, dport, data, len, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00002CD4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocPdpSend(s32 id, const SceNetEtherAddr *daddr, u16 dport, const void *data, s32 len, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7C0)
        return 0x80410005;
    if (daddr == NULL || (nonblock & ~1))
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(1, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_00001600(d, daddr, dport, data, len, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00002CD4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION < 150
s32 sceNetAdhocPdpDelete(s32 id, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;
    SceNetAdhocPdpPcb *pcb;

    ret = 0;
    s = _sce_pspnet_spllock();
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(1, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    pcb = d->pcb;
    if (pcb->flags & 1) {
        pcb->flags &= ~1;
        _sce_pspnet_wakeup(&pcb->rcvq_first);
    }
    if (pcb->flags & 2) {
        pcb->flags &= ~2;
        _sce_pspnet_wakeup(&g_adhocSelChan);
    }
    if (pcb->ifp->if_adhocflags & 1) {
        pcb->ifp->if_adhocflags &= ~1;
        _sce_pspnet_wakeup(&pcb->ifp->if_snd);
    }
    if (pcb->ifp->if_adhocflags & 2) {
        pcb->ifp->if_adhocflags &= ~2;
        _sce_pspnet_wakeup(&g_adhocSelChan);
    }
    func_0000223C(pcb);
    d->flags |= 1;
    d->id = -1;
    if (d->waiters == NULL) {
        func_00002CD4(d);
        func_00000FFC(d);
    }
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPdpDelete);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000016B4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001530);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001B90);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001600);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001C28);
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPdpRecv(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock) {
    if (buf == NULL || len == NULL)
        return 0x80410711;
    return func_00001F20(id, addr, port, buf, len, timeout, nonblock, NULL);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceNetAdhocPdpRecv(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock) {
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
    if (buf == NULL || len == NULL || (nonblock & ~1))
        return 0x80410711;
    return func_0000215C(id, addr, port, buf, len, timeout, nonblock, NULL);
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocPdpRecv(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock) {
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
    if (buf == NULL || len == NULL || (nonblock & ~1))
        return 0x80410711;
    return func_000020A4(id, addr, port, buf, len, timeout, nonblock, NULL);
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPdpRecvWithRfInfo(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo) {
    if (buf == NULL || len == NULL || rfinfo == NULL)
        return 0x80410711;
    return func_00001F20(id, addr, port, buf, len, timeout, nonblock, rfinfo);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPdpRecvWithRfInfo);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void sceNetAdhoc_lib_F9240FBA(void) {
    sceNetMemset(&D_00007A8C, 0, 0x18);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceNetAdhoc_lib_F9240FBA(void) {
    M2C_VFIELD(&D_00007A8C, s32, 0) = 0;
    M2C_VFIELD(&D_00007A8C, s32, 0x14) = 0;
    M2C_VFIELD(&D_00007A8C, s32, 4) = 0;
    M2C_VFIELD(&D_00007A8C, s32, 8) = 0;
    M2C_VFIELD(&D_00007A8C, s32, 0xC) = 0;
    M2C_VFIELD(&D_00007A8C, s32, 0x10) = 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_1059683E);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
s32 func_0000215C(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(1, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00001B90(d, addr, port, buf, len, timeout, nonblock, rfinfo);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00002CD4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_0000215C(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(1, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_00001B90(d, addr, port, buf, len, timeout, nonblock, rfinfo);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00002CD4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION < 201
s32 func_00001F20(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return 0x80410002;
    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    d = func_00000E90(1, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00001B90(d, addr, port, buf, len, timeout, nonblock, rfinfo);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00002CD4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002108);
#endif

#if FW_VERSION >= 282
void sceNetAdhoc_lib_F9240FBA(void) {
    sceNetMemset(&D_000079CC, 0, 0x18);
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_1059683E);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000020A4);
#endif

void func_0000223C(SceNetAdhocPdpPcb *pcb) {
    struct mbuf *m;
    SceNetAdhocPdpQent *e;

    while (pcb->rcvq_first != NULL) {
        m = pcb->rcvq_first;
        if ((pcb->rcvq_first = m->m_nextpkt) == NULL)
            pcb->rcvq_last = NULL;
        m->m_nextpkt = NULL;
        pcb->rcvcc = pcb->rcvcc - m->m_pkthdr.len + 0x3C;
        sceNetMFreem(m);
    }
    pcb->rcvbufsize = 0;
    while ((e = pcb->qfirst) != NULL) {
        _sce_pspnet_callout_stop(e->callout);
        sceNetMFreem(e->m);
        if (e->next != NULL)
            e->next->prev = e->prev;
        else
            pcb->qlast = e->prev;
        *e->prev = e->next;
        sceNetFreeInternal(e);
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002404);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000023C4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000022FC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGetPdpStat);

s32 func_0000297C(void) {
    g_pdpList.first = NULL;
    g_pdpList.last = &g_pdpList.first;
    g_pdpLastPort = sceNetRand() / 0x20009 + 0x4000;
    D_000079E4 = sceNetRand() / 0x8001;
    return 0;
}

void func_000029E8(void) {
    SceNetAdhocPdpPcb *pcb;
    SceNetAdhocPdpPcb *p;
    SceNetAdhocDesc *d;

    while ((pcb = g_pdpList.first) != NULL) {
        func_0000223C(pcb);
        d = pcb->desc;
        p = d->pcb;
        d->pcb = NULL;
        if (p->next != NULL)
            p->next->prev = p->prev;
        else
            g_pdpList.last = p->prev;
        *p->prev = p->next;
        sceNetFreeInternal(p);
    }
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002B7C);
#endif

#if FW_VERSION < 201
s32 func_00002A9C(SceNetAdhocDesc *d) {
    SceNetAdhocPdpPcb *pcb;

    pcb = sceNetMallocInternal(sizeof(SceNetAdhocPdpPcb));
    if (pcb == NULL)
        return 0x80410001;
    __builtin_memset(pcb, 0, sizeof(SceNetAdhocPdpPcb));
    pcb->qfirst = NULL;
    pcb->qlast = &pcb->qfirst;
    pcb->desc = d;
    d->pcb = pcb;
    pcb->next = NULL;
    pcb->prev = g_pdpList.last;
    *g_pdpList.last = pcb;
    g_pdpList.last = &pcb->next;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002108);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002A6C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002AFC);
#endif

void func_00002CD4(SceNetAdhocDesc *d) {
    SceNetAdhocPdpPcb *pcb;

    pcb = d->pcb;
    d->pcb = NULL;
    if (pcb->next != NULL)
        pcb->next->prev = pcb->prev;
    else
        g_pdpList.last = pcb->prev;
    *pcb->prev = pcb->next;
    sceNetFreeInternal(pcb);
}

#if FW_VERSION < 282
s32 func_00002B84(SceNetAdhocPdpPcb *pcb, s32 size) {
    pcb->rcvbufsize = size;
    return 0;
}

void func_00002B90(struct ifnet *ifp) {
    if (ifp->if_adhocflags & 1) {
        ifp->if_adhocflags &= ~1;
        _sce_pspnet_wakeup(&ifp->if_snd);
    }
    if (ifp->if_adhocflags & 2) {
        ifp->if_adhocflags &= ~2;
        _sce_pspnet_wakeup(&g_adhocSelChan);
    }
}
#endif

#if FW_VERSION < 150
s32 func_00002C00(SceNetAdhocDesc *d, s32 events) {
    SceNetAdhocPdpPcb *pcb;
    s32 ret;

    pcb = d->pcb;
    ret = 0;
    if ((events & 2) && pcb->rcvq_first != NULL)
        ret = 2;
    if ((events & 1) && pcb->ifp->if_snd.ifq_len < pcb->ifp->if_snd.ifq_maxlen)
        ret |= 1;
    if (ret == 0) {
        if (events & 2)
            pcb->flags |= 2;
        if (events & 1)
            pcb->ifp->if_adhocflags |= 2;
    }
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002C00);
#endif

#if FW_VERSION >= 282
s32 func_00002D20(SceNetAdhocPdpPcb *pcb, s32 size) {
    pcb->rcvbufsize = size;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002D2C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002D94);
#endif

#if FW_VERSION < 150
void func_00002E48(SceNetAdhocPdpQent *e) {
    _sce_pspnet_callout_stop(e->callout);
    sceNetMFreem(e->m);
    if (e->next != NULL)
        e->next->prev = e->prev;
    else
        e->pcb->qlast = e->prev;
    *e->prev = e->next;
    sceNetFreeInternal(e);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002E48);
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPtpOpen(const SceNetEtherAddr *saddr, u16 sport, const SceNetEtherAddr *daddr, u16 dport, s32 bufsize, u32 rexmt_int, s32 rexmt_cnt, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    if (saddr == NULL || daddr == NULL)
        return 0x80410711;
    ret = 0x80410712;
    s = _sce_pspnet_spllock();
    if (g_adhocInit == 0)
        goto end;
    ret = func_00003A68(saddr, sport, bufsize, bufsize, rexmt_int, rexmt_cnt, &d);
    if (ret < 0)
        goto end;
    ret = func_0000556C(d->pcb, daddr, dport);
    if (ret < 0) {
        func_000039FC(d);
        goto end;
    }
    ret = d->id;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpOpen);
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPtpConnect(s32 id, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return 0x80410002;
    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    d = func_00000E90(2, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00003A34(d, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
s32 sceNetAdhocPtpConnect(s32 id, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (nonblock & ~1)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00003A34(d, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceNetAdhocPtpConnect(s32 id, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (nonblock & ~1)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_00003A34(d, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocPtpConnect(s32 id, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (nonblock & ~1)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_00003BE8(d, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPtpListen(const SceNetEtherAddr *saddr, u16 sport, s32 bufsize, u32 rexmt_int, s32 rexmt_cnt, s32 backlog, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    if (saddr == NULL)
        return 0x80410711;
    ret = 0x80410712;
    s = _sce_pspnet_spllock();
    if (g_adhocInit == 0)
        goto end;
    ret = func_00003A68(saddr, sport, bufsize, bufsize, rexmt_int, rexmt_cnt, &d);
    if (ret < 0)
        goto end;
    ret = func_000056B0(d->pcb, backlog);
    if (ret < 0) {
        func_000039FC(d);
        goto end;
    }
    ret = d->id;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpListen);
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPtpAccept(s32 id, SceNetEtherAddr *addr, u16 *port, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return 0x80410002;
    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    d = func_00000E90(2, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00003C00(d, addr, port, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
s32 sceNetAdhocPtpAccept(s32 id, SceNetEtherAddr *addr, u16 *port, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (nonblock & ~1)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00003C00(d, addr, port, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceNetAdhocPtpAccept(s32 id, SceNetEtherAddr *addr, u16 *port, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (nonblock & ~1)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_00003C00(d, addr, port, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocPtpAccept(s32 id, SceNetEtherAddr *addr, u16 *port, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (nonblock & ~1)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_00003D9C(d, addr, port, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPtpSend(s32 id, const void *data, s32 *len, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    if (len == NULL)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return 0x80410002;
    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    d = func_00000E90(2, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    ret = 0x8041070B;
    if ((d->flags & 0xC000) == 0)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00004058(d, data, len, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
s32 sceNetAdhocPtpSend(s32 id, const void *data, s32 *len, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (len == NULL || (nonblock & ~1))
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    if ((d->flags & 0xC000) == 0) {
        ret = 0x8041070B;
        goto end;
    }
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00004058(d, data, len, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 260
s32 sceNetAdhocPtpSend(s32 id, const void *data, s32 *len, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (len == NULL || (nonblock & ~1))
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    if ((d->flags & 0xC000) == 0) {
        ret = 0x8041070B;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_00004058(d, data, len, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPtpRecv(s32 id, void *buf, s32 *len, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    if (buf == NULL || len == NULL)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return 0x80410002;
    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    d = func_00000E90(2, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    ret = 0x8041070B;
    if ((d->flags & 0xC000) == 0)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00004408(d, buf, len, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
s32 sceNetAdhocPtpRecv(s32 id, void *buf, s32 *len, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (buf == NULL || len == NULL || (nonblock & ~1))
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    if ((d->flags & 0xC000) == 0) {
        ret = 0x8041070B;
        goto end;
    }
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_00004408(d, buf, len, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 260
s32 sceNetAdhocPtpRecv(s32 id, void *buf, s32 *len, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (buf == NULL || len == NULL || (nonblock & ~1))
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    if ((d->flags & 0xC000) == 0) {
        ret = 0x8041070B;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_00004408(d, buf, len, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPtpFlush(s32 id, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    ti = _sce_pspnet_thread_enter();
    if (ti == NULL)
        return 0x80410002;
    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    d = func_00000E90(2, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    ret = 0x8041070B;
    if ((d->flags & 0xC000) == 0)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_000045E4(d, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
s32 sceNetAdhocPtpFlush(s32 id, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    SceNetAdhocDesc *p;
    SceNetAdhocDesc *pd;
    SceNetAdhocWaiter *pw;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (nonblock & ~1)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    if ((d->flags & 0xC000) == 0) {
        ret = 0x8041070B;
        goto end;
    }
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = func_000049E4(d, timeout, nonblock);
    if (ti->descs == d) {
        ti->descs = d->tnext;
    } else {
        for (p = ti->descs; p->tnext != d; p = p->tnext)
            ;
        p->tnext = p->tnext->tnext;
    }
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 sceNetAdhocPtpFlush(s32 id, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (nonblock & ~1)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    if ((d->flags & 0xC000) == 0) {
        ret = 0x8041070B;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_000049E4(d, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocPtpFlush(s32 id, u32 timeout, s32 nonblock) {
    SceNetAdhocWaiter *ti;
    SceNetAdhocWaiter *w;
    SceNetAdhocDesc *d;
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
    if (nonblock & ~1)
        return 0x80410711;
    ti = _sce_pspnet_thread_enter(&ret);
    if (ti == NULL)
        return ret;
    s = _sce_pspnet_spllock();
    if (s < 0) {
        ret = s;
        goto end;
    }
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    if ((d->flags & 0xC000) == 0) {
        ret = 0x8041070B;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_0000473C(d, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            func_00004AE4(d);
            func_00000FFC(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPtpClose(s32 id, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    ret = 0;
    s = _sce_pspnet_spllock();
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = func_00000E90(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    func_00004F50(d->pcb);
    func_000056D4(d->pcb);
    d->flags |= 1;
    d->id = -1;
    if (d->waiters == NULL) {
        func_00004AE4(d);
        func_00000FFC(d);
    }
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpClose);
#endif

#if FW_VERSION < 201
s32 func_00003A68(const SceNetEtherAddr *saddr, u16 sport, s32 sndbuf, s32 rcvbuf, u32 rexmt_int, s32 rexmt_cnt, SceNetAdhocDesc **out) {
    s32 id;
    s32 ret;
    SceNetAdhocDesc *d;

    id = func_00000E44();
    if (id < 0)
        return 0x8041070F;
    ret = func_00000ED0(2, &d);
    if (ret < 0)
        return ret;
    ret = func_0000548C(d);
    if (ret < 0)
        goto err1;
    ret = func_00005544(d->pcb, sndbuf, rcvbuf);
    if (ret < 0)
        goto err2;
    ret = func_00004918(d->pcb, saddr, sport);
    if (ret < 0)
        goto err3;
    func_00005560(d->pcb, rexmt_int, rexmt_cnt);
    d->id = id;
    *out = d;
    return 0;

err3:
    func_00004B30(d->pcb);
err2:
    func_00004AE4(d);
err1:
    func_00000FFC(d);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003A68);
#endif

#if FW_VERSION < 282
void func_000039FC(SceNetAdhocDesc *d) {
    func_00004B30(d->pcb);
    func_00004AE4(d);
    func_00000FFC(d);
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003A34);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003C00);
#else
void func_00003BB0(SceNetAdhocDesc *d) {
    func_00004B30(d->pcb);
    func_00004AE4(d);
    func_00000FFC(d);
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003BE8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003D9C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004058);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004408);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000049E4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000045E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_62B875A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void sceNetAdhoc_lib_62B875A8(void) {
    sceNetMemset(&D_00007CC8, 0, 0x7C);
}
#endif

#if FW_VERSION < 150
void sceNetAdhoc_lib_62B875A8(void) {
    __builtin_memset(&g_adhocStat, 0, sizeof(g_adhocStat));
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000473C);

void sceNetAdhoc_lib_62B875A8(void) {
    sceNetMemset(&D_000079E8, 0, 0x7C);
}
#endif

#if FW_VERSION < 150
s32 sceNetAdhoc_lib_2CA12790(SceNetAdhocStat100 *out) {
    if (out == NULL)
        return 0x80410711;
    *out = g_adhocStat;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_2CA12790);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004964);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000548C(SceNetAdhocDesc *d) {
    SceNetAdhocPtpPcb *pcb;

    pcb = sceNetMallocInternal(sizeof(SceNetAdhocPtpPcb));
    if (pcb == NULL)
        return 0x80410001;
    func_00006E8C(pcb, 0, sizeof(SceNetAdhocPtpPcb));
    pcb->cfirst = NULL;
    pcb->clast = &pcb->cfirst;
    _sce_pspnet_callout_init(&pcb->callout);
#if FW_VERSION >= 150
    _sce_pspnet_callout_init(&pcb->callout2);
#endif
    pcb->next = NULL;
    pcb->prev = g_ptpList.last;
    *g_ptpList.last = pcb;
    g_ptpList.last = &pcb->next;
    pcb->state = 0;
    pcb->desc = d;
    d->pcb = pcb;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000548C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004918);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004A40);
#endif

#if FW_VERSION < 300
void func_00004AE4(SceNetAdhocDesc *d) {
    SceNetAdhocPtpPcb *pcb;

    pcb = d->pcb;
    d->pcb = NULL;
    if (pcb->next != NULL)
        pcb->next->prev = pcb->prev;
    else
        g_ptpList.last = pcb->prev;
    *pcb->prev = pcb->next;
    sceNetFreeInternal(pcb);
}
#endif

void func_00004B30(SceNetAdhocPtpPcb *pcb) {
    struct mbuf *m;

    while (pcb->snd.first != NULL) {
        m = pcb->snd.first;
        if ((pcb->snd.first = m->m_nextpkt) == NULL)
            pcb->snd.last = NULL;
        m->m_nextpkt = NULL;
        pcb->snd.cc -= m->m_pkthdr.len;
        sceNetMFreem(m);
    }
    pcb->snd.hiwat = 0;
    while (pcb->rcv.first != NULL) {
        m = pcb->rcv.first;
        if ((pcb->rcv.first = m->m_nextpkt) == NULL)
            pcb->rcv.last = NULL;
        m->m_nextpkt = NULL;
        pcb->rcv.cc -= m->m_pkthdr.len;
        sceNetMFreem(m);
    }
    pcb->rcv.hiwat = 0;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004E80);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004DA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004DFC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004C0C);

void func_00004E60(SceNetAdhocPtpPcb *pcb) {
    _sce_pspnet_callout_stop(&pcb->callout);
    pcb->state = 4;
    pcb->desc->flags = (pcb->desc->flags & ~0x2000) | 0x4000;
    if (pcb->parent != NULL)
        PTP_SBWAKEUP(&pcb->parent->rcv);
    else
        PTP_SBWAKEUP(&pcb->rcv);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004E60);
#endif

#if FW_VERSION < 282
void func_00004F50(SceNetAdhocPtpPcb *pcb) {
#if FW_VERSION >= 150
    _sce_pspnet_callout_stop(&pcb->callout2);
#endif
    _sce_pspnet_callout_stop(&pcb->callout);
    if (pcb->desc->flags & 0x6000)
        ptpSendCtl(pcb, 7);
    pcb->desc->flags = (pcb->desc->flags & ~0x3000) | 0x8000;
    pcb->state = 0;
    if (pcb->parent != NULL) {
        PTP_SBWAKEUP(&pcb->parent->rcv);
        PTP_SBWAKEUP(&pcb->parent->snd);
    } else {
        PTP_SBWAKEUP(&pcb->rcv);
        PTP_SBWAKEUP(&pcb->snd);
    }
}

s32 func_000050F8(SceNetAdhocDesc *d, s32 events) {
    SceNetAdhocPtpPcb *pcb;
    SceNetAdhocPtpPcb *c;
    s32 ret;

    ret = 0;
    pcb = d->pcb;
    if ((events & 2) && pcb->rcv.cc >= pcb->rcv.lowat)
        ret = 2;
    if ((events & 1) && pcb->snd.hiwat - pcb->snd.cc >= pcb->snd.lowat)
        ret |= 1;
    if ((events & 4) && (d->flags & 0x4000))
        ret |= 4;
    if ((events & 8) && (d->flags & 0x1000)) {
        for (c = pcb->cfirst; c != NULL; c = c->cnext) {
            if (c->desc->flags & 0x4000) {
                ret |= 8;
                break;
            }
        }
    }
    if ((events & 0x10) && pcb->snd.cc == 0)
        ret |= 0x10;
    if (ret == 0) {
        if (events & 2)
            pcb->rcv.flags |= 2;
        if (events & 1)
            pcb->snd.flags |= 2;
        if (events & 4)
            pcb->rcv.flags |= 2;
        if (events & 8)
            pcb->rcv.flags |= 2;
        if (events & 0x10)
            pcb->snd.flags |= 2;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004BD8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004DA4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004E98);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005024);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGetPtpStat);

s32 func_000052D4(void) {
    g_ptpList.first = NULL;
    g_ptpList.last = &g_ptpList.first;
    g_ptpLastPort = sceNetRand() / 0x20009 + 0x4000;
    g_ptpIss = sceNetRand();
    return 0;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004964);
#endif

#if FW_VERSION < 150
SceNetAdhocPtpPcb *func_0000532C(const SceNetEtherAddr *laddr, u16 lport, const SceNetEtherAddr *paddr, u16 pport) {
    SceNetAdhocPtpPcb *p;

    for (p = g_ptpList.first; p != NULL; p = p->next) {
        if (func_00006E18(&p->laddr, laddr, 6) == 0 && p->lport == lport) {
            if (paddr == NULL)
                break;
            if (func_00006E18(&p->paddr, paddr, 6) == 0 && p->pport == pport)
                break;
        }
    }
    return p;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000532C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000056CC);
#endif

#if FW_VERSION < 150
s32 func_0000548C(SceNetAdhocDesc *d) {
    SceNetAdhocPtpPcb *pcb;

    pcb = sceNetMallocInternal(sizeof(SceNetAdhocPtpPcb));
    if (pcb == NULL)
        return 0x80410001;
    func_00006E8C(pcb, 0, sizeof(SceNetAdhocPtpPcb));
    pcb->cfirst = NULL;
    pcb->clast = &pcb->cfirst;
    _sce_pspnet_callout_init(&pcb->callout);
#if FW_VERSION >= 150
    _sce_pspnet_callout_init(&pcb->callout2);
#endif
    pcb->next = NULL;
    pcb->prev = g_ptpList.last;
    *g_ptpList.last = pcb;
    g_ptpList.last = &pcb->next;
    pcb->state = 0;
    pcb->desc = d;
    d->pcb = pcb;
    return 0;
}

void func_00005528(SceNetAdhocPtpPcb *pcb) {
    __builtin_memset(&pcb->laddr, 0, sizeof(pcb->laddr));
    __builtin_memset(&pcb->paddr, 0, sizeof(pcb->paddr));
    pcb->lport = 0;
}
#endif

#if FW_VERSION < 282
s32 func_00005544(SceNetAdhocPtpPcb *pcb, s32 sndsize, s32 rcvsize) {
    pcb->snd.hiwat = sndsize;
    pcb->rcv.hiwat = rcvsize;
    pcb->snd.lowat = 1;
    pcb->rcv.lowat = 1;
    return 0;
}

void func_00005560(SceNetAdhocPtpPcb *pcb, s32 a1, s32 a2) {
    pcb->rexmt_int = a1;
    pcb->rexmt_cnt = a2;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000589C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000556C);
#endif

#if FW_VERSION < 282
s32 func_000056B0(SceNetAdhocPtpPcb *pcb, s32 a1) {
    pcb->state = 1;
    pcb->unkBC = a1;
    pcb->desc->flags |= 0x1000;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000056D4(SceNetAdhocPtpPcb *arg0) {
    s32 temp_s2;
    void *temp_a1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x10);
    if (var_s0 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_s0, void **, 8);
            temp_s2 = M2C_FIELD(var_s0, s32 *, 0x58);
            if (temp_a1 != NULL) {
                M2C_FIELD(temp_a1, void ***, 0xC) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            } else {
                M2C_FIELD(arg0, void ***, 0x14) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            }
            *M2C_FIELD(var_s0, void ***, 0xC) = temp_a1;
            M2C_FIELD(arg0, s32 *, 0xD8) = (s32) (M2C_FIELD(arg0, s32 *, 0xD8) - 1);
            func_00004F50(var_s0);
            func_000056D4(var_s0);
            func_00004AE4(temp_s2);
            func_00000FFC((SceNetAdhocDesc *) temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    sceNetMemset((u8 *)arg0 + 0x18, 0, 6);
    sceNetMemset((u8 *)arg0 + 0x1E, 0, 6);
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    func_00004B30(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000056D4(SceNetAdhocPtpPcb *arg0) {
    s32 temp_s2;
    void *temp_a1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x10);
    if (var_s0 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_s0, void **, 8);
            temp_s2 = M2C_FIELD(var_s0, s32 *, 0x58);
            if (temp_a1 != NULL) {
                M2C_FIELD(temp_a1, void ***, 0xC) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            } else {
                M2C_FIELD(arg0, void ***, 0x14) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            }
            *M2C_FIELD(var_s0, void ***, 0xC) = temp_a1;
            M2C_FIELD(arg0, s32 *, 0xD8) = (s32) (M2C_FIELD(arg0, s32 *, 0xD8) - 1);
            func_00004F50(var_s0);
            func_000056D4(var_s0);
            func_00004AE4(temp_s2);
            func_00000FFC((SceNetAdhocDesc *) temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    func_00004B30(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005AAC);
#endif

#if FW_VERSION < 150
void func_000056D4(SceNetAdhocPtpPcb *arg0) {
    s32 temp_s2;
    void *temp_a1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x10);
    if (var_s0 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_s0, void **, 8);
            temp_s2 = M2C_FIELD(var_s0, s32 *, 0x5C);
            if (temp_a1 != NULL) {
                M2C_FIELD(temp_a1, void ***, 0xC) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            } else {
                M2C_FIELD(arg0, void ***, 0x14) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            }
            *M2C_FIELD(var_s0, void ***, 0xC) = temp_a1;
            M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8) - 1);
            func_00004F50(var_s0);
            func_000056D4(var_s0);
            func_00004AE4(temp_s2);
            func_00000FFC((SceNetAdhocDesc *) temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    M2C_FIELD(arg0, s16 *, 0x26) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 0;
    func_00004B30(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000053EC);
#endif

#if FW_VERSION >= 300
void func_00004AE4(SceNetAdhocDesc *d) {
    SceNetAdhocPtpPcb *pcb;

    pcb = d->pcb;
    d->pcb = NULL;
    if (pcb->next != NULL)
        pcb->next->prev = pcb->prev;
    else
        g_ptpList.last = pcb->prev;
    *pcb->prev = pcb->next;
    sceNetFreeInternal(pcb);
}
#endif

#if FW_VERSION >= 282
s32 func_00005594(SceNetAdhocPtpPcb *pcb, s32 sndsize, s32 rcvsize) {
    pcb->snd.hiwat = sndsize;
    pcb->rcv.hiwat = rcvsize;
    pcb->snd.lowat = 1;
    pcb->rcv.lowat = 1;
    return 0;
}

void func_000055B0(SceNetAdhocPtpPcb *pcb, s32 a1, s32 a2) {
    pcb->rexmt_int = a1;
    pcb->rexmt_cnt = a2;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000055BC);

s32 func_000056E4(SceNetAdhocPtpPcb *pcb, s32 a1) {
    pcb->state = 1;
    pcb->unkBC = a1;
    pcb->desc->flags |= 0x1000;
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005708);
#endif

#if FW_VERSION == 282
void func_00005708(SceNetAdhocPtpPcb *arg0) {
    s32 temp_s2;
    void *temp_a1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x10);
    if (var_s0 != NULL) {
        do {
            temp_a1 = M2C_FIELD(var_s0, void **, 8);
            temp_s2 = M2C_FIELD(var_s0, s32 *, 0x58);
            if (temp_a1 != NULL) {
                M2C_FIELD(temp_a1, void ***, 0xC) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            } else {
                M2C_FIELD(arg0, void ***, 0x14) = (void **) M2C_FIELD(var_s0, void ***, 0xC);
            }
            *M2C_FIELD(var_s0, void ***, 0xC) = temp_a1;
            M2C_FIELD(arg0, s32 *, 0xD8) = (s32) (M2C_FIELD(arg0, s32 *, 0xD8) - 1);
            func_00004E98(var_s0);
            func_00005708(var_s0);
            func_00004AE4(temp_s2);
            func_00000FFC((SceNetAdhocDesc *) temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    sceNetMemset((u8 *)arg0 + 0x18, 0, 6);
    sceNetMemset((u8 *)arg0 + 0x1E, 0, 6);
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    func_00004B30(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000057CC);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_00007670);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_00007674);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_00007688);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000076A0);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000076B8);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000076C4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000076D4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000076E8);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000076F8);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_00007704);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000077F4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_00007804);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_00007834);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_00007840);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_00007844);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_0000784C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_0000786C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000078C4);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_0000789C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000078A0);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000078A4);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc", D_000078AC);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005B98);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000065F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000578C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006324);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpSendCtl);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006AF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006878);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005FF8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpSendCtl);

void func_0000648C(SceNetAdhocPtpPcb *pcb, s32 rexmt) {
    struct mbuf *m;
    u32 seq;
    s32 n;

    n = 0;
    m = pcb->snd.first;
    seq = pcb->snd_una;
    if (m == NULL)
        goto out;
    for (; seq != pcb->snd_nxt; seq++) {
        m = m->m_nextpkt;
        if (m == NULL)
            goto out;
    }
    while (m != NULL) {
        if (pcb->snd_wnd - pcb->snd_inflight < m->m_pkthdr.len) {
            if (n != 0)
                goto out;
            if (rexmt != 0) {
                func_00005FF8(pcb->ifp, &pcb->laddr, pcb->lport, &pcb->paddr, pcb->pport, 4, pcb->snd_una - 1, NULL);
                g_adhocStat.stat[10]++;
                goto out;
            }
            if (pcb->callout.c_flags & CALLOUT_PENDING)
                goto out;
            g_adhocStat.stat[11]++;
            pcb->rexmt_left = pcb->rexmt_cnt;
            _sce_pspnet_callout_reset_usec(&pcb->callout, pcb->rexmt_int, func_000069D4, pcb);
            goto out;
        }
        func_00005FF8(pcb->ifp, &pcb->laddr, pcb->lport, &pcb->paddr, pcb->pport, 4, pcb->snd_nxt, m);
        n++;
        pcb->snd_nxt++;
        pcb->snd_inflight += m->m_pkthdr.len;
        m = m->m_next;
    }
out:
    if (rexmt == 0 && n > 0) {
        pcb->rexmt_left = pcb->rexmt_cnt;
        _sce_pspnet_callout_reset_usec(&pcb->callout, pcb->rexmt_int, func_000069D4, pcb);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000058B8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000062FC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000660C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000067F8);
#endif

#if FW_VERSION < 150
void func_000069D4(SceNetAdhocPtpPcb *pcb) {
    if ((u32)pcb->state < 2)
        return;
    if (pcb->rexmt_left-- <= 0) {
        _sce_pspnet_callout_stop(&pcb->callout);
        func_00004F50(pcb);
        return;
    }
    switch (pcb->state) {
    case 2:
        ptpSendCtl(pcb, 1);
        break;
    case 3:
        ptpSendCtl(pcb, 2);
        break;
    case 4:
        pcb->snd_inflight = 0;
        pcb->snd_nxt = pcb->snd_una;
        func_0000648C(pcb, 1);
        g_adhocStat.stat[9]++;
        break;
    }
    _sce_pspnet_callout_reset_usec(&pcb->callout, pcb->rexmt_int, func_000069D4, pcb);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000069D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006B1C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006AA0);
#endif

#if FW_VERSION < 150
s32 sceNetAdhocGameModeCreateMaster(void *ptr, s32 size) {
    s32 s;
    s32 ret;
    SceNetEtherAddr addr;

    if (ptr == NULL)
        return 0x80410711;
    ret = 0x80410712;
    s = _sce_pspnet_spllock();
    if (g_adhocInit == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    ret = sceNetGetLocalEtherAddr(&addr);
    if (ret < 0)
        goto end;
    ret = func_00006AB8(&addr, ptr, size);
    if (ret < 0)
        goto end;
    g_gameModeMasterId = ret;
    ret = 0;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGameModeCreateMaster);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGameModeCreateReplica);
#endif

#if FW_VERSION < 150
s32 sceNetAdhocGameModeUpdateMaster(void) {
    s32 s;
    s32 ret;
    SceNetAdhocGameMode *gm;

    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    ret = 0x8041071C;
    if (g_gameModeMasterId < 0)
        goto end;
    for (gm = g_gameModeList.first; gm != NULL; gm = gm->next) {
        if (gm->id == g_gameModeMasterId)
            break;
    }
    if (gm == NULL) {
        ret = 0x8041071C;
        goto end;
    }
    ret = sceWlanGPSend(0x10, gm->ptr, gm->size);
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGameModeUpdateMaster);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGameModeDeleteMaster);
#endif

#if FW_VERSION < 282
s32 func_00006880(void) {
    g_gameModeList.first = NULL;
    g_gameModeList.last = &g_gameModeList.first;
    return 0;
}
#else
s32 func_00006F68(void) {
    g_gameModeList.first = NULL;
    g_gameModeList.last = &g_gameModeList.first;
    return 0;
}
#endif

void func_00006F80(void) {
    SceNetAdhocGameMode *gm;

    while ((gm = g_gameModeList.first) != NULL) {
        if (gm->next != NULL)
            gm->next->prev = gm->prev;
        else
            g_gameModeList.last = gm->prev;
        *gm->prev = gm->next;
        sceNetFreeInternal(gm);
    }
}

#if FW_VERSION < 150
s32 sceNetAdhocGameModeCreateReplica(const SceNetEtherAddr *addr, void *ptr, s32 size) {
    s32 s;
    s32 ret;

    if (addr == NULL || ptr == NULL)
        return 0x80410711;
    ret = 0x80410712;
    s = _sce_pspnet_spllock();
    if (g_adhocInit == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    ret = func_00006AB8(addr, ptr, size);
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGameModeUpdateReplica);
#else
void sceNetAdhocGameModeUpdateReplica(s32 arg0, SceNetAdhocGameModeOptData *arg1) {
    func_00006C3C(arg0, arg1, 0);
}
#endif

#if FW_VERSION < 282
void sceNetAdhocGameModeUpdateReplicaInternal(s32 arg0, SceNetAdhocGameModeOptData *arg1) {
    func_00006C3C(arg0, arg1, 1);
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocGameModeDeleteMaster(void) {
    s32 s;
    s32 ret;

    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit != 0) {
        ret = 0x8041071C;
        if (g_gameModeMasterId >= 0)
            ret = func_00006BB8(g_gameModeMasterId);
    }
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 282
void sceNetAdhocGameModeUpdateReplicaInternal(s32 arg0, SceNetAdhocGameModeOptData *arg1) {
    func_00007298(arg0, arg1, 1);
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocGameModeDeleteReplica(s32 id) {
    s32 s;
    s32 ret;

    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    ret = func_00006BB8(id);
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGameModeDeleteReplica);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00007018);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006AB8);

s32 func_00006BB8(s32 id) {
    SceNetAdhocGameMode *gm;

    for (gm = g_gameModeList.first; gm != NULL; gm = gm->next) {
        if (gm->id == id)
            break;
    }
    if (gm == NULL)
        return 0x8041071C;
    if (gm->next != NULL)
        gm->next->prev = gm->prev;
    else
        g_gameModeList.last = gm->prev;
    *gm->prev = gm->next;
    sceNetFreeInternal(gm);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006BB8);
#endif

#if FW_VERSION < 150
s32 func_00006C3C(s32 id, SceNetAdhocGameModeOptData *opt, s32 internal) {
    s32 s;
    s32 ret;
    SceNetAdhocGameMode *gm;
    SceNetAdhocGameModeOptData tmp;
    SceNetAdhocGameModeOptData *info;

    info = NULL;
    s = _sce_pspnet_spllock();
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    for (gm = g_gameModeList.first; gm != NULL; gm = gm->next) {
        if (gm->id == id)
            break;
    }
    if (gm == NULL) {
        ret = 0x8041071C;
        goto end;
    }
    if (opt != NULL) {
        tmp.size = sizeof(tmp);
        info = &tmp;
    }
    ret = sceWlanGPRecv(id, gm->ptr, gm->size, info);
    if (opt == NULL)
        goto end;
    if (opt->size >= sizeof(tmp))
        opt->flag = info->flag;
    if (internal == 0)
        opt->flag = (u16)opt->flag;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006C3C);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

void *func_00006D6C(const void *s, s32 c, s32 n) {
    const u8 *p;
    u8 ch = c;

    if (s != NULL) {
        for (p = s; n > 0; n--, p++) {
            if (*p == ch)
                return (void *)p;
        }
    }
    return NULL;
}

void *func_00006DA4(void *dst, const void *src, s32 n) {
    u8 *d;
    const u8 *s;

    d = dst;
    s = src;
    if (dst == NULL)
        return NULL;
    if (d >= s) {
        for (n--; n >= 0; n--)
            d[n] = s[n];
    } else {
        while (n > 0) {
            *d++ = *s++;
            n--;
        }
    }
    return dst;
}

s32 func_00006E18(const void *a, const void *b, s32 n) {
    const u8 *p1 = a;
    const u8 *p2 = b;

    for (; n > 0; n--) {
        if (*p1 != *p2)
            return (*p1 < *p2) ? -1 : 1;
        p1++;
        p2++;
    }
    return 0;
}

void *func_00006E58(void *dst, const void *src, s32 n) {
    u8 *d;
    const u8 *s;

    if (dst == NULL)
        return NULL;
    for (d = dst, s = src; n > 0; n--)
        *d++ = *s++;
    return dst;
}

void *func_00006E8C(void *s, s32 c, s32 n) {
    u8 *p;

    if (s != NULL) {
        c &= 0xFF;
        for (p = s; n > 0; n--)
            *p++ = c;
    }
    return s;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00007344);
#endif

#if FW_VERSION < 152
s32 func_00006EB8(const void *a, const void *b, s32 n) {
    const u8 *p1 = a;
    const u8 *p2 = b;

    for (; n > 0; n--) {
        if (*p1 != *p2)
            return (*p1 < *p2) ? -1 : 1;
        p1++;
        p2++;
    }
    return 0;
}

void func_00006EF8(const void *src, void *dst, s32 n) {
    func_00006DA4(dst, src, n);
}
#endif

#if FW_VERSION < 201
void func_00006F1C(void *s, s32 n) {
    u8 *p;

    if (s != NULL) {
        for (p = s; n > 0; n--)
            *p++ = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000070E8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00007204);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00007298);
#endif
