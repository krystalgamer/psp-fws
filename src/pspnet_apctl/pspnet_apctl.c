/* cflags[152]: -O2 -frename-registers */
/* cflags[151]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100,102,103]: -O2 -frename-registers */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

#if FW_VERSION < 250
s32 sceNetApctlInit(s32 stackSize, s32 initPriority) {
    s32 ret;

    if (D_00008220 > 0) {
        ret = 0x80410A01;
    } else {
        ret = func_00000B68(stackSize, initPriority);
        if (ret >= 0) {
            D_00008220 = 1;
            return 0;
        }
    }
    func_00000CB0();
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlInit);
#endif

#if FW_VERSION < 250
s32 sceNetApctlTerm(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    if (D_00008220 != 0) {
        temp_v0 = func_00000CB0();
        if (temp_v0 >= 0) {
            D_00008220 = 0;
        }
        var_v1 = temp_v0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000000B0);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000000D8);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlTerm);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlAddHandler);
#endif

#if FW_VERSION == 150
s32 sceNetApctlAddHandler(void *arg0, void *arg1) {
    void *sp0;
    s32 var_v0;

    var_v0 = func_00000D60(arg0, arg1, &sp0, 0);
    if (var_v0 >= 0) {
        var_v0 = sp0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
s32 sceNetApctlAddHandler(void *handler, void *arg) {
    s32 id;
    s32 ret;

    ret = func_00000D54(handler, arg, &id);
    if (ret >= 0) {
        ret = id;
    }
    return ret;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
s32 sceNetApctlAddHandler(void *arg0, void *arg1) {
    void *sp0;
    s32 temp_v0;

    temp_v0 = func_00000D60(arg0, arg1, &sp0, 0);
    return (temp_v0 >= 0) ? sp0 : temp_v0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDelHandler);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 sceNetApctlDelHandler(s32 arg0) {
    return func_00000F18(arg0, 0);
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlConnect);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDisconnect);
#endif

#if FW_VERSION < 150
s32 sceNetApctlDelHandler(s32 id) {
    return func_00000E28(id);
}
#endif

#if FW_VERSION < 250
s32 sceNetApctlConnect(s32 connIndex) {
    return func_00002204(connIndex);
}

s32 sceNetApctlDisconnect(void) {
    return func_00000FD0();
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000028C);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlScan);
#endif

#if FW_VERSION < 250
s32 sceNetApctlScan(void) {
    return func_00000FF8();
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlScanSSID);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000394);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetBSSDescIDList);
#endif

#if FW_VERSION < 250
s32 sceNetApctlGetBSSDescIDList(u32 *buflen, void *buf) {
    return func_00001038(buflen, buf);
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000044C);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetBSSDescEntry);
#endif

#if FW_VERSION < 250
s32 sceNetApctlGetBSSDescEntry(s32 index, s32 code, void *info) {
    return func_00002388(index, code, info);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000004E4);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetInfo);
#else
s32 sceNetApctlGetInfo(s32 code, void *info) {
    return func_00001098(code, info);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000001B8);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000001E0);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000001FC);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000218);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000234);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetState);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 250)
s32 sceNetApctlGetState(s32 *state) {
    return func_000010EC(state);
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlAddInternalHandler);
#endif

#if FW_VERSION == 150
s32 sceNetApctlAddInternalHandler(void *arg0, void *arg1) {
    void *sp0;
    s32 var_v0;

    var_v0 = func_00000D60(arg0, arg1, &sp0, 1);
    if (var_v0 >= 0) {
        var_v0 = sp0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
s32 sceNetApctlAddInternalHandler(void *arg0, void *arg1) {
    void *sp0;
    s32 temp_v0;

    temp_v0 = func_00000D60(arg0, arg1, &sp0, 1);
    return (temp_v0 >= 0) ? sp0 : temp_v0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDelInternalHandler);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 sceNetApctlDelInternalHandler(s32 arg0) {
    return func_00000F18(arg0, 1);
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlScanUser);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 sceNetApctlScanUser(void) {
    return func_00000FF8();
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetBSSDescIDListUser);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 sceNetApctlGetBSSDescIDListUser(u32 *buflen, void *buf) {
    return func_00001038(buflen, buf);
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlGetBSSDescEntryUser);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 sceNetApctlGetBSSDescEntryUser(s32 index, s32 code, void *info) {
    return func_00002388(index, code, info);
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlAddInternal03Handler);

INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctlDelInternal03Handler);
#endif

#if (FW_VERSION >= 260 && FW_VERSION < 282) || FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_apctl", sceNetApctl_lib_C519EDCD);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000964);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A1C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000009BC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A68);
#endif

#if FW_VERSION == 282
s32 sceNetApctl_lib_C519EDCD(s32 arg0) {
    s32 var_v1;

    var_v1 = 0x80410005;
    if (sceKernelCheckThreadStack() >= 0x13F0) {
        var_v1 = func_00002514(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION < 150
s32 func_00000964(SceNetApctlCtx *ctx, u32 *bits) {
    s32 ret;
    s32 i;

    if (bits != NULL) {
        *bits = 0;
    }
    for (i = 0; i < 5; i++) {
        ret = sceWlanDevAttach();
        if (ret == 0 || ret == 0x80410D0F) {
            ret = 0;
            break;
        }
        if (ret < 0 && ret != 0x80410D0E) {
            goto end;
        }
        ret = sceKernelPollEventFlag(ctx->evf, 2, 0x11, bits);
        if (ret == 0 && (*bits & 2)) {
            goto end;
        }
        sceKernelDelayThread(1000000);
    }
    if (i == 5) {
        ret = 0x80410A0B;
    }
end:
    return ret;
}
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 260) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000964);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000002BC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000038C);
#endif

#if FW_VERSION < 250
s32 func_00000C38(SceNetApctlCtx *ctx, s32 index, s32 code, union SceNetApctlBSSDescEntry *info) {
    SceNetApctlScanEntry *e;
    SceNetApctlBssDesc *d;
    s32 i;
    s32 ret;

    ret = 0x80410A82;
    if ((u32)index >= 20) {
        goto end;
    }
    e = (SceNetApctlScanEntry *)ctx->scanBuf;
    for (i = 1; i < index; i++) {
        e = e->next;
    }
    d = &e->desc;
    ret = 0x80410A02;
    switch (code) {
    case 0:
        __builtin_memcpy(info, d, 6);
        break;
    case 1: {
        u32 *src = (u32 *)d->ssid;
        __builtin_memcpy(info, src, 33);
        break;
    }
    case 2:
        info->ssidlen = d->ssidLen;
        break;
    case 3:
        info->channel = d->channel;
        break;
    case 4:
        info->rssi = d->rssi;
        break;
    case 5:
        if (d->capability & 0x10) {
            info->auth_proto = 1;
        } else {
            info->auth_proto = 0;
        }
        break;
    default:
        goto end;
    }
    ret = 0;
end:
    return ret;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000C38);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D98);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D54);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000010A8);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000014A4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001550);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_0000050C);
#endif

#if FW_VERSION < 150
s32 func_00000788(SceNetApctlCtx *ctx) {
    SceNetApctlNetParam p;
    s32 ret;

    ret = sceUtilityGetNetParam(ctx->connIndex, 0, &p);
    if (ret < 0) {
        goto end;
    }
    func_000077F8(ctx->conf.name, p.asString);
    ret = sceUtilityGetNetParam(ctx->connIndex, 1, &p);
    if (ret < 0) {
        goto end;
    }
    func_000077F8(ctx->conf.ssid, p.asString);
    ret = sceUtilityGetNetParam(ctx->connIndex, 2, &p);
    if (ret < 0) {
        goto end;
    }
    ctx->conf.secure = p.asUint;
    if (p.asUint == 1 || p.asUint == 2) {
        ret = sceUtilityGetNetParam(ctx->connIndex, 3, &p);
        if (ret < 0) {
            goto end;
        }
        __builtin_memcpy(&ctx->conf.wepKey, &p, 13);
    }
    ret = sceUtilityGetSystemParamInt(3, &ctx->conf.powerSave);
    if (ret < 0) {
        goto end;
    }
    ret = sceUtilityGetNetParam(ctx->connIndex, 4, &p);
    if (ret < 0) {
        goto end;
    }
    ctx->conf.ipType = p.asUint;
    switch (p.asUint) {
    case 0:
        break;
    case 1:
        ret = sceUtilityGetNetParam(ctx->connIndex, 5, &p);
        if (ret < 0) {
            goto end;
        }
        func_000077F8(ctx->conf.addr.s.ip, p.asString);
        ret = sceUtilityGetNetParam(ctx->connIndex, 6, &p);
        if (ret < 0) {
            goto end;
        }
        func_000077F8(ctx->conf.addr.s.netmask, p.asString);
        ret = sceUtilityGetNetParam(ctx->connIndex, 7, &p);
        if (ret < 0) {
            goto end;
        }
        func_000077F8(ctx->conf.addr.s.route, p.asString);
        break;
    case 2:
        ret = sceUtilityGetNetParam(ctx->connIndex, 11, &p);
        if (ret < 0) {
            goto end;
        }
        func_000077F8(ctx->conf.addr.p.user, p.asString);
        ret = sceUtilityGetNetParam(ctx->connIndex, 12, &p);
        if (ret < 0) {
            goto end;
        }
        func_000077F8(ctx->conf.addr.p.pass, p.asString);
        break;
    }
    ret = sceUtilityGetNetParam(ctx->connIndex, 8, &p);
    if (ret < 0) {
        goto end;
    }
    ctx->conf.manualDns = p.asUint;
    ret = sceUtilityGetNetParam(ctx->connIndex, 9, &p);
    if (ret < 0) {
        goto end;
    }
    func_000077F8(ctx->conf.primaryDns, p.asString);
    ret = sceUtilityGetNetParam(ctx->connIndex, 10, &p);
    if (ret < 0) {
        goto end;
    }
    func_000077F8(ctx->conf.secondaryDns, p.asString);
    ret = sceUtilityGetNetParam(ctx->connIndex, 13, &p);
    if (ret < 0) {
        goto end;
    }
    ctx->conf.useProxy = p.asUint;
    if (p.asUint == 1) {
        ret = sceUtilityGetNetParam(ctx->connIndex, 14, &p);
        if (ret < 0) {
            goto end;
        }
        func_000077F8(ctx->conf.proxyServer, p.asString);
        ret = sceUtilityGetNetParam(ctx->connIndex, 15, &p);
        if (ret < 0) {
            goto end;
        }
        ctx->conf.proxyPort = p.asUint;
    }
end:
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000788);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A30);
#endif

#if FW_VERSION < 250
s32 func_00000A30(void *arg0, s32 arg1) {
    if (arg1 == 6) {
        if (M2C_FIELD(arg0, s32 *, 0x6C8) > 0) {
            func_00002480((s32) arg0);
        }
    }
    sceWlanDevDetach();
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000002BC);
#endif

#if FW_VERSION < 150
s32 func_00000A74(SceNetApctlCtx *ctx) {
    s32 keyLen = 0;
    void *key = NULL;
    s32 ret;

    ret = sceNetConfigUpInterface(ctx);
    if (ret >= 0) {
        if (ctx->conf.secure == 1) {
            keyLen = 5;
            key = &ctx->conf.wepKey;
        } else if (ctx->conf.secure == 2) {
            keyLen = 13;
            key = &ctx->conf.wepKey;
        }
        {
            s32 ps = ctx->conf.powerSave == 1;
            ret = sceNetConfig80211ScanJoinRequest(ctx, ctx->conf.ssid, func_00007830(ctx->conf.ssid), key, keyLen, ps, 1);
        }
    }
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A74);
#endif

#if FW_VERSION < 250
s32 func_00000B24(SceNetApctlCtx *ctx) {
    s32 buf[4];
    s32 ret;

    buf[0] = 0;
    ret = sceNetConfig80211LeaveRequest(ctx, buf);
    sceNetConfigDownInterface(ctx);
    return ret;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000B24);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000016AC);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001914);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000019DC);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001B44);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001C3C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000021E0);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000010EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000020DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00002024);
#endif

#if FW_VERSION == 100
s32 func_00000B68(s32 stackSize, s32 prio) {
    SceNetApctlCtx *ctx = &D_00011DD4;
    s32 ret;

    ret = func_00001BB0(ctx);
    if (ret < 0) {
        goto end;
    }
    D_00008B1C[0].id = 0;
    D_00008B1C[0].func = NULL;
    D_00008B1C[0].arg = NULL;
    D_00008B1C[1].id = 0;
    D_00008B1C[1].func = NULL;
    D_00008B1C[1].arg = NULL;
    func_00007504(ctx, 0, sizeof(SceNetApctlCtx));
    ctx->sema = -1;
    ctx->evf = -1;
    ctx->idle = 1;
    ctx->thid = -1;
    ctx->priority = prio;
    func_0000774C(ctx->ifname, "wlan", 0x10);
    ret = sceKernelCreateSema("SceNetApctl", 0, 1, 1, NULL);
    if (ret < 0) {
        goto end;
    }
    ctx->sema = ret;
    ret = sceKernelCreateEventFlag("SceNetApctl", 0, 0, NULL);
    if (ret < 0) {
        goto end;
    }
    ctx->evf = ret;
    ret = sceKernelCreateThread("SceNetApctl", func_00001710, ctx->priority, stackSize, 0, NULL);
    if (ret < 0) {
        goto end;
    }
    ctx->thid = ret;
    ret = sceKernelStartThread(ret, 4, &ctx);
end:
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000B68);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D60);
#endif

#if FW_VERSION < 150
s32 func_00000CB0(void) {
    SceNetApctlCtx *ctx = &D_00011DD4;

    if (ctx->idle == 0) {
        return 0x80410A04;
    }
    if (ctx->thid >= 0) {
        sceKernelTerminateThread(ctx->thid);
        sceKernelDeleteThread(ctx->thid);
        sceNetFreeThreadinfo(ctx->thid);
        ctx->thid = -1;
    }
    if (ctx->evf >= 0) {
        sceKernelDeleteEventFlag(ctx->evf);
        ctx->evf = -1;
    }
    if (ctx->sema >= 0) {
        sceKernelDeleteSema(ctx->sema);
        ctx->sema = -1;
    }
    func_00001BC0();
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000CB0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000F00);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000EC8);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000E28);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00002204);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000FD0);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000FF8);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001038);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00002388);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001098);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000F18);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000FE8);
#endif

#if FW_VERSION == 100
s32 func_00000D54(void *func, void *arg, s32 *id) {
    SceNetApctlCtx *ctx = &D_00011DD4;
    s32 ret = 0;
    s32 i;

    sceKernelWaitSema(ctx->sema, 1, NULL);
    for (i = 0; i < 2; i++) {
        if (D_00008B1C[i].func == NULL) {
            break;
        }
    }
    if (i == 2) {
        ret = 0x80410A81;
    } else {
        D_00008B1C[i].func = func;
        D_00008B1C[i].arg = arg;
        D_00008B1C[i].id = i;
        *id = i;
    }
    sceKernelSignalSema(ctx->sema, 1);
    return ret;
}

s32 func_00000E28(s32 id) {
    SceNetApctlCtx *ctx = &D_00011DD4;
    s32 ret;

    sceKernelWaitSema(ctx->sema, 1, NULL);
    ret = 0;
    if ((u32)id >= 2) {
        ret = 0x80410A82;
        goto end;
    }
    if (D_00008B1C[id].func == NULL) {
        ret = 0x80410A09;
        goto end;
    }
    D_00008B1C[id].func = NULL;
end:
    sceKernelSignalSema(ctx->sema, 1);
    return ret;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000EC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000A68);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000B54);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010650);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010654);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010664);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010678);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010688);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106A0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106AC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106BC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106CC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106E0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000106F8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010710);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010720);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010730);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_0001073C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000107A4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000107B4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000107EC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010808);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010820);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010824);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010828);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010880);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010898);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000108A0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000108C0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_000108F8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_0001095C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_00010968);

INCLUDE_RODATA("nonmatchings/pspnet_apctl", D_0001096C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000C38);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000D98);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00000FE4);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_000013E0);

INCLUDE_ASM("nonmatchings/pspnet_apctl", func_00001580);
#endif
