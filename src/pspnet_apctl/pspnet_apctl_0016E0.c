/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

#if FW_VERSION >= 282
s32 func_000016E0(struct Unk_func_000016E0_0 *arg0, s32 arg1) {
    if (arg1 == 6) {
        if ((arg0->unk7DC & 0xA) == 2) {
            func_00002480((s32) arg0);
        }
    }
    sceWlanDevDetach();
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000172C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001790);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000017EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001A3C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001B04);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001C6C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001D64);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002110);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000201C);

s32 func_000020CC(s32 *arg0) {
    *arg0 = D_00011DE4;
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000020E0);
#endif

#if FW_VERSION == 100
s32 func_00002204(s32 connIndex) {
    SceNetApctlCtx *ctx = &D_00011DD4;
    s32 ret;
    if (ctx->idle == 0) {
        return 0x80410A80;
    }
    ctx->idle = 0;
    ret = sceUtilityCheckNetParam(connIndex);
    if (ret < 0) {
        goto end;
    }
    ctx->connIndex = connIndex;
    sceKernelSetEventFlag(ctx->evf, 1);
end:
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
s32 func_00002204(s32 connIndex) {
    SceNetApctlCtx *ctx = &D_00011DD4;
    s32 ret;

    if (ctx->idle == 0) {
        return 0x80410A80;
    }
    ctx->idle = 0;
    ret = sceUtilityCheckNetParam(connIndex);
    if (ret < 0) {
        ctx->idle = 1;
        goto end;
    }
    ctx->connIndex = connIndex;
    sceKernelSetEventFlag(ctx->evf, 1);
end:
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002204);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 282)
s32 func_00000FD0(void) {
    sceKernelSetEventFlag(D_00008240, 2U);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000020D8);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 250)
s32 func_00000FF8(void) {
    SceNetApctlCtx *ctx = &D_00011DD4;

    if (ctx->idle == 0) {
        return 0x80410A80;
    }
    ctx->idle = 0;
    sceKernelSetEventFlag(ctx->evf, 4);
    return 0;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 282)
s32 func_00001038(u32 *buflen, void *buf) {
    return func_0000038C(&D_00011DD4, buflen, buf);
}
#endif

#if FW_VERSION >= 282
s32 func_0000228C(void) {
    sceKernelSetEventFlag(D_00011DF0, 2U);
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000022B4);

void func_0000235C(s32 arg0, s32 arg1) {
    func_00000B54((s32) &D_00011DD4, arg0, arg1);
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
s32 func_00002388(s32 index, s32 code, void *info) {
    return func_00000C38(&D_00011DD4, index, code, info);
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000021E0);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 250)
s32 func_00001098(s32 code, void *info) {
    SceNetApctlCtx *ctx = &D_00011DD4;
    s32 ret = 0x80410A05;

    if (ctx->state == 4) {
        ret = func_0000050C(ctx, code, info);
    }
    return ret;
}
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 260)
s32 func_000010EC(s32 *state) {
    *state = D_00008234;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000023BC);

#if FW_VERSION < 103 || (FW_VERSION >= 150 && FW_VERSION < 250)
s32 func_00002480(SceNetApctlCtx *ctx) {
    u32 bits;
    s32 type;
    s32 arg;
    s32 ret;

wait:
    ret = sceKernelWaitEventFlag(ctx->evf, 0x20, APCTL_EVF_MODE, &bits, NULL);
    if (ret < 0) {
        goto end;
    }
    do {
        ret = sceNetConfigGetIfEvent(ctx, &type, &arg);
        if (ret == 0x80410184) {
            goto wait;
        }
        if (ret < 0) {
            goto end;
        }
    } while (type != 8);
    ctx->linkUp = 0;
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002480);
#endif

#if FW_VERSION == 100
s32 func_00001250(SceNetApctlCtx *ctx, u32 *bits) {
    s32 type;
    s32 arg;
    s32 n = 0;
    s32 ret;

    for (;;) {
        ret = sceNetConfigGetIfEvent(ctx, &type, &arg);
        if (ret == 0x80410184) {
            ret = 0;
            break;
        }
        if (ret < 0) {
            break;
        }
        switch (type) {
        case 4:
            n++;
            *bits |= 8;
            ctx->error = 0x80410A06;
            break;
        case 6:
            n++;
            *bits |= 8;
            ctx->error = 0x80410A08;
            break;
        case 7:
            n++;
            *bits |= 8;
            ctx->error = 0x80410A0A;
            ctx->linkUp = 1;
            break;
        case 8:
            ctx->linkUp = 0;
        default:
            *bits &= ~0x20;
            break;
        }
    }
    if (n == 0) {
        *bits &= ~0x20;
    }
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001250);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000251C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001440);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010510);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000025E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000015C4);
#endif

#if FW_VERSION >= 282
s32 func_00002514(s32 arg0) {
    D_000125BC = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002524);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000027A8);
#endif

#if FW_VERSION < 250
s32 func_000028B0(SceNetApctlCtx *ctx, s32 prev, s32 *state, s32 *event) {
    u32 bits;
    s32 ret;

    ret = func_00000964(ctx, &bits);
    if (ret < 0) {
        goto error;
    }
    if (bits & 2) {
        *event = 5;
        goto done;
    }
    ret = sceNetConfigSetIfEventFlag(ctx, ctx->evf, 0x20);
    if (ret < 0) {
        goto error;
    }
    ret = 0x80410A06;
    if (sceWlanGetSwitchState() == 0) {
        goto error;
    }
    ret = func_000002BC(ctx);
    bits = 0;
    func_000023BC(ctx, 0x22, &bits, 0);
    if (bits != 0) {
        if (bits & 2) {
            *event = 5;
        } else {
            *event = 6;
        }
        goto done;
    }
    if (ret < 0) {
        goto error;
    }
    *event = 2;
    goto done;
error:
    *event = 6;
    ctx->error = ret;
done:
    *state = 0;
    ctx->idle = 1;
    func_00000A30(ctx, *event, ctx->error);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000028B0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000280C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002A04);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002B7C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002F60);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000030D4);
#endif

#if FW_VERSION < 250
s32 func_000014B8(SceNetApctlCtx *ctx, s32 prev, s32 *state, s32 *event) {
    u32 bits;
    s32 ret;

    ret = func_00000964(ctx, &bits);
    if (ret < 0) {
        goto error;
    }
    if (bits != 0) {
        goto abort;
    }
    ret = sceNetConfigSetIfEventFlag(ctx, ctx->evf, 0x20);
    if (ret < 0) {
        goto error;
    }
    ret = 0x80410A06;
    if (sceWlanGetSwitchState() == 0) {
        goto error;
    }
    ret = func_00000788(ctx);
    if (ret < 0) {
        goto error;
    }
    bits = 0;
    func_000023BC(ctx, 0x22, &bits, 0);
    if (bits != 0) {
        goto abort;
    }
    ret = func_00000A74(ctx);
    bits = 0;
    func_000023BC(ctx, 0x22, &bits, 0);
    if (bits != 0) {
        func_00000B24(ctx);
        goto abort;
    }
    if (ret < 0) {
        func_00000B24(ctx);
        goto error;
    }
    *state = 3;
    *event = 3;
    goto done;
abort:
    *state = 0;
    if (bits & 2) {
        *event = 5;
    } else {
        *event = 6;
    }
    goto done;
error:
    *state = 0;
    *event = 6;
    ctx->error = ret;
done:
    if (*state == 0) {
        func_00000A30(ctx, *event, ctx->error);
        ctx->idle = 1;
    }
    return 0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000161C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002E2C);
#endif

#if FW_VERSION < 150
s32 func_00001710(SceSize args, void *argp) {
    SceNetApctlCtx *ctx = *(SceNetApctlCtx **)argp;
    s32 prev = 0;
    s32 state;
    s32 event;

    for (;;) {
        D_00008120[ctx->state](ctx, prev, &state, &event);
        prev = ctx->state;
        ctx->state = state;
        ctx->event = event;
        func_00000EC8(ctx, prev);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001710);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000032EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003468);
#endif

#if FW_VERSION < 150
s32 func_00001780(SceNetApctlCtx *ctx, s32 prev, s32 *state, s32 *event) {
    u32 bits;

    ctx->linkUp = 0;
    sceNetConfigSetIfEventFlag(ctx, 0, 0);
    sceKernelClearEventFlag(ctx->evf, ~0x20);
    ctx->error = 0;
    func_00007504(&ctx->conf, 0, sizeof(ctx->conf));
    sceKernelWaitEventFlag(ctx->evf, -1, APCTL_EVF_MODE, &bits, NULL);
    if (bits & 2) {
        *state = 0;
        *event = 5;
        ctx->idle = 1;
    } else if (bits & 4) {
        *state = 1;
        *event = 1;
    } else if (bits & 1) {
        *state = 2;
        *event = 0;
    }
    return 0;
}
#endif

#if FW_VERSION < 250
s32 func_00001858(SceNetApctlCtx *ctx, s32 prev, s32 *state, s32 *event) {
    u32 bits;

    bits = 0;
    func_000023BC(ctx, APCTL_WAIT_GOTIP, &bits, 1);
    if (bits & 2) {
        *event = 5;
    } else if (bits & 8) {
        *event = 6;
    }
    if (ctx->conf.ipType == 1) {
        func_00001D84(ctx);
    } else if (ctx->conf.ipType == 0) {
        func_00001DB8(ctx);
    } else if (ctx->conf.ipType == 2) {
        func_00001DE8(ctx);
    }
    func_00000B24(ctx);
    func_00000A30(ctx, *event, ctx->error);
    *state = 0;
    ctx->idle = 1;
    return 0;
}

s32 func_00001940(SceNetApctlCtx *ctx) {
    s32 ret;

    ret = apctlResetDns();
    if (ret < 0) {
        goto fail;
    }
    {
        SceNetApctlIpParam param;
        u32 bits;

        func_00007504(&param, 0, sizeof(param));
        param.manualDns = ctx->conf.manualDns;
        func_000077F8(param.primaryDns, ctx->conf.primaryDns);
        func_000077F8(param.secondaryDns, ctx->conf.secondaryDns);
        ret = func_000051A0(D_00010A8C, func_00003E70, 0x4000, ctx->priority, 0, &param);
        if (ret < 0) {
            goto fail;
        }
        bits = 0;
        ret = func_000023BC(ctx, APCTL_WAIT_IP, &bits, 1);
        if (bits & 0xA) {
            if (bits & 2) {
                ret = 0x80410A83;
            } else if (bits & 8) {
                ret = ctx->error;
            }
            func_00005634();
            goto fail;
        }
    }
    return 0;
fail:
    apctlResetDns();
    return ret;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001940);
#endif

#if FW_VERSION < 250
s32 func_00001A68(SceNetApctlCtx *ctx) {
    s32 ret;

    ret = apctlResetDns();
    if (ret < 0) {
        goto fail;
    }
    {
        SceNetApctlIpParam param;
        u32 bits;

        func_00007504(&param, 0, sizeof(param));
        param.manualDns = ctx->conf.manualDns;
        func_000077F8(param.primaryDns, ctx->conf.primaryDns);
        func_000077F8(param.secondaryDns, ctx->conf.secondaryDns);
        func_000077F8(param.user, ctx->conf.addr.p.user);
        func_000077F8(param.pass, ctx->conf.addr.p.pass);
        ret = func_00006A14(D_00010A8C, func_00003EF0, 0x4000, ctx->priority, 0, &param);
        if (ret < 0) {
            goto fail;
        }
        bits = 0;
        ret = func_000023BC(ctx, APCTL_WAIT_IP, &bits, 1);
        if (bits & 0xA) {
            if (bits & 2) {
                ret = 0x80410A83;
            } else if (bits & 8) {
                ret = ctx->error;
            }
            func_00007324();
            func_00008E34();
            goto fail;
        }
    }
    return 0;
fail:
    apctlResetDns();
    return ret;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001A68);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003230);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003784);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003358);
#endif

#if FW_VERSION < 250
s32 func_00001BB0(SceNetApctlCtx *ctx) {
    D_00008B34 = ctx;
    return 0;
}
#endif

#if FW_VERSION < 282
s32 func_00001BC0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001DB8_v102);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001E28);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001E14);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001E6C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000035C4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003B50);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000035E4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003644);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000036FC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000037CC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003830);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000029CC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002C78);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002DE8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002F5C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000030EC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003244);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000032E8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003464);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003600);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003780);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000038A4);

s32 func_000038E4(void) {
    return 0;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000038EC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001C54);
#endif

#if FW_VERSION < 250
void func_00001D84(SceNetApctlCtx *ctx) {
    u32 dns1[4];
    u32 dns2[4];

    if (sceNetConfigDelIfaddr(ctx) >= 0) {
        dns2[0] = 0;
        dns1[0] = 0;
        sceNetConfigSetDNS(dns1, dns2);
    }
}

void func_00001DB8(SceNetApctlCtx *ctx) {
    u32 dns1[4];
    u32 dns2[4];

    func_00005634();
    dns2[0] = 0;
    dns1[0] = 0;
    sceNetConfigSetDNS(dns1, dns2);
}

void func_00001DE8(SceNetApctlCtx *ctx) {
    u32 dns1[4];
    u32 dns2[4];

    func_00007324();
    func_00008E34();
    dns2[0] = 0;
    dns1[0] = 0;
    sceNetConfigSetDNS(dns1, dns2);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00001E20);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003974);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003B10);

void func_00003B30(s32 arg0) {
    func_0000BC08(arg0);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003B4C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003BAC);

s32 func_00003C64(void) {
    if (D_00012A0C > 0) {
        func_00009500();
        D_00012A0C = 0;
    }
    if (D_00012A10 > 0) {
        func_0000BCD8();
        D_00012A14 = 0;
        D_00012A10 = 0;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003CC8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010A70);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010A8C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003DA8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003DC4);
#endif

#if FW_VERSION < 250
void func_00003E70(s32 event, s32 arg) {
    switch (event) {
    case 0:
        if (D_00008B34->state == 3) {
            sceKernelSetEventFlag(D_00008B34->evf, 0x10);
        }
        break;
    case 1:
    case 2:
    case 3:
    case 5:
        break;
    case 4:
        D_00008B34->error = arg;
        sceKernelSetEventFlag(D_00008B34->evf, 8);
        break;
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003E70);
#endif

#if FW_VERSION < 250
void func_00003EF0(s32 event, s32 arg) {
    switch (event) {
    case 1:
        if (D_00008B34->state == 3) {
            sceKernelSetEventFlag(D_00008B34->evf, 0x10);
        }
        break;
    case 0:
    case 2:
    case 4:
        break;
    case 3:
        D_00008B34->error = arg;
        sceKernelSetEventFlag(D_00008B34->evf, 8);
        break;
    }
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003EF0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000021B8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000024D4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003A2C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003A98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000021A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000024C0);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002898);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000020D4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002408);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002818);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002BA4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002FC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002B90);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002FAC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002B04);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00002F50);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003F70);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003FDC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000040BC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000043C4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000479C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004A10);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004E18);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010ADC);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010578);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010594);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010AE0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_0016E0", D_00010AFC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000051A0);

#if FW_VERSION == 100
s32 func_00003754(SceSize args, void *argp) {
    SceNetDhcpCtx *dc = &D_00008B38;
    s32 prev = 0;
    s32 ret;

    dc->state = 0;
    dc->startTime = sceNetGetSystemClockSec();
    ret = 0x80410586;
    if (dc->startTime < 0) {
        goto end;
    }
    for (;;) {
        ret = D_00008138[dc->state](dc, prev);
        if (ret < 0) {
            break;
        }
        prev = dc->state;
        dc->state = ret;
        if (sceKernelPollSema(dc->sema, 1) == 0) {
            func_00005D14(dc, dc->state, 0);
        }
    }
end:
    if (dc->callback != NULL) {
        dc->callback(4, ret);
    }
    func_00004424(dc->ifname);
    sceKernelExitThread(0);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003754);
#endif

#if FW_VERSION < 250
void func_00005634(void) {
    SceNetDhcpCtx *dc = &D_00008B38;

    if (D_00008134 < 0) {
        return;
    }
    sceKernelSignalSema(dc->sema, 1);
    if (dc->thid >= 0) {
        sceKernelWaitThreadEnd(dc->thid, NULL);
        sceKernelDeleteThread(dc->thid);
        sceNetFreeThreadinfo(dc->thid);
    }
    if (dc->sema >= 0) {
        sceKernelDeleteSema(dc->sema);
    }
    if (dc->bpf >= 0) {
        sceNetBpfClose(dc->bpf);
    }
    if (dc->arpBpf >= 0) {
        sceNetBpfClose(dc->arpBpf);
    }
    if (dc->sock >= 0) {
        sceNetInetClose(dc->sock);
        dc->sock = -1;
    }
    func_00007504(dc, 0, sizeof(SceNetDhcpCtx));
    D_00008134 = -1;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005634);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000051E8);
#endif

#if FW_VERSION < 250
s32 func_00003908(u32 *out) {
    SceNetDhcpCtx *dc = &D_00008B38;

    if (out == NULL) {
        return 0x80410584;
    }
    if (D_00008134 < 0) {
        return 0x80410581;
    }
    out[0] = D_00008154[dc->state];
    if (dc->lease != NULL) {
        out[1] = dc->lease->unk3DC;
        if (dc->lease->unk3E8 != 0) {
            out[2] = dc->lease->unk3E8;
        }
    }
    return 0;
}

s32 func_00003978(void) {
    u32 unused[4];

    return 0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003914);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003988);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000570C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000057B4);
#endif

#if FW_VERSION < 151
s32 func_0000585C(SceNetDhcpCtx *dc) {
    s32 ret;

    ret = func_00005678(dc, 3);
    if (ret < 0) {
        return ret;
    }
    ret = sceNetBpfWrite(dc->bpf, dc->pkt, dc->pktLen);
    return (ret < dc->pktLen) ? 0x80410582 : 3;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000585C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005394);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003A18);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003C00);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003AA8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00003CD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000058B8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005984);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005B6C);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005D14);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005E00);

u16 func_00005E90(u16 *p, s32 nwords) {
    u32 sum = 0;
    u16 r;

    for (; nwords > 0; nwords--) {
        sum += *p++;
    }
    sum = (sum >> 16) + (sum & 0xFFFF);
    sum += sum >> 16;
    r = ~sum;
    if (r == 0) {
        r = 0xFFFF;
    }
    return r;
}

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000059B0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000407C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00005ED4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00006050);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004150);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004190);
#endif

#if FW_VERSION < 151
u32 func_00004270(SceNetInAddrPacked *addr) {
    u32 a = addr->s_addr;

    if ((a & 0x80000000) == 0) {
        return __builtin_allegrex_wsbw(0xFF000000);
    }
    if ((a & 0xC0000000) == 0x80000000) {
        return __builtin_allegrex_wsbw(0xFFFF0000);
    }
    return __builtin_allegrex_wsbw(0xFFFFFF00);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_000042D0);
#endif

#if FW_VERSION < 282
s32 func_00004424(const char *ifname) {
    s32 var_v0;

    var_v0 = sceNetConfigFlushRoute();
    if (var_v0 >= 0) {
        var_v0 = __builtin_allegrex_min(sceNetConfigDelIfaddr(ifname), 0);
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_00004314);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000614C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_0016E0", func_0000618C);

s32 func_00006304(s32 arg0) {
    s32 var_v0;

    var_v0 = sceNetConfigFlushRoute();
    if (var_v0 >= 0) {
        var_v0 = __builtin_allegrex_min(sceNetConfigDelIfaddr(arg0), 0);
    }
    return var_v0;
}
#endif
