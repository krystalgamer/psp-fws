/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "usb_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", sceUsbActivate);
#else
INCLUDE_ASM("nonmatchings/usb", sceUsbActivateWithCharging);

INCLUDE_ASM("nonmatchings/usb", func_00000090);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_00009520);

INCLUDE_RODATA("nonmatchings/usb", D_00009550);

INCLUDE_RODATA("nonmatchings/usb", D_00009584);

INCLUDE_RODATA("nonmatchings/usb", D_000095B4);

INCLUDE_RODATA("nonmatchings/usb", D_000095E4);

INCLUDE_RODATA("nonmatchings/usb", D_00009608);

INCLUDE_RODATA("nonmatchings/usb", D_00009630);

INCLUDE_RODATA("nonmatchings/usb", D_00009664);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbDeactivate);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usb", sceUsbWaitState);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usb", sceUsbRestart);
#endif

INCLUDE_ASM("nonmatchings/usb", func_000005E4);

#if FW_VERSION < 282
void func_00000688(void) {
    sceKernelClearEventFlag(g_usbbd.eventFlag, 0);
    sceKernelSetEventFlag(g_usbbd.eventFlag, g_usbbd.actState | g_usbbd.cableState | g_usbbd.connState);
}
#else
INCLUDE_ASM("nonmatchings/usb", func_00000688);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/usb", D_00008E30);

INCLUDE_RODATA("nonmatchings/usb", D_00008E34);

INCLUDE_RODATA("nonmatchings/usb", D_00008E54);

INCLUDE_RODATA("nonmatchings/usb", D_00008E68);

INCLUDE_RODATA("nonmatchings/usb", D_00008E80);

INCLUDE_RODATA("nonmatchings/usb", D_00008E9C);

INCLUDE_RODATA("nonmatchings/usb", D_00008EB4);

INCLUDE_RODATA("nonmatchings/usb", D_00008ECC);

INCLUDE_RODATA("nonmatchings/usb", D_00008EE0);

INCLUDE_RODATA("nonmatchings/usb", D_00008EF4);

INCLUDE_RODATA("nonmatchings/usb", D_00008F08);

INCLUDE_RODATA("nonmatchings/usb", D_00008F20);

INCLUDE_RODATA("nonmatchings/usb", D_00008F38);

INCLUDE_RODATA("nonmatchings/usb", D_00008F4C);

INCLUDE_RODATA("nonmatchings/usb", D_00008F64);

INCLUDE_RODATA("nonmatchings/usb", D_00008F78);

INCLUDE_RODATA("nonmatchings/usb", D_00008FA8);

INCLUDE_RODATA("nonmatchings/usb", D_00008FB0);

INCLUDE_RODATA("nonmatchings/usb", D_00009008);

INCLUDE_RODATA("nonmatchings/usb", D_00009018);

INCLUDE_RODATA("nonmatchings/usb", D_00009078);

INCLUDE_RODATA("nonmatchings/usb", D_0000908C);

INCLUDE_RODATA("nonmatchings/usb", D_00009104);

INCLUDE_RODATA("nonmatchings/usb", D_00009124);

INCLUDE_RODATA("nonmatchings/usb", D_00009128);

INCLUDE_RODATA("nonmatchings/usb", D_00009138);

INCLUDE_RODATA("nonmatchings/usb", D_0000917C);

INCLUDE_RODATA("nonmatchings/usb", D_00009184);

INCLUDE_RODATA("nonmatchings/usb", D_00009188);

INCLUDE_RODATA("nonmatchings/usb", D_00009194);

INCLUDE_RODATA("nonmatchings/usb", D_0000919C);

INCLUDE_RODATA("nonmatchings/usb", D_000091A0);

INCLUDE_RODATA("nonmatchings/usb", D_000091AC);

INCLUDE_RODATA("nonmatchings/usb", D_000091B4);

INCLUDE_RODATA("nonmatchings/usb", D_000091BC);

INCLUDE_RODATA("nonmatchings/usb", D_000091C8);
#endif

s32 func_000006D4(void) {
    SceUsbdDriver *drv;
    s32 ret;
    u8 cls;

    drv = g_usbbd.drivers;
    ret = 0;
    if (drv->link != NULL) {
        while (drv != NULL) {
            cls = ((u8 *)drv->descriptor)[4];
            if (cls != 0) {
                Kprintf("usbbd ERROR : %s has Device Class : 0x%02x.\nSo cannot activate with other protocol drivers\n", drv->name, cls);
                ret = -1;
                goto end;
            }
            drv = drv->link;
        }
        ret = 0;
    }
end:
    return ret;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usb", func_0000077C);
#else
INCLUDE_ASM("nonmatchings/usb", func_0000073C);
#endif

void func_000009AC(void) {
    SceUsbdDriver *drv;
    s32 base = 0;

    for (drv = g_usbbd.drivers; drv != NULL; drv = drv->link) {
        s32 i;

        drv->endpoints[0].busEndpointNumber = 0;
        for (i = 1; i < drv->numEndpoints; i++) {
            s32 n = base + drv->endpoints[i].endpointNumber;

            drv->endpoints[i].busEndpointNumber = n;
            g_usbbd.eps[n].endpoint = &drv->endpoints[i];
        }
        base += drv->numEndpoints - 1;
    }
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usb", func_00000A58);

INCLUDE_ASM("nonmatchings/usb", func_00000AF4);
#endif

#if FW_VERSION < 282
s32 func_00000A38(s32 arg0) {
    u8 buf[0x30];

    if (func_00000C90(arg0, buf) < 0) {
        return -1;
    }
    g_usbbd.unk108 = func_00000EE0(1, buf);
    if (g_usbbd.unk108 == NULL) {
        if (sceKernelDeleteFpl(g_usbbd.unk174) < 0) {
            Kprintf(D_00009550);
        }
    }
    if (g_usbbd.unkFC != NULL) {
        g_usbbd.unk100 = func_00000EE0(2, buf);
        if (g_usbbd.unk100 == NULL) {
            if (sceKernelDeleteFpl(g_usbbd.unk178) < 0) {
                Kprintf(D_00009584);
            }
            if (sceKernelDeleteFpl(g_usbbd.unk174) < 0) {
                Kprintf(D_00009550);
            }
            return -1;
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/usb", func_00000A38);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00000C90);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/usb", func_00000B14);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00000EE0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_000017B8);
#else
INCLUDE_ASM("nonmatchings/usb", func_000014DC);

INCLUDE_ASM("nonmatchings/usb", func_000016C0);
#endif

#if FW_VERSION < 201
s32 func_00001790(void) {
    u32 size;
    u8 *buf;

    size = USBBD_ALIGN64(((UsbbdConfig *)g_usbbd.unk108->desc)->wTotalLength) + 12;
    if (g_usbbd.unk100 != NULL) {
        size = USBBD_ALIGN64(((UsbbdConfig *)g_usbbd.unk108->desc)->wTotalLength) + 12
             + USBBD_ALIGN64(((UsbbdConfig *)g_usbbd.unk100->desc)->wTotalLength) + 12;
    }
    g_usbbd.unk180 = sceKernelCreateFpl("SceUsbGetDescData", 1, 0x100, size, 1, NULL);
    if (g_usbbd.unk180 < 0) {
        Kprintf("usbbd ERROR : cannot create FPL for get descriptor data\n");
        return -1;
    }
    if (sceKernelTryAllocateFpl(g_usbbd.unk180, (void **)&buf) < 0) {
        Kprintf("usbbd ERROR : cannot allocate memory for get descriptor data\n");
        if (sceKernelDeleteFpl(g_usbbd.unk180) < 0) {
            Kprintf("usbbd ERROR : cannot delete FPL for get descriptor data\n");
        }
        return -1;
    }
    g_usbbd.unk11C = buf;
    buf += usbbdAlign64(((UsbbdConfig *)g_usbbd.unk108->desc)->wTotalLength);
    if (g_usbbd.unk100 != NULL) {
        g_usbbd.unk118 = buf;
        buf += usbbdAlign64(((UsbbdConfig *)g_usbbd.unk100->desc)->wTotalLength);
    }
    g_usbbd.unk114 = buf;
    buf += 12;
    if (g_usbbd.unk100 != NULL) {
        g_usbbd.unk110 = buf;
        buf += 12;
    }
    func_0000192C(g_usbbd.unk104, g_usbbd.unk114);
    func_00001984(g_usbbd.unk108->desc, g_usbbd.unk11C);
    if (g_usbbd.unk100 != NULL) {
        func_0000192C(g_usbbd.unkFC, g_usbbd.unk110);
        func_00001984(g_usbbd.unk100->desc, g_usbbd.unk118);
    }
    sceKernelDcacheWritebackRange(g_usbbd.unk11C, size);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/usb", func_00001790);
#endif

void func_0000192C(u8 *src, u8 *dst) {
    func_000005E4(dst, src, 8);
    dst[0] = 10;
    dst[1] = 6;
    dst[8] = src[0x11];
    dst[9] = 0;
}

void func_00001984(UsbbdConfig *cfg, u8 *out) {
    UsbbdInterface *intf;
    UsbbdAltSetting *as;
    UsbbdEndpointDesc *ep;
    s32 i;
    s32 j;
    s32 k;
    u8 *p;

    p = out;
    func_000005E4(p, (u8 *)cfg, 9);
    p += 9;
    intf = cfg->interfaces;
    for (i = 0; i < cfg->bNumInterfaces; i++, intf++) {
        as = intf->settings;
        for (j = 0; j < intf->numSettings; j++, as++) {
            func_000005E4(p, (u8 *)as, 9);
            p += 9;
            if (as->extraLength != 0) {
                func_000005E4(p, as->extra, as->extraLength);
                p += as->extraLength;
            }
            ep = as->endpoints;
            for (k = 0; k < as->bNumEndpoints; k++, ep++) {
                func_000005E4(p, (u8 *)ep, 7);
                p += 7;
                if (ep->extraLength != 0) {
                    func_000005E4(p, ep->extra, ep->extraLength);
                    p += ep->extraLength;
                }
            }
        }
    }
}

#if FW_VERSION < 282
s32 func_00001AD0(void) {
    s32 ret = 0;

    switch (g_usbbd.setup.bmRequestType & 0x60) {
    case 0x00:
        ret = func_00003734(&g_usbbd.setup);
        break;
    case 0x20:
    case 0x40:
        if (func_00001B54() < 0) {
            ret = -1;
        }
        break;
    default:
        ret = -1;
        break;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/usb", func_00001AD0);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00001B54);

#if FW_VERSION < 282
void func_00001D94(void) {
    SceUsbdDriver *drv = g_usbbd.drivers;

    if (g_usbbd.connState == 2) {
        s32 recip = g_usbbd.setup.bmRequestType & 0x1F;

        for (; drv != NULL; drv = drv->link) {
            if (drv->processRequest != NULL) {
                drv->processRequest(recip, -1, &g_usbbd.setup);
            }
        }
    }
}
#else
INCLUDE_ASM("nonmatchings/usb", func_00001D94);
#endif

s32 func_00001E20(s32 ifnum, s32 alt, UsbbdConfig *cfg) {
    s32 i;
    s32 j;
    s32 k;
    UsbbdInterface *intf = cfg->interfaces;
    UsbbdAltSetting *as;
    UsbbdEndpointDesc *ep;

    for (i = 0; i < cfg->bNumInterfaces; i++, intf++) {
        as = intf->settings;
        if (as->bInterfaceNumber != ifnum) {
            continue;
        }
        if (alt < 0) {
            alt = 0;
        } else {
            for (j = 0; j < intf->numSettings; j++, as++) {
                if (as->bAlternateSetting == intf->curAlt) {
                    ep = as->endpoints;
                    for (k = 0; k < as->bNumEndpoints; k++, ep++) {
                        s32 n = ep->bEndpointAddress & 0xF;

                        func_00005B68(n);
                        func_000026E8(n);
                        func_00003A10(n);
                    }
                    break;
                }
            }
            as = intf->settings;
        }
        for (j = 0; j < intf->numSettings; j++, as++) {
            if (as->bAlternateSetting == alt) {
                intf->curAlt = alt;
                ep = as->endpoints;
                for (k = 0; k < as->bNumEndpoints; k++, ep++) {
                    if (func_000037C4(ep) < 0) {
                        return -1;
                    }
                }
                return 0;
            }
        }
    }
    return -1;
}

INCLUDE_ASM("nonmatchings/usb", func_00001FC4);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00002214);

INCLUDE_ASM("nonmatchings/usb", func_000022AC);
#endif

s32 sceUsbbdReqSend(SceUsbdDeviceReq *req) {
    s32 ret;
    s32 n;
    UsbbdEpRec *rec;
    s32 intr;

    ret = func_00003164(req);
    if (ret < 0) {
        return ret;
    }
    n = req->endpoint->busEndpointNumber;
    rec = &g_usbbd.eps[n];
    if (rec->type == 0) {
        req->isControlRequest = 1;
    }
    req->returnCode = 1;
    req->physicalAddr = __builtin_allegrex_ins((((u32)req->data >> 31) ^ 1) << 30, (u32)req->data, 0, 29);
    req->transmittedBytes = 0;
    intr = sceKernelCpuSuspendIntr();
    if (rec->tail != NULL) {
        rec->tail->next = req;
    } else {
        rec->head = req;
    }
    while (req->next != NULL) {
        req = req->next;
        if (rec->type == 0) {
            req->isControlRequest = 1;
        }
        req->transmittedBytes = 0;
        req->physicalAddr = __builtin_allegrex_ins((((u32)req->data >> 31) ^ 1) << 30, (u32)req->data, 0, 29);
        req->returnCode = 1;
    }
    rec->tail = req;
    func_00003EB8(n);
    sceKernelCpuResumeIntr(intr);
    return 0;
}

s32 sceUsbbdReqRecv(SceUsbdDeviceReq *req) {
    s32 ret;
    s32 n;
    UsbbdEpRec *rec;
    s32 intr;

    ret = func_00003164(req);
    if (ret < 0) {
        return ret;
    }
    n = req->endpoint->busEndpointNumber;
    rec = &g_usbbd.eps[n];
    if (rec->type == 0) {
        req->isControlRequest = 1;
    }
    req->returnCode = 2;
    req->physicalAddr = __builtin_allegrex_ins((((u32)req->data >> 31) ^ 1) << 30, (u32)req->data, 0, 29);
    req->transmittedBytes = 0;
    intr = sceKernelCpuSuspendIntr();
    if (rec->tail != NULL) {
        rec->tail->next = req;
    } else {
        rec->head = req;
    }
    while (req->next != NULL) {
        req = req->next;
        if (rec->type == 0) {
            req->isControlRequest = 1;
        }
        req->transmittedBytes = 0;
        req->physicalAddr = __builtin_allegrex_ins((((u32)req->data >> 31) ^ 1) << 30, (u32)req->data, 0, 29);
        req->returnCode = 2;
    }
    rec->tail = req;
    func_00004100(n);
    sceKernelCpuResumeIntr(intr);
    return 0;
}

INCLUDE_ASM("nonmatchings/usb", sceUsbbdReqCancel);

#if FW_VERSION < 282
s32 func_000026E8(s32 n) {
    UsbbdEpRec *rec = &g_usbbd.eps[n];
    s32 intr = sceKernelCpuSuspendIntr();

#if FW_VERSION == 100
    if (g_usbbd.actState != 0x200 || g_usbbd.cableState != 0x20 || g_usbbd.connState == 4) {
#else
    if (g_usbbd.actState != 0x200 || g_usbbd.cableState != 0x20 || g_usbbd.connState == 4
        || g_usbbd.unkE4 == 0x20) {
#endif
        while (rec->head != NULL) {
            func_00002808(rec, -2);
        }
    } else if (rec->head != NULL) {
        if (func_00004280(n, -2) != 0) {
            sceKernelCpuResumeIntr(intr);
            return 0x80243006;
        }
        while (rec->head != NULL) {
            func_00002808(rec, -2);
        }
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#else
s32 func_000026E8(s32 n) {
    UsbbdEpRec *rec = &g_usbbd.eps[n];
    s32 intr = sceKernelCpuSuspendIntr();

    if (g_usbbd.actState != 0x200 || g_usbbd.cableState != 0x20 || g_usbbd.connState == 4
        || g_usbbd.unkE4 == 0x20) {
        while (rec->head != NULL) {
            func_00002808(rec, -2);
        }
    } else if (rec->head != NULL) {
        if (func_00004510(n, -2) != 0) {
            sceKernelCpuResumeIntr(intr);
            return 0x80243006;
        }
        while (rec->head != NULL) {
            func_00002808(rec, -2);
        }
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION < 282
void func_00002808(UsbbdEpRec *rec, s32 status) {
    SceUsbdDeviceReq *req = rec->head;
    SceUsbdDeviceReq *next;
    SceUsbdEndpoint *ep;

    if (req == NULL) {
        return;
    }
    if (req->next == NULL) {
        rec->tail = NULL;
        rec->head = NULL;
#if FW_VERSION == 100
        if (g_usbbd.actState == 0x200) {
#else
        if (g_usbbd.actState == 0x200 && g_usbbd.unkE4 != 0x20) {
#endif
            if (rec->address == 0) {
                func_00003F5C(req->endpoint->busEndpointNumber);
            } else {
                func_00003DA0(req->endpoint->busEndpointNumber);
            }
        }
        if (status == -2) {
            status = -3;
        }
    } else {
        next = req->next;
        rec->head = next;
#if FW_VERSION == 100
        if (g_usbbd.actState == 0x200) {
#else
        if (g_usbbd.actState == 0x200 && g_usbbd.unkE4 != 0x20) {
#endif
            if (status != -2) {
                if (next->returnCode == 2) {
                    func_00004100(req->endpoint->busEndpointNumber);
                } else {
                    func_00003EB8(req->endpoint->busEndpointNumber);
                }
            }
        }
    }
    req->returnCode = status;
    ep = req->endpoint;
    ep->transmittedBytes += req->transmittedBytes;
    req->next = NULL;
    if (req->onComplete != NULL) {
        req->onComplete(req);
    }
}
#else
void func_00002808(UsbbdEpRec *rec, s32 status) {
    SceUsbdDeviceReq *req = rec->head;
    SceUsbdDeviceReq *next;
    SceUsbdEndpoint *ep;

    if (req == NULL) {
        return;
    }
    if (req->next == NULL) {
        rec->tail = NULL;
        rec->head = NULL;
        if (g_usbbd.actState == 0x200 && g_usbbd.unkE4 != 0x20) {
            if (rec->address == 0) {
                func_000041FC(req->endpoint->busEndpointNumber);
            } else {
                func_00004050(req->endpoint->busEndpointNumber);
            }
        }
        if (status == -2) {
            status = -3;
        }
    } else {
        next = req->next;
        rec->head = next;
        if (g_usbbd.actState == 0x200 && g_usbbd.unkE4 != 0x20) {
            if (status != -2) {
                if (next->returnCode == 2) {
                    func_00004100(req->endpoint->busEndpointNumber);
                } else {
                    func_00003EB8(req->endpoint->busEndpointNumber);
                }
            }
        }
    }
    req->returnCode = status;
    ep = req->endpoint;
    ep->transmittedBytes += req->transmittedBytes;
    req->next = NULL;
    if (req->onComplete != NULL) {
        req->onComplete(req);
    }
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usb", func_00002854);

INCLUDE_ASM("nonmatchings/usb", func_00002928);

INCLUDE_ASM("nonmatchings/usb", module_stop);

s32 module_reboot_phase(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 2:
        sceKernelWaitSema(D_000094F0, 1, NULL);
        break;
    case 1:
        sceKernelSignalSema(D_000094F0, 1);
        break;
    }
    return 0;
}
#else
INCLUDE_RODATA("nonmatchings/usb", D_00009A20);
#endif

INCLUDE_RODATA("nonmatchings/usb", D_00009A3C);

#if FW_VERSION < 282
s32 func_0000293C(s32 size, void *args) {
    s32 ret;

    g_usbbd.drivers = NULL;
    g_usbbd.speed = -1;
    g_usbbd.actState = 0x100;
    g_usbbd.cableState = 0x10;
    g_usbbd.numInterfaces = 0;
    g_usbbd.numEndpoints = 1;
    g_usbbd.connState = 1;
    g_usbbd.eps[0].endpoint = &g_usbbd.ep0;
    g_usbbd.eps[0].address = 0xFF;
    g_usbbd.unk120 = 0;
    g_usbbd.unk124 = 0;
    g_usbbd.unk128 = 0;
    g_usbbd.ep0.busEndpointNumber = 0;
    g_usbbd.ep0.endpointNumber = 0;
    g_usbbd.ep0.transmittedBytes = 0;
    g_usbbd.eps[0].type = 0;
    g_usbbd.eps[0].tail = NULL;
    g_usbbd.eps[0].head = NULL;
    ret = sceKernelCreateEventFlag(D_00009A3C, 0x201, 0, NULL);
    if (ret < 0) {
        Kprintf("usbbd ERROR : Cannot create event flag\n", ret);
        return ret;
    }
    g_usbbd.eventFlag = ret;
    func_00000688();
    ret = func_0000574C();
    if (ret < 0) {
        if (sceKernelDeleteEventFlag(g_usbbd.eventFlag) < 0) {
            Kprintf(D_00009A6C);
        }
        return ret;
    }
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/usb", func_0000293C);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_00009A6C);
#endif

#if FW_VERSION < 282
s32 func_00002A48(s32 size, void *args) {
    if (g_usbbd.drivers != NULL) {
        Kprintf("usbbd ERROR : bus driver is used by protocol drivers\n");
        return 0x80243006;
    }
    func_00005A70();
    if (sceKernelDeleteEventFlag(g_usbbd.eventFlag) < 0) {
        Kprintf(D_00009A6C);
    }
    g_usbbd.unkE4 = 0x20;
    g_usbbd.actState = 0x100;
    g_usbbd.cableState = 0x10;
    g_usbbd.connState = 1;
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/usb", func_00002A48);
#endif

#if FW_VERSION < 271
s32 module_stop(void) {
    s32 ret;
    u32 timeout = 1000000;

    ret = sceKernelWaitSema(g_usbbd.sema, 1, &timeout);
    if (ret < 0) {
        Kprintf("usbbd ERROR : Exit() wait semaphore : 0x%08x\n", ret);
        return 1;
    }
    if (g_usbbd.started == 1) {
        Kprintf("usbbd ERROR : bus driver is not stopped\n");
        sceKernelSignalSema(g_usbbd.sema, 1);
        return 1;
    }
    func_00008A40();
    func_00005B10();
    ret = sceKernelDeleteSema(g_usbbd.sema);
    if (ret < 0) {
        Kprintf(D_00009B28, ret);
    }
    g_usbbd.sema = 0;
    return 0;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usb", module_stop);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_00009B28);
#endif

#if FW_VERSION < 282
s32 module_reboot_before(void) {
    struct {
        s32 size;
        char name[0x2C];
    } info;
    s32 ret;

    if (g_usbbd.started == 1) {
        if (g_usbbd.actState == 0x200) {
            sceUsbDeactivate();
        }
        info.size = 0x30;
        while (sceUsbGetDrvList(1, &info, 1) > 0) {
            ret = sceUsbStop(info.name, 0, NULL);
            if (ret < 0) {
                Kprintf("usbbd ERROR : Cannot stop %s : 0x%08x\n", info.name, ret);
                break;
            }
        }
        ret = sceUsbStop("USBBusDriver", 0, NULL);
        if (ret < 0) {
            Kprintf("usbbd ERROR : Cannot stop %s : 0x%08x\n", "USBBusDriver", ret);
        }
    }
    ret = sceKernelDeleteSema(g_usbbd.sema);
    if (ret < 0) {
        Kprintf(D_00009B28, ret);
    }
    g_usbbd.sema = 0;
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/usb", module_reboot_before);
#endif

s32 sceUsbGetState(void) {
    return g_usbbd.actState | g_usbbd.cableState | g_usbbd.connState;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceUsbWaitState(u32 arg0, s32 arg1, void *arg2) {
    return func_00002E4C((s32) arg0, arg1, (s32) arg2, 0);
}

s32 sceUsbWaitStateCB(u32 arg0, s32 arg1, void *arg2) {
    return func_00002E4C((s32) arg0, arg1, (s32) arg2, 1);
}
#endif

#if FW_VERSION >= 282
s32 sceUsbActivate(u32 arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000090((s32) arg0, 0);
    setK1(temp_s0);
    return temp_v0;
}

s32 sceUsbWaitState(u32 arg0, s32 arg1, void *arg2) {
    return func_00002F64((s32) arg0, arg1, (s32) arg2, 0);
}

s32 sceUsbWaitStateCB(u32 arg0, s32 arg1, void *arg2) {
    return func_00002F64((s32) arg0, arg1, (s32) arg2, 1);
}
#else
s32 sceUsbWaitCancel(void) {
    u32 oldK1;

    if (g_usbbd.started == 0) {
        Kprintf(D_00009608);
        return 0x80243007;
    }
    oldK1 = shiftK1();
    sceKernelCancelEventFlag(g_usbbd.eventFlag, g_usbbd.actState | g_usbbd.cableState | g_usbbd.connState, NULL);
    setK1(oldK1);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", sceUsbWaitCancel);
#endif

s32 func_00002DC8(u8 *desc) {
    s32 i;

    for (i = 0; i < desc[4]; i++) {
        if (func_00001E20(i, -1, desc) < 0) {
            return -1;
        }
    }
    return 0;
}

#if FW_VERSION < 300
s32 sceUsbbdReqCancelAll(SceUsbdEndpoint *ep) {
    if (ep == NULL) {
        Kprintf(D_00009A20);
        return 0x80243002;
    }
    if (ep->busEndpointNumber == 0) {
        Kprintf("usbbd ERROR : Cannot cancel request of EP0\n");
        return 0x80243002;
    }
    return func_000026E8(ep->busEndpointNumber);
}
#else
INCLUDE_ASM("nonmatchings/usb", sceUsbbdReqCancelAll);
#endif

s32 func_00002E80(s32 n) {
    UsbbdEpRec *rec = &g_usbbd.eps[n];
    s32 intr = sceKernelCpuSuspendIntr();

    while (rec->head != NULL) {
        func_00002808(rec, -2);
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}

#if (FW_VERSION >= 102 && FW_VERSION < 150) || FW_VERSION == 271
INCLUDE_ASM("nonmatchings/usb", module_start);
#endif

#if FW_VERSION >= 300
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(D_00009A3C, 1U, 1, 1, NULL);
    var_v0 = 1;
    if (temp_v0 >= 0) {
        D_000094F0 = temp_v0;
        func_00005CC0();
        func_00008A30();
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(D_00009A3C, 1U, 1, 1, NULL);
    if (temp_v0 >= 0) {
        D_0000AD2C = temp_v0;
        func_00005B6C();
        func_00008A24();
        var_v0 = 0;
    } else {
        Kprintf("usbbd ERROR : Cannot create semaphore : 0x%08x\n", temp_v0);
        var_v0 = 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(D_00009A3C, 1U, 1, 1, NULL);
    if (temp_v0 >= 0) {
        g_usbbd.sema = temp_v0;
        func_00005B6C();
        func_00008A24();
        var_v0 = 0;
    } else {
        Kprintf("usbbd ERROR : Cannot create semaphore : 0x%08x\n", temp_v0);
        var_v0 = 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00002E4C);
#endif

#if FW_VERSION == 100
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(D_00009A3C, 1U, 1, 1, NULL);
    if (temp_v0 >= 0) {
        g_usbbd.sema = temp_v0;
        func_00005AF0();
        func_00008A24();
        var_v0 = 0;
    } else {
        Kprintf("usbbd ERROR : Cannot create semaphore : 0x%08x\n", temp_v0);
        var_v0 = 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
s32 func_00003164(SceUsbdDeviceReq *req) {
    s32 n;
    s32 ret;

#if FW_VERSION == 100
    if (g_usbbd.actState != 0x200 || g_usbbd.cableState != 0x20 || g_usbbd.connState == 4) {
#else
    if (g_usbbd.actState != 0x200 || g_usbbd.cableState != 0x20 || g_usbbd.connState == 4
        || g_usbbd.unkE4 == 0x20) {
#endif
        return 0x80243007;
    }
    ret = 0x80243002;
    if (req == NULL) {
        return 0x80243002;
    }
    if (__builtin_allegrex_ext((u32)req->data, 27, 2) != 1
        || ((0x35 >> __builtin_allegrex_ext((u32)req->data, 29, 3)) & 1) == 0) {
        Kprintf("usbbd ERROR : Not DDR address 0x%p\n", req->data);
        return ret;
    }
    n = req->endpoint->busEndpointNumber;
    do {
        if (n != req->endpoint->busEndpointNumber) {
            return 0x80243002;
        }
        if (req->returnCode > 0) {
            return 0x80243001;
        }
        if (req->size == 0 && req->isControlRequest == 0) {
            return ret;
        }
        req = req->next;
    } while (req != NULL);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00003164);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_000030D4);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/usb", func_0000305C);
#endif

#if FW_VERSION == 282
s32 module_start(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceKernelCreateSema(D_00009A3C, 1U, 1, 1, NULL);
    if (temp_v0 >= 0) {
        D_0000AFB0 = temp_v0;
        func_00005CC0();
        func_00008A30();
        var_v0 = 0;
    } else {
        Kprintf("usbbd ERROR : Cannot create semaphore : 0x%08x\n", temp_v0);
        var_v0 = 1;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00002F64);

INCLUDE_ASM("nonmatchings/usb", func_00003164);

INCLUDE_ASM("nonmatchings/usb", func_00003258);
#endif

#if FW_VERSION >= 300
void func_00003198(void) {
    sceSysregUsbClkEnable(9);
    sceSysregUsbBusClockEnable();
    func_00008AA8();
    func_00008ADC();
}
#endif

s32 func_000033F8(void) {
    SceUsbdDriver *drv;
    s32 i;

    for (i = 0; i < 9; i++) {
        g_usbbdHw.unk168[i].unk4 = 0;
    }
    for (drv = g_usbbd.drivers; drv != NULL; drv = drv->link) {
        if (drv->descriptorHi != NULL) {
            if (func_00003490(drv, drv->descriptorHi, drv->configHi) < 0) {
                return -1;
            }
        }
        if (func_00003490(drv, drv->descriptor, drv->config) < 0) {
            return -1;
        }
    }
    return 0;
}

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_00009D20);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00003490);

#if FW_VERSION >= 102 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_000034D8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_000036A0);
#endif

#if FW_VERSION < 201
s32 func_00003734(SceUsbdDeviceRequest *req) {
    switch (req->bRequest) {
    case 6:
        return func_00001FC4();
    case 0:
    case 1:
    case 3:
    case 5:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        Kprintf("usbbd ERROR : standard request 0x%x is handled by hardware only\n", req->bRequest);
    default:
        func_00001D94();
        return -1;
    }
}
#else
INCLUDE_ASM("nonmatchings/usb", func_00003734);
#endif

INCLUDE_ASM("nonmatchings/usb", func_000037C4);

INCLUDE_ASM("nonmatchings/usb", func_00003A10);

INCLUDE_ASM("nonmatchings/usb", func_00003C34);

void func_00003E5C(void) {
    s32 i;

    for (i = 0; i < g_usbbd.numEndpoints; i++) {
        if (g_usbbd.eps[i].address != 0x80) {
            ((volatile u32 *)0xBD800200)[i * 8] |= 0x80;
        }
    }
}

INCLUDE_ASM("nonmatchings/usb", func_00003EB8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00003DA0);

INCLUDE_ASM("nonmatchings/usb", func_00004100);
#endif

#if FW_VERSION < 271
void func_00003F5C(s32 n) {
    UsbbdHwEp *ep = &g_usbbdHw.eps[n];

    if (ep->flags & 1) {
        ep->flags &= ~8;
        ((volatile u32 *)0xBD800200)[n * 8] |= 0x80;
        ep->flags &= ~1;
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/usb", func_00003F5C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00004050);

INCLUDE_ASM("nonmatchings/usb", func_00004100);

INCLUDE_ASM("nonmatchings/usb", func_000041FC);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00004258);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00004280);

INCLUDE_ASM("nonmatchings/usb", func_000044AC);
#else
INCLUDE_ASM("nonmatchings/usb", func_00004510);

INCLUDE_ASM("nonmatchings/usb", func_00004714);
#endif

INCLUDE_ASM("nonmatchings/usb", func_000048A4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00004908);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usb", func_000047AC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_000049D0);
#endif

s32 func_00004E94(UsbbdHwEp *ep) {
    s32 n = ep->rec->endpoint->busEndpointNumber;
    u32 sts = *(volatile u32 *)(0xBD800004 + n * 32);
    u32 ctl = *(volatile u32 *)(0xBD800000 + n * 32);

    if ((sts & 0x680) == 0) {
        Kprintf("usbbd ERROR : EP%d IN field is not set\n", n);
        ep->unk20 = 0;
    } else {
        if ((*ep->unk10 >> 30) != 2) {
            return 500;
        }
        if (ctl & 8) {
            return 500;
        }
        if (((*(volatile u32 *)0xBD800414 >> n) & 1) == 0) {
            ep->unk20 = 0;
            func_0000526C(n);
        }
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/usb", func_00004F58);

INCLUDE_ASM("nonmatchings/usb", func_00005084);

INCLUDE_ASM("nonmatchings/usb", func_0000526C);

INCLUDE_ASM("nonmatchings/usb", func_00005400);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_00009FE8);
#endif

INCLUDE_ASM("nonmatchings/usb", func_0000574C);

#if FW_VERSION < 201
void func_00005870(void) {
    if (sceKernelDeleteFpl(g_usbbdHw.fpl) < 0) {
        Kprintf(D_00009D20);
    }
    sceSysregUsbBusClockDisable();
#if FW_VERSION == 100
    sceSysregUsbClkDisable(1);
#else
    sceSysregUsbClkDisable(9);
#endif
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00005870);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00005AB0);
#endif

#if FW_VERSION >= 300
void func_0000581C(void) {
    func_00008B28();
    sceSysregUsbBusClockDisable();
    sceSysregUsbClkDisable(9);
}
#endif

#if FW_VERSION < 201
void func_00005B1C(void) {
#if FW_VERSION == 100
    sceSysregUsbResetEnable();
#endif
    sceSysregUsbResetDisable();
    if (sceSysregUsbQueryIntr() & 4) {
        sceSysregUsbAcquireIntr(4);
    }
    __asm__ __volatile__("sync");
    sceKernelEnableIntr(0x39);
}
#else
void func_00005B1C(void) {
    sceSysregUsbResetDisable();
    if (sceSysregUsbQueryIntr() & 4) {
        sceSysregUsbAcquireIntr(4);
    }
    __asm__ __volatile__("sync");
    sceKernelEnableIntr(0x39);
}
#endif

#if FW_VERSION == 100
void func_00005914(void) {
    if (g_usbbdHw.alarm > 0) {
        sceKernelCancelAlarm(g_usbbdHw.alarm);
        g_usbbdHw.alarm = -1;
    }
    sceKernelDisableIntr(0x1A);
    sceKernelDisableIntr(0x39);
    sceKernelDisableIntr(0x38);
    if (g_usbbd.cableState == 0x20) {
        *(volatile u32 *)0xBD800404 |= 0x400;
    }
    sceSysreg_driver_A46E9CA8();
}
#endif

void func_00005B68(s32 n) {
    UsbbdHwEp *ep = &g_usbbdHw.eps[n];

    ep->flags = 0;
    ep->rec->address = 0xFF;
    ep->unkC = 0;
}

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A174);

s32 sceUsbbdClearFIFO(SceUsbdEndpoint *ep) {
    if (ep == NULL) {
        Kprintf(D_0000A174);
        return 0x80243002;
    }
    if (ep->busEndpointNumber == 0) {
        Kprintf("usbbd ERROR : Cannot clear FIFO of EP0\n");
        return 0x80243002;
    }
    return func_00003A10(ep->busEndpointNumber);
}
#else
INCLUDE_ASM("nonmatchings/usb", sceUsbbdClearFIFO);
#endif

#if FW_VERSION < 300
s32 sceUsbbdStall(SceUsbdEndpoint *ep) {
    if (ep == NULL) {
        Kprintf(D_0000A174);
        return 0x80243002;
    }
    if (ep->busEndpointNumber == 0) {
        Kprintf("usbbd ERROR : Cannot stall EP0\n");
        return 0x80243002;
    }
    return func_00003C34(ep->busEndpointNumber);
}
#else
INCLUDE_ASM("nonmatchings/usb", sceUsbbdStall);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00005A70(void) {
    sceKernelPowerLock(0);
    sceKernelDisableIntr(0x3B);
    sceKernelDisableIntr(0x3A);
    sceSysregUsbIoDisable();
    sceSysregUsbBusClockDisable();
    sceSysregUsbClkDisable(9);
    func_0000756C();
    sceKernelPowerUnlock(0);
    sceKernelReleaseIntrHandler(0x38);
    sceKernelReleaseIntrHandler(0x39);
    sceKernelReleaseIntrHandler(0x3B);
    sceKernelReleaseIntrHandler(0x3A);
    sceKernelReleaseIntrHandler(0x1A);
    func_00008BFC();
    return 0;
}
#endif

#if FW_VERSION == 271
s32 func_00005BA0(void) {
    D_0000AFF0 = 0x3D090;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00005A70(void) {
    sceKernelPowerLock(0);
    sceKernelDisableIntr(0x3B);
    sceKernelDisableIntr(0x3A);
    sceSysregUsbIoDisable();
    sceSysregUsbBusClockDisable();
    sceSysregUsbClkDisable(9);
    func_0000756C();
    sceKernelPowerUnlock(0);
    sceKernelReleaseIntrHandler(0x38);
    sceKernelReleaseIntrHandler(0x39);
    sceKernelReleaseIntrHandler(0x3B);
    sceKernelReleaseIntrHandler(0x3A);
    sceKernelReleaseIntrHandler(0x1A);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/usb", func_00005A70);
#endif

#if FW_VERSION == 100
s32 func_00005A70(void) {
    sceKernelPowerLock(0);
    sceKernelDisableIntr(0x3B);
    sceKernelDisableIntr(0x3A);
    sceSysregUsbIoDisable();
    sceSysregUsbBusClockDisable();
    sceSysregUsbClkDisable(1);
    func_0000756C();
    sceKernelPowerUnlock(0);
    sceKernelReleaseIntrHandler(0x38);
    sceKernelReleaseIntrHandler(0x39);
    sceKernelReleaseIntrHandler(0x3B);
    sceKernelReleaseIntrHandler(0x3A);
    sceKernelReleaseIntrHandler(0x1A);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00005B6C(void) {
    return 0;
}
#endif

#if FW_VERSION < 150
s32 func_00005AF0(void) {
    *(s32 *)0xBC000050 |= 0x20000;
    return 0;
}
#endif

#if FW_VERSION < 271
s32 func_00005B10(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00005C38(void) {
    sceKernelPowerLock(0);
    sceKernelDisableIntr(0x3B);
    sceKernelDisableIntr(0x3A);
    sceSysregUsbIoDisable();
    sceSysregUsbBusClockDisable();
    sceSysregUsbClkDisable(9);
    func_00007504();
    sceKernelPowerUnlock(0);
    sceKernelReleaseIntrHandler(0x38);
    sceKernelReleaseIntrHandler(0x39);
    sceKernelReleaseIntrHandler(0x3B);
    sceKernelReleaseIntrHandler(0x3A);
    sceKernelReleaseIntrHandler(0x1A);
    func_00008BD8();
    return 0;
}

s32 func_00005CC0(void) {
    return 0;
}

s32 func_00005CC8(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/usb", func_00005CD0);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/usb", D_00009FE8);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00005F58);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/usb", func_00005F00);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/usb", func_00005E7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00006290);

INCLUDE_ASM("nonmatchings/usb", func_00006358);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/usb", func_00006434);

INCLUDE_ASM("nonmatchings/usb", func_000066A0);
#endif

#if FW_VERSION < 201
void func_000061EC(void) {
    u32 m = (u16)(g_usbbdHw.unk21E | g_usbbdHw.unk220);
    s32 i;

    if (m == 0) {
        if ((g_usbbdHw.eps[0].flags >> 3) & 1) {
            *(volatile u32 *)0xBD800200 |= 0x100;
        }
    }
    for (i = 1; i < g_usbbd.numEndpoints; i++) {
        if ((g_usbbdHw.eps[i].flags >> 3) & 1) {
            if (g_usbbd.eps[i].address != 0x80) {
                if (m == 0) {
                    ((volatile u32 *)0xBD800200)[i * 8] |= 0x100;
                }
            }
        }
    }
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/usb", func_00006334);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/usb", func_000062BC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/usb", func_00006414);

INCLUDE_ASM("nonmatchings/usb", func_00006694);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/usb", func_00006B6C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/usb", func_00006B4C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00006010);

INCLUDE_ASM("nonmatchings/usb", func_00006358);

INCLUDE_ASM("nonmatchings/usb", func_00006420);

INCLUDE_ASM("nonmatchings/usb", func_00006544);

INCLUDE_ASM("nonmatchings/usb", func_000067B0);

INCLUDE_ASM("nonmatchings/usb", func_00006C28);
#endif

#if FW_VERSION < 201
s32 func_000070E8(void) {
    sceSysregUsbAcquireIntr(1);
    g_usbbd.cableState = 0x20;
    func_00000688();
    if (g_usbbd.actState == 0x200 && g_usbbd.unkE4 == 0x10) {
#if FW_VERSION == 100
        sceSysregUsbResetEnable();
#endif
        sceSysregUsbResetDisable();
        if (sceSysregUsbQueryIntr() & 4) {
            sceSysregUsbAcquireIntr(4);
        }
        __asm__ __volatile__("sync");
        sceKernelEnableIntr(0x39);
    }
    return -1;
}
#else
INCLUDE_ASM("nonmatchings/usb", func_000070E8);
#endif

INCLUDE_ASM("nonmatchings/usb", func_00007188);

#if FW_VERSION < 271
s32 func_000072A0(void) {
    sceSysregUsbAcquireIntr(4);
    if (g_usbbd.cableState != 0x10) {
        g_usbbdHw.alarm = sceKernelSetAlarm(3000, func_00005084, &g_usbbdHw);
        if (g_usbbdHw.alarm < 0) {
            Kprintf("usbbd ERROR : cannot set alarm handler\n");
        }
    }
    return -1;
}
#else
INCLUDE_ASM("nonmatchings/usb", func_000072A0);
#endif

#if FW_VERSION < 282
s32 func_0000732C(void) {
    sceSysregUsbAcquireIntr(8);
    func_00007440();
    return -1;
}

INCLUDE_ASM("nonmatchings/usb", func_00007354);

INCLUDE_ASM("nonmatchings/usb", func_00007440);
#else
s32 func_00007344(void) {
    sceSysregUsbAcquireIntr(8);
    func_00007414();
    return -1;
}

INCLUDE_ASM("nonmatchings/usb", func_0000736C);

INCLUDE_ASM("nonmatchings/usb", func_00007414);
#endif

#if FW_VERSION >= 300
void func_000071AC(void) {
    sceKernelRegisterSysEventHandler(&D_00009554);
}

s32 func_00007504(void) {
    return sceKernelUnregisterSysEventHandler(&D_00009554);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usb", func_000071F0);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A3E4);
#endif

#if FW_VERSION == 271
s32 func_0000751C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelRegisterSysEventHandler(&D_0000AD4C);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 func_0000751C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelRegisterSysEventHandler(&D_0000AD8C);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 152
s32 func_0000751C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelRegisterSysEventHandler(&D_0000AA6C);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 150
s32 func_0000751C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelRegisterSysEventHandler(&D_0000AA4C);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/usb", func_0000751C);
#endif

#if FW_VERSION == 100
s32 func_0000751C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelRegisterSysEventHandler(&D_0000AA3C);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 271
s32 func_0000756C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelUnregisterSysEventHandler(&D_0000AD4C);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 func_0000756C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelUnregisterSysEventHandler(&D_0000AD8C);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 152
s32 func_0000756C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelUnregisterSysEventHandler(&D_0000AA6C);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION == 150
s32 func_0000756C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelUnregisterSysEventHandler(&D_0000AA4C);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/usb", func_0000756C);
#endif

#if FW_VERSION == 100
s32 func_0000756C(void) {
    s32 temp_v0;

    temp_v0 = sceKernelUnregisterSysEventHandler(&D_0000AA3C);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION < 282
s32 func_000075BC(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x1000E:
        func_000076B4();
        break;
    case 0x400E:
        func_0000760C();
        break;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/usb", func_0000760C);
#endif

#if FW_VERSION == 282
s32 func_000074B4(void) {
    s32 temp_v0;

    temp_v0 = sceKernelRegisterSysEventHandler(&D_0000B014);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot register system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}

s32 func_00007504(void) {
    s32 temp_v0;

    temp_v0 = sceKernelUnregisterSysEventHandler(&D_0000B014);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot unregister system event handler : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_00007554(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0x1000E:
        func_000076B4();
        break;
    case 0x400E:
        func_000075A4();
        break;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_000075A4);
#endif

#if FW_VERSION < 150
s32 func_000076B4(void) {
    if (g_usbbd.unkE4 != 0x10) {
        sceSysregUsbAcquireIntr(sceSysregUsbQueryIntr());
        __asm__ __volatile__("sync");
        sceSysregUsbIoEnable();
        g_usbbd.unkE4 = 0x10;
        if (sceSysregUsbGetConnectStatus() != 0) {
            g_usbbd.cableState = 0x20;
        }
        func_00000688();
        sceKernelEnableIntr(0x3A);
        sceKernelEnableIntr(0x3B);
        if (g_usbbd.actState == 0x200) {
#if FW_VERSION == 100
            sceSysregUsbClkEnable(1);
#else
            sceSysregUsbClkEnable(9);
#endif
            sceSysregUsbBusClockEnable();
            if (g_usbbd.cableState == 0x20) {
                func_00005B1C();
            }
        }
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/usb", func_000076B4);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A46C);

INCLUDE_RODATA("nonmatchings/usb", D_0000A48C);

INCLUDE_RODATA("nonmatchings/usb", D_0000A4C0);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbStart);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/usb", D_0000A2B8);

INCLUDE_RODATA("nonmatchings/usb", D_0000A2E4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/usb", D_0000A2D4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/usb", D_0000A024);

INCLUDE_RODATA("nonmatchings/usb", D_0000A050);
#endif

#if FW_VERSION < 271 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/usb", D_0000A500);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/usb", D_0000A528);

INCLUDE_RODATA("nonmatchings/usb", D_0000A54C);
#endif

#if FW_VERSION < 250 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/usb", D_0000A578);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A5A4);

INCLUDE_RODATA("nonmatchings/usb", D_0000A5D4);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbStop);

INCLUDE_ASM("nonmatchings/usb", sceUsbGetDrvList);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A690);

INCLUDE_RODATA("nonmatchings/usb", D_0000A6B0);
#endif

INCLUDE_ASM("nonmatchings/usb", sceUsbGetDrvState);

SceUsbdDriver *func_00008244(SceUsbdDriver *list, const char *name) {
    while (list != NULL) {
        if (strncmp(name, list->name, strlen(list->name)) == 0) {
            return list;
        }
        list = list->link;
    }
    return list;
}

SceUsbdDriver *func_000082A4(SceUsbdDriver *list, SceUsbdDriver **prev, const char *name) {
    *prev = NULL;
    while (list != NULL) {
        if (strncmp(name, list->name, strlen(list->name)) == 0) {
            return list;
        }
        *prev = list;
        list = list->link;
    }
    return list;
}

#if FW_VERSION < 282
void *func_00008334(void *arg0, void *arg1) {
    void *temp_a0;
    void *temp_a2;
    void *var_v0;
    void *var_v1;

    var_v0 = arg0;
    if (arg0 != NULL) {
        var_v1 = M2C_FIELD(arg0, void **, 0x40);
        if (var_v1 == NULL) {
            M2C_FIELD(arg0, void **, 0x40) = arg1;
        } else {
            do {
                temp_a2 = M2C_FIELD(var_v1, void **, 0x40);
                temp_a0 = var_v1;
                var_v1 = temp_a2;
            } while (temp_a2 != NULL);
            M2C_FIELD(temp_a0, void **, 0x40) = arg1;
            var_v0 = temp_a0;
        }
    }
    M2C_FIELD(arg1, s32 *, 0x40) = 0;
    return var_v0;
}
#else
void *func_00008318(struct Unk_func_00008318_0 *arg0, struct Unk_func_00008318_1 *arg1) {
    struct Unk_func_00008318_temp_a0 *temp_a0;
    void *temp_a2;
    void *var_v0;
    struct Unk_func_00008318_temp_a0 *var_v1;

    var_v0 = arg0;
    if (arg0 != NULL) {
        var_v1 = arg0->unk40;
        if (var_v1 == NULL) {
            arg0->unk40 = arg1;
        } else {
            do {
                temp_a2 = var_v1->unk40;
                temp_a0 = var_v1;
                var_v1 = temp_a2;
            } while (temp_a2 != NULL);
            temp_a0->unk40 = arg1;
            var_v0 = temp_a0;
        }
    }
    arg1->unk40 = 0;
    return var_v0;
}
#endif

#if FW_VERSION < 282
s32 sceUsbbdRegister(SceUsbdDriver *drv) {
    u32 timeout = 1000000;
    s32 ret;

    if (drv == NULL) {
        Kprintf(D_0000A86C);
        return 0x80243002;
    }
    if (drv->name == NULL) {
        Kprintf("usbbd ERROR : need driver name\n");
        return 0x80243002;
    }
    if (drv->start == NULL || drv->stop == NULL) {
        Kprintf("usbbd ERROR : need start/stop entry\n");
        return 0x80243002;
    }
    if (drv->interface->expectNumber >= 0) {
        if (drv->interface->expectNumber + drv->interface->numInterfaces >= 9) {
            Kprintf("usbbd ERROR : interface number is over limitation\n");
            Kprintf(D_0000A7FC, drv->interface->expectNumber, drv->interface->numInterfaces, 8);
            return 0x80243002;
        }
    } else if (drv->interface->numInterfaces >= 9) {
        Kprintf(D_0000A82C, drv->interface->numInterfaces, 8);
        return 0x80243002;
    }
    ret = sceKernelWaitSema(g_usbbd.sema, 1, &timeout);
    if (ret < 0) {
        Kprintf(D_0000A7C8, ret);
        return ret;
    }
    if (func_00008244(g_usbbd.drivers, drv->name) != NULL) {
        goto dup;
    }
    if (func_00008244(g_usbbdRegistered, drv->name) != NULL) {
dup:
        Kprintf("usbbd ERROR : already registered %s\n", drv->name);
        ret = 0x80243001;
        goto end;
    }
    if (func_00008334(g_usbbdRegistered, drv) == NULL) {
        g_usbbdRegistered = drv;
    }
    ret = 0;
end:
    sceKernelSignalSema(g_usbbd.sema, 1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/usb", sceUsbbdRegister);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/usb", D_0000A7C8);

INCLUDE_RODATA("nonmatchings/usb", D_0000A7FC);

INCLUDE_RODATA("nonmatchings/usb", D_0000A82C);

INCLUDE_RODATA("nonmatchings/usb", D_0000A86C);
#endif

#if FW_VERSION < 271
s32 sceUsbbdUnregister(SceUsbdDriver *drv) {
    u32 timeout = 1000000;
    SceUsbdDriver *prev;
    SceUsbdDriver *d;
    s32 ret;

    if (drv == NULL) {
        Kprintf(D_0000A86C);
        return 0x80243002;
    }
    ret = sceKernelWaitSema(g_usbbd.sema, 1, &timeout);
    if (ret < 0) {
        Kprintf(D_0000A7C8, ret);
        return ret;
    }
    d = func_000082A4(g_usbbdRegistered, &prev, drv->name);
    if (d == NULL) {
        if (func_00008244(g_usbbd.drivers, drv->name) != NULL) {
            Kprintf("usbbd ERROR : driver is in progress\n");
            ret = 0x80243006;
        } else {
            Kprintf(D_0000A024);
            ret = 0x80243005;
        }
    } else {
        if (prev != NULL) {
            prev->link = d->link;
        } else {
            g_usbbdRegistered = d->link;
        }
        ret = 0;
    }
    sceKernelSignalSema(g_usbbd.sema, 1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/usb", sceUsbbdUnregister);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/usb", func_0000800C);

INCLUDE_ASM("nonmatchings/usb", func_00008234);
#else
INCLUDE_ASM("nonmatchings/usb", func_00008634);

INCLUDE_ASM("nonmatchings/usb", func_000088B0);
#endif

#if FW_VERSION < 282
s32 func_00008A24(void) {
    g_usbbdRegistered = 0;
    return 0;
}
#else
s32 func_00008A30(void) {
    D_0000B440 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usb", func_00008348);

INCLUDE_RODATA("nonmatchings/usb", D_0000975C);

INCLUDE_RODATA("nonmatchings/usb", D_000092AC);

INCLUDE_RODATA("nonmatchings/usb", D_00009774);

INCLUDE_ASM("nonmatchings/usb", func_0000835C);

INCLUDE_ASM("nonmatchings/usb", func_0000840C);

INCLUDE_ASM("nonmatchings/usb", func_000084B8);

INCLUDE_RODATA("nonmatchings/usb", D_000098AC);

INCLUDE_ASM("nonmatchings/usb", func_00008528);

INCLUDE_ASM("nonmatchings/usb", func_000085A4);

INCLUDE_ASM("nonmatchings/usb", func_00008B70);
#endif

#if FW_VERSION == 303
s32 func_00008318_v303(void) {
    return (D_0000B440 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 302
s32 func_00008318_v302(void) {
    return (D_0000B440 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 301
s32 func_00008318_v301(void) {
    return (D_0000B440 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 300
s32 func_00008318_v300(void) {
    return (D_0000B440 == 0) ? 0 : -1;
}
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/usb", func_00008A40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void sceUsbBus_driver_FBA2072B(void) {
    if (D_0000B1C4 != 0) {
        D_0000B1CC = 1;
    }
}

s32 sceUsbBus_driver_8A3EB5D2(void) {
    return D_0000B1CC;
}

void func_00008ACC(void) {
    D_0000B1CC = 0;
}

void sceUsbBus_driver_90B82F55(void) {
    D_0000B1C4 = 1;
}

void sceUsbBus_driver_7B87815D(void) {
    D_0000B1C4 = 0;
}

s32 sceUsbBus_driver_48CCE3C1(void) {
    return D_0000B1C8;
}

INCLUDE_ASM("nonmatchings/usb", func_00008B00);

INCLUDE_ASM("nonmatchings/usb", func_00008B4C);

INCLUDE_ASM("nonmatchings/usb", func_00008B94);

s32 func_00008BFC(void) {
    s32 temp_v0;

    temp_v0 = sceGpioSetPortMode(0x17, 2);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot finalize GPIO for USB host power supply : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 282
void sceUsbBus_driver_FBA2072B(void) {
    if (D_0000B444 != 0) {
        D_0000B44C = 1;
    }
}

s32 sceUsbBus_driver_8A3EB5D2(void) {
    return D_0000B44C;
}

void func_00008AA8(void) {
    D_0000B44C = 0;
}

void sceUsbBus_driver_90B82F55(void) {
    D_0000B444 = 1;
}

void sceUsbBus_driver_7B87815D(void) {
    D_0000B444 = 0;
}

s32 sceUsbBus_driver_48CCE3C1(void) {
    return D_0000B448;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usb", func_000086CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00008ADC);

INCLUDE_ASM("nonmatchings/usb", func_00008B28);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/usb", func_0000877C);

INCLUDE_ASM("nonmatchings/usb", func_00008BD8);

INCLUDE_ASM("nonmatchings/usb", func_00008800);

INCLUDE_ASM("nonmatchings/usb", func_0000883C);

INCLUDE_ASM("nonmatchings/usb", func_00008860);

INCLUDE_ASM("nonmatchings/usb", func_0000887C);

INCLUDE_ASM("nonmatchings/usb", func_00008898);

INCLUDE_ASM("nonmatchings/usb", func_000088A0);

INCLUDE_ASM("nonmatchings/usb", func_000088BC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/usb", D_000092A4);

INCLUDE_RODATA("nonmatchings/usb", D_000092AC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/usb", func_00008B70);

s32 func_00008BD8(void) {
    s32 temp_v0;

    temp_v0 = sceGpioSetPortMode(0x17, 2);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("usbbd ERROR : cannot finalize GPIO for USB host power supply : 0x%08x\n", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/usb", func_00008C28);

INCLUDE_RODATA("nonmatchings/usb", D_0000ADD4);

INCLUDE_ASM("nonmatchings/usb", func_00008CB4);

s32 func_00008D38(s32 arg0) {
    s32 var_v0;

    var_v0 = 0x251;
    if ((D_0000B450 == 0) || !(D_0000B450 & 1)) {
        var_v0 = arg0;
    }
    return var_v0;
}
#endif
