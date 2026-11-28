/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_adhoc_decls.h"

#if FW_VERSION < 201
s32 sceNetAdhocInit(void) {
    s32 s;
    s32 ret;

    s = _sce_pspnet_spllock();
    ret = 0x80410713;
    if (D_00007400 > 0)
        goto end;
    D_00007984.ifq_maxlen = 50;
    D_00007984.ifq_len = 0;
    D_00007984.ifq_head = NULL;
    D_00007984.ifq_drops = 0;
    D_00007984.ifq_tail = NULL;
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
    D_00007400 = 1;
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
    if (D_00007400 == 0)
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
    while (D_00007984.ifq_head != NULL) {
        IF_DEQUEUE(&D_00007984, m);
        sceNetMFreem(m);
    }
    D_00007400 = 0;
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
        IF_DEQUEUE(&D_00007984, m);
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
    *out = &D_00007984;
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
s32 func_0000092C(void *arg0, s32 arg1) {
    s32 var_s2;
    s32 var_s3;
    u8 temp_v1;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *var_s1;

    var_s3 = 0;
    var_s1 = arg0;
    if (arg1 > 0) {
        var_s2 = arg1;
        do {
            temp_a1 = M2C_FIELD(var_s1, void **, 0);
            temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x10);
            switch (temp_v1) {                      /* irregular */
            case 2:
                temp_s0 = M2C_FIELD(var_s1, void **, 4);
                M2C_FIELD(temp_s0, s32 *, 8) = func_000050F8((s32) temp_a1, M2C_FIELD(temp_s0, s32 *, 4));
                break;
            case 1:
                temp_s0_2 = M2C_FIELD(var_s1, void **, 4);
                M2C_FIELD(temp_s0_2, s32 *, 8) = func_00002C00(temp_a1, M2C_FIELD(temp_s0_2, s32 *, 4));
                break;
            }
            temp_v0 = M2C_FIELD(var_s1, void **, 4);
            var_s2 -= 1;
            var_s1 += 8;
            var_s3 += M2C_FIELD(temp_v0, s32 *, 8) != 0;
        } while (var_s2 != 0);
    }
    return var_s3;
}
#else
s32 func_00000974(void *arg0, s32 arg1) {
    s32 var_s2;
    s32 var_s3;
    u8 temp_v1;
    struct Unk_func_00000974_temp_a1 *temp_a1;
    struct Unk_func_00000974_temp_s0 *temp_s0;
    struct Unk_func_00000974_temp_s0_2 *temp_s0_2;
    struct Unk_func_00000974_temp_v0 *temp_v0;
    void *var_s1;

    var_s3 = 0;
    var_s1 = arg0;
    if (arg1 > 0) {
        var_s2 = arg1;
        do {
            temp_a1 = M2C_FIELD(var_s1, void **, 0);
            temp_v1 = temp_a1->unk10;
            switch (temp_v1) {                      /* irregular */
            case 2:
                temp_s0 = M2C_FIELD(var_s1, void **, 4);
                temp_s0->unk8 = func_00005024((s32) temp_a1, temp_s0->unk4);
                break;
            case 1:
                temp_s0_2 = M2C_FIELD(var_s1, void **, 4);
                temp_s0_2->unk8 = func_00002D94((s32) temp_a1, temp_s0_2->unk4);
                break;
            }
            temp_v0 = M2C_FIELD(var_s1, void **, 4);
            var_s2 -= 1;
            var_s1 += 8;
            var_s3 += temp_v0->unk8 != 0;
        } while (var_s2 != 0);
    }
    return var_s3;
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
    if (D_00007400 == 0) {
        ret = 0x80410712;
        goto end;
    }
    for (d = D_00007998.first; d != NULL; d = d->next) {
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
    if (D_00007400 == 0) {
        ret = 0x80410712;
        goto end;
    }
    for (d = D_00007998.first; d != NULL; d = d->next) {
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

    D_00007998.first = NULL;
    D_00007998.last = &D_00007998.first;
    ret = _sce_pspnet_start_of_adhoc_module_in_sched(func_00001078);
    if (ret < 0)
        return ret;
    D_000079A0 = 0;
    return 0;
}

void func_00000E18(void) {
    SceNetAdhocDesc *d;

    _sce_pspnet_stop_of_adhoc_module_in_sched();
    while ((d = D_00007998.first) != NULL) {
        if (d->pcb == NULL) {
            if (d->next != NULL)
                d->next->prev = d->prev;
            else
                D_00007998.last = d->prev;
            *d->prev = d->next;
            sceNetFreeInternal(d);
        }
    }
}

SceNetAdhocDesc *func_00000E90(u8 type, s32 id) {
    SceNetAdhocDesc *d;

    for (d = D_00007998.first; d != NULL; d = d->next) {
        if ((type == 0 || d->type == type) && d->id == id)
            break;
    }
    return d;
}

#if FW_VERSION < 282
s32 func_00000E44(void) {
    s32 id;
    SceNetAdhocDesc *d;

    id = (D_000079A0 == 255) ? 1 : D_000079A0 + 1;
    for (; id != D_000079A0; id = (id == 255) ? 1 : id + 1) {
        for (d = D_00007998.first; d != NULL; d = d->next) {
            if (d->id == id)
                break;
        }
        if (d == NULL) {
            D_000079A0 = id;
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
    d->prev = D_00007998.last;
    *D_00007998.last = d;
    D_00007998.last = &d->next;
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
        D_00007998.last = d->prev;
    *d->prev = d->next;
    sceNetFreeInternal(d);
}

s32 func_00001044(void) {
    SceNetAdhocDesc *d;

    for (d = D_00007998.first; d != NULL; d = d->next) {
        if (d->waiters != NULL)
            return 1;
    }
    return 0;
}

#if FW_VERSION < 150
void func_00001078(SceNetAdhocDesc *d, s32 events) {
    SceNetAdhocWaiter *w;

    for (w = d->waiters; w != NULL; w = w->next) {
        if (w->tid != 0) {
            if (((events & 0x210) && w->tid == d->unk18)
                || ((events & 0x1A0) && w->tid == d->unk1C)
                || ((events & 0x40) && w->tid == d->unk20)) {
                w->tid = 0;
                sceKernelSignalSema(w->sema, 1);
            }
        }
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001078);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPdpCreate);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPdpSend);

#if FW_VERSION < 150
s32 sceNetAdhocPdpDelete(s32 id, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;
    SceNetAdhocPdpPcb *pcb;

    ret = 0;
    s = _sce_pspnet_spllock();
    if (D_00007400 == 0) {
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
        _sce_pspnet_wakeup(&D_00007448);
    }
    if (pcb->ifp->if_adhocflags & 1) {
        pcb->ifp->if_adhocflags &= ~1;
        _sce_pspnet_wakeup(&pcb->ifp->if_snd);
    }
    if (pcb->ifp->if_adhocflags & 2) {
        pcb->ifp->if_adhocflags &= ~2;
        _sce_pspnet_wakeup(&D_00007448);
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
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPdpRecv);
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

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000215C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00001F20);
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
    D_000079A4.first = NULL;
    D_000079A4.last = &D_000079A4.first;
    D_000079AC = sceNetRand() / 0x20009 + 0x4000;
    D_000079E4 = sceNetRand() / 0x8001;
    return 0;
}

void func_000029E8(void) {
    SceNetAdhocPdpPcb *pcb;
    SceNetAdhocPdpPcb *p;
    SceNetAdhocDesc *d;

    while ((pcb = D_000079A4.first) != NULL) {
        func_0000223C(pcb);
        d = pcb->desc;
        p = d->pcb;
        d->pcb = NULL;
        if (p->next != NULL)
            p->next->prev = p->prev;
        else
            D_000079A4.last = p->prev;
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
    pcb->prev = D_000079A4.last;
    *D_000079A4.last = pcb;
    D_000079A4.last = &pcb->next;
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
        D_000079A4.last = pcb->prev;
    *pcb->prev = pcb->next;
    sceNetFreeInternal(pcb);
}

#if FW_VERSION < 282
s32 func_00002B84(SceNetAdhocPdpPcb *pcb, s32 size) {
    pcb->rcvbufsize = size;
    return 0;
}
#endif

#if FW_VERSION < 271
void func_00002B90(struct ifnet *ifp) {
    if (ifp->if_adhocflags & 1) {
        ifp->if_adhocflags &= ~1;
        _sce_pspnet_wakeup(&ifp->if_snd);
    }
    if (ifp->if_adhocflags & 2) {
        ifp->if_adhocflags &= ~2;
        _sce_pspnet_wakeup(&D_00007448);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00002B90);
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
    if (D_00007400 == 0)
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

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpConnect);

#if FW_VERSION < 201
s32 sceNetAdhocPtpListen(const SceNetEtherAddr *saddr, u16 sport, s32 bufsize, u32 rexmt_int, s32 rexmt_cnt, s32 backlog, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    if (saddr == NULL)
        return 0x80410711;
    ret = 0x80410712;
    s = _sce_pspnet_spllock();
    if (D_00007400 == 0)
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

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpAccept);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpSend);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpRecv);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocPtpFlush);

#if FW_VERSION < 201
s32 sceNetAdhocPtpClose(s32 id, s32 flag) {
    s32 s;
    s32 ret;
    SceNetAdhocDesc *d;

    ret = 0;
    s = _sce_pspnet_spllock();
    if (D_00007400 == 0) {
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
    M2C_VFIELD(&D_00007450, s32, 0) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x2C) = 0;
    M2C_VFIELD(&D_00007450, s32, 4) = 0;
    M2C_VFIELD(&D_00007450, s32, 8) = 0;
    M2C_VFIELD(&D_00007450, s32, 0xC) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x10) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x14) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x18) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x1C) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x20) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x24) = 0;
    M2C_VFIELD(&D_00007450, s32, 0x28) = 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000473C);

void sceNetAdhoc_lib_62B875A8(void) {
    sceNetMemset(&D_000079E8, 0, 0x7C);
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhoc_lib_2CA12790);

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004964);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
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
        D_000079B0.last = pcb->prev;
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
    _sce_pspnet_callout_stop(pcb->callout);
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
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004F50);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000050F8);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004BD8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004DA4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004E98);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005024);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", sceNetAdhocGetPtpStat);

s32 func_000052D4(void) {
    D_000079B0.first = NULL;
    D_000079B0.last = &D_000079B0.first;
    D_000079B8 = sceNetRand() / 0x20009 + 0x4000;
    D_000079BC = sceNetRand();
    return 0;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00004964);
#endif

#if FW_VERSION < 150
SceNetAdhocPtpPcb *func_0000532C(const SceNetEtherAddr *laddr, u16 lport, const SceNetEtherAddr *paddr, u16 pport) {
    SceNetAdhocPtpPcb *p;

    for (p = D_000079B0.first; p != NULL; p = p->next) {
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
    _sce_pspnet_callout_init(pcb->callout);
    pcb->next = NULL;
    pcb->prev = D_000079B0.last;
    *D_000079B0.last = pcb;
    D_000079B0.last = &pcb->next;
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
        D_000079B0.last = pcb->prev;
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
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000667C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006AF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006878);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00005FF8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_00006340);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000648C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000058B8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000062FC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_0000660C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000067F8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc", func_000069D4);

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
    if (D_00007400 == 0)
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
    D_000073F0 = ret;
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
    if (D_00007400 == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    ret = 0x8041071C;
    if (D_000073F0 < 0)
        goto end;
    for (gm = D_000079C0.first; gm != NULL; gm = gm->next) {
        if (gm->id == D_000073F0)
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
    D_000079C0.first = NULL;
    D_000079C0.last = &D_000079C0.first;
    return 0;
}
#else
s32 func_00006F68(void) {
    D_000079C0.first = NULL;
    D_000079C0.last = &D_000079C0.first;
    return 0;
}
#endif

void func_00006F80(void) {
    SceNetAdhocGameMode *gm;

    while ((gm = D_000079C0.first) != NULL) {
        if (gm->next != NULL)
            gm->next->prev = gm->prev;
        else
            D_000079C0.last = gm->prev;
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
    if (D_00007400 == 0)
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
    if (D_00007400 != 0) {
        ret = 0x8041071C;
        if (D_000073F0 >= 0)
            ret = func_00006BB8(D_000073F0);
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
    if (D_00007400 == 0)
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

    for (gm = D_000079C0.first; gm != NULL; gm = gm->next) {
        if (gm->id == id)
            break;
    }
    if (gm == NULL)
        return 0x8041071C;
    if (gm->next != NULL)
        gm->next->prev = gm->prev;
    else
        D_000079C0.last = gm->prev;
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
    if (D_00007400 == 0)
        goto end;
    ret = 0x8041071B;
    if (sceWlanDevIsGameMode() == 0)
        goto end;
    for (gm = D_000079C0.first; gm != NULL; gm = gm->next) {
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
