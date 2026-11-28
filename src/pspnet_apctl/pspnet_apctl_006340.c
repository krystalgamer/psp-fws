/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* cflags[250,260]: -O2 -frename-registers */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -Os -frename-registers -mext */
/* cflags[100,102,103,150,151,152]: -O2 -frename-registers */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

#if FW_VERSION < 151 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006340);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006414);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005F58);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006088);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006168);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000045B8);

s32 func_00004704(s32 sock, SceNetInAddrPacked *dst, void *buf) {
    SceNetSockaddrIn sin;
    SceNetMsghdr msg;
    SceNetIovec iov;

    __builtin_memset(&sin, 0, sizeof(sin));
    sin.sin_family = 2;
    sin.sin_addr = dst->s_addr;
    sin.sin_port = __builtin_allegrex_wsbh(67);
    iov.iov_base = buf;
    iov.iov_len = 0x224;
    msg.msg_namelen = sizeof(sin);
    msg.msg_iov = &iov;
    msg.msg_iovlen = 1;
    msg.msg_control = NULL;
    msg.msg_controllen = 0;
    msg.msg_flags = 0;
    msg.msg_name = &sin;
    if (sceNetInetSendmsg(sock, &msg, 0) < 0) {
        sceNetInetClose(sock);
        return 0x80410583;
    }
    return 0;
}

s32 func_000047D8(SceNetDhcpCtx *dc) {
    s32 now;

    now = sceNetGetSystemClockSec();
    if (now == -1) {
        return 0x80410586;
    }
    *(u16 *)(dc->tx.bootp + 8) = __builtin_allegrex_wsbh((u16)(now - dc->startTime));
    dc->tx.udp->sum = 0;
    dc->tx.udp->sum = func_00005E00(&dc->pseudo, dc->tx.udp, (u16)__builtin_allegrex_wsbh(dc->pseudo.len));
    sceNetBpfWrite(dc->bpf, dc->pkt, dc->pktLen);
    return 0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000046F4);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000487C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000646C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000659C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000667C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006708);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006870);

#if FW_VERSION < 250
s32 func_00004AEC(void *pkt, s32 len, SceNetDhcpLease *l) {
    SceNetBootp *bp = pkt;
    u32 overload;
    s32 ret;

    __builtin_memset(l, 0, 9);
    overload = 0;
    ret = func_00007358(bp, len, l, 0, &overload);
    if (ret < 0) {
        return ret;
    }
    func_00007504(l->file, 0, sizeof(l->file));
    if (overload & 1) {
        ret = func_00007358(bp, len, l, 1, NULL);
        if (ret < 0) {
            return ret;
        }
    } else {
        func_0000774C(l->file, bp->file, func_00007830(bp->file) + 1);
    }
    func_00007504(l->sname, 0, sizeof(l->sname));
    if (overload & 2) {
        ret = func_00007358(bp, len, l, 2, NULL);
        if (ret < 0) {
            return ret;
        }
    } else {
        func_0000774C(l->sname, bp->sname, func_00007830(bp->sname) + 1);
    }
    l->ciaddr.s_addr = bp->ciaddr;
    l->yiaddr.s_addr = bp->yiaddr;
    l->siaddr.s_addr = bp->siaddr;
    l->giaddr.s_addr = bp->giaddr;
    if (!(l->flags & 0x20)) {
        l->flags |= 0x20;
        l->unk3E0 = l->unk3DC / 2;
    }
    l->unk3E0 = (l->unk3E0 * 3 + 9) / 4 + (u32)sceNetRand() % (u32)((l->unk3E0 + 3) / 4);
    if (!(l->flags & 0x10)) {
        l->flags |= 0x10;
        l->unk3E4 = l->unk3DC / 8 * 7;
    }
    if (l->unk3E0 > l->unk3E4) {
        l->unk3E0 = l->unk3E4 * 3 / 4;
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004AEC);
#endif

#if FW_VERSION < 282
s32 func_00006BD8(s8 tag, u8 len) {
    switch (tag) {
    case 53:
        if (len != 1) {
            return -1;
        }
        break;
    case 1:
    case 28:
    case 51:
    case 54:
    case 58:
    case 59:
        if (len != 4) {
            return -1;
        }
        break;
    case 3:
    case 6:
        if (len & 3) {
            return -1;
        }
        break;
    case 12:
    case 15:
    case 56:
        if (len == 0) {
            return -1;
        }
        break;
    }
    return 0;
}
#endif

#if FW_VERSION < 151
s32 func_00006C50(s8 *opt, SceNetDhcpLease *l) {
    s32 ret = 0;

    switch (opt[0]) {
    case 53:
        l->msgType = opt[2];
        break;
    case 1:
    case 28:
    case 54:
        ret = func_00004FC4(opt, l);
        break;
    case 3:
    case 6:
        ret = func_00005064(opt, l);
        break;
    case 12:
    case 15:
    case 56:
        ret = func_00004EBC(opt, l);
        break;
    case 51:
    case 58:
    case 59:
        ret = func_00006F34(opt, l);
        break;
    }
    return ret;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
s32 func_00006C50(s8 *opt, SceNetDhcpLease *l) {
    s32 ret = 0;

    switch (opt[0]) {
    case 53:
        l->msgType = opt[2];
        break;
    case 1:
    case 28:
    case 54:
        ret = func_00004DE0(opt, l);
        break;
    case 3:
    case 6:
        ret = func_00004E50(opt, l);
        break;
    case 12:
    case 15:
    case 56:
        ret = func_00004CDC(opt, l);
        break;
    case 51:
    case 58:
    case 59:
        ret = func_00006F34(opt, l);
        break;
    }
    return ret;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00006C50(s8 *opt, SceNetDhcpLease *l) {
    s32 ret = 0;

    switch (opt[0]) {
    case 53:
        l->msgType = opt[2];
        break;
    case 1:
    case 28:
    case 54:
        ret = func_000068D4(opt, l);
        break;
    case 3:
    case 6:
        ret = func_00006948(opt, l);
        break;
    case 12:
    case 15:
    case 56:
        ret = func_00004CDC(opt, l);
        break;
    case 51:
    case 58:
    case 59:
        ret = func_00006F34(opt, l);
        break;
    }
    return ret;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004CDC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000068D4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006948);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004DE0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004E50);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00004EBC);

s32 func_00004FC4(s8 *opt, SceNetDhcpLease *l) {
    switch (opt[0]) {
    case 1:
        __builtin_memcpy(&l->netmask, opt + 2, 4);
        break;
    case 28:
        __builtin_memcpy(&l->broadcast, opt + 2, 4);
        break;
    case 54:
        __builtin_memcpy(&l->unk3E8, opt + 2, 4);
        break;
    }
    return 0;
}

s32 func_00005064(s8 *opt, SceNetDhcpLease *l) {
    s32 n = (u32)opt[1] >> 2;

    switch (opt[0]) {
    case 3:
        l->router = 0;
        __builtin_memcpy(&l->router, opt + 2, 4);
        break;
    case 6:
        l->dns[0] = 0;
        l->dns[1] = 0;
        __builtin_memcpy(&l->dns[0], opt + 2, 4);
        if (n >= 2) {
            __builtin_memcpy(&l->dns[1], opt + 6, 4);
        }
        break;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000693C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006BD8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006C50);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006CE0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006DE4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006E58);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006F34);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006FC8);

#if FW_VERSION < 282
void func_0000708C(const u8 *src, u8 *dst, s32 n) {
    s32 i;

    for (i = 0; i < n; i++) {
        if (src[i] != 0) {
            *dst++ = src[i];
        }
    }
    *dst = 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000708C);
#endif

#if FW_VERSION < 250
void func_00005290(void *arg0) {
    if (arg0 != NULL) {
        func_00007504(arg0, 0, 0x404);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_00005290(void *arg0) {
    if (arg0 != NULL) {
        sceNetMemset(arg0, 0, 0x404);
    }
}
#endif

#if FW_VERSION >= 282
void func_000070C0(s32 *arg0) {
    if (arg0 != NULL) {
        sceNetMemset(arg0, 0, 0x404);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000070E8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007244);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007358);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005434);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000073F8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000077D8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000588C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005678);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00005B2C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000060AC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000643C);
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000074A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000078F8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007CD0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007FF8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008300);

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000080F0);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000080AC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000080D0);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010DA4);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000080C0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000834C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000086F8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010888);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006A14);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00006D34);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000070FC);
#endif

#if FW_VERSION < 282
s32 func_00007324(void) {
    if (D_00013F20 == NULL) {
        return 0x8041030B;
    }
    return sceKernelSignalSema(D_00013F20->sema, 1);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000085A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008834);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008BE0);

s32 func_00008E00(void) {
    s32 var_v0;

    var_v0 = 0x8041030B;
    if (D_00013F20 != NULL) {
        var_v0 = sceKernelSignalSema(D_00013F20->sema, 1);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
s32 func_00008E34(void) {
    if (D_00013F20 == NULL) {
        return 0x8041030B;
    }
    sceKernelWaitThreadEnd(D_00013F20->thid, NULL);
    sceNetFreeThreadinfo(D_00013F20->thid);
    sceKernelDeleteThread(D_00013F20->thid);
    sceKernelDeleteSema(D_00013F20->sema);
    sceNetInetClose(D_00013F20->sock);
    _sce_pspnet_pppoe_term();
    D_00013F20 = NULL;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008E34);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000089C8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008BB0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008CC0);

s32 func_00008E44(void) {
    sceNetBpfClose();
    return 0;
}

s32 func_00008E64(void) {
    s32 temp_v0;

    temp_v0 = sceNetBpfRead();
    return (temp_v0 < 0) ? 0x80410E87 : temp_v0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008E90);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108A8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108AC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108B0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108B4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108B8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108BC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108C0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108C4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108C8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108CC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108F0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108F4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108F8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000108FC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010900);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010904);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010908);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_0001090C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010910);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010930);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010934);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010938);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_0001093C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010940);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010944);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010948);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_0001094C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010950);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010954);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010958);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_0001095C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010960);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010964);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000901C);

s32 func_000090A4(s32 arg0) {
    D_00015E2C = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000090B4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009334);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 *func_0000936C(void *arg0) {
    s32 *temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 **, 0x2374);
    if (M2C_FIELD(arg0, s32 *, 0x2378) == temp_a1) {
        M2C_FIELD(arg0, s32 *, 0x2378) = 0;
    }
    if (temp_a1 != NULL) {
        M2C_FIELD(arg0, s32 **, 0x2374) = (s32 *) *temp_a1;
    }
    M2C_FIELD(arg0, s32 *, 0x2390) = 0;
    return temp_a1;
}
#endif

#if FW_VERSION == 250
M2C_UNK *func_0000936C(void *arg0) {
    M2C_UNK *temp_a1;

    temp_a1 = M2C_FIELD(arg0, M2C_UNK **, 0x2374);
    if (M2C_FIELD(arg0, s32 *, 0x2378) == temp_a1) {
        M2C_FIELD(arg0, s32 *, 0x2378) = 0;
    }
    if (temp_a1 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x2374) = (M2C_UNK *) *temp_a1;
    }
    M2C_FIELD(arg0, s32 *, 0x2390) = 0;
    return temp_a1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_0000939C(s32 arg0) {
    func_000093C0(arg0);
    return 0xF4240;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000093C0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009428);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000094A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009518);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009564);

s32 func_00009708(void *arg0) {
    sceNetMemset(arg0 + 0x24F4, 0, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x2508) = 5;
    M2C_FIELD(arg0, s32 *, 0x250C) = 5;
    M2C_FIELD(arg0, s32 *, 0x2510) = 3;
    return 0;
}

s32 func_00009750(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2518) = 0;
    return 0;
}

s32 func_0000975C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2518) == 1;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000976C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000097D0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_000097FC(void *arg0) {
    void *temp_a4;
    void *temp_a6;

    temp_a4 = arg0 + 0x24F4;
    temp_a6 = arg0 + 0x24A0;
    M2C_FIELD(temp_a6, s32 *, 0xC) = (s32) M2C_FIELD(temp_a4, s32 *, 0x18);
    M2C_FIELD(temp_a4, s32 *, 0xC) = (s32) (M2C_FIELD(temp_a4, s32 *, 0xC) + 1);
    M2C_FIELD(temp_a6, s32 *, 0x14) = 0;
    func_00008BB0(M2C_FIELD(arg0, s32 *, 0x18), (s32) (arg0 + 0x1C), (s32) (arg0 + 0x10), (s32) (arg0 + 0x2398), 1, 1, 1, 0);
    return 0;
}
#endif

#if FW_VERSION == 250
s32 func_000097FC(void *arg0) {
    void *temp_a4;
    void *temp_a6;

    temp_a4 = arg0 + 0x24F4;
    temp_a6 = arg0 + 0x24A0;
    M2C_FIELD(temp_a6, s32 *, 0xC) = (s32) M2C_FIELD(temp_a4, s32 *, 0x18);
    M2C_FIELD(temp_a4, s32 *, 0xC) = (s32) (M2C_FIELD(temp_a4, s32 *, 0xC) + 1);
    M2C_FIELD(temp_a6, s32 *, 0x14) = 0;
    func_00008BB0(M2C_FIELD(arg0, s32 *, 0x18), arg0 + 0x1C, arg0 + 0x10, arg0 + 0x2398, 1, 1, 1, 0);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009858);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009884);

s32 func_0000989C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24DC) = 1;
    return 0;
}

s32 func_000098AC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24F4) = 1;
    return 0;
}

s32 func_000098BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24DC) = 1;
    M2C_FIELD(arg0, s32 *, 0x24FC) = 1;
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_000098D0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x24FC) = 0;
    func_00008BB0(M2C_FIELD(arg0, s32 *, 0x18), (s32) (arg0 + 0x1C), (s32) (arg0 + 0x10), (s32) (arg0 + 0x2398), 1, 1, 2, 0);
    return 0;
}
#endif

#if FW_VERSION == 250
s32 func_000098D0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24DC) = 0;
    M2C_FIELD(arg0, s32 *, 0x24FC) = 0;
    func_00008BB0(M2C_FIELD(arg0, s32 *, 0x18), arg0 + 0x1C, arg0 + 0x10, arg0 + 0x2398, 1, 1, 2, 0);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009914);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009964);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000099A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009AC8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009B9C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009C1C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009CC0);

s32 func_00009D0C(void) {
    return 0;
}

s32 func_00009D14(void) {
    return 0;
}

s32 func_00009D1C(void *arg0) {
    sceNetMemset(arg0 + 0x2520, 0, 0xBD8);
    M2C_FIELD(arg0, s32 *, 0x30EC) = 5;
    return 0;
}

s32 func_00009D58(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30F4) = 0;
    return 0;
}

s32 func_00009D64(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30F4) == 1;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009D74);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_00009E70(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x2520;
    sceNetMemcpy((s32) (arg0 + 0x2E), (s32) (arg0 + 0x2B0C), M2C_FIELD(temp_s1, s32 *, 0xBC8));
    func_00008BB0(M2C_FIELD(arg0, s32 *, 0x18), (s32) (arg0 + 0x1C), (s32) (arg0 + 0x10), (s32) (arg0 + 0x2398), 1, 1, 0, (s32) (u16) M2C_FIELD(temp_s1, s32 *, 0xBC8));
    M2C_FIELD(temp_s1, s32 *, 8) = 0;
    return 0;
}
#endif

#if FW_VERSION == 250
s32 func_00009E70(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x2520;
    sceNetMemcpy(arg0 + 0x2E, arg0 + 0x2B0C, M2C_FIELD(temp_s1, s32 *, 0xBC8));
    func_00008BB0(M2C_FIELD(arg0, s32 *, 0x18), (s32) (arg0 + 0x1C), (s32) (arg0 + 0x10), (s32) (arg0 + 0x2398), 1, 1, 0, (s32) (u16) M2C_FIELD(temp_s1, s32 *, 0xBC8));
    M2C_FIELD(temp_s1, s32 *, 8) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009EDC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009F34);

s32 func_00009F64(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24E8) = 1;
    return 0;
}

s32 func_00009F74(s32 arg0) {
    void *temp_v1;

    temp_v1 = arg0 + 0x24A0;
    M2C_FIELD(temp_v1, s32 *, 0x14) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x40) = 0;
    return 0;
}

s32 func_00009F88(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24D4) = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009F94);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009FAC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A0AC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A0EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A12C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A16C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A268);

s32 func_0000A324(void *arg0) {
    sceNetMemset(arg0 + 0x30F8, 0, 0x64C);
    M2C_FIELD(arg0, s32 *, 0x3108) = 0xA;
    func_0000B1C0((s32) arg0);
    return 0;
}

s32 func_0000A368(void) {
    return 0;
}

s32 func_0000A370(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A378);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A41C);

s32 func_0000A478(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A480);

s32 func_0000A4C0(void) {
    return 0;
}

s32 func_0000A4C8(s32 arg0) {
    func_0000AE44(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A4E8);

s32 func_0000A690(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2520) = 1;
    M2C_FIELD(arg0, s32 *, 0x2524) = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A6A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A738);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A78C);

s32 func_0000A7D8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24B8) = 1;
    return 0;
}

s32 func_0000A7E8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24B0) = 1;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A7F8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A848);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A888);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000A99C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ABDC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AC4C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ACF4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AD34);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AD74);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ADB4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ADF4);

s32 func_0000AE34(void) {
    return 0;
}

s32 func_0000AE3C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AE44);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000AF80);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B04C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B0D4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B1C0);

void func_0000B23C(void) {
    sceNetMemset(&D_000170A8, 0, 0x70);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B264);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B2C0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B318);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B490);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B608);

void func_0000B708(s32 arg0) {
    func_0000B8C4(arg0);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000BC30);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
void func_0000B724(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0000B9F8(arg0, arg1, arg2, arg3, arg4);
}

s32 func_0000B740(void) {
    func_0000BC54();
    return 0;
}

s32 func_0000B760(void) {
    if (D_00017128 == 0) {

    } else {
        sceKernelSetEventFlag(D_00017128, 8U);
    }
    return 0;
}

s32 func_0000B79C(void) {
    if (D_00017128 == 0) {

    } else {
        sceKernelSetEventFlag(D_00017128, 0x10U);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B7D8);

void func_0000B894(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00008BB0(arg0, arg1, arg2, arg3, 0, 1, arg4 & 0xFF, arg5 & 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B8C4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000B9F8);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F20);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F24);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F28);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F2C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F30);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F34);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109D8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109DC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109E0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109E4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109E8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010ED4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F64);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F74);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_000109EC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010A7C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010A8C_v250);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000BC54);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000BD1C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000BEA8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C068);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C10C);

void func_0000C20C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0000B490(arg2, arg3, arg0, arg1, arg4);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C23C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C26C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C304);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C490);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000C780);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000CB24);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000CC58);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000CCA0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000CEB8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D014);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D1DC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D3F4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D550);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D718);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D888);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000D9D0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DB70);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DD10);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DD7C);

void func_0000DDDC(void) {
    func_0000B7D8(2, 0);
}

void func_0000DDFC(void) {
    func_0000B7D8(3, 0);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DE1C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DE60);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DEB8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DF10);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000DF78);

s32 func_0000DF8C(void) {
    return 0;
}

s32 func_0000DF94(void) {
    return 0;
}

s32 func_0000DF9C(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {

    } else {
        func_0000CC58((s32) arg0);
    }
    M2C_FIELD(arg0, s32 *, 0) = 2;
    return 0;
}

s32 func_0000DFE0(s32 *arg0) {
    func_0000B7D8(4, 0x80411081);
    *arg0 = 0;
    return -1;
}

s32 func_0000E018(s32 *arg0) {
    *arg0 = 0;
    return -1;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E024);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010FFC);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F9C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010AB4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E1E4);

s32 func_0000E3A4(void *arg0) {
    sceKernelSetEventFlag(M2C_FIELD(arg0, u32 *, 0x10), 4U);
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E3C8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E730);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E7B8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E7C4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F140);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F188);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F1DC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F22C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F510);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000101B8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00010204);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010AE8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010B08);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010F08);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00011308);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00011408);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00011508);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00011608);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000E7C4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000EC30);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000EC78);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ECCC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000ED1C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000F510);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000FCA8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000FCF4);
#endif

#if FW_VERSION < 250
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000073E4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_0000741C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000070DC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007490);
#endif

#if FW_VERSION < 250
u8 *func_000074D0(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

void *func_00007504(void *dst, s32 c, s32 n) {
    u8 *p;

    if (dst != NULL) {
        u8 v = c;
        p = dst;
        while (n > 0) {
            n--;
            *p++ = v;
        }
    }
    return dst;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007184);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00007530);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00008EB0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009098);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_000091A8);

s32 func_00009328(void) {
    sceNetBpfClose();
    return 0;
}

s32 func_00009348(void) {
    s32 temp_v0;

    temp_v0 = sceNetBpfRead();
    return (temp_v0 < 0) ? 0x80410E87 : temp_v0;
}

INCLUDE_RODATA("nonmatchings/pspnet_apctl_006340", D_00010DF0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009374);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009500);

s32 func_00009588(s32 arg0) {
    D_00016528 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009598);

INCLUDE_ASM("nonmatchings/pspnet_apctl_006340", func_00009818);
#endif
