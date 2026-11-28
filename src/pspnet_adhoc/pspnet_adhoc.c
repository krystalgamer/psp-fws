/* compiler[282-352]: 1.9.2 */
/* cflags[271-352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhoc_decls.h"

#if FW_VERSION < 282
s32 sceNetAdhocInit(void) {
    s32 s;
    s32 ret;

#if FW_VERSION >= 201
    if (sceKernelCheckThreadStack() < 0x7F0)
        return 0x80410005;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
#else
    s = _sce_pspnet_spllock();
#endif
    ret = 0x80410713;
    if (g_adhocInit > 0)
        goto end;
#if FW_VERSION >= 201
    sceNetMemset(&g_adhocIntrq, 0, sizeof(g_adhocIntrq));
    g_adhocIntrq.ifq_maxlen = 50;
#else
    g_adhocIntrq.ifq_maxlen = 50;
    g_adhocIntrq.ifq_len = 0;
    g_adhocIntrq.ifq_head = NULL;
    g_adhocIntrq.ifq_drops = 0;
    g_adhocIntrq.ifq_tail = NULL;
#endif
    ret = adhocDescInit();
    if (ret < 0)
        goto end;
    ret = pdpInit();
    if (ret < 0)
        goto err1;
    ret = ptpInit();
    if (ret < 0)
        goto err2;
    ret = _sce_pspnet_start_of_adhoc_module_in_netintr(adhocNetIntr, adhocIfWakeup);
    if (ret < 0)
        goto err3;
    ret = _sce_pspnet_start_of_adhoc_module_in_if_ethersubr_core(adhocGetIntrq);
    if (ret < 0)
        goto err4;
    if (gameModeInit() < 0)
        goto err5;
    g_adhocInit = 1;
    _sce_pspnet_splunlock(s);
    return 0;

err5:
    _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core();
err4:
    _sce_pspnet_stop_of_adhoc_module_in_netintr();
err3:
    ptpTerm();
err2:
    pdpTerm();
err1:
    adhocDescTerm();
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
s32 sceNetAdhocInit(void) {
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7F0)
        return 0x80410005;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    ret = 0x80410713;
    if (g_adhocInit > 0)
        goto end;
    sceNetMemset(&g_adhocIntrq, 0, sizeof(g_adhocIntrq));
    g_adhocIntrq.ifq_maxlen = 50;
    ret = adhocDescInit();
    if (ret < 0)
        goto end;
    ret = pdpInit();
    if (ret < 0)
        goto err1;
    ret = ptpInit();
    if (ret < 0)
        goto err2;
    ret = _sce_pspnet_start_of_adhoc_module_in_netintr(adhocNetIntr, func_00000490);
    if (ret < 0)
        goto err3;
    ret = _sce_pspnet_start_of_adhoc_module_in_if_ethersubr_core(adhocGetIntrq);
    if (ret < 0)
        goto err4;
    if (func_00006F68() < 0)
        goto err5;
    g_adhocInit = 1;
    _sce_pspnet_splunlock(s);
    return 0;

err5:
    _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core();
err4:
    _sce_pspnet_stop_of_adhoc_module_in_netintr();
err3:
    ptpTerm();
err2:
    pdpTerm();
err1:
    adhocDescTerm();
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

s32 sceNetAdhocTerm(void) {
    s32 s;
    s32 ret;
    struct mbuf *m;

    ret = 0;
#if FW_VERSION >= 201
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
#else
    s = _sce_pspnet_spllock();
#endif
    if (g_adhocInit == 0)
        goto end;
    if (adhocDescAnyWaiting() != 0) {
        ret = 0x80410714;
        goto end;
    }
    gameModeTerm();
    _sce_pspnet_stop_of_adhoc_module_in_if_ethersubr_core();
    _sce_pspnet_stop_of_adhoc_module_in_netintr();
    ptpTerm();
    pdpTerm();
    adhocDescTerm();
    while (g_adhocIntrq.ifq_head != NULL) {
        IF_DEQUEUE(&g_adhocIntrq, m);
        sceNetMFreem(m);
    }
    g_adhocInit = 0;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}

#if FW_VERSION < 282
void adhocNetIntr(void) {
    struct mbuf *m;
    u8 type;

    for (;;) {
        IF_DEQUEUE(&g_adhocIntrq, m);
        if (m == NULL)
            break;
#if FW_VERSION < 201
        if ((u32)m->m_pkthdr.len <= 0x30) {
#else
        if (m->m_pkthdr.len <= 0x30) {
#endif
            sceNetMFreem(m);
            continue;
        }
#if FW_VERSION < 201
        if ((u32)m->m_len <= 0x30)
#else
        if (m->m_len <= 0x30)
#endif
            sceNetMCopydata(m, 0x30, 1, &type);
        else
            type = m->m_data[0x30];
        switch (type) {
        case 1:
            pdpInput(m);
            break;
        case 2:
            ptpInput(m);
            break;
        default:
            sceNetMFreem(m);
            break;
        }
    }
}
#else
void adhocNetIntr(void) {
    struct mbuf *m;
    u8 type;

    for (;;) {
        IF_DEQUEUE(&g_adhocIntrq, m);
        if (m == NULL)
            break;
        if (m->m_pkthdr.len <= 0x30) {
            sceNetMFreem(m);
            continue;
        }
        if (m->m_len <= 0x30)
            sceNetMCopydata(m, 0x30, 1, &type);
        else
            type = m->m_data[0x30];
        switch (type) {
        case 1:
            func_000022FC(m);
            break;
        case 2:
            func_000058B8(m);
            break;
        default:
            sceNetMFreem(m);
            break;
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", adhocEtherInput);

s32 adhocGetIntrq(s32 a0, s32 a1, struct ifqueue **out) {
    *out = &g_adhocIntrq;
    return 0;
}

#if FW_VERSION < 282
void adhocIfWakeup(struct ifnet *ifp) {
    pdpIfWakeup(ifp);
}
#else
void func_00000490(s32 arg0) {
    func_00002D2C(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPollSocket);

#if FW_VERSION < 282
s32 adhocPollScan(SceNetAdhocPollEnt *ent, s32 count) {
    s32 i;
    s32 n;

    n = 0;
    for (i = 0; i < count; i++, ent++) {
        switch (ent->d->type) {
        case 2:
            ent->sd->revents = ptpPoll(ent->d, ent->sd->events);
            break;
        case 1:
            ent->sd->revents = pdpPoll(ent->d, ent->sd->events);
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
            ent->sd->revents = ptpPoll(ent->d, ent->sd->events);
            break;
        case 1:
            ent->sd->revents = pdpPoll(ent->d, ent->sd->events);
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
s32 sceNetAdhocSetSocketAlert(s32 id, s32 flag) {
    s32 s;
    s32 ret;
    s32 n;
    SceNetAdhocDesc *d;

    ret = 0;
    n = 0;
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
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
s32 sceNetAdhocGetSocketAlert(s32 id, s32 *flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    ret = 0;
    if (sceKernelCheckThreadStack() < 0x7F0)
        return 0x80410005;
    if (flag == NULL)
        return 0x80410711;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
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
#endif

s32 adhocDescInit(void) {
    s32 ret;

    g_adhocDescList.first = NULL;
    g_adhocDescList.last = &g_adhocDescList.first;
    ret = _sce_pspnet_start_of_adhoc_module_in_sched(adhocDescWakeup);
    if (ret < 0)
        return ret;
    g_adhocLastId = 0;
    return 0;
}

void adhocDescTerm(void) {
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

SceNetAdhocDesc *adhocDescLookup(u8 type, s32 id) {
    SceNetAdhocDesc *d;

    for (d = g_adhocDescList.first; d != NULL; d = d->next) {
        if ((type == 0 || d->type == type) && d->id == id)
            break;
    }
    return d;
}

s32 adhocDescAllocId(void) {
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

s32 adhocDescAlloc(u8 type, SceNetAdhocDesc **out) {
    SceNetAdhocDesc *d;

    d = sceNetMallocInternal(sizeof(SceNetAdhocDesc));
    if (d == NULL)
        return 0x80410001;
    ADHOC_BZERO(d, sizeof(SceNetAdhocDesc));
    d->type = type;
    d->next = NULL;
    d->prev = g_adhocDescList.last;
    *g_adhocDescList.last = d;
    g_adhocDescList.last = &d->next;
    d->id = -1;
    *out = d;
    return 0;
}

void adhocDescFree(SceNetAdhocDesc *d) {
    if (d->pcb != NULL)
        return;
    if (d->next != NULL)
        d->next->prev = d->prev;
    else
        g_adhocDescList.last = d->prev;
    *d->prev = d->next;
    sceNetFreeInternal(d);
}

s32 adhocDescAnyWaiting(void) {
    SceNetAdhocDesc *d;

    for (d = g_adhocDescList.first; d != NULL; d = d->next) {
        if (d->waiters != NULL)
            return 1;
    }
    return 0;
}

void adhocDescWakeup(SceNetAdhocDesc *d, s32 events) {
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
    d = adhocDescLookup(1, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = pdpOutput(d, daddr, dport, data, len, timeout, nonblock);
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
            pdpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(1, id);
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
            pdpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(1, id);
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
            pdpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(1, id);
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
            pdpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(1, id);
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
    pdpFlush(pcb);
    d->flags |= 1;
    d->id = -1;
    if (d->waiters == NULL) {
        pdpDetach(d);
        adhocDescFree(d);
    }
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceNetAdhocPdpDelete(s32 id, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;
    SceNetAdhocPdpPcb *pcb;
    struct ifnet *ifp;

    ret = 0;
#if FW_VERSION >= 201
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
    if (flag != 0)
        return 0x80410711;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
#else
    s = _sce_pspnet_spllock();
#endif
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = adhocDescLookup(1, id);
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
    ifp = _sce_pspnet_ifplookup_lladdr(&pcb->laddr);
    if (ifp != NULL) {
        if (ifp->if_adhocflags & 1) {
            ifp->if_adhocflags &= ~1;
            _sce_pspnet_wakeup(&ifp->if_snd);
        }
        if (ifp->if_adhocflags & 2) {
            ifp->if_adhocflags &= ~2;
            _sce_pspnet_wakeup(&g_adhocSelChan);
        }
    } else {
        _sce_pspnet_wakeup(d->sndchan);
        _sce_pspnet_wakeup(&g_adhocSelChan);
    }
    pdpFlush(pcb);
    d->flags |= 1;
    d->id = -1;
    if (d->waiters == NULL) {
        pdpDetach(d);
        adhocDescFree(d);
    }
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocPdpDelete(s32 id, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;
    SceNetAdhocPdpPcb *pcb;
    struct ifnet *ifp;

    ret = 0;
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
    if (flag != 0)
        return 0x80410711;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = adhocDescLookup(1, id);
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
    ifp = _sce_pspnet_ifplookup_lladdr(&pcb->laddr);
    if (ifp != NULL) {
        if (ifp->if_adhocflags & 1) {
            ifp->if_adhocflags &= ~1;
            _sce_pspnet_wakeup(&ifp->if_snd);
        }
        if (ifp->if_adhocflags & 2) {
            ifp->if_adhocflags &= ~2;
            _sce_pspnet_wakeup(&g_adhocSelChan);
        }
    } else {
        _sce_pspnet_wakeup(d->sndchan);
        _sce_pspnet_wakeup(&g_adhocSelChan);
    }
    pdpFlush(pcb);
    d->flags |= 1;
    d->id = -1;
    if (d->waiters == NULL) {
        pdpDetach(d);
        adhocDescFree(d);
    }
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000016B4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", pdpOutput);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", pdpRecvWait);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001600);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001C28);
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPdpRecv(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock) {
    if (buf == NULL || len == NULL)
        return 0x80410711;
    return pdpRecvCommon(id, addr, port, buf, len, timeout, nonblock, NULL);
}
#else
s32 sceNetAdhocPdpRecv(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock) {
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
    if (buf == NULL || len == NULL || (nonblock & ~1))
        return 0x80410711;
    return func_0000215C(id, addr, port, buf, len, timeout, nonblock, NULL);
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocPdpRecvWithRfInfo(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo) {
    if (buf == NULL || len == NULL || rfinfo == NULL)
        return 0x80410711;
    return pdpRecvCommon(id, addr, port, buf, len, timeout, nonblock, rfinfo);
}
#else
s32 sceNetAdhocPdpRecvWithRfInfo(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo) {
    if (buf == NULL || len == NULL || (nonblock & ~1) || rfinfo == NULL)
        return 0x80410711;
    return func_0000215C(id, addr, port, buf, len, timeout, nonblock, rfinfo);
}

void sceNetAdhoc_lib_F9240FBA(void) {
    sceNetMemset(&g_pdpStat, 0, sizeof(g_pdpStat));
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceNetAdhoc_lib_F9240FBA(void) {
    __builtin_memset(&g_pdpStat, 0, sizeof(g_pdpStat));
}
#endif

#if FW_VERSION >= 150
s32 sceNetAdhoc_lib_1059683E(SceNetAdhocPdpStatCnt *out) {
    if (out == NULL)
        return 0x80410711;
#if FW_VERSION >= 201
    sceNetMemcpy(out, &g_pdpStat, sizeof(g_pdpStat));
#else
    *out = g_pdpStat;
#endif
    return 0;
}
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
    d = adhocDescLookup(1, id);
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
    ret = pdpRecvWait(d, addr, port, buf, len, timeout, nonblock, rfinfo);
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
            pdpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(1, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = pdpRecvWait(d, addr, port, buf, len, timeout, nonblock, rfinfo);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            pdpDetach(d);
            adhocDescFree(d);
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
s32 pdpRecvCommon(s32 id, SceNetEtherAddr *addr, u16 *port, void *buf, s32 *len, u32 timeout, s32 nonblock, void *rfinfo) {
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
    d = adhocDescLookup(1, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = pdpRecvWait(d, addr, port, buf, len, timeout, nonblock, rfinfo);
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
            pdpDetach(d);
            adhocDescFree(d);
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
INCLUDE_ASM("nonmatchings/pspnet_adhoc", pdpBind);
#endif

#if FW_VERSION >= 282
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
    d = adhocDescLookup(1, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = func_00001C28(d, addr, port, buf, len, timeout, nonblock, rfinfo);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            pdpDetach(d);
            adhocDescFree(d);
        }
        ret = 0x80410707;
    }
end:
    _sce_pspnet_splunlock(s);
    _sce_pspnet_thread_leave(ti, 0);
    return ret;
}
#endif

void pdpFlush(SceNetAdhocPdpPcb *pcb) {
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", pdpInput);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000022FC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGetPdpStat);

s32 pdpInit(void) {
    g_pdpList.first = NULL;
    g_pdpList.last = &g_pdpList.first;
    g_pdpLastPort = sceNetRand() / 0x20009 + 0x4000;
    D_000079E4 = sceNetRand() / 0x8001;
    return 0;
}

void pdpTerm(void) {
    SceNetAdhocPdpPcb *pcb;
    SceNetAdhocPdpPcb *p;
    SceNetAdhocDesc *d;

    while ((pcb = g_pdpList.first) != NULL) {
        pdpFlush(pcb);
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

s32 pdpAttach(SceNetAdhocDesc *d) {
    SceNetAdhocPdpPcb *pcb;

    pcb = sceNetMallocInternal(sizeof(SceNetAdhocPdpPcb));
    if (pcb == NULL)
        return 0x80410001;
    ADHOC_BZERO(pcb, sizeof(SceNetAdhocPdpPcb));
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

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", pdpBind);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002AFC);
#endif

void pdpDetach(SceNetAdhocDesc *d) {
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
s32 pdpSetRcvBuf(SceNetAdhocPdpPcb *pcb, s32 size) {
    pcb->rcvbufsize = size;
    return 0;
}

void pdpIfWakeup(struct ifnet *ifp) {
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
s32 pdpPoll(SceNetAdhocDesc *d, s32 events) {
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

#if FW_VERSION >= 282
s32 func_00002D20(SceNetAdhocPdpPcb *pcb, s32 size) {
    pcb->rcvbufsize = size;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002D2C);
#endif

#if FW_VERSION >= 150
s32 pdpPoll(SceNetAdhocDesc *d, s32 events) {
    SceNetAdhocPdpPcb *pcb;
    struct ifnet *ifp;
    s32 ret;

    ret = 0;
    pcb = d->pcb;
    ifp = _sce_pspnet_ifplookup_lladdr(&pcb->laddr);
    if ((events & 2) && pcb->rcvq_first != NULL)
        ret = 2;
    if ((events & 1) && (ifp == NULL || ifp->if_snd.ifq_len < ifp->if_snd.ifq_maxlen))
        ret |= 1;
    if (ret == 0) {
        if (events & 2)
            pcb->flags |= 2;
        if ((events & 1) && ifp != NULL)
            ifp->if_adhocflags |= 2;
    }
    return ret;
}
#else
void pdpQentFree(SceNetAdhocPdpQent *e) {
    _sce_pspnet_callout_stop(e->callout);
    sceNetMFreem(e->m);
    if (e->next != NULL)
        e->next->prev = e->prev;
    else
        e->pcb->qlast = e->prev;
    *e->prev = e->next;
    sceNetFreeInternal(e);
}
#endif

#if FW_VERSION >= 150
void pdpQentFree(SceNetAdhocPdpQent *e) {
    _sce_pspnet_callout_stop(e->callout);
    sceNetMFreem(e->m);
    if (e->next != NULL)
        e->next->prev = e->prev;
    else
        e->pcb->qlast = e->prev;
    *e->prev = e->next;
    sceNetFreeInternal(e);
#if FW_VERSION >= 150
    g_pdpStat.stat[5]++;
#endif
}
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
    ret = ptpCreate(saddr, sport, bufsize, bufsize, rexmt_int, rexmt_cnt, &d);
    if (ret < 0)
        goto end;
    ret = ptpConnectStart(d->pcb, daddr, dport);
    if (ret < 0) {
        ptpSocketDestroy(d);
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
    d = adhocDescLookup(2, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = ptpConnectWait(d, timeout, nonblock);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpConnectWait(d, timeout, nonblock);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = ptpConnectWait(d, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    ret = ptpCreate(saddr, sport, bufsize, bufsize, rexmt_int, rexmt_cnt, &d);
    if (ret < 0)
        goto end;
    ret = ptpListenSetup(d->pcb, backlog);
    if (ret < 0) {
        ptpSocketDestroy(d);
        goto end;
    }
    ret = d->id;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceNetAdhocPtpListen(const SceNetEtherAddr *saddr, u16 sport, s32 bufsize, u32 rexmt_int, s32 rexmt_cnt, s32 backlog, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    if (sceKernelCheckThreadStack() < 0x7B0)
        return 0x80410005;
    if (saddr == NULL || flag != 0)
        return 0x80410711;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    ret = func_00003A68(saddr, sport, NULL, 0, bufsize, bufsize, rexmt_int, rexmt_cnt, &d);
    if (ret < 0)
        goto end;
    ret = ptpListenSetup(d->pcb, backlog);
    if (ret < 0) {
        ptpSocketDestroy(d);
        goto end;
    }
    ret = d->id;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocPtpListen(const SceNetEtherAddr *saddr, u16 sport, s32 bufsize, u32 rexmt_int, s32 rexmt_cnt, s32 backlog, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    if (sceKernelCheckThreadStack() < 0x7B0)
        return 0x80410005;
    if (saddr == NULL || flag != 0)
        return 0x80410711;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    ret = 0x80410712;
    if (g_adhocInit == 0)
        goto end;
    ret = func_00003A68(saddr, sport, NULL, 0, bufsize, bufsize, rexmt_int, rexmt_cnt, &d);
    if (ret < 0)
        goto end;
    ret = func_000056E4(d->pcb, backlog);
    if (ret < 0) {
        func_00003BB0(d);
        goto end;
    }
    ret = d->id;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
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
    d = adhocDescLookup(2, id);
    ret = 0x80410701;
    if (d == NULL)
        goto end;
    pd = ti->descs;
    pw = d->waiters;
    ti->descs = d;
    ti->next = pw;
    d->tnext = pd;
    d->waiters = ti;
    ret = ptpAcceptWait(d, addr, port, timeout, nonblock);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpAcceptWait(d, addr, port, timeout, nonblock);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ti->next = d->waiters;
    d->waiters = ti;
    ret = ptpAcceptWait(d, addr, port, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpSendData(d, data, len, timeout, nonblock);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpSendData(d, data, len, timeout, nonblock);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpSendData(d, data, len, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpRecvData(d, buf, len, timeout, nonblock);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpRecvData(d, buf, len, timeout, nonblock);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpRecvData(d, buf, len, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpFlushWait(d, timeout, nonblock);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpFlushWait(d, timeout, nonblock);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
    ret = ptpFlushWait(d, timeout, nonblock);
    if (d->waiters == ti) {
        d->waiters = ti->next;
    } else {
        for (w = d->waiters; w->next != ti; w = w->next)
            ;
        w->next = w->next->next;
    }
    if (d->flags & 1) {
        if (d->waiters == NULL) {
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
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
            ptpDetach(d);
            adhocDescFree(d);
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
    d = adhocDescLookup(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ptpDrop(d->pcb);
    ptpCloseChildren(d->pcb);
    d->flags |= 1;
    d->id = -1;
    if (d->waiters == NULL) {
        ptpDetach(d);
        adhocDescFree(d);
    }
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceNetAdhocPtpClose(s32 id, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    ret = 0;
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
    if (flag != 0)
        return 0x80410711;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = adhocDescLookup(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ptpDrop(d->pcb);
    ptpCloseChildren(d->pcb);
    d->flags |= 1;
    d->id = -1;
    if (d->waiters == NULL) {
        ptpDetach(d);
        adhocDescFree(d);
    }
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocPtpClose(s32 id, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    ret = 0;
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
    if (flag != 0)
        return 0x80410711;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    if (g_adhocInit == 0) {
        ret = 0x80410712;
        goto end;
    }
    d = adhocDescLookup(2, id);
    if (d == NULL) {
        ret = 0x80410701;
        goto end;
    }
    ptpDrop(d->pcb);
    func_00005708(d->pcb);
    d->flags |= 1;
    d->id = -1;
    if (d->waiters == NULL) {
        ptpDetach(d);
        adhocDescFree(d);
    }
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION < 201
s32 ptpCreate(const SceNetEtherAddr *saddr, u16 sport, s32 sndbuf, s32 rcvbuf, u32 rexmt_int, s32 rexmt_cnt, SceNetAdhocDesc **out) {
    s32 id;
    s32 ret;
    SceNetAdhocDesc *d;

    id = adhocDescAllocId();
    if (id < 0)
        return 0x8041070F;
    ret = adhocDescAlloc(2, &d);
    if (ret < 0)
        return ret;
    ret = ptpAttach(d);
    if (ret < 0)
        goto err1;
    ret = ptpSetSockbuf(d->pcb, sndbuf, rcvbuf);
    if (ret < 0)
        goto err2;
    ret = ptpBind(d->pcb, saddr, sport);
    if (ret < 0)
        goto err3;
    ptpSetRexmt(d->pcb, rexmt_int, rexmt_cnt);
    d->id = id;
    *out = d;
    return 0;

err3:
    ptpFlushSockbufs(d->pcb);
err2:
    ptpDetach(d);
err1:
    adhocDescFree(d);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00003A68(const SceNetEtherAddr *saddr, u16 sport, const SceNetEtherAddr *daddr, u16 dport, s32 sndbuf, s32 rcvbuf, u32 rexmt_int, s32 rexmt_cnt, SceNetAdhocDesc **out) {
    s32 id;
    s32 ret;
    SceNetAdhocDesc *d;

    id = adhocDescAllocId();
    if (id < 0)
        return 0x8041070F;
    ret = adhocDescAlloc(2, &d);
    if (ret < 0)
        return ret;
    ret = ptpAttach(d);
    if (ret < 0)
        goto err1;
    ret = ptpSetSockbuf(d->pcb, sndbuf, rcvbuf);
    if (ret < 0)
        goto err2;
    ret = func_000056CC(d->pcb, saddr, sport, daddr, dport);
    if (ret < 0)
        goto err3;
    ptpSetRexmt(d->pcb, rexmt_int, rexmt_cnt);
    d->id = id;
    *out = d;
    return 0;

err3:
    ptpFlushSockbufs(d->pcb);
err2:
    ptpDetach(d);
err1:
    adhocDescFree(d);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 func_00003A68(const SceNetEtherAddr *saddr, u16 sport, const SceNetEtherAddr *daddr, u16 dport, s32 sndbuf, s32 rcvbuf, u32 rexmt_int, s32 rexmt_cnt, SceNetAdhocDesc **out) {
    s32 id;
    s32 ret;
    SceNetAdhocDesc *d;

    id = adhocDescAllocId();
    if (id < 0)
        return 0x8041070F;
    ret = adhocDescAlloc(2, &d);
    if (ret < 0)
        return ret;
    ret = ptpAttach(d);
    if (ret < 0)
        goto err1;
    ret = func_00005594(d->pcb, sndbuf, rcvbuf);
    if (ret < 0)
        goto err2;
    ret = func_000053EC(d->pcb, saddr, sport, daddr, dport);
    if (ret < 0)
        goto err3;
    func_000055B0(d->pcb, rexmt_int, rexmt_cnt);
    d->id = id;
    *out = d;
    return 0;

err3:
    ptpFlushSockbufs(d->pcb);
err2:
    ptpDetach(d);
err1:
    adhocDescFree(d);
    return ret;
}
#else
void ptpSocketDestroy(SceNetAdhocDesc *d) {
    ptpFlushSockbufs(d->pcb);
    ptpDetach(d);
    adhocDescFree(d);
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpConnectWait);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpAcceptWait);
#endif

#if FW_VERSION >= 282
void func_00003BB0(SceNetAdhocDesc *d) {
    ptpFlushSockbufs(d->pcb);
    ptpDetach(d);
    adhocDescFree(d);
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003BE8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00003D9C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpSendData);

s32 ptpRecvData(SceNetAdhocDesc *d, void *buf, s32 *len, u32 timeout, s32 nonblock) {
    SceNetAdhocPtpPcb *pcb;
    struct mbuf *m;
    u64 start;
    u64 now;
    u32 tmo;
#if FW_VERSION < 201
    u32 space;
    u32 nspace;
#else
    s32 space;
    s32 nspace;
#endif
    u32 cc;
    s32 left;
    s32 err;

    start = 0;
    left = *len;
    pcb = d->pcb;
    for (;;) {
        if ((d->flags & 0x8000) && pcb->rcv.cc == 0)
            return 0x8041070C;
        if (d->flags & 0x20)
            return 0x80410708;
        cc = pcb->rcv.cc;
        if (cc >= pcb->rcv.lowat || (d->flags & 0x8000))
            break;
        if (nonblock & 1)
            return 0x80410709;
        tmo = 0;
        if (timeout != 0) {
            if (start == 0)
                start = ADHOC_CLOCK();
            now = ADHOC_CLOCK();
            if (now - start >= timeout) {
                sceNetMFreem(NULL);
                return 0x80410715;
            }
            tmo = timeout - ((u32)now - (u32)start);
        }
        pcb->rcv.flags |= 1;
        err = _sce_pspnet_tsleep_usec(&pcb->rcv, tmo);
        if (d->flags & 0x20)
            err = 5;
        if (d->flags & 1)
            err = 0x20;
        if (err != 0) {
            switch (err) {
            case 0xB:
                err = 0x80410715;
                break;
            case 4:
                err = 0x80410719;
                break;
            case 5:
                err = 0x80410708;
                break;
            case 0x20:
                err = 0x80410707;
                break;
            default:
                err = 0x80410002;
                break;
            }
            return err;
        }
    }
    space = pcb->rcv.hiwat - cc;
    while ((m = pcb->rcv.first) != NULL && left > 0) {
        if (left < m->m_pkthdr.len) {
            sceNetMCopydata(m, 0, left, (u8 *)buf + (*len - left));
            sceNetMAdj(m, left);
            pcb->rcv.cc -= left;
            left = 0;
        } else {
            sceNetMCopydata(m, 0, m->m_pkthdr.len, (u8 *)buf + (*len - left));
            left -= m->m_pkthdr.len;
            m = pcb->rcv.first;
            if (m != NULL) {
                if ((pcb->rcv.first = m->m_nextpkt) == NULL)
                    pcb->rcv.last = NULL;
                m->m_nextpkt = NULL;
                pcb->rcv.cc -= m->m_pkthdr.len;
            }
            sceNetMFreem(m);
        }
    }
    nspace = pcb->rcv.hiwat - pcb->rcv.cc;
    if (space < ADHOC_RCV_Q(pcb) && space < pcb->mss) {
        if (nspace >= ADHOC_RCV_Q(pcb) || nspace >= pcb->mss)
            ptpSendCtl(pcb, 5);
    }
    *len -= left;
    return 0;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpFlushWait);
#endif

#if FW_VERSION < 201
s32 ptpFlushWait(SceNetAdhocDesc *d, u32 timeout, s32 nonblock) {
    SceNetAdhocPtpPcb *pcb;
    u64 start;
    u64 now;
    u32 tmo;
    s32 err;

    pcb = d->pcb;
    start = 0;
    while (pcb->snd.cc != 0) {
        if (d->flags & 0x8000)
            return 0x8041070C;
        if (d->flags & 0x200)
            return 0x80410708;
        if (nonblock & 1)
            return 0x80410709;
        tmo = 0;
        if (timeout != 0) {
            if (start == 0)
                start = ADHOC_CLOCK();
            now = ADHOC_CLOCK();
            if (now - start >= timeout)
                return 0x80410715;
            tmo = timeout - ((u32)now - (u32)start);
        }
        pcb->snd.flags |= 1;
        err = _sce_pspnet_tsleep_usec(&pcb->snd, tmo);
        if (d->flags & 0x200)
            err = 5;
        if (d->flags & 1)
            err = 0x20;
        if (err != 0) {
            switch (err) {
            case 0xB:
                err = 0x80410715;
                break;
            case 4:
                err = 0x80410719;
                break;
            case 5:
                err = 0x80410708;
                break;
            case 0x20:
                err = 0x80410707;
                break;
            default:
                err = 0x80410002;
                break;
            }
            return err;
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void sceNetAdhoc_lib_62B875A8(void) {
    adhocMemset(&g_adhocStat, 0, sizeof(g_adhocStat));
}
#endif

#if FW_VERSION < 150
void sceNetAdhoc_lib_62B875A8(void) {
    __builtin_memset(&g_adhocStat, 0, sizeof(g_adhocStat));
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000473C);
#endif

#if FW_VERSION >= 201
void sceNetAdhoc_lib_62B875A8(void) {
    sceNetMemset(&g_adhocStat, 0, sizeof(g_adhocStat));
}
#endif

s32 sceNetAdhoc_lib_2CA12790(SceNetAdhocStat *out) {
    if (out == NULL)
        return 0x80410711;
#if FW_VERSION >= 201
    sceNetMemcpy(out, &g_adhocStat, sizeof(g_adhocStat));
#else
    *out = g_adhocStat;
#endif
    return 0;
}

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpTerm);
#endif

#if FW_VERSION >= 150
s32 ptpAttach(SceNetAdhocDesc *d) {
    SceNetAdhocPtpPcb *pcb;

    pcb = sceNetMallocInternal(sizeof(SceNetAdhocPtpPcb));
    if (pcb == NULL)
        return 0x80410001;
    ADHOC_MEMSET(pcb, 0, sizeof(SceNetAdhocPtpPcb));
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

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpBind);
#endif

#if FW_VERSION < 300
void ptpDetach(SceNetAdhocDesc *d) {
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

void ptpFlushSockbufs(SceNetAdhocPtpPcb *pcb) {
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

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004DFC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004C0C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004BD8);
#endif

void ptpEstablished(SceNetAdhocPtpPcb *pcb) {
    _sce_pspnet_callout_stop(&pcb->callout);
    pcb->state = 4;
    pcb->desc->flags = (pcb->desc->flags & ~0x2000) | 0x4000;
    if (pcb->parent != NULL)
        PTP_SBWAKEUP(&pcb->parent->rcv);
    else
        PTP_SBWAKEUP(&pcb->rcv);
#if FW_VERSION >= 150
    _sce_pspnet_callout_reset_usec(&pcb->callout2, pcb->rexmt_int, ptpKeepAlive, pcb);
#endif
}

void ptpDrop(SceNetAdhocPtpPcb *pcb) {
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

s32 ptpPoll(SceNetAdhocDesc *d, s32 events) {
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

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGetPtpStat);

s32 ptpInit(void) {
    g_ptpList.first = NULL;
    g_ptpList.last = &g_ptpList.first;
    g_ptpLastPort = sceNetRand() / 0x20009 + 0x4000;
    g_ptpIss = sceNetRand();
    return 0;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpTerm);
#endif

SceNetAdhocPtpPcb *ptpLookup(const SceNetEtherAddr *laddr, u16 lport, const SceNetEtherAddr *paddr, u16 pport) {
    SceNetAdhocPtpPcb *p;

    for (p = g_ptpList.first; p != NULL; p = p->next) {
        if (ADHOC_MEMCMP(&p->laddr, laddr, 6) == 0 && p->lport == lport) {
            if (paddr == NULL)
                break;
            if (ADHOC_MEMCMP(&p->paddr, paddr, 6) == 0 && p->pport == pport)
                break;
        }
    }
    return p;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000056CC);
#endif

#if FW_VERSION < 150
s32 ptpAttach(SceNetAdhocDesc *d) {
    SceNetAdhocPtpPcb *pcb;

    pcb = sceNetMallocInternal(sizeof(SceNetAdhocPtpPcb));
    if (pcb == NULL)
        return 0x80410001;
    ADHOC_MEMSET(pcb, 0, sizeof(SceNetAdhocPtpPcb));
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

#if FW_VERSION < 201
void ptpClearAddr(SceNetAdhocPtpPcb *pcb) {
    __builtin_memset(&pcb->laddr, 0, sizeof(pcb->laddr));
    __builtin_memset(&pcb->paddr, 0, sizeof(pcb->paddr));
    pcb->lport = 0;
}
#endif

#if FW_VERSION < 282
s32 ptpSetSockbuf(SceNetAdhocPtpPcb *pcb, s32 sndsize, s32 rcvsize) {
    pcb->snd.hiwat = sndsize;
    pcb->rcv.hiwat = rcvsize;
    pcb->snd.lowat = 1;
    pcb->rcv.lowat = 1;
    return 0;
}

void ptpSetRexmt(SceNetAdhocPtpPcb *pcb, s32 a1, s32 a2) {
    pcb->rexmt_int = a1;
    pcb->rexmt_cnt = a2;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000589C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpConnectStart);
#endif

#if FW_VERSION < 282
s32 ptpListenSetup(SceNetAdhocPtpPcb *pcb, s32 a1) {
    pcb->state = 1;
    pcb->unkBC = a1;
    pcb->desc->flags |= 0x1000;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void ptpCloseChildren(SceNetAdhocPtpPcb *arg0) {
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
            ptpDrop(var_s0);
            ptpCloseChildren(var_s0);
            ptpDetach(temp_s2);
            adhocDescFree((SceNetAdhocDesc *) temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    sceNetMemset((u8 *)arg0 + 0x18, 0, 6);
    sceNetMemset((u8 *)arg0 + 0x1E, 0, 6);
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    ptpFlushSockbufs(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void ptpCloseChildren(SceNetAdhocPtpPcb *arg0) {
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
            ptpDrop(var_s0);
            ptpCloseChildren(var_s0);
            ptpDetach(temp_s2);
            adhocDescFree((SceNetAdhocDesc *) temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    ptpFlushSockbufs(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005AAC);
#endif

#if FW_VERSION < 150
void ptpCloseChildren(SceNetAdhocPtpPcb *arg0) {
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
            ptpDrop(var_s0);
            ptpCloseChildren(var_s0);
            ptpDetach(temp_s2);
            adhocDescFree((SceNetAdhocDesc *) temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    M2C_FIELD(arg0, s16 *, 0x26) = 0;
    M2C_FIELD(arg0, s16 *, 0x28) = 0;
    ptpFlushSockbufs(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000053EC);
#endif

#if FW_VERSION >= 300
void ptpDetach(SceNetAdhocDesc *d) {
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
            ptpDrop(var_s0);
            func_00005708(var_s0);
            ptpDetach(temp_s2);
            adhocDescFree((SceNetAdhocDesc *) temp_s2);
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
        } while (var_s0 != NULL);
    }
    sceNetMemset((u8 *)arg0 + 0x18, 0, 6);
    sceNetMemset((u8 *)arg0 + 0x1E, 0, 6);
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
    ptpFlushSockbufs(arg0);
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

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpInput);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpSendFrameL);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpSendFrame);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpSendCtl);

void ptpOutput(SceNetAdhocPtpPcb *pcb, s32 rexmt) {
    struct mbuf *m;
    u32 seq;
    s32 n;
#if FW_VERSION >= 201
    s32 inflight;
#define ADHOC_INFLIGHT inflight
#else
#define ADHOC_INFLIGHT pcb->snd_inflight
#endif
#if FW_VERSION >= 150
    u32 *st;
#endif

    n = 0;
#if FW_VERSION >= 201
    inflight = 0;
#endif
    m = pcb->snd.first;
    seq = pcb->snd_una;
    if (m == NULL)
        goto out;
    for (; seq != pcb->snd_nxt; seq++) {
#if FW_VERSION >= 201
        inflight += m->m_pkthdr.len;
#endif
        m = m->m_nextpkt;
        if (m == NULL)
            goto out;
    }
    while (m != NULL) {
        if (pcb->snd_wnd - ADHOC_INFLIGHT < m->m_pkthdr.len) {
            if (n != 0)
                goto out;
            if (rexmt != 0) {
                PTP_SEND_FRAME(pcb, 4, pcb->snd_una - 1, NULL);
                g_adhocStat.stat[ADHOC_STAT_PTP_PROBE]++;
                goto out;
            }
            if (pcb->callout.c_flags & CALLOUT_PENDING)
                goto out;
            g_adhocStat.stat[ADHOC_STAT_PTP_WNDWAIT]++;
            pcb->rexmt_left = pcb->rexmt_cnt;
            _sce_pspnet_callout_reset_usec(&pcb->callout, pcb->rexmt_int, ptpTimer, pcb);
            goto out;
        }
#if FW_VERSION >= 150
        st = (u32 *)&m->m_pkthdr.unk20; /* rf info block; st[2..3] = u64 first-send time */
#endif
        PTP_SEND_FRAME(pcb, 4, pcb->snd_nxt, m);
        n++;
#if FW_VERSION >= 150
        if (*(u64 *)&st[2] == 0)
            *(u64 *)&st[2] = ADHOC_CLOCK();
#endif
        pcb->snd_nxt++;
#if FW_VERSION < 201
        pcb->snd_inflight += m->m_pkthdr.len;
#endif
#if FW_VERSION >= 201
        inflight += m->m_pkthdr.len;
        m = m->m_next;
        g_adhocStat.stat[ADHOC_STAT_PTP_SENT]++;
#else
#if FW_VERSION >= 150
        g_adhocStat.stat[ADHOC_STAT_PTP_SENT]++;
#endif
        m = m->m_next;
#endif
    }
out:
    if (rexmt == 0 && n > 0) {
        pcb->rexmt_left = pcb->rexmt_cnt;
        _sce_pspnet_callout_reset_usec(&pcb->callout, pcb->rexmt_int, ptpTimer, pcb);
    }
}
#endif

#if FW_VERSION < 201
#undef ADHOC_INFLIGHT
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000058B8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpSendFrameL);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpSendCtl);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
#undef ADHOC_INFLIGHT
#endif

#if FW_VERSION >= 282
void ptpOutput(SceNetAdhocPtpPcb *pcb, s32 rexmt) {
    struct mbuf *m;
    u32 seq;
    s32 n;
#if FW_VERSION >= 201
    s32 inflight;
#define ADHOC_INFLIGHT inflight
#else
#define ADHOC_INFLIGHT pcb->snd_inflight
#endif
#if FW_VERSION >= 150
    u32 *st;
#endif

    n = 0;
#if FW_VERSION >= 201
    inflight = 0;
#endif
    m = pcb->snd.first;
    seq = pcb->snd_una;
    if (m == NULL)
        goto out;
    for (; seq != pcb->snd_nxt; seq++) {
#if FW_VERSION >= 201
        inflight += m->m_pkthdr.len;
#endif
        m = m->m_nextpkt;
        if (m == NULL)
            goto out;
    }
    while (m != NULL) {
        if (pcb->snd_wnd - ADHOC_INFLIGHT < m->m_pkthdr.len) {
            if (n != 0)
                goto out;
            if (rexmt != 0) {
                PTP_SEND_FRAME(pcb, 4, pcb->snd_una - 1, NULL);
                g_adhocStat.stat[ADHOC_STAT_PTP_PROBE]++;
                goto out;
            }
            if (pcb->callout.c_flags & CALLOUT_PENDING)
                goto out;
            g_adhocStat.stat[ADHOC_STAT_PTP_WNDWAIT]++;
            pcb->rexmt_left = pcb->rexmt_cnt;
            _sce_pspnet_callout_reset_usec(&pcb->callout, pcb->rexmt_int, ptpTimer, pcb);
            goto out;
        }
#if FW_VERSION >= 150
        st = (u32 *)&m->m_pkthdr.unk20; /* rf info block; st[2..3] = u64 first-send time */
#endif
        PTP_SEND_FRAME(pcb, 4, pcb->snd_nxt, m);
        n++;
#if FW_VERSION >= 150
        if (*(u64 *)&st[2] == 0)
            *(u64 *)&st[2] = ADHOC_CLOCK();
#endif
        pcb->snd_nxt++;
#if FW_VERSION < 201
        pcb->snd_inflight += m->m_pkthdr.len;
#endif
#if FW_VERSION >= 201
        inflight += m->m_pkthdr.len;
        m = m->m_next;
        g_adhocStat.stat[ADHOC_STAT_PTP_SENT]++;
#else
#if FW_VERSION >= 150
        g_adhocStat.stat[ADHOC_STAT_PTP_SENT]++;
#endif
        m = m->m_next;
#endif
    }
out:
    if (rexmt == 0 && n > 0) {
        pcb->rexmt_left = pcb->rexmt_cnt;
        _sce_pspnet_callout_reset_usec(&pcb->callout, pcb->rexmt_int, ptpTimer, pcb);
    }
}
#else
void ptpTimer(SceNetAdhocPtpPcb *pcb) {
    if ((u32)pcb->state < 2)
        return;
    if (pcb->rexmt_left-- <= 0) {
#if FW_VERSION < 150
        _sce_pspnet_callout_stop(&pcb->callout);
#endif
        ptpDrop(pcb);
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
#if FW_VERSION < 201
        pcb->snd_inflight = 0;
#endif
        pcb->snd_nxt = pcb->snd_una;
        ptpOutput(pcb, 1);
        g_adhocStat.stat[ADHOC_STAT_PTP_REXMT]++;
        break;
    }
    _sce_pspnet_callout_reset_usec(&pcb->callout, pcb->rexmt_int, ptpTimer, pcb);
}
#endif

#if FW_VERSION >= 282
void ptpTimer(SceNetAdhocPtpPcb *pcb) {
    if ((u32)pcb->state < 2)
        return;
    if (pcb->rexmt_left-- <= 0) {
        ptpDrop(pcb);
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
        pcb->snd_nxt = pcb->snd_una;
        ptpOutput(pcb, 1);
        g_adhocStat.stat[ADHOC_STAT_PTP_REXMT]++;
        break;
    }
    _sce_pspnet_callout_reset_usec(&pcb->callout, pcb->rexmt_int, ptpTimer, pcb);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 300
void ptpKeepAlive(SceNetAdhocPtpPcb *pcb) {
    struct mbuf *m;
    u64 now;
    u32 *st;

    if (pcb->state != 4)
        return;
    m = pcb->snd.first;
    if (m != NULL) {
        now = ADHOC_CLOCK();
        st = (u32 *)&m->m_pkthdr.unk20;
        if (*(u64 *)&st[2] != 0) {
            if (now - *(u64 *)&st[2] > pcb->rexmt_int * (pcb->rexmt_cnt + 1)) {
                ptpDrop(pcb);
                return;
            }
        }
    }
    _sce_pspnet_callout_reset_usec(&pcb->callout2, pcb->rexmt_int, ptpKeepAlive, pcb);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc", ptpKeepAlive);
#endif

#if FW_VERSION < 282
s32 sceNetAdhocGameModeCreateMaster(void *ptr, s32 size) {
    s32 s;
    s32 ret;
    SceNetEtherAddr addr;

#if FW_VERSION >= 201
    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
#endif
    if (ptr == NULL)
        return 0x80410711;
#if FW_VERSION >= 150
    if ((u32)(size - 1) >= 0x400)
        return 0x80410705;
#endif
#if FW_VERSION >= 201
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    ret = 0x80410712;
#else
    ret = 0x80410712;
    s = _sce_pspnet_spllock();
#endif
    if (g_adhocInit == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    ret = sceNetGetLocalEtherAddr(&addr);
    if (ret < 0)
        goto end;
    ret = gameModeCreate(&addr, ptr, size);
    if (ret < 0)
        goto end;
    g_gameModeMasterId = ret;
    ret = 0;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
s32 sceNetAdhocGameModeCreateMaster(void *ptr, s32 size) {
    s32 s;
    s32 ret;
    SceNetEtherAddr addr;

#if FW_VERSION >= 201
    if (sceKernelCheckThreadStack() < 0x7D0)
        return 0x80410005;
#endif
    if (ptr == NULL)
        return 0x80410711;
#if FW_VERSION >= 150
    if ((u32)(size - 1) >= 0x400)
        return 0x80410705;
#endif
#if FW_VERSION >= 201
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    ret = 0x80410712;
#else
    ret = 0x80410712;
    s = _sce_pspnet_spllock();
#endif
    if (g_adhocInit == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    ret = sceNetGetLocalEtherAddr(&addr);
    if (ret < 0)
        goto end;
    ret = func_000070E8(&addr, ptr, size);
    if (ret < 0)
        goto end;
    g_gameModeMasterId = ret;
    ret = 0;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 sceNetAdhocGameModeCreateReplica(const SceNetEtherAddr *addr, void *ptr, s32 size) {
    s32 s;
    s32 ret;

#if FW_VERSION >= 201
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
#endif
    if (addr == NULL || ptr == NULL)
        return 0x80410711;
#if FW_VERSION >= 150
    if ((u32)(size - 1) >= 0x400)
        return 0x80410705;
#endif
#if FW_VERSION >= 201
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    ret = 0x80410712;
#else
    ret = 0x80410712;
    s = _sce_pspnet_spllock();
#endif
    if (g_adhocInit == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    ret = gameModeCreate(addr, ptr, size);
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocGameModeCreateReplica(const SceNetEtherAddr *addr, void *ptr, s32 size) {
    s32 s;
    s32 ret;

#if FW_VERSION >= 201
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
#endif
    if (addr == NULL || ptr == NULL)
        return 0x80410711;
#if FW_VERSION >= 150
    if ((u32)(size - 1) >= 0x400)
        return 0x80410705;
#endif
#if FW_VERSION >= 201
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    ret = 0x80410712;
#else
    ret = 0x80410712;
    s = _sce_pspnet_spllock();
#endif
    if (g_adhocInit == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    ret = func_000070E8(addr, ptr, size);
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

s32 sceNetAdhocGameModeUpdateMaster(void) {
    s32 s;
    s32 ret;
    SceNetAdhocGameMode *gm;

#if FW_VERSION >= 201
    if (sceKernelCheckThreadStack() < 0x7F0)
        return 0x80410005;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
#else
    s = _sce_pspnet_spllock();
#endif
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
#if FW_VERSION >= 150
    ADHOC_MEMCPY(gm->buf, gm->ptr, gm->size);
    ret = sceNetAdhocAuth_lib_AAB06250(gm->buf, gm->buflen);
    if (ret < 0)
        goto end;
    ret = sceWlanGPSend(0x10, gm->buf, gm->buflen);
#else
    ret = sceWlanGPSend(0x10, gm->ptr, gm->size);
#endif
end:
    _sce_pspnet_splunlock(s);
    return ret;
}

#if FW_VERSION >= 201
/* 2.01+: the master delete has gameModeDelete's body inlined */

static __inline s32 gameModeDeleteInl(s32 id) {
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
    sceNetFreeInternal(gm->buf);
    sceNetFreeInternal(gm);
    return 0;
}

s32 sceNetAdhocGameModeDeleteMaster(void) {
    s32 s;
    s32 ret;

    if (sceKernelCheckThreadStack() < 0x7F0)
        return 0x80410005;
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    ret = 0x80410712;
    if (g_adhocInit != 0) {
        ret = 0x8041071C;
        if (g_gameModeMasterId >= 0)
            ret = gameModeDeleteInl(g_gameModeMasterId);
    }
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION < 282
s32 gameModeInit(void) {
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

void gameModeTerm(void) {
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

#if FW_VERSION >= 201
    if (sceKernelCheckThreadStack() < 0x7E0)
        return 0x80410005;
#endif
    if (addr == NULL || ptr == NULL)
        return 0x80410711;
#if FW_VERSION >= 150
    if ((u32)(size - 1) >= 0x400)
        return 0x80410705;
#endif
#if FW_VERSION >= 201
    s = _sce_pspnet_spllock();
    if (s < 0)
        return s;
    ret = 0x80410712;
#else
    ret = 0x80410712;
    s = _sce_pspnet_spllock();
#endif
    if (g_adhocInit == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    ret = gameModeCreate(addr, ptr, size);
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceNetAdhocGameModeUpdateReplica(s32 id, SceNetAdhocGameModeOptData *opt) {
#if FW_VERSION >= 201
    if (sceKernelCheckThreadStack() < 0x7F0)
        return 0x80410005;
#endif
    return gameModeUpdateReplica(id, opt, 0);
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocGameModeUpdateReplica(s32 id, SceNetAdhocGameModeOptData *opt) {
    if (sceKernelCheckThreadStack() < 0x7F0)
        return 0x80410005;
    return func_00007298(id, opt, 0);
}
#endif

#if FW_VERSION < 201
s32 sceNetAdhocGameModeUpdateReplica(s32 id, SceNetAdhocGameModeOptData *opt) {
    return gameModeUpdateReplica(id, opt, 0);
}
#endif

#if FW_VERSION < 282
s32 sceNetAdhocGameModeUpdateReplicaInternal(s32 id, SceNetAdhocGameModeOptData *opt) {
    return gameModeUpdateReplica(id, opt, 1);
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
            ret = gameModeDelete(g_gameModeMasterId);
    }
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 sceNetAdhocGameModeUpdateReplicaInternal(s32 id, SceNetAdhocGameModeOptData *opt) {
    return func_00007298(id, opt, 1);
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
    ret = gameModeDelete(id);
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGameModeDeleteReplica);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", gameModeCreate);

s32 gameModeDelete(s32 id) {
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
#if FW_VERSION >= 150
    sceNetFreeInternal(gm->buf);
#endif
    sceNetFreeInternal(gm);
    return 0;
}
#endif

#if FW_VERSION < 201
s32 gameModeUpdateReplica(s32 id, SceNetAdhocGameModeOptData *opt, s32 internal) {
    s32 s;
    s32 ret;
    SceNetAdhocGameMode *gm;
    SceNetAdhocGameModeOptData tmp;
#if FW_VERSION < 150
    SceNetAdhocGameModeOptData *info;

    info = NULL;
#endif
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
#if FW_VERSION >= 150
    tmp.size = sizeof(tmp);
    ret = sceWlanGPRecv(id, gm->buf, gm->buflen, &tmp);
    if (ret < 0)
        goto end;
    if (tmp.flag & 1) {
        ret = sceNetAdhocAuth_lib_015A8A64(gm->buf, gm->buflen);
        if (ret < 0)
            goto end;
        ADHOC_MEMCPY(gm->ptr, gm->buf, gm->size);
    }
    if (opt == NULL)
        goto end;
    if (opt->size >= sizeof(tmp))
        opt->flag = tmp.flag;
#else
    if (opt != NULL) {
        tmp.size = sizeof(tmp);
        info = &tmp;
    }
    ret = sceWlanGPRecv(id, gm->ptr, gm->size, info);
    if (opt == NULL)
        goto end;
    if (opt->size >= sizeof(tmp))
        opt->flag = info->flag;
#endif
    if (internal == 0)
        opt->flag = (u16)opt->flag;
end:
    _sce_pspnet_splunlock(s);
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", gameModeUpdateReplica);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

void *adhocMemchr(const void *s, s32 c, s32 n) {
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

void *adhocMemmove(void *dst, const void *src, s32 n) {
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

s32 adhocMemcmp(const void *a, const void *b, s32 n) {
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

void *adhocMemcpy(void *dst, const void *src, s32 n) {
    u8 *d;
    const u8 *s;

    if (dst == NULL)
        return NULL;
    for (d = dst, s = src; n > 0; n--)
        *d++ = *s++;
    return dst;
}

void *adhocMemset(void *s, s32 c, s32 n) {
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
s32 adhocMemcmp2(const void *a, const void *b, s32 n) {
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

void adhocBcopy(const void *src, void *dst, s32 n) {
    adhocMemmove(dst, src, n);
}
#endif

#if FW_VERSION < 201
void adhocBzero(void *s, s32 n) {
    u8 *p;

    if (s != NULL) {
        for (p = s; n > 0; n--)
            *p++ = 0;
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000070E8);

s32 gameModeDelete(s32 id) {
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
#if FW_VERSION >= 150
    sceNetFreeInternal(gm->buf);
#endif
    sceNetFreeInternal(gm);
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00007298);
#endif
